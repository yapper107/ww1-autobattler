# Independent animation review — pass 12b, 25 September 2026

**The male pickup arc improves, but the operating forearm now disappears behind the chest/vest during large parts of the bolt and reload. The female result does not transfer cleanly.**

| Male rifle action | Pass 11 | Pass 12b | Judgment |
| --- | ---: | ---: | --- |
| Shot/bolt | 5.5 | **5.0/10** | Operating stages remain continuous, but the arm loses a plausible visible connection across the torso. |
| Interrupted reload | 4.5 | **4.5/10** | Better pickup routing is offset by the sustained arm/vest silhouette failure; grasp and feed remain weak. |

The fixed scale remains rejected original = 3/10 and 8.5 = fluid, continuous, studio-ready AAA motion, with The Last of Us Part II as the user's gold standard. Neither action is accepted. No overall score is raised, and no prior report or historical grade is replaced.

## Evidence and limits

New completed capture: `GaspCombat-20260925-231536`, 225 frames at 30 fps, course time **26 + frame/30**, actual male rifle body, camera 55 degrees/height 195. Reload begins at 29.025 and ends at 33.025. The direct comparison is pass 11's `GaspCombat-20260925-224811`, with the same time mapping and camera. Both are under `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/`.

I inspected chronological samples through the entire capture; every frame of the first shot/bolt through f40; adjacent interruption frames f84–110; adjacent pickup/transport frames f116–151; two-frame insertion and recovery intervals; original-resolution key frames; and same-camera comparisons at pickup, bolt and recovery. Diagnostic strips are in `.local/critic-pass1/pass12b/`. The clearest regression evidence is `male-arm-clearance-before-after.jpg`, comparing f16, f141, f152, f184, f190 and f200.

This is **sampled and adjacent-frame inspection, not continuous playback**. Normal-speed rhythm, subtle easing and every intervening hitch are not certified. A single view cannot determine the exact depth of any mesh intersection. I did not watch external reference footage. Shared source/runtime explanations and numerical contact checks receive no visual acceptance credit.

## Highest-priority regression: the arm loses its route outside the torso

During approximately **f10–28 (26.333–26.933)**, the operating glove remains near the bolt, but much of its forearm is hidden by the chest/vest. The effect is stronger through **f141–200 (30.700–32.667)** during the reload. At **f152 (31.067)**, the glove is over the receiver while the arm's connecting shape largely disappears behind the chest block. At **f184 and f190 (32.133 and 32.333)**, the upper arm descends beside the torso and the glove is visible on its opposite side, with no convincing visible forearm path between them. At **f200 (32.667)**, grip recovery still has this compressed, disconnected appearance.

The same-camera old frames show the blue forearm clearly crossing in front of the chest. This is therefore a visible regression, not an assumption based on a different camera or on the female body. The images strongly suggest a torso/vest clearance problem. They do not alone prove precisely which surfaces intersect, so the report does not claim a measured penetration depth.

This is a sustained bad pose relationship, not a new one-frame teleport. Smoothing it would leave the main defect intact. The hand can remain geometrically associated with the receiver while the complete arm is physically unconvincing.

**Next correction:** restore a continuous shoulder–elbow–wrist route outside the male chest and equipment. Move the elbow and forearm forward/outward as needed while preserving the intended glove contact; verify the complete volume and silhouette from this camera and a side view. Check bolt operation, feed and recovery, rather than adjusting only the pickup pose.

## Full first shot/bolt

The first cycle retains identifiable stages: a small initial recoil through **f0–4 (26.000–26.133)**, departure from firing grip through **f6–10**, raised operating hand through **f10–14**, rearward/forward movement through roughly **f14–23**, and lowering/regrip through **f24–34 (26.800–27.133)**. Adjacent frames show intermediate poses rather than an abrupt reset.

The raised hand remains a relatively fixed glove shape. Knob enclosure, effort during the stroke, locking and release are not clearly expressed. The supporting hand and upper body provide little differentiated response to the operation. The new hidden forearm adds a body-specific failure to these existing limitations, so the focused grade falls to **5.0** despite preserved timing stages.

## Interruption and pickup

The actual active-phase boundary **f90→91 (29.000→29.033)** remains continuous. The operating pose carries into the reload without a return to idle. Through **f94–104 (29.133–29.467)**, the hand still moves forward/down and then changes direction over the receiver before the main lowering. There are intermediate poses; the issue is an unclear mechanical purpose, not a boundary pop. This capture validates only this interruption phase.

Pickup **f119–130 (29.967–30.333)** is more composed in the new same-camera view. The elbow does not repeat the previous inward sweep around the pouch region. Through **f131–141 (30.367–30.700)**, the glove and strip rise and move toward the receiver along a coherent arc. This is a real improvement on the male itself.

However, the glove still masks the opening and overlaps the front of the pouch region. Finger closure around the item and clean clearance from an opening are not established. The strip becomes easier to follow during the lift, but transport does not prove a convincing origin or grasp. As it reaches the receiver, the arm begins losing its visible path behind the vest.

## Feed and recovery

Through **f146–164 (30.867–31.467)**, the hand/strip stays associated with the feed in a similar hooked pose. The ammunition lowers through roughly **f160–172 (31.333–31.733)**. There is no return of the former gross receiver gap, but a firm press, seat and release remains indistinct. The glove's limited articulation and the disappearing forearm both weaken the physical explanation of the action.

Withdrawal through approximately **f174–180 (31.800–32.000)** does not clearly establish the release or disposition of the remaining strip/clip. The following **f180–198 (32.000–32.600)** contains an operating hold and wrist change near the receiver, but close/lock/release remains difficult to read. The arm/vest regression is particularly conspicuous here. Grip return and raising into aim occur through **f202–212 (32.733–33.067)**, with a stable final aiming pose in the sampled ending.

The next authoring pass should first restore male arm clearance, then establish the actual pouch grasp and feed pressure/release with finger articulation and supporting-arm response. Preserve the coherent pickup arc and continuous interruption. The present body remains too held and the mechanics too ambiguous for an 8.5 judgment; normal-speed review and broader body/action coverage also remain necessary.
