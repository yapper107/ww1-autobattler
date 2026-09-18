# Plan 015 step B continuation review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's step B continuation report (`.local/handoffs/015-step-b-report.md`) on fingerprint `357c4f58505ba5fe`. Verified independently: protected files intact, 65 Python tests pass, diff clean. Advisory review, not acceptance.

## Verdict

The late-binding and firing-position rulings worked: Q04 now delivers help 21 s after the request, and Q02 and Q03 start their chains (fixing at 4.8 s, the volunteered assault at 6.6 s, opposite sides with clear lanes in Q03). Two items remain, both isolated by Astra's traces:

1. **The base of fire goes silent when its target ducks.** In Q02 support establishes at 4.8 s, the suppressed durable target stops being visible, no rounds are delivered, support is declared lost at 24 s, and the assault pauses and fails at 45.9 s. Astra's reading is right: an allocated slot and a stale silhouette are not deliverable fire. The doctrinal rule is the missing piece: a base of fire that has established on a target keeps suppressive area fire on the last known position for as long as an assault on that group is in progress, at a sustained rate within its ammunition, and those delivered area rounds are the support evidence. The bounded area-fire behaviour proven in reliability fixture 27 is the mechanism to reuse.
2. **D05's capable control regressed on an unreviewed change.** Attempt 4 passed D05 with 26 of 28; the conservative recovery-height check introduced in attempt 5 altered the initial autonomous support allocation and a later casualty crossed `minStrength`. Astra flagged the choice as its own for review.

## Rulings

1. **Suppression continues on the last known position.** While a `Fixing` broadcast is in force and an assault on the group is in progress (an `Assaulting` broadcast received, or its own attack), the fixing element delivers area fire at the group's last known position at the sustained rate when no member has a visible target, lifting or shifting only on the phase-line receipt; delivered area rounds within 12 m of that position count as support evidence, and support loss is declared only when no rounds of any kind are delivered for 8 s. Ammunition and reload cycles apply as today.
2. **Revert the recovery-height change.** Initial autonomous contact allocation returns to attempt 4's behaviour; the one-gun-or-two-riflemen firing-position requirement stays. Re-run D05 unchanged; if it still fails, bisect between attempts 4 and 5 before any other change.

## Continue

Three further local attempts for Q02, Q03 and D05 under these rulings, fixtures and assertions unchanged, no distribution runs between them; then step C, step E and the step D preparation as briefed.
