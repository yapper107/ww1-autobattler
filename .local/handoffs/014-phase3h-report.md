# Plan014 — Phase3h completion

**Phase3 complete on its authorized scope.** D08 passes on local attempt2; all13 pairs and7 additional pins then pass once on final source `a0364bff5cea6ab9`. Entry source was `ae9ab767f6805765`. Fixtures and assertions are unchanged. This is scope completion, not promotion; legacy remains default.

Attempt1 (`f0decbabb68df895`) implements one-member readiness, a single covering reposition bound with arrival gating, and fresh-contact-only delivered-fire permission. D08 fails at155.75 s:52 endpoint candidates fall inside the expanding stale threat uncertainty area, preventing the permitted inspection bound. Maximum rush4.8 s. Full trace and reason for the next correction: `.local/phase3h/attempt1/evidence.json`, `reason.md`.

Attempt2 (`a0364bff5cea6ab9`) lets a supported close assault inspect the stale named objective area. The position-service exception requires an explicit assault query, endpoint within18 m, objective contact older than6 s, and the same buddy readiness permission; fresh objective contacts and unrelated threats retain uncertainty exclusion. It changes no contact belief or consolidation condition. D08 passes: defender incapacitated175.608 s, consolidation191 s, Reorganise197 s. Its actual maximum rush is recorded in `attempt2/D08.log`. The retained track clears through existing sensing; no death fact or receipt is injected. No third attempt or distribution measurement was used.

The new covering-bound state is included only in the drills digest block. Changes are in `SquadDrillSim.cpp`, its state in `BattleSim.h`, `Diagnostics.cpp`, and the opt-in query fields/condition in `PositionSim.h/.cpp`. Evidence and source/binary snapshots are in `.local/phase3h/attempt1/`, `attempt2/`, `final/` and `mechanisms/results.json`.

Commands: `./scripts/test-sim.sh --drills D08` and `./scripts/battle-lab.sh --drills --encounter 60 --seconds 240 --evaluate --out .../trace` for each attempt; `python3 .local/phase3h/run_mechanisms.py` once on the final source. All13 pairs D01–D11,D16,D17 pass, as do close,sprint,projection,sector,positions,plumbing,lifecycle. No fixture/assertion change, per-seed tuning, commit, reset, stash, Fable launcher, native build, F2/F3 or gun pickup.

Interpretation disclosed: allowing inspection of a stale objective also needed a narrow position-query uncertainty exception, not just the firing-permission change. Otherwise the reviewed readiness permission could not produce an endpoint. Fresh and unrelated threats remain excluded. Gun recovery remains deferred by instruction.

Proceeding to Phase4 under the user's conditional authorization. Its one measured build and final exit are reported separately in `.local/handoffs/014-phase4-report.md`.
