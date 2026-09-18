# Plan 014 — Phase 3f fixture report

**BLOCKED: D08 still fails; Phase3 is not marked complete and Phase4 has not started.** The authorized fixture correction removes early deathmatch termination, but exposes a subsequent assault stall. No policy change or behavioural assertion change was made.

Entry fingerprint `5d0923671a8c3c18`; final fingerprint `6ade972b0e7de642`. The fingerprint changes solely because the encounter fixture is compiled under `Sim/DrillFixtures.cpp`, which `tools/source_id.py` hashes. Every other Sim source is byte-identical to the Phase3e snapshot.

## Authorized amendments

- `Unreal/Source/ArmyPrototype/Sim/DrillFixtures.cpp`: encounter60 adds soldier63 at (-150,-90), health10000, reload held beyond the fixture, with an own Observe order. Geometry and the objective defender are unchanged. The remote defender stays there for all240 seconds, retains health10000, fires zero rounds, and is never closer than146.03 m to an active Azure soldier (maximum weapon sight range95 m).
- `tests/squad_drills_tests.h:62`: D08 horizon180→240 seconds. The test file is otherwise byte-identical; all behavioural assertions and the bare-ground control remain.

## Results

| Pair / pin | Result |
|---|---|
| D01 | PASS |
| D02 | PASS |
| D03 | PASS |
| D04 | PASS |
| D05 | PASS |
| D06 | PASS |
| D07 | PASS |
| D08 | FAIL (assert abort) |
| D09 | PASS |
| D10 | PASS |
| D11 | PASS |
| D16 | PASS |
| D17 | PASS |
| close | PASS |
| lifecycle | PASS |
| plumbing | PASS |
| positions | PASS |
| projection | PASS |
| sector | PASS |
| sprint | PASS |

Twelve of thirteen pairs pass; D08 fails. All seven additional pins pass. The unchanged D08 values are: covered_attack=1, moved=1, physical_angle=1, longest_rush=4.95 s, consolidate=0, reorganise=0, bare_attack=0, bare_report=1. Both screen assertions pass with blocked fraction1.0.

## New evidence after termination was removed

| Time | Observer or received-policy evidence |
|---:|---|
| 174.25 | Final supported bound accepted onto objective cover |
| 181.406 | Objective defender32 incapacitated, exactly as in the Phase3e diagnostic |
| 181.45 | Arrived buddy switches to covering the other pair; battle now continues |
| 182.45 | Support permission paused |
| 183.45 | Fresh delivered-fire evidence resumes the next short bound |
| 187.55 | Arrived buddy switches to covering the other pair |
| 188.55 | Support permission paused again; no later resume or consolidation transition |
| 240 | Battle reaches its actual time limit; still Assault, generation30, known objective threat retained |

The final rifle positions are (66.8,-4.9), (69.13,4.18), (63.14,6.34) and (55.86,31.08). The leader still retains the objective defender track, while the observer sees no active objective defender. Thus the previous termination artefact was real, but removing it does not prove the consolidation lifecycle works. The Assault branch requires fresh buddy fire before another close bound and checks consolidation inside the arrival branch; the late trace is consistent with becoming stuck there after useful objective fire ends. The reason the objective contact has not cleared by240 s is not established by this trace alone. No hidden death/health fact was added to policy to force completion.

Full evidence: `.local/phase3f/D08-trace/battle-107-1789643331953276376`; duration240 s, shots293, gameplay digest `4513499165472209725`. `fixture-evidence.json` retains the final squad state, remote-defender validation and post170 s transitions. `fixture.patch` and `static-checks.json` prove the limited edit scope and unchanged protected files.

## Commands and boundary

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D08
python3 .local/phase3f/run_mechanisms.py
./scripts/battle-lab.sh --drills --encounter 60 --seconds 240 --evaluate --out .local/phase3f/D08-trace
python3 .local/phase3f/analyze_fixture.py
git diff --check
```

The D08 compile/run and complete pair/pin rerun used the same fixture source. No distribution was remeasured, and the accepted Phase3e statistical evidence remains unchanged. Full-suite and Phase4 parity/distribution work were not started: the user made Phase4 conditional on D08 passing. No Phase4 source or P01–P06 fixtures were added. Phase4 status is recorded in `.local/handoffs/014-phase4-report.md`.

**Disagreement with the review:** the new trace disproves the inference that early deathmatch termination was the only remaining D08 blocker. I have kept the approved fixture and all assertions, and reported the remaining failure. A follow-up correction needs to address post-assault clearance/occupation from received evidence and latched receipts without requiring renewed fire at a cleared objective; that policy change is outside this fixture-only correction.

Legacy remains default. No commit, reset, stash, Fable launcher, Windows/Unreal build, F2/F3, gun pickup or second measured build. Stopped with Phase3f blocked.
