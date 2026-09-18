# Plan 014 Phase 0b3 report — Astra

16 September 2026 session. **Fixture amendments complete; all three optional Linux suites and the full suite pass. All 20 cognition and 20 legacy gameplay digests are unchanged against Phase 0b2. Trace on/off parity passes on both maps.** The hotfix remains unpromoted pending the user's replay review.

**Entry fingerprint:** `be61f2ac859db33c`. **Final fingerprint:** `b011de1fb6d44828` (`b011de1fb6d44828-linux`). Fingerprint changes include authored test fixtures and the covering trace string; normal-map policy is unchanged. No commit, reset, stash, Fable launcher, new measurement, Unreal build or Phase 1 work.

## Delivered and tested

Applied the attributed [Phase 0b2 Fable review](../../../plans/014-phase0b2-fable-review.md). These are fixture/expectation corrections and one diagnostic string, not another controller iteration. Existing support identity, transport, physical-fire, safety, arrival, alternate-approach, failed-history and nonrenewable-deadline contracts remain exercised. The approved role-dependent expectations are tested separately from their genuine required-occupant controls.

Paths below are relative to the repository; line numbers refer to the final working tree.

| Amendment | File and lines | Contract retained / control added |
|---|---|---|
| Reachable own-squad deployment helper, 3 m spacing | `tests/cognition_tests.h:5–11` | Moves the whole own squad near the leader before planning; updates initial goals with positions. No policy change. |
| Support-deployment positive fixture | `tests/decision_loop_tests.h:80` | Uses that helper; every existing source/route/stage identity, delayed transport, support-release and deadline assertion remains. |
| Protected-transit positive fixture | `tests/decision_loop_tests.h:220` | Uses that helper; keeps the continuous corridor, bounded stages and actual `Completion::Transit` assertions. |
| Support recovery positive fixture | `tests/reliability_tests.h:97` | Uses that helper; retains old support-loss, alternate approach, renewed evidence and deadline assertions. |
| Strength positive/control fixture | `tests/reliability_tests.h:219` | Uses that helper in both branches; retains failure for one capable arrival and stage advancement for a capable pair. |
| Support-protocol positive fixture | `tests/reliability_tests.h:450` | Uses that helper; retains all subsequent support identity, interruption, preparation-budget and route assertions. |
| Original split-squad negative control | `tests/decision_loop_tests.h:250–263` | Leaves members at their original deployment except the leader, as the old setup did. Requires Blocked, Unreachable, fewer available movers than required, and unreleased Occupy orders. Registered in the decision-loop suite. |
| Covering-member failure paired with genuine occupant failure | `tests/cognition_tests.h:153–183` | Covering failures retain the same supported approach and no failed-objective history. A cloned case blocks the actual required movers and retains the original alternate-route, parent, deadline, restored-support and nonempty-history assertions. |
| Covering casualty paired with required-member casualty | `tests/decision_loop_tests.h:47–68` | Covering member 2 retains generation 0. A separate captured mover casualty increments its generation, preserves unaffected assignments, and requires a fresh receipt for its replacement. Obsolete receipt/stage and exact support checks remain. |
| Geometry obstruction correlation | `tests/cognition_tests.h:125–142` | Accepts Geometry/Unreachable and Failed/Blocked only after the geometry change, for an assignment issued before it. Retains exhaustion, delayed feedback, alternative and final-hold assertions. |
| Durable support target, encounter 15 and symmetric control 16 | `Unreal/Source/ArmyPrototype/Sim/CognitiveSim.cpp:1110` | Target health 10000, matching the durable-target convention of encounter 17. Control 16 still differs by unavailable gun. Original `released && physical && lost` and unavailable-gun assertions remain at `tests/decision_loop_tests.h:168–179`; early elimination is not an alternative pass. |
| Match each physical release to its method and source | `tests/decision_loop_tests.h:183–216` | Records source-15 waits, matches the latest preceding wait with the release's method ID, asserts release source 15, and checks **every** release. Retains travel, delayed original evidence, deadline, physical shot and wait-before-release checks. |
| Separated protected-transit endpoints, encounters 24 and 25 | `Unreal/Source/ArmyPrototype/Sim/CognitiveSim.cpp:1006–1007` | Endpoints `(17,-13)`, `(17,-7)`, `(20,-13)`, `(20,-7)` are at least 3 m apart, beside the shared lane and within the screened leg. Both paired setups use identical endpoints; only 24 has the screen. |
| Crowded transit negative, new encounter 57 | `Unreal/Source/ArmyPrototype/Sim/CrowdingFixtures.cpp:7–12`; `tests/reliability_tests.h:235–254` | Clones encounter 24 then restores its original 1.5 m endpoints. Requires received Occupied feedback and no advancement. Positive 24 still requires `advanced && held`; unscreened 25 still cannot advance. Added explicit endpoint-spacing assertions. |
| Encounter 57 dispatch/CLI support | `Unreal/Source/ArmyPrototype/Sim/BattleSim.cpp:641–642,650,657`; `tools/battle_cli.cpp:25` | Extends fixture validation/dispatch from 56 to 57. No change to normal battles or authored layouts 5–7. |
| Covering query trace label | `Unreal/Source/ArmyPrototype/Sim/CognitiveSim.cpp:280` | Changes `covering band 12..25;` to `covering allocation tiers a..d;`. The existing tier-selection trace remains the detailed explanation. No branch, allocation, event count or decision changes. |

Fixture development exposed two additional setup artefacts before the final test build: 3 m endpoints placed on the shared path still produced transient Occupied reports; a wider grid extending to x=23 produced a received-threat exposure pause before advancement. The final endpoints stay beside the path and inside the authored leg. These were fixture-only edits, retaining `advanced && held`, not measured-seed policy changes. Their diagnostic runs are saved in `.local/phase0b3/transit-debug/` and `transit-grid-debug/`.

## Measurement status and adverse cases

No new Phase 0 measurement, evaluator run, tuning iteration or frozen acceptance run was performed. The requested normal-map reruns compute and compare gameplay digests only. The accepted Phase 0b2 distributions and [per-run adverse cases](014-phase0b2-report.md#per-run-adverse-cases) remain the measurement baseline; exposure and self-play casualty shifts are still disclosed there. Equality checks do not turn those adverse cases into tactical successes.

## Final verification

| Check | Result | Evidence |
|---|---|---|
| `cognition` optional suite | PASS, exit 0 (2.24 s) | `.local/phase0b3/cognition.log` |
| `decision-loop` optional suite | PASS, exit 0 (2.91 s) | `.local/phase0b3/decision-loop.log` |
| `reliability` optional suite | PASS, exit 0 (6.39 s) | `.local/phase0b3/reliability.log` |
| Full `./scripts/test-sim.sh` | PASS, exit 0 (279.332 s) | `.local/phase0b3/full-suite.log` |
| Final CLI build | PASS, exit 0 | `.local/phase0b3/cli-build.log` |
| Cognition normal-map digests | 20/20 identical, seeds 100–109 on both maps | `.local/phase0b3/digest-parity.json` |
| Legacy normal-map digests | 20/20 identical, seeds 100–109 on both maps | Same JSON, all references have build `be61f2ac859db33c-linux` |
| Trace enabled/disabled | 2/2 identical, cognition seed 107 on both maps; also match the preserved reference | Same JSON, `trace` entries |
| Policy/scope comparison | PASS: sole policy-region diff is the diagnostic literal | `.local/phase0b3/simulation.diff`, `static-verification.json` |
| Protected files/layouts | PASS: frozen manifests/evaluator/Terrain hashes unchanged; entire `MakeMGEncounter` factory unchanged | `static-verification.json` |
| Whitespace | `git diff --check` exit 0 | Final working tree |

The digest runner is sequential and stops before launching any subsequent case on the first mismatch. **No mismatch occurred.** Normal-run manifests differ only in build ID; trace-on manifests additionally differ in `trace_enabled`. The comparison saved all 40 expected and actual digests, reference paths, new manifest paths, exact commands and exit codes. No metric scripts or tactical evaluator were invoked on these reruns.

| Map / seed | Cognition expected = actual | Legacy expected = actual |
|---|---|---|
| works / 100 | `10667769219738370870` | `16546876874370873500` |
| works / 101 | `14846859356602291739` | `14005458306916058010` |
| works / 102 | `14929939518830654855` | `16313752152682010791` |
| works / 103 | `17544553899924732470` | `17591371289034251358` |
| works / 104 | `6826392508310117990` | `10552861161580534726` |
| works / 105 | `16450056632596859348` | `7986430955412003384` |
| works / 106 | `12368441404023957371` | `5417485951075306499` |
| works / 107 | `1829108452821653422` | `2434807712546868994` |
| works / 108 | `11819500917482968550` | `8044544947865889629` |
| works / 109 | `16318245363754924626` | `9342583190922837000` |
| trenches / 100 | `3007803965535744666` | `5266549991671326232` |
| trenches / 101 | `531315595141990207` | `17854274187911151708` |
| trenches / 102 | `9170172890336797626` | `16274781140041639060` |
| trenches / 103 | `17881952715137796572` | `14302441211946751764` |
| trenches / 104 | `10692065650688853516` | `12948641463471294717` |
| trenches / 105 | `5249648176454117618` | `17139487223503118954` |
| trenches / 106 | `16102947112823592682` | `18333928679068387374` |
| trenches / 107 | `16977295511978949674` | `14605290771190019073` |
| trenches / 108 | `5658420782399827548` | `5683739419115523449` |
| trenches / 109 | `1855603606154410933` | `7345673988934149149` |

| Trace map / seed | On = off = preserved digest | New covering labels | Old labels |
|---|---|---:|---:|
| works / 107 | `1829108452821653422` | 346 | 0 |
| trenches / 107 | `16977295511978949674` | 162 | 0 |

The final full-suite compile is free of the test signedness warning found in the first run. The wait-history key now uses the actual integer type of the method ID; assertions are unchanged. The three optional suites were rerun on that final executable. Initial failed encounter-24 fixture attempts and the first full-suite log are retained as development evidence, not substituted for the final passes.

Architect-owned native evidence: `.local/phase0b2/fable-windows/build.log` ends `build exit=0`; `tests.log` ends `tests exit=0` with elapsed 579.634 s. These are the architect's Phase 0b2 results described in the review, not an Astra Windows launch or a claim that the newly amended fixture source was rebuilt natively. The logs contain MSVC conversion warnings; no warning-free Windows claim is made.


## Frozen disclosure and replay review

The preserved Phase 0b2 frozen results remain **0/9 and 1/30**, disclosure rather than tuning gates. No remeasurement or frozen retuning occurred here.

For layout 5 / seed 107, the preserved run is `.local/phase0b2/frozen-nine/battle-107-1789618982953969435` (`be61f2ac859db33c-linux`). Squad 1 released supported advance at 23.40 s (event 1724), lost support at 33.70 s (2220), selected an alternate approach at 42.00 s (2799), lost its support again at 48.80 s (3389), and exhausted its methods by 57.05 s (4925). The evaluator recorded zero completed routes; opposing-force elimination at 147.55 s did not rescue the staged-approach contract. The selected trace evidence is in `.local/phase0b3/frozen-exhaustion-evidence.json`.

This is a known limitation of covering/occupancy constraints on the authored flank layouts, not merely a changed angle-window count. The user's replay review must cover **Works, Trenches, and layout 5 seed 107**. The drills controller's element support remains future work. This slice does not promote the hotfix or rebuild Unreal.

## Disagreements and limitations

- No disagreement with the review's rulings. I withdraw the Phase 0b2 friendly-state defect classification: plan 014 section 11 permits the own-squad state read at issue. An actor-known friendly view is deferred to the drills controller. No observer facts were added to policy code.
- The durable-target ruling replaces my rejected early-elimination proposal. Release on real fire and loss on interruption are still required and exercised.
- Candidate90 remains the preserved main-build baseline; this hotfix awaits the user's replay decision. No Phase 1 work or promotion is implied by passing fixtures or digest equality.
- Native Windows verification belongs to the architect session per the user's instruction. No Windows process or Fable launcher was invoked here. Native verification of this amended fixture source and Unreal/replay smoke are not claimed by the Linux results.

## Commands and evidence

Relevant executed commands (paths are repository-relative):

```bash
python3 tools/source_id.py
./scripts/test-sim.sh --cognition
./scripts/test-sim.sh --reliability
# The reliability command was rerun while correcting encounter 24's fixture.
./scripts/battle-lab.sh --cognition --encounter 24 --seed 305 --seconds 40 --out .local/phase0b3/transit-debug
./scripts/battle-lab.sh --cognition --encounter 24 --seed 305 --seconds 40 --out .local/phase0b3/transit-grid-debug
./scripts/test-sim.sh
# Repeated once after the test-only signedness warning cleanup.
.local/tests/sim_tests --cognition
.local/tests/sim_tests --decision-loop
.local/tests/sim_tests --reliability
./scripts/battle-lab.sh --version
cp .local/lab/battle-lab .local/phase0b3/battle-lab
python3 .local/phase0b3/check_digests.py
python3 .local/phase0b3/check_static.py
git diff --check
python3 tools/source_id.py
```

`check_digests.py` ran `.local/phase0b3/battle-lab` with `--cognition` or `--legacy-ai`, `--terrain 0` or `1`, `--seed 100` through `109`, `--seconds 360`, `--no-trace`, and a unique output directory. It then ran cognition seed 107 on each map without `--no-trace` and compared each to both its no-trace output and the original manifest. Exact argv arrays and manifest differences are in `digest-parity.json`; exit records are in `optional-status.json` and `completion-status.json`.

The entry source/tests/CLI were copied to `.local/phase0b3/start/`. The final slice differences are in `simulation.diff` and `fixture-tests.diff`; pre-existing uncommitted work remains intact. Updated `AGENTS.md` and `CLAUDE.md` point to the accepted review and this report, withdrawing the superseded friendly-state blocker. Work stops here.
