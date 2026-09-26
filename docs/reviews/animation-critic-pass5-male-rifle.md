# Independent male rifle review — pass 5, 25 September 2026

**Male shot/bolt: 4.0/10. Male reload: 4.5/10. Both remain unaccepted.** These use
Jordan's scale: rejected original = 3/10; 8.5 means fluid, continuous, studio-ready
motion, with The Last of Us Part II as the stated gold standard. The slightly higher
reload grade reflects a more legible complete action and visibly connected insertion,
not a numerical contact result. No overall grade is raised by this focused capture.

## Evidence and limits

Reviewed completed `GaspCombat-20260925-205632`: 243 frames at 30 fps, starts at course
26 s and reaches 34.067 s. Local frame `f` corresponds to `26 + f/30` seconds. This is
the actual male rifle body, from the supplied 65-degree/200-height camera. The female
result was not assumed to transfer. I inspected the male render itself, including
full-resolution f15 and f180, every frame f0–36 around the first shot/bolt, chronological
samples throughout the later shots and reload, dense insertion crops, and every frame
f231–242 at the ending transition.

This is **sampled and adjacent-frame review, not continuous video playback**. It can
identify visible contact and pose problems but cannot certify rhythm, easing or all
short hitches. No code or numeric checks were used to infer visual quality, and no
external TLOU2 playback is claimed. Diagnostic strips are in
`.local/critic-pass1/pass5/`.

## Shot/bolt — 4.0/10

The compact gun/shoulder recoil and recovery at **26.0–26.2 s (f0–6)** are visible,
and the support hand remains visually associated with the fore-end. The sequence
has intermediate poses rather than an obvious disconnected shot-frame switch.

The main defect is the operating performance. At **26.4–27.0 s (f12–30)**, the right
glove is held prominently by the face and shoulder, over the rear of the weapon.
The thick forearm, fist and head crowd this area; the action reads as a raised fist
near the cheek more readily than as distinct unlock, pull, push and lock operations.
The supporting arm, torso and stance spend much of the cycle in very similar poses.
Later cycles around **27.6–28.13 s (f48–64)** and **28.93–29.47 s (f88–104)** repeat
that limitation. I cannot certify visible bolt-knob contact from this camera, and
am not declaring hidden contact correct merely because the hand is nearby.

The small recoil is not itself the problem; simply increasing its amplitude would
not repair the unclear mechanism action. Evidence: `shot-0.jpg`, `bolt-0.jpg`,
`bolt-1.jpg`, and `weapon-course-1.jpg`/`weapon-course-2.jpg`.

## Reload — 4.5/10

The male render independently shows a more readable sequence: the rifle lowers,
the head follows the work, the operating arm reaches down, returns to the receiver,
and the weapon raises again. At **31.8–32.4 s (f174–192)** the visible charger/rounds
bridge hand and receiver and descend toward the gun. I do **not** see pass 3's large
sternum-to-receiver gap on this male body. The loading action is legible at gross
scale, though the forearm and glove obscure fine finger and surface relationships.

Three weaknesses keep it well below the target:

- **Pickup is not established.** Around **31.2–31.5 s (f156–165)**, the glove hangs low
  near the belt with little visible pouch interaction. The prop becomes clearly
  readable near the receiver. Show the actual grasp and transport, not only the
  low hand pose and subsequent insertion.
- **Insertion still has a long posed quality.** Several frames across
  **31.9–32.3 s (f177–189)** hold a very similar upper-body configuration. The prop
  motion helps communicate the operation, but body support and finger phrasing
  remain rudimentary. Temporal polish needs normal-speed playback, not larger sway.
- **Recovery lacks a clear mechanical purpose.** Around **33.0–33.47 s (f210–224)**,
  the operating hand lifts back toward the chest/face before returning, with little
  visibly explained operation. The subsequent return toward aim has intermediate
  poses. At **33.8–34.067 s (f234–242)** the body changes stance and facing quickly;
  adjacent frames show progression, not a single isolated teleport. The short
  ending does not establish a good handoff into the next movement sequence.

Evidence: `reload-contact-0.jpg`, `reload-contact-1.jpg`, `reload-0.jpg`,
`reload-2.jpg`, and `recovery-adjacent.jpg`.

## Next concrete authoring correction

**Re-author the bolt-hand path on the actual male body and rifle first.** Keep the
visible bolt knob and the actual glove/fingers in the authoring scene. Establish
clear contact through unlock, rearward travel, forward return and locking; then
return directly to the firing grip. Give the wrist and elbow room to perform those
phases without crowding the cheek, and let the head briefly accommodate the operation
before reacquiring the stock. Preserve the compact recoil and supporting hand.

Render one complete shot→bolt→aim from the mechanism side and this three-quarter
view at normal speed, followed by slow playback. The correction must remain credible
from both views; do not distort the hand path just to expose it in one camera.
After that, improve the reload's actual pouch pickup and explain its final hand gesture.

Earlier reports and scores are preserved. Overall acceptance still requires the
complete four-body course, including the transitions and actions absent from this
focused clip. No code or source assets were edited by this review.
