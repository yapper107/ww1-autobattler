# Proposal brief: improve the legacy controller from node `a1498179dd29bf64`

You are proposing ONE general change to a squad and platoon AI in a deterministic C++17 battle simulator. It is scored by attacking enemy soldiers who hold cover on generated town maps and never relocate. Score per battle: fraction of defenders put out of action minus half the fraction of attackers lost.

## Where the parent stands
- town-attack-dev: attack score +0.544 (lower bound +0.456), cleared 30% of battles, defenders lost 72%, attackers lost 35%; by layout building +0.613, clusters +0.542, spread +0.477
- town-attack-val: attack score +0.728 (lower bound +0.634), cleared 53% of battles, defenders lost 89%, attackers lost 32%; by layout building +0.840, clusters +0.635, spread +0.554
- guards failing on the parent: attacker_firing_squads, friendly_fire, selectors (a node that fails a guard has NO score, so clearing these comes first)
  - attacker_firing_squads: firing_squads index_ge 3 on town-attack-dev, town-attack-val; failed in 1 battles, e.g. city-948851-107-clusters12s948851
  - friendly_fire: friendly_hits_per_100_soldier_minutes ci_lower_le_0  on town-dev
  - selectors: None None  on
- selectors already failing (do not count against you, do not add to them): D02, D07, D08, D17

## What its worst attacks show
- 910 squad-seconds static while the controller stated: "PREPARE MOVEMENT" (PlanSim.cpp:10)
- 330 squad-seconds static while the controller stated: "SEARCH"
- 130 squad-seconds static while the controller stated: "BLOCKED / HOLD" (PlanSim.cpp:10)
- 130 squad-seconds static while the controller stated: "BOUND"
- city-38-107-clusters12s38: score +0.234; attackers static 33% of squad-seconds; first attacker shot at 40 s; movement orders replaced within 3 s: {'BOUND / MOVE -> BOUND / COVER': 10, 'FLANK -> BOUND / COVER': 3, 'ADVANCE -> REGROUP': 3, 'FLANK -> BOUND / MOVE': 1, 'BOUND / MOVE -> REGROUP': 1, 'FLANK -> REGROUP': 1}
- city-23-107-clusters12s23: score +0.297; attackers static 25% of squad-seconds; first attacker shot at 72 s; movement orders replaced within 3 s: {'BOUND / MOVE -> BOUND / COVER': 16, 'FLANK -> BOUND / COVER': 15, 'FLANK -> HOLD': 11, 'BOUND / MOVE -> HOLD': 6, 'ADVANCE -> BOUND / COVER': 6, 'FLANK -> CLEAR FIRING LANE': 5, 'FLANK -> BOUND / MOVE': 4, 'ADVANCE -> HOLD': 4}
- city-24-107-building12s24: score +0.318; attackers static 4% of squad-seconds; first attacker shot at 84 s; movement orders replaced within 3 s: {'BOUND / MOVE -> BOUND / COVER': 26, 'FLANK -> HOLD': 26, 'ADVANCE -> REGROUP': 9, 'ADVANCE -> FLANK': 6, 'BOUND / MOVE -> HOLD': 4, 'FLANK -> BOUND / COVER': 4, 'FLANK -> WOUNDED SUPPORT': 3, 'FLANK -> CLEAR FIRING LANE': 2}

## Rules
- Change only the legacy controller's behaviour. Its policy lives mainly in: CommandSim.cpp, ManeuverSim.cpp, PlanSim.cpp, CoordinationSim.cpp, PlatoonSim.cpp (under `Unreal/Source/ArmyPrototype/Sim/`). The other controllers and the static defenders must stay bit-identical: a parity guard reruns them on your build and rejects any digest change, so shared soldier-level code is off limits.
- Policy may use only the officer's own memory, own orders, received reports and permitted squad-member fields. Never read enemy truth, the frame, the shot record or observer fields.
- One general mechanism, as small as it can be. No per-map, per-seed or per-layout constants. No new draws from the battle RNG.
- Do not edit tests, fixtures, tools, maps or `TerrainSim.cpp`. Do not commit, reset or stash.

## Check your own work before you finish
- `./scripts/battle-lab.sh --version` must build.
- Run two of the parent's worst battles above on your build (`.local/lab/battle-lab --legacy-ai --map <map> --static-defence <layout> --defenders 12 --defence-seed <seed> --seed 107 --seconds 600 --evaluate --no-trace --out <dir>`; the key reads `city-<map seed>-107-<layout>12s<defence seed>`, the map file is `/home/jchan/ww1-autobattler/.local/loop/maps/<map seed>/city-<map seed>.army`; use that absolute path, your worktree has no copy) and compare casualties with the figures above. Attack battles run 600 s: pass `--seconds 600`.
- Finish with: the mechanism in two sentences, the files and functions touched, what you measured, and what could go wrong. If the idea did not help in your own check, say so; a negative result is still recorded.
