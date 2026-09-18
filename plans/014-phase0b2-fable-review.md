# Plan 014 Phase 0b2 review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 16 September 2026. Reviewed Astra's corrected-iteration report at `.local/handoffs/014-phase0b2-report.md`, working source `be61f2ac859db33c`. Verified independently: protected non-simulation files intact, Python suite passes, `git diff --check` clean, recovery patch present at `.local/phase0b/hotfix-final.patch`. Advisory review, not acceptance; promotion still needs the user's replay review.

## Verdict

The corrected hotfix meets the engagement and spacing exit on both maps and is worth the user's replay review. Ten-seed means against candidate90 and legacy:

| Map | Nearest-squadmate median | Time under 2 m | Friendly hits | Zero-shot runs |
|---|---:|---:|---:|---:|
| Works: candidate90 / legacy / hotfix | 0.98 / 6.54 / 8.27 m | 79.7 / 16.4 / 7.9 % | 332 / 109 / 19 | 0 / 0 / 0 |
| Trenches: candidate90 / legacy / hotfix | 1.45 / 3.95 / 2.82 m | 66.5 / 31.3 / 28.4 % | 115 / 68 / 9 | 0 / 0 / 0 |

Every run improves both spacing measures against its matching candidate90 seed; per-run adverse cases are exposure and self-play casualty shifts, none of them a loss of engagement. Legacy digest parity is 10/10; trace parity holds on both maps; the full Linux suite passes.

## Rulings on the open items

1. **Friendly-state read (Astra's flagged defect).** Not a violation of project law. The rule protects hidden enemy state; `PlanSquad` has passed the squad's own members to the leader since legacy, and plan 014 section 11 explicitly permits reading squadmates' position, health, role, weapon, assignment and suppression. Tier (c) therefore stands for the hotfix. An actor-known squad view built from deployment orders, observed allies and received task reports is a refinement for the drills controller and is recorded in plan 014 as such; it is not a blocker here.
2. **Optional-suite expectations.** The classification is accepted with these rulings. Fixture artefacts are fixed in the fixtures, never by weakening the behavioural assertion:
   - Split-squad fixtures (`decision_loop_tests.h:67-96`, `reliability_tests.h:101-127`, `:447-453`, `:229`): place all own members at reachable, non-overlapping starts near the leader before planning; retain every existing support identity, transport, safety and deadline assertion unchanged. Add the proposed negative control for the unchanged split setup as a separate scenario.
   - Encounter 24 (`reliability_tests.h:245`): author transit endpoints at least 2 m apart; retain `advanced && held`. Keep the crowded variant as the negative control with the Occupied report.
   - Encounter 15 (`decision_loop_tests.h:162`): rejected as proposed. Do not accept early elimination as an alternative pass; make the target durable as encounter 17 does, so release on actual delivery and loss on its interruption are still exercised. Retain the unavailable-gun control.
   - `decision_loop_tests.h:187`: accepted, match each release to the most recent wait for the same method id and source.
   - `cognition_tests.h:129`: accepted, cause Geometry or Unreachable linked to the assignment issued before the geometry change.
   - `cognition_tests.h:142-156` and `decision_loop_tests.h:49`: accepted as intentional; add the control that blocks a genuine required-occupant approach so the alternate-approach and failed-attempt contracts remain exercised.
   - `decision_loop_tests.h:210`: accepted.
3. **Trace label.** Relabel the inherited `position_query` reason for covering queries. This is a diagnostics-only change; prove it with trace on and off digest equality and with digest equality of the twenty measured cognition runs against the `be61f2ac859db33c` manifests instead of a new ten-seed measurement.
4. **Frozen disclosure (0/9, 1/30).** Reported, not gated, but not dismissed either. In layout 5 seed 107 the trace shows squad 1 cycling supported advance and alternate approach on support loss and then exhausting every method by 57 s with no completed route, while the defenders were still eliminated by 148 s. So on the authored flank layouts the hotfix changes more than the two-mover angle window: the covering and occupancy constraints make the staged approach fail where candidate90 pushed through uncovered. That is disclosed to the user as a known limitation with the trace evidence, and the replay review must include layout 5 seed 107 alongside both playable maps. It is not a reason to tune the hotfix on those layouts; the drills controller's element-based support is the designed remedy.
5. **Native Windows.** Astra's sandbox cannot launch Windows processes (vsock bind failure). The architect session ran the existing lab build and test scripts against the corrected source as verification evidence; results are recorded under `.local/phase0b2/fable-windows/`. Unreal build and replay smoke remain pending and belong to the promotion step after the user's review.

## Next slice for Astra

Apply the suite rulings above, then rerun the three optional suites, the full Linux suite, trace parity, and the digest-equality check of the twenty measured runs. No new measurement, no policy change, no Phase 1. Report to `.local/handoffs/014-phase0b3-report.md` with the list of fixture amendments and the fingerprint. Stop after the report; the user's replay review on both maps follows.

## Native Windows verification (architect session, 16 September 2026)

Run from this session because the Codex sandbox cannot launch Windows processes: `./scripts/build-lab-windows.sh` compiled source `be61f2ac859db33c` with MSVC, exit 0, and `./scripts/test-sim-windows.sh` passed the full suite, exit 0, in 579.6 s. Logs: `.local/phase0b2/fable-windows/build.log` and `tests.log`. This is the lab executable and assert suite only; no Unreal build or replay smoke was run.

## Final-source verification and replay build (architect session, 16 September 2026)

On the reconciled source `b011de1fb6d44828`: native Windows lab build and full test suite passed (exit 0, 550.4 s; `.local/phase0b3/fable-windows/`). The Unreal editor was rebuilt with the hotfix (26 compile actions, `Result: Succeeded`; `.local/phase0b3/fable-unreal/build2.log`; the first attempt failed only because `build.sh` invokes the generated command by bare name from a path containing a space). The unattended smoke check ran on Fractured Works and Trenches with cognition, both exiting cleanly through the smoke stages; `Saved/cognition-smoke-test.txt` and the inspector screenshot `Saved/Screenshots/cognition-actor-memory.png` were rewritten by these runs. Each run simulated a full 360 s seed-108 battle on build `b011de1fb6d44828-windows`. The playable mirror now carries the hotfix; candidate90 is restorable from `.local/phase0b/original` and `.local/phase0b/hotfix-final.patch` documents the change. The user's replay review decides promotion.
