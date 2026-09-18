# Plan 014 Phase 2c report — Astra, 17 September 2026

**Exit NOT MET; do not promote.** One fixed tactical build was measured. Five of six mechanism pairs pass; D05's weak-group report now passes, but its capable control fails on a stage deadline. No tactical change followed the measured results. Legacy remains the playable default and candidate90 remains explicitly selectable. No Phase 3 drills, platoon task tree or F2/F3 work started.

## Fingerprints and provenance

Entry: **`d80bca688ebe67ad`**. Measured and final simulation: **`26e028623123f46e`** (`-linux` binary suffix). Read first: the attributed [Phase 2b Fable review](../../plans/014-phase2b-fable-review.md). It accepts the surrounding foundation and requires lifecycle correction; it does not approve this build.

Entry/final simulation trees, the frozen mechanism header and final executables are in `.local/phase2c/{entry,final}/`. A premeasurement lifecycle-only test build preceded the final build; the final change after that pin added transition-stage diagnostic fields, not a second tactical policy. The distribution pass used only `26e028623123f46e`. Source and mechanism tests were not revised after measurements began.

No commit, reset, stash, Fable launcher, Windows or Unreal invocation. Existing work and protected files remain intact. Native verification stays with the architect. No new validation seeds were opened; only the specified authored100–109 and F1 development draws were used.

## Lifecycle implementation

`Unreal/Source/ArmyPrototype/Sim/DrillSim.cpp` now separates accepted stages from planning cadence:

1. **Commitment.** `DrillStage` distinguishes traveling, covering-position setup, bounds, contact cover, contact hold and Reorganise. Continued planning ticks update actor knowledge and receipt latches but leave accepted positions and generation unchanged. `drill_stage_advanced` names the transition trigger. A new contact must cross into the remembered inside100m set; contact loss requires10s unknown; effective-fire transitions require6s stable evidence; superiority transitions require8s. Platoon directives, completion, deadlines and minStrength crossings are explicit triggers. Slot repair is the geometry/known-uncertainty exception expressly allowed by rule2. There is no timed position-query refresh.
2. **Stationary elements.** `DrillOrders` returns only the stage's `issue` recipients. The command pipeline no longer receives reconstructed orders for every member on every planning tick. Unselected members retain slots, task IDs and execution contracts. Bounds use Overwatch/Occupy, so reaching a bound endpoint leaves a useful firing order without a second halt order. Slot repair selects only invalidated members.
3. **Bounds.** Initial cover setup occurs once; subsequent bound completion swaps the moving element and issues one order set to it. PositionSim has an explicit35m hard bound radius about the remembered overwatch centre, applied to both shelter and peek. No orders are issued to the stationary element during an uninterrupted bound. Existing completed-bound47m scenario limit remains unchanged.
4. **Contact stages.** Cover/return-fire positions are issued once on contact entry. Assessment occurs once per entry at3s plus leader reaction. The cover move may finish after assessment; its accepted slots remain until the arrival latch/grace or deadline resolves. The decision then holds existing cover or resumes bounding closure under the standing70m/superiority ruling. A material contact/fire change may re-enter the contact stage through the stated hysteresis rules. No-contact-cover emergency rearward response stays the existing Phase2 basic branch, not a Phase3 BreakContact implementation.
5. **Elements.** Deployment assigns the roster once, including its pre-existing vacant slots. New drill acceptance inherits membership. Only the named `Reorganise` function reassigns survivors, after a completed/failed drill or minStrength crossing. Initial gun-group weakness therefore remains visible to contact assessment and platoon reporting. No gun recovery, new succession system or Phase3 reorganisation drill was added.
6. **Arrivals.** Each member's matching task ID, method and order generation latches a Done receipt. At least half of the required moving members starts a3s grace; all arrivals or expiry of that grace consumes completion once. Subsequent heartbeat/interrupt status changes cannot revoke or repeatedly consume the stage arrival. Per-member order identity permits stationary orders to span later stage generations.

`BattleSim.h` stores the stage, latches and hysteresis state; `Diagnostics.cpp` hashes them only in the drills conditional block. Evaluation adds stage/generation/moving-element/arrival-latch fields. Exported element roles now follow the recorded stage's mover mask: a member retaining an old order can become the covering element without receiving a new order just for diagnostic relabeling. These are observer exports, never policy inputs.

The D01 formation correction is separate and explicit: the prior diagonally overlapping element wedges had5.1m nearest-member intervals in their ideal geometry. The same wedges now use centres18m apart along the route; column elements use successive4m slots. This is a general projection correction, not a fixture/seed rule. The6–14m/80% assertion was not changed. PositionSim's bound-radius rejection has a unit pin on the authored layouts.

## Mechanisms and structural pin

No fixture, paired control or existing behavioural assertion was relaxed. D01–D05/D17 use production sensing, ballistics, command transport and receipt delivery; no receipt injection. Every pair runs in an independent assert process so D05's abort does not hide the rest.

| Pair | Measured evidence | Result |
|---|---|---|
| D01 /44–45 | 1,611 traveling/open moving samples;93.4823% in6–14m; all8 arrive; corridor control contained | PASS |
| D02 /46–47 | Report-only contact;30–50m element separation; protected trail; no-report control travels and stays close | PASS |
| D03 /48–49 | Alternation and continuous protected-overwatch predicate pass; maximum completed-bound element separation43.3757m; no early far-control bounding | PASS |
| D04 /50–51 | First fire receipt2.2s;7 return shooters within4s; cover/path bound, slot spacing and assessment pass; bare rearward control passes | PASS |
| D05 /52–53 | Weak gun group preserved; Blocked/Support received after3.9s, within4s. Capable case assesses support but later enters blocked state | **FAIL**, capable-control assertion |
| D17 /54–55 | Independent query proves8 valid protected slots; scarce occupies5, ample8; spacing passes | PASS |
| New lifecycle pin /44,48,53,55 | 772 continue samples preserve generation/positions;1,152 retained-overwatch samples;1,039 latched-receipt samples; all issued squad orders have a transition on their issuance tick; membership changes require Reorganise | PASS |
| Position service /authored0,5,6,7 | Reservation, area, hard bound-radius rejection and organisation templates | PASS |

D05 diagnosis comes from the fixed build's traced encounter52, not inference from the aggregate result: support assessments at7.60s and12.15s; closure at14.95s; superiority transition19.45s; effective-fire end23.20s; **stage deadline30.95s sets blocked**, then Reorganise31.95s. A second deadline occurs47.70s. The old silent gun-group refill is fixed, but the capable control still cannot sustain its bound contract. The existing assertion `support && !blocked` remains. No policy repair or retuned fixture followed the measurement. Evidence: `.local/phase2c/fixture-diagnostics/D05-capable/` and `mechanisms/D05.log`.

## Commands

All per-run argv and exits are preserved under `.local/phase2c/`: `measurement-status.json`, authored `results.json`, family `family.json`, authored/candidate trace `parity.json`, and `trace-parity.json`.

```sh
python3 tools/source_id.py
./scripts/test-sim.sh --drills lifecycle
./scripts/battle-lab.sh --version
./scripts/test-sim.sh
python3 .local/phase2c/run_mechanisms.py
python3 -m unittest discover -s tests -p 'test_*.py'
python3 .local/phase2c/measure.py
python3 .local/phase2c/trace_checks.py
python3 .local/phase2c/analyze.py
python3 tools/report_family.py .local/phase2c/f1-baselines-enriched.json .local/phase2c/f1-drills-enriched.json --out .local/phase2c/f1-report.json --markdown .local/phase2c/f1-report.md
git diff --check
python3 tools/source_id.py
```

`measure.py` executes these fixed-binary jobs:

```sh
python3 .local/phase2c/run_authored.py
python3 .local/phase2c/parity.py .local/phase2c/authored-parity .local/phase2c/final/battle-lab
python3 tools/run_family.py --binary .local/phase2c/final/battle-lab --out .local/phase2c/f1-dev --family F1 --gen-seeds 1-30 --seeds 107-109 --controllers drills --seconds 360 --jobs 2 --trace
python3 .local/phase2c/candidate_traces.py
python3 tests/check_controller_defaults.py --binary .local/phase2c/final/battle-lab --out .local/phase2c/defaults
```

Authored drills use `--drills --terrain 0|1 --seed 100..109 --seconds360 --evaluate` with tracing enabled. Forty historical parity runs use explicit legacy/cognition, both maps and100–109,360s, `--no-trace --evaluate`. Candidate traces reproduce20 authored and90 F1 candidate90 configurations with trace enabled, comparing each digest with its preserved untraced baseline before using order rates. Baseline metric values remain the original measured values; identical-digest exports supply diagnostics. Drills trace parity repeats Works/Trenches107 and F1 gen1/seed107 with trace disabled against the traced distribution records. The only extra diagnostic battle is the fixed-build D05 capable fixture above.

## Metric definitions

The Phase2 corrected definitions stand. **S**: shots >=candidate90; **C**: total initial-active minus final-active casualties across both teams >=candidate90; **N**: median nearest squadmate >=3m; **U**: under2m share <=legacy. **F120/F240**: Azure attacking-platoon closure >=candidate90 on Works/F1. Closure reproduces `evaluate_ai.py`'s per-squad median paired displacement of surviving initial members, then averages surviving Azure squads, exactly as disclosed in Phase2b. All squad and both platoon series are retained. Missing horizons are NA, not passes; no forward-fill or interpolation after battle end. Trenches closure is disclosed but not gated. Per-side casualty fractions remain visible.

New **O**: Azure soldier orders issued per actual battle minute <=candidate90 on the same map/draw and battle seed. Trace count is `kind == order_issued`, recipient and issuer both Azure. It includes orders to NCOs and self-orders, excludes deliveries, reports and platoon directives. Both teams' rates are disclosed. `EventKind::OrderIssued` also carries platoon directives, so `tools/order_metrics.py` selects the soldier writer's distinct event text and **requires equality with trace counts on traced runs**. This equality is checked for all measured drills runs and all110 candidate traces. Unit tests cover actual duration, both teams, issued-versus-received, directive exclusion, missing trace and mismatch rejection. Full-precision values determine pass/fail; displayed values are rounded.

Hits per soldier-minute are diagnostic, using hit rounds from `shots.jsonl` divided by integrated active soldier-minutes across both teams. Friendly hits are included, as in Phase2b. It is not a gate and is not an actor input. `enriched-runs.json` and per-run diagnostic JSON retain exact counts and denominators; the family report supplies cluster-bootstrap distributions and paired deltas.

## Verification results

| Check | Result | Evidence under `.local/phase2c/` |
|---|---|---|
| Final CLI build/version | PASS, `26e028623123f46e-linux` | `cli-build.log`, `final/battle-lab` |
| Full `./scripts/test-sim.sh` | PASS, exit0, 238.741s | `full-suite.log`, `full-suite.exit` |
| Python tests | 52 PASS | `python-tests.log` |
| Controller defaults and manifest reruns | PASS; legacy remains default | `defaults.log`, `measurement-status.json` |
| Existing authored legacy/cognition digests | **40/40 unchanged** | `authored-parity/parity.json` |
| Traced candidate90 vs untraced preserved baseline | **110/110 unchanged**:20 authored +90 F1 | `candidate-traces/parity.json` |
| Candidate90 trace/event soldier-order counts | **110/110 exact agreement**; also match original untraced event counts | `candidate-traces/parity.json`, `enriched-runs.json` |
| Drills trace parity | **3/3 exact matches**, Works/Trenches107 and F1 gen1/seed107 | `trace-parity.json` |
| Mechanism pairs | **5 PASS /1 FAIL**; D05 capable control fails | `mechanisms/results.json` |
| Lifecycle, position service, short plumbing | PASS | `mechanisms/lifecycle.log`, `positions.log`, `plumbing.log` |
| Measured drills trace/event order counts | **110/110 agree** | `diagnostics/drills-*.json` |
| Authored/F1 execution | 20/20 and90/90 complete | `authored/results.json`, `f1-dev/family.json` |
| Engagement guard | Enabled, three zero-shot runs per ten-run block; no aborts or zero-shot blocks | `authored/*-guard.json`, `f1-dev/family.json` |
| Protected files, unchanged measured source/header, diff check | PASS | `protected.json`, `static-checks.json`, `diff-check.log` |
| Windows/Unreal | Not attempted; architect-owned | No native result claimed |

The full default suite does not select the optional drills pairs. Its pass does not turn D05 into a pass. Every behavioural assertion is retained.

## Corrected exit, including churn

**0/20 authored runs and0/90 F1 runs pass all applicable criteria.** The mechanism failure independently prevents acceptance. No engagement-guard abort truncated either distribution. Total casualties fail on every authored run. All Works runs fail both closure horizons and churn. All Trenches runs pass churn but fail both dispersion criteria and casualties.

| Set | S shots | C casualties | N median | U under2m | F120 | F240 | O orders/min | All applicable |
|---|---:|---:|---:|---:|---:|---:|---:|---:|
| works | 1/10 | 0/10 | 10/10 | 10/10 | 0/10 | 0/10 | 0/10 | 0/10 |
| trenches | 1/10 | 0/10 | 0/10 | 0/10 | not gated | not gated | 10/10 | 0/10 |
| F1 | 78/90 | 55/90 | 90/90 | 90/90 | 16/90 | 9/90 | 4/90 | 0/90 |

The following means are per-run means. Closure shows available n because early termination can remove a horizon. Family distributions and paired95% CIs (2000 generated-map-cluster resamples) are in [the full family report](../phase2c/f1-report.md) and its JSON. The mean of hit rates here differs slightly from pooled hits / pooled soldier-time; both raw denominators are retained.

| Map/family | Controller | Shots | Total casualties | NN m | Under2m % | Azure orders/min | Hits/soldier-min | Closure120 m (n) | Closure240 m (n) |
|---|---|---:|---:|---:|---:|---:|---:|---:|---:|
| works | legacy | 2306.5 | 38.00 | 6.54 | 16.4 | 210.15 | 0.468 | 94.7 (10) | 91.3 (10) |
| works | candidate90 | 988.4 | 38.80 | 0.98 | 79.7 | 64.33 | 0.502 | 108.8 (10) | 109.4 (10) |
| works | drills | 787.0 | 16.20 | 4.75 | 4.4 | 184.00 | 0.166 | 73.0 (10) | 80.1 (10) |
| trenches | legacy | 1989.3 | 32.90 | 3.95 | 31.3 | 255.38 | 0.410 | 35.7 (10) | 37.1 (10) |
| trenches | candidate90 | 798.9 | 16.60 | 1.45 | 66.5 | 611.03 | 0.176 | 39.7 (10) | 35.9 (10) |
| trenches | drills | 375.4 | 8.40 | 1.80 | 57.0 | 216.10 | 0.098 | 14.2 (10) | 13.2 (10) |
| F1 | legacy | 718.2 | 15.77 | 5.10 | 13.6 | 127.52 | 0.496 | 53.5 (90) | 54.1 (82) |
| F1 | candidate90 | 450.5 | 12.99 | 3.11 | 38.4 | 39.85 | 0.452 | 48.8 (85) | 48.8 (81) |
| F1 | drills | 754.2 | 14.38 | 7.42 | 2.6 | 90.67 | 0.491 | 30.2 (86) | 18.1 (65) |

F1 unavailable120/240s closure horizons: legacy 0/8; candidate90 5/9; drills 4/25; these remain NA and cannot pass the corresponding comparison. The authored runs have all horizons, so unavailable data do not explain their failure.

### Authored maps, all20 runs

D/C/L mean drills/candidate90/legacy. The final column lists every adverse criterion, including O. Churn's exact D/C values are in the order/hit table below.

| Map / seed | Shots D/C | Casualties D/C | D casualty % A/E | NN m | <2m % D/L | Closure120 D/C m | Closure240 D/C m | Adverse criteria |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| trenches / 100 | 450/598 | 6/11 | 6.2/12.5 | 1.61 | 60.3/28.5 | 12.2/42.1 | 12.0/41.2 | S,C,N,U |
| trenches / 101 | 332/1342 | 11/17 | 15.6/18.8 | 1.61 | 58.3/33.4 | 13.4/37.7 | 12.2/27.9 | S,C,N,U |
| trenches / 102 | 303/1179 | 11/23 | 21.9/12.5 | 1.61 | 58.4/39.5 | 12.4/32.2 | 11.6/36.5 | S,C,N,U |
| trenches / 103 | 447/511 | 9/14 | 15.6/12.5 | 1.79 | 60.3/30.4 | 11.5/41.6 | 13.1/33.4 | S,C,N,U |
| trenches / 104 | 294/817 | 7/18 | 6.2/15.6 | 1.98 | 53.5/40.3 | 17.3/39.9 | 14.1/34.4 | S,C,N,U |
| trenches / 105 | 474/558 | 9/15 | 9.4/18.8 | 1.85 | 54.5/27.8 | 16.9/40.5 | 13.7/32.0 | S,C,N,U |
| trenches / 106 | 129/552 | 3/13 | 3.1/6.2 | 1.98 | 54.8/27.0 | 13.8/43.7 | 13.8/36.9 | S,C,N,U |
| trenches / 107 | 573/655 | 11/15 | 9.4/25.0 | 1.85 | 55.8/28.8 | 15.2/39.9 | 13.3/39.2 | S,C,N,U |
| trenches / 108 | 395/385 | 7/10 | 0.0/21.9 | 1.85 | 57.2/30.5 | 16.1/41.7 | 16.4/37.2 | C,N,U |
| trenches / 109 | 357/1392 | 10/30 | 9.4/21.9 | 1.85 | 56.6/26.7 | 13.2/37.7 | 12.3/40.5 | S,C,N,U |
| works / 100 | 680/839 | 10/37 | 25.0/6.2 | 4.22 | 5.0/16.2 | 73.0/108.4 | 74.7/106.8 | O,S,C,F120,F240 |
| works / 101 | 891/1038 | 14/41 | 28.1/15.6 | 4.79 | 4.1/23.5 | 73.0/108.3 | 78.2/106.4 | O,S,C,F120,F240 |
| works / 102 | 901/965 | 18/45 | 21.9/34.4 | 4.55 | 4.8/16.5 | 73.0/106.2 | 80.7/118.0 | O,S,C,F120,F240 |
| works / 103 | 482/1272 | 14/42 | 18.8/25.0 | 4.26 | 3.7/19.2 | 73.0/112.3 | 78.8/104.8 | O,S,C,F120,F240 |
| works / 104 | 847/1067 | 18/41 | 34.4/21.9 | 5.20 | 3.0/14.2 | 73.0/110.5 | 79.7/109.7 | O,S,C,F120,F240 |
| works / 105 | 817/1003 | 21/34 | 28.1/37.5 | 4.57 | 4.5/13.3 | 73.0/109.4 | 85.5/109.6 | O,S,C,F120,F240 |
| works / 106 | 784/973 | 15/40 | 28.1/18.8 | 5.08 | 3.5/16.5 | 73.0/108.8 | 80.2/109.9 | O,S,C,F120,F240 |
| works / 107 | 873/1197 | 22/41 | 31.2/37.5 | 4.89 | 5.0/12.5 | 73.0/109.8 | 84.1/109.6 | O,S,C,F120,F240 |
| works / 108 | 807/841 | 15/39 | 18.8/28.1 | 5.47 | 5.4/17.3 | 73.0/107.3 | 80.1/110.6 | O,S,C,F120,F240 |
| works / 109 | 788/689 | 15/28 | 21.9/25.0 | 4.48 | 5.2/15.1 | 73.0/107.1 | 79.4/108.1 | O,C,F120,F240 |

### F1 development, all90 runs

| Gen / seed | Shots D/C | Casualties D/C | D casualty % A/E | NN m | <2m % D/L | Closure120 D/C m | Closure240 D/C m | Adverse criteria |
|---|---:|---:|---:|---:|---:|---:|---:|---|
| 1 / 107 | 1054/466 | 21/14 | 83.3/8.3 | 7.90 | 1.3/11.1 | 62.7/71.0 | 69.6/73.1 | O,F120,F240 |
| 1 / 108 | 1227/411 | 20/12 | 79.2/8.3 | 7.45 | 1.6/13.2 | 62.1/61.4 | 74.6/74.4 | O |
| 1 / 109 | 866/512 | 24/11 | 87.5/25.0 | 9.04 | 1.2/10.2 | 64.5/69.3 | 60.7/70.6 | O,F120,F240 |
| 2 / 107 | 460/205 | 12/14 | 33.3/100.0 | 6.25 | 3.7/26.0 | 3.5/NA | NA/NA | O,C,F120,F240 |
| 2 / 108 | 352/247 | 8/16 | 29.2/25.0 | 6.38 | 2.3/26.8 | -22.7/58.1 | -34.4/NA | O,C,F120,F240 |
| 2 / 109 | 147/132 | 5/8 | 12.5/50.0 | 7.29 | 2.4/26.0 | -14.4/NA | -46.6/NA | O,C,F120,F240 |
| 3 / 107 | 458/421 | 17/11 | 45.8/100.0 | 8.85 | 4.3/17.9 | NA/5.4 | NA/5.4 | O,F120,F240 |
| 3 / 108 | 553/581 | 14/13 | 33.3/100.0 | 8.69 | 1.7/16.9 | NA/9.0 | NA/7.8 | O,S,F120,F240 |
| 3 / 109 | 798/552 | 18/13 | 50.0/100.0 | 7.43 | 2.7/12.3 | 28.0/9.9 | NA/7.8 | O,F240 |
| 4 / 107 | 382/213 | 14/10 | 50.0/33.3 | 6.48 | 0.8/17.6 | 9.7/13.9 | -36.4/12.7 | O,F120,F240 |
| 4 / 108 | 612/262 | 14/12 | 33.3/100.0 | 9.07 | 0.8/15.8 | 24.3/17.5 | NA/12.5 | O,F240 |
| 4 / 109 | 299/172 | 12/10 | 25.0/100.0 | 9.32 | 3.4/14.7 | 3.1/7.5 | NA/4.3 | O,F120,F240 |
| 5 / 107 | 1000/806 | 17/17 | 37.5/100.0 | 6.59 | 4.8/11.9 | 63.5/68.6 | 67.7/69.2 | O,F120,F240 |
| 5 / 108 | 843/564 | 17/17 | 37.5/100.0 | 7.83 | 6.4/15.5 | 64.0/67.5 | NA/67.4 | O,F120,F240 |
| 5 / 109 | 809/644 | 20/14 | 50.0/100.0 | 7.09 | 6.4/12.8 | 57.8/68.3 | 62.1/68.1 | O,F120,F240 |
| 6 / 107 | 474/338 | 14/10 | 50.0/25.0 | 7.37 | 2.5/32.7 | 0.1/45.6 | -25.5/45.2 | O,F120,F240 |
| 6 / 108 | 851/497 | 24/18 | 75.0/75.0 | 7.95 | 2.2/16.8 | 18.9/47.1 | 19.3/46.8 | O,F120,F240 |
| 6 / 109 | 556/427 | 16/14 | 33.3/100.0 | 9.90 | 3.6/10.8 | 18.4/46.8 | NA/46.7 | O,F120,F240 |
| 7 / 107 | 386/749 | 6/7 | 0.0/100.0 | 6.29 | 1.1/15.6 | 56.0/65.3 | NA/63.8 | O,S,C,F120,F240 |
| 7 / 108 | 1549/513 | 14/8 | 56.2/83.3 | 6.38 | 1.5/11.5 | 55.1/63.0 | 52.6/64.1 | O,F120,F240 |
| 7 / 109 | 965/754 | 9/10 | 56.2/0.0 | 5.06 | 2.9/8.7 | 56.3/63.0 | 14.8/61.4 | O,C,F120,F240 |
| 8 / 107 | 318/435 | 11/11 | 62.5/10.0 | 7.45 | 1.2/13.3 | 20.7/55.0 | -52.9/55.4 | O,S,F120,F240 |
| 8 / 108 | 472/468 | 9/11 | 56.2/0.0 | 7.15 | 1.2/5.9 | 24.5/56.8 | -58.5/56.4 | O,C,F120,F240 |
| 8 / 109 | 413/381 | 10/9 | 56.2/10.0 | 7.62 | 1.3/9.3 | 35.4/57.0 | 15.0/57.0 | O,F120,F240 |
| 9 / 107 | 723/488 | 25/17 | 66.7/90.0 | 9.16 | 1.6/17.7 | 67.2/73.3 | 72.1/73.0 | F120,F240 |
| 9 / 108 | 956/396 | 19/12 | 37.5/100.0 | 6.33 | 2.9/14.4 | 64.5/74.8 | 70.0/73.5 | O,F120,F240 |
| 9 / 109 | 739/587 | 18/18 | 62.5/30.0 | 6.34 | 1.6/11.3 | 35.2/74.5 | 22.4/72.6 | O,F120,F240 |
| 10 / 107 | 163/443 | 5/14 | 31.2/0.0 | 6.00 | 1.6/9.3 | -6.4/53.8 | -10.5/49.7 | O,S,C,F120,F240 |
| 10 / 108 | 617/468 | 12/14 | 43.8/50.0 | 6.72 | 1.9/5.3 | -7.4/51.6 | 4.1/50.6 | O,C,F120,F240 |
| 10 / 109 | 217/237 | 8/11 | 50.0/0.0 | 6.00 | 1.8/15.2 | -4.1/48.2 | -0.9/48.4 | O,S,C,F120,F240 |
| 11 / 107 | 882/1189 | 11/17 | 20.8/100.0 | 9.75 | 0.5/17.9 | 43.1/56.5 | NA/60.9 | O,S,C,F120,F240 |
| 11 / 108 | 1290/1045 | 15/14 | 45.8/66.7 | 6.48 | 9.5/17.1 | 37.7/56.1 | 31.8/59.7 | O,F120,F240 |
| 11 / 109 | 1143/1216 | 14/22 | 41.7/66.7 | 6.56 | 5.0/10.5 | 33.2/57.6 | 25.3/58.1 | O,S,C,F120,F240 |
| 12 / 107 | 475/187 | 5/10 | 18.8/50.0 | 5.87 | 7.7/14.5 | 62.9/NA | 58.9/NA | O,C,F120,F240 |
| 12 / 108 | 47/706 | 1/12 | 6.2/0.0 | 6.19 | 0.4/19.0 | 14.3/67.4 | -5.2/76.6 | O,S,C,F120,F240 |
| 12 / 109 | 206/573 | 4/7 | 0.0/100.0 | 6.88 | 0.3/17.0 | 53.5/76.9 | NA/NA | O,S,C,F120,F240 |
| 13 / 107 | 1306/739 | 17/17 | 100.0/8.3 | 6.23 | 0.7/9.3 | 54.4/66.2 | 73.2/68.9 | O,F120 |
| 13 / 108 | 703/654 | 13/14 | 81.2/0.0 | 6.00 | 0.3/3.7 | 37.6/66.6 | 46.6/70.7 | C,F120,F240 |
| 13 / 109 | 1230/607 | 19/10 | 100.0/25.0 | 7.88 | 1.0/4.4 | 65.9/60.8 | NA/67.8 | O,F240 |
| 14 / 107 | 1038/592 | 18/15 | 93.8/37.5 | 4.61 | 2.4/20.9 | 56.2/64.0 | 69.3/63.8 | F120 |
| 14 / 108 | 902/411 | 13/10 | 62.5/37.5 | 5.66 | 2.5/25.7 | 48.2/65.2 | 17.5/64.7 | O,F120,F240 |
| 14 / 109 | 966/658 | 20/12 | 75.0/100.0 | 10.84 | 2.0/18.0 | 59.3/66.4 | 68.5/64.7 | O,F120 |
| 15 / 107 | 723/360 | 21/12 | 100.0/41.7 | 6.54 | 1.1/8.5 | 58.7/60.5 | 49.5/60.5 | O,F120,F240 |
| 15 / 108 | 551/495 | 15/14 | 75.0/25.0 | 6.68 | 0.7/10.5 | 43.7/60.0 | 17.7/61.0 | O,F120,F240 |
| 15 / 109 | 657/537 | 16/13 | 100.0/0.0 | 6.65 | 1.5/8.1 | 59.5/63.7 | NA/67.6 | O,F120,F240 |
| 16 / 107 | 395/227 | 11/5 | 18.8/100.0 | 6.72 | 6.3/11.5 | NA/18.2 | NA/18.2 | O,F120,F240 |
| 16 / 108 | 413/158 | 12/4 | 68.8/12.5 | 5.86 | 0.6/13.3 | 24.7/1.8 | 24.4/1.8 | O |
| 16 / 109 | 727/298 | 12/11 | 25.0/100.0 | 9.90 | 3.2/7.8 | 35.1/22.3 | NA/22.3 | O,F240 |
| 17 / 107 | 516/219 | 13/12 | 45.8/16.7 | 5.61 | 2.5/9.4 | -14.9/52.2 | -12.9/52.2 | O,F120,F240 |
| 17 / 108 | 466/294 | 12/10 | 50.0/0.0 | 6.00 | 3.1/5.0 | -2.3/51.8 | -3.2/52.0 | O,F120,F240 |
| 17 / 109 | 566/356 | 16/22 | 62.5/8.3 | 5.97 | 4.6/6.2 | -2.7/51.6 | -6.3/51.7 | O,C,F120,F240 |
| 18 / 107 | 862/286 | 17/14 | 54.2/33.3 | 8.35 | 2.2/6.0 | 7.8/52.0 | -8.1/52.0 | O,F120,F240 |
| 18 / 108 | 1362/513 | 18/21 | 54.2/41.7 | 9.58 | 1.6/4.2 | 20.8/48.2 | 17.4/48.2 | O,C,F120,F240 |
| 18 / 109 | 1446/303 | 21/17 | 66.7/41.7 | 9.90 | 1.1/5.8 | 15.6/50.9 | 32.2/50.9 | O,F120,F240 |
| 19 / 107 | 809/447 | 21/16 | 66.7/41.7 | 8.52 | 1.8/11.1 | 16.8/29.2 | -1.8/29.0 | O,F120,F240 |
| 19 / 108 | 726/526 | 19/16 | 62.5/33.3 | 5.43 | 4.7/10.3 | 0.8/29.8 | -16.9/30.9 | O,F120,F240 |
| 19 / 109 | 892/547 | 25/23 | 83.3/41.7 | 6.84 | 7.5/15.4 | 19.7/31.0 | 37.1/21.6 | O,F120 |
| 20 / 107 | 895/383 | 15/20 | 29.2/80.0 | 9.90 | 1.4/11.8 | -5.0/43.7 | -4.8/44.0 | O,C,F120,F240 |
| 20 / 108 | 1006/484 | 14/22 | 16.7/100.0 | 9.90 | 5.4/16.8 | 18.5/44.1 | NA/45.2 | O,C,F120,F240 |
| 20 / 109 | 1432/602 | 18/27 | 33.3/100.0 | 9.90 | 2.3/9.4 | 23.6/47.5 | -3.5/44.6 | O,C,F120,F240 |
| 21 / 107 | 491/54 | 14/2 | 75.0/16.7 | 7.87 | 0.9/3.4 | 21.4/3.0 | 40.9/3.0 | O |
| 21 / 108 | 492/33 | 11/3 | 62.5/8.3 | 6.09 | 1.4/3.5 | 20.8/3.4 | -10.4/3.4 | O,F240 |
| 21 / 109 | 526/65 | 13/2 | 68.8/16.7 | 7.55 | 0.7/7.7 | 13.6/3.3 | 19.9/3.3 | O |
| 22 / 107 | 1356/401 | 20/7 | 83.3/0.0 | 6.00 | 0.9/11.2 | 65.8/76.4 | 58.5/76.4 | O,F120,F240 |
| 22 / 108 | 808/554 | 14/6 | 54.2/10.0 | 5.92 | 2.2/14.7 | 33.1/75.8 | -36.6/75.2 | O,F120,F240 |
| 22 / 109 | 1882/284 | 19/9 | 70.8/20.0 | 6.66 | 1.3/17.0 | 65.7/75.3 | 63.6/75.4 | O,F120,F240 |
| 23 / 107 | 1809/727 | 20/25 | 70.8/50.0 | 5.44 | 3.3/23.4 | 16.4/51.5 | 34.6/53.5 | O,C,F120,F240 |
| 23 / 108 | 1003/480 | 18/16 | 58.3/66.7 | 7.32 | 1.9/27.6 | -33.3/52.5 | -1.9/52.6 | O,F120,F240 |
| 23 / 109 | 1508/478 | 18/16 | 58.3/66.7 | 9.20 | 7.0/24.2 | 17.2/49.4 | 12.6/49.4 | O,F120,F240 |
| 24 / 107 | 455/432 | 13/16 | 62.5/30.0 | 8.40 | 0.9/8.9 | -6.8/46.3 | -7.6/41.8 | O,C,F120,F240 |
| 24 / 108 | 332/436 | 11/13 | 50.0/30.0 | 6.05 | 2.1/13.0 | -0.3/42.4 | -24.8/39.5 | O,S,C,F120,F240 |
| 24 / 109 | 336/260 | 10/11 | 50.0/20.0 | 6.30 | 1.5/15.6 | 10.2/42.0 | -62.7/41.8 | O,C,F120,F240 |
| 25 / 107 | 329/355 | 6/13 | 12.5/100.0 | 8.25 | 4.9/15.7 | 62.0/57.0 | NA/69.7 | O,S,C,F240 |
| 25 / 108 | 490/715 | 11/14 | 43.8/100.0 | 6.60 | 2.5/19.5 | 65.0/58.0 | NA/67.9 | O,S,C,F240 |
| 25 / 109 | 479/459 | 7/9 | 18.8/100.0 | 5.40 | 4.5/20.2 | 66.5/57.5 | NA/NA | O,C,F240 |
| 26 / 107 | 966/515 | 16/20 | 25.0/100.0 | 9.90 | 4.7/11.8 | 18.5/46.8 | NA/NA | O,C,F120,F240 |
| 26 / 108 | 874/540 | 15/20 | 20.8/100.0 | 9.90 | 3.3/14.0 | 23.1/44.6 | NA/43.1 | O,C,F120,F240 |
| 26 / 109 | 885/538 | 16/24 | 25.0/100.0 | 9.90 | 3.6/14.7 | 22.7/48.1 | NA/47.0 | O,C,F120,F240 |
| 27 / 107 | 591/216 | 9/14 | 12.5/100.0 | 9.90 | 5.3/11.6 | NA/NA | NA/NA | O,C,F120,F240 |
| 27 / 108 | 454/227 | 12/13 | 25.0/100.0 | 9.90 | 5.7/21.8 | 25.9/NA | NA/NA | O,C,F120,F240 |
| 27 / 109 | 397/354 | 10/12 | 16.7/100.0 | 9.90 | 0.3/16.5 | 18.8/40.8 | NA/40.4 | O,C,F120,F240 |
| 28 / 107 | 459/142 | 10/9 | 33.3/20.0 | 8.56 | 0.7/7.6 | 7.5/0.0 | -21.0/0.0 | O,F240 |
| 28 / 108 | 561/154 | 18/7 | 58.3/40.0 | 7.90 | 1.8/17.5 | 23.1/2.1 | 4.3/0.0 | O |
| 28 / 109 | 570/124 | 13/7 | 50.0/10.0 | 7.27 | 2.8/12.9 | 8.6/0.0 | -16.7/0.0 | O,F240 |
| 29 / 107 | 1435/924 | 18/20 | 62.5/37.5 | 6.50 | 2.6/11.4 | 53.6/52.5 | 54.4/64.2 | O,C,F240 |
| 29 / 108 | 1157/641 | 14/12 | 50.0/25.0 | 6.07 | 3.7/14.3 | 26.1/59.8 | 32.6/63.8 | O,F120,F240 |
| 29 / 109 | 1370/547 | 19/12 | 62.5/50.0 | 5.98 | 3.9/10.5 | 57.6/59.8 | 29.2/63.9 | O,F120,F240 |
| 30 / 107 | 652/212 | 14/4 | 81.2/10.0 | 6.62 | 1.6/9.4 | 60.6/77.7 | 71.1/77.7 | F120,F240 |
| 30 / 108 | 717/248 | 16/7 | 68.8/50.0 | 8.57 | 3.1/19.5 | 74.6/76.2 | 74.9/76.2 | O,F120,F240 |
| 30 / 109 | 607/453 | 10/11 | 37.5/40.0 | 5.33 | 2.7/11.8 | 30.5/77.6 | 18.1/76.6 | O,C,F120,F240 |

## Per-run order-rate and hit-rate table

Azure is the gated own side. Ember is disclosed as well; the hit-rate denominator includes both sides. Order rates use actual battle minutes, which can differ between a candidate and its baseline when one ends early.

| Map or F1 gen / seed | Orders/min Azure D/C | Orders/min Ember D/C | Hits/soldier-min D/C | Churn exit |
|---|---:|---:|---:|---|
| trenches / 100 | 235.00/509.50 | 220.67/42.67 | 0.065/0.104 | PASS |
| trenches / 101 | 205.17/313.33 | 207.83/674.33 | 0.116/0.181 | PASS |
| trenches / 102 | 204.17/836.17 | 212.67/469.17 | 0.128/0.253 | PASS |
| trenches / 103 | 203.17/473.00 | 223.50/273.17 | 0.111/0.182 | PASS |
| trenches / 104 | 213.33/670.00 | 217.67/523.33 | 0.085/0.193 | PASS |
| trenches / 105 | 215.17/428.33 | 195.67/398.83 | 0.103/0.143 | PASS |
| trenches / 106 | 223.67/983.00 | 227.50/550.33 | 0.043/0.132 | PASS |
| trenches / 107 | 217.50/580.33 | 195.00/407.00 | 0.133/0.152 | PASS |
| trenches / 108 | 221.33/703.17 | 202.00/751.33 | 0.075/0.111 | PASS |
| trenches / 109 | 222.50/613.50 | 195.17/256.00 | 0.117/0.309 | PASS |
| works / 100 | 186.50/68.33 | 191.33/62.50 | 0.131/0.480 | O |
| works / 101 | 199.17/57.17 | 183.33/61.67 | 0.152/0.552 | O |
| works / 102 | 181.83/69.83 | 170.33/61.67 | 0.169/0.627 | O |
| works / 103 | 184.17/69.50 | 187.67/63.33 | 0.150/0.543 | O |
| works / 104 | 171.00/64.17 | 178.17/63.50 | 0.192/0.522 | O |
| works / 105 | 173.83/69.50 | 174.00/60.50 | 0.185/0.415 | O |
| works / 106 | 182.33/66.17 | 192.83/87.50 | 0.160/0.513 | O |
| works / 107 | 182.67/57.33 | 170.83/61.67 | 0.211/0.535 | O |
| works / 108 | 186.50/59.83 | 188.00/66.00 | 0.150/0.491 | O |
| works / 109 | 192.00/61.50 | 185.83/69.83 | 0.161/0.343 | O |
| F1 gen1 / 107 | 69.33/64.00 | 4.00/3.83 | 0.470/0.283 | O |
| F1 gen1 / 108 | 77.83/70.50 | 4.50/3.33 | 0.432/0.233 | O |
| F1 gen1 / 109 | 73.83/54.17 | 4.83/3.83 | 0.607/0.209 | O |
| F1 gen2 / 107 | 141.18/98.55 | 1.97/4.11 | 0.426/1.039 | O |
| F1 gen2 / 108 | 149.67/105.22 | 1.33/3.74 | 0.203/1.113 | O |
| F1 gen2 / 109 | 177.00/117.46 | 1.17/4.44 | 0.132/0.673 | O |
| F1 gen3 / 107 | 148.92/17.50 | 3.71/1.00 | 1.401/0.248 | O |
| F1 gen3 / 108 | 133.45/21.33 | 5.85/1.00 | 0.995/0.326 | O |
| F1 gen3 / 109 | 109.93/18.83 | 5.45/1.67 | 0.863/0.360 | O |
| F1 gen4 / 107 | 92.83/21.17 | 2.17/1.00 | 0.347/0.251 | O |
| F1 gen4 / 108 | 94.54/23.50 | 3.19/1.33 | 0.565/0.304 | O |
| F1 gen4 / 109 | 108.16/19.00 | 4.44/1.33 | 0.515/0.213 | O |
| F1 gen5 / 107 | 90.28/41.17 | 2.59/2.00 | 0.514/0.459 | O |
| F1 gen5 / 108 | 107.53/36.00 | 5.96/2.00 | 0.728/0.498 | O |
| F1 gen5 / 109 | 75.18/42.00 | 2.81/2.00 | 0.652/0.375 | O |
| F1 gen6 / 107 | 104.33/30.00 | 3.83/2.00 | 0.328/0.258 | O |
| F1 gen6 / 108 | 59.50/29.83 | 4.17/2.00 | 0.735/0.532 | O |
| F1 gen6 / 109 | 105.96/31.00 | 8.98/2.00 | 0.746/0.372 | O |
| F1 gen7 / 107 | 95.26/18.00 | 4.31/1.00 | 0.483/0.301 | O |
| F1 gen7 / 108 | 27.83/17.00 | 2.00/1.00 | 0.580/0.283 | O |
| F1 gen7 / 109 | 57.50/17.83 | 1.00/1.00 | 0.258/0.363 | O |
| F1 gen8 / 107 | 62.83/27.50 | 3.17/4.00 | 0.341/0.396 | O |
| F1 gen8 / 108 | 65.67/26.17 | 3.17/4.50 | 0.266/0.350 | O |
| F1 gen8 / 109 | 62.83/27.83 | 3.50/4.17 | 0.307/0.296 | O |
| F1 gen9 / 107 | 55.83/60.17 | 4.00/3.67 | 0.735/0.391 | PASS |
| F1 gen9 / 108 | 91.10/53.17 | 4.81/3.67 | 0.481/0.279 | O |
| F1 gen9 / 109 | 91.17/55.17 | 4.67/3.50 | 0.460/0.472 | O |
| F1 gen10 / 107 | 85.67/29.83 | 2.83/3.50 | 0.137/0.497 | O |
| F1 gen10 / 108 | 66.00/30.33 | 3.83/3.33 | 0.353/0.463 | O |
| F1 gen10 / 109 | 93.33/35.50 | 2.50/3.50 | 0.214/0.403 | O |
| F1 gen11 / 107 | 83.89/46.99 | 2.77/2.85 | 0.447/0.547 | O |
| F1 gen11 / 108 | 94.33/47.56 | 1.33/1.95 | 0.373/0.452 | O |
| F1 gen11 / 109 | 100.33/61.30 | 1.33/2.22 | 0.334/0.985 | O |
| F1 gen12 / 107 | 105.00/69.57 | 1.17/3.16 | 0.140/1.084 | O |
| F1 gen12 / 108 | 123.67/33.07 | 0.83/1.49 | 0.035/0.617 | O |
| F1 gen12 / 109 | 100.95/37.99 | 3.20/1.78 | 0.380/0.501 | O |
| F1 gen13 / 107 | 38.71/37.50 | 6.76/3.67 | 0.759/0.529 | O |
| F1 gen13 / 108 | 33.33/39.50 | 3.67/3.33 | 0.321/0.413 | PASS |
| F1 gen13 / 109 | 58.01/40.50 | 7.25/3.67 | 0.968/0.233 | O |
| F1 gen14 / 107 | 28.00/31.67 | 1.83/1.67 | 0.749/0.619 | PASS |
| F1 gen14 / 108 | 57.33/30.67 | 1.67/2.33 | 0.498/0.343 | O |
| F1 gen14 / 109 | 52.52/26.17 | 3.50/2.33 | 0.994/0.456 | O |
| F1 gen15 / 107 | 36.00/24.67 | 5.75/3.67 | 0.865/0.385 | O |
| F1 gen15 / 108 | 35.17/28.50 | 4.00/4.17 | 0.455/0.453 | O |
| F1 gen15 / 109 | 51.49/30.50 | 6.91/3.67 | 0.806/0.453 | O |
| F1 gen16 / 107 | 118.48/24.00 | 17.87/2.83 | 1.145/0.158 | O |
| F1 gen16 / 108 | 56.67/19.00 | 2.67/2.00 | 0.463/0.121 | O |
| F1 gen16 / 109 | 93.86/20.67 | 7.19/2.00 | 0.837/0.376 | O |
| F1 gen17 / 107 | 114.50/43.33 | 4.00/4.00 | 0.256/0.300 | O |
| F1 gen17 / 108 | 113.50/57.17 | 4.00/4.00 | 0.246/0.212 | O |
| F1 gen17 / 109 | 105.17/44.33 | 4.00/4.00 | 0.309/0.592 | O |
| F1 gen18 / 107 | 91.83/50.50 | 5.33/4.83 | 0.350/0.315 | O |
| F1 gen18 / 108 | 69.67/60.50 | 5.00/3.67 | 0.422/0.614 | O |
| F1 gen18 / 109 | 89.00/40.67 | 5.00/3.67 | 0.509/0.410 | O |
| F1 gen19 / 107 | 92.33/28.00 | 6.17/7.67 | 0.499/0.352 | O |
| F1 gen19 / 108 | 109.00/35.50 | 5.17/7.50 | 0.414/0.388 | O |
| F1 gen19 / 109 | 78.83/35.33 | 6.17/7.67 | 0.618/0.638 | O |
| F1 gen20 / 107 | 140.17/36.33 | 4.67/4.67 | 0.314/0.584 | O |
| F1 gen20 / 108 | 158.43/39.50 | 8.21/5.50 | 0.595/0.686 | O |
| F1 gen20 / 109 | 126.81/36.67 | 6.21/6.00 | 0.544/0.954 | O |
| F1 gen21 / 107 | 49.33/8.50 | 5.00/3.67 | 0.376/0.057 | O |
| F1 gen21 / 108 | 60.33/7.67 | 4.00/4.50 | 0.293/0.066 | O |
| F1 gen21 / 109 | 47.50/7.33 | 5.50/3.67 | 0.353/0.070 | O |
| F1 gen22 / 107 | 62.17/49.00 | 2.83/3.17 | 0.481/0.182 | O |
| F1 gen22 / 108 | 110.83/44.67 | 3.00/2.83 | 0.288/0.129 | O |
| F1 gen22 / 109 | 107.67/54.17 | 3.33/3.50 | 0.431/0.176 | O |
| F1 gen23 / 107 | 90.50/22.50 | 2.33/1.67 | 0.503/1.198 | O |
| F1 gen23 / 108 | 98.50/23.83 | 2.17/1.00 | 0.422/0.493 | O |
| F1 gen23 / 109 | 77.67/23.83 | 1.83/1.00 | 0.440/0.511 | O |
| F1 gen24 / 107 | 58.83/28.17 | 5.17/4.17 | 0.417/0.635 | O |
| F1 gen24 / 108 | 65.00/28.67 | 4.83/3.33 | 0.316/0.447 | O |
| F1 gen24 / 109 | 61.50/28.33 | 4.00/3.50 | 0.319/0.372 | O |
| F1 gen25 / 107 | 99.10/41.00 | 2.60/4.33 | 0.478/0.565 | O |
| F1 gen25 / 108 | 67.45/36.45 | 1.84/1.49 | 0.589/0.743 | O |
| F1 gen25 / 109 | 94.43/41.68 | 2.45/1.96 | 0.475/0.550 | O |
| F1 gen26 / 107 | 148.38/78.28 | 11.84/10.96 | 0.656/1.048 | O |
| F1 gen26 / 108 | 162.67/34.00 | 9.84/4.33 | 0.652/0.547 | O |
| F1 gen26 / 109 | 153.94/33.00 | 11.55/4.17 | 0.649/0.675 | O |
| F1 gen27 / 107 | 190.26/134.86 | 5.64/5.24 | 0.532/1.305 | O |
| F1 gen27 / 108 | 152.24/132.83 | 3.04/4.49 | 0.558/1.199 | O |
| F1 gen27 / 109 | 152.32/32.00 | 4.54/1.67 | 0.587/0.306 | O |
| F1 gen28 / 107 | 111.67/11.50 | 4.17/4.00 | 0.229/0.191 | O |
| F1 gen28 / 108 | 84.67/9.83 | 4.00/4.83 | 0.436/0.131 | O |
| F1 gen28 / 109 | 108.17/11.17 | 3.50/3.50 | 0.297/0.150 | O |
| F1 gen29 / 107 | 44.83/41.17 | 2.50/2.67 | 0.434/0.549 | O |
| F1 gen29 / 108 | 105.17/41.67 | 2.67/2.00 | 0.335/0.320 | O |
| F1 gen29 / 109 | 77.00/41.83 | 2.17/2.67 | 0.503/0.307 | O |
| F1 gen30 / 107 | 48.50/48.50 | 3.33/3.17 | 0.403/0.160 | PASS |
| F1 gen30 / 108 | 54.83/31.83 | 4.17/3.17 | 0.506/0.228 | O |
| F1 gen30 / 109 | 83.50/60.50 | 4.33/4.83 | 0.285/0.361 | O |

## Transition audit and remaining churn

Works seed107: Phase2b issued1630 Azure soldier orders; Phase2c issues1096 (182.67/min). Candidate90's newly traced, exact-baseline-digest run issues **344** (57.33/min), not the454 quoted in the review. Its digest is `5263252470802575170`, equal to the preserved untraced run. Both the new trace and the untraced events count344, after excluding five platoon directives. Counting directives gives349, so that distinction does not recover454. This report uses the verified paired baseline and records the numeric disagreement rather than silently changing the reference.

The fixed Phase2c trace has68 stage-deadline transition records. Of1096 own-side orders,548 follow Reorganise transitions,225 follow new-contact transitions,165 follow received arrivals and63 follow effective-fire transitions. The complete category counts are in `.local/phase2c/works107-transitions.json`. The52 orders without a same-tick DrillSim transition are attached-staff self-orders to IDs5/6 from the existing follow controller in `CommandSim.cpp:498`; they remain included in the rate. They are not silent DrillOrders reissues. Its inherited staff-follow behaviour was not changed.

This narrows the remaining cause: ordinary continue ticks retain orders, but repeated deadline/failure/reorganisation cycles still generate excessive traffic. The lifecycle pin does not establish that chosen bounds are feasible or that repeated failures become stable blocked outcomes. On Works, mean hits per soldier-minute rise from roughly0.089 in Phase2b to0.166 here, still below candidate90's approximately0.502 per-run mean (0.498 pooled). On Trenches, spacing and fighting intensity regress despite passing the relative churn ceiling. Passing the focused pins is insufficient for a playable controller.

The offline diagnostics preserve all front-line series, hit counts, non-incapacitating hits, incapacitating wounds, kills and active soldier-time. The requested rate table is above; detailed Works injury/closure data are additionally in `.local/phase2c/works-diagnostics.md` and `diagnostics/*.json`.

## Disagreements and incomplete outcomes

1. **No disagreement with the stop rule or exit thresholds.** This build fails; it is not promoted. No second measured build or post-measurement tactical change was made. The structural commitment and frozen-element fixes are present, but the distribution does not establish a satisfactory lifecycle outcome.
2. **Reference count disagreement:** the review's Works107 candidate90 figure454 does not reproduce from the preserved baseline. The new digest-equal trace and independent event selection both give344. The exact manifests and commands are retained in `candidate-traces/parity.json`.
3. **D01 needed a geometry correction as well as commitment.** The original ideal element offsets yielded5.1m nearest neighbours, below the6m scenario floor even with perfect execution. The18m longitudinal centre separation corrects that general geometry; the80% bound was retained and now passes.
4. **D05 is not fully complete.** Frozen elements alone fix its weak-group transport requirement (3.9s), but the capable control hits a bound deadline and reports blocked. That is a remaining policy/execution defect; the assertion was not reclassified or weakened.
5. **Closure defect found during the postmeasurement audit:** `IssueStage` sets the emergency retreat flag whenever contact-cover allocation yields zero protected slots, without requiring effective incoming fire. That is broader than the retained closure ruling and can divert an otherwise eligible closure into a rearward bound. In the capable D05 trace, effective fire ends at23.20s, zero-slot emergency selection occurs at31.95s, and the rearward bound starts39.95s before the next effective-fire-began transition at52.05s. This is an implementation defect, not an architect ruling or an intentional exception. It remains in the frozen build because the requested stop rule forbids a second measured iteration. It also means the closure implementation cannot be claimed fully compliant.
6. **Trace-label caveat:** material-knowledge events that retain the current contact-cover/hold stage are logged as `drill_stage_advanced` with an explicit `retain ...` reason, despite not advancing its order generation. Quiet continues are silent, but these event labels are broader than a literal stage advance. The audit counts records, not distinct completed bounds; it does not hide this distinction.
7. **Metric interpretations remain explicit:** Azure is the attacking-side convention on Works; closure is the mean of surviving-squad medians; missing horizons do not pass. Effective fire still uses actor suppression/fire-area evidence above0.3; superiority still uses recent received gun/delivery evidence, now with6s/8s hysteresis. These are not observer estimates of enemy suppression. No per-seed thresholds were introduced.
8. **Platform limits:** Windows/Unreal were intentionally left to the architect. No native outcome is claimed. Protected authored geometry, frozen seed lists and `tools/evaluate_routes.py` remain untouched. Legacy and cognition authored behavior remains exact; candidate90 F1 behavior is also verified by the90 additional trace digest matches.

Stopped after this report. No further tactical iteration, Phase3, platoon task tree or F2/F3 work.
