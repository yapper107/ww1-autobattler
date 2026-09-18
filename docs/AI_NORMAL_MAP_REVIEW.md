# Normal-map review after candidate90 promotion

16 September 2026. The user reports excessive bunching and poor apparent flanking
on Fractured Works with default settings. This review diagnoses the report; it does
not change the main controller or certify an alternative.

## Reproduction

Production CLI runs: Fractured Works, seed107, both doctrines Balanced, Center
approach, support enabled,360seconds. Identical settings compare candidate90
cognition, its retained legacy controller, and the earlier original9/9 cognition
snapshot3606cbd8375bec12. Evidence: `.local/normal-map-review/`, including manifests,
trace/evaluation samples, `spacing.json` and `ai-metrics.json`.

Across recorded samples from30–180s, for each living soldier with another living
squadmate, measure horizontal distance to the nearest living member of that squad.
These are descriptive diagnostics for this battle, not a new acceptance gate.

| Controller | Median nearest squadmate | Samples within2m |
|---|---:|---:|
| Current candidate90 cognition | 0.95m | 80.6% |
| Retained legacy | 7.50m | 11.3% |
| Earlier9/9 cognition | 0.98m | 80.2% |

This reproduces the user's observation. Wider spacing alone does not prove better
survival or tactical quality. One default battle cannot certify general flanking.
The existing spatial maneuver analyzer finds one useful completion for legacy,
zero for both cognition runs; that metric allows closure as well as angle gain and
is **not proof of a completed flank**, nor the strict tactical acceptance metric.
Legacy traces do contain real north/south flank candidates alongside other methods.

## Concrete causes

1. `PlanSim.cpp:12` returns into cognition before `UpdateSearchMission` atline32.
   That older routine assigns separate map-search lanes using deployment, mapped
   geometry and actor-owned contacts. The cognition fallback at
   `CognitiveSim.cpp:603` consumes the still-default `command.mission`. All eight
   squads' first accepted routes at0.05s target`[0,0,0]`, confirmed by trace and
   route records. This causes convergence before tactical contact, without any
   authored directive to seize that point.
2. `CognitiveSim.cpp:151` onward allocates tightly packed transit destinations:
   two columns separated by2m with1.5m row spacing. Final cover reservations reject
   peeks only within1.1m. The first resolved fallback position does not check the
   existing reserved positions; geometry projection can further crowd destinations.
   These mechanisms explain tight formations, although each observed sub-metre
   gap would require per-soldier path tracing to attribute precisely.
3. Controlled tactical fixtures provide explicit missions and deployments. They
   did not discriminate the normal-map fallback-mission bug. Normal-map smoke
   checks covered execution, reporting, casualties and playback, but not meaningful
   formation width or preserving separate approach sectors. The28/30 score cannot
   establish that candidate90 is the best normal-game controller.

## Recommendation and repair boundaries

Legacy is the more dispersed playable comparison already present in this build.
It retains lane search, squad maneuver/flank planning and cover behavior, but lacks
cognition's newer perception/decision contracts and is not certified as reliably
flanking across normal battles. Restoring an earlier cognition checkpoint alone
will not fix the demonstrated convergence.

The next cognition repair should:

- Initialize an actual search/advance intent from each squad's deployment sector
  when no higher order exists; retain the accepted mission rather than rewriting
  its destination every tick. Never consult hidden enemy state.
- Allocate terrain-aware formation width, distinct shelter/peek occupancy and
  corridor-aware positions. Narrow passages may justify temporary columns; open
  approaches should not default to packed columns. Preserve support lanes.
- Trace a platoon flank from received contact through support assignment, distinct
  approach, physical arrival and a useful firing angle. A named order, movement
  count or closure-only completion is insufficient.
- Keep existing mechanism/tactical tests, and add normal-map checks that expose
  shared-default objectives and persistent crowding under equal deployment. Review
  actual replay on both maps before another main-build selection. Do not replace
  a missing behavior assertion with another total-score chase.

No gameplay source or default was changed by this review. A bounded Fable5.1 review
was requested, but the launcher refused continuation pending inspection/reset of
its previous OAuth-refresh failure. No architect response or new approval was
obtained. Earlier attributed reviews remain valid only for their stated scope.
