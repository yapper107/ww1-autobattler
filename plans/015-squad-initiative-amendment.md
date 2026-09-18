# Plan 015: squad initiative amendment to plan 014

**Status:** user-directed amendment, 17 September 2026, agreed in discussion before any implementation. Architect: Claude Fable 5.1 (`claude-fable-5-1`), direct Claude Code session. Supersedes plan 014 section 7 (platoon task tree and envelopment) and the Phase 4 exit criteria. Phases 1 to 3 of plan 014 are complete and unchanged; their controller source at `a0364bff5cea6ab9` is the squad baseline this amendment must not degrade.

## 1. The change, in one paragraph

The platoon stops orchestrating. Today it decides who fixes, who flanks, where the corridors run, when fire lifts and who waits in reserve, and six measured builds have shown that this makes the platoon fight less than its squads do on their own (the squad-only controller won 75 of 90 defended positions; the best platoon build won 71 with more losses, and on the deathmatch maps three of four squads spent the battle holding on orders). Under this amendment the platoon leader issues intent only, squads choose how to fight with the drills they already have, and squads talk to each other so one squad's suppression becomes another's chance to flank and a squad in trouble gets help without waiting. Realism is no longer the yardstick; what looks and plays well in the game is, judged by the user in replay, with automated guards against the failure modes already seen.

## 2. User decisions

| Decision | Choice |
|---|---|
| Platoon role | objectives, retreat and help only; no roles, corridors or lift orchestration from above |
| Two squads want the same group | the second joins the assault from its own side; the first announcer leads; the fixing squad lifts on the first phase line |
| Squad-to-squad messages | platoon radio: every squad in the platoon hears every broadcast after the existing report delay; range limits are a later faction difference |
| Pass bar | the user's replay review on both maps, with automated guards only; the candidate90 casualty and closure targets are withdrawn |

## 3. Platoon contract (replaces plan 014 section 7)

Orders, each a long-lived intent with the existing id, expiry and renewal:

- `FightHere{group or area}`: engage the named known enemy group, or seize and hold the named area. Default for every squad: the nearest known group, else the squad's advance objective in its lane.
- `RetreatThere{rally}`: withdraw to the rally area. Issued to all squads when the believed strength ratio falls below one half without support, after the existing bounded observation, or on a higher order.
- `HelpSquad{squad}`: go to the aid of the named squad. Issued to the nearest squad with capacity when a squad broadcasts need and no neighbour has answered within one report round trip.

An order changes only when the commander's knowledge changes materially (the group is cleared or moves more than 40 m, a squad reports need, the ratio crosses one half) or the squad reports Done or Blocked. Kept from the Phase 4 work: order persistence and renewal, the believed-ratio withdrawal with bounded observation, the no-contact advance in lanes with the loop guard, and succession to squad autonomy. Removed: Fix, Flank, Secure, Reserve and Merge as platoon tasks, corridor claims and per-squad areas beyond the advance lanes, and the platoon-driven lift and shift. `PlatoonTaskSim` shrinks to the three orders and the kept rules.

## 4. Squad contract additions (lateral coordination)

Broadcasts travel on the platoon radio through the existing report transport with its delay, to every squad of the platoon:

| Broadcast | When |
|---|---|
| `Fixing{group, from}` | SupportByFire establishes on the group |
| `Assaulting{group, side, position}` | SquadAttack commits, including the join case |
| `NeedSupport{group, position}` | an element falls below `minStrength`, or effective incoming fire without superiority persists 15 s |
| `PhaseLine{group}` | the assault element's phase-line receipt |
| `Done{group}` | consolidation |

Behaviours the broadcasts enable, all decided by the squad leader with his own knowledge:

- **Opportunity.** A squad holding `FightHere` on a group, or idle, that receives `Fixing` for that group and finds a covered route to its flank commits `SquadAttack` from its own position and broadcasts `Assaulting`. The fixing squad shifts or lifts on the first received `PhaseLine`, using the fire-lane message the squads already exchange.
- **Join.** A second squad that finds a route commits its own assault from its own side and broadcasts; the first announcer keeps the lead for the lift; lane messages keep the two out of each other's fire.
- **Help.** A squad receiving `NeedSupport` from a neighbour, holding `FightHere` on the same group or idle, moves to a support-by-fire position covering the neighbour's group if within 100 m; otherwise it continues and the platoon's `HelpSquad` decides.
- **No route anywhere.** The squad attacks by fire and movement, as the Phase 3 drills already do; it never holds indefinitely.
- **Template gate.** Initiative-driven templates volunteer opportunities and help without a platoon order; the Section template volunteers help but waits for the platoon before assaulting; the Rush template waits for both. This uses the existing `requiresPlatoonOrder` template field.

## 5. Guards and pass bar

Automated guards, each a hard stop before replay review, measured on both authored maps over seeds 100-109 and the F1 development draws:

- No zero-shot battle; the engagement guard stays on.
- Most squads engage: at least three of four squads per side fire in every authored battle.
- Battles resolve: paired against legacy on the same authored map and seed, time to decision must not be later beyond its interval. The stronger-side remaining-strength guard is withdrawn by the [Step C3 review](015-step-c3-fable-review.md); casualty fractions and remaining strength are information for replay review. The absolute 300 s / 60 % thresholds were withdrawn by the [Step C review](015-step-c-fable-review.md).
- No bunching: time under 2 m not worse than legacy on every set. The [Step C4 review](015-step-c4-fable-review.md) requires paired spacing intervals on both authored sets; Trenches passes when its delta interval is not wholly above zero, and its 3 m median is reported as a target. After the one authorised allocation repair, any remaining Trenches spacing failure is an open replay item and does not stop F1, E or D. Every other guard still stops.
- No churn: orders per minute per side paired against legacy, not above beyond its interval, measured after the radio repair. Phase 4f is withdrawn as a reference by the Step C review.
- Attacker win share on F1 not below the squad-only controller (`a0364bff5cea6ab9`) beyond its interval. The [Step C6 review](015-step-c6-fable-review.md) retains this criterion but explicitly permits the C6 continuation to proceed to Steps E and D if it alone fails; its status must lead the Step C report. Other non-exempt guard failures still stop.

Pass bar: the user watches both playable maps and, if desired, one generated defended position, and judges the look of the fight. Candidate90's casualty and closure figures are reported for information only.

## 6. Scenarios (replace P01 to P03 and P08; P04 to P07 stay)

- **Q01 fight here.** Two squads receive `FightHere` on a known group; one establishes support by fire and the other commits a covered flank or fire and movement by its own assessment; no directive carries a role. Control: no covered route on either side: both attack by fire and movement.
- **Q02 opportunity.** Squad A fixes and broadcasts; idle squad B with a covered route commits and broadcasts; A lifts within one hop plus 1 s of B's phase line. Control: B under the Rush template waits.
- **Q03 join.** Two squads find routes to one group; both commit from different sides; the first announcer's phase line triggers the lift; no round from either assault crosses the other's lane.
- **Q04 help.** Squad A broadcasts need; the nearest squad establishes support by fire on A's group within 60 s. Control: no squad within 100 m: the platoon issues `HelpSquad` to the nearest.
- **Q05 mixed radio.** A received NeedSupport and Fixing are consumed independently by kind and sender; each acts once and neither re-accepts the other. Controls: each broadcast alone acts once. Production sensing and report transport only. The [Step C2 review](015-step-c2-fable-review.md) restores the original fixture/assertions and assigns exhaustion retention to the focused pin below.
- **Help-retention pin.** The focused, review-authorised state pin drives production `RadioAction` with a recorded received Fixing after an exhausted help instance. A no-route opportunity must leave the live action, instance/generation and exhaustion evidence unchanged; consumption is retained and a repeat message does nothing. This narrow pin may supply the exhausted action directly; Q05 continues to use production transport.
- **Movement-clock arrival pin.** A MoveTactically bound expiring through its squad progress clock obtains actual-position Done receipts from members within 3 m; a farther control fails rather than inventing arrival. Existing clock pauses remain.
- **P04 to P07** unchanged: succession, bounded observation and withdrawal, directive renewal, no-contact advance.

## 7. Work plan (plan 014 phases renumbered)

| Step | Scope | Exit |
|---|---|---|
| A. Platoon simplification | `PlatoonTaskSim` reduced to the three orders and the kept rules; old tasks, corridors and lift path removed; P04 to P07 re-run | scenarios pass; 40 authored digests unchanged; drills trace parity |
| B. Lateral broadcasts and behaviours | the five broadcasts, opportunity, join, help and the template gate in `SquadDrillSim`; Q01 to Q04 | scenarios pass with controls |
| C. Single measured build | both authored maps and F1 draws with the guards | all guards pass |
| D. Replay build | Unreal build with the drills controller selectable; the user reviews both maps | the user's verdict decides promotion, per plan 014 section 9 |

Bounded local iteration as before: up to three attempts per scenario, no distribution runs between them, one measured build, stop on failure with the traces.

## 8. Risks

- Chaos: every squad assaults and nobody suppresses. The join rule and the `Fixing` broadcast mitigate it; the guards will show it if it happens.
- Radio spam: broadcasts are bounded to state changes, never per tick.
- Fog is lower than the design vision's eventual intent; that is a deliberate first step, with range and reliability as later faction differences.
- The six-minute clock: assaults that take three minutes may not resolve; the resolution guard exists to surface this rather than hide it.

## 9. Step E: platoon leader effect and the after-action report (user decisions, 17 September 2026)

**Decisions.** A bad platoon leader with equal troops should lose most battles against a good one. The after-action report is wanted now, because it helps debugging as much as play. Plan 015 with this step is approved for execution without further review; the user is away from the computer and will judge the replay build on return.

**Leader dials.** Four coarse dials derived from the platoon leader's profile (judgement, risk, adaptability, and a new communication value), each with a visible symptom:

| Dial | Driven by | Bad leader symptom |
|---|---|---|
| Net latency and loss | communication, leadership | broadcasts arrive late or are dropped: opportunities missed, help lost, double assaults |
| Picture quality | judgement | relayed contacts late, vague or wrong; strength over- or under-estimated (existing estimate bias, widened) |
| Pivotal calls | risk, judgement | retreats a winning platoon, presses a losing one, fights the wrong group, leaves stale orders |
| Initiative gate | leadership, template | squads wait for orders that come late instead of volunteering |

Squad leaders keep their existing per-actor profile effects. Succession quality follows from the successor's profile.

**Scenarios and measures.** Paired battles on the F1 development draws that differ only in the platoon leader's profile (good against bad, same troops, same seeds): the bad leader must lose the majority of the pairs, with time to the first coordinated assault, help latency, wrong-target rate, stale-order seconds and exchange ratio reported per pair. Pass bar for legibility: a blind replay in which the user watches two battles and identifies the bad lieutenant; to be run when the user is back.

**After-action report.** Two forms. First, now: `tools/after_action.py` produces a readable report from a run's trace, events and evaluation: the command timeline (each platoon order and squad drill with its reason, the knowledge it rested on, and what happened next), net delays and lost messages, each leader's estimate against what his squads reported, casualties by cause, and a short attribution of the outcome to the decisions that mattered. Second, in the replay build: a results screen and command panel showing the same attribution, so a bad leader reads as a chain of specific bad calls rather than a vaguely worse platoon.

**Work plan additions.** Step A gains the offline report generator so it is available while the rework is debugged. Step E follows step C: the dials, the paired-profile scenario set, the report's attribution section, and one measured paired run. Step D, the replay build, includes the in-game report screen and the leader profile controls in preparation.

## Step C review continuation (17 September 2026)

The [attributed review](015-step-c-fable-review.md) accepts Step B at `0b4a4450c274f8e9`, recalibrates the two guards above, and requires Q05 and the movement-clock pin before remeasurement. Its after-action ruling adds a human summary before the collapsed transition appendix: outcome, timed turning points, per-squad verdicts, decision-time estimates against received reports, net delays/drops and two or three attributed decisions with trace links. Step D displays that summary only. Current implementation and local-attempt results are in the [Step B report](../.local/handoffs/015-step-b-report.md); acceptance of the earlier source does not certify the new continuation.

## Step C6 bounded repair scenarios

The [C6 review](015-step-c6-fable-review.md) requires diagnosis before a belief
change. The existing contact-identity memory is retained: the sixteen lost
matched battles show uncertainty/retention, not duplicate report accumulation.

- **Q06 committed assault evidence (99/100).** Durable soldiers under real enemy
  fire commit an assault. A new physical loss in the assault element after twelve
  seconds permits BreakContact; the uninjured control retains its commitment
  through that window. No contact or execution receipt is injected. Sustained
  effective fire may justify a later retirement, after expected support plus a
  fifteen-second pressure interval; ordinary reload gaps remain governed by the
  existing support-pause contract.
- **Q07 answered caller (101–103).** Physical attrition causes NeedSupport. A
  neighbour establishes support and sends Fixing through production transport;
  within five seconds of receipt the caller chooses a covered attack or supported
  fire and movement. A helper unable to deliver fire supplies the no-Fixing
  control. The unscreened variant specifically exercises fire and movement.
- **Q08 support renewal.** From a production-recorded support execution, deliver
  another own-platoon support order for the same sender and sector through the
  normal platoon message and reaction transport. A changed intent ID must not
  re-accept the drill. A genuinely different sector must change the execution.
  Unrelated volunteering is isolated; no status/arrival receipt is fabricated.
- **Q09 shared-contact reports.** The four-squad production observation fixtures
  report the same four enemies through multiple squads. Mental-map observation
  count equals unique contact count, not total report count. A larger set of
  genuinely distinct enemies increases the count. No belief implementation
  change is made unless the preceding diagnosis proves duplication.
