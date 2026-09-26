# Independent animation review — pass 16, 25 September 2026

**Female rifle reload remains 5.5/10, unaccepted. The large loaded strip no longer follows the withdrawing hand back above the gun, but a one-frame cartridge remnant still appears below the stock. Seating is improved, not cleanly resolved.**

The fixed scale remains rejected original = 3/10; 8.5 means fluid, continuous, studio-ready AAA motion, with The Last of Us Part II as the user's gold standard. No overall score, male grade or broader acceptance changes. Earlier reports remain intact.

## Evidence and limits

Completed capture `GaspCombat-20260925-235127`: 158 frames at 30 fps, actual female rifle body, camera 55 degrees/height 200, width 160/focus 118. Zero-based time is **28.25 + frame/30**; reload runs from 29.025 to 33.025 seconds. The comparison is pass 14's `233902`, with matching view and time mapping. Captures are under `C:/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/`.

I inspected chronological samples throughout the capture, every adjacent frame from f58–120 covering transport, alignment, seating and withdrawal, two-frame intervals f121–143, and original-resolution f101, f106, f107 and f110. Direct same-frame comparisons include approach, feed and every frame f105–110. Evidence is in `.local/critic-pass1/pass16/`, especially `feed-1.jpg` and `feed-compare-1.jpg`.

This is **sampled and adjacent-frame inspection, not continuous video playback**. It cannot certify normal-speed rhythm, hidden receiver internals, subtle easing or every intervening hitch. I did not watch external reference footage. The grade comes from the render, not the proposed attachment or masking implementation.

## What is visibly repaired

Through **f97–104 (31.483–31.717)**, the exposed cyan cartridge tips reduce near the receiver as the hand descends. The visible progression is compatible with ammunition going into the feed instead of the whole loaded strip remaining exposed beneath the glove. The hand and receiver obscure much of the contact, so this view does not prove the internal seating geometry.

The decisive comparison is withdrawal. In the earlier capture, the loaded strip is prominent below the gun at f105–107 and returns upward across it at f108–109. In the new capture, **f105–106 (31.750–31.783)** no longer show that full strip below the stock. At **f108–110 (31.850–31.917)**, the hand opens and lifts without bringing the large loaded strip back above the receiver. Adjacent inspection through f120 shows no later repeat of that large returning-load behavior. This is a real partial correction.

## Residual cartridge artifact

**Frame 107 (31.817 seconds) still shows several yellow cartridge fragments with cyan tips below the wooden stock, against the pouch on the right side of the image.** They are absent at f106 and disappear at f108. This is visible in the original image, not only an enlarged or resampled contact sheet.

The remnant appears separated from the intended top-of-receiver loading action. It prevents a clean claim that the ammunition stays seated throughout withdrawal. The exact cause is not established by these images: it could involve prop state, visibility masking or temporal rendering. Whatever its source, the rendered result contains a one-frame ammunition leak. Checking only f105 or f110 would miss it.

I do not see a separate conspicuous whole-strip cutoff at the receiver top in the inspected sequence. Occlusion makes the exact disappearance hard to assess, however, so this is not a certification of an artifact-free mask boundary. The specific below-stock f107 remnant is the actionable failure.

## Hand contact and remaining mechanism limits

The glove still forms a large angular loop during feed. Through approximately **f99–106 (31.550–31.783)**, its lower fingers descend in front of and below the near side of the wooden stock. The result does not clearly express a thumb pad pressing cartridges into the receiver from above. The silhouette looks like the hand draping around the gun body. The matching old/new frames show this as an existing contact problem, not a new hand-path regression introduced by the ammunition repair.

This single oblique view cannot establish whether the glove actually penetrates the weapon or merely wraps around its near side. I found no new, separately identifiable hand/receiver intersection in the compared frames; I also cannot accept the existing contact as physically convincing. A mechanism-side view must show the pressing pad, feed opening and remaining fingers simultaneously.

After f108, the hand reads as empty during withdrawal, but a distinct empty-clip removal or release is still not visible. The gun and supporting arm provide little response to loading pressure, and the feed retains its held-looking timing. The unresolved pouch-front pickup remains evident during f59–68; this pass supplies no pouch-flap repair. The male interruption clearance failure is outside this female capture and remains open.

## Next concrete check

Remove the below-stock remnant at f107 and inspect every adjacent frame from f97–112 again in this same view, then from an unobstructed mechanism-side angle. Preserve the improved separation between seated ammunition and the withdrawing hand. Follow with a visible thumb-pressure/contact pass and deliberate handling of the remaining clip. The present result is suitable only as an unaccepted work-in-progress checkpoint, not an 8.5 action or a completed ammunition repair.
