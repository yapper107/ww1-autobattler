# Tactical routes and trench proving ground

This implementation follows the research integration plan. Acceptance results are reported separately; adding routing infrastructure is not evidence that every squad now flanks well.

## Play and inspect

Launch the existing prototype. In preparation, use **Map: Fractured Works / Communication trenches**, then **Run Battle**. The original 340×300 deathmatch remains the default. The trench proving ground is 200×140 metres with the same four squads of eight and one MG per side.

During replay, select a soldier and use **Show squad route**. Cyan follows the leader's accepted route; yellow marks the current stage. The command panel shows the stage and reason. The rest of the battlefield is still an explicitly labelled observer view.

## Implementation

- `TacticalRouteSim` scores travel time, exposure, received fire, friendly firing lanes, friendly congestion, and unobserved terrain. Only the actor's received knowledge enters costs.
- Longer approaches use an eight-metre region lattice with cached, physically validated local connections. Short queries use the existing one-metre grid. A fixed 256-expansion tactical budget bounds each optimization. A measured physical incumbent can remain usable if optimization is incomplete; an incomplete query is not labelled unreachable.
- Soldier orders retain a shared immutable route. The normal executor joins, follows, and leaves that polyline; recovery refines within its corridor. Emergency shelter can override it and produces separate path evidence. Full route vectors are shared rather than duplicated in every frame.
- Routes are divided into movement stages. Fireteams alternate; support readiness concerns the upcoming crossing. Exposed attacks retain the eight-second preparation rule. Pressure in the moving element and matching refusal reports can pause execution without treating every distant supporting soldier's suppression as a veto.
- Both members' arrivals and leadership succession remain separate from route selection. Completion is not automatically a successful envelopment.
- On arrival, moving soldiers claim their assigned shelter and firing peek. A completed journey must leave them able to observe and engage from that position.
- Cached geometric threat estimates use half-metre endpoints and two-metre route samples. Nearby same-weapon reports are grouped; uncertainty is sampled around the track. These are approximate forecasts. Projectile collision, physical perception, individual cover protection, and friendly-fire checks still use exact geometry.
- Route assessments have a four-second lifetime and are invalidated by geometry, relevant reports, changed intent, failed destinations, or movement away from their origin. Geometric ray-cache size changes do not change query answers.
- The trench map contains explicit floors at -1.4 metres, earth volumes, ramps to the surface, junctions, passing pockets, a sheltered northern connection, an exposed centre crossing, and a two-floor building. Floors/ramp links are exported with stable identifiers. Navigation separates floor elevations.
- Passage leases allow friendly columns to follow in the same direction and retain the existing aged entry priority and obstruction recovery. Geometry revisions reset passage data; a suppressed occupant still needs to clear the space.
- Geometry-edit runs maintain separate known maps for each observer. A remote edit changes physical collision immediately but enters tactical planning only after local observation and recognition delay. This does not implement weapon-driven destruction or collapse.

## Reusable commands

```bash
./scripts/battle-lab.sh --seed 107 --evaluate --out .local/routes/play
.local/lab/battle-lab --terrain 1 --seed 107 --seconds 120 --evaluate --out .local/routes/trench
python3 tools/analyze_battle.py .local/routes/play/latest.json --write
python3 tools/analyze_battle.py .local/routes/play/latest.json --squad 1 --from 40 --to 120 --write
python3 tools/evaluate_routes.py .local/routes/play/latest.json
python3 tools/run_route_matrix.py --out .local/routes/matrix --check
python3 tools/compare_route_pass.py .local/routes/baseline/runs .local/routes/delivery --out .local/routes/comparison.json
./scripts/test-sim.sh --routes
python3 tests/test_routes.py
```

`--terrain 0` is Fractured Works and `--terrain 1` is Communication trenches. The rerun tool restores that choice from the manifest. Encounters 5–7 are the northern, southern, and bent protected-approach fixtures, each with sixteen attackers and eight defenders. They run through production AI.

`routes.jsonl` stores query status, route identity, owner, plan, geometry/knowledge revision, evaluation time, cost components, polyline, and stages. `paths.jsonl` records issued physical execution paths and local recovery/emergency departures, linked to orders and decisions. Existing trace entries also identify routes and stages. All evaluated route alternatives remain available; candidate comparisons retain the scored reasons. The analyzer reconstructs receipt, execution failures, stage completion, and pauses.

`--evaluate` adds observer-only targets and exposure samples. The strict evaluator requires two surviving movers near the final destination, each maintaining a physical firing line to an active defender for three seconds at a second angle of at least 45 degrees relative to assigned support. The accepted route must also complete. Defender elimination is reported separately and cannot substitute for that condition.

Windows benchmarks use `tools/benchmark_routes.py` with the native runner. Three first/repeated-process pairs per seed are collected with standard diagnostics; an additional disabled-trace pair per seed measures overhead. First-process is not a claim of OS-cold caches. Run these serialized after other validation workloads finish.

## Remaining architectural limits

The region lattice is not a general polygon navigation mesh. Local physical refinement and an incumbent handle missing lattice connectivity; terrain with arbitrary stacked surfaces still needs further work. Cross-surface alternatives currently use the physical ramp/stair connections rather than a fully integrated multi-layer tactical search. Group passage leases do not replace continuous crowd collision avoidance.

Threat exposure is a forecast, not proof that a route is safe or an enemy is suppressed. Standard tracing preserves executed polylines but not every physical movement sample; the optional observer export supplies frame-level exposure. Route lifecycle and execution explanations do not establish tactical success without the stricter evaluator.

Actual destruction weapons, excavation during play, structural collapse, and persistent soldier stats remain outside this pass.
