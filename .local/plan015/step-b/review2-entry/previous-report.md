# Plan 015 Step B — review continuation, stopped after three further attempts

## Result

**Step B still fails its mechanism gate.** Final source `357c4f58505ba5fe` passes **25/28 selectors**: Q01, Q04, P04–P07, twelve of thirteen squad pairs, and all seven pins. Q02 and Q03 now start their opportunity/join chains, but neither reaches the required phase-line/lift outcome. D05's unchanged capable control regressed during this continuation. No assertion or fixture was changed.

The three further Q02–Q04 attempts authorised in [the Step B review](../../../plans/015-step-b-fable-review.md) are exhausted. **Steps C, E and D are not started.** No distribution, profile comparison, UI preparation or native build followed the failure. Legacy remains default; this is not a replay-ready or promoted build.

Step A is fully accepted, with P04–P07, 40 authored digest matches and three drills trace-parity matches at `69386129a292b240`. Those results do not certify this later Step B source. The original Step B report, including its first three attempts and accepted fixture corrections, is preserved in `.local/plan015/step-b/review-entry/previous-report.md`.

## Fingerprints and local attempts

Attempt numbers continue the previous report. All paths in this section are under `.local/plan015/step-b/`.

| Point | Source fingerprint | Selectors | Failing selectors |
|---|---|---:|---|
| Review entry, previous attempt 3 | `32a0c36a5ef961a4` | 25/28 | Q02, Q03, Q04 |
| Further attempt 1 / attempt4 | `0b757097233b6a4f` | 26/28 | Q02, Q03 |
| Further attempt 2 / attempt5 | `7118590423f52c13` | 25/28 | Q02, Q03, D05 |
| Further attempt 3 / attempt6, final | `357c4f58505ba5fe` | 25/28 | Q02, Q03, D05 |

Each attempt directory preserves its simulation and test sources, fingerprint, C++ test and CLI binaries, all selector results and logs, and positive/control traces. `review-summary.json` contains the result table. `review-entry/` preserves the entry source. `attempt4/findings.md` and `attempt5/findings.md` record the evidence and reasons for the following attempt.

There was one disclosed preflight correction before the third Q02–Q04 run: the preliminary source `331b4ddc8f4ead6f` compiled and passed Q01, then static inspection found a remaining two-slot count in direct Support/HelpSquad acceptance. It was corrected to the reviewed **one gun or two riflemen** quorum and recompiled. No Q02–Q04 or distribution ran on that preliminary fingerprint. Its source file, build logs, fingerprint and explanation are retained in `attempt6/preflight/`.

## Changes

- `Unreal/Source/ArmyPrototype/Sim/SquadDrillSim.cpp:205`: `BindSupportThreat` examines the officer's retained contacts within the ordered sector. It binds a newly known threat to retained SupportByFire/HelpSquad execution, reissues the element's support orders once for that binding, and traces `support_threat_bound`. It does not call Accept, Stage or Assign and preserves instance, stage and generation. A valid existing binding is retained.
- `SquadDrillSim.cpp:130`: support allocation prioritises the gun, searches up to 60 m, requires reachable firing positions within weapon range, retains valid held slots, and treats projected walkable positions as executable slots even without a catalogue ID. Catalogue cover is preferred rather than mandatory. Direct support acceptance uses the gun-or-two-rifle quorum.
- `SquadDrillSim.cpp:192`: establishment additionally requires the gun or two gun-element riflemen to hold their assigned slots with a geometric line in range. Existing useful delivered-fire evidence remains necessary. The lateral Fixing broadcast is gated on useful fire and this held-position proof.
- `SquadDrillSim.cpp:276`: a failed established support contract gets one bounded positional recovery search; failure to allocate the firing quorum produces an exhausted upward report with the rejection reason. This changes the recovery allocation generation, as a new movement order set; the earlier threat-only amendment preserves it.
- `SquadDrillSim.cpp:119`: recovery conservatively checks a crouched target volume when the remembered exposed sighting is older than six seconds. This is an **implementation assumption**, not an observation of the enemy's actual posture and not a new architect ruling. Initial allocation retains its previous target-height convention. Recovery uses the full map-clipped 60 m neighbourhood instead of a deployment-lane combat restriction.
- `PositionSim.h:10`, `PositionSim.cpp:27`: optional query target height and deterministic projected firing-position candidates, retaining the existing range, geometry, occupancy and reachability checks. Defaults preserve callers that do not request this search.
- `BattleSim.h:446`, `Diagnostics.cpp:169`: retained binding/readiness/recovery state, covered by the drills-only digest block.

Policy reads officer memory, accepted orders, received delivery reports and the permitted own-squad fields. It does not read the defender's actual position or posture. Contact timestamps and the existing fire-solution uncertainty limit are unchanged. Observer traces below are diagnostic evidence only.

## Attempt evidence

### Further attempt 1

Late binding works: Q02 trace 6308 at **3.8 s** binds enemy32. Gun7's retained contract has method1/generation1, sector `[70,0]`, and `execution_support_threat=32`. Fixing is broadcast at **4.8 s**, and squad B accepts and broadcasts its opportunity assault at **6.6 s**. The Rush control does not assault.

Q03 starts both assaults, from opposite sides, at **6.45 s** and **6.6 s**. It records lane information and no crossed received assault lanes. Neither Q02 nor Q03 reaches the phase line.

Q04 now passes: need at **21.3 s**, local help at **22.75 s**, useful delivered fire within the required 60 s, and the distant HelpSquad issue/receipt control passes. All prior D pairs and pins pass on this attempt.

The new Q02 blocker is not the missing threat binding. Gun7's heartbeat8501 at15 s records 24 rounds and the original observation at0.2 s; heartbeat8622 at20 s records27 rounds, uncertainty7.93 m and the same original observation. It no longer has fresh target information. Support is lost at24 s, the assault pauses at24.2 s and exhausts its support-recovery allowance at45.9 s. The next attempt therefore added a positional recovery and explicit exhaustion, rather than refreshing stale observations or relaxing the firing uncertainty rule.

### Further attempt 2

Q04 remains a pass; Q02/Q03 still fail their final outcomes. Q02's recovery at24 s finds no gun-or-two-rifle quorum in its bounded candidate search. Trace13200 reports exhaustion; trace13206 at24.2 s sends it upward. The platoon replaces the exhausted intent at29.75 s.

D05 regresses: its initial autonomous support allocations change, and at59.25 s a member loss crosses minStrength and marks the capable squad blocked. Its weak-group report/control remains correct. This is a regression, not an intentional expectation change.

The next attempt confined the conservative target-height check to recovery, instead of initial autonomous contact allocation, and removed the deployment-lane restriction from that recovery query. The fixtures and assertions stayed unchanged.

### Further attempt 3 — final

Q04 remains fixed, but Q02/Q03 still do not reach phase line/lift, and D05 still fails. The attempted scoping did **not** restore the D05 control. No further source edit or fourth Q02–Q04 attempt follows.

## Final selector results

| Selector | Positive result | Control / remaining result | Verdict |
|---|---|---|---|
| Q01 | Both intent-only squads choose fighting behaviour; support delivery present | Bare-ground closure; no platoon role binding | Pass |
| Q02 | Fixing4.8 s; Assaulting6.6 s; opportunity true | Rush waits; phase line=-1, lift=-1 by240 s | **Fail** |
| Q03 | Opposite sides `1,-1`; lead squad2; lanes present; crossed lanes=0 | Unscreened control does not join; no lift by240 s | **Fail** |
| Q04 | Need21.3 s; help22.75 s; first helper shot42.35 s; Fixing44.8 s | Distant HelpSquad issued and received | Pass |
| P04–P07 | Succession, bounded withdrawal, renewal and advance/contact intent | All retained controls | 4/4 pass |
| D01–D11, D16, D17 | Twelve pairs pass | D05 capable control blocked; weak report correct, latency3.9 s | **12/13** |
| close, sprint, projection, sector, positions, plumbing, lifecycle | Existing assertions | Unchanged | 7/7 pass |

Q04's first helper shot is **21.05 s after the need broadcast**, versus64.05 s in the entry build. The shot is from gun15 at `[14.6551,5.53874]`, directed at the known group. Fixing follows on received useful delivery and position readiness, not on the help decision alone.

Final diagnostic shot counts, included only to identify the mechanism traces:

| Encounter | Purpose | Shots |
|---|---|---:|
| 88 | Q02 positive | 235 |
| 89 | Q02 Rush control | 174 |
| 90 | Q03 positive | 519 |
| 91 | Q03 unscreened control | 544 |
| 92 | Q04 near help | 9 |
| 93 | Q04 distant help control | 0 |

The distant control asserts transport, not delivery within its120 s horizon. These are mechanism runs, not Step C engagement-guard results.

## Final residual traces

Paths are under `.local/plan015/step-b/attempt6/traces/`:

- Q02 positive: `88/battle-107-1789658901852886221/`. Binding6308 at3.8; Fixing6352 at4.8; Assaulting7985 at6.6; support loss8801 at24; recovery8802; exhaustion13200; assault pause13545 at24.2; failed attack16283 at45.9. A later assault starts133.8 s, but still has no phase line by240 s.
- Q03 positive: resolve `90/latest.json`. Recovery starts at23.8 s (14822). It does not report immediate slot-quorum exhaustion, but gun7 stays at `[-12,-4]` with27 rounds and its0.2 s observation through the29.95–64.95 s heartbeats. `Q03-recovery-gun.json` preserves these records. Initial slot allocation is not proof that the selected rifle alternative restores delivered support. No lift is observed.
- Q04 positive: resolve `92/latest.json`. Need6879 at21.3; first helper shot42.35 in `shots.jsonl`; Fixing12076 at44.8. The unchanged test passes.
- D05 capable: `52/battle-107-1789658932743378858/`. Supports at14.95 and45.7 s; minStrength transition16770 at59.25 and NeedSupport16772. This is a real final-source capable-control regression. The precise allocation change causing the subsequent casualty has not been isolated by another build; no single-cause claim is made.

`residual-evidence.json`, `review-evidence.json`, `review-evidence.log` and the raw traces retain the broader evidence and exact IDs. The final Q02, Q04 and D05 runs also have offline after-action Markdown and JSON reports. The bounded sampled search reporting exhaustion is not a mathematical proof that no continuous-space firing position exists.

## Validation and commands

For each attempt N=4,5,6:

```text
python3 tools/source_id.py
./scripts/test-sim.sh --platoon Q01
./scripts/battle-lab.sh --version
python3 .local/plan015/step-b/run_pairs.py N 0
python3 .local/plan015/step-b/trace_pairs.py N
python3 .local/plan015/step-b/review_evidence.py N
```

Additional same-binary D05 diagnostics ran for attempts5 and6 through `trace_pairs.py N D05`; these are not extra implementation attempts. Each selector was run on the frozen source/binary recorded for its attempt. No distribution ran between attempts.

```text
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/plan015/step-b/review_finalize.py
python3 tools/after_action.py .local/plan015/step-b/attempt6/traces/88/latest.json --out .local/plan015/step-b/attempt6/Q02-after-action.md
python3 tools/after_action.py .local/plan015/step-b/attempt6/traces/92/latest.json --out .local/plan015/step-b/attempt6/Q04-after-action.md
python3 tools/after_action.py .local/plan015/step-b/attempt6/traces/52/latest.json --out .local/plan015/step-b/attempt6/D05-after-action.md
git diff --check
python3 tools/source_id.py
```

**65 Python tests pass** (3.492 s). Linux compilations succeed. `review-static-checks.json` confirms the final simulation equals its frozen snapshot, Q fixtures/assertions are byte-identical to review entry, and all protected hashes match: both frozen seed lists, `tools/evaluate_routes.py`, and all of `TerrainSim.cpp` (including authored layouts5–7). Existing uncommitted work was not reset, stashed or committed. No Fable launcher, Windows or Unreal build was invoked.

The full default Linux suite and final-source 40-case authored/three-case trace parity were not run after this mechanism stop. No final-source old-controller parity claim is made. Step A's accepted gates remain historical evidence for its own fingerprint.

## Disagreements, limits and stop

The late-binding ruling is supported by the observed improvement and is implemented without reopening the stage. The firing-position requirement fixes the Q04 timing failure. I do not disagree with either ruling, but they are **insufficient to establish Step B completion on the unchanged scenarios**: Q02/Q03 encounter loss of usable target information after their initial fixing volley. A stale exposed silhouette and an allocated geometric slot are not proof of continued deliverable fire. The conservative recovery-height choice is mine and should be reviewed; it is not represented as a new architect instruction.

D05 is an implementation regression. Its assertion is not weakened or reclassified. The remaining work needs another authorised correction, including a causal check of the support allocation change and a demonstrated delivery-restoring recovery, before another distribution run.

**Required stop applied.** Step C has no measured build or authored after-action set; Step E has no leader dials or paired-profile measurement; Step D has no UI preparation. Source remains `357c4f58505ba5fe`, uncommitted, with all attempt artifacts retained for review.
