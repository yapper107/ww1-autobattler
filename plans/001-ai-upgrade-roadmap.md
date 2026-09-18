# AI upgrade roadmap: perception, beliefs and purposeful execution

Status: proposed roadmap; no gameplay changes made by this planning pass.
Prepared 2026-09-14 against HEAD `3ebd263` plus the uncommitted foundations work,
simulation source `bdebee7423944a54`. Recheck source identity before implementation.
User objective: soldiers and officers should use imperfect information, remember
it, choose meaningful ways to accomplish orders, and reconsider unattainable goals.

## Recommendation

Continue from the existing simulation with staged improvements. Use actor-local
beliefs, a small library of hierarchical methods, scored choices, and reliable
execution/feedback. A wholesale replacement is not justified by the evidence.

The first foundation is implemented only in `--foundations --encounter 8`:
directional sight, deliberate looking, delayed/deduplicated memory, regional
estimates, seeded judgment bias, goal IDs and one observation fallback. The normal
Unreal game does not expose this experiment. Component tests passed; the existing
90-second integrated sample did not naturally exercise the blocked-goal fallback.
The earlier recovery experiment remains unaccepted at 2/9, formerly 5/9, against
an 8/9 tactical target. None of those counts describes all AI capabilities.

## Research and its limits

The sources below support techniques, not a prediction that our implementation
will pass its tests or feel convincing. The game-specific choices are proposals.
Access level is recorded so an abstract is not mistaken for a full-paper review.

| Source | Evidence consulted | Application proposed here |
| --- | --- | --- |
| Peters and O'Sullivan, *Synthetic Vision and Memory for Autonomous Virtual Humans* (2002), [publisher record](https://onlinelibrary.wiley.com/doi/10.1111/1467-8659.00632) | Publisher abstract: synthetic vision, perceptual attention and staged storage of perceived information. Full paper not reviewed. | Separate seeing, attending, remembering and reacting; expose those differences in replay. |
| Kaelbling, Littman and Cassandra, *Planning and acting in partially observable stochastic domains* (1998), [publisher abstract](https://www.sciencedirect.com/science/article/pii/S000437029800023X); [Cassandra's research retrospective](https://cassandra.org/arc/talks/aaai2013/index.html) | Abstract and author's slides explain belief states, information-gathering actions and computational difficulty of exact solutions. | Let uncertain knowledge affect decisions and make observation useful. Start with explicit heuristics, not a full optimal POMDP solver. |
| Nau and collaborators, [University of Maryland SHOP/HTN description](https://www.cs.umd.edu/projects/shop/description.html) | Research project describes decomposing tasks using alternative methods and preconditions. | Break a platoon goal into squad methods and soldier tasks. Decomposition alone does not solve uncertainty or coordination. |
| Dill and Mark, [*Improving AI Decision Modeling Through Utility Theory*, GDC 2010](https://www.gdcvault.com/play/1012747/Improving-AI-Decision-Modeling-Through) | Official talk synopsis; industry practice, not a controlled study of this game. | Compare feasible alternatives using explicit benefit/cost considerations; retain hard constraints and commitment rules. |
| Kahneman and Klein, [*Conditions for intuitive expertise* (2009)](https://pubmed.ncbi.nlm.nih.gov/19739881/) | Original article abstract distinguishes expertise from subjective confidence and relates reliable judgment to learnable regularities and experience. | Model skill, bias and risk preference separately. This is a game-design interpretation, not a validated officer-personality formula. |

No consulted source establishes our 140-degree field, scan period, 16-metre cells,
strength weights, uncertainty band, or personality values. Those need measurements
and player evaluation. This was targeted research, not a systematic literature review.

## Architecture to retain

```
Physical world -> sensory observations -> personal memory
                                      -> delayed reports -> leader memory
Actor memory + own order + known terrain -> feasible methods -> scored choice
Chosen method -> assigned tasks -> execution -> delayed feedback -> reconsideration
Replay records the evidence and reasons at each step.
```

The simulator can read world truth for sensory production, collision and offline
assessment. Tactical policy receives only permitted knowledge. An officer never
gets a free preview of the actual future battle. Shared reports do not imply a
shared omniscient team memory. Terrain starts from the existing briefing map;
discovering an entirely unknown landscape remains deferred.

## Ordered milestones

### 1. Make one complete decision cycle inspectable and reliable — next slice

**Impact:** high. **Effort:** medium. **Risk:** medium, because plan ownership
crosses existing modules. **Evidence confidence:** high for the current limited
fallback and multiple plan-writing stages; no claim these explain every failed battle.

Use the existing perception and memory model unchanged initially. Record the
accepted goal, method/stage owner, observation/report timestamps, matching task
receipts, interruption reason and replacement decision. Audit authority in
`PlanSim.cpp`: it currently invokes maneuver, search and coordination consecutively.
Ensure one accepted plan owns its destination; other stages propose changes or
update execution within it. A temporary reload/shelter interruption retains the
goal and resumes when appropriate. An expired or superseded plan cannot return.

Demonstrate a physical obstruction causing real task failure, delayed reporting,
and a replacement method in an integrated encounter. Do not inject a Blocked
receipt and call that natural battle behavior. For this slice Observe is a valid
response; do not claim it seizes or secures the objective. Define the evidence
that completes an observation stage and the timeout/report when it cannot learn
anything; standing still indefinitely is not a completed observation task.

Present a selected actor's cone, last-known contacts, belief age/uncertainty and
current intent in an inspectable replay. Any truth overlay must be separately
labeled. Never recompute past knowledge from final enemy positions. The CLI trace
is the first acceptance surface; an Unreal overlay follows the stable record schema.

### 2. Measure perception and clarify memory semantics

**Impact:** high. **Effort:** medium to large. **Risk:** medium.

Measure rear scanning, attention captured by old reports, partial occlusion and
recognition delay. Give attention a bounded choice among current threats, assigned
sectors and poorly observed approaches. Field-of-view and CPU ray tests remain in
the standalone C++ simulator; rendered pixels are not required for this abstraction.

Separate confidence that an old track still matters, uncertainty about location,
and uncertainty about unseen additional forces. The present regional band is a
heuristic. Age alone should not manufacture new observed soldiers. Missing cells
remain unknown, and seeing an empty patch does not clear a whole region.

Keep last-known positions for the next slice. After the first method library,
test a bounded reachable uncertainty area from known terrain where it changes
a method choice. Only add a probability distribution across regions if the simpler
model fails a measured scenario; if distributed, conserve each contact's total weight
and report provenance. Do not multiply one contact as uncertainty covers more cells.
Retain report age and deduplication. Test recognition against distance/exposure
and motion before choosing additional sensing rules; do not assume the current
scan schedule or recognition parameters are realistic. Later communication work
can add constrained capacity and lost reports, which the current transport lacks.
Evaluate estimates against world truth only
in offline analysis. Keep unidentified-contact association as a separate future
change rather than silently converting internal IDs into perfect recognition.

### 3. Give each command level useful alternative methods

**Impact:** high. **Effort:** large. **Risk:** high; requires milestone 1.

Use a small authored method library with explicit preconditions, ongoing
requirements, completion evidence and failure reasons. Hierarchical task planning
means a goal can be broken down in more than one valid way. Utility scoring means
comparing those feasible alternatives. Neither requires an enormous decision tree
or a new general-purpose planner library.

- Soldier: execute the assigned role through suitable cover, a usable firing
  position, an alternate local route, or a temporary protective pause. Retain
  order identity; report inability rather than silently abandoning the mission.
- Squad: assign support and moving members, establish useful covering fire, move
  in stages, verify arrival, and reconsider blocked execution. A support order is
  not evidence that useful fire is actually reaching the relevant area.
- Platoon: compare observe first, supported approach, alternative approach, hold,
  or withdrawal/request for support. Use received force/readiness reports,
  uncertain enemy capability, known geometry, mission urgency and expected cost.
  Implement only methods with executable lower-level actions and honest outcomes.

Score mission progress, exposure, time, information gained, cohesion and force
availability. Normalize terms, expose contributions, and apply hard feasibility
checks first. Use stable ties and a cost to switching; dangerous new information
can still interrupt commitment. Avoid one personality multiplying every score.

### 4. Make officer differences meaningful

**Impact:** medium to high. **Effort:** medium after methods work. **Risk:** medium.

Distinguish estimation skill, stable over/underestimation bias, risk tolerance and
adaptability. A competent aggressive commander can understand a risk and accept it.
A poor commander can misread evidence or persist after contrary reports. Caution
alone is not incompetence. Start with reproducible test profiles and compare them
under identical evidence; persistent growth and campaign experience come later.

Fresh, strong evidence should be capable of correcting an old interpretation.
Initial personality parameters are designer-controlled hypotheses. They need
readable differences across situations, not a claim of simulated human cognition.

### 5. Promote only after behavior and scale are measured

**Impact:** essential. **Effort:** ongoing. **Risk:** high if skipped.

Keep the opt-in experiment while developing. Preserve normal-gameplay digests
while the mode is off. For promotion, compare outcome distributions rather than
requiring the newly enabled behavior to reproduce old digests.

Maintain separate scoreboards: knowledge correctness, execution/coordination,
strict tactical success, runtime/memory, and visual readability. Retain the strict
8/9 tactical target and unchanged success definition; carry its scenarios into
the candidate controller explicitly when ready. Do not combine incompatible
recovery/foundations flags or use the old controller's score as the new one's.
Add held-out seeds, terrain variants and adverse cases before tuning on them.

Use paired configurations: baseline; vision/memory changes; execution/method
changes; combined system. Record source IDs, seeds, configuration and evaluator
version. Compare mission completion, useful support/movement overlap, losses,
unnecessary plan changes and time to respond to new evidence. Count uncertainty
errors separately from execution errors. More movement/firing is not enough;
zero losses and zero waiting are not sensible universal success conditions.

## First-slice implementation handoff and verification

Read `AGENTS.md`, `docs/DESIGN_VISION.md`, `docs/BATTLE_LAB.md`,
`docs/AI_FOUNDATIONS_PLAN.md`, and `docs/AI_FOUNDATIONS_RESULTS.md` first.
Existing exact exemplars: `PerceptionSim.cpp::InVisualField` and `UpdateAttention`;
`BeliefSim.cpp::ReceiveObservations` and `ReportedGoalStatus`;
`PlatoonSim.cpp::GoalAlternative`; `PlanSim.cpp::UpdateSquadPlan`;
`TaskSim.cpp::EvaluateTaskExecution`; `tests/foundations_tests.h` for assertions.

Work within the existing free-function C++17 simulation style, explicit state
records, delayed transport and deterministic trace/export conventions. Candidate
files are those modules, their headers, `Diagnostics.*`, `tests/foundations_tests.h`,
`tools/investigate_foundations.py`, and existing Unreal replay/UI files once the
record schema is stable. Do not rewrite physics/navigation, enable foundations
in normal play, alter strict acceptance thresholds, add campaign progression or
install planning/ML packages as part of the next slice.

Suggested implementation order and done criteria:

1. Archive current manifests/digests and enumerate all destination/status writers.
   Add ownership trace fields with source/config identity; tracing on/off must
   reproduce the same gameplay digest on the same platform.
2. Centralize accepted-plan transitions without adding a competing writer. Add
   tests proving temporary interruptions resume, old reports cannot replace new
   goals, completion is task-specific and each replacement has one causal owner.
3. Add an integrated physical-obstruction fixture using real perception/navigation
   and report transport. Require trace links from goal to obstruction to report
   receipt to changed execution. Assert no instant command knowledge. Keep the
   existing scripted transport tests as separate unit coverage.
4. Define observation-stage evidence and timeout, including no-progress handling.
   Require successful observation or an explicit reported inability; do not mark
   an unseen region safe because the unit reached a position.
5. Add replay inspection after trace fields stabilize; visually inspect a chosen
   time, rewind it and verify the same recorded beliefs and intent reappear.

Existing runnable gates (run from repository root):

```bash
./scripts/test-sim.sh --foundations
./scripts/test-sim.sh --recovery
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p 'test_*.py'
./scripts/battle-lab.sh --foundations --encounter 8 --seed 107 --seconds 90 --out .local/ai-upgrade-check
python3 tools/investigate_foundations.py .local/ai-upgrade-check/latest.json --soldier 5 --time 30
./scripts/build-lab-windows.sh
./scripts/build.sh
./scripts/launch.sh -ArmySmokeTest -ArmySeed=108 -unattended
./scripts/launch.sh -ArmySmokeTest -ArmyTrenches -ArmySeed=108 -unattended
git diff --check
```

C++ assertions and Python tests must pass; archive the two Unreal success markers
and inspect saved screens. Use a distinct output directory per revision. Keep
normal-gameplay ten-seed isolation and same-platform trace parity from the
foundations plan. Existing smoke checks cover ordinary playback; add explicit
experimental replay coverage before claiming its new overlays are verified.

If ownership work requires replacing the whole production command pipeline,
changes the player's role, or requires hidden enemy state, stop that expansion,
document the conflict and obtain a bounded architecture review. Do not mask
failures by loosening tests. Research constants and tactical tuning require new
measured evidence before changing them.

## Planning scope

Inspected the foundation, command/task and plan paths plus their tests and prior
results. This is an AI direction plan, not a security, dependency, graphics-quality
or whole-repository audit. The installed Improve skill's referenced plan template
was absent; this document includes explicit scope, evidence, ordering and gates
without relying on that missing template. No builds or gameplay tests were rerun
for this research/planning-only pass.

## Fable review and Astra resolutions

Actual `claude-fable-5-1` response is preserved in
[001-ai-upgrade-fable-review.md](001-ai-upgrade-fable-review.md), requested using
[001-ai-upgrade-review-request.md](001-ai-upgrade-review-request.md). This review
covered the proposal and current code, not a future implementation.

- **Accepted:** combine instrumentation and plan authority in the next bounded
  milestone. Trace every accepted destination/mission change, safety override and
  resumption. Check these at simulation transitions rather than relying solely
  on sparse replay frames, which can miss intermediate changes.
- **Accepted:** defer route-distributed uncertainty until methods can use it.
  First clarify semantics. Current ageing increases a heuristic upper strength
  estimate; revising that is an intentional experimental behavior change, not
  a claim that the original software tests failed. Track contribution and an
  explicit unseen-force allowance must be separate. A known internal identity
  identifies observed evidence; it does not make the true enemy force count known.
- **Qualified:** Fable recommended choosing shipped contact-identity semantics
  immediately. Keep current handles for the bounded milestone. Anonymous contact
  association and mistaken identity need an explicit design decision before
  shipping broader perception; neither is necessary to inspect plan ownership.
- **Qualified:** completion must describe what the actor can establish. Reaching
  a position or having no known enemies there cannot certify actual control of
  a region. A fresh sighting/clearing can complete an observation step, with a
  separate timeout when nothing is learned. Mission success has its own tactical
  evaluator; actor-reported completion and observer-verified success remain distinct.
- **Rejected:** replacing the existing strict tactical gate. Keep its original
  definition and 8/9 target for claims of solved envelopment, as project law
  requires. Add separate foundations predicates and held-out distributions.
  Foundations may pass component/feedback gates while tactical acceptance remains
  outstanding. A future controller must explicitly run the strict scenarios;
  the recovery controller's score is not transferable.
- **Qualified:** ablations must test causal differences where stimuli actually
  exercise the feature. A longer report delay should delay receipt in a controlled
  transport case; it need not delay the first sighting in an unconstrained battle.
  Do not demand different digests when a feature is not exercised. Preserve
  same-platform repeatability and trace-on/off parity.

The review's proposed mass-conservation assertion belongs with the future memory
semantics change, not a supposedly behavior-preserving plan-ownership refactor.
Its recognition-delay observation is a tuning lead to verify in the full sensory
and reaction path, not an independently established defect from this pass.
