# Plan 014 companion: mechanism scenarios, scenario families and metric definitions

**Status:** specification for Astra's implementation of [plan 014](014-battle-drill-controller.md), 16 September 2026. Author: Claude Fable 5.1 (`claude-fable-5-1`), direct Claude Code session. Bounds are derived from existing contract constants and are to be frozen before behaviour tuning, per the project rule that assertion bounds precede implementation.

## 1. Conventions

- Every scenario uses production sensing, reaction delays, report transport, navigation, collision and execution. Injected receipts or fabricated delivery evidence are not allowed; durable passive targets (`health=10000`, permanent reload) are allowed to keep a fixture alive, as encounters 17 and 27 already do.
- Every scenario has a paired control that differs in exactly one stimulus and must produce the contrasting outcome. A scenario without a passing control is not evidence.
- Timing bounds use the existing constants: report delay 0.75 s per hop, reaction 0.25-0.60 s, crouched rifle speed 1.89 m/s, plan cadence 1 s, platoon cadence 5 s. A bound is written as the path or transport time plus these allowances, never as a number chosen after watching a run.
- Assertions read traces, receipts and physical frames. They must not mirror internal branch names; they assert observable outcomes and decision reasons.
- Encounter ids for new fixtures are appended after 43. The authored layouts 5-7 and the frozen seed lists are never edited.
- Trace kinds asserted: `drill_candidate`, `drill_accepted`, `drill_stage`, `drill_stage_advanced`, `drill_safety_override`, `drill_resume`, `drill_exhausted`, `formation_slot`, `technique_selected`, `element_assigned`, `element_reorganised`, `position_query`, `position_pair_rejected`, `task_status`, `task_report_received`, `platoon_task_assigned`, `platoon_task_released`, `succession`.

## 2. Mechanism scenarios by drill

| ID | Drill | Stimulus | Required outcome | Paired control |
|---|---|---|---|---|
| D01 | MoveTactically | open ground, no known enemy, 120 m move | technique traveling; every member's nearest squadmate between 6 m and 14 m for at least 80 % of moving samples; both elements arrive; zero `position_pair_rejected` for spacing after the first plan | restrictive corridor 4 m wide: technique traveling or column with intervals 3-5 m, no member outside the corridor |
| D02 | MoveTactically | a reported (not seen) enemy 120 m ahead | technique traveling overwatch; lead element 30-50 m ahead of the trail element while moving; trail element halts at protected positions with a line over the lead's bound | same geometry with no report: traveling, elements within 20 m of each other |
| D03 | MoveTactically | known enemy 90 m ahead, no fire yet | bounding overwatch: bounds no longer than 47 m (two-thirds of 70 m rifle range); the overwatch element is stationary at protected positions with a line over every bound; alternation traced | known enemy 160 m ahead: traveling overwatch, no alternation |
| D04 | ReactToContact | fire received from a single rifleman at 60 m while traveling | every member reaches a protected slot within path length over 1.89 m/s plus 1 s; slots satisfy 2.0 m shelter and 1.8 m peek separation; return fire from at least three members within 4 s of the first receipt; leader assessment traced within 4 s plus two report hops | same fire with no cover within 25 m: BreakContact branch selected, alternating rearward bounds traced |
| D05 | ReactToContact | contact by a durable machine gun at 80 m | assessment selects SupportByFire with the gun-group element; the rifle element holds in cover; `Blocked/Support` is not reported while the element has lines | gun group already below `minStrength`: hold in cover and `Blocked/Support` report reaches the platoon within two hops plus 1 s |
| D06 | SupportByFire | element ordered on a durable target area 70 m away | positions with lines and cover, spacing rule satisfied; established flag set only after the contract's round count on the area inside 6 s; `lost` set 8 s after the shooters are put on permanent reload | shooters on permanent reload from the start: never established, dependent movement never released |
| D07 | SupportByFire | assault element sends the phase-line receipt | base of fire shifts or lifts within one hop plus 1 s of the receipt; no round crosses the assault lane after the shift | no receipt sent: fire continues on the original area |
| D08 | SquadAttack | durable defender with a covered flank route (screening wall) | assault position chosen at 45 degrees or more from the base of fire and within 40 m of the objective; movement starts only after `established`; rushes no longer than 5 s exposed; consolidation slots oriented on the remaining known threat; `Reorganise` traced once at completion | same layout with the screening wall removed (no covered route): no assault; SupportByFire plus `Blocked/Support` report; platoon receives it |
| D09 | SquadAttack | base of fire loses evidence for 10 s mid-move | manoeuvre element pauses in protected holds within 8 s of the loss and resumes after fresh delivery, same drill instance and generation | evidence continuous: no pause |
| D10 | SquadAttack | a fresh threat appears inside the committed corridor after commitment | one alternate route evaluated and either accepted with a new generation or `Blocked` reported; never a third attempt in the same instance | threat appears outside the corridor: no re-plan |
| D11 | Frozen elements | a rifleman of the manoeuvre element becomes a casualty mid-attack | element membership unchanged except the removal; no member migrates; the drill continues if strength stays at or above `minStrength` | two casualties push the element below `minStrength`: drill fails with `InsufficientStrength`, `Reorganise` runs before any new drill is accepted |
| D12 | Gun never silent | the gunner is killed by a projectile while the gun group is established | nearest gun-group member receives `RecoverWeapon`, reaches the weapon, and fire resumes; gun-silent seconds bounded by path length over 1.89 m/s plus 2 s; dependent movement paused meanwhile | weapon position exposed to a known threat with no protected approach: `Blocked` reported, drill re-plans with a rifle base of fire |
| D13 | Attrition template | Gun-centric squad reduced to five | `Reorganise` collapses to GunNest; no SquadAttack is proposed afterwards; Occupy with sectors traced | Teams template at five: SingleElement; a later attack is still possible under the automatic weapon |
| D14 | Attrition template | Section rifle group reduced to two | HaltAndMerge: squad halts in cover, reports; platoon issues Merge; both squads' elements are re-formed only after both current drills complete | rifle group at three: no halt |
| D15 | Succession | sergeant killed under a mission-command template | corporal assumes within `assistantDelay` plus reaction; the drill and route are retained | rigid template with `requiresPlatoonOrder`: squad holds existing orders until a platoon directive arrives; no new drill accepted before it |
| D16 | BreakContact | believed enemy strength twice own, no superiority | alternating rearward bounds of 25-50 m; suppressing element always stationary while the other moves; contact broken or rally reached | strength ratio one to one with superiority: no break |
| D17 | Occupancy | eight members ordered into an area with only five valid slots | five occupy slots, three receive fallback slots outside the 3 m grenade rule or wait inside the coherence radius; zero pairs within 2.0 m shelter distance | area with ten slots: all eight occupy distinct slots |
| D18 | Trace parity | any of the above | traced and untraced runs produce identical gameplay digests on the same platform | none |

Platoon scenarios (Phase 4):

| ID | Stimulus | Required outcome | Paired control |
|---|---|---|---|
| P01 | contact with a known enemy group; a covered route exists round one flank | Fix task assigned to the squad with lines and the support weapon; Flank tasks to two squads inside distinct corridors; corridor claims traced; reserve squad in its own area behind the fixing element; assault elements arrive at 45 degrees or more from the fixing element's centroid | no covered route on either flank: no Flank directive; honest upward report; no squad enters within 18 m of the known group without cover (the Phase4f response and bounded observation are exercised by P08) |
| P02 | two squads assigned flank corridors | minimum inter-squad centroid distance never below 20 m during movement; neither squad's route uses the other's claimed corridor | claims disabled (control build flag in tests only): routes may coincide |
| P03 | fixing element receives the assault element's phase-line receipt | shift within one hop plus 1 s; no round crosses the assault lane afterwards | none |
| P04 | platoon commander killed | squads continue current drills; succession per template; new directives resume within the template delay plus cadence | none |
| P05 | believed strength ratio below one half, no support | Withdraw tasks with rally points inside each squad's area; alternating bounds | ratio above one: no withdrawal |
| P08 | equal strength on open ground; no covered flank route | fixing squad delivers fire on the group; all other squads advance at least 40 m within 90 s of contact in bounding overwatch in own corridors; no Reserve and no platoon_blocked after branch selection | believed ratio about 0.6 without superiority: Fix and Observe, then Withdraw within 45 s plus transport; beliefs and orders use production sensing/transport |
| P07 | four squads on open ground, no enemy within 200 m; production sensing and reports | front displacement at least 100 m by 120 s; no Secure node before contact; at most six directives per squad in two minutes | contact at 90 m activates Fix and Flank through production sensing and transport |
| P06 | directive expiry | every directive renewed or replaced within 60-90 s; no directive older than 90 s is executed | none |

## 3. Scenario families for the generator

All families produce `GeneratedScenario` records validated by `ValidateScenario` before use. Parameters are drawn from the ranges below by the family RNG. Deployment areas never have a line of sight to each other at start unless the family says so.

| Family | Map | Enemy and objective | Cover and obstacles | Armies |
|---|---|---|---|---|
| F1 defended position | half sizes 90-140 by 85-120 | 4-12 defenders in cover around an objective of radius 10 m, 60-140 m from the attacker deployment; support weapon per side yes or no | 3-8 low cover pieces and 0-2 tall pieces near the objective; 1-3 approach corridors 6-20 m wide formed by obstacle bands; screening obstacles between deployments | attackers 2-3 squads with masks; defenders 1-2 squads |
| F2 meeting engagement | half sizes 120-170 by 100-150 | both sides advancing toward a central objective of radius 15 m or none (deathmatch) | cover density 0.5-3 pieces per 1000 square metres, mixed low and tall | 3-4 squads per side, support weapon per side yes or no |
| F3 urban block | half sizes 100-140 by 90-120 | objective is one building; 6-10 defenders | 2-6 buildings via `AddBuilding` on a grid with 12-20 m streets; low walls along streets; buildings added before free obstacles | 2-3 attacking squads; 1-2 defending |
| F4 trench line (later) | trench map primitives | objective is a trench junction | randomised crossing count and exposed centre width | as the trench map |

Draw policy:

- Development draws: genSeeds 1-30 per family, battle seeds 107, 108 and 109, giving 90 runs per family per controller. These are open and may be inspected.
- Validation draws: 20 genSeeds per family derived from `hash(candidate fingerprint, family, salt)` with one battle seed derived the same way, run once per candidate and reported in full. The salt is recorded in the report; the draws are never reused for a later candidate.
- Sparring partners: legacy, candidate90 and the previous drills candidate, each run on the same `(family, genSeed, seed)` keys so deltas are paired.

## 4. Metric definitions

All metrics are computed by `tools/family_metrics.py` from `evaluation.jsonl` (0.2 s frames), `events.jsonl`, `trace.jsonl` and `shots.jsonl`. Observer facts never feed policy. Duration weighting uses the frame interval.

| Metric | Definition |
|---|---|
| Nearest-squadmate distance | for each frame and each living soldier with a living squadmate, the horizontal distance to the nearest living member of the same squad; report the duration-weighted median and the share of samples under 2 m; also the 10th and 90th percentiles |
| Squad radius | duration-weighted root mean square distance of living members to the squad's living centroid |
| Inter-squad separation | minimum distance between living centroids of squads of the same team, per frame; report the duration-weighted median and the share of frames under 10 m |
| Area-of-operation compliance | share of moving-soldier samples inside the squad's assigned area, when one exists |
| Covered-movement share | over samples where a soldier is moving under a drill movement task with a known threat sector, the share where a friendly base-of-fire shot (from `shots.jsonl`, `element_role` base of fire or support weapon, same team) impacted within 8 m of that sector in the preceding 6 s |
| Assault arrival angle | at the first frame where a manoeuvre-element member has a physical line to a live defender within 40 m of the objective, the angle at that defender between the member and the base-of-fire element centroid; report the median and the share at or above 45 degrees |
| Exposed without firing | duration-weighted seconds per living soldier where `observer_exposed` is true and the soldier is stationary with no firing solution (`investigate_engagement.py` definition) |
| Suppression before assault | share of SquadAttack instances whose Move stage began after the base-of-fire established flag |
| Break contact when outnumbered | share of instances where the leader's believed strength ratio (from the traced mental map) fell below one half and BreakContact or Withdraw was accepted within 20 s |
| Friendly-fire hits | count of `Hit` events where actor and target share a team, per 100 soldier-minutes |
| Gun-silent seconds | for each gunner casualty, seconds until the next support-weapon shot by the same squad, or the remaining battle time if none |
| Outcome | winner, draw, casualties per side as fractions of initial actives, casualty exchange ratio, time of decision |
| Contact-to-order latency | time from the first `Contact` event received by a leader to the next `drill_accepted` for that squad |
| Order reversals per minute | assignments whose destination returns within 5 m of the destination issued two orders earlier within 30 s |
| Directive churn | platoon directives issued per squad per minute |
| Succession latency | time from a leader casualty to the successor's first issued order |

Reporting: `tools/report_family.py` prints per controller and metric the count, mean, median and bootstrap 95 % confidence interval (2000 resamples, fixed RNG), the paired delta against each sparring partner on matching keys with its interval, and a per-family breakdown. Casualty metrics are fractions of initial actives because the generated armies are asymmetric.

## 5. Phase 0 baseline protocol

```bash
./scripts/battle-lab.sh --seconds 1 --out .local/build-check
for seed in 100 101 102 103 104 105 106 107 108 109; do
  .local/lab/battle-lab --legacy-ai --seed $seed --seconds 360 --evaluate --no-trace --out .local/baselines/legacy/works
  .local/lab/battle-lab --seed $seed --seconds 360 --evaluate --no-trace --out .local/baselines/candidate90/works
  .local/lab/battle-lab --legacy-ai --terrain 1 --seed $seed --seconds 360 --evaluate --no-trace --out .local/baselines/legacy/trenches
  .local/lab/battle-lab --terrain 1 --seed $seed --seconds 360 --evaluate --no-trace --out .local/baselines/candidate90/trenches
done
python3 tools/measure_dispersion.py .local/baselines/legacy/works .local/baselines/candidate90/works --out .local/baselines/dispersion-works.json
python3 tools/evaluate_tactics.py .local/baselines/legacy/works .local/baselines/candidate90/works --out .local/baselines/tactics-works.json
```

The report from these commands is the reference every later candidate is compared against. The frozen nine and thirty cases are run with `tools/run_ai_acceptance.py` and reported alongside as regression information only.
