# Recovery gate findings: why layout 5 still fails

Status: investigation of source `d28f86681c7988cb`, 13 September 2026. Evidence comes from three `--recovery --encounter 5` runs (seeds 107, 108, 109), the unchanged strict evaluator, the gate and task investigators, and a line-of-sight probe compiled against the fixture geometry. Nothing here relaxes the acceptance criterion.

## Result summary

| Seed | Duration | Winner | Stage 0 released at | Movers reached final stage | Movers with a firing line at arrival | Strict |
| --- | ---: | --- | ---: | --- | --- | --- |
| 107 | 264 s | defenders | 63.4 s | no; plan cancelled at 115.2 s after stage 2 | 0 | fail |
| 108 | 232 s | attackers | 19.3 s | yes, 79.8 s; final release waited until 173.3 s | 2 arrived, 0 firing | fail |
| 109 | 142 s | defenders | 33.2 s | no; attackers eliminated | 0 | fail |

Digests: 107 `6787585881193533870`, 108 `14149910023360705047`, 109 `8139199817823496252`.

The task contract works as specified. Every task ends Done, Failed, or Superseded; same-task interruption and resumption is recorded 21, 12, and 19 times; no pause cites a merely Interrupted member. The failures are now in the drill's rules and in the fixture, not in execution bookkeeping. Seven mechanisms account for them.

## 1. The base of fire is one machine gun

Through the first 100 seconds of seed 107, soldier 7 is the only attacker who has fired. At t=30, 60 and 100, every rifleman on both attacking squads has zero rounds. Defenders sit at x≈30 behind their low wall; attackers start at x≈-62. That is 90 m, and rifle sight range is 70 m. Only the MG at 95 m can see anything. The defenders' MG, soldier 39, has 240 rounds by t=100 and is doing almost all the killing.

Consequences: "delivered rounds at the track" can only ever come from soldier 7, so every release in both squads waits on one weapon's burst and reload cycle; and riflemen assigned as base of fire stand in the open contributing nothing while being shot at. In seed 109 three attackers die at their start positions in the first 7.4 s.

## 2. The eight-second window resets on relay gaps and target switches

`coveringReady` in `RecoverySim.cpp` needs at least three rounds from `cmd.support` at a point within 10 m of `g.targetPosition` in the last 8 s, as received through delivery reports. An exposed stage then needs `coveringReady` to stay true for 8 continuous seconds, and any false sample resets `g.opportunity`.

Evidence in seed 107: the MG fires at defender 39 from 3 s, switches to defender 38 from 16 to 28 s, then returns to 39. Squad 0's target was fixed at 39 when the drill entered EstablishFire at 3.4 s, so the 12 s on defender 38 count for nothing and the clock restarts at 28 s. Release comes at 42.5 s. Squad 1 has no gun and depends on `sharedSupport`, which is squad 0's MG deliveries relayed leader to leader with a 6 s freshness limit. Two hops of message delay plus reaction plus the 2 s report cadence leave little margin inside that window, and every reload or relay gap resets the 8 s clock. Squad 1 releases at 63.4 s. The MG's own target choice is independent of the drill's target, so the drill is measuring something it does not control.

## 3. The arrival slots have no firing line onto the defensive position

The slot query validates a firing line to a single point, `q.target`, and only checks other tracks within 12 m of it. In seed 108 the chosen slot is (38,-22). The line-of-sight probe against the layout 5 geometry gives, from a 1.5 m eye:

| From | to (29,-4) | to (29,4) | to (29,0) | to (35,-13) | to (37,-18) |
| --- | --- | --- | --- | --- | --- |
| (38,-22) slot | blocked | clear | blocked | clear | clear |
| (34,-25) mover 8 at arrival | blocked | blocked | blocked | blocked | clear |
| (31,-27) mover 11 at arrival | blocked | blocked | blocked | blocked | blocked |
| (40,-20) | clear | clear | clear | clear | clear |
| (42,-18) | clear | clear | clear | clear | clear |

The eastern wall, centre (24,-18), half-width 12, height 3.5 m, ends at x=36. Its north-east corner blocks the slot at (38,-22) from two of the three defenders at x=29. A slot two to four metres further east sees all of them. The query's sample grid only offers ±1.5 m around low cover, so those points were never candidates. The movers' actual arrival positions are the previous stage's form-up cover, from which nothing at the main position is visible.

## 4. The final step is treated as an exposed crossing and never released

The last stage in seed 108 is 1.7 s long with 0.3 s exposed. Because `exposed` is `exposedSeconds >= 0.25`, it requires the full eight-second covering-fire window from a support element 95 m away. Stage 4 completes at 79.8 s, the two movers sit at the form-up cover 5 m from their slots, and the release arrives at 173.3 s. Ten seconds later a target report cancels the plan. The evaluator's "within 8 m" gate passed at 73.6 s with two movers; the firing-line gate failed because they were still behind the wall.

## 5. Target displacement cancels the whole plan

`useful` requires every mover slot to keep angle, line of sight and protection to the displaced track; any one failure sets `g.selected=false`, clears the route, and re-enters EstablishFire. In seed 107 at 115.2 s that discards a completed 100 m approach and produces route `2000000003` from (22,-30) to (29,-5), a destination inside the defenders' own position with a 4.2 s exposed first stage. It is immediately cancelled again by mechanism 6 and its replacement `2000000004` is never received by anyone before the movers are killed. Re-slotting from the current stage would have kept the approach.

## 6. A prepared shared support cancels and re-accepts the plan

When a squad without a gun first receives a usable delivery report, `plan_cancelled` "received effective covering-fire report supplies a prepared support element" fires and the identical route is re-accepted under a new id (107: 9.8 to 13.2 s; 108: 9.9 to 11.3 s; 109: 9.8 to 17.2 s; 107 again at 117.3 s). This resets `g.selected`, re-runs the query, and is why the gate investigator always shows the first route with no receipt. It should be an in-place change of `cmd.support`.

## 7. The fixture is not the fixture the test assumes

- **Defenders are not fixed.** `fixedDefender` only suppresses `advancing` and re-issues Hold at the current position; individual cover selection still moves them. In seed 107 defender 37 goes from (35,-20) to (29,-27), inside the southern lane, then to (11,-16) in the wall gap; 33, 35 and 36 also drift south-east. Squad 1 releases its movers at 63.4 s with defender 37 already known at (25,-29), sitting on the route's stage 1 destination. Soldiers 9 and 10 are killed on that lane at (-10,-29) and (22,-29). Stage screening is computed once at plan time and never rechecked at release.
- **Both attacking squads run the drill independently.** Squad 0, the squad with the MG, also splits off movers down the same lane; soldiers 2 and 3 die there. The base of fire is halved and the lane is shared.
- **Attackers start in the open at 90 m under an MG.** The first decision is made after losses. In 109 the squad is combat-ineffective before stage 0 releases.

## Ordered fixes

Each is small. Do them in this order and re-run the three seeds after each; the gate investigator distinguishes which gate moves.

1. **Fixture roles and pinning.** Squad 0 is base of fire as a whole squad; squad 1 is the maneuver squad as a whole. Pin defenders under `fixedDefender` so individual cover changes are limited to their initial shelter. This removes mechanisms 7b and 7a. It is what the platoon layer would do later; for the fixture it is a few lines in `CommandSim.cpp`.
2. **Sliding-window covering fire, bound to the target area.** Replace "eight continuous seconds of `coveringReady`" with "at least N rounds delivered in the trailing 10 s at any known track within 12 m of the target area". Count rounds from any friendly shooter, not only `cmd.support`. Scale the requirement with the stage's exposed seconds: a 2 s exposure needs a fraction of what a 10 s crossing needs. This removes mechanism 2 and most of the wait in mechanism 4.
3. **Final occupation released by the movers' own readiness.** When the movers report Done at the form-up cover and their slots are within a short distance, release the final step without a covering-fire window, and let the pair cover each other: first mover moves while the second aims from the form-up peek. Raise the exposed threshold from 0.25 s to a value that means an actual crossing. This removes mechanism 4.
4. **Slot query against the whole position.** Require a firing line to at least half of the known tracks in the target area and score by how many are visible. Extend the sample grid around cover to about 3 m and along the protected side of tall obstacles, so corner positions like (40,-20) become candidates. This removes mechanism 3.
5. **Re-slot instead of cancel on displacement.** On a material target move, re-run the slot query from the movers' current stage; keep the route and completed stages; only cancel when no slot is reachable within about 30 m. Never accept a destination within 15 m of the target area. Update `cmd.support` in place when a shared support appears. This removes mechanisms 5 and 6.
6. **Recheck stage screening at release.** Before releasing any stage, re-evaluate `screened` for the stage polyline against current tracks; if a track now overlooks it, hold the stage and re-query instead of walking into it.
7. **Riflemen who cannot see do not stand in the open.** In EstablishFire, riflemen with no firing line within their sight range go to protected cover, and the base-of-fire query uses `fireRange` from the actual shooters, not 95 m. Rifle area fire at a track's last position, from the plan's Phase 4, is the longer-term fix for mechanism 1; until then the drill must not count rifle "base of fire" that cannot fire.

Expected effect: fixes 1 to 4 should turn seed 108 into a strict pass, since its movers already arrive with the defenders alive; fixes 5 to 7 address the two seeds where the approach collapses. Run the nine-encounter matrix only after all three layout 5 seeds pass.

## Reproduction

```bash
./scripts/battle-lab.sh --recovery --encounter 5 --seed 107 --seconds 360 --evaluate --out .local/recovery-check/107
.local/lab/battle-lab --recovery --encounter 5 --seed 108 --seconds 360 --evaluate --out .local/recovery-check/108
.local/lab/battle-lab --recovery --encounter 5 --seed 109 --seconds 360 --evaluate --out .local/recovery-check/109
python3 tools/evaluate_routes.py .local/recovery-check/108/latest.json
python3 tools/investigate_engagement.py .local/recovery-check/108/latest.json
python3 tools/investigate_tasks.py .local/recovery-check/107/latest.json --out .local/recovery-check/tasks-107.json
```

The line-of-sight table was produced by a throwaway program that builds `MakeMGEncounter(config, 5, map, frame)` and calls `ClearLine3D` from each candidate point at 1.5 m to each defender position at 1.45 m. It is worth keeping as a focused test once fix 4 lands.

---

# Second pass: why source `d220f8cc8bfa343b` scores 1/3

Investigated 13 September 2026 against the repaired controller. Runs: `--recovery --encounter 5` seeds 107, 108, 109; digests `9331855787150085516`, `9518265499078922388`, `879215874165090514`. The strict evaluator was not modified for any number below.

## What the movers actually do now

Per-frame, seed 107, movers 10 and 11, route `2000000001`, recorded destination (33,-20):

| Time | Mover 10 | Mover 11 |
| ---: | --- | --- |
| 50.0 s | at (33,-20), moving to cover edge | at (32,-20), moving to cover edge |
| 51.8 s | (39,-20), 6 m from destination, sees six defenders, angle 135°, qualifies | (38,-21), 5 m, sees three defenders, angle 112°, qualifies |
| 52.8 s | (40,-20), 7 m, firing, solution, qualifies | (41,-22), **8.2 m**, sees six defenders, angle 137°, solution, **disqualified by distance** |
| 55.0 s | (40,-21), 7 m, solution, suppression 0.29, qualifies | (41,-24), **9 m**, solution, suppression 0.22, **disqualified by distance** |
| 59.6 s | retreated to (38,-24), suppression 0.86 | retreated to (41,-26), suppression 0.82 |

Seed 108 is the same shape: mover 11 holds targets, solution, and 135° at 8 to 9 m from the recorded destination from 53.4 s to 57.6 s and is excluded on distance; it is incapacitated at 58.2 s.

The drill's assault slots have shelters along the wall face at x≈32 to 35 and firing points at x≈38, three metres past the wall corner at x=36. The route's recorded destination is the shelter centroid. The evaluator's 8 m arrival radius, unchanged and correct in intent, is measured from that recorded point, so a mover standing one to two metres beyond its assigned firing point is counted as not having arrived even while it is delivering fire from the second angle.

## Recomputation with the same rule, different reference point

Same qualifying logic as `evaluate_routes.py`, run over the same frames:

| Seed | Radius 8 m from recorded destination (unchanged) | Radius 8 m from the assigned firing-point centroid (38,-21) | Radius 10 m from recorded destination |
| --- | --- | --- | --- |
| 107 | fail, best simultaneous overlap 0.8 s | **pass at 54.8 s, overlap 4.8 s, route completed** | pass at 54.8 s, 3.8 s |
| 108 | fail, 1.4 s | **pass at 55.4 s, overlap 5.0 s, route completed** | pass at 55.4 s, 5.0 s |
| 109 | pass at 149 s, 7.0 s | pass at 149 s, 7.0 s | pass at 149 s, 7.0 s |

The second column is not a relaxation. Both movers were alive, within a few metres of their assigned firing positions, each with a physical firing line onto a live defender at more than 45° from the base of fire, simultaneously, for nearly five seconds, and the route had completed. The recorded destination simply does not describe where the drill sends them.

## Fix

In `UpdateRecoveryDrill`, after the assault slots are chosen, record the route destination as the centroid of the assigned slots' firing points rather than their shelters. Planning can continue to path to the shelters; the destination the route reports is where the drill intends the movers to fight from. Re-slotting on displacement must update it the same way. Add a focused test that the recorded destination lies within 3 m of the mean assigned peek.

Expected result: 3/3 on layout 5 with the evaluator untouched. Then run layouts 6 and 7.

## What is still weak, and should not be hidden by the pass

- **The firing points are open ground 15 to 20 m from five to eight defenders.** There is no cover facing the defenders at the flank objective; the only low wall nearby, at (40,-26), runs north to south and shelters nothing from the north. Both movers reach suppression 0.8 within four to eight seconds of stepping out; in seeds 108 and 109 one mover is incapacitated there. A pass on this fixture is a costly second angle, not a safe one.
- **The defenders' machine gun is never suppressed.** During the final approach the attacking MG keeps firing at defender 39 from 95 m, and 39's suppression cycles 0.68, 0.42, 0.12, 0.59 while it fires 26 to 36 rounds at the movers in 14 s. Rifles at the base of fire cannot contribute at 90 m. The drill's release rule counts delivered rounds; it has no evidence of effect. A later release condition should require that fire from the position overlooking the slots has visibly dropped, which the leader can observe through received fire reports.
- **One corner, two shooters.** Both slots use the same wall corner, so the second mover must stand further into the open. The sim's line-of-sight test ignores soldier bodies, so a crouched mover at the corner with a standing mover directly behind would give both a firing line from one metre of step-out. The slot query's 1.5 m spacing rule forbids that pairing. A stacked high-low corner slot type would cut exposure without changing the geometry.
- **Movers overshoot their firing point by one to two metres.** Assigned peek x=38, observed x=40 to 41. The individual's own cover-edge search keeps stepping out toward its own nearest visible target after the slot is reached. The task's slot parameters should cap the step-out.

These four items are the next quality work once the gate passes; none of them is a reason to withhold the destination fix.
