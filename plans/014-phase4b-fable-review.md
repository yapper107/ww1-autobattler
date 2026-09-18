# Plan 014 Phase 4b review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 4b report (`.local/handoffs/014-phase4b-report.md`) on fingerprint `c98020b91fed4f51`. Verified independently: protected files intact, 63 Python tests pass, diff clean. Advisory review, not acceptance.

## Verdict

The commitment corrections worked: 22 of 26 selectors pass, the seven squad pairs the first platoon build had broken are recovered except one, and P05 now proves the believed ratio (0.33 by 20 s) before withdrawing. The four remaining failures are two chains, and Astra's two hypotheses for them are correct and are adopted as rulings.

1. **Transient block released the commitment (D03).** A column allocation failure at one bound is reported upward as Blocked; the platoon treats Blocked as release, assigns Fix, and the squad's bounding recovery never happens. A stage that can still recover locally is not blocked in the platoon's sense.
2. **Greedy first corridor starves the second flank (P01, P02, P03).** The first flank squad takes the best corridor; the 20 m exclusion then leaves no admissible route for the second, which falls back to Reserve, so the fixture never has two flanks, no separation sample, and no phase line.

The bare-control proximity failure in P01 (an unprotected soldier inside 18 m of the known sector) is retained as unexplained; it is to be re-examined after the pair fix, with its own trace, before any cause is named.

## Binding corrections for Phase 4c

1. **Blocked has two levels.** A squad reports `Executing` with a `recovering` note while a stage failure has a local remedy (contract to column, retry the next leg, alternate route within the corridor); it reports `Blocked` only when the drill is exhausted, with the last rejection reason, as plan 002's exhaustion rule already requires at the squad level. The platoon releases a commitment only on `Blocked`, `Done`, deactivation, or the priority exception. Trace both levels.
2. **Corridor pairs are chosen jointly.** For the flank task with capacity two, evaluate candidate route pairs (one per eligible squad) on the chosen side with lateral offsets, then on the other side, and accept the admissible pair (centrelines at least 20 m apart everywhere) with the lowest summed cost; commit both corridors together. Only when no admissible pair exists on either side does the second squad take Reserve. The claim exclusion stays for later assignments.
3. **Re-run** D03, P01, P02 and P03 unchanged, then re-examine the P01 bare control with its trace.

## Allowance and exit

Three further local attempts per failing pair under these rulings, fixtures and assertions unchanged, documented, no distribution runs between attempts. When all pairs and pins pass on one source: the full suite, the 40 authored digests, drills trace parity, and the single measured build under the Phase 4 exit (Phase 3d review), then report and stop. Weapon attachment to another squad, Merge member transfer and a company escalation endpoint remain deferred as Phase 4d.
