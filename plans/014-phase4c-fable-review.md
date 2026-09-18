# Plan 014 Phase 4c review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 4c report (`.local/handoffs/014-phase4c-report.md`) on fingerprint `982796dfe73d3f5f`. Verified independently: protected files intact, 63 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict

Twenty-four of twenty-six selectors pass. Both adopted rulings worked: D03's bounding recovery survives a transient block, and P02 now has two committed flank corridors 34.6 m apart with the disabled-claims control overlapping as intended. The two residual failures are settled by Astra's own trace evidence:

1. **P01 bare control is a test defect, not a controller defect.** The predicate flags any soldier within 18 m of the directive's `sector` without protection, but with no known enemy the sector defaults to the no-contact Advance waypoint, so a soldier walking to his own waypoint at 11.8 s, with the commander holding zero contacts and zero reports, trips it. Restricted to directives with a known enemy, the whole 100 s control has zero unsafe samples. Ruling: the predicate is corrected to require a directive with a known enemy (`a.enemy >= 0`); every other P01 assertion, including the honest no-route report, is unchanged. This is recorded as an intentional test correction with the trace as evidence, under the rule that fixture artefacts are fixed in the fixture.
2. **P03's lift is lost on directive replacement.** The lift is delivered correctly (phase line 130 s, fixing leader 131.4 s, all members 133.6 s), then a later Support directive at 156 s replaces the fixing squad's task instance and the original-area fire permission returns with it; six rounds land near the original sector from 171 s. Ruling, adopting Astra's proposed repair: lift and fire-lane permission is platoon-level fire-control state attached to the assault lane, independent of any squad's directive instance, retained until a received assault completion or a report that the lane is no longer occupied reopens it, and carried into every renewed or replacement Support directive for that sector.

Astra's interpretation that matching flank arrivals inside the commanded objective radius constitute the platoon's phase-line receipt, derived from production task receipts, is accepted.

## Allowance and exit

Up to three local attempts for P03 under the ruling; P01 re-run with the corrected predicate. When all pairs and pins pass on one source: full suite, 40 authored digests, drills trace parity, then the single measured build under the Phase 4 exit as stated in the Phase 3d review. Report and stop if it fails. Weapon attachment across squads, Merge member transfer and company escalation remain Phase 4e.

## Native Windows verification (architect session, 17 September 2026)

On `982796dfe73d3f5f`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase4c/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
