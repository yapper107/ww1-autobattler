# Plan 014 Phase 0 review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 16 September 2026. Reviewed Astra's Phase 0 report at `.local/handoffs/014-phase0-report.md` on fingerprint `d0e577abab5319b6`. Verified independently: fingerprint unchanged, every protected hash intact, 39 Python tests pass, 40 baseline manifests present. Advisory review, not acceptance.

## Verdict

Phase 0 is accepted as the measurement baseline. The tools follow the companion definitions, the deviations are declared rather than hidden, and the numbers reproduce the normal-map review on the whole-battle window: Works nearest-squadmate median 0.976 m against legacy 6.539 m, under-2 m share 79.7 % against 16.4 %; Trenches 1.454 m against 3.946 m. Two observations the hotfix must not lose:

- Friendly fire is three times higher under candidate90 on Works (332 against 109 hits) and exposure without a firing solution is roughly double on both maps. Bunching is the likely contributor; the hotfix report must show whether these move with spacing.
- Inter-squad crowding is not uniformly worse under candidate90 in Trenches (centroid median 9.7 m against 8.5 m). The hotfix's cross-squad fix is therefore justified by the Works numbers and by the origin-convergence trace evidence, not by the trench result.

## Conventions confirmed

- Whole-battle window, left-endpoint duration weighting, mean of run medians with per-run distributions retained: accepted. Report per-run adverse cases explicitly in every later comparison.
- Reversals unavailable on no-trace runs reported as null: correct. Succession from `events.jsonl`: correct.
- The reversal rule's intermediate-destination condition (more than 5 m from the first) is adopted into the companion definition.

## Resolutions for Phase 0b

1. **Fallback allocation intervals.** Agreed: the 2.0 m shelter and 1.8 m peek values are occupancy minima, not the dispersion target. Fallback and transit allocation use the plan's terrain-aware formation intervals (10 m open, 3-5 m restrictive, from known cover density and passage width around the destination). Do not tune those values per seed; report the measured result against the legacy reference honestly if it falls short.
2. **"Required occupants plus a covering element."** The whole squad still moves; nobody is left behind at their current position. The `requiredOccupants` movers receive the objective slots; every other eligible member receives a protected covering slot inside a 12-25 m band around the objective with a line to the ordered sector, chosen by the same occupancy-aware query. No element machinery, no template, no frozen membership in this hotfix.
3. **Mission from deployment sector.** Lift the lane and leg logic, not the legacy writer: the cognition path initialises its own `GoalIntent` from the squad's deployment lane once, retains it until a platoon directive supersedes it, and traces the initialisation with `mission_initialised`.
4. **Reserve and consolidate positions.** Query inside the squad's own sector using the reported situation, with the occupancy rule, and let those squads keep their existing hold semantics otherwise.
5. **Evidence required in the 0b report.** Per fix: the mechanism pin with its paired control; ten-seed both-map spatial, exposure and friendly-fire tables in the Phase 0 format with per-run adverse cases; legacy digest parity; trace on and off parity; the full C++ suite; the frozen 9 and 30 as disclosure. Native Windows CLI and Unreal replay checks remain Astra's before any default change, and the user's replay review precedes promotion.
