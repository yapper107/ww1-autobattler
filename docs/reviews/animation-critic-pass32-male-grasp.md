# Pass 32 — independent male rifle grasp review

26 September 2026. **Provisional visual grade: 6/10. Improved from pass 30's 5.5, but not AAA studio-ready and not an 8.5.**

The bolt hand now works much closer to the mechanism, the large raised-digit gesture is substantially reduced, and ammunition stays visible beside the glove during more of the feed. Those are actual rendered improvements. However, the new hand poses produce conspicuous pointed glove shapes, the feeding contact still lacks a convincing visible press, and the wrist/forearm shaping and body support remain coarse.

## Exact evidence and limits

Reviewed the complete male captures under `/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/`:

- Front: `GaspCombat-20260926-044912`.
- Side/rear three-quarter: `GaspCombat-20260926-045015`.

Both completion flags are present. Both contain exactly the contiguous sequence `combat-0000.png`–`combat-0179.png`, and all 360 images were verified as 1600 × 900. Time is `26 + frame / 30`; the supplied reload interval is 29.025–31.525 seconds, approximately frames 91–166.

I inspected all 360 frames in chronological contact sheets, 60 additional native-pixel contact crops across both views, a full-resolution feed frame, and direct matched-frame comparisons with pass 30. Evidence sheets are in `.local/fresh-reload-critic/pass32/`; `comparison-pass30-pass32.png` makes the changed bolt hand, exposed feed, and newly pointed glove silhouette directly comparable.

This is **dense 30 Hz frame review, not continuous video-playback perception**. The grade evaluates the visible contact, pose, staging, and sampled continuity; it cannot certify gameplay-speed rhythm, recoil snap, or interruption feel. The lower body is outside the framing. The supplied original = 3 and AAA-ready continuous motion = 8.5 are the calibration anchors; the original was not newly reviewed. No implementation code, fingertip distances, stated intentions, or future repairs were used as proof of quality.

## What improved

**Bolt manipulation is materially better.** Compare side 007 in both passes: pass 30 has a very large upright C-shaped gesture above the receiver; pass 32 brings the thumb/finger cluster down beside the mechanism. The same improvement is visible across the repeated bolt cycles in 000–090 and again on recovery around 158–162. This no longer deserves the unchanged pass-30 criticism that the hand generally gestures high above the action. It still needs hand-shape and wrist cleanup.

**The feed is less hidden from the front.** Front 119–125 shows the carried cartridges more clearly, and front 127–133 exposes a narrow strip of cartridges beside the working glove where pass 30 largely covered the area. The glove is closer to a directed working pose. The side view still hides most of the press behind the forearm.

The supporting left hand remains associated with the fore-end throughout, with no new gross detachment visible. The rifle returns coherently to its stable firing silhouette around 164–166 and holds through 179. The body leans and head lowers for reload; there is no obvious whole-pose teleport in the sampled frames.

## Remaining visible blockers

| Priority | Finding and exact evidence | Action needed |
|---|---|---|
| High | **Pointed/pinched right glove silhouette.** A sharp black triangular protrusion rises from the hand/finger-base area. It is especially clear in side 105, 107, 113, 125, 130, 133, 143, 151 and 154; front 125, 130, 132 and 143 confirm it from the other angle. At side 143 it looks like a fin sticking up above the hand. Matched pass-30/pass-32 images show this is a new visible shape, not merely the character's general low-poly style. | Repair the rendered hand shape through these poses while preserving the improved compact bolt placement. The viewer needs a believable glove surface and readable fingers, not only correctly placed endpoints. I am identifying a visible deformation-like artifact, not claiming its code-level cause. |
| High | **Feeding contact remains ambiguous despite better ammunition visibility.** Front 127–138 shows cartridges peeking around the glove, but the press is still dominated by a broad glove mass. There is no clean, readable pressing-digit/stack relationship. Front 130–133 also shows a small turquoise patch on the upper glove surface, separated in the image from the exposed cartridge stack below; this needs inspection for cartridge/finger intersection. Side 130–143 hides the working contact behind the forearm. | Resolve the hand/round relationship and show a distinct seated-clip/press/finished-stack progression. The turquoise patch is a visual intersection concern, not a confirmed depth measurement. Merely exposing several cartridge tips does not finish the contact animation. |
| Medium | **Wrist and cuff shaping still breaks the arm's flow.** Side 007 and 158 show an acute hand/forearm relationship with a pointed cuff extension. Side 121 has a conspicuous angular opening/fold between cuff and hanging hand; front 121 shows the same awkward transition. The long feed pose at side 130–140 remains an almost horizontal arm bar. | Refine forearm roll, wrist angle and elbow follow-through together. Preserve the silhouette of a connected arm through pickup, press and return, including the sleeve geometry. |
| Medium | **Pickup is still partly concealed by the stock.** Front 109–119 places a broad, sometimes splayed hand across the pouch exterior and directly beneath the stock. The opening and finger entry remain difficult to separate. Ammunition is much easier to identify once it has emerged at 119–125. | Give the pickup a clearer hand path and show the fingers engaging the pouch contents. Improve separation without losing rifle support. |
| Medium | **Raised flap and stock still overlap.** The thin raised olive flap sits behind/above the stock at front 113–121. Its useful clearance remains hard to read. The available views do not establish actual penetration. | Make the opening route and stock clearance visible; do not count an invisible or occluded clearance as polished staging. |
| Medium | **Support and force remain underplayed.** The left hand consistently supports the fore-end, but during 109–143 the weapon and supporting arm still look comparatively fixed while the right arm performs the work. The general torso lean helps, yet the feed does not clearly communicate a load change through the shoulder and supporting arm. | Add restrained load response connected to the pickup/press while maintaining the good persistent support contact. |

## Pouch, ejection, and whole sequence

The pouch flap **does open**: front 111 starts the lift, 113–121 shows it raised, 123–125 shows it returning, and it is closed again by roughly 127. This is a retained success, not a missing feature. The stock continues to obscure part of that event.

The intended empty-charger event is **bolt-driven ejection**, not a hand throw; closed fingers are not inherently a fault. The working hand now stays nearer the bolt and its forward working pose is more plausible than in pass 30. The charger is airborne at approximately 152–160. The bolt-to-ejection cause remains somewhat understated behind the hand, but this is a secondary readability issue now, not a demand for an inappropriate finger flick.

The repeated shot/bolt cycles and the entry into reload follow coherent sampled paths. Their timing remains evenly staged in the frame sequence, and the body contribution is modest. I cannot responsibly call them fluid, weighty AAA motion without actually perceiving continuous playback. The final regrip is less distractingly open than pass 30, although the pointed glove shapes and cuff shaping remain visible before the firing hold settles.

## Judgment

**6/10** reflects a visible improvement in the central hand–weapon relationship, offset by a newly prominent glove-shape problem and unresolved feed/staging issues. The next meaningful step is to fix the pointed hand silhouettes while retaining the closer bolt grip, then make the feed contact legible and improve wrist/body support. An 8.5 cannot be justified by these exact images, and no AAA continuous-motion acceptance is claimed.
