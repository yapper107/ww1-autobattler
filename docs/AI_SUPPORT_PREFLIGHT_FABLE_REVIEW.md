# Fable review: support preflight and protected staging

Actual response from Claude Fable5.1 (`claude-fable-5-1`), existing subscription project session, evidence `20260915T222613-774a9b3a`. [Request009](../plans/009-support-anticipation-review-request.md). Read-only architectural findings; no promotion approval.

---

I have enough to classify the failure and specify the repair. No further reads needed.

## Verdict

Layout 7 seed 108 is not an unavoidable casualty outcome. It is a late-recognition flaw compounded by a support-position flaw and exposed waiting. The squad 1 leader knew all three final-approach defenders 8 to 30 seconds before entering the final stage, but the final-threat request is only computed at the final stage. The gun's squad then chose a firing position 95m away adjacent to the enemy and walked its only MG into MG 39's fire. Meanwhile the movers paused on their current, exposed positions 13 to 16m from known riflemen. Candidate82 also failed this seed (`original-candidate82/acceptance.json:215-224`), so the handoff changes did not cause it. The smallest general repair is a final-approach preflight handshake with three bounded parts, described below.

## Trace-backed timeline (`original-candidate91/battle-108-1789536284427118908`)

- Leader 10 knowledge (`trace.jsonl:3703`, 71.15, stage 4 advance): enemy 33 known since 49.6 at (37.8,-22.1), 35 since 52.4 at (41.3,-22.9), 38 since 68.6 at (36.6,-22.5). Objective is (38,-26.1). Enemy 38 sits 1.6m from it. Support is gun 7 firing at MG 39 (29.2,7), useful.
- 79.10: final stage entered. 79.40: pause, "support lost" (`trace.jsonl:3974`). `support_threat` 39, requested threat 33 fresh at 78.4, gun deliveries all at (29.2,7). The pause is candidate91's intended uncovered-threat gate (`CognitiveSim.cpp:416-419`). Movers 10, 11, 12, 13, 15 hold at their current positions near (25,-29).
- 79.45: gun 7 receives the new focus (40.7,-30) (`trace.jsonl:3982`). Its post (-59.2,4.5) is 105.6m away, so line 279-283 rejects the current slot.
- 82.20: squad 0 leader repositions the gun to peek (-43.6,-21.5), a 28m move (`trace.jsonl:4141`, `paths.jsonl:296`). The gun's "Done: useful support fire" at 81.8 is superseded at 83.35. Old-sector fire on MG 39 stops.
- 88.20: requested threat has flipped from 33 to 38 by freshness (33 observed 79.6, 38 observed 85.2; scoring at `CognitiveSim.cpp:302-309`). The current slot fails line 266-268, and `Viewpoints` sorted by distance from the gunner returns peek (38,-21.9) as the nearest cover with a clear line to 38 (`trace.jsonl:4398`, `paths.jsonl:302`). That is 95m away and 3.3m from the enemy.
- 86.1 to 96.5: movers hit by 38, 33 and 35 at their hold positions (`events.jsonl:1446-1558`). Prepare deadline was 99.4; they never reached it.
- 97.3: MG 39 hits the gun at (-37.3,-11.3) mid-walk (`events.jsonl:1563`, `trace.jsonl:4740`). 104.9 gun killed. 106.3 squad 0 exhausts.

## Code findings

1. **Recognition too late by design.** Final-threat selection runs only when `routeStage+1==stages.size()` (`CognitiveSim.cpp:301`). The transport sends `SupportDeploymentSector` focus (`CommandSim.cpp:641`), so the gun could have been re-tasked during stage 4 while the movers were still screened.
2. **Support position choice has no travel bound and no exposure test.** `Viewpoints(*gunner, ..., 2*SightRange, ...)` is sorted by distance from the gunner, and the only protection test is against `gunSector` (`CognitiveSim.cpp:284-288`). Known MG 39, which had killed squad 0 members all battle, is not considered. Path exposure is not measured.
3. **Requested identity flaps on freshness.** Two riflemen 5m apart swap the dependency, each swap forcing a reposition (`CognitiveSim.cpp:302-309`, then 266-268).
4. **Pause holds are raw current positions.** `holdMovers()` copies `member.position` (`CognitiveSim.cpp:209`, used at 584 and 591). No protection check against known fresh threats.
5. **Abandon-current-cover.** When the gun leaves for an unreachable new focus, old-sector delivery stops and nothing tells the requester the new focus is uncoverable. The requester waits on `method_support_deploying` renewals (`CognitiveSim.cpp:566-571`) up to the 60s prepare cap.

## Recommended repair: final-approach preflight handshake

One coherent correction in three bounded parts. Release still requires real delivery; nothing here releases on assignment or deployment.

1. **Preflight the final threat one stage early.** Evaluate `requestedThreat` when `routeStage+2>=stages.size()`. Make it sticky: retain while the current threat stays known and observed within 8s; switch only if it goes stale or a fresh automatic weapon appears within the 18m final radius. Transport needs no change. Gate the advance into the final stage (`CognitiveSim.cpp:585`) on `requestedThreat<0`, or `ReceivedThreatSupport` for it, or an acknowledged useful local role for it. Otherwise enter Prepare at the penultimate destination with the existing prepare deadline.
2. **Protected staging on any Prepare hold.** Replace `holdMovers()` with a bounded selection: for each mover, the nearest shelter within 8m reachable by `FollowCorridor` on the accepted route whose shelter passes the same `ProtectedAt` plus `ClearLine3D` test against every known threat observed within 8s and within 100m that `Positions` already uses (`CognitiveSim.cpp:145-148` in the earlier fingerprint). Fallback is the current position with a trace reason. Trace `method_staging_hold` with per-member exposure count.
3. **Bounded gun redeployment with an explicit negative acknowledgment.** In the reposition branch (`CognitiveSim.cpp:284-288`): require candidate path length at most 40m, shelter protected against all known fresh threats within 100m, and `TacticalRoutePlanner::Measure` fire equal to zero on the path. If no candidate passes, keep the current slot and current sector fire, and have the squad 0 leader mark the request uncoverable so the existing SupportProgress emitter (`CommandSim.cpp:460-472` region) sends `status=Blocked, cause=Unreachable, sector=focus` to the requester. On the mover side, a Blocked progress matching `SupportDeploymentSector` ends the wait immediately: try local cover if an effective rifleman exists, otherwise `Fail(Support)` and escalate. This removes the deadlock without abandoning the working cover.

Expected effect in 7/108: the request goes out around 71 instead of 79.45; the gun stays on MG 39 because no bounded protected position exists, and the requester receives Blocked within about 2s; the squad either finds local cover against 33 or fails honestly at the screened stage instead of dying at (25,-29). A pass is not guaranteed, because the objective is enemy-occupied cover, which is plan 005 step 4 territory. Do not tune for it.

## Scenario criteria

- **Preflight.** Screened penultimate stage, final threats fresh and known, gun out of range at its post, one protected candidate within 40m. Assert the focus changes before movers reach the penultimate destination, the gun delivers at least two rounds at the new threat, and the final stage is entered only after that delivery is received. Control: deployment Arrived report without rounds gives no release.
- **Uncoverable focus.** Only candidates adjacent to the enemy or beyond 40m. Assert the gun moves less than 2m, continues old-sector delivery, and the requester receives Blocked within `reportDelay+2`; the mover plan leaves Prepare by local cover or Support failure within a further 2s, not at 20s or 60s. Control with one reachable candidate: reposition and delivery.
- **Protected staging.** Penultimate destination exposed to known threats, protected shelters within 8m. Assert every hold passes the protection test against each known fresh threat and hits on staged movers from known threats are zero over 15s. Control without shelters: fallback positions with the trace reason, unchanged deadlines.
- **Identity stability.** Two riflemen 5m apart with alternating observation freshness. Assert one `requestedThreat`, one focus sent, one reposition at most.
- **Boundaries.** Trace parity via `GameplayDigest`; all threat inputs from `WithTracks(leader)`; gun decisions from the gun squad leader's knowledge only. No opened seeds 2001 to 2010.
