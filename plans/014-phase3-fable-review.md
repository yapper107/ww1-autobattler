# Plan 014 Phase 3 review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3 report (`.local/handoffs/014-phase3-report.md`) on fingerprint `3231bd74bac2cef1`, and read `Sim/SquadDrillSim.cpp` (`Flank`, `Covered`) and the D08 fixture trace. Verified independently: protected files intact, 56 Python tests pass, diff clean. Advisory review, not acceptance.

## Verdict

D05 is repaired and all Phase 2 pairs and pins pass; D06 (support by fire established, lost, protected, silent control) passes. The attack chain fails at its first link and everything downstream is unexercised: in the D08 fixture all flank goals were rejected before a route was evaluated, and the one route that was evaluated failed the covered-route contract. Because the third branch I specified says "no covered route: hold and report", squads that never find a route now hold, and F1 intensity fell by half against Phase 2d. The report is right to fail the slice and stop.

Causes, from the code and the trace:

1. **Flank goals are exact polar points.** `Flank` generates eighteen points (two sides, three angles, three radii) and requires each to be walkable and protected at that exact position (`Safe`), inside the deployment lane band. Thirty-nine of thirty-nine were rejected. A flank position is a cover slot in a sector, not a point.
2. **The lane band is the wrong area for an attack.** The band was drawn for the deployment sweep, 24 m either side of the start line. A flank leaves it by definition. Phase 4 assigns areas of operation; until then the attack needs its own area.
3. **The covered-route contract is an unreviewed threshold.** `Covered` requires exposure at most half the travel time and no exposed stretch over 5 s, from the leader's known threats. The fixture's screened route measured 18.3 s exposed. Either the contract is too strict or the fixture's screen does not screen; the test must establish which by checking observer lines from the defender to the route before the contract is blamed.
4. **My third branch was wrong in the absence of Phase 4.** With no platoon to answer a report, "hold and report" is a stall. Closure by bounds with the gun group in support, which Phase 2d already did, is the correct default when no covered route exists.

## Binding corrections for Phase 3b

1. **Flank goal search.** Use the position service with cover generation inside a sector: 40-60 degrees off the base-to-objective line at the objective, 20-45 m from the objective, reachable by the manoeuvre element, ranked by the planner's exposure-weighted route cost. Do not require an exact point.
2. **Attack area.** For SupportByFire and SquadAttack the accepted area is the lane band united with a 60 m disc around the objective, clipped to the map. Trace the area with the drill acceptance.
3. **Covered-route contract.** Exposure from known threats at most 40 % of travel time and no continuous exposed stretch longer than 10 m (two buddy rushes). Before applying it in D08, add an observer assertion that the fixture's screen blocks the defender's line to at least 60 % of the candidate route; fix the fixture if it does not.
4. **Third branch.** Known resistance within 100 m, no superiority: if a covered route exists, SquadAttack; if none exists, continue closure by bounding overwatch with the gun group in SupportByFire and report "no covered route" upward. Hold only under effective incoming fire without superiority and with no protected bound available. Entry to SquadAttack does not require effective incoming fire.
5. **D16 control.** The three-casualties rule stands; the equal-strength control must be a fixture in which the squad does not lose three members (durable, low-rate enemies), so the control tests the strength condition and not the casualty one.
6. **Regression reference.** Phase 2d is the reference for "no regression" on every criterion; candidate90 and legacy are the references for the targeted authored-map intensity and closure improvements.

## Exit for Phase 3b

Pairs D06 to D11 and D16 passing with controls; D12 deferred. No criterion regresses against Phase 2d beyond its interval on F1 or either authored map; authored-map intensity and closure improve against Phase 2d, with the candidate90 comparison reported. 40 authored digests unchanged, drills trace parity, full suite, engagement guard. One measured build; report and stop if it fails.
