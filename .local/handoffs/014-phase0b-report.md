# Plan 014 Phase 0b report — Astra

16 September 2026. Four distinct implementation increments, with corrected objective-band reruns for increments 3 and 4. **Not suitable for promotion: the Phase 0b spatial exit is not met, normal-map engagement collapses, and existing cognition contract suites regress.** No commit, reset, stash, Fable launcher invocation, or Phase 1 work.

**Source before:** `d0e577abab5319b6`. **Final source:** `19fe733644e046d8`; final Linux executable `19fe733644e046d8-linux`. The original binary and full source/test snapshots are preserved under `.local/phase0b/original/`. The current working tree and `.local/lab/battle-lab` contain the unpromoted hotfix; the preserved original binary remains available for candidate90. The accepted main-build decision remains candidate90; AGENTS.md and CLAUDE.md now link the accepted review and explicitly distinguish this unpromoted working tree.

## Scope and mechanisms

| Increment | Implementation | Physical pin and paired control | Source |
|---|---|---|---|
| 1 | Retained deployment-sector mission | 44: production Works deployment, Center vs North approach; eight distinct initial goals, retained absent a higher order, real received orders. | `1495524d1852a190` |
| 2 | Observed-friendly occupancy for typed and emergency tasks | 45/46: physical ally occupies the typed slot vs displaced ally; blocked report vs arrival. 47/48: occupied/free shelter under actual MG fire, no injected suppression or receipts. | `4de4f5bb42d78a68` |
| 3 | Dispersed objective and covering assignments (corrected objective anchor) | 49/50: open vs a four-metre corridor; 10 m vs 3 m interval, two objective occupants, four protected covering slots at 12–25 m from the accepted objective, and actual BoundCover receipt. | `4a9deeff74877b59` |
| 4 | Reserve/consolidate goals inside the squad’s reported sector | 51/52: only squad 2’s authored deployment sector is shifted; production situation reports and platoon transport produce a different reserve goal inside that squad’s own sector. | `19fe733644e046d8` |

All new mechanism pins pass on Linux in the final full-script run. Bounds were recorded in `.local/handoffs/014-phase0b-pins.md`; the unchanged numerical limits are 2.0 m shelter / 1.8 m peek, 10 m open / 3–5 m restrictive fallback intervals, and 12–25 m protected covering band. These tests establish those mechanisms, not satisfactory six-minute tactics.

The original increment3/increment4 directories are **superseded** attempts: I mistakenly used the intermediate route-stage anchor for the covering band. The review specifies the objective. I corrected the query and physical assertion to `AcceptedPlan.destination`, then rebuilt and remeasured both increments as `increment3-objective-band` and `increment4-objective-band`. No seed-specific parameter or threshold was changed. All earlier evidence remains archived; none is mixed into the final four-increment tables.

Occupancy uses received/observed friendly positions rather than the existing omniscient ally-position/reservation list. A blocked typed assignment retains its identity and emits an Occupied cause through normal task reports. Squad allocation reserves its own issued shelters and peeks. Covering membership is an assignment class, not doctrine element machinery. If the entire moving group cannot obtain the required protected slots, the method explicitly blocks; it does not send only two occupants forward and abandon everyone else.

## Verification and limitations

- All four requested measurement sets completed: **160 final-comparison battles**, legacy and cognition, Works and Trenches, seeds 100–109, configured for 360 s with `--evaluate --no-trace`. Another 80 battles belong to the superseded stage-band interpretation and remain separately archived.
- All **80 measured legacy runs** match the corresponding Phase 0 gameplay digests, on both maps and across all four increments: `.local/phase0b/all-increment-legacy-parity.json`.
- The requested `tools/check_foundations_parity.py` also compares the final binary against the preserved binary over ten seeds. The baseline is wrapped with explicit `--legacy-ai` because candidate90’s CLI defaults to cognition; otherwise that old tool would compare different controllers. **10/10 match**, exit 0: `.local/phase0b/final-legacy-parity/parity.json`.
- Trace-on/off comparisons use identical manifests except trace_enabled: increment 1 and 2, seed 107 on both maps; corrected increment 3, seed 107 on both maps; final increment 4, seeds 100–109 on both maps. **All 26 final-comparison pairs match**, including all 20 final-build pairs. Exact results are in `trace-parity-1-2-3.json` (use only increments 1–2), `trace-parity-3-objective-band.json`, and `trace-parity-4-objective-band.json`.
- The requested no-argument `./scripts/test-sim.sh` full run **passes, exit 0 (295.241 s)**, recorded in `.local/phase0b/final-full-tests.log`; it includes the new pins. This command does not run all optional cognition modes. **All three additional cognition modes fail on the final hotfix**, while all three pass when rebuilt from the preserved candidate90 source: `--cognition` (CognitionMethodScenarios, expected SupportedAdvance/Prepare), `--decision-loop` (ExactReceiptScenario, expected assignment/generation retained), and `--reliability` (ReliabilitySupportProtocolContracts, expected prepared route). Tests were not weakened or rewritten to hide these failures. See `additional-suites.json`, `original-additional-suites.json`, and their individual logs.
- The Python suite passes **39 tests**. No changes were made to the Phase 0 metric definitions/tools. Frozen evaluator, frozen seed lists, terrain source, and the complete authored MakeMGEncounter function are unchanged; all eight final preservation checks pass in `protected-final.json`. `git diff --check` also passes.
- **Native Windows build/tests are pending.** Both existing scripts were attempted, and both exited 23 because rsync cannot write the Windows build mirror (`Read-only file system (30)`). This blocked compilation, before any native result could be obtained. No final-source native or Unreal replay result is claimed; user replay review and promotion remain pending. Logs: `windows-build.log`, `windows-tests.log`.

## Measurements by increment

All group rows are equal-run means of the Phase 0 per-run statistics. NN is the mean of duration-weighted run medians, not a pooled median. Exposure is seconds per initial active. FF is raw friendly Hit events across the ten runs; the rate pools actual living soldier-minutes. All raw p10/median/p90 values, RMS radii, centroid distributions, casualty fractions, command metrics, manifests and denominators remain in the per-increment JSON files. Order reversals are unavailable on these mandated no-trace runs, not zero.

Per-run adverse labels are descriptive: NN↓, <2↑, RMS↓, centroid↓, <10↑, exposure↑, hits↑, hit rate↑, Azure/Ember loss↑, and loss of all shooting. A smaller radius or a higher casualty fraction in self-play is not alone proof of worse tactics; they are exposed rather than silently classified as harmless. `adverse-cases.json` contains exact before/after/delta values against candidate90 **and** the preceding increment, for every run. Self-play winner counts are not controller-vs-controller win rates.

### Increment 1: Retained deployment-sector mission

| Map | Controller | NN median m | Under 2 m | RMS radius m | Centroid median m | Under 10 m |
|---|---|---:|---:|---:|---:|---:|
| Works | legacy | 6.539 | 16.44% | 15.162 | 33.493 | 4.15% |
| Works | hotfix | 1.996 | 50.46% | 7.218 | 45.846 | 0.00% |
| Trenches | legacy | 3.946 | 31.28% | 14.391 | 8.486 | 60.27% |
| Trenches | hotfix | 1.611 | 61.71% | 6.027 | 14.869 | 0.00% |

| Map | Controller | Exposure s/soldier | FF hits (per 100 soldier-min) | Azure/draw/Ember | Azure / Ember loss | Mean shots (zero-shot runs) |
|---|---|---:|---:|---|---|---:|
| Works | legacy | 4.687 | 109 (3.9900) | 2 / 3 / 5 | 61.88% / 56.88% | 2306.5 (0/10) |
| Works | hotfix | 0.000 | 0 (0.0000) | 0 / 10 / 0 | 0.00% / 0.00% | 0.0 (10/10) |
| Trenches | legacy | 0.397 | 68 (2.3737) | 6 / 1 / 3 | 47.50% / 55.31% | 1989.3 (0/10) |
| Trenches | hotfix | 5.109 | 195 (7.2115) | 6 / 2 / 2 | 37.50% / 45.00% | 728.9 (0/10) |

Per-run cognition results and all adverse cases:

| Map / seed | NN m | Under 2 m | Exposure s | FF hits | Shots | Adverse vs candidate90 | Adverse vs previous increment |
|---|---:|---:|---:|---:|---:|---|---|
| Works / 100 | 2.000 | 49.39% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 101 | 2.000 | 49.40% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 102 | 2.000 | 49.46% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 103 | 1.994 | 50.87% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 104 | 1.994 | 50.89% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 105 | 1.994 | 50.93% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 106 | 1.994 | 50.89% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 107 | 1.994 | 50.86% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 108 | 1.994 | 50.92% | 0.000 | 0 | 0 | zero shots | zero shots |
| Works / 109 | 1.994 | 50.96% | 0.000 | 0 | 0 | zero shots | zero shots |
| Trenches / 100 | 1.340 | 68.24% | 1.759 | 9 | 310 | NN↓, <2↑, hits↑, hit rate↑, Ember loss↑ | NN↓, <2↑, hits↑, hit rate↑, Ember loss↑ |
| Trenches / 101 | 1.462 | 70.66% | 2.016 | 20 | 848 | NN↓, <2↑, RMS↓, hits↑, hit rate↑, Ember loss↑ | NN↓, <2↑, RMS↓, hits↑, hit rate↑, Ember loss↑ |
| Trenches / 102 | 1.514 | 70.23% | 4.275 | 23 | 967 | <2↑, RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | <2↑, RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 103 | 1.536 | 61.93% | 6.159 | 21 | 673 | RMS↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | RMS↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 104 | 1.532 | 64.85% | 2.544 | 23 | 797 | NN↓, <2↑, RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | NN↓, <2↑, RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 105 | 1.767 | 53.76% | 2.494 | 20 | 416 | RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 106 | 1.510 | 62.55% | 1.513 | 11 | 360 | RMS↓, centroid↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | RMS↓, centroid↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 107 | 1.907 | 52.91% | 10.969 | 24 | 689 | RMS↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | RMS↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 108 | 1.813 | 53.41% | 5.206 | 16 | 938 | RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ | RMS↓, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 109 | 1.729 | 58.58% | 14.159 | 28 | 1291 | RMS↓, exposure↑, hits↑, hit rate↑, Ember loss↑ | RMS↓, exposure↑, hits↑, hit rate↑, Ember loss↑ |

### Increment 2: Observed-friendly occupancy for typed and emergency tasks

| Map | Controller | NN median m | Under 2 m | RMS radius m | Centroid median m | Under 10 m |
|---|---|---:|---:|---:|---:|---:|
| Works | legacy | 6.539 | 16.44% | 15.162 | 33.493 | 4.15% |
| Works | hotfix | 2.191 | 43.75% | 9.496 | 45.769 | 0.00% |
| Trenches | legacy | 3.946 | 31.28% | 14.391 | 8.486 | 60.27% |
| Trenches | hotfix | 2.607 | 39.90% | 10.459 | 18.613 | 0.00% |

| Map | Controller | Exposure s/soldier | FF hits (per 100 soldier-min) | Azure/draw/Ember | Azure / Ember loss | Mean shots (zero-shot runs) |
|---|---|---:|---:|---|---|---:|
| Works | legacy | 4.687 | 109 (3.9900) | 2 / 3 / 5 | 61.88% / 56.88% | 2306.5 (0/10) |
| Works | hotfix | 3.716 | 12 (0.3239) | 5 / 1 / 4 | 9.69% / 14.37% | 868.9 (0/10) |
| Trenches | legacy | 0.397 | 68 (2.3737) | 6 / 1 / 3 | 47.50% / 55.31% | 1989.3 (0/10) |
| Trenches | hotfix | 4.710 | 33 (0.9629) | 1 / 0 / 9 | 23.12% / 9.69% | 414.8 (0/10) |

Per-run cognition results and all adverse cases:

| Map / seed | NN m | Under 2 m | Exposure s | FF hits | Shots | Adverse vs candidate90 | Adverse vs previous increment |
|---|---:|---:|---:|---:|---:|---|---|
| Works / 100 | 1.973 | 50.07% | 3.328 | 0 | 883 | none by listed definitions | NN↓, <2↑, exposure↑, Azure loss↑, Ember loss↑ |
| Works / 101 | 2.181 | 41.21% | 5.622 | 0 | 750 | none by listed definitions | exposure↑, Azure loss↑, Ember loss↑ |
| Works / 102 | 2.030 | 45.43% | 2.472 | 0 | 1334 | none by listed definitions | exposure↑, Azure loss↑, Ember loss↑ |
| Works / 103 | 2.280 | 35.86% | 2.437 | 0 | 492 | none by listed definitions | centroid↓, exposure↑, Azure loss↑, Ember loss↑ |
| Works / 104 | 2.280 | 45.92% | 3.138 | 4 | 1260 | none by listed definitions | centroid↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Works / 105 | 2.014 | 47.68% | 6.575 | 2 | 783 | none by listed definitions | centroid↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Works / 106 | 2.280 | 42.02% | 3.203 | 2 | 820 | none by listed definitions | exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Works / 107 | 2.500 | 40.97% | 3.903 | 0 | 771 | none by listed definitions | centroid↓, exposure↑, Azure loss↑, Ember loss↑ |
| Works / 108 | 2.246 | 42.45% | 2.500 | 2 | 813 | none by listed definitions | centroid↓, exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Works / 109 | 2.124 | 45.84% | 3.984 | 2 | 783 | none by listed definitions | exposure↑, hits↑, hit rate↑, Azure loss↑, Ember loss↑ |
| Trenches / 100 | 2.740 | 38.33% | 5.387 | 3 | 621 | exposure↑, Azure loss↑ | exposure↑, Azure loss↑ |
| Trenches / 101 | 2.790 | 39.70% | 4.359 | 3 | 349 | Ember loss↑ | exposure↑ |
| Trenches / 102 | 2.765 | 36.69% | 5.897 | 4 | 427 | none by listed definitions | exposure↑ |
| Trenches / 103 | 2.418 | 45.47% | 4.897 | 2 | 313 | exposure↑, Azure loss↑ | centroid↓ |
| Trenches / 104 | 2.418 | 45.09% | 2.366 | 5 | 479 | none by listed definitions | none by listed definitions |
| Trenches / 105 | 2.025 | 44.00% | 5.606 | 5 | 524 | exposure↑, Azure loss↑ | centroid↓, exposure↑ |
| Trenches / 106 | 2.776 | 40.83% | 8.528 | 4 | 365 | centroid↓ | centroid↓, exposure↑ |
| Trenches / 107 | 2.496 | 38.23% | 4.694 | 0 | 193 | exposure↑ | none by listed definitions |
| Trenches / 108 | 2.624 | 38.35% | 3.862 | 3 | 404 | Azure loss↑ | none by listed definitions |
| Trenches / 109 | 3.016 | 32.32% | 1.500 | 4 | 473 | RMS↓ | none by listed definitions |

### Increment 3: Dispersed objective and covering assignments (corrected objective anchor)

| Map | Controller | NN median m | Under 2 m | RMS radius m | Centroid median m | Under 10 m |
|---|---|---:|---:|---:|---:|---:|
| Works | legacy | 6.539 | 16.44% | 15.162 | 33.493 | 4.15% |
| Works | hotfix | 3.453 | 2.03% | 11.090 | 43.466 | 0.00% |
| Trenches | legacy | 3.946 | 31.28% | 14.391 | 8.486 | 60.27% |
| Trenches | hotfix | 1.364 | 64.75% | 13.155 | 14.488 | 0.00% |

| Map | Controller | Exposure s/soldier | FF hits (per 100 soldier-min) | Azure/draw/Ember | Azure / Ember loss | Mean shots (zero-shot runs) |
|---|---|---:|---:|---|---|---:|
| Works | legacy | 4.687 | 109 (3.9900) | 2 / 3 / 5 | 61.88% / 56.88% | 2306.5 (0/10) |
| Works | hotfix | 0.000 | 0 (0.0000) | 0 / 10 / 0 | 0.00% / 0.00% | 0.0 (10/10) |
| Trenches | legacy | 0.397 | 68 (2.3737) | 6 / 1 / 3 | 47.50% / 55.31% | 1989.3 (0/10) |
| Trenches | hotfix | 0.149 | 0 (0.0000) | 0 / 10 / 0 | 0.00% / 0.00% | 0.9 (7/10) |

Per-run cognition results and all adverse cases:

| Map / seed | NN m | Under 2 m | Exposure s | FF hits | Shots | Adverse vs candidate90 | Adverse vs previous increment |
|---|---:|---:|---:|---:|---:|---|---|
| Works / 100 | 3.500 | 0.70% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 101 | 3.300 | 6.77% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 102 | 3.228 | 6.80% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 103 | 3.500 | 0.86% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 104 | 3.500 | 0.86% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 105 | 3.500 | 0.84% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 106 | 3.500 | 0.93% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 107 | 3.500 | 0.93% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 108 | 3.500 | 0.80% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Works / 109 | 3.500 | 0.81% | 0.000 | 0 | 0 | zero shots | centroid↓, zero shots |
| Trenches / 100 | 1.361 | 63.23% | 0.309 | 0 | 4 | NN↓ | NN↓, <2↑, centroid↓ |
| Trenches / 101 | 1.361 | 63.21% | 0.309 | 0 | 4 | NN↓ | NN↓, <2↑, centroid↓ |
| Trenches / 102 | 1.323 | 63.20% | 0.209 | 0 | 1 | NN↓ | NN↓, <2↑, centroid↓ |
| Trenches / 103 | 1.347 | 64.78% | 0.066 | 0 | 0 | NN↓, zero shots | NN↓, <2↑, zero shots |
| Trenches / 104 | 1.347 | 65.53% | 0.066 | 0 | 0 | NN↓, <2↑, zero shots | NN↓, <2↑, centroid↓, zero shots |
| Trenches / 105 | 1.337 | 64.16% | 0.084 | 0 | 0 | NN↓, <2↑, zero shots | NN↓, <2↑, zero shots |
| Trenches / 106 | 1.308 | 65.71% | 0.084 | 0 | 0 | <2↑, centroid↓, zero shots | NN↓, <2↑, zero shots |
| Trenches / 107 | 1.308 | 67.26% | 0.084 | 0 | 0 | NN↓, <2↑, zero shots | NN↓, <2↑, centroid↓, zero shots |
| Trenches / 108 | 1.486 | 66.37% | 0.184 | 0 | 0 | zero shots | NN↓, <2↑, centroid↓, zero shots |
| Trenches / 109 | 1.458 | 64.08% | 0.091 | 0 | 0 | NN↓, zero shots | NN↓, <2↑, centroid↓, zero shots |

### Increment 4: Reserve/consolidate goals inside the squad’s reported sector

| Map | Controller | NN median m | Under 2 m | RMS radius m | Centroid median m | Under 10 m |
|---|---|---:|---:|---:|---:|---:|
| Works | legacy | 6.539 | 16.44% | 15.162 | 33.493 | 4.15% |
| Works | hotfix | 3.453 | 2.03% | 11.090 | 43.466 | 0.00% |
| Trenches | legacy | 3.946 | 31.28% | 14.391 | 8.486 | 60.27% |
| Trenches | hotfix | 1.364 | 64.75% | 13.155 | 14.488 | 0.00% |

| Map | Controller | Exposure s/soldier | FF hits (per 100 soldier-min) | Azure/draw/Ember | Azure / Ember loss | Mean shots (zero-shot runs) |
|---|---|---:|---:|---|---|---:|
| Works | legacy | 4.687 | 109 (3.9900) | 2 / 3 / 5 | 61.88% / 56.88% | 2306.5 (0/10) |
| Works | hotfix | 0.000 | 0 (0.0000) | 0 / 10 / 0 | 0.00% / 0.00% | 0.0 (10/10) |
| Trenches | legacy | 0.397 | 68 (2.3737) | 6 / 1 / 3 | 47.50% / 55.31% | 1989.3 (0/10) |
| Trenches | hotfix | 0.149 | 0 (0.0000) | 0 / 10 / 0 | 0.00% / 0.00% | 0.9 (7/10) |

Per-run cognition results and all adverse cases:

| Map / seed | NN m | Under 2 m | Exposure s | FF hits | Shots | Adverse vs candidate90 | Adverse vs previous increment |
|---|---:|---:|---:|---:|---:|---|---|
| Works / 100 | 3.500 | 0.70% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 101 | 3.300 | 6.77% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 102 | 3.228 | 6.80% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 103 | 3.500 | 0.86% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 104 | 3.500 | 0.86% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 105 | 3.500 | 0.84% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 106 | 3.500 | 0.93% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 107 | 3.500 | 0.93% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 108 | 3.500 | 0.80% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Works / 109 | 3.500 | 0.81% | 0.000 | 0 | 0 | zero shots | none by listed definitions |
| Trenches / 100 | 1.361 | 63.23% | 0.309 | 0 | 4 | NN↓ | none by listed definitions |
| Trenches / 101 | 1.361 | 63.21% | 0.309 | 0 | 4 | NN↓ | none by listed definitions |
| Trenches / 102 | 1.323 | 63.20% | 0.209 | 0 | 1 | NN↓ | none by listed definitions |
| Trenches / 103 | 1.347 | 64.78% | 0.066 | 0 | 0 | NN↓, zero shots | none by listed definitions |
| Trenches / 104 | 1.347 | 65.53% | 0.066 | 0 | 0 | NN↓, <2↑, zero shots | none by listed definitions |
| Trenches / 105 | 1.337 | 64.16% | 0.084 | 0 | 0 | NN↓, <2↑, zero shots | none by listed definitions |
| Trenches / 106 | 1.308 | 65.71% | 0.084 | 0 | 0 | <2↑, centroid↓, zero shots | none by listed definitions |
| Trenches / 107 | 1.308 | 67.26% | 0.084 | 0 | 0 | NN↓, <2↑, zero shots | none by listed definitions |
| Trenches / 108 | 1.486 | 66.37% | 0.184 | 0 | 0 | zero shots | none by listed definitions |
| Trenches / 109 | 1.458 | 64.08% | 0.091 | 0 | 0 | NN↓, zero shots | none by listed definitions |

## Exit assessment and concrete concerns

| Map | Final NN / legacy target | Final under-2 m / legacy target | Spatial exit |
|---|---:|---:|---|
| Works | 3.453 / ≥6.539 m | 2.03% / ≤16.44% | FAIL |
| Trenches | 1.364 / ≥3.946 m | 64.75% / ≤31.28% | FAIL |

**No-engagement runs are adverse outcomes, not successful fire discipline.** Increment 1 produced zero shots in all ten Works runs. In its traced seed 107, all eight missions were initialized at x = ±80 m in their own lanes; all eight completed between 30.1 and 33.7 s, and no higher directive resumed the search. Evidence: `.local/phase0b/retained-mission-evidence.json` and the archived trace. This is a direct counterexample to treating a retained first search leg as a sufficient whole-battle mission.

**The corrected covering rule remains restrictive.** The report preserves explicit method_covering_unavailable traces, rather than inventing protection or leaving covering members behind. Final traced seed 107 has 41 unavailable covering queries / 13 blocked-method events on Works, and 98 unavailable queries / 20 blocked events in Trenches (`covering-feasibility-evidence.json`). These are event counts, not independent battle failures. Its impact must be judged together with zero/near-zero shooting and the old cognition-contract failures. The new slot and transport pins passing does not establish useful tactical execution.

## Frozen regression disclosure

| Set | Layout 5 | Layout 6 | Layout 7 | Total |
|---|---:|---:|---:|---:|
| Nine | 0 | 0 | 0 | 0/9 |
| Thirty | 0 | 0 | 0 | 0/30 |

Candidate90’s reference is 8/9 and 28/30. The final hotfix’s exact failed cases and route evidence are retained in `final-frozen-nine/acceptance.json` and `final-frozen-thirty/acceptance.json`. Every case ran. These scores were disclosed, not used for seed-specific changes or promotion gates. Seeds 2001–2010 were not opened.

`tools/run_ai_acceptance.py --regression-only` is additive: evaluator/hash/seeds/duration and computed passed=false remain intact. Only the historical prerequisite/refusal and nonzero score exit are bypassed when the user explicitly selects disclosure mode. Without that option, the previous gate behaviour remains: the same final build and failed-nine input were checked and correctly refused with exit 2 (`default-gate-refusal.log`). This was necessary to run the thirty honestly after a failing nine without forging a passing result.

## Disagreements, corrections, and incomplete items

1. **Mission retention needs an architectural resolution.** Retaining the first own-side lane leg until a higher order is insufficient in this controller: no contact can mean no higher order. I followed the explicit retention resolution, but disagree with it as a complete search lifecycle on the observed evidence. Next proposal: allow completion-driven progression to the next search leg, with a new stable intent only after actual completion receipts, or make the parent mission span the sweep. Do not select a special destination for a seed. This change was not silently introduced in the hotfix.
2. **Protected covering feasibility needs a whole-battle solution.** The mandatory band can have insufficient protected, reachable slots. I block and report that failure rather than manufacture cover or drop members. A doctrine-level continuation/fallback must be resolved before this can be a usable main-build hotfix. The final source is therefore left unpromoted for review.
3. **Implementation correction, not a plan disagreement:** the stage/objective anchor error is corrected and both affected increments were rerun. Superseded data remains discoverable.
4. **Existing cognition contract compatibility is incomplete.** Three optional existing suites regress from passing candidate90 results. Their assertions remain intact; they must be reconciled with the new allocation/feasibility behavior before promotion.
5. **Windows/native/replay verification is incomplete** because the configured build mirror is read-only. No workaround, extra installation, billing change or Fable invocation was used. The user’s replay review has not occurred.
6. **Numerical correction to the review:** Phase 0 exposure was about 1.8× legacy on Works (8.437/4.687), but about 15.8× in Trenches (6.257/0.397), not roughly double on both maps. This report uses the measured values.

## Commands and reproducibility

Commands were run from `/home/jchan/ww1-autobattler`. Full per-battle argument arrays are in each increment’s `commands.json`; process exit codes and output are in `runs.json`.

```bash
python3 tools/source_id.py
./scripts/test-sim.sh --crowding  # per increment, with archived test/source snapshots
# CLI build/run repeated for each named increment; logs retain the build outputs.
./scripts/battle-lab.sh --seconds 1 --out .local/phase0b/increment4-objective-band-build
python3 .local/phase0b/run_increment.py increment1
python3 .local/phase0b/run_increment.py increment2
python3 .local/phase0b/run_increment.py increment3-objective-band
python3 .local/phase0b/run_increment.py increment4-objective-band
# Each runner executes both controllers, --terrain 0/1, seeds 100..109:
# --seconds 360 --evaluate --no-trace, followed by both Phase 0 metric tools.
# Concrete final-Works metric commands (also run for Trenches and each increment):
python3 tools/measure_dispersion.py .local/phase0b/increment4-objective-band/legacy/works .local/phase0b/increment4-objective-band/cognition/works --out .local/phase0b/increment4-objective-band/dispersion-works.json
python3 tools/evaluate_tactics.py .local/phase0b/increment4-objective-band/legacy/works .local/phase0b/increment4-objective-band/cognition/works --out .local/phase0b/increment4-objective-band/tactics-works.json
# Corrected increment 3 is built from its archived Sim snapshot:
g++ '-DARMY_BUILD_ID="4a9deeff74877b59"' -std=c++17 -O2 -Wall -Wextra -Wpedantic -I .local/phase0b/increment3-objective-band/Sim .local/phase0b/increment3-objective-band/Sim/*.cpp tools/battle_cli.cpp -o .local/phase0b/increment3-objective-band/battle-lab
# Its assert executable uses that same snapshot and its archived tests/sim_tests.cpp.
.local/phase0b/increment3-objective-band/sim_tests --crowding
./scripts/test-sim.sh
python3 tools/check_foundations_parity.py --baseline .local/phase0b/original/legacy-battle-lab --candidate .local/phase0b/increment4-objective-band/battle-lab --out .local/phase0b/final-legacy-parity
python3 .local/phase0b/check_trace_parity.py 1 2 3  # 3 here is the superseded attempt; final 3 below
python3 .local/phase0b/check_trace_parity.py 3-objective-band
python3 .local/phase0b/check_trace_parity.py 4-objective-band --all-seeds
python3 tools/run_ai_acceptance.py --binary .local/phase0b/increment4-objective-band/battle-lab --regression-only --out .local/phase0b/final-frozen-nine
python3 tools/run_ai_acceptance.py --binary .local/phase0b/increment4-objective-band/battle-lab --regression-only --held-out --development-results .local/phase0b/final-frozen-nine/acceptance.json --out .local/phase0b/final-frozen-thirty
./scripts/build-lab-windows.sh
./scripts/test-sim-windows.sh
python3 -m unittest discover -s tests -p 'test_*.py'
git diff --check
python3 tools/source_id.py
```

Additional optional suites were run as `.local/tests/sim_tests --cognition`, `--decision-loop`, and `--reliability`, and the same flags against `.local/phase0b/original/sim_tests` rebuilt from the preserved source. Exact return codes are in the suite JSON files.

The 14 implementation/test/tool files attributable to this slice, rather than earlier uncommitted work, are recorded in `.local/phase0b/changed-files.json` and `.local/phase0b/changes.patch`. AGENTS.md and CLAUDE.md also received the status/link paragraph described above. Source snapshots, binaries, per-phase metrics, raw exports, build/test logs and superseded results remain under `.local/phase0b/`. The accepted Phase 0 definitions remain unchanged. **Stop point: report and review; no Phase 1 implementation.**
