# Plan 015 step B review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's step B report (`.local/handoffs/015-step-b-report.md`) on fingerprint `32a0c36a5ef961a4`. Verified independently: protected files intact, Python suite passes, diff clean. Advisory review, not acceptance.

## Verdict

Step A is fully accepted: the rulings applied, P04 to P07 pass, all 40 authored digests and the three trace-parity checks pass. Step B has the radio, the opportunity, join and help behaviours and the template gate in place; Q01 proves that squads given only a fight-here intent choose fire and manoeuvre themselves; all thirteen squad pairs and seven pins still pass. Q02 to Q04 fail on two defects that Astra isolated in the traces and that match the support code I read in Phase 3:

1. **A support order issued before the contact is known never binds the threat.** Gun 7 in Q02 is issued its sector at 0.05 s with no threat; the enemy is observed at 0.2 s and retained thereafter; at 11.9 s the order still carries no threat. Without a bound threat there is no suppressive fire, no `Fixing` broadcast, and the opportunity and join chains never start (Q02, Q03).
2. **Help is declared established without a usable firing position.** In Q04 the helping gun keeps its position behind a screen with no line and fires first at 85 s, 64 s after the request, while the allocator's rejections show it never found a slot with a line in range.

The fixture corrections made between attempts (persistent Occupy staging instead of transient Observe, the far idle objective set after placement, the fixing squad receiving `HelpSquad` rather than a removed directive) are accepted as fixture isolation, disclosed as such.

## Rulings

1. **Late-contact binding.** A retained Support or HelpSquad execution amends its threat when a contact inside the ordered sector becomes known, preserving stage and generation, and re-issues the gun's sector order once; trace it as `support_threat_bound`.
2. **Establishment requires a proven position.** SupportByFire and help are established only when the gun, or two riflemen of the element, hold a slot with a line to the target within weapon range; when none exists the element repositions within 60 m to such a slot before claiming establishment, and reports exhaustion if none is reachable. `Fixing` is broadcast only on establishment.

## Continue

Three further local attempts for Q02 to Q04 under these rulings, fixtures and assertions unchanged, no distribution runs between them; then step C, step E and the step D preparation as briefed.
