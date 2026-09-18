# Plan 014 Phase 1 report — Astra

Legacy is restored as the playable default and candidate90 remains explicitly selectable. Phase 1 delivers F1 scenario generation, schema-2 evaluation and shot exports, the family runner, metrics and statistical reports. All 180 final development baseline runs completed. Authored-map gameplay is unchanged in all 40 comparisons. No drills policy or Phase 2 work started.

## Fingerprints

Entry to this run: rejected hotfix `b011de1fb6d44828`. Slice A restored `d0e577abab5319b6` before any further change; that remains the Phase 1 entry fingerprint. Final Phase 1: **`9ce4051ccbd13ed7`**, CLI `9ce4051ccbd13ed7-linux`. The preliminary generator `1e863ac25a8aec8c` is archived and excluded from this report's baseline, for the geometric correction explained below. Slice A verification and crash/default changes are in [014-restore-report.md](014-restore-report.md).

## Verification and exact commands

All listed final commands exited 0. Evidence paths below are relative to `.local/phase1/` unless stated otherwise.

| Command | Result | Evidence |
|---|---|---|
| `./scripts/battle-lab.sh --version` | CLI build PASS, final fingerprint | `build.log`, `source-id.txt`, preserved `battle-lab` |
| `./scripts/test-sim.sh` | Full suite PASS, 244.938 s | `full-suite.log` |
| `.local/tests/sim_tests --generated` | 100 valid deterministic distinct draws; physical variation; battle-seed invariance; invalid-geometry/mask/config controls; both-controller trace pins PASS | `generator-tests.log` |
| `python3 tests/check_controller_defaults.py --binary .local/phase1/battle-lab --out .local/phase1/defaults` | Default = legacy; explicit historical controllers; old and generated manifest reruns PASS | `defaults.log`, `defaults/` |
| `python3 -m unittest discover -s tests -p 'test_*.py'` | 45 tests PASS, including six family tests and preserved Phase 0 tests | `python.log` |
| `python3 .local/restore014/parity.py .local/phase1/authored-parity .local/phase1/battle-lab` | 20 legacy + 20 candidate90 exact digest matches, Works/Trenches, seeds 100–109, 360 s | `authored-parity/parity.json`, `authored-parity.log` |
| `python3 .local/phase1/check_trace.py` | Trace on/off equality: cognition Works/Trenches seed 107, plus F1 genSeed 1 / battleSeed 107 for both controllers; all four at 360 s | `trace-parity.json`, `trace-parity.log` |
| `python3 tools/run_family.py --binary .local/phase1/battle-lab --out .local/phase1/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers legacy candidate90 --seconds 360 --jobs 2` | 180/180 complete; no failed or pending runs | `f1-dev/family.json`, `f1-dev.log` |
| `python3 tools/report_family.py .local/phase1/f1-dev/family.json --out .local/phase1/f1-report.json --markdown .local/phase1/f1-report.md` | Complete family distributions, 2000-resample CIs and 90 paired deltas | `f1-report.json`, `f1-report.md` |
| `python3 .local/phase1/check_exports.py` | 180 schema/mask exports checked; 105,187 shots checked; all 30 scenario files identical across both controllers × three battle seeds; corridor bounds checked | `export-verification.json` |
| `python3 tools/source_id.py`; protected hash checks; `git diff --check` | Final fingerprint, protected originals equal, whitespace clean | `source-id.txt`, `static-checks.json` |

The requested `tools/check_foundations_parity.py` also passed 10/10 against the preserved Phase 0 binary during Slice A; this final phase checks both controllers on both maps against every corresponding Phase 0 manifest. All current policies and physics before `Simulate` remain byte-identical to Slice A. The only Phase 1 Sim files changed are BattleSim.h, BattleSim.cpp (generated setup), Diagnostics.cpp (conditional digest/exports), and new ScenarioGen.cpp. Protected authored layouts, frozen lists and `tools/evaluate_routes.py` are unchanged.

## Final F1 development baseline

Thirty generated maps (genSeeds 1–30), three battle seeds per map (107–109), 360-second limit, each controller = 90 battles. CIs use 30 map clusters, not 90 independent maps. Azure attacks and Ember defends; initial force sizes differ. Outcomes include the existing time-limit survivor adjudication, not only elimination or objective capture. These are reference measurements, not tactical acceptance.

| Controller | Runs | Shots, mean [CI95] | Casualties A/E, mean | NN median, mean m | Under 2 m, mean | Outcomes A/E/draw |
|---|---:|---|---|---:|---:|---|
| legacy | 90 | 718.20 [610.67, 840.92] | 55.86% / 52.07% | 5.102 | 13.63% | 54/34/2 |
| candidate90 | 90 | 450.54 [381.80, 527.69] | 50.97% / 33.65% | 3.109 | 38.36% | 65/18/7 |

| Candidate90 minus legacy | Mean paired delta | CI95 |
|---|---:|---|
| shots | -267.656 | [-367.390, -173.513] |
| casualty_azure | -4.884 percentage points | [-13.729, 3.821] |
| casualty_ember | -18.426 percentage points | [-29.205, -7.333] |
| nearest_m | -1.994 | [-2.432, -1.558] |
| under_2m | 24.731 percentage points | [19.151, 30.236] |

Zero-shot cases: 0. No run or export failed. Full per-run intensity, crowding and adverse comparisons are in [f1-per-run.md](../phase1/f1-per-run.md). All metrics, unavailable reasons, initial actives, survivors, digest and exact CLI commands remain in [family.json](../phase1/f1-dev/family.json) and [f1-report.json](../phase1/f1-report.json). The full CI scoreboard is [f1-report.md](../phase1/f1-report.md).

## Authored-map fighting intensity, per run

Final-source digests equal the Phase 0 baseline for every row and controller below. Thus final source preserves these shot counts and casualty fractions exactly. The explicit cognition path meets the candidate90 floor by equality in all 20 runs. Legacy's lower casualty cases are disclosed: the user's legacy-default decision does not make those comparisons passes. A/E = Azure/Ember, casualty denominator = initial actives.

| Map / seed | Candidate90 shots | Candidate90 casualties A/E | Legacy shots | Legacy casualties A/E | Legacy below candidate90 |
|---|---:|---|---:|---|---|
| works/100 | 839 | 84.4%/31.2% | 2583 | 56.2%/56.2% | Azure casualty fraction |
| works/101 | 1038 | 90.6%/37.5% | 2012 | 62.5%/46.9% | Azure casualty fraction |
| works/102 | 965 | 68.8%/71.9% | 2270 | 37.5%/71.9% | Azure casualty fraction |
| works/103 | 1272 | 56.2%/75.0% | 2347 | 68.8%/56.2% | Ember casualty fraction |
| works/104 | 1067 | 78.1%/50.0% | 2086 | 75.0%/50.0% | Azure casualty fraction |
| works/105 | 1003 | 65.6%/40.6% | 2318 | 68.8%/59.4% | none |
| works/106 | 973 | 62.5%/62.5% | 2803 | 78.1%/50.0% | Ember casualty fraction |
| works/107 | 1197 | 53.1%/75.0% | 1878 | 59.4%/59.4% | Ember casualty fraction |
| works/108 | 841 | 71.9%/50.0% | 1962 | 46.9%/53.1% | Azure casualty fraction |
| works/109 | 689 | 56.2%/31.2% | 2806 | 65.6%/65.6% | none |
| trenches/100 | 598 | 6.2%/28.1% | 2104 | 59.4%/65.6% | none |
| trenches/101 | 1342 | 46.9%/6.2% | 1569 | 62.5%/12.5% | none |
| trenches/102 | 1179 | 40.6%/31.2% | 1774 | 21.9%/65.6% | Azure casualty fraction |
| trenches/103 | 511 | 15.6%/28.1% | 1805 | 15.6%/75.0% | none |
| trenches/104 | 817 | 31.2%/25.0% | 1377 | 37.5%/43.8% | none |
| trenches/105 | 558 | 25.0%/21.9% | 1948 | 40.6%/56.2% | none |
| trenches/106 | 552 | 18.8%/21.9% | 2552 | 75.0%/53.1% | none |
| trenches/107 | 655 | 15.6%/31.2% | 2284 | 50.0%/71.9% | none |
| trenches/108 | 385 | 6.2%/25.0% | 2262 | 62.5%/59.4% | none |
| trenches/109 | 1392 | 65.6%/28.1% | 2218 | 50.0%/50.0% | Azure casualty fraction |

## Delivered

- `Sim/ScenarioGen.cpp` implements F1 defended positions with a scenario-only splitmix64 stream keyed by family and generator seed. Map half-sizes are 90–140 × 85–120 m; deployment-to-objective distance is 60–140 m; the objective radius is 10 m. Draws have 3–8 local low-cover pieces, 0–2 local tall pieces, and separate screening bands forming 1–3 approach openings of 6–20 m. Screen connections also meet a 6 m minimum. All obstacle masses are at most 24 m, with at least 3 m corner clearance.
- Attackers have 2–3 active squads; defenders have 4–12 members in 1–2 squads, initially in physical local cover. Masks retain sergeants/corporals and platoon staff and remove riflemen in parity pairs. Independent support-weapon choices apply per side; a gun plus required platoon staff needs at least six defenders. Validation checks dimensions, finite coordinates, masks, local protection, spacing, no initial opposing line of sight, and paths from deployments/members to the objective. Geometry is prepared once after construction.
- `ApplyScenario` installs common physical deployments and the pre-battle objective. F1 uses the existing fixed-defender command mode. It creates no contacts, reports or fabricated fire receipts. No policy implementation changed. Deathmatch resolution remains unchanged; asymmetric outcomes are reported as fractions of initial actives, not an objective-capture score.
- `Config.family` and `genSeed` participate in `SameConfig`. CLI flags are `--generated F1 --gen-seed N`. Generated scenarios retain encounter 0; authored encounters, recovery fixtures and authored Trenches cannot be combined with a generated family. Generated configuration and scenario geometry enter GameplayDigest only in the generated conditional block. Authored battle digests are preserved.
- Manifests and recorded reruns preserve family and generator seed. `scenario.json` stores dimensions, deployments, objective, masks, weapons, parameters, obstacles, positions and a scenario digest. Evaluation schema 2 adds squad/team, stance, health, suppression, sector, assignment serial/issue time and element fields, with additional gun/role/platoon-order fields for metrics. `shots.jsonl` schema 1 records shot/impact times, shooter and aim, endpoints, collision/hit, target and suppression/support flags. These exports run after simulation and never feed policy.
- `tools/family_metrics.py` reuses Phase 0 spatial/exposure formulas and adds shot counts, gun-silence episodes, frame-based reversals and directive churn. Elements, element roles and areas are null for legacy/candidate90. Drill-only metrics are explicitly unavailable; they are not inferred from generic movement or scored as zero/success.
- `tools/run_family.py` uses a process pool with a conservative 1.5 GiB memory budget per worker and a four-worker cap (this run used two). It writes an atomic `family.json` after every successful or failed case, retains exact argv/errors, and resumes only identical build/draw/metric-source configurations. It uses spawn because Python 3.14's default forkserver attempted a socket bind prohibited by this sandbox. The spawn path passes the actual process-pool tests.
- `tools/report_family.py` reports counts, means, medians and 95% percentile CIs from 2000 fixed-RNG resamples, plus paired differences on `(family, genSeed, seed)`. Bootstrap units are generated-map clusters so the three battle seeds stay together. Missing, failed and pending cases are explicit; an incomplete report returns a failing exit. Rotating validation draws derive from SHA-256 of source fingerprint (without platform suffix), family, recorded salt and index. No rotating validation battles were opened in this baseline slice.

## Generator corrections before the final baseline

The first validation attempt rejected defenders placed farther than the engine's 3 m local-cover test. Two separated low-cover walls now give each defender column actual nearby protection, retaining the configured low-cover count. No protection assertion was weakened.

A later geometry audit found that first-band openings of 6–20 m did not ensure the same minimum in the staggered connecting band. The preliminary generator `1e863ac25a8aec8c` produced three violating development draws (minimum 3.92246 m), despite satisfying the general navigation clearance. Its 180 runs and source are archived under `.local/phase1/pre-corridor-correction/`, not used as the final baseline. The correction moves the second band from x=12 to x=8 and adjusts its projection accordingly; `ValidateScenario` now requires every screening-piece gap to be at least 6 m. A pinched-screen negative control tests the new constraint. The same 30 development genSeeds and three battle seeds were then rerun for both controllers. The correction follows the pre-existing geometric bound, not battle scores; no seed-specific or AI rule was added. Evidence: `.local/phase1/corridor-correction.json`.

## Measurement definitions and limits

The accepted Phase 0 left-endpoint weighting, initial-active exposure denominator, mean of frame squad RMS radii and global minimum same-team centroid distance remain unchanged. Run-level metrics are aggregated with equal run weights. Family CIs resample map clusters; the table's count is battles, not independent maps. Gun-silence intervals end at the next same-squad support-weapon shot or the battle end and retain censor flags. Succession means use observed completions; absent episodes remain null. No tactical conclusions are drawn from motion, shots or casualty counts alone.

There is no drills controller or previous drills candidate in this slice. Thus area compliance, assault-element angle, suppression-before-assault, break-contact drill conformance and contact-to-drill latency are unavailable. Covered-movement support has a tested offline reader but no eligible drill movement samples in these two controllers. Element/area/drill instrumentation belongs to the later controller phases. This is an explicit scope limitation, not a claim that those contracts pass.

## Disagreements, scope and pending work

- No policy disagreement was implemented. I kept Phase 1 to the generator and reporting infrastructure. The appendix's selectable Hold stub/controller branches are deferred with the Phase 2 controller; no nonfighting drills option was introduced.
- F1 is complete for this slice. F2, F3 and F4 are not implemented; unsupported family requests fail explicitly. There is no Phase 2 implementation or tactical promotion.
- The user's legacy default remains. Some legacy per-run casualty fractions lie below candidate90; the restore report and the table here disclose that literal threshold conflict. I followed the explicit playable-default decision without changing legacy to chase the comparison. The explicit cognition path equals candidate90 on both maps in every checked run, so this infrastructure introduces no loss of its fighting intensity.
- Generated-map bootstrap clusters resolve an unspecified sampling-unit detail conservatively. The three battle seeds of one map are repeated observations of that map, not three independent geometries.
- Native Windows lab, Unreal build, timeline-click reproduction and smoke are assigned to the architect session after these reports. None were attempted or claimed here. The native generator and amended exports still need that verification.
- The hotfix remains archived and rejected. No protected layout, evaluator or frozen seed list changed. No commit, reset, stash, Fable launcher call or additional presentation change occurred. Work stops at this Phase 1 report.
