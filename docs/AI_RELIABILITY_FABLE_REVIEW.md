# Fable review: AI reliability repair

Attributed response from **Claude Fable 5.1 (`claude-fable-5-1`)**, obtained16 September2026 through the existing subscription launcher. Request: [007](../plans/007-final-approach-review-request.md). Evidence run: `20260915T210015-0aae3ee1`, project session `0b43cbb8f8675fc01d54`. The launcher validated the requested model and saved the response. Fable read the checkout and did not edit it. This is a review with required corrections, **not promotion approval**.

---

## Verdict

The three additions are sound in their knowledge boundaries. I found no observer-truth leak in local cover, final reconnaissance, or typed arrival counting. The failure in layout 6 seed 109 is a trace-confirmed circular wait on a dead cross-squad gun, and none of the three additions can fix it. Recon made it slightly worse by exposing a scout for evidence that only caused slot churn. The smallest reliable protocol is: an explicit received "support unavailable" signal, a sticky lost-support identity that replans cannot rebind, a platoon support amendment that bypasses the executing-mission skip, and a hard cap on Prepare renewals. Details below, with the fire-priority change kept as a hypothesis test.

## Trace-supported cause chain (candidate61, `battle-109-1789530731900363002`)

- Gun 7 incapacitated at 75.48 by MG 39 (`events.jsonl:843`). Its loss receipt at 75.55 (`trace.jsonl:2695`) goes only to squad 0 (`TaskSim.cpp:47`).
- Squad 1's leader (soldier 8) enters the final stage at 81.0 with `support=7`, `support_threat=39`, and a stale progress record from 73.2 whose own deadline was 88.05 (`trace.jsonl:2906`). Six movers wait.
- No channel can carry the loss to soldier 8. Casualty receipts are intra-squad (`ReactionSim.cpp:120`), wound relays are intra-squad (`CommandSim.cpp:537`, `ReactionSim.cpp:153`), SupportProgress requires the gun itself to be active (`CommandSim.cpp:462`), and the own-squad loss branch requires `p.support/SquadSize==leader.squad` (`CognitiveSim.cpp:213`). Line 207 can never match a cross-squad gun because `taskReports` is indexed by own-squad slot (`BattleSim.h:307`).
- The platoon replanned at 82.15 (`events.jsonl:922`) but skipped squad 1 because its goal reported Executing (`PlatoonSim.cpp:259-263`). The mission expires at 360s, so nothing times out.
- Recon at 85.8, evidence at 92.6, then five occupied-slot replacements between 95.6 and 102.7 (`trace.jsonl:3446-3774`). Line 414 has no retry bound, unlike the Unreachable path at line 420.
- At 111.8 the plan fails with "support failed to become useful" and the replan accepts an alternate approach still bound to gun 7 with a new 30s wait (`trace.jsonl:4093`: `support:7`, `support_wait_deadline:141.8`). This is the loop: `CognitiveSim.cpp:528` carries `p.support` forward, line 531 only fills when negative, and line 556 only invalidates routes when negative.
- Frozen evaluator constraint: `evaluate_routes.py:24-25` skips any mover whose designated support is dead or absent. After 75.48 this seed cannot pass unless a living support is designated before the angle window. That is a fact about the gate, not a reason to relax it.

Gun 7's last bursts (72.55 to 74.0) went to rifleman 32, and its last burst at MG 39 ended at 67.05 (`trace.jsonl:2906` covering_fire). Whether numeric-ID round-robin (`BattleSim.cpp:305-318`) or usability and sight-line rules caused that is not decidable from this trace. Treat it as a hypothesis.

## Findings in the additions and support binding

1. **Circular wait, confirmed.** Dead cross-squad support is never retired. Fix location: `CognitiveSim.cpp:182, 207, 213, 528-531, 556`.
2. **Deployment renewal loophole.** Line 469-475 extends `reconsiderAt` on every new gun assignment id. A gun reissued every time the sector changes can renew indefinitely up to mission expiry. Cap total Prepare time per stage.
3. **Explicit withdrawal ignored.** Line 182 only updates when `order.supportSoldier>=0`. A directive carrying -1 cannot unbind. Add an explicit withdrawn flag rather than overloading -1.
4. **Local cover gates the gun.** Line 351 makes MG support insufficient once a local role exists, and a local failure fails the whole plan (line 348-349) even if the MG now covers `requestedThreat`. Clear the role and re-evaluate instead of failing.
5. **Occupied-slot churn unbounded.** Line 410-416. Bound with the shared `slotRetries`, then mark `unavailable` so capability shortfall reaches the parent.
6. **Recon runs against a dead dependency.** Line 268-269 gates on stale evidence only. Gate additionally on recent life from `p.support` (progress or delivery within 10s). Otherwise skip and escalate.
7. **Recon retaining the route is safe** given `FollowFinalApproach` (line 283), 20m bound, `cost.fire==0`, protected shelter, typed counting excluding Observe, and `scouts` reset on stage advance (line 488). The swap at 293-294 is correct because generation bumps invalidate old receipts. No change needed beyond finding 6.
8. **No knowledge leak found.** Local cover uses the shooter's own transported origin and the leader's ally sighting (lines 319-333). `s.Active()` on own-squad members follows the existing convention. The new emitter below must likewise read only the sending leader's own receipts.

## Minimal protocol and code changes, in order

1. **Unavailable-support notification.** In the SupportProgress emitter (`CommandSim.cpp:460-472`), add a second emitter: a squad leader whose `supportSector.requester>=0`, `time-observedAt<=8`, and whose `taskReports[shooter%SquadSize]` shows `soldier==shooter && !active`, sends `SupportProgress{shooter, status=Failed, cause=Casualty, statusAt=receipt.at, observedAt=now}` to the requester, rate-limited. Relax the transport filter at 384-385 to accept the support squad's leader as sender when `shooter==accepted.support`. Relax `ReactionSim.cpp:109-112` to accept terminal casualty reports regardless of route, stage, and sector. In `CognitiveSim.cpp` after line 207: if `deployment.shooter==p.support && status==Failed && cause==Casualty`, set `p.lostSupport=p.support`, `p.support=-1`, `Fail(p,Support)`, and exhaust with "assigned support reported lost; request higher-command replacement". Preserve `lostSupport` across the reset at line 581 and honor it at 528-531 and 556. Verify the support leader actually stores the received sector in ReactionSim; I did not read that branch.
2. **Platoon support amendment.** Append `bool supportWithdrawn=false` to `PlatoonDirective` (`BattleSim.h:274`). In `UpdatePlatoon`, when a fresh situation report from the support squad shows `supportSoldier` no longer equal to the mover's bound gun (`PlatoonSim.cpp:182` already emits -1), issue an equivalent directive (same intent id, objective, expiry) with the best other active MG within 110m or -1 and `supportWithdrawn=true`, bypassing the executing skip at 259-263 for amendments only. In `CognitiveSim.cpp:182`, on `supportWithdrawn`, record `lostSupport`, rebind, reset `supportDeployed`, `supportUseful`, `awaitedSupportAssignment`, `supportWaitStarted`, drop to Prepare with `holdMovers()`, and trace `support_replaced_by_command`. Real delivery from the new gun still gates release. With -1, fail and exhaust.
3. **Silence is not death, but it is bounded.** When `progress.deadline+reportDelay+2` passes with no newer progress or delivery from `p.support`, fail Support with a distinct reason and mark the gun silent-since. Replans must not rebind a silent gun until evidence newer than that mark arrives. Cap per-stage Prepare time at 60s regardless of renewals (fix finding 2).
4. **Recon gating and slot-churn bound** (findings 5 and 6).
5. **Local-cover decoupling** (finding 4).
6. **Primary threat identity, as a test.** Append `int primary=-1` to `SupportSector` (`BattleSim.h:237`), set from `requestedThreat` else `supportThreat` at `CommandSim.cpp:614-617`. In `SelectFireSolution`, prefer primary while usable; allow one secondary burst in four; switch fully only when primary is unusable. `ReceivedThreatSupport` is unchanged, so secondaries never certify the dependency.

Run the original nine after step 3, and the historical thirty only after all six pass focused tests.

## Discriminating physical tests

- **T1 dead cross-squad gun.** Variant 20 family, gun 7 placed so enemy 32 kills it. Assert soldier 8 unbinds only after `loss.at + 2*reportDelay`, with the new trace reason, and never accepts a route bound to 7 afterward. Control with a sheltered live gun: no unbinding. Trace parity via `GameplayDigest`.
- **T2 replacement gun.** Variant 17 layout with a second MG. After loss, mover receives an amended directive naming the second gun and releases only after two real rounds from it at `requestedThreat`. Control without a second gun: Blocked then Observe or Reserve within bounded time.
- **T3 silent but alive.** Gun with long `reloadUntil` past its reported deadline. One Support failure, no rebind until real fire resumes, then rebind through received evidence only.
- **T4 primary identity.** MG plus two riflemen within 4m of the sector, durable targets. At least three quarters of gun rounds aimed at primary while usable. Controls: primary track stale beyond uncertainty gives zero primary shots; lifted sector gives none.
- **T5 recon gating.** Variant 34 with gun 7 dead at start: no `method_reconnaissance`, escalation instead. Unchanged variant 34 still passes.
- **T6 occupied churn.** Fresh contacts at every final slot: at most two replacements per member, then `unavailable` and parent reassessment.

## Unresolved decisions

- Whether a rifle-only covering source may ever be the designated support when no MG remains in the platoon. This is a designer call. Under the frozen evaluator, 6/109 after 75.48 can pass only with a living designated support, so without this decision the honest outcome for that seed is escalation, not a pass.
- Whether a wounded but active gun counts as unavailable. I recommend casualty only for step 1 and a trace-only "degraded" marker for wounded.
- Whether the platoon may amend support during an executing mission. I recommend yes, limited to the support field, since it changes no objective or route.
