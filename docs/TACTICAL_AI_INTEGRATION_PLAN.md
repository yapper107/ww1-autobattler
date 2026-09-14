# Tactical AI Integration Plan

## Intended result

Platoons identify useful approaches across the map, squads turn those approaches into coordinated movement stages, and soldiers follow the chosen lane while selecting suitable individual cover. A rifle squad can travel around a known MG through sheltered terrain, establish another firing angle, and continue searching after the engagement. Useful supporting troops remain in place. Narrow trenches, stairs, and doors do not produce endless queues or repeated movement cancellations.

This is a proposed implementation plan. It builds on the completed research and current simulation; it does not claim these changes are implemented.

## Scope and design decisions

- Preserve the 340×300-metre deathmatch, four eight-person squads per side, one MG per side, command hierarchy, reaction delays, current wounded eligibility, and physical projectiles.
- Keep authoritative decisions and movement in the standalone C++ simulation. Unreal displays the same results and provides inspection controls.
- Use utility scoring to choose a maneuver and a persistent task sequence to execute it. Do not replace the whole AI with a new planning framework.
- Implement tactical route costs on the existing physical navigation first. Add a region graph for longer approaches after proving the complete selection-to-execution path.
- Add a selectable trench test map. It supplements the current map and must run through the production simulation.
- Support test-driven geometry mutations and correct cache invalidation. Weapon-driven destruction, structural collapse, terrain excavation during combat, and persistent soldier stats remain future work.
- Recast/Detour is a candidate for a later navigation backend. RVO2 and third-party cover generation are optional experiments, not dependencies required to complete this plan.

Research basis: Killzone 3 for squad corridors, Brewer for tactical traversal costs, Days Gone for stable coordination, and hierarchical multi-unit planning for explicit dependencies. These are architectural references, not templates to copy without adapting their knowledge and gameplay assumptions.

## Architecture and ownership

| Layer | Responsibility | Main code boundary |
|---|---|---|
| Geometry and physical navigation | Walkability, clearance, surfaces, links, stable identifiers, revision-valid queries | `EnvironmentSim`, `SpatialSim`, map definitions |
| Tactical spatial reasoning | Threat estimates, route alternatives, costs, corridors, and stage boundaries | New `TacticalRouteSim.h/.cpp` |
| Platoon | Main effort, support, maneuver squad, reserve, broad approach and target sector | `PlatoonSim` |
| Squad | One authoritative maneuver with participants, stages, release conditions and recovery | `ManeuverSim`, `PlanSim` |
| Fireteam and individual | Assign distinct shelter/firing slots, execute the corridor, preserve local survival reactions | `CoordinationSim`, `CommandSim`, `BattleSim` |
| Passage management | Friendly reservations, entry direction, yielding, and progress recovery | `TrafficSim` |
| Evidence and presentation | Reconstruct intent, received orders, route execution, support and outcomes | `Diagnostics`, CLI, Python analyzer, `BattleGameMode` |

Add these core concepts as ordinary simulation data:

- **TacticalRoute:** stable route ID; owner and parent plan; start and destination; region/link sequence; stage sequence; geometry and knowledge versions; cost components; evaluation status.
- **RouteStage:** corridor segment; shelter/arrival region; traversal stance; expected duration; known overlooking tracks; action risk class; relevant support assignment.
- **ManeuverExecution:** current stage; assigned members and replacements; receipt/readiness/release/arrival states; retained support; pause reason; changed evidence required for retry.
- **RouteKnowledge:** leader-scoped tracks, confidence, uncertainty, reported fire, recent empty-area observations, and known geometry changes.
- **PassageReservation:** stable passage identity, direction, participants, entry/progress state, and release conditions.

Store routes once in simulation runtime and refer to them by ID from soldier snapshots and orders. Do not duplicate full route vectors or threat maps in every replay frame. Preserve the relevant route versions in diagnostics so reruns and analysis remain explainable.

## Stage 1 — Baseline and route diagnostics

Before changing AI behavior, preserve the current executable, configuration, source identity and baseline results. Extend the existing evaluator rather than creating a competing analysis tool.

Record the route actually evaluated, including its polyline, predicted duration, exposed duration, relevant knowledge, and the final executed path. Distinguish the leader’s intended destination from the individual’s local shelter goal. Add separate results for unreachable, rejected on cost, incomplete evaluation, interrupted execution, and completed movement.

Add route lifecycle events: proposed, selected, issued, received, released, locally adjusted, paused, resumed, revised, completed and abandoned. Include old/new IDs when a route changes and preserve parent decision links. Detailed diagnostics retain the three strongest evaluated alternatives; an unevaluated route must never be reported as unsafe.

Add simple controlled fixtures: an exposed direct route and a longer sheltered alternative; the same alternative blocked; an elevated defender; and a productive hold. Use deterministic setup knowledge in isolated route unit tests, but normal perception/reporting in end-to-end encounters.

**Acceptance:** tracing on/off produces identical gameplay. New metrics reproduce on archived input. The fixture clearly identifies the existing exposed shortcut, and its report distinguishes selection failure from failure to follow the selected path.

**Deliverable:** reproducible baseline, route trace schema, analyzer support, and failing behavioral fixtures ready for the implementation.

## Stage 2 — Tactical pathfinding with faithful execution

Introduce a tactical navigation request that takes the actor’s knowledge, movement profile, destination and optional corridor. Preserve a separate physical path query for collision, reachability and emergency movement.

The initial cost model is:

`travel time + exposure cost + observed-fire cost + friendly-fire-lane cost + congestion cost + uncertainty cost`

Keep components separately inspectable. Exposure is integrated along the route using estimated travel time and stance. Sample plausible positions within remembered track uncertainty; do not treat one stale coordinate as an exact enemy location. Friendly firing-lane estimates use observed or received assignments, while the shooter’s immediate safety check remains authoritative.

Treat impassable geometry as a hard rejection. Tactical risk remains a graded preference, with exposed assault release handled by the squad’s existing preparation rule. Use nonnegative edge costs and a valid movement-time lower bound for the heuristic. Compare total exposure time, not only the fraction of the path exposed.

Fix all three ways a chosen detour could be lost:

1. The clear-direct-path early return must evaluate tactical cost or be disabled for tactical requests.
2. String pulling must retain corridor membership and not increase the permitted tactical cost/exposure beyond a documented tolerance.
3. Soldier movement, recovery and cover adjustment must refine the accepted corridor instead of independently taking an unrestricted shortest path.

Reuse the resulting path when calculating exposure and covering requirements. Replace the blanket two-times-direct-distance rejection with time/risk scoring and a deterministic search budget. A budget-exhausted query returns that state, rather than pretending no route exists. Keep a physically and tactically validated incumbent when available; otherwise hold safely and report incomplete planning.

Emergency escape can leave the corridor. It records a local interruption and reports the problem; it does not silently redefine the squad maneuver.

**Acceptance:** on the controlled known-threat map, the chosen and executed detour reduces exposure and reaches the fixed destination. Removing the threat or changing doctrine changes preferences sensibly. Direct-path and smoothing tests cannot erase the detour. A hidden enemy that produces no perceptible event cannot alter tactical route selection.

**Deliverable:** the first playable route-aware build and an isolated before/after comparison with destination selection unchanged.

## Stage 3 — Map-wide approaches and useful flank destinations

Build a coarse region graph from physical connectivity, with multiple distinct portals where needed. Region construction must preserve trench connections, doors, stairs, floor identity and protected strips along obstacles. Coarse regions narrow the search; exact local refinement must confirm that a region route is executable.

Platoon proposals specify an enemy sector, useful approach corridor and purpose rather than only a nearby point. Squads retain local stages within that approach. Compare direct, left and right approaches; include retreat, consolidation and search where appropriate. Initial deployment lanes remain formation guidance and do not confine later movement.

Generate destinations that can improve a fighting relationship: obtain a usable angle around known cover, close into useful weapon range, support a teammate, or observe an unsearched exit. Score destination benefit and complete route cost together. A northward displacement alone is not a successful flank.

Correct candidate evaluation: do not stop at the first reachable candidate when expensive route costs can change its rank. Start with a small bounded set fully evaluated, then introduce score bounds if profiles justify it. Use fixed expansion/query budgets and stable ID tie-breaking; record truncation.

Keep three kinds of lane evidence distinct: protected from known threats, recently observed quiet, and unobserved. The last carries uncertainty rather than guaranteed safety or an absolute ban. Route cost caches are scoped to the leader’s knowledge and time validity; temporal confidence decay must invalidate or refresh stale estimates even without a new report.

**Acceptance:** a squad selects an approach beyond the old 32–35-metre local radius and reaches a useful staging position. Mirroring or changing the available lane changes the route. The system does not prefer north because of hard-coded labels or hidden enemy truth.

**Deliverable:** long-range platoon approaches, squad corridors, and route alternatives on the main map.

## Stage 4 — Persistent fire-and-movement plans

Represent the accepted maneuver as a small task sequence: establish support, travel protected segments, prepare an exposed crossing, release one fireteam, occupy useful cover, evaluate the result, and continue or regroup. Support runs concurrently with the movement it enables. Existing search and withdrawal plans use the same lifecycle.

Bind covering evidence to the known threat or plausible firing position overlooking the specific upcoming crossing. Extend remembered-point suppression to reachable cover edges or windows associated with that track. Preserve exact ballistics and friendly-fire holds; firing at the correct vicinity is evidence of delivered fire, not proof that the hidden enemy is suppressed.

Retain the existing eight-second sustained opportunity requirement for exposed attacks and the lighter preparation for protected movement. Evaluate the next stage rather than demanding supporting fire during every metre of a sheltered route. A ready support element must actually be positioned and contributing, not merely have an Overwatch task label.

On support failure, pause unreleased movement and let exposed movers seek shelter. Keep the objective and completed stages. Resume only after relevant improvement, revise the blocked segment, or abandon with an explicit reason. Distinguish timeout, unreachable shelter, friendly obstruction and enemy fire; each needs a different recovery response.

Cover remains valid through peeking, ducking, aiming and reloading. Use shelter anchors rather than transient peek positions for formation reasoning. Equivalent orders preserve aim and cover. Stable support assignments need a target, sector, supported group or observation purpose, and an explicit completion/expiry condition.

Leader death transfers the outstanding mission but not unreceived enemy knowledge. Successors use their own reports and reacquire missing information. Wounded troops continue useful fire/observation from suitable positions; depleted or wounded-only groups still search when no healthy maneuver element remains. Withdrawal proceeds in stages where feasible, with emergency survival taking precedence when staged support is impossible.

**Acceptance:** one fireteam moves while useful support remains; unrelated firing cannot release a dangerous crossing; lost support pauses the appropriate stage; ordinary burst gaps or equivalent order refreshes do not repeatedly cancel the whole maneuver. Cleared contacts trigger completion and renewed search.

**Deliverable:** coordinated flanks and withdrawals with traceable dependencies and stable individual execution.

## Stage 5 — Trench movement and destruction-ready terrain

Add a selectable trench proving-ground map containing a communication trench, traverses, junctions, passing pockets, firing positions, a short exposed crossing, and an elevated position overlooking part of the route. Reuse production AI rather than scripting squad outcomes.

Extend the surface model to represent the needed trench floor and ramps instead of treating a negative height as an existing ground floor. Navigation nodes and links identify surfaces; stacked locations cannot share navigation or tactical cache entries. A trench travel stance and a firing stance must produce different sight and clearance results. Unreal renders the same simulation geometry.

Extend existing passage leases to directional group reservations and local yielding. Entry selection uses deterministic priority with aging so one group cannot starve indefinitely. Release reservations on departure, death, route cancellation, geometry invalidation or failed progress; recognize that a suppressed occupant still physically blocks the passage. Waiting points must be outside the passage and physically reachable. Congestion management uses friendly occupancy only and does not disclose hidden enemies.

Separate physical geometry from what a commander knows has changed. All physical collision uses the current revision at the simulation tick boundary. Tactical planning starts from known map geometry plus locally observed or received changes; a remote mutation must not silently improve an officer’s route choice. Shared initial geometry can remain common data, with observed changes represented as leader-scoped versions or overlays.

Invalidate cover catalogs, navigation and geometric query caches through the existing mutation interface. Use stable obstacle, cover, surface and portal IDs; rebuilding or vector reordering must not reassign identities. Revalidate affected paths and reservations before execution, and classify relocation caused by lost geometry separately from avoidable movement.

**Acceptance:** opposing friendly traffic clears the trench without overlap or endless waiting; upper-floor fire is represented correctly; removal/change of cover and passages invalidates affected data; unchanged geometry retains valid caches. Paired hidden-change scenarios do not create tactical alerts before observation or local encounter.

**Deliverable:** playable trench fixture, generalized passage handling, and geometry-mutation tests. Actual destruction weapons and excavation remain out of scope.

## Stage 6 — Investigation, performance and rollout

Add optional replay overlays for the selected squad’s intended corridor, current stage, assigned support, and route knowledge. Clearly distinguish commander-known estimates from an observer view of the real battlefield. The inspector should explain short concrete states such as “waiting for fire on the window covering this crossing.”

Extend CLI evaluation with route completion, predicted/actual exposure, emergency corridor departures, support-covered crossings, time to useful firing angle, and stalled passage time. Preserve existing metrics so the new system cannot appear better merely through renamed tasks or changed denominators.

Use the original four full-battle development seeds, 100, 103, 107 and 108. Reserve six additional seeds, 211, 223, 227, 229, 233 and 239, for final validation rather than tuning. Keep the 107–109 controlled encounters, and add genuinely different geometry, opposing doctrines, initial positions and observation conditions. A seed variation alone is not a test of terrain generalization.

Proposed targets, fixed before tuning:

- All deterministic route, safety, knowledge-boundary and geometry fixtures pass.
- In a nine-case controlled flank matrix, at least eight cases complete the intended route and establish a usable second firing angle while the defender is still active. Report defender displacement/elimination separately; movement and chance hits cannot substitute for the angle check.
- Across ten full battles, target 50% fewer analyzer-flagged avoidable cover changes and rapid order reversals per 1,000 active soldier-seconds, compared with the matched baseline. Audit sampled flags against traces before attributing causes.
- Unexplained inactivity must not increase by more than 5% relative to baseline. Purposeful observation/support is reported separately, with its justification.
- All existing projectile, friendly-fire, reaction, wounded, leadership, building and deterministic replay checks pass. Trace disabled/standard/detailed modes preserve identical gameplay within the same build and platform.

These are proposed acceptance targets, not measured results. Keep failures visible and revise the implementation rather than weakening an assertion to match its output. The nine-case matrix is three layouts (a protected northern approach, its southern mirror, and a bent approach with a short supported crossing) across seeds 107–109, each using sixteen attackers against eight defenders for up to 360 seconds. A usable second angle requires at least two surviving movers to reach the chosen arrival region and each have a valid firing solution during a three-second interval, with their attack direction at least 45 degrees from the supporting element’s direction around an active defender. Observer data may verify this outcome but cannot supply it to decisions. Preserve these definitions before tuning and use separate held-out layouts for final evaluation.

Profile region construction, tactical costs, search/refinement, traffic, decisions, perception, ballistics, recording and export separately. Share revision-valid catalogs, reuse working arrays and query results, and store route history once. Keep simulation frequencies unchanged and do not allocate full threat grids per soldier per replay frame.

Benchmark Windows seeds 107–109 with three first-process/repeated-process pairs each, serialized under comparable machine load. Separate fresh simulation from replay reuse; record peak memory and diagnostic overhead. Describe first-process runs accurately rather than calling them OS-cold. Initial release budget: no more than a 10% median increase in fresh Run Battle-to-ready or peak memory against the new matched baseline; target a reduction if route-query reuse offsets added reasoning. Report raw data and outliers.

Build and test the standalone runner and Unreal after each gameplay milestone. Before final delivery, run the complete simulation suite, analyzer/evaluator tests, controlled encounters, both Windows builds, and Unreal integration checks for the existing map and trench map. Each release report states what improved, what failed, and whether timings met budget.

**Deliverable:** improved playable AI, reusable investigation commands, main/trench map inspection, and a measured acceptance report.

## Third-party integration decision

The initial release needs no additional framework. After the route and terrain fixtures work, benchmark a standalone Recast/Detour backend behind the same physical-navigation interface if irregular terrain or grid cost becomes limiting. Pin the version, preserve license notices, and require parity on connectivity, clearance, dynamic geometry and deterministic tests before switching the production backend.

Use GlassBeaver’s UE4 cover project as a design/code reference for later arbitrary-geometry cover generation; verify UE5.4 compatibility before importing it. Evaluate ORCA only if local avoidance remains a measured problem after passage coordination. GOAP, a general HTN engine, behavior-tree replacement and reinforcement learning are not required for this scope.

## Delivery sequence

1. Baseline and route diagnostics.
2. A safer route that survives execution, proved with unchanged destinations.
3. Map-wide approach selection.
4. Persistent support-linked maneuvers.
5. Trench terrain, passage traffic and mutation correctness.
6. Held-out evaluation, optimization, Unreal presentation and measured release.

Existing behavior remains available in archived executables for comparison. Any temporary algorithm-selection option must be recorded in manifests and replay keys. Retire transitional code after validation so two competing planners cannot issue orders to the same squad.

## References

- [Tactical AI research report](</mnt/c/Users/Jordan/Documents/Codex/2026-09-12/how-x20/outputs/Tactical AI Research.pdf>) — detailed source review, compatibility limits and current-code findings.
- [Hierarchical AI for Multiplayer Bots in Killzone 3](https://www.gameaipro.com/GameAIPro/GameAIPro_Chapter29_Hierarchical_AI_for_Multiplayer_Bots_in_Killzone_3.pdf) — region routes and constrained individual execution.
- [Tactical Pathfinding on a NavMesh](https://www.gameaipro.com/GameAIPro/GameAIPro_Chapter27_Tactical_Pathfinding_on_a_NavMesh.pdf) — exposure-aware traversal costs.
- [Squad Coordination in Days Gone](https://www.gameaipro.com/GameAIProOnlineEdition2021/GameAIProOnlineEdition2021_Chapter12_Squad_Coordination_in_Days_Gone.pdf) — stable spatial coordination and movement roles.
- [Hierarchical Plan-Space Planning for Multi-unit Combat Maneuvers](https://www.gameaipro.com/GameAIPro/GameAIPro_Chapter13_Hierarchical_Plan-Space_Planning_for_Multi-unit_Combat_Maneuvers.pdf) — explicit task relationships.
- Project baseline: simulation `f8bbbe8f2b945563`, `docs/BATTLE_LAB.md`, and the preserved initiative evaluation. No new battle benchmark was run to produce this plan.
