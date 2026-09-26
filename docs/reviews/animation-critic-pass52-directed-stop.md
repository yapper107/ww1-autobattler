# Pass 52 — directed walking-fire stop, female and male

26 September 2026. Independent rendered-frame follow-up to pass 50.

**Provisional grades for this walking-fire/stop sequence only: female 6.5/10; male 6.5/10.** Both visibly improve on the corresponding pass 50 segment. The exaggerated running step and deep braking crouch are removed, while the high firing line survives the transition. This is a successful repair of that defect. The result still falls short of the user's 8.5 anchor for fluid, well-executed AAA/TLOU2-level motion.

These are deliberately scoped grades, not a new complete-system grade. Pass 50's standing-fire and reload limitations remain outstanding. The rejected original remains the user's 3/10 anchor; the requested target is not a reason to raise a score.

## Evidence and inspection limits

I inspected every chronological frame in both new captures: **300 frames total**, followed by **60 native-resolution crops** of feet, firing brace and consecutive burst frames, and six matched pass 50/current comparisons. Both directories contain the complete, contiguous `combat-0000.png`–`combat-0149.png` sequence and `capture-complete.txt`. Time is **34 + frame/30 seconds**, ending at 38.967 seconds. The original images are 1600×900.

| Body | Current capture | Matching pass 50 reference |
|---|---|---|
| Female | [074355](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-074355) | [072920](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-072920), frames 240–389 |
| Male | [074449](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-074449) | [073042](/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/GaspCombat-20260926-073042), frames 240–389 |

Current frame `f` corresponds to pass 50 full-body frame `f + 240`. The parent reported matched cameras and unchanged weapon/action keys. My findings concern the rendered poses, not that implementation claim. I did not inspect animation source for this judgment, consult another critic's score, or use the intermediate 073822 course or later 074544 course to certify this revision.

The tools expose still images. Chronological sheets and native crops let me inspect pose continuity and contact evidence, but they do **not** provide actual normal-speed continuous-video perception. These provisional judgments are not AAA acceptance or a substitute for the user's playback review. Hidden stock, palm and ground-contact surfaces remain unverified where the view cannot resolve them.

## What changed visibly

At **36.5 seconds**, pass 50 had a raised, running-like leg position with a pronounced forward body inclination. The current frame instead shows an ordinary walking support leg and a modest trailing swing. At **37.333 seconds**, the former deep crouch, with the rear knee near the ground, is replaced by a normal-height step. This is clear on both meshes: [female 36.5 comparison](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-50vs52-0075.jpg), [male 36.5 comparison](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-50vs52-0075.jpg), [female 37.333 comparison](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-50vs52-0100.jpg), [male 37.333 comparison](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-50vs52-0100.jpg).

Across frames **68–119 (36.267–37.967)**, each character continues through leg swing, placement and progressively smaller finishing steps. There is no replacement dive, knee collapse or large pose reset. Frames **120–149 (38–38.967)** settle into a stable upright hold. The original deep dip followed by a large rise is no longer part of that path. Native foot evidence: [female approach](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-feet-a-native.jpg), [male approach](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-feet-a-native.jpg), [female final plants](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-feet-c-native.jpg), [male final plants](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-feet-c-native.jpg).

The gun stays high and close to a level target line during the walk and finish. The hands remain visually associated with their grip areas, without an obvious exposed separation or snapping regrip. The result reads consistently as moving while aiming. The stock interface is partly hidden; a precise shoulder-contact verdict would exceed this camera's evidence. [Female brace samples](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-brace-native.jpg), [male brace samples](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-brace-native.jpg).

## Same criteria for both bodies

| Criterion | Female | Male |
|---|---|---|
| Feet and support | Readable alternating support and finishing placement; no recurrence of the deep brake | Same improvement; no recurrence of the deep brake |
| Weight acceptance | Modest knee flex and body settling; the final transfer remains quite even and understated | Same restrained transfer and fairly upright finish |
| Continuous paths | Leg, trunk and weapon paths remain coherent through the stop | Equally coherent; no distinct additional transition fault |
| Firing line and brace | High line retained through foot changes; visible grips remain associated | High line retained; visible grips remain associated |
| Firing force and recovery | Small gun/arm changes are present, but the trunk and stance contribute little readable absorption | Same limitation; the broader body does not establish a stronger force response |
| Provisional scoped grade | **6.5/10** | **6.5/10** |

The equal grades reflect the same visible strengths and limits, not a requirement for identical scores. Differences in silhouette and clothing do not establish a meaningful performance advantage here. I am not claiming measured foot sliding or penetration: the tracking view, soft shadows and intermittent overlap do not establish either precisely.

## Highest-impact next changes

1. **Connect the firing impulse to the body.** Keep the successful aim line, but make the shoulder/trunk accept the gun's impulse and show a small, distinct return before the next action. Consecutive frames 6–11 show gun/arm changes with relatively little broader response: [female](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-burst-native.jpg), [male](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-burst-native.jpg). The need is coordinated force, not simply a larger muzzle kick.

2. **Give the final plant a clearer body-weight arrival.** The finishing feet now follow a credible path, but frames 96–124 mostly bring the pose smoothly upright. A modest pelvis arrival over the accepting leg, related knee compression and slightly delayed chest/weapon settle would make the stop feel carried by the soldier's mass. Preserve the repaired walking scale; do not bring back the large braking crouch. [Female finishing step](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/female-feet-b-native.jpg), [male finishing step](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop/male-feet-b-native.jpg).

For a complete-performance improvement, the prior reload load-transfer and operation-emphasis work remains relevant. This five-second follow-up contains no reload and provides no new evidence of its repair; see [pass 50](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/docs/reviews/animation-critic-pass50-mg-performance.md).

All chronological sheets and native derivatives are local inspection artifacts in [pass52-directed-stop](/home/jchan/.codex/worktrees/gasp-soldier-animation/ww1-autobattler/.local/animation-review/pass52-directed-stop). No source or animation edits were made for this review.
