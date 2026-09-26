# Independent animation critique — first repair pass, 25 September 2026

**Overall: 4.0/10. Not accepted.** Jordan's rejected original remains the supplied
3/10 reference. The target is 8.5: fluid, continuous, studio-ready performance, with
The Last of Us Part II as Jordan's quality benchmark. This pass repairs some obvious
problems, particularly the vault's weapon carriage and landing, but remains far below
that standard. A smooth interpolation or an accurate wrist target does not earn a high
performance score.

## Evidence and limits

Reviewed the completed `GaspCombat-20260925-195055` capture: 1,380 PNG frames at
30 fps, covering the 46-second course. The completion marker exists. Inspected
chronological samples throughout all course sections, denser body crops, and individual
adjacent frames at the crouch start and landing. All four displayed combinations were
included: actual male and female bodies, each with rifle and MG. No mannequin was used
as a substitute. The whole course was sampled; **I did not watch continuous video
playback** through the available tools. Timing judgments below use the known frame
intervals and are correspondingly limited. I have not watched external TLOU2 footage.

I first inspected rendered evidence, including the rejected
`GaspCombat-20260925-184057` course, then read
`docs/SOLDIER_MOTION_STUDY_2026-09-25.md` and `docs/GASP_PROTOTYPE.md`.
The older close female crouch diagnostic `194020` was inspected only as diagnostic
context. It predates the newest orientation change and does not establish the result
of this pass. The older `194801` vault diagnostic was not used to grade the newest
landing. Numeric validation was not used as visual acceptance.

Local inspection strips live under `.local/critic-pass1/`; they are diagnostic artifacts,
not source assets. Timestamps below are frame index divided by 30.

## Three blockers to address first

1. **The crouch start visibly breaks continuity in one frame.** At f670→f671
   (22.333→22.367 s), the female rifle goes from the stable one-knee posture into a
   wide lateral split with both feet apparently above the floor. Subsequent frames
   pull the legs back under the body and raise it into the much taller moving posture.
   This is visible in the four-body course, not only a stale close diagnostic. The
   same broad posture mismatch affects the male body. By 23.6–24.0 s (f708–720), the
   character drops back toward the deep stationary kneel. The start cannot read as a
   weight transfer from a planted support leg. See `crouch-start-dense.jpg`,
   `crouch-female-rifle.jpg`, and `crouch-male-rifle.jpg`. First isolate the discontinuity
   at f670→671; then use compatible low idle/start/move/stop performances or author
   a real kneel-to-moving-crouch transition. Merely extending a blend over incompatible
   poses is not an acceptance solution.

2. **The weapon actions still lack a readable connected performance.** In the
   26–30 s rifle sequence, the operating hand changes position while the stance,
   support-side silhouette and most of the torso remain almost unchanged. At 30–34 s,
   the rifle reload similarly reads mainly as hand/gun offsets around the upper chest;
   ammunition retrieval, insertion, operation and reacquisition do not form a clearly
   staged full-body action at this review distance. The MG's 30–34 s reload is even
   less legible: the gun tilts and a hand moves down, but the complete reload is hard
   to distinguish from holding the weapon. This is a judgment about visible performance,
   not a claim that a reload event or contact target is absent. See
   `fire-male-rifle.jpg`, `reload-male-rifle.jpg`, and `mg-reload-detail.jpg`.
   Author and review a continuous carry→raise→shot→bolt→aim→reload→carry performance
   with visible support, body response and mechanism interaction, then adapt it to
   movement and crouch. The MG needs its own convincing handling and load response.

3. **The upper body still looks posed over the locomotion for long stretches.**
   The carried walk/run at 2–7 and 13–16 s, aimed directional travel at 9–13 s, and
   moving fire at 34–38 s have active legs but relatively invariant arm/weapon
   silhouettes. The sprint is more coordinated and has a useful downward carry, but
   the rifle and larger MG do not yet convey convincingly different mass and effort.
   At 9–13 s the forward presentation remains especially rigid through the strides.
   There is a better carry/aim distinction than in the rejected sequence; it is not
   yet a rich, intent-driven armed body performance. See `early.jpg`,
   `sprint-male-rifle.jpg`, and `late-female-rifle.jpg`. Establish one excellent armed
   walk/start/stop/raise using a coherent source performance before broadening it.
   Preserve body coordination through the equipment layer and use bounded contact
   corrections to finish it.

## Scores by action family

Scores apply to the visible course, not every possible runtime state. Similar-looking
body variants do not earn separate extra credit. These are critic judgments, not a
measured average or a statement of completion percentage.

| Family | Score /10 | Main observation |
|---|---:|---|
| Ready/carry and walking, 0–7 s | 4.0 | Distinct lowered carriage helps; upper body remains posed and transitions need closer temporal review. |
| Turns and directional/covered movement, 7–13 s | 4.5 | Leg/heading changes read, but the weapon and torso performance stays stiff and uniformly forward presented. |
| Run/sprint/deceleration, 13–21 s | 5.0 | Best sustained locomotion portion; downward sprint carriage and leg rhythm read. Equipment weight and coordinated entry/exit remain weak. |
| Crouch/move/rise, 21–26 s | 2.5 | One-frame start discontinuity and incompatible stationary/moving body heights are obvious failures. |
| Rifle aim/fire/bolt, 26–30 s | 3.5 | Mechanism-hand activity is visible, but weak whole-body phrasing and poor readability prevent convincing execution. |
| MG fire, 26–30 s | 3.5 | A held firing pose; convincing larger-weapon support and recoil behavior cannot be established here. |
| Rifle reload, 30–34 s | 3.0 | Readable as manipulation only with the chapter context; body support and the complete action need authoring. |
| MG reload, 30–34 s | 2.5 | Full reload sequence is not clearly readable at this view. Needs its own close uninterrupted inspection. |
| Moving fire, 34–38 s | 3.5 | Repeats the separation between moving legs and a mostly held weapon performance. |
| Winded, 38–40 s | 3.0 | Weak visible fatigue distinction; obstacle occlusion limits the lower-body judgment. |
| Vault and landing, 40–44 s | 5.0 | Material improvement: sideways retained gun, visible free-hand support, actual landing compression. Still a provisional frame-based grade. |
| Death/weapon drop, 44–46 s | 3.5 | Reads as a generic staged collapse; weapon descends nearly horizontally and the hunched phase holds before the knee collapse. |

Approximate overall grades by displayed combination: **male rifle 4.0, female rifle
4.0, male MG 3.5, female MG 3.5**. The shared crouch and action defects dominate.
There is no clear basis in this capture for declaring either body accepted while
rejecting the other.

## Vault and landing: credit and remaining limits

The vault no longer carries the gun overhead in the rejected manner. At approximately
40.7–41.1 s (f1221–1233), the forward lean, free-hand wall support and sideways gun
read as an obstacle action. The later descent retains an asymmetric leg pose before
meeting the ground. A compression/recovery is visible at 42.2–42.7 s (f1266–1281).
This is real visual progress.

The adjacent f1260–1271 inspection **does not show the one-frame landing pop** that
coarser sampling initially suggested. The blend is continuous at 30 Hz. Preserve
that distinction: the crouch start has direct adjacent-frame evidence of a jump;
the landing does not. The weapon returns toward its composed two-hand carry before
contact, and the whole traversal still reads as a carefully scheduled isolated
exercise. A side view is needed to judge actual body/obstacle clearance, takeoff,
hand force and fore-aft momentum. The course ends the landing in idle; it does not
prove a fluid vault→landing→walking continuation. See `landing-adjacent.jpg` and
`vault-landing-dense.jpg`.

## Additional visible concerns

- At approximately 44.4–44.8 s (f1332–1344), the released rifle stays nearly horizontal
  as it lowers toward the ground. The body then spends roughly 44.8–45.2 s in a
  very similar hunched pose before collapsing to the knees. This feels staged rather
  than a single loss-of-support event. The same general collapse is shared across
  the four soldiers. See `late-female-rifle.jpg` and `late-male-rifle.jpg`.
- The coat can obscure the hip, knee and hand relationships that most need inspection.
  Its presence should not excuse a poor body transition. Turn/sprint frames show
  substantial flaring; side views must establish whether it is plausible secondary
  motion or an intersection problem. I am not claiming specific hidden penetrations
  from this camera.
- The untextured floor and camera tracking make precise world-space foot-slip judgment
  difficult. Foot contacts need a fixed side or three-quarter camera with visible
  ground references. I have not inferred a passing foot-slip result from screenshots.

## Coverage required before an 8.5 claim

A 46-second continuous capture is useful, but this inspection and this course cannot
support AAA readiness. Required evidence still includes:

- Real-time continuous playback, then slow replay, of the latest result. Frame strips
  expose failures but cannot certify rhythm, easing, secondary motion and absence of
  all short hitches.
- Current close side and three-quarter views of **all four** body/equipment combinations,
  especially bolt/reload finger/mechanism contact, shoulder/stock connection, MG
  support, foot plants and obstacle clearance. The stale close female diagnostic is
  not a replacement.
- Crouch start/stop/reversal with compatible postures; aim transitions and action
  cancellation at varying locomotion phases; landed traversal continuing directly
  into locomotion; several approach speeds/directions and obstacle contexts.
- Gameplay-camera and actual terrain/battle transitions after the controlled course
  passes. This report does not grade battle integration, performance or replay fidelity.
- **Prone, crawl, grenade throw and dive are absent. They are unreviewed, not passing.**
  Do not call the entire planned soldier action set complete based on this course.

The next pass should fix the abrupt crouch state boundary and establish one persuasive
rifle action chain. Re-render those focused sequences on both bodies, then repeat the
complete course. No score increase is promised for implementing those changes; the
rendered result must earn it.
