# Fable review: firing-area consistency and safe fallback

Actual Claude Fable5.1 (`claude-fable-5-1`) response, existing subscription, evidence `20260915T234144-fc8b1bd4`. [Request011](../plans/011-final-threat-execution-review-request.md). Read-only findings; no promotion approval.

---

I have enough evidence to classify both failures. No further reads are needed.

## Verdict

Neither failure is an unavoidable tactical loss in the sense that matters here. Two observed defects and one pause-safety gap explain them:

1. **7/107: a point-geometry refusal against a focus the gun was actually hitting, followed by a permanent Reserve.** The support squad refused focus (38.75,-24.39) at 65.05 for lack of a clear line to that exact coordinate, while gun 7 killed enemy 38 at (36.6,-22.6), 2.8m from the focus, at 65.3 (`trace.jsonl:3870`, `events.jsonl:1190`). Squad 1 exhausted at 66.6 with seven healthy members. The platoon fell back to Observe at 68.55, then Reserve at 78.6 (`events.jsonl:1262, 1386`), and never issued squad 1 another order for the rest of the battle. The only PlanPlatoon order to squad 1 in the whole run is the initial flank at 10.05.
2. **7/108: an exposed pause 8 to 12m from the objective's occupant.** Enemy 33 was first seen personally at 77.4 sitting 0.5m from the objective (`trace.jsonl:4061`). The pause at 78.4 found no protected shelter within 8m and held all five movers at exposure 1 ("current position retained"). Four were killed at those positions between 88.4 and 91.5 by 33 and 35. The gun accepted three bounded repositions (73.95 to 80.75) but delivered nothing before the squad died.

The question about the platoon's contact selection is answered yes: the effort contact is the freshest sighting plus a 6s bonus for an MG (`PlatoonSim.cpp:206-211`), and the support squad is picked by gun count and distance (lines 54-58) with no check that the gun can reach the named enemy from anywhere near its position. That produced the 109 objective at (26.8,0) with an uncoverable named rifleman. In 110 it did not fire, because the refusal path fell back to Observe instead.

## Observed defects, with code

- **Refusal tests a point, delivery accepts an area.** The current-slot test at `CognitiveSim.cpp:277, 293-294` requires `ClearLine3D` to the exact focus at aim height or 1.5m. Delivery acceptance (`ReceivedThreatSupport`) accepts any report within 4m of the focus, and `SelectFireSolution` already re-aims to a cover edge or a cover peek within 4m when the exact point is blocked (`BattleSim.cpp:297-304, 331-336`). The planner is stricter than the shooter, so it refuses focuses the gun can and does service.
- **Refusal ignores the gun's own current delivery.** The gun's squad leader holds the gun's delivery reports. A refusal is issued even when those reports show two or more rounds within 4m of the focus in the last 6s.
- **Fallback directives are permanent.** Directive expiry is `maxSeconds` (`PlatoonSim.cpp:64`), the Observe to Reserve fallback inherits it (lines 43-45), a Hold or Reserve plan reports Executing forever (line 196-198), and the executing check at lines 308-316 then skips the squad in every later PlanPlatoon. A full-strength squad can sit in reserve from 78.6 to 360.
- **Effort contact and named enemy are chosen without support feasibility.** Lines 47-64: the named enemy is whatever was seen last, not a threat to the chosen objective that the assigned gun can reach.
- **Staging fallback is "stay exposed".** `SelectStagingHolds` (`CognitiveSupport.cpp:47-59`) searches 8m for a zero-exposure shelter and otherwise keeps the current position. The retained route's previous stage holds were exposure 0 at 69.35 (`trace.jsonl:3633-3637`), 15 to 20m behind.

## Implementation contract

Three bounded changes, in this order. None touches weights, layouts, the evaluator, or hidden state.

1. **Area-consistent refusal.** In the current-slot and candidate checks (`CognitiveSim.cpp:277, 293-300`), treat the focus as coverable if `Distance(peek, focus) <= 100` and there is a clear line from the peek to the focus at aim height, to the focus at 1.5m, or to any cover peek within 4m of the focus at 1.5m. Do not refuse while the gun's own delivery reports show two or more rounds within 4m of the focus in the last 6s; instead keep the current slot and let delivery transport certify it. Physical scenario: gun at 96 to 99m with a blocked line to the exact focus but a clear line to a cover peek 3m away. Expect no refusal, real rounds within 4m, requester release after receipt. Control: no line within 4m and no 40m redeployment gives the refusal as today.
2. **Bounded, re-taskable fallbacks and a coverable named enemy.** Give Observe and Reserve fallback directives an expiry of `min(previous.expiresAt, issuedAt + 45)`, and exempt `Reserve`, `Observe` and `Consolidate` from the executing skip at line 316 so PlanPlatoon may re-task them when the situation hash changes. In PlanPlatoon, when a Seize objective is chosen, name the enemy that threatens that objective (within 18m with a clear line to it, the squad's own rule) and is coverable from the support squad's reported position: distance at most 100 and a clear line from `report.position` at 1.5m to the contact or to a cover peek within 4m of it. If no known contact is coverable, issue Observe or Reserve, never a Seize with an uncoverable named enemy. Scenario: squad in Reserve, observation clears the objective's occupants; PlanPlatoon re-tasks within one plan cadence after the fallback expires. Control with unchanged knowledge: remains in reserve. Second scenario: two contacts, one coverable; the Seize names the coverable one; with none coverable the order is Observe.
3. **No exposed pause.** In `SelectStagingHolds`, when the 8m search fails, fall back to the retained route's previous stage staging holds if they lie within 25m back along the corridor via `FollowCorridor` and still have zero known exposure; only if that also fails keep the current position and trace it. Scenario: mid-stage a new contact exposes all movers, no shelter within 8m, previous stage holds protected 15m back. Expect every paused mover at exposure 0 within `2*reportDelay+8` seconds, and fewer hits on paused movers than the control that freezes in place. Control with a shelter within 8m: uses it, no retrograde.

Expected but not promised: 7/107 changes materially, because the refusal at 65.05 would not occur and the gun's fire on 38 would certify the approach, or the squad would be re-tasked after the occupants died. 7/108 is the harder case: the objective was enemy-held at point-blank range and the honest outcome may still be Blocked then Observe. That is a tactical loss the design accepts, but only after the exposed pause is fixed.

Not recommended: unprotected local rifle cover as support, another weighting experiment, or squad-level foothold invention.
