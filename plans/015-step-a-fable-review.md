# Plan 015 step A review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's step A report (`.local/handoffs/015-step-a-report.md`) on fingerprint `69386129a292b240`. Verified independently: protected files intact, 65 Python tests pass, diff clean, `tools/after_action.py` present with its tests. Advisory review, not acceptance.

## Verdict

Step A is accepted subject to two test rulings. The platoon planner is reduced from 364 to 157 lines and emits only the three intents; the task tree, corridor claims, role allocation and platoon fire-control state are gone; P04 to P06 pass; the after-action tool exists and its attribution is evidence-linked rather than inferred. Astra was right to stop at P07 rather than restore a platoon flank to satisfy an assertion the plan retired.

## Rulings

1. **P07 contact control.** Replaced exactly as Astra proposed: once the commander knows the contact, each of the four available squads holds a `FightHere` directive with a known enemy; no Support, Flank, Reserve, Merge or Consolidate order, no support-squad or weapon binding, no corridor, no combat area and no lift flag; the five no-contact conditions stay. Q01 proves that the squads then choose fire and manoeuvre themselves. This is an intentional test change recorded here with the reason: the old predicate tested a contract plan 015 removed.
2. **P05 rally predicate.** Accepted: assigned areas no longer exist, so "rally inside the assigned area" cannot be asserted. The replacement is "rally inside map bounds and at least 40 m from the squad's position in the direction away from the known group", which is a meaningful withdrawal predicate rather than a vacuous one. The belief, alternation and strong-control assertions are unchanged.

## Continue

Apply the rulings, re-run P04 to P07, then the step A gates that were skipped at the stop: the 40 authored legacy and cognition digests and drills trace parity on both maps and one F1 draw. With those green, proceed to steps B, C and E and the step D preparation as briefed, each with its report and stop rule.
