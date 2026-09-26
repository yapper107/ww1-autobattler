# Animation critic pass 28 — press-entry arc repaired, contact still obscured

26 September 2026. **Female rifle reload: 6.0/10**, up from pass 27's 5.5. The specific press-entry elbow jump is visibly repaired in both views and in the actual 2.5-second capture, without a replacement female arm discontinuity found in this review. The action is more coherent, but its high feeding posture, hidden pressure and crowded pouch access remain below the fixed **8.5/10 studio-ready AAA standard**. The rejected original remains the **3/10** anchor. This is still unaccepted; no male or overall grade changes.

## Evidence and limitations

All captures are complete, native 1600×900 at 30 fps, under `/mnt/c/Users/Jordan/Documents/Codex/ArmyPrototype-GASP/Saved/Screenshots/`:

| Capture | View | Frames | Reload interval |
| --- | --- | --- | --- |
| `GaspCombat-20260926-035245` | Front, yaw 55°, height 200 cm | 0–157 | 29.025–33.025 s |
| `GaspCombat-20260926-035139` | Operating side, yaw 135°, height 160 cm | 0–157 | 29.025–33.025 s |
| `GaspCombat-20260926-035347` | Operating side, actual 2.5-second reload | 0–112 | 29.025–31.525 s |

All use `time = 28.25 + frame / 30`. Equal frame numbers across different durations are not equal action phases. Every frame was inspected in chronological sheets, with original-resolution inspection of the critical arm and contact poses. Same-view pass 27 comparisons use `034624`, `034520` and `034729`. Evidence is in `.local/critic-pass1/pass28/`, including `compare-front-entry.jpg`, `compare-side-entry.jpg` and `compare-gameplay-entry.jpg`.

**This was dense adjacent-frame inspection, not continuous video playback.** The actual-duration capture verifies sampled poses at the intended timing; it does not certify natural rhythm, continuous fluidity or every hidden contact. No external TLOU footage was reviewed. Stated implementation changes and numerical diagnostics did not determine the grade.

## The targeted repair holds

Pass 27's abrupt **80→81 (30.917→30.950 s)** elbow/shoulder change is gone in the current female captures. The elbow begins rising earlier, with intermediate sleeve and shoulder-plate orientations across approximately **77–84 (30.817–31.050 s)**. Original side 80 and 81 now show a modest successive change, rather than the previous sudden switch from the lower bent elbow to the almost horizontal sleeve. The front comparison independently confirms the same improvement.

At the actual 2.5-second duration, **58–61 (30.183–30.283 s)** likewise contains successive intermediate orientations. In particular, **59→60** no longer flattens the sleeve as abruptly as pass 27. The movement is still relatively quick, but the inspected frames describe a connected arc rather than an isolated jump.

The smoother preceding transfer survives at **69–77** in the 4-second captures and around **52–58** in gameplay. I did not find the earlier **73→74** reversal returning, or a new female torso collapse/arm disappearance elsewhere in the three sequences. This evidence concerns the female body only; it is not transferable acceptance of the male adaptation.

## Remaining priorities

1. **The feeding pose still hides the working contact and looks unnecessarily raised.** Approximately **84–105 (31.050–31.750 s)** keeps the elbow and forearm high across the chest, with a large diagonal glove over the receiver. Native front **95** shows cartridge tips but not an unambiguous thumb applying pressure; **105** still leaves the working digit buried in the glove/mechanism silhouette. From the operating side, the sleeve and cuff obscure almost all of the operation. Gameplay **61–74 (30.283–30.717 s)** retains that posture. The wrist is less folded than pass 25, but a hand hovering or resting over the mechanism remains easier to read than thumb force driving the rounds. Keep the repaired arc while finding a lower, more open elbow/wrist pose that exposes contact, compression, release and the empty hand.

2. **Pouch access still competes with the stock.** At **51–69 (29.950–30.550 s)** the glove, stock and flap/rim occupy the same visual space. Original front **54** shows the hand beneath the wooden stock with the pouch contact hidden; **67** shows the raised flap behind the glove and ammunition emerging through a crowded gap. Neither view gives a strong, clean fingertip pinch. At **79**, the descending green flap overlaps the stock area in projection. These are unresolved clearance and contact-readability targets, not proof that every projected overlap penetrates. Adjust the rifle/hand/equipment relationship enough to show where the fingers acquire and release each object while preserving the comfortable lower reach.

3. **The action still needs convincing mechanical effort, beyond a connected route.** The sequence now reaches its major poses more consistently, but the upper body mostly maintains its established bend while the hand works in a largely hidden area. The pressure interval and the bolt completion need visible cause and effect: contact should precede the force, the supported rifle should react plausibly, and release should be distinguishable from merely moving away. Verify the felt timing in continuous gameplay-speed playback after that contact is visible. This is an authoring target, not a claim that frame inspection has established how much force the current animation conveys in playback.

## Retained repairs and scope

The low pouch reach stays connected without the older shoulder-level fold. The interruption at **23→24** remains connected. The recovery at **129–135**, and gameplay **90–94**, retains the clear arm silhouette without the old isolated blue sleeve patch on the pouch. The return to the ready pose has intermediate poses and no newly identified reset.

No renewed ammunition fragments appear below the stock in the inspected **100–105** frames, and no loaded stack returns with the hand at **106–112**. The hand continues to obscure part of the feed, so this does not certify every cartridge surface. The empty rail is visibly ejected around side **121–124**, front **128–132**, and gameplay **85–88**. The empty hand then opens and recovers without a new contact-surface failure identified here.

The next concrete correction is the feeding hand and forearm silhouette, followed by the stock/pouch contact path. The grade increase reflects the rendered continuity repair only. Full-course coverage, both bodies, both weapons and continuous playback remain necessary before any overall 8.5 judgment. No implementation or asset was edited.
