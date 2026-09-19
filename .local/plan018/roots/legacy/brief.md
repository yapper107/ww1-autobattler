# Proposal brief: improve the legacy controller from node `b8f9e3b64c1fb65e-legacy`

You are proposing ONE general change to a squad and platoon AI in a deterministic C++17 battle simulator. It is scored by attacking enemy soldiers who hold cover on generated town maps and never relocate. Score per battle: fraction of defenders put out of action minus half the fraction of attackers lost.

## Where the parent stands
- town-attack-dev: attack score +0.537 (lower bound +0.448), cleared 20% of battles, defenders lost 75%, attackers lost 42%; by layout building +0.657, clusters +0.533, spread +0.422
- town-attack-val: attack score +0.589 (lower bound +0.487), cleared 20% of battles, defenders lost 77%, attackers lost 37%; by layout building +0.583, clusters +0.665, spread +0.482
- guards failing on the parent: none
- selectors already failing (do not count against you, do not add to them): D02, D07, D08, D17

## What its worst attacks show
- 730 squad-seconds static while the controller stated: "PREPARE MOVEMENT" (PlanSim.cpp:10)
- 200 squad-seconds static while the controller stated: "protected maneuver wins candidate comparison" (ManeuverSim.cpp:308)
- 170 squad-seconds static while the controller stated: "BOUND"
- 110 squad-seconds static while the controller stated: "BLOCKED / HOLD" (PlanSim.cpp:10)
- 40 squad-seconds static while the controller stated: "SEARCH"
- city-28-107-spread12s28: score +0.234; attackers static 23% of squad-seconds; first attacker shot at 62 s; movement orders replaced within 3 s: {'FLANK -> CLEAR FIRING LANE': 36, 'FLANK -> HOLD': 13, 'ADVANCE -> BOUND / COVER': 12, 'FLANK -> REGROUP': 11, 'FLANK -> BOUND / COVER': 8, 'BOUND / MOVE -> HOLD': 8, 'BOUND / MOVE -> BOUND / COVER': 6, 'ADVANCE -> REGROUP': 6}
- city-31-107-spread12s31: score +0.276; attackers static 26% of squad-seconds; first attacker shot at 63 s; movement orders replaced within 3 s: {'FLANK -> HOLD': 19, 'FLANK -> BOUND / COVER': 18, 'BOUND / MOVE -> BOUND / COVER': 15, 'ADVANCE -> FLANK': 13, 'ADVANCE -> REGROUP': 11, 'FLANK -> REGROUP': 8, 'FLANK -> ADVANCE': 7, 'BOUND / MOVE -> FLANK': 5}
- city-30-107-building12s30: score +0.302; attackers static 3% of squad-seconds; first attacker shot at 42 s; movement orders replaced within 3 s: {'FLANK -> CLEAR FIRING LANE': 220, 'FLANK -> HOLD': 45, 'BOUND / MOVE -> BOUND / COVER': 20, 'ADVANCE -> FLANK': 19, 'FLANK -> BOUND / COVER': 16, 'ADVANCE -> REGROUP': 12, 'FLANK -> ADVANCE': 9, 'ADVANCE -> HOLD': 5}

## Rules
- Change only the legacy controller's behaviour. Its policy lives mainly in: CommandSim.cpp, ManeuverSim.cpp, PlanSim.cpp, CoordinationSim.cpp, PlatoonSim.cpp (under `Unreal/Source/ArmyPrototype/Sim/`). The other controllers and the static defenders must stay bit-identical: a parity guard reruns them on your build and rejects any digest change, so shared soldier-level code is off limits.
- Policy may use only the officer's own memory, own orders, received reports and permitted squad-member fields. Never read enemy truth, the frame, the shot record or observer fields.
- One general mechanism, as small as it can be. No per-map, per-seed or per-layout constants. No new draws from the battle RNG.
- Do not edit tests, fixtures, tools, maps or `TerrainSim.cpp`. Do not commit, reset or stash.

## Check your own work before you finish
- `./scripts/battle-lab.sh --version` must build.
- Run two of the parent's worst battles above on your build (`.local/lab/battle-lab --legacy-ai --map <map> --static-defence <layout> --defenders 12 --defence-seed <seed> --seed 107 --seconds 360 --evaluate --no-trace --out <dir>`; the key reads `city-<map seed>-107-<layout>12s<defence seed>`, maps are under `.local/loop/maps/<map seed>/`) and compare casualties with the figures above.
- Finish with: the mechanism in two sentences, the files and functions touched, what you measured, and what could go wrong. If the idea did not help in your own check, say so; a negative result is still recorded.
