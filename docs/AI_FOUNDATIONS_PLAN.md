# AI foundations: first implementation

User authorization: 14 September 2026. Directional vision with deliberate looking, memory of enemies/concentrations/strength, orders as goals with alternative methods and feedback, and officer over/underestimation. This is the first controlled implementation, not full-battle tactical acceptance.

## Architecture and review

Baseline: git `3ebd263`, simulation `5f53cb886967bd16`. Claude Fable 5.1's actual architectural response is preserved in [AI_FOUNDATIONS_FABLE_REVIEW.md](AI_FOUNDATIONS_FABLE_REVIEW.md). Astra owns implementation and validation.

Accepted: opt-in `--foundations --encounter 8`; independent look direction; common visual-field gate for enemy/friendly sight, negative evidence, and observed geometry edits; local belief estimates; goal identity through delayed task and platoon reports; retained alternatives; baseline parity before promotion.

Astra's explicit amendments:

- Reuse raw contact report transport rather than introduce interpreted region reports. Platoon situations carry multiple original observations, including clearing evidence. Interpretation occurs at each recipient. This avoids multiplying bias and duplicate counts through relays. Dedup remains the existing per-contact identity/timestamp approach for this slice. Unidentified sightings and association errors are deferred; IDs are handles for observed evidence, not permission to inspect hidden bodies.
- Derive a sparse regional view from memory on demand; do not store a second dense copy of all battlefield beliefs on every soldier. Missing regions are unknown. The uncertainty band is a heuristic estimate, not a guarantee that the true count lies within it. Clearing a track does not certify an entire 16-metre region empty.
- Use one retained fallback: observe the reported sector before committing again. Do not execute a stale, precomputed second route without revalidating it. Broader alternative methods and task graphs remain later work.
- Keep doctrine independent from estimation bias. Each actor's bias is derived once from the battle seed/id, with an optional test offset, never redrawn per decision. Raw observations remain unchanged.
- Reuse the current maneuver pipeline with an explicit observation-intent branch, and enable existing task lifecycle transport for attackers. The legacy corporal formation writer is disabled in this mode because PlanSquad already assigns every member. This does not repair all squad coordination interactions or replace the unaccepted recovery drill.
- Encounter 8 initially reuses the authored MG encounter terrain and deployment. Component/transport tests control observation, occlusion, and blockage independently; the real battle run checks integration. The controlled task report test is not evidence that every battle spontaneously exercises goal failure.

## Ownership and knowledge invariants

Perception reads physical enemy bodies only inside the existing sensory producer. Attention reads only the actor's own order and received/personal contact memory. BeliefSim has no Frame input. Report relays preserve original observation time and observer; duplication cannot refresh confidence or multiply count. Task status is correlated to the received goal and assignment, and Interrupted is not Blocked. An old goal's failure cannot replace a new goal. An observation order has no seizure-completion claim.

Terrain starts from a shared briefing map. Remote edits still require individual observation and invalidate geometry through the existing mutation interface. Nearby collision can reveal an obstruction without vision. General exploration, hearing, identification uncertainty, personality progression, company command, and Unreal overlays are deferred.

## Validation

1. `./scripts/test-sim.sh --foundations`: cone/occlusion/reaction, scanning, negative evidence, belief dedup/age/bias, bias affecting actual plan choice, navigation failure transport, matching goal feedback and changed subordinate orders, integrated sensing/commander reports, trace parity.
2. Existing full C++ and recovery suites; Python analyzer suite.
3. Unchanged normal-gameplay digests against the preserved pre-change executable for seeds 100–109, 360 seconds.
4. Export encounter evidence including source identity, gameplay digest, knowledge and mental-map trace; exact rerun restores foundations and bias options.
5. Windows native/Unreal validation after the missing Visual Studio C++ toolchain is installed. Do not claim this pass was built or visually reviewed in Unreal until that happens.

## Implementation review resolution

Fable's second attributed response is [AI_FOUNDATIONS_IMPLEMENTATION_REVIEW.md](AI_FOUNDATIONS_IMPLEMENTATION_REVIEW.md). It judged the bounded approach sound and identified five concrete issues. Astra addressed each:

1. A single soldier's failure no longer blocks the squad goal. At least two active members must report Unreachable, Geometry, or Fire obstruction for the same goal. Casualty, BattleEnded and temporary Interrupted reports do not trigger that fallback. Regressions cover the distinction and real navigation-to-report transport.
2. Foundations downward directives and the primary platoon contact use the same monotonic observation merge as the multi-contact report. A regression preserves a cleared track against a newer-than-old-sighting but older-than-clearance directive.
3. Intents carry an expiry time. New tasks inherit only live intents, and expired platoon goals report ID zero. Tests require actual new orders to exist and verify they are untagged after expiry.
4. Bias selects a value inside the uncertainty band rather than scaling outside it. The optimistic estimate follows its declining lower bound; the pessimistic estimate follows its widening upper bound. The neutral midpoint may increase as uncertainty grows; this is a conservative planning heuristic, not an assertion of additional observed soldiers or a calibrated probability model.
5. Structured traces record goal feedback sent, accepted or ignored, including goal ID, status and original report time, alongside the replacement intent and its parent goal. Tests assert the sent/received/replacement chain.

The review also noted scan cadence, possible observation-order churn, and a short receipt-to-replan window. Those remain tuning/coordination limitations of the controlled slice. No further Fable approval of the fixes is claimed; Astra implemented and tested them.
