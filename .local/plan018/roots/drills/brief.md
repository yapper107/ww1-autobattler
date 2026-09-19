# Proposal brief: improve the drills controller from node `b8f9e3b64c1fb65e-drills`

You are proposing ONE general change to a squad and platoon AI in a deterministic C++17 battle simulator. It is scored by attacking enemy soldiers who hold cover on generated town maps and never relocate. Score per battle: fraction of defenders put out of action minus half the fraction of attackers lost.

## Where the parent stands
- town-attack-dev: attack score +0.215 (lower bound +0.134), cleared 0% of battles, defenders lost 32%, attackers lost 20%; by layout building +0.252, clusters +0.249, spread +0.149
- town-attack-val: attack score +0.390 (lower bound +0.274), cleared 0% of battles, defenders lost 51%, attackers lost 23%; by layout building +0.582, clusters +0.365, spread +0.186
- guards failing on the parent: attacker_firing_squads, firing_squads
- selectors already failing (do not count against you, do not add to them): D02, D07, D08, D17

## What its worst attacks show
- 360 squad-seconds static while the controller stated: "matching received arrivals: traveling stage complete" (DrillSim.cpp:441)
- 290 squad-seconds static while the controller stated: "received platoon directive" (DrillSim.cpp:373)
- 260 squad-seconds static while the controller stated: "help: occupy protected slots covering neighbour's group" (SquadDrillSim.cpp:354)
- 220 squad-seconds static while the controller stated: "FightHere: nearest known group; squad chooses its drill" (PlatoonTaskSim.cpp:139)
- 190 squad-seconds static while the controller stated: "Blocked: local route/column remedies exhausted; column position unavailable"
- 90 squad-seconds static while the controller stated: "HelpSquad: received need unanswered for one report round trip; nearest squad with capacity" (PlatoonTaskSim.cpp:146)
- 70 squad-seconds static while the controller stated: "occupy protected firing positions; wait for element delivered rounds" (SquadDrillSim.cpp:518)
- 70 squad-seconds static while the controller stated: "received platoon directive; retain held slots"
- 60 squad-seconds static while the controller stated: "rearward bound: emergency takes precedence over attack or fallback" (SquadDrillSim.cpp:429)
- 60 squad-seconds static while the controller stated: "effective incoming fire without superiority; no protected bound: hold existing cover" (DrillSim.cpp:191)
- 60 squad-seconds static while the controller stated: "recovering: column position unavailable; retain moving members and retry after arrival" (DrillSim.cpp:227)
- 50 squad-seconds static while the controller stated: "resolved advance endpoint or route cannot meet forward minimum; no unchanged renewal" (PlatoonTaskSim.cpp:156)
- city-24-107-building12s24: score +0.010; attackers static 22% of squad-seconds; first attacker shot at 293 s; movement orders replaced within 3 s: none
- city-28-107-spread12s28: score +0.021; attackers static 25% of squad-seconds; first attacker shot at 218 s; movement orders replaced within 3 s: none
- city-27-107-building12s27: score +0.031; attackers static 29% of squad-seconds; first attacker shot at 354 s; movement orders replaced within 3 s: none

## Rules
- Change only the drills controller's behaviour. Its policy lives mainly in: DrillSim.cpp, SquadDrillSim.cpp, PlatoonTaskSim.cpp, PositionSim.cpp, LeaderSim.cpp (under `Unreal/Source/ArmyPrototype/Sim/`). The other controllers and the static defenders must stay bit-identical: a parity guard reruns them on your build and rejects any digest change, so shared soldier-level code is off limits.
- Policy may use only the officer's own memory, own orders, received reports and permitted squad-member fields. Never read enemy truth, the frame, the shot record or observer fields.
- One general mechanism, as small as it can be. No per-map, per-seed or per-layout constants. No new draws from the battle RNG.
- Do not edit tests, fixtures, tools, maps or `TerrainSim.cpp`. Do not commit, reset or stash.

## Check your own work before you finish
- `./scripts/battle-lab.sh --version` must build.
- Run two of the parent's worst battles above on your build (`.local/lab/battle-lab --drills --map <map> --static-defence <layout> --defenders 12 --defence-seed <seed> --seed 107 --seconds 360 --evaluate --no-trace --out <dir>`; the key reads `city-<map seed>-107-<layout>12s<defence seed>`, maps are under `.local/loop/maps/<map seed>/`) and compare casualties with the figures above.
- Finish with: the mechanism in two sentences, the files and functions touched, what you measured, and what could go wrong. If the idea did not help in your own check, say so; a negative result is still recorded.
