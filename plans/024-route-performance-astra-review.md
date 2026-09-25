# Independent Astra review: tactical-route endpoint reuse

Reviewer: independent Astra agent `/root/astra_training_review`, 22 September 2026.
Scope: read-only comparison of `TacticalRouteSim.cpp/.h` against the saved
`.local/plan024/performance/before/` copies. The only file written by this reviewer
is this review. No builds, benchmarks, parity tests or training changes were made.
This is an Astra assessment, not a Fable or Opus review.

Reviewed final lazy-version SHA-256 identities:

- Current cpp: `582bd882b9eab364f4c36ba34392839e855b9c5ece2a98eefac0dc43d1c50380`
- Current header: `e0d1745720024b8a90e8859a8a21cab032e7dfa19db2dd32191a652dd9da76c0`
- Before cpp: `25645cc7278a5bf90e7a9f1c3045bd566572565ecbb344be4329e248f3fe349a`
- Before header: `9f2be8952cdeaff8bfaa22ed2023197d4193c8d20f8f584a8e25fa871f351ec5`

## Finding

No remaining gameplay-equivalence defect found by source inspection for normal
finite, bounded simulator coordinates and an unchanged floating-point environment.
The lazy revision resolves my earlier concern about eagerly converting coordinates
for threats or observers whose visibility queries would have been skipped.
This is not a claim that the final binary has passed tests; the implementer owns
that separate verification.

## Why the transformation is equivalent within that domain

- The planner still owns a value snapshot of `WithTracks(k, at)`, fixed evaluation
  time and stance. Contact grouping order, distance comparison, weapon distinction,
  replacement rule and tie behavior are unchanged. Confidence and uncertainty are
  pure functions of the copied contact and fixed time (`CommandSim.cpp:124-130`).
- Eye endpoints now initialize only after the original confidence and distance
  bounds permit the threat queries. All three offsets were queried unconditionally
  in the old loop once those bounds passed, so initializing that same three-element
  array adds no endpoint that the old loop would ordinarily skip. Observer endpoint
  initialization is inside the original less-than-20-metre condition.
- Endpoint expressions preserve `(contact.position + offset) + eyeHeight`, the
  same float components, `round(component * 2) * .5f`, and the same integer packing.
  The body endpoint is computed once per uncached sample with the original height.
  The original accumulation order of `visible += 1.f/3` is unchanged.
- Crouched exposure remains at 0.9 m. Observer visibility remains at 1.5 m for both
  stances: a crouched body endpoint is correctly not reused for that query.
  Standing-body reuse therefore cannot alter the queried height.
- Snapping does not touch map caches. Actual visibility queries preserve their
  order, directed endpoints, revision check, cache size, hash and replacement
  behavior. Geometry visibility remains shared while threat weights and endpoint
  storage remain per planner. Copying a planner also copies its actor snapshot and
  cached endpoints consistently; there is no new cross-actor cache of knowledge.
- Existing sample-cache keys, traversal order, regional costs, route budgets and
  path-selection arithmetic are unchanged.

## Limits and measurement note

This is not a proof of identical behavior for malformed nonfinite or out-of-range
coordinates, floating-point traps or a rounding environment changed during the
assessment. The old coordinate packing already has conversion limits and 16-bit
coordinate aliasing; the patch does not introduce a policy for those inputs.
The prior eager-conversion concern is resolved for endpoints that are skipped by
the original query bounds.

Some work moves into construction, before the existing `Evaluate` tactical timer.
Use whole-battle wall/CPU time or constructor-plus-query timing to substantiate
speedup; a reduction in `tacticalSeconds` alone can overstate it. Prototype numbers
reported by the implementer are not independent validation of this final revision.

Relevant boundary coverage for the implementer's parity checks: positive and
negative quarter-metre rounding boundaries, elevated floors, standing/crouched
queries, no threats or all threats skipped, contact-merge ties, and map revision
invalidation. These are verification targets, not observed failures.
