## Verdict

Keep the roadmap's substance. Change the sequencing in two places: merge items 1 and 3 into the next milestone, and move the route-spreading uncertainty model in item 2 behind the first method library in item 4. No rewrite is justified. The seams that matter already exist and are tested: a single sensory producer with a shared visual-field gate (`PerceptionSim.cpp:5-14`), delayed transport with monotonic merge (`BeliefSim.cpp:40-51`), goal identity on receipts (`BeliefSim.cpp:52-65`), and structured feedback traces (`PlatoonSim.cpp:9-14`). The results doc is candid that the integrated run did not spontaneously trigger the fallback, which is the right signal for what to build next.

## Three structural risks

**1. Plan authority is still split, and item 4 could add a fourth writer.** Today `UpdateManeuver`, `UpdateSearchMission`, and `UpdateCoordination` all write squad destinations (`PlanSim.cpp:24-31`), the Observe branch escapes them by early return (`PlanSim.cpp:18-23`), `ApplyPlatoonDirective` survives as a second acceptance path (`PlatoonSim.cpp:94-107`), and the corporal writer is only disabled in this mode (`CommandSim.cpp:559`). A utility-scored method library layered on top will inherit every veto interaction unless one record owns the accepted plan. Mitigation: introduce a single accepted-plan record per squad with goal id, method, stage, status, and an explicit safety-override flag. `PlanSquad` reads only that record. `UpdateManeuver` becomes one method implementation behind it, not a peer.

**2. Belief semantics are tied to identity handles, and the roadmap contradicts the current ageing heuristic.** Because contacts are keyed by simulator id, the count inside a region is exact by construction, and the band only models unseen others through a fixed allowance (`BeliefSim.cpp:17-24`). Item 2 says ageing must not spawn enemies, yet the current `high` term grows with age per track and the results doc defends that. Pick one before any calibration work. My recommendation: conserve mass per contact, so age widens location, not count, and let count uncertainty come from unobserved coverage of the region. Separately, the user should decide now whether identity-keyed contacts are acceptable for the shipped game, because that decision determines whether estimation bias means "how many are there" or "how much is unseen", and the calibration harness differs.

**3. The promotion gate is undefined and the only existing strict gate is a recovery-fixture artifact.** Item 6 says "strict tactical gate". If that means the envelopment evaluator, the foundations line re-imports the composition failures that produced 2/9. Define the foundations gate as paired-scenario behavior predicates plus held-out outcome distributions, never envelopment timing.

## Research use

The citations are used appropriately as motivation. Two cautions and three missing assumptions. SHOP-style decomposition assumes deterministic state; here method preconditions are evaluated on beliefs and replanning on feedback is the real mechanism, so cite it for structure only. Utility scoring plus precondition vetoes is exactly where competing authorities return, so scoring must happen inside the single plan owner. Missing: recognition delay is a per-soldier constant rather than a function of distance, exposure, and motion, which the synthetic-vision abstraction normally includes. Communication has no loss or capacity, so the vision document's "lost entirely" is unmodeled and the roadmap does not mention it. Scan phase is a fixed function of id (`PerceptionSim.cpp:30-31`), which an ablation can confound with squad composition.

## Next bounded milestone: plan authority with instrumentation

Build items 1 and 3 together, in encounter 8, with the method library designed but not implemented. Behavior tests:

- **Single-writer invariant.** Over a full run, every change to squad destination or mission in the frames is matched by exactly one trace entry of kind plan accepted, safety override, or resume. Assert by diffing frames against the trace.
- **Override and resume.** Scripted suppression on the point element forces a safety override. After suppression decays, the same goal and method resume with no new directive. Receipts show Executing, Interrupted, Executing under one goal id.
- **Completion at each level.** Observe currently never completes (`BeliefSim.cpp:64`), so the fallback cannot hand control back. Define Observe done as a fresh observation or clearing evidence in the objective region within a window, and Seize done as two members inside the radius plus no known contact in that region. Test both, including the negative case where a distant hold receipt is not completion.
- **Ablation harness.** Same seed with cone on and off, and with report delay at 0.75 s and 3 s. Assert digests differ and assert direction predicates such as time to first commander report increasing with delay. No tuning in this milestone.
- **Mass conservation.** One contact never contributes more than one to any region's upper bound at any time. Assert the sum of upper bounds is bounded by observations plus the unseen allowance, independent of age.
- **Spontaneous fallback.** Author one encounter-8 variant with a physically blocked approach so the two-member obstruction rule triggers without scripting, then assert the observe order arrives and squad orders change.

## Sequencing disagreements

Items 1 and 3 are not separable: rejected-action reasons cannot be trusted while three writers can overwrite the decision. Route-spreading uncertainty has no consumer until a method compares approaches, so it is untestable except through traces. Bias as a scalar can be profiled any time, but risk tolerance and adaptability need methods to act on, so item 5 follows the first library. Item 6 should replace the strict gate wording with the paired-scenario predicates above plus casualty and objective outcome distributions over held-out seeds.

None of the cited work validates this simulation. It justifies the separation of attention, memory, belief, and method selection. Whether the game improves is an empirical question the ablation harness is designed to answer.
