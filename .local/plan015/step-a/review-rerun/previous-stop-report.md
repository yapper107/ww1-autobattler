# Plan 015 — Step A: stopped at the scenario gate

## Result and stop

Step A is **not accepted**. The implementation reaches the new intent-only contract, but P07's retained contact-control assertion still requires platoon Support and Flank directives. Those orders are expressly removed by plan 015. Its no-contact checks pass. I have not changed the failing control assertion to obtain a pass. No Step B, C, E or D was started; no distribution measurement or Unreal/Windows action was performed.

One executable scenario attempt was made. Further tactical attempts cannot satisfy that assertion without restoring prohibited platoon roles. The applicable stop rule is the user's instruction that each step stops the run on failure. The 40 authored digest checks and full-battle drills trace-parity checks were therefore **not run**. Digest preservation is not claimed.

## Revisions and preservation

- Entry: `01462c286da88358`, verified before editing. Phase 4g made no changes.
- Exit: `69386129a292b240`; CLI identifies `69386129a292b240-linux`.
- Entry simulation and test snapshots: `.local/plan015/step-a/entry/`.
- Exit simulation, tests and both executables: `.local/plan015/step-a/final/`.
- Exact slice diffs: `.local/plan015/step-a/simulation.patch` and `test-changes.patch`.
- Frozen lists, `tools/evaluate_routes.py`, and all of `TerrainSim.cpp` match their preserved SHA-256 values: `.local/plan015/step-a/protected.json`.
- No commit, reset, stash, Fable launcher, Windows process, or Unreal build. Pre-existing changes remain in the working tree.

## Implemented

`Unreal/Source/ArmyPrototype/Sim/PlatoonTaskSim.cpp` is reduced from 364 to 157 lines. It emits FightHere, RetreatThere and HelpSquad intents from commander memory and fresh received squad reports. FightHere names a retained known contact/area; changed nearest-member distance alone does not replace an executing intent. Unknown-contact advances use the squad's reported position plus a 60 m lane leg. Done advances that leg; the repeated-nearby-Done guard validates the resolved endpoint and route before issuing another order. Failed resolution records `platoon_route_exhausted` instead of renewing an unchanged destination.

Intents have 75 s lifetimes and renewal at 15 s remaining. A believed ratio below one half without reported support starts a bounded 45 s observation of incoming reports before RetreatThere. Existing succession transport remains. HelpSquad's initial input is a received InsufficientStrength cause, unanswered for one report round trip; the nearest reported squad with capacity receives the intent. This is plumbing only: its end-to-end NeedSupport broadcast, neighbour-answer semantics and Q04 proof belong to Step B and are **not implemented or certified**.

The task tree, its node types, corridor claims, joint flank search, role allocation and persistent platoon fire-control state are removed. The drills branch in `PlatoonSim.cpp` no longer issues role bindings or lift/fire-lane messages. Combat intents have no platoon-assigned area or route. Only no-contact advance intents carry a lane. `DrillSim.cpp` accepts the new intents, distinguishes advance-leg amendments from renewals, and expires intents even when they have no platoon area. `SquadDrillSim.cpp` can interpret HelpSquad through the existing support drill.

Old enum values and shared directive fields needed by preserved cognition and the existing Phase 3 external-order fixtures remain. The new planner does not emit those old roles. The legacy/cognition execution branches were not deliberately changed, but the unrun digest gate remains required.

`tools/after_action.py` reads a directory, manifest or latest pointer and writes Markdown plus structured JSON. It includes command/drill transitions, timestamped actor knowledge, subsequent observer movement/shots/casualties, matched soldier-order delivery delays, explicit losses when recorded, leader estimates against recorded relayed contacts, casualty-event causes, and evidence-linked attribution hypotheses. It does not infer radio loss from unmatched sends or use later knowledge to explain earlier decisions. Missing telemetry is identified as unknown. Complete radio-message accounting awaits Step B/E instrumentation; current reports cannot reconstruct messages that older traces never recorded. Casualty causes are the recorded event text, not an inferred weapon diagnosis. Attribution is temporal evidence, not a causal or counterfactual verdict.

## Test changes and disagreement

P01–P03 and P08 functions/selectors were retired from `tests/platoon_tests.h`; their full prior source and fixtures remain in the entry snapshot. Authored encounter geometry was not edited. P04 and P06 are unchanged.

Two representation adaptations were made in the kept tests, and are disclosed rather than described as byte-identical:

- P05, lines 19 and 21: identify the same withdrawal behaviour through `RetreatThere` rather than the old `Withdraw` enum. Line 19 now checks that the rally is inside map bounds instead of inside the removed assigned squad area. The belief, alternating withdrawal, rally-validity and strong-control assertions remain, but **the rally-area predicate is changed**; this is not proof that the old assigned-area contract still passes. This interpretation needs review under the plan's word “unchanged.”
- P07, line 42: detect forbidden Secure behaviour through an emitted Consolidate order instead of a removed task-tree node. Its displacement, contact distance, no-contact, no-Secure, directive-count and Fix/Flank control assertions remain. Lines 45–48 still require the removed Support and Flank orders, and fail.

I disagree with retaining P07's role-based contact control under the new contract. Proposed exact replacement, **not applied**: once the commander knows the contact, require a FightHere directive with `enemy >= 0` for each of the four available squads; require no Support/Flank/Reserve/Merge/Consolidate order, no support-squad/weapon binding, no corridor, no combat area and no lift flag. Keep all five existing no-contact conditions. Q01 should then prove that squads themselves choose fire/manoeuvre. Restoring a platoon flank to satisfy the old test would violate the approved design.

## Commands and results

```text
python3 tools/source_id.py
./scripts/test-sim.sh --platoon P04
./scripts/battle-lab.sh --version
.local/tests/sim_tests --platoon P05
.local/tests/sim_tests --platoon P06
.local/tests/sim_tests --platoon P07
python3 -m unittest discover -s tests -p 'test_*.py'
python3 -m unittest discover -s tests -p 'test_after_action.py'
.local/plan015/step-a/final/battle-lab --drills --encounter 83 --seed 107 --seconds 120 --evaluate --out .local/plan015/step-a/traces/83
python3 tools/after_action.py .local/plan015/step-a/traces/83/latest.json --out .local/plan015/step-a/p07-after-action.md
git diff --check
python3 tools/source_id.py
```

An initial compile found a stale P08 selector after removing its function. That compile failed before producing a scenario result; the dangling selector was removed and compilation then passed. No distribution was run between builds. Logs and checkpoints are under `.local/plan015/step-a/`.

| Check | Result |
|---|---|
| P04 succession pair | Pass: autonomous continuation; successor and successor directive at 23 s; control unchanged |
| P05 withdrawal pair, adapted representation above | Pass: belief 36.3752 versus at most 12 reported own strength, ratio 0.329895; withdrawal and alternating elements observed; rally inside map; strong control does not withdraw |
| P06 renewal/expiry pair | Pass: 12 renewals; all lifetimes 60–90 s; no stale area execution |
| P07 advance/contact pair | **Fail**: displacement 230.957 m, nearest enemy 310.747 m, no contact, no Secure, maximum 4 directives/squad; control Fix=0 and Flank=0 |
| Python suite | 65 tests pass in 3.504 s |
| After-action focused rerun after manifest winner-field correction | 2 tests pass |
| Protected hashes | 4/4 match |
| Diff whitespace check | Pass |
| 40 authored baseline digests | Not run after scenario stop |
| Drills trace parity, authored maps and F1 | Not run after scenario stop |
| Thirteen squad pairs, Q01–Q04 | Not run; Step B not started |
| Measured guards, paired leader runs, replay UI | Not started |

## P07 trace evidence

Same-source diagnostic run:
`.local/plan015/step-a/traces/83/battle-107-1789655797527422302/`

Digest: `1909473507729632142`. This is an encounter diagnostic, not an authored-map distribution sample or trace-parity proof.

- Trace IDs 2018–2021 at 3.85 s: four FightHere advance-lane intents from received own positions.
- Trace IDs 6724–6727 at 11.90 s: all four squads receive issued FightHere intentions toward known contact positions, with commander contact evidence recorded. For example, ID 6724 names `[40,-9,0]` and records two known contacts.
- IDs 31374–31375 at 71.95 s renew committed intents without assigning roles.
- No `platoon_corridor`, `platoon_lift` or `platoon_fire_control` trace event occurs.

The compact extraction is `p07-evidence.json`; the generated report is `p07-after-action.md` with a JSON companion. This proves why the role assertions are false; it does not establish the Step B squad coordination behaviours or the replay guards.

## Remaining work

Step A needs the P07 control contract resolved, the P05 bounds interpretation reviewed, and the full required parity gates. The new HelpSquad plumbing and expiry outside assigned areas need their end-to-end tests. Step B's five broadcasts, Q01–Q04 and all squad-pair checks remain unstarted. Step C, Step E and the Step D UI are blocked by the Step A gate. No replay-ready or promotion claim is made; legacy remains the playable default.
