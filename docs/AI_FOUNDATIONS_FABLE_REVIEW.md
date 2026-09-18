Reading is done. I'm now writing the plan against what I inspected.

## AI foundations: bounded implementation plan

**Inspected:** AGENTS.md, docs/DESIGN_VISION.md, docs/RECOVERY_THIRD_PASS_RESULTS.md, BattleSim.h, BattleSim.cpp (sensing 555-569, tick 608-909), CommandSim.cpp (tracks 108-154, transport/planning 327-578), ReactionSim.cpp, PlatoonSim.cpp, PlanSim.cpp, ManeuverSim.cpp 160-219, TaskSim.h, RecoverySim.h, Diagnostics.h, tests/sim_tests.cpp, tools/battle_cli.cpp.

### Baseline facts that shape the design

- Sight is omnidirectional: range plus body-sample line checks, no look direction (`BattleSim.cpp:556-569`). `facing` is only weapon/movement heading (`782`, `886`).
- Observation and memory are already split: `Contact` is produced only by `SenseEnemy`, merged with age gates in `ReactionSim.cpp:54-75`, and fused by `WithTracks` (`CommandSim.cpp:115`). Negative evidence exists per track (`ObserveEmptyTracks`, `CommandSim.cpp:126`).
- Report dedup is per hidden enemy id with observedAt/clearedAt ordering (`CommandSim.cpp:374`, `ReactionSim.cpp:68`). Every known contact is re-sent every 2 s (`480-486`).
- Strength is a confidence-weighted sum of tracks near one enemy (`ManeuverSim.cpp:178-179`). It is exact when tracks are fresh.
- Directives carry task and position only; acceptance happens in `UpdateSquadPlan` (`PlanSim.cpp:13-16`). `ApplyPlatoonDirective` (`PlatoonSim.cpp:62`) is a second acceptance path used only by tests. Task feedback (`UpdateTaskReports`) runs only under recoveryFixture (`BattleSim.cpp:675`).
- Waypoint writers today: `UpdateManeuver`, `UpdateSearchMission`, `UpdateCoordination`, and the recovery drill which bypasses all of them (`CommandSim.cpp:508-523`).

### Mode and isolation

Add `Config::foundations=false`, included in `SameConfig`, CLI `--foundations`, and a `Simulate` gate to a new authored encounter 8 (mirror the `recoveryFixture` gate at `BattleSim.cpp:581`). Make `foundations` and `recoveryFixture` mutually exclusive. Acceptance for touching normal gameplay stays the existing seeds 100–109 digest parity.

### Interfaces

```cpp
// Sensing (BattleSim.h)
struct SightQuery { Vec3 eye, look; float halfAngle, range; };
SightQuery SightOf(const Soldier&, const Config&);     // halfAngle=pi when !foundations
bool SightsPoint(const Map&, const SightQuery&, Vec3 point);
// Soldier: Vec3 look{1,0}; float scanPhase; enum LookMode{Follow,Sector,Scan} lookMode;
// Order gains: Vec3 lookAt; LookMode lookMode;

// Interpretation (new MentalMapSim.h)
constexpr float CellSize=16;                            // ~22x19 cells on the skirmish map
struct RegionEstimate { int cell=-1; float low=0,high=0, observedAt=-100, lookedAt=-100; int sources=0; };
struct TacticalMap { std::array<RegionEstimate,CellCount> cells; uint64_t revision=0; };
// Soldier: TacticalMap mentalMap; float estimateBias;  // seeded once in InitialFrame
void InterpretSightings(Soldier&, const Config&, float time);      // contacts+reports -> cells
void ObserveEmptyCells(Soldier&, const Map&, const SightQuery&, float time);
float EstimateEnemyStrength(const Soldier& leader, Vec3 origin, float time, const Config&);

// Reports (CommandSim.h)
struct RegionReport { int cell; float low,high,observedAt; int observer; uint32_t reportId; };
// CommandMessage::Kind::Region; Soldier: std::array<RegionReport,CellCount> regionReports;

// Orders (BattleSim.h)
enum class Purpose { Seize, Suppress, Screen, Observe, Withdraw };
struct Intent { uint32_t goalId=0, parentGoal=0; Purpose purpose; int cell=-1; float feasibility=0;
                PlatoonTask alternativeTask=PlatoonTask::None; Vec3 alternativePosition{}; };
// PlatoonDirective.intent; Assignment.intent; SquadSituation gains goalId, goalStatus(TaskStatus)
```

### Invariants

1. **One visibility rule.** `SenseEnemy`, `ObserveEmptyTracks`, `ObserveEmptyCells`, and geometry receipt (`BattleSim.cpp:625-639`) all call `SightsPoint`. With `foundations=false` the query is a full circle and the existing body-sample loop is unchanged, so digests hold.
2. **Look is not movement.** `look` is set by the decision output: Follow copies path direction, Sector points at `assignment.sector`, Scan sweeps ±60° about the sector at a fixed rate using `scanPhase`. `facing` remains the weapon heading. Look derives only from own state and known tracks.
3. **Observation before interpretation.** `Contact` stays raw and per-enemy. `TacticalMap` is written only by `InterpretSightings` and `ObserveEmptyCells`, which read only that soldier's `contacts`, `reports`, and `regionReports`. No function taking `TacticalMap&` may take `Frame&`.
4. **Uncertain strength.** `low` = distinct sightings seen in the cell within 20 s; `high` = `low` plus 1 per 2 s of unobserved adjacent cells, capped at squad size. `EstimateEnemyStrength` returns `bias * (low+high)/2`. No hidden count is read.
5. **Reproducible bias.** `estimateBias` is computed once in `InitialFrame` from seed and id via the existing hash at `BattleSim.cpp:170`, range 0.7–1.4. Never redrawn. Doctrine may shift it by a constant. Two officers reading identical reports produce different estimates; the same officer produces the same estimate every run.
6. **Report dedup.** Sender keeps `lastRegionSent[recipient][cell]` and sends only when `observedAt` or the low/high band changes. Receiver keeps latest per `(cell, observer)`; a `reportId` already held is dropped. Forwarding preserves original `observer` and `observedAt`. Merging takes the newest band per source, then unions bands across sources.
7. **Negative evidence.** A cell whose centre and four edge samples pass `SightsPoint` for 3 s with no sightings decays `high` toward `low` and then both toward 0, mirroring the 3 s rule in `ObserveEmptyTracks`.
8. **Feedback changes the plan.** `PlanPlatoon` stores the second-best candidate from its own list (`PlatoonSim.cpp:36-51`) as the directive alternative at issue time. When a `SquadSituation` arrives with matching `goalId` and `goalStatus` Blocked or Failed, the platoon issues the alternative under a new `goalId` with `parentGoal` set, without waiting for the 55 s replan window. Alternative choice uses knowledge at issue time, never later omniscient assessment.

### Avoiding conflict with old overrides

Do not add a waypoint writer. Foundations mode changes inputs, not the pipeline: `EstimateEnemyStrength` replaces the sum at `ManeuverSim.cpp:178-179` (identical result when off), and intent rides on the existing directive into `UpdateSquadPlan`. Retire `ApplyPlatoonDirective` from production paths or make it call the same acceptance as `PlanSim.cpp:13-16`. Do not route through the recovery drill; it bypasses the maneuver pipeline and failed acceptance. Enable `UpdateTaskReports` under `foundations` too, so goal feedback uses the existing task contract rather than a new channel.

### Scenario and evidence

Encounter 8: attacking platoon, two squads, versus a defending squad at a crossroads with two defenders occluded by a building. Squad two receives Observe on the crossroads cell. Test file `tests/foundations_tests.h`, run via `sim_tests --foundations`:

- Look fixed away yields no contacts; turning look yields contacts after reaction delay.
- Occluded defenders never appear in any attacker's `contacts` while the building stands.
- The platoon leader's `regionReports` carry the scout's original `observedAt` and arrive no earlier than 0.75 s plus reaction.
- Resending the same report leaves the estimate unchanged.
- The cell estimate band contains the visible count and its width exceeds zero; two leaders with different bias differ on the same reports; reruns match digests.
- After a scripted Blocked report on the main-effort goal, the next directive equals the recorded alternative and links `parentGoal`.
- Seeds 100–109 digests match the preserved executable with the flag off (`tools/verify_gameplay_parity.py`).

Trace kinds: `look_set`, `region_estimate`, `region_report_sent`, `region_report_received`, `goal_feedback`, `goal_alternative_applied`. Document in a new `docs/AI_FOUNDATIONS_RESULTS.md` with digests.

### Order

1. Flag, CLI, gate, parity harness run.
2. `SightQuery` and look state wired through all four visibility sites.
3. `TacticalMap`, interpretation, bias, `EstimateEnemyStrength`.
4. Region reports and dedup.
5. Intent, alternative storage, goal feedback, alternative application.
6. Encounter 8, tests, traces, results doc.

### Deferred

Traits and progression beyond one seeded bias scalar. Arbitrary terrain discovery beyond edit-driven geometry views. Unidentified sightings: contacts remain keyed by hidden enemy id, which leaks identity across the knowledge boundary and needs a designer decision. Hearing and fire-source sensing. Company-level command. Promotion into normal battles. Any presentation of look direction in Unreal.

### Unresolved decisions for the user

Cell size and bias range are implementation defaults. Whether identity-keyed contacts are acceptable for this slice. Whether cautious doctrine should bias estimates upward, which affects player-visible officer personality.
