# Tactical AI recovery plan

Status: implementation in progress; acceptance gates have not passed. The original proposal below was written against build `3679481d18031c1f`. See `docs/RECOVERY_IMPLEMENTATION_STATUS.md` for the implemented fixture-only mechanics, failed gate evidence, and unfinished phases.

## The verdict after two passes

Two implementation passes added planning machinery: tactical routes, stages, a trench map, route diagnostics, and a strict evaluator. Both kept the same result, 0 of 9 strict envelopments. The delivered build is faster and far better instrumented, and it fights the way it did in August.

The instrumentation now explains why. In northern layout 5, seed 107, the squad accepts route `2000000020` at 18.65 s, reaches two stages, pauses at 49.65 s, and no assigned soldier ever reaches the final destination. A later route completes at 200.25 s and still fails the second-angle criterion. Two different failures, one cause each:

1. **Nobody owns execution.** Four layers can move the same soldier: the platoon directive, the squad maneuver and route stage, the corporal's two-second formation refresh, and the individual's own safety logic with about ten independent override conditions. None of them exchanges task status. The squad infers progress from geometry and timers, so a soldier ducking into emergency cover for four seconds reads as "movement refused", and the stage pauses. The pause discards the released fireteam and bound serial, so the same soldiers get new orders and start over.
2. **Arrival is a place, not a purpose.** Route destinations are shelter points. The evaluator, correctly, wants two survivors with a physical firing line onto an active defender at 45 degrees or more from support. No layer selects for that, so completing a route and passing the test are unrelated events.

The measurements from the morning baseline point the same way and have not moved: 52 percent of soldier time is spent in the Fire action, 83 percent of it with no firing solution, at a median 74 m from the nearest known enemy against a 70 m sight range. Plans that hold at the edge of visibility cannot produce firing angles no matter how they are routed.

Neither problem is solved by a better route cost, a better pause rule, or another timer. Both are solved by well-known structures from shipped squad AI, listed below with what each contributes.

## What the literature actually says to do

**Orders are tasks with a lifecycle, and subordinates report status.** In Killzone 2's bot hierarchy, an order sits in the subordinate's command queue until the subordinate clears it on completion or failure, or the superior overwrites it. Individuals send messages on task success or failure, on first sighting, on losing a track, and on a kill. Squad leaders inform the faction leader when an order can no longer be completed. F.E.A.R.'s squad manager works the same way at a smaller scale: it hands goals to members, checks whether members are still pursuing them, and abandons the squad behaviour when they are not. Halo 3's objectives system adds the "broken" state, where a task neither accepts nor releases members until its condition clears. Full Spectrum Command gives every task explicit preconditions, goal conditions, and abandonment conditions, and reports abandonment upward. None of these systems infer execution from positions.

**Squad behaviour is a small task graph with precedence, not a set of checks.** Van der Sterren's plan-space planner represents a maneuver as tasks with start times, durations, and predecessor links, so "assault cannot start until every form-up task has completed" is a data relationship, not a heuristic. The same chapter notes that doctrine is expressed by enabling or disabling methods, which is where officer personality should plug in. Battle Drill 1A from ATP 3-21.8 gives the graph for the case that matters here: the team in contact returns fire and becomes the base of fire, the leader assesses, the other team moves along a covered route to an assault position, the base of fire shifts or lifts, the moving team assaults or occupies. Five steps, two roles, two synchronisation points.

**Destinations come from a position query, not a waypoint.** Crytek's Tactical Point System, described by Matthew Jack, and Guerrilla's position picking both answer questions of the form "give me N points in this region, protected from these threats, with a firing line to that threat, spaced apart, reachable". Arrival slots for the assault team are the answer to that query with the 45-degree condition included. When the query returns nothing, the drill has no valid assault position and the leader knows it before moving.

**Enemy knowledge is a belief with uncertainty, not a ten-second contact.** Isla's occupancy maps keep a probability field that spreads with time, is cleared wherever a friendly currently sees, and is raised by reports. Leaders plan against the field's peaks. This is the same information boundary the project already enforces; it just stops throwing the information away every ten seconds, and it clears searched ground instead of chasing ghosts.

**Decisions are scored, then committed with hysteresis.** Mark and Dill's utility work, and the portfolio search literature from RTS research, both reduce a tactical decision to a small fixed menu of scripted options scored against the current belief. The current plan keeps a bonus proportional to its sunk progress. Reconsideration happens on events, not on a fixed four-second tick. The project's integration plan already chose "utility scoring plus a persistent task sequence"; the pieces above are what make that choice work.

**Suppression is measured by effect, or at least by delivered fire at the right target.** The base of fire is useful when it has put rounds on the specific track that overlooks the specific crossing, recently. The rounds counter and support reports already exist. What is missing is the binding of that evidence to the track and crossing, and the ability of rifle teams to deliver it at a position they last saw an enemy at, the way the MG already can.

## The plan

Work on the fixture first. Nothing below touches full-battle behaviour until layout 5 passes on seeds 107 to 109. Each phase has an exit test drawn from the evaluator that already exists.

### Phase 1. Task contract

Replace the implicit relationship between order and behaviour with an explicit one.

- Add a task record to the existing `Assignment`: stable task id, kind, parameters, and a status from Issued, Received, Executing, Interrupted, Blocked, Done, Failed, Superseded. Interrupted carries the local reason: shelter, passage wait, reload, wounded.
- The individual decision keeps its survival logic, but every override sets the status to Interrupted with the reason and resumes the same task when the reason clears. It never silently drops the task. The existing emergency-cover memory already does most of this; it just does not tell anyone.
- Status changes travel upward as messages with the existing delay and reaction model, reusing the movement-failure report path. The corporal and sergeant hold a per-member status table instead of inferring it from positions.
- Equivalent re-issues keep the task id and do not create a new serial. Only a change of kind, destination beyond a tolerance, or target creates a new task and supersedes the old one. This is the direct fix for 2,400 rapid order reversals per ten battles.
- Pause and release decisions read the status table. "Fireteam released" means every member reports Executing or Done. "Crossing blocked" means a majority report Blocked with reason fire, not a geometric stall.

Exit test: on layout 5, every soldier assigned to a stage reports Done or Failed with a reason, and the gate investigator shows no pause caused by a member who was merely Interrupted.

### Phase 2. Battle drill as a task graph

Replace the maneuver, bounding, and pause code paths with one squad-level task graph and four methods. Keep the trace vocabulary, so the analyzer keeps working.

- **React to contact**: team in contact takes protected firing positions and becomes base of fire; the other team takes cover; leader assesses tracks and strength. Always available.
- **Squad attack**: establish base of fire on track T; move the other team along a route to assault positions P (from the position query in Phase 3); base of fire shifts when the movers report Executing on the final stage; movers occupy P and engage; assess. Requires a valid P and a base of fire that has delivered rounds at T within the last eight seconds.
- **Break contact**: base of fire covers while the other team withdraws to cover farther from T; roles alternate. Requires a reachable withdrawal position.
- **Search and consolidate**: move to a sector or onto a neighbouring squad. Requires no fresh track within engagement range.

Each compound task carries preconditions, a success condition, and an abandonment condition, evaluated from the leader's belief only. The squad phase enum becomes a view of which task is active. Doctrine and future officer attributes enable methods and set the weights used in Phase 5.

Exit test: on layout 5, the task graph reaches "movers occupy P and engage" on at least two of three seeds, with the trace showing every precedence edge satisfied in order.

### Phase 3. Firing positions, not waypoints

Add a tactical position query over the existing cover catalog and window list.

- Inputs: region, threat tracks to be protected from, target track to fire at, minimum angle from a given support position, required count, spacing, reachability from the movers' current positions.
- Output: ranked slots with the reason each was accepted or rejected, traced like route alternatives.
- The final stage destination of a squad attack is a slot set from this query with the 45-degree condition built in. Slots are reassigned when a mover is lost, rather than the stage being cancelled.
- The same query serves base-of-fire positions, with the condition "firing line onto T, protected from T" instead of the angle.

Exit test: on layout 5, the evaluator's second-angle gate passes on the first completed route, and the trace shows the accepted slots satisfying the angle at selection time.

### Phase 4. Tracks and clearing

Replace ten-second contact expiry with leader-scoped tracks and a coarse occupancy field.

- A track has position, uncertainty growing with age, estimated count, MG flag, and last-observed-fire time. Reports update tracks by proximity rather than by enemy id alone.
- A track is cleared when a friendly with line of sight to it reports nothing there for a few seconds, and its confidence decays faster once a friendly has physically passed it. That is the "searched position" rule.
- Squad and platoon plans reference tracks by id. Covering fire is "rounds delivered at track T by the base of fire in the last eight seconds", and T must be a track that overlooks the crossing in question.
- Rifle teams ordered to be base of fire may deliver fire at the track's last position for a bounded time after losing sight, with the MG's existing area-fire rule and worse accuracy. Friendly-fire holds stay authoritative.

Exit test: on layout 5, the squad's strength estimate no longer flips to zero between enemy peeks, and the base of fire reports delivered rounds at the overlooking track before every release.

### Phase 5. Scoring and commitment

Make the choice between methods a scored one, and make reconsideration event-driven.

- Each available method produces at most three candidate plans. Score is expected benefit minus expected cost from the belief: distance closed, angle gained, exposure seconds, support availability, strength ratio, doctrine weights.
- The active plan gets a bonus proportional to completed stages and a penalty for its remaining exposure. Switching requires the challenger to beat the active plan by a margin.
- Replanning is triggered by task status changes, new or cleared tracks, member loss, a platoon directive, or a ten-second heartbeat. The four-second full recompute goes away, which also removes most of the repeated route-cost evaluation that consumed 9.4 of 13.8 simulation seconds.
- The eight-second sustained-opportunity rule applies only to an exposed crossing. A protected lateral stage, a consolidation, and a search need only their preconditions.

Exit test: nine-encounter matrix reaches at least eight strict passes without changing the criterion. Ten-seed full battles show lower rapid order reversals and lower hold time without a firing solution than build `3679481d18031c1f`, with unexplained inactivity not up by more than five percent.

### Phase 6. Platoon scheme of maneuver

Only after the squad drill passes. Give the lieutenant a main effort, a support-by-fire squad, a maneuver squad, and a reserve, plus a consolidate directive so squads close the 48 m lane gaps. Directives reference tracks and reference the same task lifecycle, so the platoon knows when a squad reports Blocked or Failed instead of waiting 55 seconds. Add asymmetric full-battle fixtures, a fixed defending platoon against an attacking one with a numbers advantage, because mirrored doctrines hide passivity.

## What not to do again

- Do not evaluate a candidate against ten full battles before it passes the fixture. Both rejected candidates were judged on battle-wide churn metrics while the fixture was still 0 of 9.
- Do not add a new pause reason, timer, or persistence window. Every one so far has traded one pathology for another, and the report's own rejected revision cut reversals by a quarter while raising exposed inactivity by 28 percent.
- Do not let two layers mutate the same soldier's destination. After Phase 1 the corporal relays and reassigns slots; it does not invent formation offsets.
- Do not relabel completed routes, casualties, or defender elimination as envelopments. The strict evaluator stays as it is.

## Order of work and sizing

| Phase | Depends on | Rough size | Exit evidence |
| --- | --- | --- | --- |
| 1. Task contract | nothing | 1 to 2 weeks | gate investigator: no pause from Interrupted members |
| 2. Battle drill graph | 1 | 2 weeks | precedence satisfied on layout 5, 2 of 3 seeds |
| 3. Position query | 1 | 1 week, parallel with 2 | second-angle gate passes on first completion |
| 4. Tracks and clearing | 1 | 1 to 2 weeks | strength estimate stable between peeks |
| 5. Scoring and commitment | 2, 3, 4 | 1 to 2 weeks | 8 of 9 matrix, ten-seed metrics improve |
| 6. Platoon scheme | 5 | 2 weeks | asymmetric fixtures, front-line displacement |

Phases 3 and 4 can be built by a second person while Phase 2 is in progress, since they are queries over existing data. Phase 5 is the first point at which full battles are worth measuring again.

## Sources

- Jeff Orkin, "Three States and a Plan: The AI of F.E.A.R.", GDC 2006. https://www.gamedevs.org/uploads/three-states-plan-ai-of-fear.pdf
- Tim Verweij, "A hierarchically-layered multiplayer bot system for a first-person shooter", Guerrilla Games / VU Amsterdam, 2007. https://www.guerrilla-games.com/media/News/Files/VUA07_Verweij_Hierarchically-Layered-MP-Bot_System.pdf
- Remco Straatman, Tim Verweij, Alex Champandard, "Killzone 2 Multiplayer Bots", Paris Game AI Conference 2009. https://www.guerrilla-games.com/read/killzone-2-multiplayer-bots
- William van der Sterren, "Hierarchical Plan-Space Planning for Multi-unit Combat Maneuvers", Game AI Pro, 2013. https://www.gameaipro.com/GameAIPro/GameAIPro_Chapter13_Hierarchical_Plan-Space_Planning_for_Multi-unit_Combat_Maneuvers.pdf
- Michael van Lent, William Fisher, Michael Mancuso, "An Explainable Artificial Intelligence System for Small-unit Tactical Behavior", IAAI 2004. https://cdn.aaai.org/IAAI/2004/IAAI04-019.pdf
- Damián Isla, "Building a Better Battle: The Halo 3 AI Objectives System", GDC 2008. https://web.cs.wpi.edu/~rich/courses/imgd4000-b12/lectures/halo3.pdf
- Damián Isla, "Probabilistic Target-Tracking and Search Using Occupancy Maps", AI Game Programming Wisdom 3; applied in "Third Eye Crime: Building a Stealth Game Around Occupancy Maps". https://www.researchgate.net/publication/364466398_Third_Eye_Crime_Building_a_Stealth_Game_Around_Occupancy_Maps
- Matthew Jack, "Tactical Position Selection: An Architecture and Query Language", Game AI Pro, 2013. https://www.gameaipro.com/GameAIPro/GameAIPro_Chapter26_Tactical_Position_Selection.pdf
- CryEngine, "Tactical Point System". https://docs.cryengine.com/display/CEPROG/Tactical+Point+System
- Dave Mark, Kevin Dill, "Improving AI Decision Modeling Through Utility Theory", GDC 2010. https://media.gdcvault.com/gdc10/slides/MarkDill_ImprovingAIUtilityTheory.pdf
- Alex Champandard, Philip Dunstan, Matthew Jack, "Believable Tactics for Squad AI", GDC 2012. https://www.gdcvault.com/play/1015665/Believable-Tactics-for-Squad
- David Churchill, Michael Buro, "Portfolio Greedy Search and Simulation for Large-Scale Combat in StarCraft", 2013. https://www.researchgate.net/publication/261527070_Portfolio_greedy_search_and_simulation_for_large-scale_combat_in_starcraft
- Marius Stanescu, Nicolas Barriga, Michael Buro, "Hierarchical Adversarial Search Applied to Real-Time Strategy Games", AIIDE 2014. https://ojs.aaai.org/index.php/AIIDE/article/view/12714
- David Sidran, Alberto Segre, "Implementing the Five Canonical Offensive Maneuvers in a CGF Environment", 2007. https://riverviewai.com/papers/ImplementingManeuvers.pdf
- ATP 3-21.8 Infantry Platoon and Squad, Appendix E, Battle Drills. https://infantrydrills.com/manuals/fm-atp-3-21-8-infantry-rifle-platoon-squad-2024/appendix-e-battle-drills/
- "Modeling Dynamic Tactical Behaviors in CombatXXI Using Hierarchical Task Networks", DTIC. https://apps.dtic.mil/sti/tr/pdf/ADA607611.pdf
- Chris Jurney, Shelby Hubick, "Dealing with Destruction: AI From the Trenches of Company of Heroes", GDC 2007. https://www.gdcvault.com/play/765/Dealing-with-Destruction-AI-From
- Combat Mission wiki, "Tactical AI". https://combatmission.fandom.com/wiki/Tactical_AI
