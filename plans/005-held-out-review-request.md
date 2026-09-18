# Bounded architectural consultation: held-out reliability

Objective: review a proposed repair plan, without editing source or running/tuning battles.
Project: `/home/jchan/ww1-autobattler`; HEAD `3ebd263`; dirty simulation source
fingerprint `8a5b385e04c22185`. Existing subscription only, exact model
`claude-fable-5-1`; no alternate model or paid usage.

Original fixed 360-second matrix is 9/9 on Linux and Windows. First frozen
held-out evaluation (110–119) is 22/30: layout 5 10/10, layout 6 7/10,
layout 7 5/10. User asks why these failed and for a fix plan, not implementation.
Keep cognition opt-in. Preserve evaluator, fixtures, deadlines and knowledge
boundaries. These opened seeds become historical regressions, not a tuning loop;
new independent validation must be frozen before future tuning.

Read the relevant portions of `CognitiveSim.cpp`, `TaskSim.cpp`, `BattleSim.cpp`,
`PlatoonSim.cpp`, `TacticalRouteSim.cpp`, `BattleSim.h` under
`Unreal/Source/ArmyPrototype/Sim/`, plus `docs/AI_NINE_GATE_RESULTS.md` and
`tools/evaluate_routes.py`. Existing accepted design is `plans/004-decision-action-loop.md`.

Trace-backed findings:

1. Layout6/112: soldier14 task115 reports shelter at75.6 but is at assigned peek
   (38,15.9), unsuppressed and firing by78.35; no Done before battle end92.05.
   TaskSim55–63 clears emergency only at shelter; same-slot execution105 retains
   stale emergency; evaluator130 treats it as interrupted. Need an explicit safe
   resume transition preserving assignment identity, not permissive completion.
2. Layout6/113: support lost64.35, point-soldier safety override67.8; leader already
   has useful gun7 reports at74.4 and79.4 but release waits81.7. Completion87.85;
   battle ends at 90.15 without qualifying second-angle interval. CognitiveSim191–194
   returns before preparation220. Need independent support/evidence/deadline
   assessment while preserving local safety, with explicit team readiness.
3. Layout7/117 and119: final cover (41.2,-26) has global FindPath at planning but
   FollowCorridor repeatedly returns no_executable_path at execution. Check
   CognitiveSim67–90, BattleSim312–332, TacticalRouteSim145–164. Same defect in
   passing7/111: other soldiers mask it. Need one executable route-plus-final-slot
   contract, geometry-correct final connectors and honest bounded failure.
4. Layout7/110 and112: support counts gun7 fire at rifleman33 (29.2,-4.4) as useful
   for sectorMG(29.2,7), while MG39 hits movers. Support radius alone12–17 does
   not encode which known threat threatens the crossing. Later117/119 final
   defense around(41,-26) is known but support still targets the old MG. Retarget only
   after loss of old-sector delivery199–207. Need stage-specific reported threat
   coverage, explicit gun requests, acknowledged handoff/lift, hysteresis, and
   local plan reconsideration without general route churn or hidden enemy state.
5. Layout6/118 attains second angle98.8 but loses two Done-bearing occupants:
   soldier13 wounded by friendly14 at 93.815; soldier12 hit by friendlygun7 at
   99.1955 and 99.5955. Gun7 is99.3m away; friendly vision capped70m, riskcheck
   uses only <=1.5s-old sightings (BattleSim238–262,677). Need communicated
   friendly movement/occupation lanes and bounded hold/lift/shift coordination,
   retaining physics and imperfect knowledge. Exact rifle14 incident unproven.
6. Layout6/118 and7/117,119 attain sustained physical angle but not two valid
   occupation receipts before attrition. Wounded removal165 occurs before Done
   counting; insufficient members230 is mislabeled Timeout or Unreachable.
   Do not count inactive/withdrawn soldiers or stale Done to inflate score.
   Distinguish mobile eligibility from actual capability to maintain an occupied
   position only if justified by existing wounded behavior. Add honest strength
   failure feedback; higher command can change support, approach, squad or hold.

Requested response (bounded, no source edits):
- Critique the proposed boundaries and causal claims; distinguish demonstrated
  code defects from tactical hypotheses needing intervention tests.
- Recommend minimum interfaces/invariants for final connectors, staged support,
  friendly-lane reports, safety resume and live occupation evidence.
- Recommend implementation order and discriminating production scenarios.
- Identify any change that would cheat acceptance or introduce hidden knowledge.

Acceptance for the plan: test each defect on new small layouts using production
sensing/navigation/report delay/execution; preserve 9/9 original; no evaluator
weakening or duration extension; rerun historical held-outs only after a frozen
candidate; freeze a new validation set before tuning; native parity, legacy
baseline, replay/trace parity and 600-second memory checks remain promotion gates.
