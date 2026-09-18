# AI cognition upgrade — implementation and scenario evidence

User authorization: 14 September 2026. Implement the vision/memory/decision roadmap
and verify each feature with a specific scenario. Ordinary opposing-army outcomes
are not the primary evidence. The existing strict envelopment gate is retained.

## Scope and architecture

The upgrade is opt-in (`--cognition`, which implies `--foundations`). The prior
foundation slice and normal game remain selectable baselines. No default gameplay
promotion is implied by component tests. The implementation follows
[the roadmap](../plans/001-ai-upgrade-roadmap.md), with bounded Fable reviews:
[implementation contract](../plans/002-ai-upgrade-implementation-review.md) and
[code review](../plans/003-cognition-code-review.md).

- `CognitiveSim` owns an accepted squad method record. The cognition branches of
  `UpdateSquadPlan` and `PlanSquad` bypass legacy maneuver/search/coordination
  writers. Distinct method intents retain their parent goal and correlate receipts.
- Available methods: Observe, SupportedAdvance, AlternateApproach, Hold, Withdraw.
  Methods have candidate scores, feasibility reasons, preparation/execution stages,
  latched movement completion, expiry, local failure and upward exhaustion reports.
- Supported movement requires recent delivered-round evidence from a support
  weapon in the relevant sector. Merely assigning a gun, or a rifleman firing,
  does not release it. Gun positions are selected from reachable protected cover
  with a line to the ordered sector. Cross-squad evidence uses delayed command
  relays and preserves the original delivery timestamp.
- Soldiers retain assignments during local shelter/reload execution. The squad
  pause considers the point element or at least half the movers sheltering or
  yielding passage; a lone reload does not freeze the whole squad.
- Attention releases stale contact fixation, scores recent threats, watches an
  observation goal, and periodically scans. Vision uses physical CPU line tests;
  recognition includes a distance/visible-sample delay in this mode.
- Mental maps retain identified observations, original observer/timestamp,
  clearance, a decaying lower count and separate unseen-force allowance. Age does
  not increase the per-observation upper count. The existing bounded uncertainty
  radius affects remembered risk near a candidate destination; no dense probability
  grid or unexplained hidden enemy positions are introduced.
- Judgment skill attenuates estimation bias. Risk changes commitment/withdrawal
  preference. Adaptability controls reaction to fresh threats after commitment.
  Config values are base profiles, with small deterministic per-actor variation;
  the exact sampled profile is stored in each replay frame. These are designer
  heuristics, not validated psychological models or persistent campaign progression.
- The experimental Unreal inspector draws the selected replay actor's view rays,
  remembered contact uncertainty, method/stage/reason and officer profile. World
  units remain explicitly labeled observer truth. Rewinding uses stored frames.

## Specific scenarios

`./scripts/test-sim.sh --cognition` contains separate scenarios, not win/loss tests:

| Scenario | Stimulus and required distinction |
| --- | --- |
| Vision/attention | Front versus rear target, opaque blocker, near versus distant recognition, release of stale-contact fixation. |
| Memory | One sighting repeated through another relay; unchanged count, preserved age/source, wider location uncertainty, monotonic clearing. |
| Support/execution | Blocked support versus useful delivered fire; no move without support, release after sustained reports, no release from rifle-only fire. |
| Interruption/completion | Lone reload versus point shelter; retained method and destination, staged arrival receipts, latched completion. |
| Observation | Old knowledge cannot complete a new observation order; fresh local evidence can; silence times out without declaring the area safe. A clear ray beyond sight range requires a closer reachable viewpoint. |
| Officer judgment | Identical observations under different judgment/risk settings; known overwhelming resistance can produce withdrawal. |
| Alternate approach | Matching member blockage changes method and destination while retaining the parent goal; the replacement needs a useful relation to the objective. |
| Adaptability | Fresh threat near the destination triggers reconsideration after the profile's commitment interval; different profiles react at different times. |
| Report transport | Scenario 9 starts the platoon commander outside direct sight; longer report delay changes when knowledge arrives. |
| Support relay | Another squad receives support-weapon delivery evidence through the command chain; expired or wrong-sector evidence does not qualify. |
| Physical obstruction | Scenario 10 inserts a wall at t=2 through the normal geometry mutation API. Actual invalidated destinations produce member failure, exhausted-method feedback and a delayed replacement order. |
| Trace/replay | Production simulation with trace enabled/disabled has matching same-platform gameplay digests; Unreal seek returns the same stored look and goal. |

The focused method/receipt cases deliberately supply controlled reports to isolate
policy and transport. Scenario 10 does **not** inject failure receipts: the physical
simulation produces them. Its observed cause is `Failed / Geometry`, separately
from the existing `Unreachable` navigation test in the foundations suite.

The offline analyzer independently follows matching method, parent goal, failure
receipts, commander receipt, replacement intent and accepted observation method:

```bash
./scripts/battle-lab.sh --cognition --encounter 10 --seed 107 --seconds 70 --out .local/cognition-obstruction
python3 tools/investigate_cognition.py .local/cognition-obstruction/latest.json --check-obstruction --out .local/cognition-obstruction/evidence.json
```

Scenario 9 is report-transport observation. Scenario 8 is the original integration
fixture. Encounters 5–7 use the existing strict tactical layouts and evaluator:

```bash
python3 tools/run_route_matrix.py --cognition --out .local/cognition-matrix --check
```

`--check` must fail below 8/9. No evaluator threshold was changed. The first matrix
at source `b7dafb6705491295` scored **0/9** and is unaccepted. That run preceded the
support relay and reviewed transition fixes. It is preserved as failure evidence;
feature scenario successes do not replace it.

Reproduction flags include `--report-delay`, `--full-vision`, `--judgment`, `--risk`,
`--adaptability`, and `--estimate-bias`. Manifests and reruns restore them. Exact
parity is per platform, not between GCC and MSVC.

## Architectural findings and resolutions

The code review found no new hidden-enemy-state policy reads, but identified
important lifecycle defects. Astra corrected the implementation:

1. Report a blocked parent only after local methods are exhausted; expose an
   explicit exhaustion transition and test that no local method races that report.
2. An alternate cover point requires a line to the sector or proximity to the
   mission objective; mere distance from the failed point is insufficient.
3. Failed preparation records a failed method. Expired parents cannot acquire
   a renewed deadline. Completion remains latched for its method; fresh higher
   orders supersede it. Holding after completion is an intentional command wait,
   not evidence that another goal was completed.
4. Support-weapon provenance travels with delivery reports. Support selection
   includes a reachable protected firing position and a rifle-only negative case.
5. Reconsideration requires fresh threat evidence and increased remembered risk
   after commitment; receipt churn or ageing alone does not count as a new threat.
6. One reloading member cannot trigger the squad override; point/majority safety
   interruptions retain the method.

The review proposed immediate independent replanning after any terminal state.
That is not applied to a still-live higher order: it would silently abandon the
parent goal. New higher orders supersede terminal methods, and expired intents
stop tagging tasks. Broader autonomous follow-on mission selection remains a
separate design extension, not a claimed feature of these methods.

## Verification record

### Pre-range-fix integration candidate

Simulation source identity `a28f1c8d7f6aa7ff`; repository HEAD `3ebd263` plus the
uncommitted foundations and cognition changes. The normal baseline archive uses
`59fbe5635ddb36bf` (the `bdebee7423944a54` source differs only by a UE shadow-name fix).
The evidence in this subsection is for that candidate; the observation range correction is recorded separately below.
Build/evaluation artifacts are local and ignored by Git; this report preserves
results and commands.

- Full Linux simulation regressions pass (254.929 s), including legacy encounter
  group closure 9/9 and fixed-defender elimination 3/3. Those are distinct from
  the stricter cognition tactical gate below. Recovery contract checks pass.
- Normal simulation with cognition disabled exactly matches the preserved
  baseline on **10/10 six-minute seeds (100–109)**.
- Linux and native Windows cognition scenarios pass, including expiry and a fresh
  higher order retrying a previously failed method. Foundations scenarios pass.
- The obstruction chain is independently verified at trace IDs **8 → 228/252 →
  411 → 412 → 429**: accepted movement, physical member failures, commander receipt,
  replacement, and actual acceptance of observation orders. Failure occurs at
  **5.4 s**, higher command receives it at **11.9 s**, and changed execution is
  recorded at **14.0 s**. No instant command knowledge is assumed.
- Scenario 9 commander receipt is **5.0 s** with the base delay and **9.8 s** with
  slower reports, on Linux and Windows. The assertion stops at the first receipt;
  it does not claim the commander stays outside sight for an entire longer battle.
- Linux scenario 10 original trace, detailed rerun and trace-off all reproduce
  digest `12409948462785961842`. Production scenario 8 at 35 s reproduces trace
  on/off digests `3139775745805505028` (Linux) and `14086942365465247199` (Windows).
  Cross-platform equality is not required.
- Windows trace-on, trace-off and detailed rerun at 90 s preserve all nondefault
  profile/vision/report-delay parameters and digest `11859185024702867433`.
- **27 Python tests pass**, including the obstruction analyzer's negative cases.
- UE5.8 module and Windows CLI compile successfully. No new dependency or download
  is required. The compiler preference warning is informational; build success
  does not depend on suppressing it.
- The cognition replay smoke passes and its screenshot was visually inspected:
  cyan field boundaries and amber remembered areas are visible; method, stage,
  reason, age and profile are readable. Stored look/goal are identical after
  rewinding. This is an inspector readability check, not tactical acceptance.
- Main-game and trench Unreal replay smoke checks pass; cognition playback also
  passes. Source/config match the playable mirror: **42/42 files**.

### Pre-range-fix strict tactical result: failed, 0/9

The unchanged matrix is archived under `.local/cognition-acceptance/matrix/`.
All layouts 5–7 and seeds 107–109 fail the existing route completion plus sustained
second-angle criterion. Only layout 5 / seed 107 eliminates its defender; that
outcome does not pass the tactical gate. The command correctly exits nonzero.

The `a28f1c8d7f6aa7ff` layout 5 / seed 108 trace shows:

| Trace ID | Time | Actor/transition |
| --- | ---: | --- |
| 30 | 0.05 s | Squad 1 accepts its initial advance before higher orders. |
| 737 | 12.60 s | It changes to observation. |
| 1199 | 19.75 s | Another observation method is accepted. |
| 1848 | 36.30 s | Another observation method is accepted. |
| 2526–2527 | 57.20 s | Observation exhausts and reports no new evidence. |

The independent engagement audit finds zero arrivals at the two initially accepted
route destinations, zero qualifying firing positions there, and zero second-angle
members. This places the observed failure before the final sustained-angle gate.
Repeated observation without information gain is demonstrated. It is not proof
that one scoring constant or support relay explains every failed layout.

**Promotion remains unfinished.** The next integration problem is productive
observation and support/maneuver coordination: select an executable way to acquire
new information, propagate its success/failure, and make a different useful choice
when it cannot work. Repeating the same observation order is not progress. A future
fix must first pass a controlled no-information-gain/replanning scenario, then
rerun the unchanged matrix and held-out cases. Do not tune only until one seed wins.

### Final observation range correction

Final simulation identity **`c8bac9e44840cd47`**. A clear ray could previously be
mistaken for a useful viewpoint even when the region was beyond sight range.
Observation now searches for a closer reachable cover viewpoint when either
range or occlusion prevents observation, and candidate peeks must lie within
sight range. A dedicated clear-but-too-distant scenario checks that it emits
movement toward the nearer viewpoint. This correction changes only the cognition
candidate function; the earlier full normal-game regressions and ten-seed
isolation evidence above retain their exact source label.

- Final cognition scenario suite passes on **Linux and native Windows**, including
  the new range case. Production trace-on/off digests remain the platform-specific
  values above. Scenario 10's independent causal analyzer still passes.
- Final Windows CLI and UE5.8 builds pass. The cognition replay smoke passes with
  the corrected build. Main/trench smoke evidence is from `a28f1c8d7f6aa7ff`;
  the correction has no normal-game branch and changes no presentation code.
- Final unchanged tactical matrix: **0/9**, below the **8/9** target. Layout 6 /
  seed 109 now records **one completed route**, but no sustained second angle.
  Every other case records zero completed routes. Defender elimination remains
  limited to layout 5 / seed 107. The controller remains unaccepted.
- Final matrix/manifests: `.local/cognition-range/matrix/`; Linux and Windows
  tests: `.local/cognition-range-tests.log` and
  `.local/cognition-range-windows-tests.log`. Original failed matrices are retained.

The range correction fixes one demonstrated mechanism defect. It does not solve
repeated unproductive observation or prove that reaching a candidate cover point
will yield useful information under combat execution. That remains the next
integration scenario and acceptance blocker.

### Evidence locations and limits

- `.local/cognition-final-tests.log`, `cognition-final-full.log`,
  `cognition-final-recovery.log`: final Linux suites.
- `.local/cognition-final-windows-tests.log`: native Windows suites.
- `.local/cognition-final-obstruction/evidence.json`: independent causal check.
- `.local/cognition-acceptance/matrix/`: exact manifests, traces, route audit,
  selected transitions and unchanged nine-case score.
- `.local/cognition-acceptance/isolation/`: comparison against preserved normal runs.
- `.local/cognition-final-*-smoke.log`: final Unreal smoke logs.

Focused method cases use controlled inputs to separate causes; they do not prove
that all prerequisites arise naturally in a large battle. Support evidence must
come from a recognized support weapon, but communication capacity/loss and
anonymous contact identity remain deferred. Uncertainty is a bounded radius,
not a terrain-constrained probability distribution. Decision scores and profiles
remain heuristic. Larger formations, held-out tactical acceptance and reliable
productive observation are still unverified. The experiment stays opt-in.

