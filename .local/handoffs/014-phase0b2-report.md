# Plan 014 Phase 0b2 report — Astra

16 September 2026. **Not suitable for promotion: strict knowledge-boundary compliance remains incomplete, optional suites are still red pending expectation review, and native Windows verification is blocked.** One corrected implementation iteration under the attributed [Fable review](../../../plans/014-phase0b-fable-review.md). No commit, reset, stash, Fable launcher, Unreal build or Phase 1 work.

**Entry source:** `19fe733644e046d8`. **Corrected measured source:** `be61f2ac859db33c` (`be61f2ac859db33c-linux`). **Working-tree source at report:** `be61f2ac859db33c`. The candidate90 simulation is preserved at `.local/phase0b/original/`; the working tree remains an unpromoted hotfix.

## Delivered and tested

- Persistent sweep parent with new child IDs only after leg occupation receipts; completion advances through the lane/leg sequence. Received engagement-range contact or platoon directive cancels the sweep; the last leg becomes Observe. `mission_initialised`, `mission_leg_advanced`, and `mission_sweep_superseded` record the reasons.
- Covering tiers: protected 12–25 m with sector line; protected within 40 m with line; current position protected against known threats; exposure-scored available slot with occupancy. Tier (d) does not inherit the 40 m cap. `method_covering_tier` records the choice. Only an unavailable required objective pair blocks the method. Increment 2 occupancy and the own-sector reserve query remain.
- New encounters 53/54: Works, no enemy contact for the tested squad, three completed legs within 120 s; a scripted order issued at 40 s uses the real platoon transport and reaction delay, supersedes the sweep, and it does not resume. Distinct child IDs retain the same parent.
- New encounters 55/56: a four-metre corridor with only two preferred covering slots; two tier-(a) allocations and two lower-tier allocations execute and occupy the objective. The paired no-objective-slot control blocks. Existing hotfix pins remain in the full C++ suite.
- The increment runner is sequential and immediately returns failure at the third zero-shot run in any ten-seed set; it launches no later seed or map. A fake-binary Python test verifies zeros at 100/101/103, a nonzero 102, exactly four launches, and no later controller/map. The engagement exit also rejects one or two zero-shot runs even if a full set completes.

## Measurement status

Engagement guard: **PASS**, aborted=False. Exact statuses and seeds are in `.local/phase0b2/corrected/engagement-guard.json`; commands and process exit codes are in `commands.json` / `runs.json`.

Whole-battle, left-endpoint weighting and equal-run means match the accepted Phase 0 definitions. NN is the mean of run medians, not a pooled median. Raw distributions and denominators remain in both Phase 0 tool outputs. No-trace reversals are null, not zero. A lower exposure or hit count alone is not evidence of better tactics.

| Map | Controller | Runs | NN median m | Under 2 m | RMS radius m | Centroid median m | Under 10 m |
|---|---|---:|---:|---:|---:|---:|---:|---:|
| works | candidate90 | 10 | 0.976 | 79.73% | 5.644 | 15.253 | 15.37% |
| works | legacy | 10 | 6.539 | 16.44% | 15.162 | 33.493 | 4.15% |
| works | corrected | 10 | 8.272 | 7.86% | 19.043 | 38.620 | 0.00% |
| trenches | candidate90 | 10 | 1.454 | 66.47% | 8.543 | 9.721 | 53.42% |
| trenches | legacy | 10 | 3.946 | 31.28% | 14.391 | 8.486 | 60.27% |
| trenches | corrected | 10 | 2.815 | 28.40% | 13.222 | 17.648 | 0.00% |

| Map | Controller | Exposure s/initial soldier | FF hits (per 100 soldier-min) | Azure/draw/Ember | Azure / Ember casualty fractions | Mean shots (zero-shot runs) |
|---|---|---:|---:|---|---|---:|
| works | candidate90 | 8.437 | 332 (13.1863) | 3/1/6 | 68.75% / 52.50% | 988.4 (0/10) |
| works | legacy | 4.687 | 109 (3.9900) | 2/3/5 | 61.88% / 56.88% | 2306.5 (0/10) |
| works | corrected | 7.179 | 19 (0.5791) | 2/0/8 | 35.94% / 17.50% | 1382.0 (0/10) |
| trenches | candidate90 | 6.257 | 115 (3.4156) | 5/0/5 | 27.19% / 24.69% | 798.9 (0/10) |
| trenches | legacy | 0.397 | 68 (2.3737) | 6/1/3 | 47.50% / 55.31% | 1989.3 (0/10) |
| trenches | corrected | 4.173 | 9 (0.2423) | 4/1/5 | 10.94% / 6.25% | 228.0 (0/10) |

## Per-run adverse cases

Every completed corrected cognition run appears below. Adverse directions are disclosed against candidate90 and the previous failed Phase 0b build; exact deltas for all spatial/outcome fields are in `adverse-cases.json`. Smaller RMS or higher self-play casualty fractions are descriptive, not standalone tactical judgments.

| Map / seed | NN m | Under 2 m | Exposure s | FF hits | Shots | Adverse vs candidate90 | Adverse vs Phase 0b |
|---|---:|---:|---:|---:|---:|---|---|
| trenches / 100 | 2.809 | 23.11% | 6.447 | 0 | 188 | exposure↑ | exposure↑, Ember loss↑ |
| trenches / 101 | 2.800 | 23.07% | 8.813 | 1 | 207 | exposure↑, Ember loss↑ | exposure↑, FF↑, FF rate↑, Ember loss↑ |
| trenches / 102 | 2.801 | 27.28% | 2.341 | 0 | 200 | none by listed directions | exposure↑, Azure loss↑, Ember loss↑ |
| trenches / 103 | 2.800 | 29.87% | 0.938 | 1 | 121 | none by listed directions | RMS↓, exposure↑, FF↑, FF rate↑, Ember loss↑ |
| trenches / 104 | 2.810 | 33.45% | 1.309 | 0 | 83 | none by listed directions | exposure↑, Azure loss↑, Ember loss↑ |
| trenches / 105 | 2.793 | 25.05% | 5.572 | 2 | 154 | exposure↑ | exposure↑, FF↑, FF rate↑, Azure loss↑ |
| trenches / 106 | 2.800 | 29.18% | 8.784 | 0 | 423 | centroid↓, Azure loss↑ | RMS↓, centroid↓, exposure↑, Azure loss↑, Ember loss↑ |
| trenches / 107 | 2.801 | 29.83% | 2.591 | 0 | 177 | none by listed directions | RMS↓, centroid↓, exposure↑, Azure loss↑ |
| trenches / 108 | 2.807 | 31.41% | 2.456 | 3 | 371 | none by listed directions | RMS↓, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| trenches / 109 | 2.933 | 31.75% | 2.478 | 2 | 356 | none by listed directions | exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 100 | 8.475 | 10.90% | 6.197 | 0 | 1017 | exposure↑ | <2↑, centroid↓, exposure↑, Azure loss↑, Ember loss↑ |
| works / 101 | 8.672 | 10.65% | 5.859 | 4 | 1725 | none by listed directions | <2↑, centroid↓, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 102 | 7.509 | 12.05% | 7.156 | 1 | 1543 | exposure↑ | <2↑, centroid↓, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 103 | 8.338 | 7.35% | 8.372 | 2 | 1255 | none by listed directions | <2↑, centroid↓, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 104 | 8.427 | 5.85% | 6.237 | 0 | 1508 | none by listed directions | <2↑, centroid↓, exposure↑, Azure loss↑, Ember loss↑ |
| works / 105 | 8.682 | 8.76% | 9.897 | 1 | 1617 | exposure↑ | <2↑, centroid↓, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 106 | 8.795 | 5.60% | 8.403 | 7 | 1487 | none by listed directions | <2↑, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 107 | 7.754 | 4.52% | 5.697 | 2 | 822 | none by listed directions | <2↑, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |
| works / 108 | 8.534 | 4.32% | 6.638 | 0 | 1803 | none by listed directions | <2↑, centroid↓, exposure↑, Azure loss↑, Ember loss↑ |
| works / 109 | 7.540 | 8.60% | 7.331 | 2 | 1043 | none by listed directions | <2↑, centroid↓, exposure↑, FF↑, FF rate↑, Azure loss↑, Ember loss↑ |

## Exit assessment

| Map | Corrected NN / candidate90 | Corrected under 2 m / candidate90 | Spatial gain |
|---|---:|---:|---|
| works | 8.272 / 0.976 m | 7.86% / 79.73% | PASS |
| trenches | 2.815 / 1.454 m | 28.40% / 66.47% | PASS |

## Optional-suite reconciliation

These are proposed expectation changes for architect review, not test edits or passing results. The three existing test headers remain byte-identical. The ordinary assert executables still fail. To expose assertions hidden by the first abort, a separate local diagnostic build includes the unchanged headers and logs failed assertions without certifying success; scenarios run in separate processes. Its printed `PASS` strings are ignored. All 37 scenario functions were enumerated; 24 failing assertion sites were exposed, and final-source enumeration reproduced the same list. Downstream assertions after a failed setup are classified together with that setup, not as independent evidence. The support-protocol diagnostic reaches a null-route dereference after its failed setup; its later assertions are not reached.

| File / lines | Classification and evidence | Exact proposed expectation |
|---|---|---|
| cognition_tests.h:142,143 | Intentional change: only required occupants move to the objective. The synthetic blocked reports target covering members 2 and 3, not required occupants 0 and 1. | `method == SupportedAdvance && intent.id == old && intent.parent == 40`, `Distance(destination,{24,0}) < .01f && route && route->geometry == map.revision`. Add a separate control addressing the actual two `movers` if the old alternate-approach behavior is to be exercised. |
| cognition_tests.h:156 | Intentional downstream change: the above cover reports create no failed objective approach. Deadline retention still applies. | `exhausted && intent.expiresAt == 100 && attempts.empty()` for this unchanged stimulus. Retain the existing nonempty-history expectation for a genuine required-occupant failure. |
| decision_loop_tests.h:49 | Intentional change: member 2 is now covering; it was never assigned an objective generation or expected receipt by the preceding `if(p.movers[n])` setup. | `!p.movers[2] && p.routeStage == stage && p.generations[2] == 0`; unchanged expected IDs and generations for the surviving actual movers. A replacement-generation probe must wound a captured mover ID. |
| decision_loop_tests.h:67,87,91,94,96; reliability_tests.h:101,106,109,111,117,124,127; reliability_tests.h:447,453 | Intentional change to slot-feasibility preconditions. Only the leader is relocated to (0,0); the corporal remains at deployment about 150 m away from the accepted corridor. The required pair cannot both obtain connected slots, so the corrected allocator explicitly blocks. Later preparation, fire-release and deadline assertions depend on a setup that is no longer valid. | For the unchanged setup: `plan.stage == Blocked`, an `Unreachable` failed attempt, and `count(movers[i] && !unavailable[i]) < requiredOccupants`; received fire must not authorize an unallocated pair. Return from this negative setup rather than dereference its later missing route. For the original support-protocol tests, propose placing **all own members** in reachable, non-overlapping starts near the leader before planning; retain every existing support identity, transport, safety and nonrenewable deadline assertion unchanged. This fixture amendment requires review. |
| decision_loop_tests.h:210 | Intentional downstream change from the same split-squad setup. Blocked assignments hold with Occupy semantics instead of claiming a released transit. | In the unchanged setup: `stage == Blocked`, and each required mover's order has `completion == Occupy && !teamPlan.released`. With a reachable pair, retain `completion == Transit`. |
| reliability_tests.h:229 | Intentional change: synthetic stage-0 receipts locate no actual members near the route. Advancing to stage 1 invokes allocation, which cannot connect members still at deployment to the final corridor. | Require an `Unreachable` failure after the attempted advancement and no released move lacking an available slot. For the old positive contract, author the pair at their receipt positions before issuing the stage-0 receipts, then retain `routeStage == 1`. Do not forge positions in production. |
| cognition_tests.h:129 | Intentional change in the physical obstruction manifestation. Trace 10 now reports correlated `Blocked: unreachable` after the wall moves, followed by goal feedback, alternative and hold. The two assigned destinations are beside the wall, so they are not the old explicitly invalidated slot. | `blockedAfterGeometry && feedback && replacement && changed && exhausted >= 0 && sent >= exhausted`, where `blockedAfterGeometry` requires an actual task-status event after the geometry observation with cause Geometry **or Unreachable**, linked to that assignment. Do not accept an arbitrary unrelated block. |
| decision_loop_tests.h:162 | Intentional physical outcome under covering relocation. In encounter 15 the gun takes tier (b), arrives at 22.25 s, emits actual useful fire at 24.15 s, and eliminates the target at 24.20 s before the report reaches the waiting squad. There is no remaining battle in which to observe release/loss. | `(released && physical && lost) \|\| (enemyEliminated && gun7ActualHits && gun7UsefulFireStatus && battleEndsBeforeThatReportCanArrive)`. Keep the unavailable-gun control's `!released && !physical`. This proposal explicitly distinguishes early elimination from fictitious support. |
| decision_loop_tests.h:187 | Intentional change in which method awaits support: received threat evidence replaces method 1000001 at 10 s; method 1000002 reports deployment at 14 s and releases on actual fire at 35.05 s. The test stores only the **first** wait's ID. | Match each release to the most recent earlier deployment event for **that same method ID and source 15**; retain `release.time > wait.time`, the bounded deadline, source identity, transport delay, and physical-shot evidence. No release without a matching wait. |
| reliability_tests.h:245 | Intentional occupancy rejection retained from increment 2. Encounter 24 authors four transit endpoints 1.5 m apart. Actual `Blocked: friendly slot occupied` reports occur at 12.6/13.2/13.8 s and the method fails at 14.35 s; accepting those slots would undo the retained gain. | For the unchanged crowded fixture: `learned && !advanced` and at least one received Occupied report; no unsupported exposed-stage release. A positive protected-transit fixture must use endpoints >=2 m apart, retaining `advanced && held` after that approved fixture amendment. |

The independent `contract_probe.cpp` diagnostic confirms the split-squad cause on the final source: required member 0 starts at (0,0) and has a slot, required member 1 remains at (-140,-73.75) and is unavailable; required=2, available=1, with an Unreachable failure (`contract-probe.log`).

No existing assertion is weakened in this iteration. The physical trace evidence lives under `.local/phase0b2/final-contract-traces/`; diagnostic assertions and process status are in `assert-diagnostic/final-results.json`. No per-seed policy condition is proposed. Two implementation details were corrected before the single measurement build: equivalent higher directives clear the sweep parent as well as the sweep-active flag, and tier (d) does not inherit tier (b)'s 40 m limit.


## Final verification

- **Engagement and spacing pass:** all twenty cognition runs fire shots; every run improves both NN and under-2 m share against its matching candidate90 seed. No restoration was triggered. Forty complete battles (twenty cognition, twenty legacy), with 360 s configured limits, are archived. Shorter actual battles are genuine elimination outcomes.
- **Legacy parity passes:** `tools/check_foundations_parity.py` gives 10/10 matches against the preserved candidate90 executable using the explicit legacy wrapper. All twenty measured legacy gameplay digests also match Phase 0 on both maps (`measured-legacy-parity.json`).
- **Trace parity passes:** traced/untraced cognition seed 107 on both maps; every manifest field matches except `trace_enabled` (`trace-parity.json`). This is two parity pairs, not a twenty-seed parity claim.
- **Full requested Linux suite passes:** `./scripts/test-sim.sh`, exit 0, 286.978 s runtime. It includes both corrected pins and the earlier hotfix pins. All three optional modes still abort at the assertions recorded in `final-suites.json`; the reconciliation above does not turn those red results green.
- **Python:** 39 existing discovery tests plus the separate engagement-guard test pass. Eight preservation checks pass: evaluator, frozen manifests, terrain source, complete authored MakeMGEncounter, and all three original optional test headers. `git diff --check` passes.
- **Native Windows remains pending:** both existing scripts were run against the corrected source and exited 1. Copying into the now-writable mirror succeeds, but launching Windows `cmd.exe` fails before compilation with `WSL ERROR: UtilBindVsockAnyPort:309: socket failed 1`. Logs: `windows-build.log` and `windows-tests.log`. This is a process-interop blocker, no longer the Phase 0b read-only-mirror error. No Unreal build was run.
- Accepted reviews and the corrected working-tree status are linked from AGENTS.md and CLAUDE.md. Candidate90 remains the accepted main-build decision. The strict friendly-state knowledge-boundary defect described below remains unresolved, optional expectation proposals await architect review, and native verification is incomplete; no promotion is claimed.

## Frozen disclosure

| Set | Layout 5 | Layout 6 | Layout 7 | Total |
|---|---:|---:|---:|---:|
| Nine | 0 | 0 | 0 | 0/9 |
| Thirty | 0 | 1 | 0 | 1/30 |

Candidate90 reference: 8/9 and 28/30. Previous Phase 0b: 0/9 and 0/30. Every frozen case ran with the unchanged evaluator and seeds. These are disclosure scores, not tuning or promotion gates. Exact cases: `.local/phase0b2/frozen-nine/acceptance.json` and `frozen-thirty/acceptance.json`.

## Disagreements and limitations

- **Unresolved defect found in final code audit:** `CommandSim.cpp:625–631` copies live friendly squad `Soldier` objects directly into cognition. The new tier-(c) test/assignment in `CognitiveSim.cpp` uses the supplied member’s `position` and `stance`; those values are not restricted to the officer’s own observations or received reports. Enemy threat tests use officer memory, but that does not make the friendly-state read compliant with the user’s stricter rule. The pre-existing interface already supports other such reads; this iteration did not close it. Fix proposal: construct an actor-known squad view from own deployment orders, latest observed allies and correlated received task reports, and skip current-position tier (c) when no such position is known. Apply that same view to reachability/scoring, not just the tier-(c) predicate. This is a defect, not an intentional test-expectation change. It was discovered after the one corrected measurement build; I have left it explicitly unresolved rather than silently make a second measured iteration or present stale metrics for a new fingerprint. This requested requirement is therefore **not completed**.
- The revised sweep and covering rules address the two demonstrated structural failures; no disagreement with those replacements. Covering tier (c) treats protection against an empty current threat set as satisfied, while still applying occupancy and reachability. Tier (d) has no 40 m cap; otherwise the fallback would silently retain tier (b)’s restriction.
- Optional-suite expectation changes above are proposals for architect review, not permission to weaken tests. No existing optional header was edited. Windows native results remain pending because WSL process interop fails even though the mirror copy now succeeds. No Unreal or user replay result is claimed.
- Trace-label limitation: the inherited generic `position_query` label still mentions the 12–25 m band for all covering queries; the new `method_covering_tier` event is the authoritative chosen-tier record. No post-measurement source edit was made to relabel it.
- No per-seed policy changes. Frozen layouts 5–7, frozen seed manifests and `tools/evaluate_routes.py` are unchanged. Frozen scores are disclosure only. Validation seeds 2001–2010 remain unopened.

## Commands and evidence

```bash
python3 tools/source_id.py
./scripts/test-sim.sh --crowding-corrected
python3 .local/phase0b2/test_runner.py
./scripts/battle-lab.sh --seconds 1 --out .local/phase0b2/corrected-build
python3 .local/phase0b/run_increment.py corrected --root .local/phase0b2
.local/phase0b2/corrected/sim_tests --cognition
.local/phase0b2/corrected/sim_tests --decision-loop
.local/phase0b2/corrected/sim_tests --reliability
./scripts/test-sim.sh
./scripts/build-lab-windows.sh
./scripts/test-sim-windows.sh
python3 -m unittest discover -s tests -p 'test_*.py'
git diff --check
python3 tools/source_id.py
```

The increment runner invokes both Phase 0 tools for each map, including:

```bash
python3 tools/measure_dispersion.py .local/phase0b2/corrected/legacy/works .local/phase0b2/corrected/cognition/works --out .local/phase0b2/corrected/dispersion-works.json
python3 tools/evaluate_tactics.py .local/phase0b2/corrected/legacy/works .local/phase0b2/corrected/cognition/works --out .local/phase0b2/corrected/tactics-works.json
# The same commands with trenches paths produce the other map tables.
python3 tools/check_foundations_parity.py --baseline .local/phase0b/original/legacy-battle-lab --candidate .local/phase0b2/corrected/battle-lab --out .local/phase0b2/legacy-parity
python3 .local/phase0b2/check_trace.py
python3 tools/run_ai_acceptance.py --binary .local/phase0b2/corrected/battle-lab --regression-only --out .local/phase0b2/frozen-nine
python3 tools/run_ai_acceptance.py --binary .local/phase0b2/corrected/battle-lab --regression-only --held-out --development-results .local/phase0b2/frozen-nine/acceptance.json --out .local/phase0b2/frozen-thirty
```

Per-battle commands specify `--cognition` or `--legacy-ai`, `--terrain 0/1`, seeds 100–109, `--seconds 360 --evaluate --no-trace`. All forty exact argument arrays are preserved in `corrected/commands.json`. The diagnostic assertion build is separate from the ordinary test executable; its source and compile/run logs remain under `assert-diagnostic/`. Its deliberate continue-after-assert behavior is never used for a test-pass claim.

The pre-measurement implementation and diagnostic fixtures are retained separately from the single corrected ten-seed measurement. No second measurement iteration was run. Final recovery patch: `.local/phase0b/hotfix-final.patch`. Full snapshots, binaries, assertions, traces and metric JSON are under `.local/phase0b2/`. **Stop point: report; no Phase 1 work.**
