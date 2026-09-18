# Plan 015 — Step B: three local attempts; stop before measurement

## Result

**Step B fails its mechanism gate.** The final source passes 25/28 selectors: all thirteen existing squad pairs, all seven auxiliary pins, P04–P07, and Q01. Q02, Q03 and Q04 fail after three local attempts each. Assertions did not change between attempts. No Step C distribution, Step E paired-profile run, or Step D UI work was started. No fourth build follows.

Step A was completed first on `69386129a292b240`: the reviewed P05/P07 predicates pass, all 40 authored legacy/cognition digests match, and drills trace-on/off parity passes on Works, Trenches and F1 draw 1. See the updated `015-step-a-report.md`. Those parity results apply to the Step A source, **not** automatically to this later Step B source.

## Fingerprints and preservation

| Point | Fingerprint | Selectors |
|---|---|---|
| Step B entry / accepted Step A | `69386129a292b240` | Step A gates pass |
| Local attempt 1 | `c74b185f91aecf77` | 25/28; Q02–Q04 fail |
| Local attempt 2 | `43fa89b237f5d3f6` | 25/28; Q02–Q04 fail |
| Local attempt 3 / exit | `32a0c36a5ef961a4` | 25/28; Q02–Q04 fail |

Entry sources are preserved in `.local/plan015/step-b/entry/`. Every attempt has a source snapshot, test snapshot, test executable, CLI executable, fingerprint, result JSON, logs and same-source traces. Final copies are in `final/`; `simulation.patch` records the simulation changes against entry. `summary.json` records attempt outcomes.

`static-checks.json` verifies that the live simulation equals the final snapshot, all three test snapshots are identical, and the two frozen lists, `tools/evaluate_routes.py` and all of `TerrainSim.cpp` retain their original SHA-256 values. No authored layouts were edited. No commit, reset, stash, Fable launcher, Windows build, Unreal build or distribution run occurred. Legacy remains the playable default.

## Implemented scope, not a claim of acceptance

- `BattleSim.h`, `PlatoonSim.h/.cpp`, `ReactionSim.h/.cpp`: Fixing, Assaulting, NeedSupport, PhaseLine and Done payloads, sequence numbers, original contact timestamps and received timestamps. Squad leaders emit from their own drill state and received delivery evidence. The platoon radio sends through the existing message queue at `reportDelay`, followed by the normal reaction queue. Every current squad leader and the platoon commander can receive it. Recipient memory keeps the latest message per source squad/type. Sends, receipts and physical endpoint drops are traced. No enemy body data enters this policy path.
- `SquadDrillSim.cpp`: lateral opportunity and join from received Fixing, covered route search on the receiver's own side, first-announcer selection from received Assaulting messages, phase-line lift through normal member orders, nearby NeedSupport response, and the existing supported-closure fallback when no covered route is found. Delivered support retains its actual observation time. NeedSupport is emitted on an element strength crossing or 15 s of effective incoming fire without superiority. Consolidation emits Done.
- `DrillSim.cpp/.h`: emission hook and doctrine gate integration. Gun-centric/Teams can volunteer; Section requires an own platoon Seize/FightHere intent for assault but can volunteer help; Rush requires an order for both. Section's existing `requiresPlatoonOrder` field is now true. The leader's organisation selector defaults to Section; existing member assignment stays on the Phase 3 organisation path. This slice does not add a player-facing template selector.
- `PlatoonTaskSim.cpp`: received NeedSupport makes an otherwise idle external Observe/Occupy squad eligible for HelpSquad after the report round trip. It does not reinstate platoon roles or corridors. A distant HelpSquad intent now starts an approach before requesting firing slots.
- `TeamPlan`, `DrillOrders`, `BattleSim.cpp`: received assault lanes accompany member assignments. Existing lane messages are also queued for squad leaders. The firing guard rejects a shot crossing a received assault lane outside the shared 12 m objective disc; normal close-assault/friendly-fire rules remain there. Lane changes amend orders without re-forming elements. Drills-only digest coverage includes the new state.
- `PlatoonFixtures.cpp`, `tests/platoon_tests.h`: Q01–Q04 with physical controls, encounters 86–93. CLI/drills encounter validation accepts them. No contact, arrival receipt or fire-delivery receipt is injected. Fixture pre-battle intentions are ordinary own orders, as in the existing assert-based scenarios.
- `tools/after_action.py` and its unit test: correlate radio sends/receipts independently from soldier order IDs; explicit drops remove the matching pending send. Unmatched messages remain unclassified, not assumed lost. The final Q02 and Q04 diagnostic reports were generated with this tool.

The five message branches exist, but final-source Q02/Q03 do **not** prove the complete Fixing → assault → phase line → lift chain. The failed gate is not waived because its downstream branches are present in code.

## Local attempts and reasons for changes

### Attempt 1

Q01 passes. Q02 records Fixing only at 132.15 s and no assault. Q03 records opposite-side assaults and lane amendments, with zero observed crossed reported lanes, but no lift. Q04 records NeedSupport at 21.3 s and a local help decision at 22.8 s, with no delivered fire by the deadline; its distant control receives no HelpSquad order.

The new fixtures were not isolating the intended states. In encounter 88, squad 1 accepts Observe at 0.05 s (trace 1835), finishes it and accepts MoveTactically at 5.9 s (5988). Both squads later broadcast Fixing, then reject their radio flank routes (27844/28317 at 133.15/134.2 s). In encounter 90, intended fixing squad 0 itself announces Assaulting at 9.85 s (13067), before its Fixing at 14.85 s (18214). Squads 2 and 1 accept lateral opportunities at 16.25/16.45 s (19156/21177), but the intended fixing-only control was not established.

The far-help fixture moved squad 1 after creating its idle objective, so it walked back toward the near position. The planner also excluded an external idle order before considering help eligibility.

### Attempt 2

Assertions and physical geometry remained unchanged. The **new Q fixtures' initial orders changed**: transient Observe staging became persistent Occupy intentions; the target stayed in its own area; the fixing squad received the approved HelpSquad intent rather than a removed Support directive. The far idle objective was set after actor placement. These are disclosed fixture corrections; I do not describe the fixtures as identical across all attempts. No existing P/D fixture changed.

The planner permits idle staging to answer received need, Done retains the assault's group, and physical radio drops are traced. All old selectors and Q01 still pass. The distant HelpSquad issue and receipt now pass. Q02/Q03 have no fixing volley; Q04's help decision still produces no fire by its bound.

Trace 88 exposes a real support-sector defect: the HelpSquad objective is `[70,0]`, but gun 7's issued sector remains the no-contact default `[51,-18]`. The support acceptance updated `action.objective` without updating the soldier-order sector. In Q04, gun 15 receives support at 24.1 s but stays behind the screen at `[3.2366,33.2357]`. The allocator required a line for Observe, but not for new help support slots.

### Attempt 3 — final

Fixtures and assertions remain identical to attempt 2. Support orders now bind the requested sector. New help allocation requires a firing line and searches a bounded 60 m neighbourhood. Distant help approaches to support range before allocation. All old selectors and Q01 still pass, but these corrections are insufficient for Q02–Q04. No additional implementation change was made after this result.

Per-attempt notes are in `attempt1/findings.md` and `attempt2/findings.md`; trace extraction and raw runs are retained for every Q02–Q04 positive/control.

## Final mechanism results

| Selector | Positive evidence | Control evidence | Result |
|---|---|---|---|
| Q01 | Both squads receive known-enemy FightHere; both choose attack/closure; useful gun-group delivery; no role binding | Both bare-ground squads use bounding closure | Pass |
| Q02 | Fixing=-1, Assaulting=-1, phase line=-1, lift=-1 | Rush does not assault | **Fail**; positive chain never starts |
| Q03 | Neither assault starts; no lead, lane or lift on final source | Unscreened joining control does not commit | **Fail**; positive chain never starts |
| Q04 | NeedSupport=21.3 s; local help accepted=22.75 s; first helper shot=85.35 s, 64.05 s after need | Distant HelpSquad issued and received | **Fail**; exceeds 60 s delivery bound |
| P04–P07 | Succession, reviewed withdrawal, renewal and intent-only advance/contact control | All retained controls pass | 4/4 pass |
| D01–D11, D16, D17 | Existing behavioural assertions unchanged | Existing controls unchanged | 13/13 pass |
| close, sprint, projection, sector, positions, plumbing, lifecycle | Existing pins unchanged | As defined by the existing tests | 7/7 pass |

The final Q02 and Q03 diagnostic battles have zero shots. These are failed mechanism fixtures, not a Step C distribution or a claim that its engagement guard was evaluated. Final Q04 positive has 14 shots, but none from the helper before 81.3 s (need + 60 s). The first helper shot is at 85.35 s; a Fixing broadcast follows at 91.4 s.

## Residual trace evidence and interpretation

Raw final runs:

- Q02 positive: `attempt3/traces/88/battle-107-1789657722827482924/`
- Q02 Rush control: `attempt3/traces/89/battle-107-1789657722790559865/`
- Q03 positive: `attempt3/traces/90/battle-107-1789657725915315490/`
- Q03 control: `attempt3/traces/91/battle-107-1789657725974485776/`
- Q04 positive: `attempt3/traces/92/battle-107-1789657728559256189/`
- Q04 distant control: `attempt3/traces/93/battle-107-1789657728492851563/`

Paths above are relative to `.local/plan015/step-b/`. `attempt3/residual-evidence.json` contains the exact retained gun orders, received-radio records, allocation rejection counts and first helper shot. `trace-evidence.json` links the broader transition sequence. Generated readable reports are `Q02-after-action.md` and `Q04-after-action.md` with JSON companions.

In Q02, trace 1734 at 0.05 s issues gun 7 the corrected sector `[70,0]`, but `execution_support_threat=-1` because no contact has yet been received. At 1.2 s, activation trace 3694 contains the real enemy-32 sighting observed at 0.2 s. At 11.9 s, heartbeat 4099 still has `execution_support_threat=-1` alongside the retained enemy-32 report (uncertainty 5.095 m). There is no subsequent support-order amendment for that gun. This is evidence of a **late-contact binding defect**: the stage retains its order but does not bind the now-known threat. It plausibly prevents requested suppressive fire once the target ducks and the original sighting ages. The trace proves the missing binding; its full causal contribution has not been isolated in another build.

Q04's help request arrives and is acted upon. Allocation at 22.75 s finds three primary slots for four gun-group members; it records 331 no-line/range rejections, 934 facing rejections and 881 area/coherence rejections. Gun 15's order 9133 retains its current point `[3.2366,33.2357]` with threat 32. It does not gain a demonstrated usable line in time. Counts alone are not proof of a unique cause; the late first shot proves the missed deadline. There is still a gap between accepting help and delivering useful support, including the handling of a support gun with no executable firing slot.

Proposed next investigation, **not implemented**: amend the retained Support contract when a threat becomes known, preserving stage/generation; prove useful gun/element firing positions before claiming help establishment, with an explicit local remedy or exhaustion report when the gun has no slot. Keep the current timing/behaviour assertions. The three-attempt allowance is exhausted, so this is a handoff finding rather than a fourth experiment.

## Commands and other validation

For each attempt N:

```text
python3 tools/source_id.py
./scripts/test-sim.sh --platoon Q01
./scripts/battle-lab.sh --version
python3 .local/plan015/step-b/run_pairs.py N 0
python3 .local/plan015/step-b/trace_pairs.py N
```

`run_pairs.py` uses the Q01 build result and executes the other 27 selectors on the copied executable. `trace_pairs.py` runs only the six named mechanism diagnostics with production sensing/transport, seed 107 and their fixed horizons. No distributions ran between attempts.

Additional commands:

```text
python3 -m unittest discover -s tests -p 'test_*.py'
python3 tools/after_action.py .local/plan015/step-b/attempt3/traces/88/latest.json --out .local/plan015/step-b/attempt3/Q02-after-action.md
python3 tools/after_action.py .local/plan015/step-b/attempt3/traces/92/latest.json --out .local/plan015/step-b/attempt3/Q04-after-action.md
git diff --check
python3 tools/source_id.py
```

65 Python tests pass in 3.548 s. All Linux local C++ builds succeed. Protected hashes, identical assertion snapshots and final source snapshot checks pass. The final fingerprint is `32a0c36a5ef961a4`.

The full default Linux suite and final-source authored/trace parity were not run after the Step B mechanism stop. Step A's required full-battle parity was completed before Step B began. No assertion was relaxed to bypass a failed scenario. The two initial fixture corrections are the only test-setup changes after the first attempt and are listed above.

## Disagreements and blocked work

No disagreement with the architect's P05/P07 rulings. Step A's prior contract conflict is resolved. The new Q fixture setup needed the disclosed corrections; the remaining support-fire failures are not classified as intentional changes. Their exact causal split between retained threat binding and viable firing positions needs the next review.

Step C (authored/F1 guards and authored after-action reports), Step E (leader dials and paired-profile measurement) and Step D (Unreal replay UI/profile controls) are unstarted because Step B failed. There is no measured scoreboard, replay-ready claim, or promotion request for this build. Windows and Unreal remain with the architect.
