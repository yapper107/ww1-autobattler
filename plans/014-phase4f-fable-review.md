# Plan 014 Phase 4f review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 4f report (`.local/handoffs/014-phase4f-report.md`) on fingerprint `01462c286da88358` and the P08 fixture and assertion in `tests/platoon_tests.h`. Verified independently: protected files intact, diff clean; native Windows lab build and tests running from this session. The user chose to continue Phase 4 without a replay review at this point. Advisory review, not acceptance.

## Verdict

All 27 existing selectors pass; the attack-by-fire-and-movement branch is chosen at 8.9 s, the fixing squad's fire establishes at 16 s, and the movers use bounding overwatch. P08 fails on two linked points that the trace pins down:

1. **The branch is not a commitment.** At 36.5 s eight seconds pass without delivery evidence, support is declared lost, and the platoon immediately re-decides "inferior without superiority", drops into bounded observation and withdraws at 85 s. A squad attack tolerates a 30 s support-recovery allowance; the platoon branch tolerates none. The Reserve directive P08 forbids is issued by that observation branch.
2. **Movers barely move while supported.** In the twenty supported seconds the three moving squads advanced 3.6 to 9.4 m. Their bound endpoints require catalogue cover facing the sector, which open ground between 90 and 50 m from the enemy rarely offers, so bounds shrink to nothing. This is the third occurrence of the catalogue-cover class of defect (formation slots in Phase 2c, rush endpoints in Phase 3b).

Astra's disagreement on Trenches seed 103 is accepted: that run shows movement-budget exhaustion, not the no-flank hold, and it is carried as its own item rather than folded into this ruling.

## Binding corrections for Phase 4g

1. **Fire-and-movement is a commitment.** Once chosen, the branch persists through support loss for a 30 s recovery allowance, during which movers pause in protected holds as the squad attack already does; only after that allowance without regained support does the platoon reconsider. Platoon superiority evidence uses a 15 s window so a reload cycle does not read as loss. Reserve stays at capacity zero for the branch's lifetime.
2. **Bound endpoints in fire-and-movement use projected generation.** As for formation slots and rushes: the point along the squad's corridor toward the sector, snapped to walkable ground, within 35 m of the overwatch element, with `Safe` from known contacts evaluated by line-block and catalogue cover preferred when within 3 m, never required. Record this as a general rule in plan 014: a moving element's endpoint is a projected point; a halted element's position is a cover slot.
3. **Diagnose the 36 s fire lapse** from the fixture trace (reload, target lost from the gun's view, or lane inhibition) and fix the cause if it is a defect; if it is a reload cycle, ruling 1 covers it.
4. **Trenches seed 103** joins the report as a separate diagnostic item for Phase 4h: movement-budget exhaustion in trench passages.

## Allowance and exit

Up to three local attempts on P08, documented, no distribution runs between them; then the full suite, the 40 digests, trace parity, and the single measured build under the Phase 4 exit. Report and stop if it fails.
