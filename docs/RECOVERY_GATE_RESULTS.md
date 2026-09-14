> Superseded result: the subsequent destination bookkeeping correction passes layout 5 on all three seeds. See `RECOVERY_DESTINATION_FIX.md` for verification and the 5/9 broader matrix result. This report preserves the preceding revision.

# Recovery gate repairs

**The seven requested areas are implemented, but the layout-5 acceptance gate remains unmet: 1/3 strict passes.** This controller remains available only through `--recovery` in controlled encounters. It has not been enabled in the playable Unreal battle.

Source: `d220f8cc8bfa343b`. Findings addressed: `RECOVERY_GATE_FINDINGS.md`, against preceding source `d28f86681c7988cb`.

## Final evidence

| Layout 5 seed | Selected routes | Completed routes | Strict envelopment, Linux | Strict envelopment, Windows | Defenders eliminated |
|---|---:|---:|---|---|---|
| 107 | 1 | 1 | Fail | Fail | Yes |
| 108 | 1 | 1 | Fail | Fail | Yes |
| 109 | 1 | 1 | Pass | Pass | Yes |

The strict evaluator is unchanged. Elimination and route completion are not counted as envelopments. The fixture now pins defenders, assigns the squads different roles, and starts troops in shelter or screened ground. These results therefore are not an identical-fixture AI-only comparison with the preceding 0/3 result.

The closest simultaneous qualifying windows in Linux were **0.8 seconds** for seed 107 (at 52.6s, movers 10 and 11, selection decision 11476), **1.4 seconds** for seed 108 (at 57.4s, movers 10 and 11, selection decision 11646), and **7.0 seconds** for seed 109 (at 153.4s, replacement movers 8 and 9, selection decision 5815). The requirement remains three continuous seconds. These are observer measurements, not commander knowledge. Full supporting frames, route revisions, and decision IDs are in the evidence archive.

Same-task interruption/resumption still occurs (1, 2, and 1 tasks); no recorded pause cites an Interrupted member. The task investigator flags 1, 2, and 1 unfinished/battle-ended tasks respectively. These smaller counts cannot be interpreted as a churn improvement against the different old fixture.

## Implemented changes

1. **Fixture roles and pinning.** The gun squad keeps the base-of-fire role and does not select a maneuver route. The rifle squad owns the maneuver. Defenders may fire and duck at their authored shelter but do not drift into the approach lane. The support squad starts behind its low wall; the maneuver squad starts behind the screening walls. All changes are scoped to recovery encounters 5–7.
2. **Sliding delivered fire.** Exposed-stage readiness uses rounds delivered during the trailing ten seconds, with a requirement of two rounds per predicted exposed second and a minimum of three. Any friendly shooter can contribute. Each round retains its arrival time and aimed position across target switches; only rounds near a known track in the selected target area count. Repeated relays do not add rounds. Recovery delivery transport accepts the same ten-second history. A fully screened first stage can start while covering fire is still being prepared.
3. **Local occupation.** A short final stage can be released from the movers' own form-up Done reports when their slots are within eight metres, the predicted stage is at most three seconds, and its current exposure is below 1.5 seconds. The first member moves while the partner has a covering assignment; the partner is released after the first reports Done at its final slot. Ordinary crossings use a one-second exposure threshold instead of 0.25 seconds. Individual suppression, aiming and friendly-fire safety remain active.
4. **Position queries.** Queries sample up to three metres around cover peeks and separate shelters along protected tall-wall faces. They require a firing line to at least half the known tracks in the target area, rank visibility of those tracks and their uncertainty samples, preserve physical shelter-to-peek connections, and space both shelters and firing points. The query uses the actual movers' weapon ranges. Candidate traces identify the firing point in `position` and the shelter in `goal`. Slots are refreshed at the final approach using the then-available reports.
5. **Local re-slotting.** A displaced or fresher reported threat can trigger a query within thirty metres of the movers. Successful re-slotting retains route identity and completed stages, replacing only the unfinished suffix and slots. The new suffix starts at an actual mover position; a centroid inside a wall is not a valid start. Shared support is updated in place. A missing local slot set remains an explicit cancellation reason. Assault firing points cannot be selected within fifteen metres of the target point.
6. **Release-time screening.** Before an unreleased stage starts, its polyline is measured against current leader-known tracks and geometry. A newly overlooked screened stage is held and a local replacement is queried. Already released movement is not silently discarded because of a temporary interruption.
7. **Honest rifle support.** Support queries use rifle or MG range as appropriate. Useful existing positions are retained. Members without a usable firing position remain in protected standby and can observe over cover. Merely assigning a support role does not contribute rounds to readiness.

Two additional correctness fixes were necessary: the selected shelter-to-peek movement is no longer forced through the old approach corridor after arrival, and replacement members cannot satisfy a new final stage using Done reports from their preceding form-up tasks.

## Remaining weaknesses

The sustained overlap of the two assault firing positions remains unreliable. Completing the approach, reaching a slot, and registering one firing solution still do not guarantee that two members will maintain their angles together through peeking, suppression and casualties. Seed 109 passes only after replacement members establish the position; this is not evidence of a reliable first-pair attack.

The original approximately 90m firing distance is retained. Most riflemen at the original base of fire cannot engage at that range. Their roles are no longer mistaken for delivered fire, but the fixture still relies heavily on the gun until closer elements can contribute. A trial moving the support wall inside rifle range changed the frontal engagement and did not solve acceptance; that change was not retained. A trial increasing the moving group to four also failed and was not retained.

Earlier intermediate revisions reached 2/3 before subsequent support, query and execution fixes. Those are archived experiments, not the final result. The seven changes do not establish that the whole recovery plan is complete. Leader-scoped occupancy tracks, complete utility selection, broader drill methods and platoon coordination remain future implementation work.

## Verification

- Recovery C++ tests passed: task continuity and delayed reports; pinned defenders; role separation; range-aware/corner queries; target-area round history and relay deduplication; local occupation precedence; route-preserving re-slotting; local cover execution; and release-time screening.
- Focused C++ suite passed, including geometry revisions/IDs, navigation, knowledge boundaries, existing command behavior, prepared assaults, rifle suppression and diagnostic determinism.
- Python analyzer suite: 22 tests passed.
- Native Windows CLI build passed. Windows and Linux both scored 1/3 on the final fixture.
- Full Windows recovery seed 109 with tracing on and off produced identical gameplay digest `7176990198708005916`.
- Recovery-disabled Linux seed 107, layout 5, 30 seconds reproduced the preceding digest `372724838988074300`. This is a bounded isolation regression, not a ten-battle equivalence claim.
- `git diff --check` passed. The strict evaluator is byte-for-byte unchanged from the preserved pre-pass source archive.

The nine-case runner stopped after the failed layout-5 prerequisite. Layouts 6 and 7, the full-battle comparison, cold/warm performance benchmarks, and an Unreal module/editor check were not run for this unaccepted revision. No generation-speed improvement is claimed.

## Reproduce

From `/home/jchan/ww1-autobattler`:

```bash
./scripts/battle-lab.sh --recovery --encounter 5 --seed 107 --seconds 360 --evaluate --out .local/recovery-check
python3 tools/run_route_matrix.py --recovery --binary .local/lab/battle-lab --out .local/recovery-matrix --check
python3 tools/investigate_tasks.py .local/recovery-check/latest.json --out .local/recovery-tasks.json
python3 tools/investigate_engagement.py .local/recovery-check/latest.json --out .local/recovery-gates.json
./scripts/test-sim.sh --recovery
./scripts/test-sim.sh --focused
python3 -m unittest discover -s tests -p 'test_*.py'
```

The matrix command intentionally exits with failure after the three layout-5 runs unless all three pass. It preserves each run and writes `matrix.json` and `matrix.md`.
