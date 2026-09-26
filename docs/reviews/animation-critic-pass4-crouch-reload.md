# Independent focused review — pass 4, 25 September 2026

**The inspected crouch boundaries no longer show the earlier one-frame pose jump.
The reload's large hand-to-receiver gap is also visibly corrected.** These are
specific improvements, not acceptance of either complete performance. Earlier
reports and scores remain unchanged; no new overall grade is assigned from these
focused female-rifle captures. The last whole-course review remains 4.0/10.

## Evidence and method

Inspected actual rendered frames before implementation documents or code:

- `GaspCombat-20260925-205105`: complete, 135 frames, 30 fps, starts at course time
  21 s. Reviewed local f22→23 and f29→30 at full resolution; every frame f18–35;
  chronological movement samples; and every frame f96–119 during the requested
  stopping interval (local 3.2–3.967 s, absolute 24.2–24.967 s).
- `GaspCombat-20260925-205402`: complete, 123 frames, 30 fps, starts at 30 s.
  Reviewed the whole reload in chronological samples, dense crops of insertion
  and recovery, and full-resolution f40, f60 and f108. Compared with pass 3's
  retained contact images.

This is adjacent/sampled-frame inspection, **not continuous video playback**.
Neither implementation claims nor numeric checks establish the findings below.
Local strips are retained under `.local/critic-pass1/pass4/`.

## Crouch

At **f22→23 (21.733→21.767 s)** the leg and torso configuration now changes through
an intermediate pose; it no longer jumps into the earlier separated/airborne-looking
leg configuration. **f29→30 (21.967→22.0 s)** likewise continues the surrounding
movement. The coat changes shape noticeably, but that is not evidence of a new
whole-body skeletal pop. The adjacent f18–35 sequence supports this distinction.

During **f96–119 (24.2–24.967 s)**, the soldier quickly straightens and turns the
upper body, the weapon pitches up, and the pose settles into the deeper kneel.
There are intermediate poses throughout. This reads as a **fast continuous change**,
not one isolated frame jumping to a different posture. Do not label that remaining
awkwardness as the same defect that was fixed.

Remaining problems are performance and coverage: the deep stationary kneel and
higher hunched movement still do not form a convincing low-motion family; the
stop has a pronounced torso/weapon bob. The foreground wall hides important feet
and part of the lowering contact. This camera cannot certify foot planting,
sliding, or weight transfer. Keep refining the authored start/stop and body
coordination, then review the same motion without foreground occlusion and in
real time. This result applies to this female rifle test only.

Evidence: `crouch-start-0.jpg`, `crouch-start-1.jpg`, `crouch-stop-0.jpg`,
`crouch-stop-1.jpg`, and the middle-movement strips.

## Reload insertion and recovery

The conspicuous pass-3 failure—glove at the sternum while the receiver stays much
lower—is no longer the visible result. At **31.8–32.3 s (local f54–69)**, the
charger/rounds are visible between glove and receiver and move down into the gun.
At **32.4–32.7 s (f72–81)** the hand remains near the receiver. This now reads as
loading the weapon, and deserves credit. The closer camera angle helps reveal the
contact; one angle cannot certify that individual fingers and surfaces never
intersect. Preserve the narrower conclusion: the gross gap is fixed in this view.

Remaining priorities:

1. **Make the pickup and transport readable.** Around **31.2–31.5 s (f36–45)**,
   the hand hangs low near the belt, with little clearly visible pouch interaction.
   The ammunition becomes readily visible near the receiver. The complete
   storage→grasp→transport path is still not established visually. Author it with
   the actual prop and pouch present, preserving the improved insertion.
2. **Clarify the mechanical purpose of recovery.** Around **33.0–33.5 s (f90–105)**,
   the operating hand lifts from the receiver toward the face/chest and pauses
   before returning. It reads as an extra posed gesture; the close view does not
   make the associated mechanism operation clear. Review the bolt/charger action
   from its exposed side and align the wrist/finger path with the visible operation.
   Avoid adding a larger gesture solely for this camera.
3. **Refine timing and connected support.** There are still long, similar poses
   during the low reach and near-receiver manipulation. In contrast, the return
   toward aim at about **33.53–33.87 s (f106–116)** changes progressively and does
   not show a one-frame snap in the inspected samples. Keep that continuity while
   refining attention, torso response and recovery rhythm. Real-time playback is
   required to judge its fluency.

Evidence: `reload-contact-0.jpg`, `reload-contact-1.jpg`, `reload-recover-0.jpg`,
`reload-recover-1.jpg`, and the course strips.

The next useful evidence is uninterrupted close playback from both mechanism and
opposite sides, then the male rifle and the complete four-body course. These
focused clips do not revalidate the other action families or establish the 8.5
standard. No code or source assets were changed by this review.
