# Plan 014 — Phase 3g report

**FAIL / stopped under the D08 stop rule. Phase3 is not marked complete; Phase4 has not started.** D08 still fails consolidation/reorganisation at240 s. All other pairs and pins pass. The new trace exposes an earlier readiness stall caused by the implementation’s strict interpretation of pair readiness; this is not claimed as proof against the architect’s revised doctrine.

Entry fingerprint: `6ade972b0e7de642`. Final fingerprint: `ae9ab767f6805765`. Only `Unreal/Source/ArmyPrototype/Sim/SquadDrillSim.cpp` changed. Fixtures and all assertions are byte-identical to entry, including the durable remote defender and240 s horizon. Protected hashes match. Snapshots, binaries, `simulation.patch` and `static-checks.json` are in `.local/phase3g/`.

## Applied rule and implementation assumption

`BuddyCovering` now takes the officer’s geometry. It checks the other frozen rifle buddy pair’s stationary overwatch, accepted assignments and received arrival/support receipts, then its lines to the objective. If no known objective contact was observed in the last6 s, readiness suffices. If such a fresh contact exists, the existing requirement of two delivered rounds in6 s still applies. Both final-bound permission sites use this helper. The consolidation condition and track-clearing/expiry code are unchanged. No enemy truth is read.

**Explicit limitation:** I interpreted “the other buddy pair … with a line” as requiring both members individually to have a line, and confirmed readiness through matching received arrival/support receipts. The review does not explicitly require each member to have a line. That strict per-member interpretation blocks D08 at a position already accepted for covering, even though the other member can fire. It must be resolved before claiming the ruling is successfully implemented. No second tactical iteration followed the failed D08 run.

## Pairs and pins

| Selector | Result |
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

Twelve of thirteen pairs pass; seven additional pins pass. D08: covered_attack=1, moved=1, physical_angle=1, longest_rush=4.7 s, consolidate=0, reorganise=0, bare_attack=0, bare_report=1. Both screen observer assertions pass at1.0. D07 and D09 remain passing.

## Trace evidence

| Time | Evidence |
|---:|---|
| 120.15 | Phase-line receipt; base-of-fire lift |
| 122.15 | First supported assault bound |
| 130.15 | Next assault bound |
| 137.55 | Other pair switches to stationary covering contracts |
| 138.55 | Support permission pauses and never resumes |
| 140.05 /140.25 | Members4/5 arrival reports for their new covering assignments reach the leader |
| 193.648 | Rifle member5 is incapacitated by the objective defender |
| 240 | Still Assault, generation26; objective defender alive at286.655 health |

The covering member4 holds (57.85,14.44); member5 holds (55.86,31.08). The objective is approximately (69.28,0). Member4’s line crosses the four-metre screen spanning x=0..60 and y=11..13; member5’s line passes beyond its end. Requiring a line from every member therefore leaves the accepted covering pair unable to release the next bound. The first pause also precedes the new covering receipts; those receipts subsequently arrive, but the per-member line rejection remains. This occurs before objective clearance, so this run does not demonstrate that the new no-fresh-contact readiness branch resolves the prior post-casualty stall.

The remote defender survives at(-150,-90), health10000, zero rounds. The fixture runs the full240 s. Unlike Phase3f, the objective defender does not fall; the earlier readiness stall changes the engagement. The raw trace retains the generic “support lost” label, which does not distinguish missing readiness from missing rounds; diagnosis here combines the trace with the helper and fixture geometry.

Evidence: `.local/phase3g/D08-trace/battle-107-1789643735025629182`; 306 shots, digest `3446676664465365702`. `fixture-evidence.json` contains transitions, received arrivals, casualties and final states. No receipts or contacts were injected.

## Verification and commands

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills D08
python3 .local/phase3g/run_mechanisms.py
./scripts/battle-lab.sh --drills --encounter 60 --seconds 240 --evaluate --out .local/phase3g/D08-trace
git diff --check
```

Compilation succeeds. The mechanism runner reports every exit code in `mechanisms/results.json`;19 selectors pass and D08 aborts on its unchanged assertion. Protected files, fixture sources, both test headers and final source fingerprint were verified. No Python source changed. The full suite,40 authored digests, distributional measurement and Phase4 trace parity were not run because the user explicitly requires stopping if D08 fails.

Phase4 status is recorded in `.local/handoffs/014-phase4-report.md`; no Phase4 implementation, P01–P06 fixtures or measured build exists. No Fable launcher, Windows/Unreal build, F2/F3, gun pickup, commit, reset or stash. Legacy remains default. Stopped after reporting this failed correction.
