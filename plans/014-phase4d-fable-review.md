# Plan 014 Phase 4d review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 4d report (`.local/handoffs/014-phase4d-report.md`) on fingerprint `26af0a096babc8bf`, the traced Works seed-107 parity battle, and the task-node construction in `Sim/PlatoonTaskSim.cpp`. Verified independently: protected files intact, 63 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict

All 26 mechanism selectors, the full suite, the 40 authored digests and trace parity pass; the platoon layer is mechanically complete for its scope. The measured build then failed the engagement guard in the way that guard exists for: four Works battles with zero shots, a 17 m advance, 251 orders per minute. The cause is a lifecycle loop that no fixture exercises because every platoon pair starts with contact:

- A squad completes an Advance leg and reports Done.
- The planner adds a Secure node for "received completed objective" at priority 70, above Advance at 10, so the squad is ordered to occupy where it stands.
- When that occupation completes, greedy assignment returns the squad to the Advance node, whose objective is the same leg, and the squad re-accepts the same waypoint (Works seed 100: the point (-120, -73.8) at 4 s intervals from 303 s to the end; 120 MoveTactically acceptances, 93 reorganisations, 50 assignments).

Secure was specified for a seized attack objective. Applied to every leg of a march it stops the march.

## Binding corrections for Phase 4e

1. **Secure follows attacks only.** A Secure node is created only for a completed Flank or Seize objective, never for an Advance leg. Completing an Advance leg advances the node's objective to the next leg and renews the same directive to the same squad with the new objective, one order set, no reassignment.
2. **Per-squad lane legs.** The Advance objective is each squad's next 60 m leg in its own lane from its own reported position, keeping the existing lateral offsets, so trailing squads are never sent backward to a shared front.
3. **Loop guard.** If a squad's Done arrives twice for objectives within 18 m of each other, the next objective must lie at least 40 m ahead; trace it as `platoon_no_progress`.
4. **A no-contact scenario, P07,** joins the companion and `tests/platoon_tests.h`: four squads on open ground with no enemy within 200 m; assert front displacement of at least 100 m by 120 s, no Secure node before the first contact, and at most six directives per squad in the first two minutes. Control: a known contact at 90 m switches the tree to Fix and Flank as P01 does.

## Allowance and exit

Up to three local attempts, documented, no distribution runs between them; P07 must pass alongside the 26 existing selectors. Then the full suite, the 40 authored digests, drills trace parity, and the single measured build under the Phase 4 exit as stated in the Phase 3d review. Report and stop if it fails. Weapon attachment across squads, Merge member transfer and company escalation remain Phase 4f.

## Native Windows verification (architect session, 17 September 2026)

On `26af0a096babc8bf`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase4d/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
