# Fable review: injury capability during accepted execution

Actual response from **Claude Fable5.1 (`claude-fable-5-1`)**,16 September2026, existing subscription project session. Evidence: `20260915T214529-87d1b3b4`. [Request008](../plans/008-injury-capability-review-request.md). Fable read the checkout and returned this review without editing source. Required corrections, **not promotion approval**.

---

I have what I need; no further reads are required. The 7/116 trace settles the main question.

## Verdict

Candidate75's guard is sound on knowledge boundaries and task identity, but it does not cover the case it was built for. The window only runs while a receipt matches the current generation, and the cited removal in layout 7 seed 116 happens inside the transport gap after a generation change, when no matching receipt can exist. A second gap retires sheltering wounded members in 4.5s while healthy ones are retained for 20s. Both need a small correction before progress receipts add value. Progress receipts are preferable to visual-only renewal, and the progress metric should be the soldier's own remaining path length, not straight-line distance.

## Trace-supported finding (`historical-candidate68/battle-116-1789533029980192811`)

- 69.30: two `method_slot_replaced` entries bump generations for 13 and 14; new orders 143/144 issued (`trace.jsonl:3178-3184`).
- 70.05: orders received. 70.15: leader 8 learns both are wounded (`events.jsonl:1262-1263`).
- 70.55: `method_roles_replaced` and HOLD orders (`trace.jsonl:3271-3273`). The leader's newest receipts for 13 and 14 are still tasks 134/135 (`trace.jsonl:3298, 3315`); receipts for 143/144 arrive only at 72.8 (`trace.jsonl:3318-3320`).
- Under candidate75 line 428-430, `matching` is false at 70.55 because `r.id!=p.expected[index]` and the generation differs, so `continuing` is false and line 473 removes them exactly as before. Both members were also "Interrupted: shelter" under fire from 35 and 37, so even a matching receipt would show no progress within the window.

## Findings

1. **Window keyed on the wrong event** (`CognitiveSim.cpp:460-471`). It should be keyed on injury knowledge plus assignment change, not on receipt matching. Any generation bump (slot replacement at 480-481 and 492, stage advance at 562, recon swap) creates a 1.5s to 2s gap during which a wounded mover is retired. This is the 7/116 mechanism.
2. **Countdown runs during temporary interruption.** A wounded member with `Interrupted: shelter` or `Passage` cannot show progress, so it is retired after 4.5s. A healthy member in the same state is retained until the 20s persistent-safety rule. The window should pause for Shelter and Passage, bounded by the existing `safetySince` and stage deadline. Reload should still count down so fixture 41 retires.
3. **Retired member ordered to a stale hold.** `CognitiveOrders` line 701 sends non-movers to `p.holds[index]`, last written by `holdMovers()` at Prepare entry. At 70.55 the HOLD went to a position from an earlier stage. On retirement, set `p.holds[index]` to the last known position (`at`) so a wounded member is not ordered back across ground it already crossed.
4. **No hidden information.** `KnowsWounded` is the leader's received flag or own understood health (`CommandSim.cpp:70`), relayed only by the wounded soldier's self-report (`CommandSim.cpp:556`). Distance uses the ally sighting or the receipt position. Physics uses true health for speed (`BattleSim.cpp:855`) while the planner uses understood health (`TacticalRouteSim.cpp:25`); that split is correct.
5. **Task identity is preserved.** No reissue, generation unchanged, existing deadlines win. Removal still bumps the generation, so a stale Done cannot revive the role.
6. **Initial `injuryDistance` can be stale.** When not visual, `at` is the position of the last status change, possibly many seconds old. Progress receipts fix this; until then, initialize only from evidence newer than the injury report.
7. **Injury fields are in the state digest** (`Diagnostics.cpp:141`) **but not in the plan trace** (`CognitiveSim.cpp:110`). Add per-mover `injury_deadline` and `injury_distance` so removals can be explained from the trace.

## Smallest correction

Replace the guard with a per-member injury record independent of receipt matching:

- Start the window when `KnowsWounded` first becomes true for a current mover, or when the member's generation changes while wounded. Store `injuryDeadline`, `injuryDistance`, and `injuryEvidenceAt`.
- `continuing = time < injuryDeadline`, and the receipt used for the Failed/Superseded/inactive checks remains the matching one. A non-matching receipt never retires; it simply cannot renew.
- Renew when evidence newer than `injuryEvidenceAt` shows the remaining distance dropping by at least 0.5m. Evidence is a visual sighting or a matching receipt.
- Pause the countdown while the matching receipt is Interrupted with cause Shelter or Passage, capped by `stageStarted+executionDeadline` and the 20s safety rule. Reload counts down.
- On retirement, set `p.holds[index]=at`.

## Progress receipts

Yes, prefer them. Visual renewal needs the leader within ally sensing range with a sighting under 4s old, and the leader is usually sheltered. Receipts are the soldier's own knowledge and already travel on production transport. Spec:

- Emit only while `status==Executing` and moving, at most once per second, only when the soldier has displaced at least 0.75m since the last receipt. Do not go through `SetTaskStatus`, since its same-status guard would drop them. Increment `statusSequence` so `ReactionSim.cpp:122` accepts them. Keep id, serial, goal, execution contract, and deadline unchanged. Set `r.at=time` and `r.position` fresh. Carry no contact data, so no old observation is refreshed.
- Add `float remaining` to `TaskReceipt` with a legacy default of -1. The soldier computes it from its own execution path and cursor in `BattleSim.cpp` where the path exists, and falls back to straight-line distance when no path is held. This answers the path-versus-distance question: use path distance, computed by the mover, because corridor and connector stages can legitimately increase straight-line distance to the assigned position. Straight-line is acceptable only inside the 12m direct-clear zone of `FollowFinalApproach`.
- The leader renews on `remaining` decreasing by 0.5m, or on visual distance decreasing when `remaining<0`.
- Side effects to check: `taskRevision` at `CommandSim.cpp:587-589` will trigger squad replanning at up to 4Hz while movers advance. That is bounded but measurable; report the per-tick cost. Trace each progress receipt under a distinct kind such as `task_progress` and keep it out of gameplay.

## Acceptance tests

- **Generation gap.** Wounded mover with a fresh matching receipt; force a slot replacement, then deliver the wound report inside the next 1.5s. Assert the role is retained through the gap, the new receipt arrives, and completion follows. Control: same timing with the member unable to move retires at window end, not at the gap.
- **Sheltering wounded.** Wounded mover Interrupted by shelter for 8s, then moving. Assert retention through the interruption and renewal on movement. Control: healthy mover in the same fixture has identical retention timing.
- **Out-of-view progress.** Leader with no line of sight to the wounded mover. Assert renewal from progress receipts alone, that each receipt shows at least 0.75m displacement and at most 1Hz, and that no contact observation timestamp changes. Control with receipts disabled retires the member.
- **Path versus straight-line.** Corridor stage whose first leg moves away from the assigned position. Assert `remaining` decreases while straight-line distance increases, and the role is retained.
- **Retirement hold.** After retirement, the HOLD order position equals the last known position, not the Prepare-entry hold.
- **Fixtures 40 and 41 unchanged, plus trace parity** via `GameplayDigest` with diagnostics disabled.

Run the original nine only after these pass. Do not open seeds 2001 to 2010.
