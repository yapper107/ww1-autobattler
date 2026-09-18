# Plan 015 Step C — C4 bounded repair, stopped before measurement

**Open blocker: the one authorised repair fails Q04, D08 and D17 (28/31 selectors pass). No repaired-source distribution is run.** The exception to continue despite Trenches spacing does not waive these mechanism prerequisites. Step C remeasurement, F1, Step E and Step D remain uncompleted. Legacy remains the playable default; this repair is not promoted.

Source before: `4786fc9830d0c1c0`. Source after: `d9cc4c9fd6e9cec9`. The repair is left in the working tree, with the preceding files in [entry](../plan015/review-c4/entry), the complete new simulation/binaries in [final](../plan015/review-c4/final), and the exact four-file [repair patch](../plan015/review-c4/repair.patch). There was one local tactical attempt, no fixture or assertion change and no post-result policy change.

The [C4 review](../../plans/015-step-c4-fable-review.md) was read first. This continuation implements its bounded allocation repair and guard recalibration. The preceding 20 authored results and per-run AAR links are preserved in the [previous Step C report](../plan015/review-c4/entry/015-step-c-report.md). Those results belong to `4786fc9830d0c1c0`, not the repaired build. Their Trenches spacing remains historical information (33.5549% under 2 m versus 31.2771% legacy; mean per-run nearest-mate median 2.995347 m), not a new measurement of this source.

## Implementation and scope

- `Sim/PositionSim.h` adds an explicit halted-allocation mode and retained-slot preferences. `Sim/PositionSim.cpp` reserves the supplied members' assigned slots as well as their positions and the leader's recent ally observations. Halted allocation requires shelter separation at least 2.0 m and peek separation at least 1.8 m. Repeated records of the same soldier do not count as multiple neighbours in the density check.
- Every compliant candidate is considered before an overcrowded fallback. When none fits, the best candidate that meets the remaining hard conditions is retained and `position_spacing_violation` records the member, shelter distance and peek distance. This fallback also relaxes the derived close-neighbour density veto; it preserves area, path, protection and firing-lane checks. If no executable candidate exists and the caller holds its actual position, any spacing violation there is traced too.
- `Sim/DrillSim.cpp` enables the mode for contact cover, halted bound cover, repair and protected-bound allocations. `Sim/SquadDrillSim.cpp` enables it for halted/support/help allocation, objective-cover occupation/consolidation and protected pause slots. Retained support positions now go through the service as preferences instead of overwriting its answer afterwards. This also subjects retention to the service's existing hard conditions, a material implementation consequence discussed below.
- No terrain selector, seed condition, enemy truth read, authored-layout change or new doctrine parameter was introduced. Only those four simulation files differ from the preserved `4786fc9830d0c1c0` snapshot; fixture files are byte-identical. Existing C++ tests and behavioural assertions were not edited.
- Offline `initiative_guards.py` now reports paired under-2 m intervals on all sets. Trenches passes that criterion if the interval is not wholly above zero; the mean per-run median remains a reported target. Other sets retain the prior mean comparison. A new Python test proves the trench interval rule, targeted-only median and unchanged non-trench guard. Remaining strength stays informational. These offline changes cannot alter gameplay.

## Verification

| Check | Result |
|---|---|
| 31 selectors | 28 pass; Q04, D08, D17 fail |
| `./scripts/test-sim.sh --drills positions` | pass; authored layouts 0/5/6/7 and reservation/area tests |
| Full `./scripts/test-sim.sh` | PASS, exit 0 |
| Python unittest | 74 pass |
| Authored legacy/cognition, both maps seeds 100–109 | 40/40 digest matches |
| Drills trace on/off, Works107 / Trenches107 / F1 gen1 seed107 | 3/3 matches |
| Protected files | 4/4 original SHA-256 hashes match |
| Source at end / frozen CLI version | `d9cc4c9fd6e9cec9` / `d9cc4c9fd6e9cec9-linux` |
| `git diff --check` | pass |

All listed verification was run on this repair. The default full suite does not include the optional drill/platoon selectors; its success cannot override their failures. The 40 historical-controller runs and three trace-parity pairs are verification only, not drills distribution measurements or fills for missing draws.

| Trace parity case | Gameplay digest, on = off |
|---|---|
| works | `2099855967893453659` |
| trenches | `9348163669282975353` |
| F1 | `5340398966874700373` |

| Selector | Result |
|---|---|
| [retention](../plan015/review-c4/final/pairs/retention.log) | pass |
| [Q05](../plan015/review-c4/final/pairs/Q05.log) | pass |
| [Q01](../plan015/review-c4/final/pairs/Q01.log) | pass |
| [clock-arrival](../plan015/review-c4/final/pairs/clock-arrival.log) | pass |
| [P04](../plan015/review-c4/final/pairs/P04.log) | pass |
| [P05](../plan015/review-c4/final/pairs/P05.log) | pass |
| [P06](../plan015/review-c4/final/pairs/P06.log) | pass |
| [P07](../plan015/review-c4/final/pairs/P07.log) | pass |
| [Q02](../plan015/review-c4/final/pairs/Q02.log) | pass |
| [Q04](../plan015/review-c4/final/pairs/Q04.log) | **FAIL** |
| [Q03](../plan015/review-c4/final/pairs/Q03.log) | pass |
| [D02](../plan015/review-c4/final/pairs/D02.log) | pass |
| [D01](../plan015/review-c4/final/pairs/D01.log) | pass |
| [D03](../plan015/review-c4/final/pairs/D03.log) | pass |
| [D04](../plan015/review-c4/final/pairs/D04.log) | pass |
| [D05](../plan015/review-c4/final/pairs/D05.log) | pass |
| [D06](../plan015/review-c4/final/pairs/D06.log) | pass |
| [D07](../plan015/review-c4/final/pairs/D07.log) | pass |
| [D09](../plan015/review-c4/final/pairs/D09.log) | pass |
| [D08](../plan015/review-c4/final/pairs/D08.log) | **FAIL** |
| [D11](../plan015/review-c4/final/pairs/D11.log) | pass |
| [D10](../plan015/review-c4/final/pairs/D10.log) | pass |
| [D17](../plan015/review-c4/final/pairs/D17.log) | **FAIL** |
| [close](../plan015/review-c4/final/pairs/close.log) | pass |
| [sprint](../plan015/review-c4/final/pairs/sprint.log) | pass |
| [projection](../plan015/review-c4/final/pairs/projection.log) | pass |
| [sector](../plan015/review-c4/final/pairs/sector.log) | pass |
| [positions](../plan015/review-c4/final/pairs/positions.log) | pass |
| [D16](../plan015/review-c4/final/pairs/D16.log) | pass |
| [plumbing](../plan015/review-c4/final/pairs/plumbing.log) | pass |
| [lifecycle](../plan015/review-c4/final/pairs/lifecycle.log) | pass |

## Failing-pair evidence

All diagnostic exports use the final frozen binary, the unchanged fixture, seed 107 and the test's exact horizon. They are not second tactical attempts. Raw paths and commands are in [diagnostics.json](../plan015/review-c4/diagnostics.json); compact records are in [mechanism-evidence.json](../plan015/review-c4/mechanism-evidence.json).

**Q04, encounter 92, 120 s:** NeedSupport is emitted at 21.3 s; the neighbour accepts at 22.75 s (trace 7116), within transport delay. It binds contact 32 at 23.75 s without changing stage/generation (trace 11826). The far control still issues and receives HelpSquad. However the helping squad emits **zero shots during the whole 120 s**, so the unchanged delivered-by-need+60 predicate fails. At acceptance the service allocates four primaries; orders 11796/11798/11799/11800 send members 8/10/14/15 to the selected support positions. At 60 s and 81.2 s they are at or near those goals with no firing solution and no established support. There are no spacing-fallback violations in this pair. This is a support-execution regression, not a radio receipt failure or an intentionally relaxed expectation. The evidence does not isolate one hard-filter/retention change as the sole cause; moving retention through every service filter is a plausible source of the changed slots, requiring a separate bounded repair if authorised. [Q04 AAR](../plan015/review-c4/diagnostics/Q04-after-action.md).

**D08, encounter 60, 240 s:** screened route, actual angle, rush duration and consolidation entry all pass; the bare control still declines the attack and reports. The longest rush is 4.89999 s. Late alternating buddy holds and support pause/resume transitions continue through 232.3–233.55 s (traces 15043/15053/15066). Consolidation begins only at **236.55 s** (trace 15236). At 239.8 s members 0/2/6/7 are still near the base of fire, moving toward objective-cover slots; members 3/4 have latched arrivals. There is no “consolidation receipts: Reorganise once” transition by 240 s. There are no spacing-fallback violations here either. This is a completion-timing regression against the existing assertion, not a pass or proof that merely extending the horizon would fix it. [D08 AAR](../plan015/review-c4/diagnostics/D08-after-action.md).

**D17, scarce encounter 54 and ample control 55, 40 s:** the independent service pin finds eight separated protected slots in the ample layout. Both battles reach eight occupied slots, but the scarce fixture's assertion requires **exactly five** and unconditionally separated assigned shelters. The new fallback at 4.05 s deliberately assigns the best remaining shelter to members 3/4/5 at zero distance from an existing reservation, with explicit violations (traces 1645–1647); member 5 has a further fallback at 28.4 s (trace 6339). The ample control has no spacing-violation trace. This exposes a direct conflict between “keep the best slot when none is compliant” and the old scarce-cover cardinality/separation contract. I have not silently changed that contract. [Scarce AAR](../plan015/review-c4/diagnostics/D17-scarce-after-action.md), [ample AAR](../plan015/review-c4/diagnostics/D17-ample-after-action.md).

## Commands and evidence

```text
python3 tools/source_id.py
./scripts/test-sim.sh --drills positions
python3 .local/plan015/review-c4/run_pairs.py
./scripts/battle-lab.sh --version
./scripts/test-sim.sh
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/plan015/review-c4/diagnose.py
python3 .local/phase4/parity.py .local/plan015/review-c4/authored-parity .local/plan015/review-c4/final/battle-lab
python3 .local/plan015/review-c4/trace_checks.py
git diff --check
```

Each mechanism export also runs `python3 tools/after_action.py RUN --out REPORT`. Logs, the copied test binary, per-selector argv/exit codes, all parity manifests and protected hashes live under `.local/plan015/review-c4/`. The selector orchestrator records each child's exit code; its own successful completion is not interpreted as all selectors passing.

## Stop, disagreements and remaining work

The one tactical attempt is exhausted. The repair's **mechanism gate**, not the waived Trenches spacing stop, prevents measurement. No repaired-source authored or F1 distribution was dispatched, so no new paired spacing or F1 win-share interval is claimed. No Step E profile implementation, paired leader measurement or attribution update, and no Step D Unreal UI preparation follows. Windows and Unreal remain with the architect. No Fable launcher, commit, reset or stash was used; pre-existing work remains intact.

Disagreement: the new crowded fallback cannot satisfy D17's unconditional five-occupant/separation assertion when the fixture has no compliant slot for the remaining men. That conflict should be resolved explicitly; the test is unchanged and remains failed. This does not excuse Q04 or D08, which remain defects/regressions under their existing contracts. “Best slot” was interpreted as the existing score's best admissible candidate after exhausting compliant choices, not a new least-overlap optimiser; D17 demonstrates that the interpretation can place multiple members at exactly one shelter. This limitation is disclosed rather than tuned against the fixture.

The repair's observed costs cannot establish an authored-map gain: measurement never became eligible. The prior spacing open item therefore remains unresolved. The user's replay verdict remains outstanding and legacy remains default.
