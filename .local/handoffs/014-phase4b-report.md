# Plan014 — Phase4b bounded local iteration report

**FAIL at the mechanism prerequisite; stopped after three local attempts. No distribution build was measured.** Final source `c98020b91fed4f51` passes22/26 selectors: twelve of thirteen squad pairs, three of six platoon pairs and all seven auxiliary pins. D03 and P01–P03 remain failing. The user authorised distribution measurement only after every pair and pin passes on one source; that condition was not reached. No new per-run authored/F1 table or paired confidence interval is claimed. Legacy remains the default.

Entry fingerprint: `3bda3ace2c9dacdc`. Phase3 remains complete on its preserved scope at `a0364bff5cea6ab9`; this slice does not supersede its successful source with a passing platoon build. Actual review read first: `plans/014-phase4-fable-review.md`.

## Attempts

| Attempt | Fingerprint | Passing selectors | Failed selectors |
|---|---|---:|---|
| 1 | `846d00e90a84dd99` | 16/26 | P02, P01, P05, P03, D02, D03, D07, D08, D09, D11 |
| 2 | `fab005e11f75e2f5` | 18/26 | P02, P01, P05, P03, D02, D03, D08, D09 |
| 3 | `c98020b91fed4f51` | 22/26 | P02, P01, P03, D03 |

Each attempt ran the same26 selectors once. The P05 execution from `test-sim.sh --platoon P05` was reused in the runner results rather than run twice. Full immutable source snapshots, test headers, CLI/test binaries, fingerprints, command lists, stdout/assertions and failed-mechanism trace artifacts are under `.local/phase4b/attempt1/`, `attempt2/`, `attempt3/`. Every attempt has `results.json`; traced failures have `trace-evidence.json` with exact run paths, trace ids, times and transition reasons. No distribution run occurred between attempts or after the final failures.

### Attempt1

Implements persistent task nodes and hard executing-assignment retention, fixed front lane legs, accepted-directive state with stage-boundary receipt, route-buffer areas,20 m centreline exclusion and the explicitly authorised P05 fixture amendment. P05 now establishes a traced enemy estimate36.7439 against12 squad members (ratio0.326585) by20 s, and issues Withdraw. It fails alternation. D01/D16 recover, but the other listed pairs fail.

Attempt1 source846d00e90a84dd99; all26 selectors run once (P05's build invocation reused, not rerun). P05 belief antecedent passes:36.7439/12 by20s, ratio0.326585; Withdraw issued, but no alternating bound. D01 and D16 recover; D02/D03/D07–D09/D11 and P01/P02/P03/P05 fail. Full trace paths/events in trace-evidence.json.

Next corrections follow the evidence: D08's first received platoon report predates drill acceptance; at2.95s it has no commitment, so the planner assigns Advance before the next report reveals the existing external mission. This then admits Fix at33.1s and interrupts the assault at36.75s. Wait for a report of an initialized drill before assigning; report accepted directive serial, not latest pending receipt. No fixture-only bypass.

P01's accepted corridor follows a distant vertex instead of stepping24m along the polyline; column-slot failures recur at66.45/72.15s. Use closest route projection plus bounded arclength. P02 now excludes overlap, but its first (outer starting squad) route is assigned the inner goal, making the second crossing impossible. Allocate the outer capacity slot first and retain accepted claims; do not relax exclusion. P05's retreat bounds still query catalogue cover in open ground; project walkable rearward endpoints for travel, retain cover queries for stationary support, and let Withdraw finish at its rally rather than treating contact loss as completion. P05 fixture/assertions stay fixed after the explicitly authorised belief amendment.


### Attempt2

Waits for a report of an initialised drill before task assignment, advances by arclength on the accepted route, tries outside flank capacity slots first, projects withdrawal movement endpoints, and exports the actual route-buffer area in evaluation diagnostics. D07/D11 recover. P02's positive has34.5981 m minimum centroid distance and no overlap, but its disabled-claims control also becomes distinct, so the pair still fails. No positive-only pass is claimed.

Attempt2 sourcefab005e11f75e2f5. P05 belief remains proven36.7431/12. D07/D11 recover; D01/D04/D05/D06/D10/D16/D17 and all7 pins pass. D02/D03/D08/D09 and P01/P02/P03/P05 still fail. No fixture/assertion edits.

Final-attempt evidence: external directives in existing fixtures encode their destination in intent.objective, whereas the Phase4 receiver copied the unset position field. That produces the premature9.4s leg completion in D02 and changes the starting geometry of D03/D08/D09. Restore intent.objective for non-task-tree directives while keeping explicit task-tree positions. P01 at65.15s rejects392 candidates for 'outside overwatch bound radius': the new route follower overwrote the old bound-distance clamp. Apply the existing24m overwatch clamp to its resolved route step too.

P02 positive now passes the spatial conditions (34.5981m, no overlap), but the disabled-claims control is also distinct because outer/inner goals are assigned regardless of exclusion. Replace pre-spread capacity goals with a common preferred objective and ordered alternate routes only when exclusion rejects the preferred corridor. The test-only flag still disables only claims; no fabricated control behavior or fixture edit.

P05 BreakContact now alternates normally at15.25/29.45/42.30s. A pending Withdraw is accepted45.25s, when the squad has already retreated near its old rally. Its last short bound is rejected by the older25m minimum despite valid position-query candidates. Accept a shorter final bound only within the received rally area. No shortening of ordinary rearward bounds.

The Withdraw exception is applied without restarting an active BreakContact: a received Withdraw extends the rally and marks the ongoing retirement as Withdraw while retaining the bound, instance/generation and arrival receipts. Other task changes still wait for retirement completion. This interpretation honours the immediate Withdraw exception and preserves the retirement lifecycle.


### Attempt3 — final

Restores `intent.objective` as the destination of older/non-task-tree directives, retains explicit task-tree positions, reapplies the prior overwatch-distance clamp after route following, and searches alternative flank corridors only after rejection of the common preferred objective. Final short withdrawal bounds may end inside the received rally area. A received Withdraw extends an ongoing retirement without cancelling its current bound or receipts. D02/D08/D09 and P05 recover; four failures remain.

## Per-pair results

| Selector | Attempt1 | Attempt2 | Attempt3 | Final observations |
|---|---|---|---|---|
| D01 | PASS | PASS | PASS | D01 moving=1611 spacing_share=0.934823 arrived=8 corridor_inside=1 |
| D02 | FAIL | FAIL | PASS | D02 report_only=1 30-50m=1 protected_trail=1 control_traveling=1 control_close=1 |
| D03 | FAIL | FAIL | FAIL | D03 alternation=0 covered=1 maximum_bound=0 far_early_bounds=0 |
| D04 | PASS | PASS | PASS | D04 first_receipt=2.2 return_shooters_4s=7 all_cover=1 spacing=1 path_bound=1 assessment=1 bare_rear=1 |
| D05 | PASS | PASS | PASS | D05 support=1 incorrectly_blocked=0 weak_report=1 latency=3.9 |
| D06 | PASS | PASS | PASS | D06 established=1 lost=1 evidence=1 protected=4 silent_released=0 |
| D07 | FAIL | PASS | PASS | D07 phase_receipt=120.15 lift_received=121.6 late_original_area_rounds=0 no_signal_lift=0 |
| D08 | FAIL | FAIL | PASS | D08 observer screened candidate routes=2 best blocked fraction=1; D08 accepted route observer blocked fraction=1; D08 covered_attack=1 moved=1 physical_angle=1 longest_rush=4.8 consolidate=1 reorganise=1 bare_attack=0 bare_report=1 |
| D09 | FAIL | FAIL | PASS | D09 pause=1 resume_same=1 protected=1 continuous_pause=0 |
| D10 | PASS | PASS | PASS | D10 committed=1/1 alternatives=1/0 resolved=1 |
| D11 | FAIL | PASS | PASS | D11 committed=1 frozen=1 continued=1 weak_failed=1 reformed=1 |
| D16 | PASS | PASS | PASS | D16 retreat=1 alternate=1 rear_distance=45.4118 complete=1 equal_break=0 |
| D17 | PASS | PASS | PASS | D17 independently allocatable protected slots=8; D17 scarce_occupied=5 ample_occupied=8 spacing=1 |
| P01 | FAIL | FAIL | FAIL | P01 fix_weapon=1 two_flanks=0 reserve=1 arrival_angle=0 claims=1 bare_flank=0 bare_unsafe=1 honest=1 |
| P02 | FAIL | FAIL | FAIL | P02 sampled=0 min_centroid=1e+09 overlap=0 disabled_claim_overlap=1 |
| P03 | FAIL | FAIL | FAIL | P03 phase_received=-1 fixing_received=-1 lifted=-1 late=0 no_phase_lift=0 |
| P04 | PASS | PASS | PASS | P04 autonomous=1 successor=23 directive=23 control_changed=0 |
| P05 | FAIL | FAIL | PASS | P05 belief_by20=36.7431 reported_strength_bound=12 ratio=0.326592; P05 withdraw=1 alternate=1 rally_in_area=1 strong_withdraw=0 |
| P06 | PASS | PASS | PASS | P06 renewals=2 lifetimes_60_90=1 no_stale_execution=1 |
| close | PASS | PASS | PASS | Close assault positions: supported objective inside18 accepted; unsupported, distant and other-threat controls reject |
| lifecycle | PASS | PASS | PASS | Lifecycle continue samples=778 retained overwatch samples=424 latched receipt samples=1234; Progress clock paused=126 running=171 |
| plumbing | PASS | PASS | PASS | all assertions passed |
| positions | PASS | PASS | PASS | Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS |
| projection | PASS | PASS | PASS | Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects |
| sector | PASS | PASS | PASS | Sector position query: lane rejects; lane union objective disc accepts reachable covered flank |
| sprint | PASS | PASS | PASS | Sprint contracts: standing movement=335 crouched arrivals=1296 maximum route=10.4937 |

P05 is the only modified fixture/test: enemy positions are inside observable50–70 m approaches, the physical32-versus4 enemy strength control is retained, a mental-map assertion is added before the unchanged withdrawal assertions, and the completed amendment is unchanged across all three attempts. Existing D01–D11/D16/D17 fixtures and assertions remain unchanged; all P01–P04/P06 bodies remain unchanged. The existing P05 `withdrew && alternate && inside && !control` assertion is retained verbatim. No received contact, fire evidence or arrival receipt is injected.

## Remaining failures and trace evidence

- **D03:** cover now passes, but no completed alternating bound. In attempt3 encounter48, trace id917 at6.45 s records the first arrival transition, followed by column allocation failures1120/1122. A Blocked report releases the higher-level commitment: task assignment1860 arrives at9.90 s, Fix is selected at10.90 s, and the squad accepts SupportByFire at13.75 s. It establishes support at18.15 s and then holds. The blocked-stage feedback plus Fix selection still destroys the required recovery into alternating bounds. This remains a failing integration, not an intentional assertion change.
- **P01:** weapon-owning Fix, Reserve and claim traces exist, but the final build never has two Flank assignments or the required arrival angle. The bare control also detects an unprotected soldier inside18 m of the known sector. The planner's greedy first corridor can leave no admissible second route; Reserve fallback is executed, but that does not prove the fixture's two-corridor/arrival mechanism. The bare-control proximity failure is retained; its unique cause has not been proven.
- **P02:** the final positive contains no simultaneous pair of claims (`sampled=0`). Overlap is excluded, but this is not a spatial pass: its1e9 printed distance is an uninitialised sentinel, **not a measured separation**. The disabled-claims control overlaps as intended. Attempt2 had a valid positive pair but failed the control; neither source is represented as a passing pair.
- **P03:** no phase-line receipt (`-1`), so lift timing is unavailable. Zero late rounds is vacuous here and is not counted as a lift pass. The same stalled envelopment prevents testing the downstream fire-lane handoff. Existing objective-area shot assertion is unchanged; the previously disclosed missing complete geometric lane-crossing observation is not fixed or claimed.

Exact final trace manifests:

- P02: `.local/phase4b/attempt3/traces/72/battle-107-1789647119825779722/trace.jsonl`; extracted transitions in `attempt3/trace-evidence.json`.
- P01: `.local/phase4b/attempt3/traces/70/battle-107-1789647121446339213/trace.jsonl`; extracted transitions in `attempt3/trace-evidence.json`.
- D03: `.local/phase4b/attempt3/traces/48/battle-107-1789647124610962404/trace.jsonl`; extracted transitions in `attempt3/trace-evidence.json`.
- P03: `.local/phase4b/attempt3/traces/74/battle-107-1789647124744898701/trace.jsonl`; extracted transitions in `attempt3/trace-evidence.json`.

## Implementation and accepted deferrals

- Task nodes remain in state across assessments; active objectives survive until their activation ends or their assignment completes/blocks. Advance picks the next60 m lane leg ahead of the received front. Executing assignments retain accepted corridors and renew with the same intent. A higher-priority task may preempt only when no other eligible squad is available. Retiring squads retain their current drill; pending ordinary directives are not allowed to leak their areas/objectives into stage policy.
- Squad state stores the accepted directive separately from the newest received one. Renewals update expiry without accepting a new drill. Ordinary replacements wait for a stage boundary, except redirectable MoveTactically and immediate Withdraw. Stage movement follows the accepted corridor using projection and arclength, preserving the existing overwatch-distance limit.
- Flank/Advance query and execution areas use the25 m accepted-route buffer union60 m objective disc; map walkability supplies clipping. Diagnostic min/max values are map bounds, not the admission rectangle; evaluation now also emits `route_buffer` and `route_points`. Other tasks retain bounded local areas.
- Flank route admission samples the centreline at no more than1 m intervals and rejects proximity below20 m to retained claims; constrained path cost is followed by this rejection. The first valid alternative is accepted, otherwise Reserve remains available. This sampled implementation is not an exact continuous segment-distance proof; it and greedy allocation remain limitations. No test assertion was relaxed to accommodate them.
- Weapon attachment to another squad, Merge member transfer and a receiving company escalation endpoint remain **Phase4c items**, explicitly deferred by the review. They are not blockers newly invented for this slice, and no Phase4c work was started.

Knowledge boundary: planning reads the commander snapshot, received squad reports, known geometry and its own task/claim state. The squad uses its accepted order and permitted member information. P05 mental-map aggregation is a test observer assertion, not policy input. New authoritative fields are included only in the drills digest block.

## Verification and work not reached

- Final mechanism pass:22/26, with all seven auxiliary pins passing, including the existing short trace-on/off plumbing pin on both authored terrains. This is not the requested full-battle trace check.
- Python unit suite:63 tests, PASS (3.453 s). `git diff --check`: PASS. Final source equals the attempt3 snapshot byte for byte. Protected authored terrain/layout source, frozen seed lists and `tools/evaluate_routes.py` match their preserved hashes; see `static-checks.json`.
- Full `./scripts/test-sim.sh` default suite: **not run in this slice**. The script was used to build and run P05 on each attempt; that is not a full-suite pass.
- Forty authored legacy/cognition digest rechecks,360 s drills trace parity on both maps and F1,20 authored drills runs,90 F1 development runs, engagement-guard distributions, paired intervals and distribution per-run tables: **not run** because the all-pairs prerequisite failed on attempt3. Earlier Phase4 evidence is not relabelled as current verification. Therefore preserved historical digests are not claimed as reverified for `c98020b91fed4f51`.
- Native Windows/Unreal: not attempted, per instruction; remains with the architect.
- No Fable launcher, commit, reset, stash, protected-file edit, per-seed tuning, F2/F3, gun pickup or second measured build. There was no first distribution build either.

## Disagreements / interpretation

No disagreement with the bounded iteration allowance, unchanged behavioral assertions, knowledge boundary or distribution prerequisite. The implementation does not meet the mechanism exit, and I do not propose accepting a source with these failures. I interpret the immediate Withdraw exception as permitting a higher withdrawal order to extend an existing retirement while preserving the accepted bound and receipts; Fix/Flank/Advance still cannot interrupt that retirement. This is recorded explicitly because the review also requires BreakContact to be honoured until completion.

Proposed next investigation, not implemented: distinguish a transient blocked stage from an exhausted directive in the reported lifecycle; evaluate paired corridor alternatives before committing the first corridor, rather than relying on irreversible greedy first choice. The final P01/P03 traces need a successful route/arrival proof before evaluating lift. These are hypotheses for review, not a request to waive the tests.

## Commands

```sh
cat plans/014-phase4-fable-review.md
python3 tools/source_id.py
./scripts/test-sim.sh --platoon P05 # once per local source; builds and checks belief/withdrawal
python3 .local/phase4b/run_attempt.py 1
python3 .local/phase4b/run_attempt.py 2
python3 .local/phase4b/run_attempt.py 3
./scripts/battle-lab.sh --drills --encounter 78 --seconds 100 --evaluate --out .local/phase4b/attemptN/traces/78 # N=1,2,3
python3 .local/phase4b/trace_attempt.py 1
python3 .local/phase4b/trace_attempt.py 2
python3 .local/phase4b/trace_attempt.py 3
.local/phase4b/attempt2/battle-lab --drills --encounter 71 --seconds 100 --evaluate --out .local/phase4b/attempt2/traces/71
python3 -m unittest discover -s tests -p "test_*.py"
git diff --check
```

Every expanded selector and trace command is saved in the corresponding results/trace JSON. `simulation.patch` is a diff against this slice's preserved entry, rather than against the unrelated older Git baseline. Source/test snapshots and binaries remain available for replay and review.

Final fingerprint: `c98020b91fed4f51`. Stopped after this report with changes in the working tree.
