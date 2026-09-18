# Held-out AI failures: diagnosis and repair plan

**Status:** implementation authorized after this audit. The diagnosis below describes the frozen starting source; current implementation evidence is in [reliability results](../docs/AI_RELIABILITY_RESULTS.md).
**Author/date:** Astra, 15 September 2026.
**Source:** HEAD `3ebd263`, with pre-existing working changes; authoritative
simulation fingerprint **`8a5b385e04c22185`**. HEAD alone does not identify this build.
**Repository:** `/home/jchan/ww1-autobattler` (WSL authoritative; Windows is a build mirror).

## Decision

Keep the existing soldier–squad–platoon architecture. Fix inconsistent execution
state and navigation contracts, then make support and final occupation respond
to the threats the officers actually know about. No evidence here calls for a
generic planner replacement or a perception rewrite.

The original strict matrix passes **9/9 on Linux and native Windows**. The frozen
held-out cohort scores **22/30 on both**: layout 5 **10/10**, layout 6 **7/10**,
layout 7 **5/10**. Required held-out performance is at least **8/10 in each layout**.
Do not promote cognition to the normal controller yet.

This pass inspected archived traces, physical evaluation frames, projectile hit
events, navigation records and source. It did not run modified battles. Therefore
it identifies demonstrated defects and contributing tactical mechanisms, **not
proof that the proposed changes will make every failed seed pass**.

Audit verification: rerunning the unchanged evaluator over all eight archived
failed runs reproduced their completion and sustained-angle results exactly.
The simulation fingerprint remained unchanged. No native build or new simulation
run was needed for this read-only diagnosis.

## Baseline and evidence

Read first: `AGENTS.md`, `docs/DESIGN_VISION.md`, `docs/BATTLE_LAB.md`,
`docs/DEVELOPMENT.md`, `plans/004-decision-action-loop.md`, and
`docs/AI_NINE_GATE_RESULTS.md`. The player prepares the army; combat is autonomous.
Officers use their observations and received reports, never hidden enemy state.

Evidence roots:

- Linux: `.local/nine-gate/original-final/acceptance.json` and
  `.local/nine-gate/held-out-final/acceptance.json`.
- Windows: `/mnt/c/Users/Jordan Chan/Documents/Codex/ArmyPrototype/Saved/BattleLab/`
  `NineGate-original-final/acceptance.json` and `NineGate-held-out-final/acceptance.json`.
- Evaluator: `tools/evaluate_routes.py`, unchanged SHA-256
  `3ade284789f519b1d4c6d377b091b075b177f14b183d2329464a1bfaa8d86dca`.
- Frozen settings: `tests/ai_acceptance.json`: layouts 5–7, original seeds 107–109,
  held-out seeds 110–119, **360 seconds**.

The evaluator requires a completed accepted route **and** two distinct living
movers with a qualifying physical second angle for at least three continuous
seconds per shooter/target pair. Each must be within 8m of the route destination,
at least 6m from its start, with a clear target line and at least 45° separation
from its designated active support. Completion and angle need not coincide.
Defender elimination, instantaneous angles and movement counts do not substitute.
Observer evaluation facts must never become actor knowledge.

### The eight failures

Trace numbers below are JSON `id` fields, not file line numbers. All runs have
one accepted blue route, `200002`. Times are simulated seconds.

| Layout/seed | Run under `.local/nine-gate/held-out-final/` | Missing acceptance evidence | Trace-backed explanation |
|---|---|---|---|
| 6/112 | `battle-112-1789519675236746687` | Completion and sustained angle | Soldier14 reaches the assigned peek but retains a stale shelter interruption; no Done. Instantaneous angles do not become the required sustained pair. |
| 6/113 | `battle-113-1789519676528377439` | Sustained angle only | Restored support cannot progress through squad safety handling for several seconds. Route completes at 87.85; battle ends at 90.15. Earlier angles are fragmented or single-member. |
| 6/118 | `battle-118-1789519694697649456` | Completion only; angle passes at 98.8 | Friendly fire wounds final occupants; their removals and delayed receipts prevent a valid completion quorum. |
| 7/110 | `battle-110-1789519703017937718` | Completion and angle; no final arrivals | Enemy MG hits movers while nearby fire counts as support; no eligible movers remain at 82.05 (#3288/#3289). |
| 7/112 | `battle-112-1789519710327250147` | Completion and angle; no final arrivals | Same support mismatch during crossing; final stage starts at 78.75 with only one eligible mover (#2942), failure at 79.75 (#2968). |
| 7/115 | `battle-115-1789519720609520161` | Completion and sustained angle | Final orders include known occupied cover. Two instantaneous qualifying movers overlap for only 0.6s, not 3s. Attrition leaves one; fails at 77.65 (#3641). |
| 7/117 | `battle-117-1789519728632008352` | Completion only; angle passes at 70.0 | Final slot is not executable through the route; other movers face known defenders. One final Done, then no eligible movers by 91.3 (#4045/#4047). |
| 7/119 | `battle-119-1789519736775275368` | Completion only; angle passes at 82.4 | Same final-path problem; known occupied cover assigned. Only blocked soldier12 remains at 95.75 (#3910/#3912). |

In layout 7, pre-failure damage to movers in these five cases comes from enemies.
Seed 115's friendly hit at 81.064 occurs **after** its route failure. Do not attribute
all eight failures to friendly fire. Nor is taking casualties itself an AI bug.

Passing comparisons matter: layout 6/111
(`battle-111-1789519673535949647`) gets its sustained angle at 64.6 and completion at 67.45
(#2920). Layout7/111 completes at 65.25 (#2754), with angle at 64.2, despite another member
having the same final-path defect. Redundant members can mask the defect until
casualties remove that redundancy.

## Findings, ranked for implementation

All source paths in this section are under `Unreal/Source/ArmyPrototype/Sim/`.
Line references identify the audited source; recheck the fingerprint before editing.

| Priority | Finding | Impact | Effort | Fix risk | Confidence |
|---|---|---|---|---|---|
| P1 | Stale emergency state prevents honest completion | Recovered soldier never reports arrival | S–M | Clearing a real safety condition | High |
| P1 | Planning and execution disagree about final reachability | Assigned mover stalls at final approach | M | Unsafe unrestricted shortcuts | High |
| P1 | Squad safety return starves support/state processing | Available support cannot be acted on promptly | M | Releasing unsafe members | High for state ordering; contribution to seed result unproven |
| P1 | Support evidence is not specific to the blocking threat/stage | Movement can proceed against unsupported resistance | M–L | Retarget churn or coordination deadlock | High for mismatch; magnitude requires intervention tests |
| P1 | Final positions ignore known occupation and threat protection | Ordinary move task becomes an unsupported assault | M | Permanent over-caution | High for omission and issued orders |
| P1 | Distant supporting guns lack communicated friendly movement lanes | Support wounds its movers outside personal friendly vision | M–L | Unnecessary hold-fire or stale coordination | High for MG range gap; rifle incident unresolved |
| P2 | Member loss, occupation and failure reasons are conflated | Impossible final tasks; misleading timeout/unreachable feedback | M | Inflating completion with stale/wounded occupants | High for control flow; capability changes need explicit tests |

### A. Shelter recovery: physical success and task state disagree

Layout6/112, soldier14 task115: shelter interruption75.6 (#2811); the emergency
cover is its assigned shelter `(35,15.9)` with peek `(38,15.9)` (#2813).
It moves toward that peek76.45 (#2827), arrives77.9 (#2848), and is firing there
with zero suppression78.35 (#2861). At87.85 (#3101) health is 100 and suppression 0.
No Done occurs before `Failed: battle ended`92.05 (#3230).

`TaskSim.cpp:55–63` clears `memory.emergency` near the shelter, but the soldier
can resume toward the peek without entering that reset radius. Matching cover
at`:105` retains the flag;`:130` treats the flag as continuing shelter interruption.
The offset peek is3m from the shelter. Fix the transition, not the completion
predicate. This alone does not prove the missing angle in6/112 will pass.

### B. Final slot navigation uses two incompatible contracts

`CognitiveSim.cpp:67–90` checks a final slot with unrestricted `FindPath`.
`BattleSim.cpp:312–332` executes through `FollowCorridor`; its final local escape
only applies near the slot. `TacticalRouteSim.cpp:145–164` constrains the route lane.

Layout7/117 soldier11 and7/119 soldier12 receive `(41.2,-26)`, but `paths.jsonl`
records repeated `no_executable_path`. Example117 at 68.15: start`(28.5,-28)`,
goal`(41.2,-26)`, decision3233. Example119 at 76.15: same start/goal, decision3331;
eleven failed recoveries continue through 96.15. Passing7/111 also has this defect.
Do not solve it by allowing unrestricted shortcuts across the entire approach.

### C. Safety handling blocks unrelated state assessment

Layout6/113 loses support64.35 (#2708), enters safety override67.8 (#2856), and
only resumes/releases81.7 (#3181/#3182). Leader9 already holds qualifying gun7
delivery reports at74.4 (#2989: shots72.35–73.05) and79.4 (#3098: shots76.5–78.1).
Other members still report awaiting support, e.g. soldier11 at74.65 (#2993).

`CognitiveSim.cpp:191–194` returns before preparation logic`:210–223` and movement
failure checks`:224–230`. A point-member interruption suppresses this processing.
Keeping an unsafe team waiting may be correct; failing to assess available support
and explain whether other members are safe to move is the defect. The existing
support/loss transitions also reset `reconsiderAt`; test bounded no-progress
behavior, but do not claim deadline cycling caused these eight archived failures.

### D. Support must address the threat relevant to the current movement

`ReceivedUsefulSupport`, `CognitiveSim.cpp:12–17`, accepts qualifying gun reports
within 18m of one sector. In7/110 at 46 (#2166) and7/112 at 45.45 (#1995), support is
useful for MG sector`(29.2,7)` while actual delivery targets rifleman33 at
`(29.2,-4.4)`. MG39 is hitting movers during those intervals.

At the final approach, known defenders are roughly 30m south of the original
sector, yet fire at that old sector remains sufficient. Retargeting`:200–207`
requires ten seconds of lost old-sector support; continuing obsolete-sector
fire prevents that branch. Revalidation`:309–312` can preserve the approach
without updating the dependency. Relevant delivered fire is evidence of support,
not proof of actual enemy suppression; retain that distinction.

### E. Known occupied cover is assigned as ordinary occupation

`Positions`, `CognitiveSim.cpp:74–90`, scores distance and reachability but not
known enemy occupation or shelter protection against the current threat set.

- 7/115: leader's #3242 at 65.8 knows enemy38 at`(41.2,-27.65)`, observed 65.0;
  #3285 at 66.55 orders soldier14 to that exact point.
- 7/117: #3158 at 65.45 knows enemy35 there, observed 64.8; #3197 orders soldier12 there.
- 7/119: #3218 at 74.55 knows enemy36 at`(41.2,-24.35)`, observed 73.8;
  #3311 orders soldier14 there.

These facts are present in the leader's recorded knowledge, not merely observer
truth. Seizing defended cover is legitimate, but it needs a supported combat
approach and reassessment rather than a plain move-to-position contract.

### F. Support can injure the occupied position it is enabling

Layout6/118 events: friendly14 hits13 at 93.815; gun7 hits12 at 99.1955 and 99.5955.
At 99.0–99.6, gun7 is at`(-59.2,-4.4)`, soldier12 at`(38,15.9)`, **99.30m apart**.
Friendly sensing in `BattleSim.cpp:677` is capped at 70m; risk assessment`:238–262`
uses personal ally observations at most 1.5s old. `SupportSector` in
`BattleSim.h:227` carries enemy threats, not accepted friendly occupation lanes.

The long-range gun cannot get a fresh personal sighting of that distant occupant
through this producer. Add communicated friendly intent and handoff/lift rules;
do not grant all guns perfect friendly positions or disable friendly collisions.
Exact ally memory/per-shot risk is not exported, so the rifle14→13 incident needs
additional instrumentation and a focused reproduction; its precise cause is open.

### G. Feasibility and live occupation must survive honest feedback

Layout6/118: soldier13's Done94.8 (#3318) arrives96.85 (#3401); wounded13 is removed
98.4 (#3425). Soldier12's Done97.7 (#3416) arrives99.3 (#3447); wounded12 is removed
104.2 (#3583). Soldier10's Done103.1 (#3568) arrives104.7 (#3610), after failure
104.2 (#3584). A physical angle therefore exists without a simultaneous accepted
completion quorum. Do not simply combine those nonconcurrent receipts into a pass.

`CognitiveSim.cpp:165` removes wounded movers before counting Done. Wounded
eligibility for another movement task and ability to maintain an already occupied
position are different questions; any change must preserve actual capability,
current position evidence and medical behavior. The current rule may be deliberately
conservative, so first repair upstream harm and make feedback honest.

At`:226–230`, an intermediate stage can advance with one mover before checking the
two-member requirement. Too few members is labeled Timeout, or Unreachable when
any blocked member remains. In6/118 the failure occurs before the159.3 deadline.
Use an explicit capability-shortfall reason and pass it to platoon reassessment.
`PlatoonSim.cpp:23–36,176–186,219–239,259–264` are the fallback/feedback interfaces.

## Implementation contract and order

This is one coordinated repair, delivered in small independently testable changes.
Use existing C++17 `army` namespace, explicit value records, accepted-plan authority,
production report transport and `assert`-based scenario conventions. Existing
`PhysicalObservationScenarios`, `PhysicalSupportScenarios` and
`PhysicalDeploymentScenario` in `tests/decision_loop_tests.h` are the patterns:
run `Simulate`, inspect frames/traces, and correlate reports with physical events.
Do not substitute manually injected success receipts for integration tests.

### 0. Preserve baseline and freeze independent validation

- Verify the source fingerprint and evaluator checksum. Preserve the existing
  dirty checkout and evidence; do not reset unrelated work.
- Before changing behavior, create a separate validation manifest with ten
  previously unrun seeds per layout5–7, 360s, unchanged evaluator and >=8/10 per
  layout. Select mechanically without examining outcomes and record its hash.
  Check archived manifests for prior use. Do not overwrite `tests/ai_acceptance.json`.
- Keep 110–119 as the original historical gate. They are now exposed diagnostic
  cases and cannot supply fresh generalization evidence. Do not iterate on them.
- Add targeted trace fields alongside each fix: interruption state, actual failure
  predicate, path/connector rejection, dependency identity, source time and lane
  acknowledgement. Record only decision inputs; tracing must not affect gameplay.

### 1. Repair execution lifecycle and capability failure

Scope: `TaskSim.cpp`, `CognitiveSim.cpp`, related records in `BattleSim.h`, diagnostics.

1. Make emergency entry/recovery explicit. Return to the retained task when current
   safety permits, including the same-cover/offset-peek case. Preserve task ID,
   method, stage, generation and original deadlines; genuine pressure still shelters.
2. Split assessment from action release: ingest/correlate receipts, refresh support,
   evaluate capability and deadlines even when individual safety overrides remain.
   Release only members whose local and team safety conditions are satisfied.
   Otherwise record a specific team dependency, not a false lack-of-support reason.
3. Check required capability before advancing a stage. Add an append-only failure
   enum value for insufficient capable members; preserve existing serialized values.
4. Give stage execution/no-progress, support wait and mission deadline separate
   meanings. Support flicker or duplicate reports cannot replenish movement budget.
   Measure progress through reached subgoals or reduced remaining route distance,
   not merely a support-state transition. Maintain the existing mission cap.
5. Initially preserve conservative wounded-role policy. If later implementing
   separate mobile/holding capability, require current correlated occupation evidence
   and explicit invalidation on leaving, incapacity, replacement or death. A past
   Done remains historical; it cannot authorize present occupation after withdrawal.

Verify: physical scenarios S1/S2/S8 below, exact receipt regressions, both platforms.

### 2. Make final assignment executable through the accepted approach

Scope: `CognitiveSim.cpp`, `TacticalRouteSim.{h,cpp}`, `BattleSim.cpp`, task/path records.

1. Share a route-aware reachability/connector predicate between slot selection and
   execution. It must use the same collision clearance and geometry revision.
2. Represent the bounded final connector from the accepted route exit to the
   member's shelter and peek. Validate it before acceptance; include its known
   exposure in candidate comparison. It cannot cut through the approach's interior.
3. Store/reuse the accepted connector; validate after geometry mutation. A globally
   reachable but unexecutable slot is rejected with a reason, not issued optimistically.
4. A correlated blocked-slot report triggers bounded alternative-slot evaluation.
   Change only affected assignments and increment their generations. Preserve
   unaffected receipts, route progress, mission deadlines and failed-attempt memory.
5. When no safe/executable connector or slot remains, report inability. Never
   endlessly retry the unchanged path every two seconds or teleport the soldier.

Verify: S3/S4; existing blocked navigation, corridor, geometry and casualty scenarios.

### 3. Coordinate support for current threats and friendly movement

Scope: `CognitiveSim.cpp`, `CommandSim.{h,cpp}`, `ReactionSim.{h,cpp}`,
`BattleSim.{h,cpp}`, existing support coordination and diagnostic transport.

1. Add a bounded stage support requirement: requester, method/route, stage,
   dependency revision, assigned gun, and relevant **known** threats/lines covering
   the proposed crossing or final connector. Include observation ages/uncertainty.
2. Match fresh delivery to that requirement, rather than sector proximity alone.
   Permit geometrically relevant area fire where justified; do not demand every
   remembered enemy be individually hit. Explain which threats remain uncovered.
3. Reassess on materially changed, received threats even if old-sector fire continues.
   Retain route progress and working support until a coordinated handoff is ready.
   Use stable dependency identities and bounded commitment to avoid switching on
   every minor contact movement. Never infer unseen enemy suppression from truth.
4. Communicate accepted friendly transit/occupation lanes to the assigned gun:
   sender, supported members, plan/stage/revision, geometry, original observation/
   issue time, validity and uncertainty. These are reported intentions/positions,
   not guaranteed current locations. Preserve their source time through relays.
5. Before a mover enters a conflicting fire lane, request a bounded hold/lift/shift;
   receive acknowledgement through production transport. Refresh movement support
   against the new arrangement. Receipt of a cease-fire request is not delivered
   useful fire; releasing one dependency cannot silently satisfy another.
6. Expired/unknown coordination must not authorize unsafe resumption or indefinite
   deadlock: retain a bounded wait, reacquire/report positions, select another lane
   or escalate. Preserve local friendly-sighting safety and physical bullet collisions.
7. Instrument the rifle friendly-fire reproduction with ally knowledge age, predicted
   position, spread envelope and hold-fire reason; only change that policy after
   proving the defect. Zero friendly hits in all combat is not a realism requirement.

Verify: S5/S6/S7, original support deployment/delivery rejection scenarios,
traced/untraced parity. Keep new messages/records bounded; avoid copying whole maps.

### 4. Choose defensible final positions and escalate unattainable goals

Scope: `CognitiveSim.cpp`, `PlatoonSim.cpp`, belief helpers and diagnostics.

1. Score final shelter/peek pairs against fresh known occupants, age/uncertainty,
   protection from known threats, executable connectors and intended fire geometry.
   Explain each rejection/score. A fresh occupied slot cannot be an ordinary free
   occupation candidate. Old reports add uncertainty; they do not blacklist forever.
2. Against known defended cover, establish a viable intermediate firing/observation
   position, revise support, choose another approach, or report inability. Reuse the
   existing method library. Parent seizure remains incomplete until it is achieved.
3. Revalidate dependencies and slots when evidence changes, even if the same method
   and broad destination remain best. Avoid replacing unaffected assignments.
4. Feed specific capability/path/support/occupied-position failures upward. Platoon
   chooses a materially different useful approach, changes available support/moving
   squad, holds or withdraws. Do not repeatedly order the same depleted squad to
   observe already known resistance. Preserve mission deadlines and failure memory.

Verify: S5/S8/S9; identical-evidence officer profiles; no hidden state; normal maps.

## New discriminating scenarios

Add to `tests/decision_loop_tests.h` or a focused header included by it. Introduce
new synthetic encounter IDs after 17 if needed; update CLI range only for those new
fixtures. Never edit layouts 5–7 or seeds107–119 to favor the implementation.
Use paired controls and production sensing, movement, collision and report delay.
Freeze assertion bounds from the contract before tuning behavior.

| ID | Scenario | Required result |
|---|---|---|
| S1 | Suppression chooses the already assigned cover; it decays before reaching the shelter, with an offset peek | Same assignment resumes, physically reaches peek, emits Done and delivers it after transport. Sustained pressure control remains sheltered. |
| S2 | Point member shelters while real support is restored to other members | Support evidence updates by next scheduled assessment (<=1 simulated second after recognition). Each mover releases only with satisfied safety/dependencies or has a specific wait reason; deadlines remain bounded despite flicker. |
| S3 | Global path exists to final cover, but route corridor cannot reach it | Reject slot or accept a validated final connector; production movement reaches it without route-interior shortcut. |
| S4 | Geometry blocks one accepted final connector | Correct revision invalidates path; correlated failure causes individual replacement or explicit inability. Old generation receipts cannot complete the replacement. |
| S5 | Gun fires near a blocking MG; then a new defender covers final approach while old-sector fire continues | Unrelated fire cannot certify the critical dependency. Fresh received threat changes support/approach; irrelevant report control does not churn working plans. |
| S6 | Gun is beyond personal friendly sight; movers enter its known planned firing/backstop lane | Delivered lane intent and acknowledgement coordinate hold/lift/shift before crossing. Gun uses only received knowledge; clear-lane control can keep firing. Duplicate/stale/wrong-stage reports cannot release an unsafe dependency. |
| S7 | Interrupted support, lane handoff and temporary reload together | Bounded recovery preserves assignment/mission identity, resumes after actual relevant delivery, or reports specific inability. No circular waiting past declared deadlines. |
| S8 | A required member becomes incapable just before final-stage transition; repeat with leader casualty and reordered receipts | Do not advance an impossible two-person goal. Replace through command or escalate after transport; old Done cannot substitute. Success control completes with two genuinely capable occupants. |
| S9 | Nearest cover has a freshly known enemy occupant; paired stale/cleared report | Choose supported combat approach/alternate position or honest inability. Fresh evidence can reopen cleared ground. No mere arrival/observation completes parent seizure. |

S1–S9 must produce decision reasons and observable outcomes, not assertions that
mirror internal branches. Friendly-fire controls may use durable targets to keep
the fixture alive, as encounter 17 already does; no fabricated delivery evidence.

## Verification and release gates

Run each relevant focused suite after its step; run full integration once the
combined candidate is ready. Commands below are for implementation, not tests
claimed as executed by this planning audit.

```sh
python3 tools/source_id.py
sha256sum tools/evaluate_routes.py
./scripts/test-sim.sh --decision-loop
./scripts/test-sim-windows.sh --decision-loop
./scripts/test-sim.sh --cognition
./scripts/test-sim.sh --normal-cognition
./scripts/test-sim.sh --foundations
./scripts/test-sim-windows.sh --cognition
./scripts/test-sim-windows.sh --normal-cognition
./scripts/test-sim-windows.sh --foundations
python3 -m unittest discover -s tests -p 'test_*.py'
./scripts/test-sim.sh
./scripts/test-sim-windows.sh
./scripts/battle-lab.sh --version
python3 tools/run_ai_acceptance.py --out .local/held-out-repair/original-linux
```

Expected: all focused/new scenarios and existing suites pass. Original matrix
must be **9/9**, not merely the runner's historical 8/9 threshold. Check
`sum(case['passed'] for case in result['cases']) == 9`. Repeat with native Windows
binary using `--binary`; compare source fingerprints and per-case results.

After freezing the exact candidate, evaluate 110–119 once with the existing runner:

```sh
python3 tools/run_ai_acceptance.py --held-out \
  --development-results .local/held-out-repair/original-linux/acceptance.json \
  --out .local/held-out-repair/historical-held-out-linux
```

Require the unchanged historical gate >=8/10 per layout, and separately run the
new pre-frozen validation cohort with the same evaluator, duration and threshold
on both platforms. Add a separate manifest-aware runner if needed; do not modify
the original specification/evaluator. Report every case, not only aggregate wins.
Failure in a fresh cohort triggers new mechanism diagnosis and another independently
frozen cohort for the next candidate; do not tune repeatedly on the opened set.

Promotion also still requires legacy baseline comparisons, normal-map behavior
on Fractured Works and Trenches, trace parity, recorded state restoration,
native Unreal build and ten-minute playback/seek checks:

```sh
./scripts/build.sh
./scripts/launch.sh -ArmyCognition -ArmyScenario=0 -ArmyBattleSeconds=600 -ArmySeed=108 -ArmySmokeTest -unattended
./scripts/launch.sh -ArmyCognition -ArmyTrenches -ArmyScenario=0 -ArmyBattleSeconds=600 -ArmySeed=108 -ArmySmokeTest -unattended
```

Run launches sequentially; inspect actual rendered playback/inspector as well as
assertions. Show lane/dependency/recovery state in recorded diagnostics and verify
rewind restores it. Measure standalone 600s simulation/replay memory on both maps,
64 soldiers, <=6GiB. Preserve exact legacy reruns; new cognition changes do not
authorize changes to legacy tactics or damage. No new toolchain download is
expected for this C++ work with the existing verified Windows setup.

## Boundaries, risks and unresolved questions

- In scope: task lifecycle, final connectors, bounded support/intent transport,
  known-threat slot selection, failure feedback, scenario coverage and diagnostic
  fields required to prove them. Keep cognition opt-in throughout development.
- Out of scope: campaign systems, hearing, anonymous-contact association, new
  weapons, combat stats/personality tuning, larger formations, generic GOAP/ML
  replacement, acceptance relaxation, longer battles as a tactical fix.
- The audited records prove specific coordination failures, not an inevitable
  tactical victory under every seed. Honest hold/withdrawal is valid behavior in
  an impossible mechanism scenario but does not count as a strict tactical pass.
- Known occupied slots and irrelevant support explain avoidable exposure, but
  the number of casualties prevented is a hypothesis until controlled fixes run.
- Do not broaden wounded capability simply to gain completion. If current medical
  behavior cannot support live occupation evidence, keep exclusion and repair
  upstream tactics/replacement instead. A design change to injury behavior requires
  an explicit designer decision; an honest failure reason does not.
- If no feasible support/connector exists with actor knowledge, report inability;
  do not use observer geometry/contact truth, teleportation or arbitrary deadline
  extensions. If independent scenarios pass but generalization remains poor,
  bring back the new trace evidence before expanding architecture or changing gates.
- Maintenance: new enum values must append, new serialized fields need safe legacy
  defaults, report buffers must remain bounded, source timestamps survive relays,
  and geometry revisions invalidate connectors. Keep all accepted-plan mutations
  in command; soldiers may interrupt for safety but may not silently change mission.

## Architectural review status

The configured launcher doctor confirmed subscription login and exact model
`claude-fable-5-1`. A bounded consultation used
[`005-held-out-review-request.md`](005-held-out-review-request.md).
The previous failed call was inspected before explicitly opening a fresh project
session. The new call also returned **“You've reached your Fable limit”**.
Evidence: `/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/`
`20260915T175807-c964ad4c/stdout.jsonl` (result `is_error: true`). No alternate
model, API billing or paid usage was used. This plan is Astra's source/trace-based
proposal, **not a new Fable-reviewed or Fable-approved design**.

Audit scope was the eight failed runs, adjacent passing controls and their sensing,
execution, support, navigation and command feedback paths. Campaign systems,
graphics quality, unrelated repository security and dependency health were not
audited. Missing optional skill reference templates did not affect source access;
this plan follows the available main skill's evidence and handoff requirements.
