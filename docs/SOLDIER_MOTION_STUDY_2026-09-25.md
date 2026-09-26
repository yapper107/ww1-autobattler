# Soldier motion study and correction brief — 25 September 2026

Jordan rejected the 46-second armed GASP v4 review: crouch strafing, constant
forward-pointing weapons, disconnected firing/bolt actions, and vaulting. He asked
for a reference-led study of real soldiers and successful games before more visual
tuning. Prone work waits behind these problems. This document records research and
diagnosis, **not visual approval or a completed animation repair**.

## Evidence and access

Read primary museum descriptions/transcripts, animator breakdowns, DICE's published
slides, Epic's documentation and suppliers' actual clip lists. Inspected extracted
frames of our own v4 at 2.8–3.4, 22.2–22.8 and 39.9–42.3 seconds, our implementation,
and the saved component-space samples of the retargeted vault.

External video playback was **not inspected frame by frame**. Windows browser
control fails before execution with `sandboxCwd is not a local file URI`; the web
tool exposes these pages' text but does not provide playable video frames here.
The source timestamps below come from the animator's published breakdown, not
invented viewing notes. IWM's Tunisia and Battle School films explicitly report
that media is unavailable. Their catalogue descriptions establish context only.
Real-footage timing and contact measurements remain open; no precise human-motion
timings are asserted from those sources. No third-party footage/assets were copied
into the game or purchased.

## Primary references and their purpose

| Reference | Verified material | Useful comparison / limitation |
|---|---|---|
| [National Army Museum: Outbreak, Weaponry 1914](https://ww1.nam.ac.uk/videos/outbreak-weaponry-1914/) | Museum demonstration transcript covering the SMLE, charger loading and carrying its weight with a sling | Period rifle handling and equipment context; not measured motion capture. Our fantasy rifle is not automatically an exact SMLE. |
| [IWM: Section Leadership in Detail, COI 391](https://film.iwmcollections.org.uk/record/1226) | Digitised 1942 training film catalogue, rifle and Bren sections on an assault course | Priority period footage for carrying and obstacle transitions; playback still to inspect. |
| [IWM: British Advancing in Tunisia, AYY 418/4/2](https://film.iwmcollections.org.uk/record/10931) | Catalogue describes alert movement with rifles/Bren guns, then adopting firing positions | Evidence that forward-ready movement has a context; replacing every walk with muzzle-down carry would also be wrong. Film unavailable online here. |
| [IWM: Battle School Training, AYY 340/1](https://film.iwmcollections.org.uk/record/10505) | Catalogue describes wall, fence and rough-ground training in 1943 | Equipment and obstacle variety. Not a source of measured vault phases while footage is unavailable. |
| [Forgotten Weapons: England Versus Germany](https://www.forgottenweapons.com/2-gun-action-match-england-versus-germany/) | Creator's Enfield/Mauser comparison and discussion of movement, reacquisition and action differences | Reference candidates for two different bolt-action performances. Competition movement is not a substitute for period field footage; video timing unmeasured. |
| [Michal Mach: The Last of Us Part II NPC reel](https://vimeo.com/433024043) | First-party, timestamped animation breakdown | 0:27 traversal foot matching; 0:44 uneasy corner check; **0:48 crouch run through a vault**; 0:54 patrol; 1:10 weapon-specific corner checks. These are viewing targets, not claims of watched footage. |
| [DICE: Battlefield 4 layered animation](https://media.gdcvault.com/GDC2014/Presentations/Duffin_Ryan_Animation_Bootcamp_Using.pdf) | Ryan Duffin's slides, especially PDF pages 16–17 and 34–35 | Weapon/posture families with additive and override layers; warns of the exception cost of partial-arm solutions. Supports equipment-specific base performances. |
| [Epic: Game Animation Sample](https://dev.epicgames.com/documentation/en-us/unreal-engine/game-animation-sample-project-in-unreal-engine) | Animation-graph descriptions and traversal/selection functions | Contextual database selection, traversal slots, stance/rotation modes and matching back into locomotion. GASP supplies infrastructure and source movement, not our completed weapon performance. |
| [Epic: Blend nodes](https://dev.epicgames.com/documentation/en-us/unreal-engine/animation-blueprint-blend-nodes-in-unreal-engine) | Inertialization, separate layer blends and final IK ordering | Transitions can preserve outgoing motion without returning to idle. Dead Blending is still labelled experimental in this documentation; evaluate it rather than assume it fixes quality. |
| [Epic: Motion Warping](https://dev.epicgames.com/documentation/unreal-engine/motion-warping-in-unreal-engine) | Named targets and bounded montage windows | Align traversal phases with the obstacle. Warping needs an appropriate source action and cannot supply a missing landing performance. |

## Proposed performance direction

The following are **authoring decisions inferred from the research**, to be tested
on our stylized bodies. They are not universal instructions for real soldiers.

| Situation | What must read on screen | What the animation needs |
|---|---|---|
| Ordinary travel | A carried object with weight; head free to look; stock away from cheek | A relaxed armed performance, breathing and stride-driven torso motion; explicit raising/lowering transitions |
| Alert travel / covered detour | More compact posture with the weapon available, distinct from deliberate aim | Context-selected ready carry; do not infer aiming from `coveredPath` alone |
| Aimed movement | Shoulder/stock connection and stable intent while feet continue moving | Armed directional movement, independent but bounded aim, pelvis/chest coordination |
| Sprint | Weight and urgency, weapon retained close enough to control | Dedicated loaded sprint and deceleration; rifle and MG need different body effort |
| Crouch lateral movement | Alternating support and a coherent low body silhouette | Preserve source knee bend and hip movement; stance-specific torso, starts, stops and reversals |
| Rifle firing and bolt cycle | One connected upper-body performance with readable recoil, hand release, mechanism interaction and recovery | An authored action with grip/contact curves and body response; event-aligned shot, continuous transitions |
| Reload | Weapon supported while the free hand and prop travel through a believable path | Correct reload type for this weapon, visible retrieval/insertion/recovery, authored fingers and elbows |
| Vault | Preparation, supported weight transfer, clearance, descent and landing recovery | Appropriate armed full-body source, selected for approach/obstacle/equipment, then bounded warping and contact cleanup |

Do not bake a universal muzzle angle or exaggerated sway into every state. Long
rifles, our larger MG, both body proportions, walls and the coat change what fits.
At gameplay camera distance, coherent weight and silhouette matter more than small
finger flourishes; both still need close inspection before acceptance.

## What is wrong in our implementation

These findings concern `041077d`, the rejected v4. File paths are repository-relative.

1. **We erase much of the movement's body performance.**
   `SoldierVisual.cpp::Present` sets `Handling.upper=1` for ordinary armed GASP
   movement. `SoldierAnimInstance.cpp` replaces spine descendants with the standing
   aim clip (partial spine weight, full arm weight). Its calibrated weapon anchor
   follows pelvis translation while discarding the source hip twist. Lower-body
   motion matching therefore cannot make the final armed pose naturally coordinated.

2. **Carry is a small offset of that aiming pose.**
   Rifle defaults lower the gun 9 cm and pitch it 12 degrees; the MG overrides use
   13 cm and 8 degrees. This is not a distinct authored carry. Increasing these
   offsets alone will still leave the shoulders, elbows and body performance wrong.

3. **Actions are target paths outside the locomotion blend stack.**
   `WeaponHandling.h` animates hand/gun offsets and the bolt. There is no complete
   authored bolt/reload body performance. Accurate wrist contact does not establish
   acceleration continuity, finger articulation, shoulder response or believable
   support. The binary `Handling` condition also removes carry offsets abruptly.
   The review switches aim on at 26 s and fires its first shot at that same instant,
   so it does not even exercise an anticipatory raise before that shot.

4. **The crouch correction can fight the captured knee direction.**
   Both native and replay leg IK use fixed component-space knee poles at
   `(±25,150,50)`. That is a concrete suspect during sideways movement and turns.
   It needs isolation against the raw retargeted pose before assigning all crouch
   defects to it. Existing tests compare two paths containing the same assumption.

5. **Our vault is not a complete armed traversal.**
   `create_gasp_actions.py` always chooses the standing neutral vault and names the
   first post-airborne root-height crossing `LandSeconds`. The saved female samples
   at source time 0.898 s put the root at −5.3 cm but the left/right foot bones at
   22.6/15.9 cm; at 1.027 s both feet are below the floor. A root-height crossing
   does not establish a planted foot and landing recovery. During the source support
   phase both hands approach the wall; we instead take the right hand for the gun.
   Our 2.2-second review traversal stretches roughly 0.9 seconds of source motion,
   and fades it away over the last 18% while restoring ordinary locomotion. This
   combination explains the hovering/unfinished action better than a grip-error score.
   The two-hand source and one-hand weapon adaptation also require different body
   balance; a hand target alone cannot author that change.

Own evidence: `art/reviews/gasp/armed-soldiers-2026-09-25.mp4` (rejected), and
`art/reviews/gasp/research/{movement,vault}.jpg` (frames inspected for this study).
Saved source probe: mirror `Saved/gasp-vault-samples.json`, generated with
`.local/animation-context/probe_vault.py`. No new animation render is claimed.

## Source coverage, before buying or importing more

| Source | Verified coverage | Decision |
|---|---|---|
| Existing GASP + our normalized legacy clips | 360 GASP motions/body; legacy armed loops; current rifle actions procedural | Retain search/replay infrastructure. Inspect raw armed clips for useful carry/stance poses before reusing them. Source count is not quality acceptance. |
| [Kubold Rifle Animset Pro clip list](https://static1.squarespace.com/static/5ba09a67b105985e9b8dcdd3/t/5bb084d0e2c483b737243a95/1538294993084/RifleAnimsetProUE4_List.pdf) | Directional crouch starts/stops, gun-down idle transition, rifle vault and climb | Candidate armed locomotion/traversal source. List does not establish a complete relaxed walking family, our bolt cycle or MG handling. Not acquired. |
| [MoCap Online Rifle](https://mocaponline.com/products/rifle) | Published lists distinguish relaxed/aimed states, directional movement and many transitions | Candidate for coordinated carrying and aim transitions. The subsequently checked full list explicitly includes standing/crouching powerful-fire chamber-cycle clips; mechanism suitability was not visually verified. Advertised file counts are not distinct performances. Not acquired. |
| [Voxel Vision Free Animation Library](https://www.fab.com/listings/481ef75b-892b-424f-a213-f1cc058c9c19) | Listing includes updated crouch, one vault and other general movement | Evaluate the actual clip when installed; the listing does not promise weapon-specific motion. Account ownership was reported by Jordan; only GASP/GASP2 projects found in Documents/Unreal Projects in this pass. |

A matched small source set is more useful than mixing many unrelated packs. Require
compatible posture, pacing, hand occupancy and entry/exit feet. A source licence
and an asset import are separate from suitability. First-person reload arms cannot
establish the whole-body motion needed for our camera.

## Correction order and review standard

1. Isolate **raw retarget → ground contacts → torso/equipment → action layer** on
   the same crouch start, lateral loop, reversal and stop. Preserve the recorded
   trajectory. Fix whichever layer first damages the motion; preserve authored
   bend planes instead of steering every knee toward a fixed point.
2. Establish one convincing rifle carry/walk/stop/raise/aim sequence. Use a coherent
   armed source performance; separate carry and aim selection. Add bounded attention
   and contact correction after transition blending. Keep deterministic replay by
   caching the relevant layer state on the same simulation-independent clock.
3. Author the standing rifle action as a connected performance, with hand-support
   and mechanism curves. Blend action entry/exit while preserving outgoing motion;
   keep the recorded shot moment exact. Apply final IK after blending. Then adapt
   the approved action to crouch and moving fire, rather than reusing a standing
   torso everywhere. Cancellation/death and short/long cycle timings need review.
4. Replace the current vault assembly with an appropriate armed source plus an
   explicit landing/recovery. Choose approach/obstacle/equipment variants, use
   contact windows for bounded root warping, and select a compatible exit step.
   Let the full body own traversal. Do not retain an aim overlay through the vault.
   Preserve authoritative start/end positions and times; if source timing requires
   severe distortion, choose a different performance instead of hiding it with IK.
5. Review rifle and MG on both bodies in **short continuous clips** from side,
   three-quarter and gameplay views. Show ordinary speed first, then slow playback.
   Include carry→aim→fire→bolt→aim→carry; crouch lateral reversal; and approach→vault
   →landing→walk. Check foot sliding, body/gun momentum, stock/grips, wall clearance,
   hand support and coat intersections. Numerical tests are regression checks only.

This study changes the implementation direction. A larger blend duration or a more
elaborate gun offset does not supply missing motion. External footage playback and
source-performance evaluation remain unfinished; do not call the new direction
visually validated, or the existing animation system AAA.

## Authoring decision and critic loop — later on 25 September

Jordan explicitly directed **“Make the animations ourselves.”** No further pack
acquisition or purchase follows that direction. Existing GASP movement remains the
locomotion base; our rifle/MG performances are to be authored against our own rigs,
equipment geometry and gameplay events. Earlier supplier research is background,
not the chosen implementation. One free Kevin Iglesias pack was downloaded and
previewed locally before this ruling; it is not integrated or committed.

The user requires a critic score of 8.5/10 for fluid studio-ready animation, with
the rejected original fixed at 3/10. The independent first pass scored **4.0/10**.
The exact crouch split in that pass was repaired and independently rechecked, but
other crouch boundaries remain defective. The first authored rifle pass received
focused scores **4.0 shot/bolt, 3.5 reload**, with a visible loading-hand/receiver
gap despite passing target-contact metrics. These scores are not acceptance.

Reports and evidence limits: `docs/reviews/animation-critic-pass1.md`,
`animation-critic-pass2-crouch.md`, and `animation-critic-pass3-authored-rifle.md`.
The critics inspect sequential/adjacent rendered frames; they have not watched
continuous playback through the current tool interface. No overall regrade is
claimed from the single-body close capture.
