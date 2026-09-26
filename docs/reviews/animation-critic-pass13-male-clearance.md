# Independent animation review — pass 13, 25 September 2026

**Male arm clearance is substantially improved, but brief collapses behind the vest remain during feed entry and withdrawal. The repair is not complete across the motion.**

| Male rifle action | Pass 12b | Pass 13 | Judgment |
| --- | ---: | ---: | --- |
| Shot/bolt | 5.0 | **5.5/10** | Visible arm connection restored; knob grasp, effort and lock/release remain rudimentary. |
| Interrupted reload | 4.5 | **5.0/10** | Most sustained arm occlusion repaired; short transition failures and weak retrieval/feed mechanics remain. |

The fixed scale remains rejected original = 3/10 and 8.5 = fluid, continuous, studio-ready AAA motion, with The Last of Us Part II as the user's gold standard. Neither action is accepted. No overall grade is raised. Prior reports and their historical scores remain intact.

## Evidence and limits

Male capture `GaspCombat-20260925-233433` is complete: 225 frames at 30 fps, time **26 + frame/30**, actual male rifle body, camera 55 degrees/height 195. Reload runs from 29.025 to 33.025. Comparisons are `231536` from pass 12b and `224811` from pass 11, with matching camera and time mapping.

Female close capture `GaspCombat-20260925-232832` is also complete: 75 frames, time **29.7 + frame/30**, width 160/focus 118. It is used only to inspect pouch shape and the visible interaction, not to regrade a full female reload. Captures are under `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/`.

I inspected chronological samples through the entire male capture, every frame of the first shot/bolt through f40, adjacent interruption frames f84–110, adjacent pickup through recovery f116–215, and original-resolution failure candidates. Same-camera three-way comparisons cover the previously decisive f16, f125, f141, f152, f184 and f200. Female review covers three-frame intervals throughout and every frame from f12–33. Local diagnostic strips are in `.local/critic-pass1/pass13/`, including `male-compare-0.jpg`, `male-compare-1.jpg`, `remaining-feed-entry.jpg` and `remaining-withdrawal.jpg`.

This is **sampled and adjacent-frame inspection, not continuous playback**. Normal-speed rhythm, subtle easing and every intervening hitch are not certified. Single-camera occlusion cannot prove an exact mesh-intersection depth. I did not watch external reference footage. Implementation changes and numerical checks receive no score credit; new finger gestures are outside these captures.

## Male clearance: real improvement, incomplete transition repair

The old sustained failure is visibly reduced. At **f16 (26.533)**, the operating forearm again has a visible blue route in front of the chest. At **f152 (31.067)**, the feed pose preserves that connection. At **f184, f190 and f200 (32.133, 32.333 and 32.667)**, recovery no longer presents a glove apparently disconnected from an arm hidden behind the entire chest block. This is clear against pass 12b from the same camera. The supporting arm also retains a readable bend and hand association in the inspected sequence.

However, selected key poses overstate the completeness of the repair. At **f141 (30.700)**, the operating forearm is clearly in front of the chest. During **f142–147 (30.733–30.900)**, it retracts and loses much of that visible route behind the vest as the wrist rotates into the feed pose. It emerges into the clearer hold around **f148–150 (30.933–31.000)**. Original-resolution f143 and f145 make this residual problem apparent.

A similar shorter loss of the arm's visible connection appears around **f175–178 (31.833–31.933)** during withdrawal, before the improved lower recovery pose is established. These are fast transitions with intermediate poses, not a claim of a one-frame whole-body reset. They still read as the arm collapsing inward and returning while the glove stays near the receiver. The exact depth needs another angle or geometry inspection; the undesirable silhouette is directly visible.

**Priority correction:** preserve clearance throughout the wrist/forearm rotation into and out of feed. Keep the elbow arc outside the torso between the now-improved key poses, then verify the entire interpolated interval. Do not accept this based only on f152 and f184.

## Shot/bolt and interruption

The first cycle retains the small recoil through **f0–4**, departure from firing grip through **f6–10**, raised operation through **f10–14**, rearward/forward stages through roughly **f14–23**, and regrip through **f24–34 (26.800–27.133)**. The torso opening and return have intermediate poses in the inspected adjacent frames; I do not see a new whole-torso or hand reset there. The restored arm connection supports **5.5**, back to the pre-regression level.

The hand still uses a largely fixed shape that obscures exact knob enclosure, pressure, lock and release. The supporting arm and body do not convey much distinct effort. The repeated operating poses remain mechanical. Restoring clearance does not bring the shot performance close to the 8.5 standard.

The actual interrupted boundary **f90→91 (29.000→29.033)** remains continuous. The hand and torso continue from the active bolt pose. Through **f94–104 (29.133–29.467)**, the hand still changes direction over the receiver before lowering; its mechanical purpose is unclear. This is one interruption phase, not general validation of every possible request time.

## Pickup, feed and recovery

The pickup arc remains coherent through **f119–141 (29.967–30.700)**. The elbow is visible outside the torso and follows the lifting glove instead of recreating the earlier sweep/reversal. The hand nevertheless masks the pouch opening, and a distinct item grasp and clearance are not established. Better arm routing cannot resolve that missing action.

After the entry defect, **f150–164 (31.000–31.467)** is a long held-looking feed interval. Ammunition lowers through roughly **f160–172 (31.333–31.733)**, with no return of the old gross receiver gap. Finger pressure, seating and release remain indistinct, and the supporting arm/gun show little response. Withdrawal then passes through the residual inward arm collapse described above.

The lower recovery through **f180–200 (32.000–32.667)** is materially clearer than pass 12b. Close/lock/release is still difficult to distinguish from a generic wrist movement over the receiver. Grip recovery and aim return through **f202–212 (32.733–33.067)** remain continuous in the inspected adjacent frames. The final sampled aim is stable. The improved long sections justify **5.0**, while the remaining transition and mechanical failures prevent transferring the female pass-12 grade of 5.5.

## Female pouch close-up

The pouch bodies retain stable shapes during the inspected arm motion; I do not see gross arm-driven stretching, spikes or collapse. This is a limited positive observation about garment deformation, not acceptance of retrieval. Without a matching earlier close view, it is not a quantified before/after judgment.

The close view makes the unresolved interaction clearer. At local **f16–23 (30.233–30.467)**, the strip is visible below the glove against the still-closed pouch flap/front face. It then rises in front of that surface through **f24–27 (30.500–30.600)**. No visible opening access or finger closure establishes how it was retrieved. Stable pouch skin does not supply a usable opening or grasp. There is no female motion-grade increase from this diagnostic.

The next pass should complete male clearance through both feed transitions, then establish actual pouch access, item grip, feed pressure and release. Preserve the continuous interruption and improved arm routing. Any new hand articulation needs its own rendered review, followed by normal-speed playback and broader body/action coverage before changing the overall judgment.
