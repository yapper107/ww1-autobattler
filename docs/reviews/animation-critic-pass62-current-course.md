# Independent visual review — pass 62 current soldier course

26 September 2026. Reviewer: fresh independent Codex visual critic.

**Overall grade: 6.0/10.** A coherent, usable animation prototype with readable actions and mostly stable weapon handling. It does not reach the user's **8.5 = fluid AAA / The Last of Us Part II** anchor. The gap is principally body weight, timing and coordination, not the stylized low-poly art. The user's **3 = original bad** anchor informed the scale; I did not inspect the original in this review and do not claim a measured before/after improvement.

## Evidence and method

Authoritative capture:
`/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-085719`.

Before final grading I confirmed `capture-complete.txt`, exactly 1,470 PNG frames, and no missing index from `combat-0000.png` through `combat-1469.png`. At 30 fps this covers the 49-second course; the last sampled instant is 48.97 s.

I inspected chronological contact sheets across the complete course, ordinarily at 0.5-second intervals, then 0.2-second windows covering the turn (6.5–9.5), sprint stop (18–21), crouch (21–25.4, with 25.5 in the overview), firing (26–30), reload (30–34), moving fire (34–38), vault/landing (39.8–43.4), and death (44–48.97). I additionally inspected native-pixel crops of the male rifle firing at 0.067-second intervals, male/female MG reload and male rifle reload, the vault, and consecutive 30-fps frames of the sprint stop (19.13–19.70) and landing (42.00–42.57).

**This was dense chronological frame inspection, not continuous video playback.** It supports the pose, progression, contact and timing observations below, but cannot certify smoothness at normal playback speed, every inter-frame transition, or hidden-side finger contact. No companion capture was used; all image evidence comes from the current main render. No implementation, native hand/physics test results, or other critic's report/grade was read to infer visual quality. The four actual pairs were assessed in their displayed order: male MG, male rifle, female MG, female rifle.

Generated review sheets and native crops are local evidence in `.local/animation-critic-pass62/`. No asset or code was changed.

## What works

- Every major action is recognizable on all four soldiers. The body/weapon silhouettes remain coherent, with no gross limb explosion or persistent detached-gun appearance in the inspected locomotion views.
- Walking and running show alternating support and swing legs. The sprint visibly changes the body lean and leg action; it is not simply the standing pose translated over the ground.
- The turn uses foot adjustments and progresses into the new facing. It is not an instantaneous whole-character yaw cut.
- Crouch entry, held low stance and return to standing are readable. The weapon stays controlled during those height changes.
- Rifle and MG handling have distinct gestures. Native reload crops show the MG hand going down to the ammunition-box region and back to the weapon, while the rifle has its own receiver/belt-area hand action. This is stronger evidence than the small overview alone suggested.
- The vault includes a visible support hand on the wall, tucked legs, hand release and recovery of the weapon. Landing includes actual knee/hip compression. Death finishes in a stable grounded pose; the sampled 46.4–48.97 tail does not show an obvious continuing drift or rebound.

## Blocking issues relative to 8.5

### 1. Vault weight and landing coordination — highest priority

**40.8–42.57 s; especially frames 1236–1277.** After the support-hand phase, the soldiers spend a conspicuous span in a similar knees-up pose above/in front of the wall. Around 41.2–41.8 the movement reads as a tucked body being carried over the obstacle more than a fast transfer of weight from a planted hand into a descending landing. This is visible on both body types and both weapons.

The landing is not missing, but it is segmented. The MG native sequence shows the weapon returning to its neat two-handed carry while the feet are still descending (42.00–42.13), initial ground contact around 42.17, then the main body dip over approximately 42.23–42.47. The components exist; the coordinated impact and follow-through remain weak. Do not repair this by merely adding more crouch depth. Improve the timing and continuity of hand push-off, pelvis travel, untucking, foot contact, torso compression and weapon recovery.

### 2. Death reads as a staged sequence with a held bow

**44.4–46.4 s; frames 1332–1392.** The weapons release and drop, while the bodies remain bowed over for much of roughly 44.6–45.2. The soldiers then kneel and roll into the final side pose. The prolonged upright/bowed hold separates loss of the weapon from loss of balance, making the event feel rehearsed rather than a body losing support. The neat, broadly horizontal weapon drop strengthens that impression in this view.

The final pose itself is serviceable. Prioritize the entry: establish the impact/loss of balance, let it propagate through the torso and knees, and carry that momentum into ground contact. Avoid a long static bow followed by a second distinct collapse. This observation does not prescribe ragdoll versus authored animation.

### 3. Upper-body movement is too rigidly coupled for the desired quality

**Turn 7.5–8.9; run/sprint 13–19; moving fire 34.4–37.2.** The shoulder/arm/weapon assembly remains close to one sustained arrangement while the lower body performs much larger actions. The head, chest, pelvis and gun show limited independent lead, lag and counterbalance. Carrying a weapon appropriately restricts arm swing; the missing quality is believable torso/shoulder response, not free swinging arms.

The turn is functional and has stepping, but its rather uniform progression lacks a strong anticipatory look/chest turn followed by weighted foot placement. Moving fire likewise reads more like the firing arrangement over a marching leg cycle than a whole body managing balance and aim together. Add modest, action-specific coordination; large ornamental sway would make this worse.

### 4. Crouch foot placement is broad and mechanical

**22.0–24.4 s; frames 660–732.** The wide lateral lunge progresses into tightly crossing/tucked steps before reopening. It is readable as low movement, but the large stance changes dominate the silhouette and give it a squat/side-step exercise quality. The body stays armed throughout; the issue is how it transfers weight between these poses.

Prioritize controlled pelvis movement over the supporting foot, purposeful trailing-foot recovery and less abrupt changes in stance width. The displayed camera is insufficient for a precise world-space foot-sliding measurement, so I am not labeling this a quantified skating defect.

## Coverage notes

| Section | Visible assessment |
| --- | --- |
| 0–6.5 idle/walk/stop | Coherent carry and recognizable steps. Restrained upper body; no major visible failure. |
| 6.5–9.5 turn | Corrective steps and progressive facing are present. Needs better lead/lag and weight transfer. |
| 9.5–18 locomotion/sprint | Clear stride and lean changes. Upper-body arrangement remains comparatively fixed. |
| 18–21 sprint stop | Consecutive frames show a real final step and settling, not a single-frame snap. Braking could communicate more body mass; lower priority than vault/death. |
| 21–25.5 crouch | Entry/exit clear. Broad lunge and crossing low steps are the main visual concern. |
| 26–30 firing | Both weapon types visibly perform their firing/handling cycle. Rifle returns through a larger manipulation gesture; MG is steadier. This frontward camera cannot establish cheek/stock contact or precise sight alignment. |
| 30–34 reload | Native crops make the different hand actions legible. Fine finger placement and exact ammunition transfer remain unproven, not automatically failed. |
| 34–38 moving fire | Coherent gun orientation during stepping. Limited coordinated torso/leg response holds back fluidity. |
| 38–40 preparation | Stable transition into the obstacle setup; the appearing test obstacles are not counted as an animation defect. |
| 40–43.4 vault/landing/recovery | Complete action with support contact and compression; float-like tucked passage and segmented recovery are priority defects. |
| 43.4–49 death and rest | Stable start and final rest. The held bow and separate kneel/roll phases weaken the collapse. |

## Recommended order

1. Make vault descent/contact/recovery one weighted action.
2. Remove the held death-entry beat and preserve momentum into collapse.
3. Improve chest/head/pelvis/weapon coordination in turns and moving fire, then sprint braking.
4. Refine crouch weight transfer and stance width.

Re-review the complete current course after those changes, including normal-speed playback for a human judgment of fluidity. Additional technical contact tests would not by themselves change this visual grade. **This capture is 6.0/10; it is not visual acceptance at 8.5.**
