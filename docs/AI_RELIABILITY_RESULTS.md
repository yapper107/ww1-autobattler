# AI reliability repair — experimental history

**Main-build decision superseded on 16 September 2026:** the user selected candidate90 (28/30 historical, 8/9 original) as the working default. See [current main build](AI_MAIN_BUILD.md). The candidate141 investigation below remains preserved experimental history; its results are not the current main-build results.
Astra is implementing the user's request to reach 30/30 historical cases. The user subsequently made this target explicit and requested Fable5.1 to review the failures before the next repair plan.

## Baseline and frozen gates

Baseline simulation `8a5b385e04c22185`: original **9/9**, historical seeds110–119 **22/30** (layouts5/6/7:10/7/5) on Linux and native Windows. See [diagnosis and repair plan](../plans/005-held-out-reliability.md).

The historical cohort is now an opened regression corpus. Independent seeds2001–2010 were frozen before repairs in `tests/ai_validation_v2.json` and remain **unopened**. Open them only after mechanisms and original9/9 pass on a frozen candidate. No evaluator changes, acceptance-duration changes, or authored layout5–7 changes have been used to improve scores. Cognition remains opt-in.

## Latest measured checkpoint — candidate141, not accepted

Simulation **`1abef4125efaed2a`** scores **original8/9** (3/2/3) and **historical15/30** (5/6/4) on Linux and native Windows, with identical case pass/fail results. Original6/108 fails. This is below the baseline22/30 and the earlier best28/30; there is no promotion or readiness claim. The requested30/30 has **not** been achieved. The opened historical cohort measures regression, not independent generalization. Independent2001–2010 remain unopened because original9/9 is not satisfied.

The actual [Fable013 review](AI_ADAPTATION_FABLE_REVIEW.md) and [implementation/resolutions](../plans/013-command-adaptation-implementation.md) cover evidence-gated command retries and support-position commitment. Both repairs are implemented. The review does not certify acceptance. Astra explicitly rejected memory expiry as clearance, support-squad centroid as proof of gun geometry, and unrelated covered targets as substitutes for the required threat. Two review interpretations were corrected against shot/casualty records.

### Current verification

- Linux and native Windows: reliability, decision-loop, cognition and foundations suites pass. Both normal-map600s scenarios pass.
- Original native Windows:8/9. Historical native Windows141:15/30 (5/6/4). All39 case pass/fail classifications match Linux.
- Ten preserved Linux legacy battle digests exactly match baseline. No legacy controller switch or numerical tactical-gate change.
- Linux600s traced/untraced gameplay digests match on both maps. Peak traced memory:5,087,059,968 bytes for Fractured Works,4,941,361,152 for Trenches; native Windows untraced:5,008,318,464 and4,765,081,600. All below6GiB at64 soldiers.
- Current native Unreal build passes. Both maps pass600s playback/seek smoke checks, and both inspector screenshots were visually inspected. Build/smoke checks establish integration, not tactical quality.

### Implemented in the latest review pass

- A successful observer's correctly matched report survives a second optional observer's timeout. The route remains, and occupation still needs its own receipts. Physical57 tests persistent reload and trace parity; historical5/116 now passes.
- A refused approach becomes eligible after explicit newer clearance without a nearby replacement threat, or newer real relevant rounds. A bounded commander-owned ledger prevents duplicate reports from reopening the same retry. The observation fallback targets the actual refused focus. Physical58 receives empty-patch clearance at6.4s and issues one retry8.05s; durable-occupant59 does not. Both use production sensing/transport and preserve trace parity.
- A changed fire request retains the selected gun position if that position can cover the requested focus. It still updates the observation/fire sector. Among feasible replacement positions, coverage of the received threat set precedes travel distance. The exact-focus movement gate remains. Existing physical handoff/preflight/area-fire controls pass.
- Candidate140 omitted the sector update when retaining a position and regressed to14/30. Candidate141 corrects that omission and returns to15/30. Reduced reposition counts alone were not treated as tactical improvement.
- Two controlled cognition fixtures now include real starting shelter so they isolate support and alternate-method contracts, retaining their original behavioral assertions. Physical15/16 use a durable passive target and a valid cover destination while still requiring real support release/loss.

### Remaining failures and limits

Of fifteen historical failures, nine eliminate all defenders and six leave defenders alive. This is diagnostic context, **not a replacement acceptance test**. Some are combat attrition; others still fail to turn support, information and movement into a completed useful approach. No claim is made that every remaining failure is legitimate.

| Failure | Current evidence |
|---|---|
| Original6/108 | Route completes93.6s; five movers survive; only one has a qualifying final view. Defenders37/34 were already dead75.7629/81.4176s; final defender33 incapacitated104.527s. |
| Historical5/111 | All eight movers survive and complete; best simultaneous two-member angle interval2s, below unchanged3s. |
| Historical5/115,6/112 | Routes complete; respective best intervals2.8s and1.6s. Neither is rounded into a pass. |
| Historical6/111 | Two no-protected-staging failures precede victory; no route completes. |
| Historical6/113,6/118 | Support refusal followed by fallback; defenders eventually eliminated but no accepted route completes. |
| Historical7/111,7/112 | Support/approach limitations followed by received support loss; defenders remain. |
| Historical5/110,5/112,7/119 | Moving squad reduced to one, zero and one surviving member respectively; forcing a two-person occupation is not justified. |
| Historical5/113,7/113,7/116,7/117 | No completed useful route; refusal, capability loss or exhausted methods remain in the trace. Requires further diagnosis before attributing all misses to randomness. |

Evidence: immutable `.local/held-out-repair/candidate141`, original/historical matrix directories, `classify141.log`, per-suite logs and native playback captures. The current recommendation is **continue AI stabilization before adding combat systems that depend on its decisions**. No recommendation to lower the gate or make cognition default is implied.

Best historical checkpoint: candidate82, simulation **`9dc43f32ed5ecdbc`**, passes **28/30 historical cases** on Linux (layouts5/6/7: **9/10,10/10,9/10**), with original **8/9**. Candidate90 repeats those scores. Historical failures are5/110 and7/115; original7/108 fails. Later fixes prevent uncovered movement and expose support/recovery limitations. The older scores do not certify current source.

- 28 focused reliability scenario summaries pass on Linux and native Windows for candidate82, including production fixtures18–42 and negative controls.
- Linux decision-loop, cognition and foundations suites pass at82. Native Windows CLI and test builds pass; the remaining Windows suites and matrices need repetition on the final candidate.
- The earlier complete platform/resource checkpoint was candidate63 (`0a6da225c7725d5c`), with23 reliability scenarios and decision-loop/cognition/foundations suites passing on both platforms. Both normal maps passed600s simulation and native Unreal playback/seek, with both inspector screenshots visually inspected. These are historical evidence, not final-source certification.
- Candidate63 standalone600s peak memory: Linux with traces4,978,135,040 bytes (Works) and5,016,084,480 bytes (Trenches); Windows without traces4,957,192,192 and4,770,230,272 bytes. All were below6GiB. Repeat on the final source.
- Earlier full legacy suites passed on both platforms; ten preserved legacy digests matched baseline through candidate63. Repeat final-source checks before readiness.

Progression: baseline22/30 → candidate72 25/30 (10/9/6, original9/9) → candidate81/82 28/30 (9/10/9, original8/9). Improvements in one cohort do not excuse regressions in another. No seed-specific settings or relaxed evaluator criteria were introduced.

## Retained mechanisms under validation

Execution distinguishes actual occupation, transit arrival, observed sight lines and delivered fire. Planning and execution share bounded final connectors. Current physical occupation survives temporary reloads; obsolete receipts cannot claim a later role. Wounded holders require current correlated evidence. Known enemy-occupied destinations are replaced with bounded alternatives.

Support carries a named shooter and threat; unrelated near-sector rifle fire cannot substitute for the original gun. Delivery memory retains original per-target timestamps. Distant guns receive delayed friendly movement intent. Real personal firing remains possible while a mover waits for support or for other members at a transit waypoint.

A physical transit test exposed an aim starvation bug: detection delay was added by the perception producer but omitted from the consumer's freshness allowance. Fire actions could produce zero shots. Correcting that bug changed firefights and reduced original acceptance. It has not been reverted to recover earlier favorable scores.

Final local cover adopts a rifleman who has already delivered relevant fire from a protected reported position, then requires a new role receipt and continued delivery. It keeps the original gun dependency separate. The physical control with a reloading source cannot activate it. Wrong/stale fire and obsolete receipts cannot release movement; source loss produces failure. Trace-on/off parity passes in the focused case.

Bounded final reconnaissance lets up to two available riflemen inspect selected protected viewpoints when support targeting information is stale. The accepted route and goal remain. Observation completion triggers a separate new occupation assignment and receipt; it never directly completes the goal. An unreachable-viewpoint physical control cannot complete. Clear local movement inside the12m final area need not funnel every member through the route centre.

## Earlier diagnosis at candidate82

Original7/108 reaches final approach but loses its moving team before obtaining two useful occupants. Candidate82 trace inspection identifies a support handoff deadlock: the requester names a newly observed threat near the final position, but the deployment message retains the old sector. The new threat is approximately104–105m from the gun, beyond its100m range, with blocked firing geometry. The dependency switches only after actual delivered fire, while deployment never receives the new destination needed to make that fire possible.

The correction separates requested deployment focus from the current fire dependency. The supporting officer may relocate using fresh received target evidence; moving members still require actual relevant delivered fire. A dedicated physical scenario is being built to discriminate this behavior. This is an identified execution defect, not proof that its correction will pass7/108 or either remaining historical failure.

Cross-squad casualty transport and support-only mission amendment, previously identified here, now pass physical loss/replacement fixtures37–39. Injury capability through assignment transport gaps and detours passes40–42. These mechanisms are retained even when changed firefights alter tactical outcomes.

## Architecture attribution and evidence

An actual [Claude Fable 5.1 architectural review](AI_RELIABILITY_FABLE_REVIEW.md) was obtained after the subscription reset, using [request007](../plans/007-final-approach-review-request.md). Fable confirmed the cross-squad dead-support wait and required explicit loss transport, sticky availability, support-only platoon amendments, bounded preparation, occupied-slot retry limits and retirement of redundant local covering roles. This is **not promotion approval**. Implementation and focused verification are ongoing.

Astra resolution: loss relays retain both `statusAt` and `observedAt` at the original casualty evidence time, rather than refreshing `observedAt` on relay. This follows the accepted no-timestamp-refresh contract. Primary-target weighting was tested and rejected: candidate73 three-of-four priority bursts reduced original9/9 to8/9 and historical25/30 to23/30. Direct inspection had already found that expired raw `.known` flags excluded otherwise usable remembered MG positions; that proven consumer bug remains fixed. No failed priority experiment was promoted.

Local evidence: `.local/held-out-repair/`. Immutable candidate source/binary snapshots, scenario logs, matrix traces and `experiment-notes.md` retain rejected experiments. Intermediate scores (including9/9 and historical25/30) do not certify the current source. Do not report30/30 or default readiness from this checkpoint.

## Ongoing capability and acknowledgment checks

Physical support-loss fixtures37–39 cover a real projectile casualty, a sheltered live-source control, and a second source assigned through actual platoon report transport. They exposed a stale-feedback race: pre-amendment Blocked reports could trigger a new mission after a support-only amendment. Candidate77 adds a directive acknowledgment to squad situation reports, rejects obsolete fallback evidence, and bounds the wait for acknowledgment. The replacement scenario requires retention of the actual mission/route until fresh delivery from its new source.

Candidate75 tests bounded injury reassessment instead of immediate role removal: retained task identity, observed movement, unchanged overall deadlines, and retirement after persistent inability. Original9/9 remains, historical25/30 (9/10/6). Physical40/41 distinguish a mobile wounded member from one unable to move. Candidate76 adds rate-limited actual movement receipts so out-of-view execution is observable; original8/9, so this is still under investigation. The actual [Fable capability review](AI_INJURY_CAPABILITY_FABLE_REVIEW.md) identified the wound/assignment-generation transport gap, overly short shelter allowance and stale retirement hold positions. Those corrections and actual remaining-path progress reports are under focused verification. No promotion approval is claimed.

## Capability corrections verified through candidate82

Per-generation injury windows survive assignment/report transport gaps. Remaining-path progress comes from the moving soldier's own execution path, arrives through normal delayed transport, and cannot refresh contact evidence. Shelter/passage interruptions pause the capability countdown for a bounded period; reload does not. Retirement holds the latest known position. Fresh contradictory positions invalidate stale arrival claims. Reassessment of the same approach counts retained capable wounded members; a new assault still uses the stricter eligibility rule.

Progress-only reports do not continuously reset a healthy squad's decision cadence. Wounded progress can prompt an early capability assessment, while normal execution retains the once-per-second assessment. Injury evidence and remaining-path distance are included in traces, state digests and replay seeking checks. Candidate82 passes the focused scenarios on both platforms; native Unreal replay must still be repeated for these new fields.

## Support-deployment handoff verification

Candidate90 (`d0e577abab5319b6`) passes29 focused reliability summaries on Linux. Physical43 starts with an obsolete support sector and an enemy gun beyond the supporting gun's range. A forward observer supplies real sightings through production transport. The supporting officer receives the requested new deployment focus; its gun moves more than20m, fires at the new enemy, and only received delivery acknowledges the retained method's handoff (27.2s in this fixture). Stale targeting falls back to the existing dependency; unrelated old-sector fire fails the control.

Deployment focus and the current fire dependency are separate. Own-squad and cross-squad guns can select a reachable protected firing position for the request. Deployment progress can explain a bounded wait but cannot count as delivered fire. The competing ten-second sector-retarget rule was removed in favor of this single request/handoff path.

The local-cover scenario still requires actual rifle fire, a new role assignment, its delayed matching receipt, continued delivery, and negative controls. Its test frame is now selected when local delivery becomes useful; simultaneous execution is not assumed while the original gun redeploys. An additional assertion requires both independent dependencies whenever the plan executes. This updates an incidental phase assumption without relaxing any tactical evaluator criterion.

Candidate90 remains original8/9 and historical28/30. Candidate91 (`8e5aec31f401cb2a`) closes an additional uncovered-threat release: old-sector fire cannot authorize final occupation while a different freshly reported final threat awaits coverage. Its controlled negative test and all29 reliability scenarios pass, as do Linux decision-loop/cognition/foundations. The original remains8/9 and historical performance regresses to23/30 (9/9/5). This stricter rule is not accepted as a finished repair. Delayed gun relocation and exposed waiting are under investigation. An additional bounded architecture consultation uses request009; do not attribute approval without its actual response.

## Preflight, protected staging and refusal protocol

Actual [Fable review009](AI_SUPPORT_PREFLIGHT_FABLE_REVIEW.md) identifies late final-threat requests, an unsafe95m gun relocation, freshness-driven target switching and exposed waiting. Candidate100 (`3cc2a77863c9f2d4`) implements a bounded preflight handshake and passes32 focused reliability summaries on Linux, including new physical44–47, plus decision-loop/cognition/foundations. Its original result is **7/9**, so this remains unfinished repair work. Independent validation is still unopened. Candidate91 had also passed all focused suites on native Windows, both600s normal-map Linux scenarios and the full Linux legacy suite (226s); those results do not certify100.

- Request the final threat one stage early; retain a fresh requested identity unless a fresh automatic weapon supersedes it. Gate final entry on received fire or the acknowledged local role.
- Bound changed-sector gun deployments to40m of actual path, reject shelters exposed to other fresh known threats, and reject paths through received incoming-fire danger. These are implementation constraints for scenario validation, not research-proven numerical settings.
- Refuse an uncoverable sector while preserving current cover and fire. The supporting officer's real negative acknowledgment travels through normal transport. Its decision timestamp remains unchanged on duplicate relays. Store refusal independently of ordinary deployment progress so an old-sector progress report cannot erase it.
- Waiting-position selection checks protected shelters within8m, reachable inside the accepted corridor with at most8m of travel. The execution contract now carries that position. A staging arrival cannot complete the unchanged occupation objective. No shelter produces an explicit exposed fallback trace.
- Friendly movement intent follows current permission: while paused, report the actual waiting destination; after release, report the advance destination. Physical44 found that broadcasting an unreleased waypoint across the gun's line caused a circular wait. At25s its reported fire risk was0.34429; using the actual stationary intent made it0 without changing any friendly-fire threshold.
- A newly selected local covering role has a bounded acknowledgment commitment. Urgent failures still interrupt; routine heuristic reconsideration cannot replace the method before the role's matching receipt can arrive.

Physical44 sends the request before final movement and enters final stage at27.2 only after actual new-target fire arrives. Physical45 refuses at2.4, the requester receives it at3.75 and ends the wait at4.35; the gun retains its post and continues old-sector fire. Physical46 executes received staging movement while retaining the original paused task;47 has no shelter and records the exposed fallback. Trace parity passes for45/46. Controlled checks cover identity stability, stronger fresh threats, stale evidence and phase-correct movement intent.

Local-cover fixtures32/33 now include a real earlier transit stage so the forward rifleman can establish actual delivery before the preflight request/refusal. Their original positive and reload-only negative assertions remain. This is a mechanism-fixture change; authored layouts5–7 and the strict evaluator remain frozen.

## Remaining route-revalidation investigation

Candidate100 still fails7/107 and7/108. A separate execution inconsistency is being repaired: candidate route scoring can evaluate a different path, then retain the old path solely because method and destination match. This does not validate the path actually followed. An actor-knowledge probe for7/108 at30s finds current-path cost93.594 versus candidate83.209, with8m departure from the old corridor. For5/110 at60s the costs are71.717 versus32.055, with8m departure. These are planner estimates, not proof of tactical success.

Candidate103 compares executable continuations from current moving members, accounts for command transport delay, and explicitly accepts a changed route only if it is cheaper under the existing cost model. Revision requires new assignment generations; mission and active execution deadlines remain unchanged. Physical48 passes: real sightings trigger revision at1.7s, a new generation arrives through command transport, and soldiers physically use the protected corridor. Identical/unavailable candidate controls and trace parity pass. All32 earlier reliability summaries still pass.

However, original acceptance regresses to5/9. Trace evidence shows route revisions followed by uncoverable final support and ineffective alternate/observation recovery. Review009 did not review this subsequent correction. [Request010](../plans/010-feasible-approach-review-request.md) asks Fable to distinguish final-position infeasibility, premature refusal and route churn, and define a bounded repair. Consultation is pending; no response or approval is claimed here.

## Fable010 implementation: persistent feasibility and higher-command recovery

Actual [Fable010 review](AI_FEASIBLE_APPROACH_FABLE_REVIEW.md), evidence `20260915T231329-bada0ab5`, identified cost-only route replacement as the103 regression and post-refusal retry loops as a separate defect. [Accepted execution plan and resolutions](../plans/010-feasible-approach-implementation.md).

-104 (`5f686be36a0fee57`) restricts same-destination route replacement to an unexecutable retained continuation with an executable repair. Cost gain alone cannot discard support/staging commitments. Requested threat/refusal facts remain. Original7/9 restored in isolation; route-authority physical48 and all other reliability scenarios pass.103's5/9 was also reproduced on native Windows.
-106 (`efdc58c91eae25bd`) adds gun/threat/focus/refused metadata to support failures, target-specific recovery, and bounded exhaustion. Protected alternate viewpoints and platoon failed/occupied objective filters are active. Original7/9. Fresh knowledge-bucket changes cannot erase failure before command transport completes; equivalent order copies retain failure history.
-108 (`eb4974f4d7fa7e6a`) lets higher command select a different useful Seize objective on received Support failure before Observe/Reserve fallback. The original expiry remains. Observe has one bounded follow-up. Original7/9.
-109 (`beee50d6df73f9db`) preserves the enemy explicitly named by a new platoon directive while that contact remains known. Fresh contradictory clearance removes it. Original7/9;35 reliability summaries at this point, plus decision-loop/cognition/foundations pass on Linux. The physical17 fixture's old goal was inside an obstacle and its scripted sector differed from its target; it now requests the actual shelter20.8,-10 and target sector38,0. Its original long-travel, unchanged-method, delayed-report and actual-fire assertions remain. Authored tactical layouts5–7 are unchanged.
-110 (`0701c754590a9840`) gates an intermediate route stage when its path is exposed to the newly requested, uncovered threat. It also preserves the accepted directive during local replanning by a successor who has not personally received the old platoon order. Previously `p.directive=order.serial` could erase that identity to0, making every later failure report appear obsolete. Original7/9 remains;7/108 now gets valid failure feedback to the platoon at96.55 instead of rejecting it indefinitely.
-111 (`fd2387ab2abc5410`) adds physical50: actual old-sector fire is received while a new threat covers intermediate movement. Soldiers stay at the earlier position; actual new-focus delivery arrives at28.4s through3s report transport, then the retained route advances. Trace parity passes. All36 reliability summaries pass Linux.

Physical49 proves refusal4.35 → failure report5.15 → higher alternative6.3 → delayed received directive. Physical45 supplies real old-sector fire that cannot clear failure; physical44 supplies real new-focus fire that can. Controlled checks rooted in the physical record cover changed threat buckets and lost successor order copies. Failed-focus assertions use the actual recorded sighting at failure time, not the enemy's authored starting coordinate. New failure metadata and exhaustion time are traced, digested and included in Unreal seek checks; native Unreal validation remains pending.

The actual [Fable011 response](AI_FINAL_THREAT_FABLE_REVIEW.md) identified firing-area inconsistency, permanent fallback authority and unsafe pauses. [Implementation plan and resolutions](../plans/011-final-threat-execution-implementation.md). Independent2001–2010 remain unopened.30/30 has not been achieved.


## Firing consistency, fallback authority and retreat: candidate119

Current measured build `e05967cd41a68232`: **original8/9, historical20/30 (9/6/5), not accepted**. Original7/108 still fails. This is a regression from the earlier best28/30, not certification of that earlier candidate; the earlier candidate permitted an uncovered final entry. Independent2001–2010 remain unopened. Cognition remains opt-in.

-115 physical51 fixes the fixture's final destination so its target actually threatens the goal while hidden behind the exact-point obstruction. Source feasibility accepts a bounded four-metre firing opening and recognizes real current delivery from its own named gun. The test requires blocked exact geometry at96–100m, actual rounds and delayed requester release, with trace parity; impossible-focus45 remains the negative control.
-116 bounds Observe/Reserve fallback expiry to45s inside the existing deadline, permits retasking fallback missions despite Executing status, and selects a coverable known contact for the chosen approach. Original remains7/9. Fresh final occupants take precedence; in their absence the planner can still support an initial flank against a known enemy threatening the approach. This explicitly resolves review011's otherwise over-restrictive18m initial-target rule.
-117 adds an explicit retreat staging contract (25m maximum along the retained corridor) after the8m local-shelter search fails. A prior hold is rechecked against current geometry and officer knowledge. Original improves to8/9, historical20/30. Assignment copies, pause updates, tracing, digest and Unreal seek checks preserve the retreat flag.
-119 preserves two bounded prior physical holds and prevents missing enemy evidence from overwriting a protected hold with an exposed point. Fixture52 starts with authored retained-route history; production sensing, command transport, navigation and execution move both paused soldiers back to the protected area. Fixture53 has identical geometry without that history and cannot invent the command retreat. Exposure duration improves; hits are zero in both, so no injury reduction is claimed. The nearby-shelter46 control still uses its local position. Trace parity passes.

The fixture's route is19.87m, although straight-line separation is15.2m. At the existing crouched rifle speed1.89m/s, review011's blanket8-second target cannot cover that path. Its deadline therefore uses actual path length divided by the existing speed, plus normal report/reaction/steering allowance; this changes no gameplay speed or tactical gate. First arrival is checked, not a later frame that could mask a delay.

Candidate119 passes the existing reliability, decision-loop, cognition and foundations scenarios on Linux. Native Windows reliability passes including the physical retreat and area-focus scenarios. A new controlled commander/production-transport check verifies that fresh clearance can replace an acknowledged Executing Reserve, while unchanged occupied approaches remain held. The checks do not replace tactical acceptance. Native Unreal playback and current resource checks remain pending.

Concrete remaining7/108 evidence: at79s, new contact33 exposes the previous positions of members11,12,13,15; only10's prior hold remains safe. Thus merely returning each soldier to their own previous position cannot solve this case. [Fable012 request](../plans/012-promotion-blockers-review-request.md) asks for bounded fixes based on this evidence and representative historical regressions; the actual response is [Fable012](AI_PROMOTION_BLOCKERS_FABLE_REVIEW.md), with [plan012 and explicit resolutions](../plans/012-promotion-blockers-implementation.md). No promotion approval is claimed.
