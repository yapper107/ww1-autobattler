# Plan 015 Step B — Step C review continuation

## Result and stop

**The new prerequisite gate fails: 29/30 selectors pass at `8bf1a7eac576fba9`.** All 28 previously accepted selectors and the new movement-clock arrival pin pass. The strengthened Q05 mixed-radio fixture fails on the third local attempt, so **no new distribution measurement was started; Steps C, E and D do not proceed.** No fourth attempt was made.

Entry fingerprint: **`0b4a4450c274f8e9`**; final fingerprint: **`8bf1a7eac576fba9`**. The earlier Step B acceptance remains valid for its earlier source. This continuation does not claim acceptance or promotion of the new source. Legacy remains the playable default. Windows and Unreal remain with the architect.

Authority: [attributed Step C review](../../plans/015-step-c-fable-review.md). Previous reports, simulation sources and test headers are preserved in `.local/plan015/review-c/entry/`. All new logs, binaries, source snapshots, patches and trace extracts are under `.local/plan015/review-c/`. No pre-existing work was reset or stashed.

## Changes

Paths below are relative to the repository; `Sim/` means `Unreal/Source/ArmyPrototype/Sim/`.

- `Sim/BattleSim.h:472` and `Sim/SquadDrillSim.cpp:332`: replace the single handled broadcast serial with retained consumption by kind and sender. NeedSupport and Fixing can no longer overwrite each other's consumed serial. A Fixing route is evaluated on a copy of the action; a rejected opportunity retains the live help action and its exhaustion fields. The other three broadcasts retain their existing lane/lift/completion handling; they do not trigger help/opportunity acceptance.
- `Sim/DrillSim.cpp:320`: when the MoveTactically progress clock expires, request physical arrival certification from the outstanding movers, retaining task identity, stage and generation. Wait for actual Done/Failed reports over the existing transport before applying the normal quorum or expiry recovery. Stage issuance/acceptance resets the pending check.
- `Sim/BattleSim.h:120`, `Sim/CommandSim.cpp:441`, `Sim/ReactionSim.cpp:79`, `Sim/TaskSim.cpp:211`: carry the certification amendment to the actor without replacing its task. The actor sends Done/Arrived at its actual position if within 3 m of an executable endpoint; farther active members send Failed/Timeout. Existing shelter and paused-task rules remain; near physical arrival can still be certified during a reload. No leader fabricates a receipt.
- `Sim/Diagnostics.cpp:169`: add the new fields to the drills-only digest block. Legacy/cognition common digest logic is unchanged, but full-battle parity was **not rerun** after the local gate failed. The new execution flag is present in the in-memory trace used by the C++ pin; JSON task-status records show the ordinary actual-position receipt, not a serialized copy of that flag.
- `Sim/PlatoonFixtures.cpp:6`, `tests/platoon_tests.h:123`: Q05 encounters 94–96 use physical members, terrain, reload and attrition; broadcasts come from production sensing, firing and report transport. The third attempt strengthens the new fixture and its assertion to require actual exhaustion before the unrelated no-route opportunity. No existing fixture or behavioral assertion was changed.
- `Sim/PlatoonFixtures.cpp:25`, `tests/drills_tests.h:171`: clock-arrival encounters 97/98 physically reload near/far from accepted endpoints. `BattleSim.cpp` and `tools/battle_cli.cpp` admit the new encounter IDs through 98.
- `tools/after_action.py:143,160,227` and `tests/test_after_action.py`: human summary first, decision-time leader pictures, per-squad verdicts, matched net delivery/drop evidence, linked attribution, collapsed consecutive transitions and full appendices. JSON schema is 2. Four AAR unit tests pass.
- `plans/015-squad-initiative-amendment.md`: record the approved legacy-paired resolution/churn guards, Q05, the arrival pin and the summary ruling. The withdrawn absolute resolution rule and Phase4f churn reference are identified explicitly.

No per-seed policy, hidden-enemy read, injected receipt or new radio transport shortcut was added.

## Local attempt ledger — no distribution runs

| Local attempt | Source | Results | Why another attempt was needed |
|---|---|---|---|
| 1 | `7804d2ed7cf4de62` | 29/30; original 28 and Q05 pass; new clock pin fails | The new pin incorrectly demanded zero failures across the whole near fixture, including members actually farther than 3 m. Its permanent reload also stranded members after a subsequent endpoint changed. |
| 2 | `6edb7084c796991c` | 30/30 as then asserted | Clock fixture uses a short refreshed physical reload only while near the current endpoint; each timeout receipt is checked by actual distance. Audit found Q05's exhaustion-retention predicate vacuous: no exhausted help instance had occurred. |
| 3 | `8bf1a7eac576fba9` | 29/30; Q05 fails; all original 28 and the clock pin pass | New Q05 places the volunteer within 100 m of the needy squad but beyond firing range, and delays fixing fire until 35 s. It requires exhaustion followed by a no-route offer. Production behavior takes a different path, so the required sequence is absent. Allowance exhausted; stop. |

Attempt 2 changed only the newly authored clock fixture/predicate. Attempt 3 changed only the newly authored Q05 fixture/predicate; the radio and arrival policy is the same as attempt 1. These are disclosed test-development corrections, not changes to any of the 28 existing selectors. Test diffs are `drills_tests.h.patch` and `platoon_tests.h.patch` in the evidence directory.

### Clock pin evidence

Final source, encounters 97/98, 100 s:

| Case | Stage certification requests | Done certifications | Timeout failures | Received-Done frame samples |
|---|---:|---:|---:|---:|
| Near endpoint | 3 | 18 | 0 | 480 |
| Farther control | 3 | 0 | 15 | 0 |

The last column counts sampled retained reports, **not distinct receipts**. Every certified receipt is within 3 m; every timeout failure checked by the pin is farther than 3 m. Existing lifecycle pause/latched-arrival pins also pass unchanged.

Near trace: encounter97 `battle-107-1789663139027609440`. At33.75 s, trace1538 requests certification. At34.40 s, trace1547 records member0 Done at `(-13.268319,-48.041672)` for endpoint `(-12.260601,-47.847893)`; at34.90 s trace1554 certifies member4 within2.34 m. Far control: encounter98 `battle-107-1789663139628104044`, request1535 at34 s, member0 timeout1543 at34.65 s from approximately4.81 m away. Raw traces and `attempt3/clock-evidence.json` preserve the evidence.

Attempt1's failed pin and receipts are retained under `attempt1/97-receipts.json`, `98-receipts.json`, and `pairs/clock-arrival.log`; it reported4 near certifications and11 farther failures, not fabricated arrival.

### Q05 evidence and unresolved cause

Attempt2's original mixed/control fixtures each acted once:

| Encounter | Need received | Fixing received | Help accepts | Opportunity evaluations |
|---|---:|---:|---:|---:|
| 94 mixed | 1 | 1 | 1 | 1 |
| 95 Need only | 1 | 0 | 1 | 0 |
| 96 Fixing only | 0 | 1 | 0 | 1 |

This supports independent consumption but **does not prove exhaustion retention**. I refused to count the vacuous predicate as complete coverage.

Final attempt3 mixed result: Need received1, Fixing received0, help accepts1, opportunities0, no exhausted instance, no post-exhaustion opportunity. Q05 aborts on the strengthened assertion. Standalone 95/96 traces were then collected on the same binary for diagnosis, without changing the fixture or assertion; they are not additional passing C++ control assertions.

- Mixed encounter94, `battle-107-1789663137676803243`: squad1 accepts Help at22.85 s (trace9392). Squad2 also volunteers at23.35 s (11975). At23.85 s, a **received platoon directive** changes squad1 to MoveTactically (16670/16671). At26.15 s (17328), it explicitly approaches the needy squad because HelpSquad is outside weapon range. No support-search exhaustion is reached. The fixture did not isolate a retained local help commitment from legitimate upstream intervention.
- The intended fixing gun, member23, reports **Failed: geometry invalidated** at35 s (19174), when its fixture reload ends. Squad2 has zero delivered rounds at65 s; no Fixing broadcast is produced. This is not evidence of radio loss or renewed message consumption. The cause of the invalid geometry has not been repaired or conclusively attributed; it is a separate diagnostic lead.
- Need-only encounter95 follows the same Help-to-approach path (help4601 at22.85 s, MoveTactically7204 at23.85 s). Fixing-only encounter96 also fails to establish fire; gun timeout is a geometry failure5447 at35 s. Thus the final fixture fails before it can exercise the intended mixed-message contract.

`attempt3/trace-evidence.json` contains the transition sequence; `q05-detail.json` includes firing-position rejection counts, member states and gun status changes. The three raw Q05 traces remain under `attempt3/traces/94`, `95`, `96`. A next authorised attempt should isolate the exhaustion sequence from platoon intervention and diagnose the fixing position's invalid geometry; it should not weaken the post-exhaustion assertion. No such fourth attempt was made here.

## Human after-action report

`after-action-example.md` and its JSON were generated from the **already measured prior-source Works100 trace**, not a new battle. Its summary is534 words before the appendix: recorded Azure outcome at360 s,2040 shots, first contact95.75 s, timed assault/help episodes, eight squad verdicts, three linked decisions with contemporaneous estimates versus received reports, and3079 matched deliveries (mean0.60 s, max2.35 s),0 explicit drop events and2 unmatched messages. Missing loss telemetry remains unknown, not zero loss.

The underlying1461 transitions become1435 collapsed rows; every original trace ID remains linked. This source has224 turning-point episodes because of the already diagnosed radio loop. To keep the first page readable, the summary shows the first10 and links the complete224-entry register in the appendix. This is an explicit presentation interpretation of the competing “one-page” and “each turning point” requirements, **not** a claim that224 episodes fit on a page. Attribution is ranked observed consequence, not causal proof; help-answer association uses following same-platoon/same-sector evidence rather than an invented causal receipt ID. Step D is unstarted, so no in-game screen is claimed.

## Commands and verification

```text
./scripts/test-sim.sh --platoon Q05                  # attempt1, then attempt3
./scripts/test-sim.sh --drills clock-arrival         # attempt2
./scripts/battle-lab.sh --version                   # each source; final 8bf1a7eac576fba9-linux
python3 .local/plan015/review-c/run_pairs.py 1 0
python3 .local/plan015/review-c/run_pairs.py 2 0
python3 .local/plan015/review-c/run_pairs.py 3 0
python3 .local/plan015/review-c/trace_pairs.py 3 Q05 clock-arrival
python3 -m unittest discover -s tests -p 'test_*.py'
python3 tools/after_action.py .local/plan015/step-c/authored/works/100/battle-100-1789661118997907545 --out .local/plan015/review-c/after-action-example.md
python3 tools/source_id.py
git diff --check
```

Individual attempt1/2 diagnostic trace commands are recorded in their logs. The final five raw trace commands are in `attempt3/trace-evidence.json`. Repeated selectors on the same binary are confirmation/diagnosis, not additional policy attempts.

Final selector result: thirteen squad pairs13/13; P04–P07 and Q01–Q04 eight/eight; seven existing pins7/7; new clock pin1/1; Q05 fails. Python discovery: **67 pass**, including all4 after-action tests. Linux test/CLI compilation succeeds. `git diff --check` passes. All four protected-file hashes match the preserved baseline, including TerrainSim.cpp; existing28 assertions and fixtures remain unchanged. `continuation-simulation.patch` records all simulation changes against entry.

Full default Linux suite, 40 authored digest checks and three full-battle trace-parity checks are **not rerun on this source** because the local prerequisite failed. Earlier-source passes remain history only. No authored/F1 distribution, leader-dial paired run, Unreal screen or native build was started. No Fable launcher, commit, reset or stash was used.

## Disagreements and limitations

No disagreement with the radio, arrival, recalibrated guards or stop rule. The new exhaustion fixture is my unresolved test-design failure; its final trace also exposes an unclassified firing-slot geometry failure. Independent consumption has local evidence, but the full exhaustion-retention contract is not certified. The summary's bounded turning-point overview and complete appendix are the explicit interpretation noted above. The run stops here rather than silently waiving Q05 or reusing the earlier vacuous pass.
