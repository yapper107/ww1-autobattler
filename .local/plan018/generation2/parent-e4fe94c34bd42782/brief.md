# Proposal brief: improve the drills controller from node `e4fe94c34bd42782`

You are proposing ONE general change to a squad and platoon AI in a deterministic C++17 battle simulator. It is scored by attacking enemy soldiers who hold cover on generated town maps and never relocate. Score per battle: fraction of defenders put out of action minus half the fraction of attackers lost.

## Where the parent stands
- town-attack-dev: attack score +0.259 (lower bound +0.176), cleared 0% of battles, defenders lost 36%, attackers lost 20%; by layout building +0.391, clusters +0.227, spread +0.156
- town-attack-val: attack score +0.337 (lower bound +0.230), cleared 7% of battles, defenders lost 46%, attackers lost 24%; by layout building +0.512, clusters +0.305, spread +0.165
- guards failing on the parent: attacker_firing_squads, firing_squads (a node that fails a guard has NO score, so clearing these comes first)
  - attacker_firing_squads: firing_squads index_ge 3 on town-attack-dev, town-attack-val; failed in 12 battles, e.g. city-21-107-building12s21, city-25-107-spread12s25, city-29-107-clusters12s29
  - firing_squads: firing_squads min_ge 3 on town-dev, trench-dev; failed in 2 battles, e.g. city-23-107, city-37-107
- selectors already failing (do not count against you, do not add to them): D02, D07, D08, D17

## What its worst attacks show
- 660 squad-seconds static while the controller stated: "FightHere: nearest known group; squad chooses its drill" (PlatoonTaskSim.cpp:139)
- 370 squad-seconds static while the controller stated: "recovering: column position unavailable; retain moving members and retry after arrival" (DrillSim.cpp:231)
- 250 squad-seconds static while the controller stated: "renew committed intent (75 s lifetime)" (PlatoonTaskSim.cpp:121)
- 250 squad-seconds static while the controller stated: "Blocked: local route/column remedies exhausted; column position unavailable"
- 220 squad-seconds static while the controller stated: "resolved advance endpoint or route cannot meet forward minimum; no unchanged renewal" (PlatoonTaskSim.cpp:156)
- 110 squad-seconds static while the controller stated: "radio assault committed: wait for delivered support evidence" (SquadDrillSim.cpp:380)
- 100 squad-seconds static while the controller stated: "contact broken or rally reached: Occupy and report strength" (SquadDrillSim.cpp:549)
- 50 squad-seconds static while the controller stated: "matching received arrivals: deployment leg complete" (DrillSim.cpp:448)
- 50 squad-seconds static while the controller stated: "HelpSquad: received need unanswered for one report round trip; nearest squad with capacity" (PlatoonTaskSim.cpp:146)
- city-26-107-clusters12s26: score -0.042; attackers static 18% of squad-seconds; first attacker shot at 261 s; movement orders replaced within 3 s: none
- city-32-107-clusters12s32: score -0.026; attackers static 29% of squad-seconds; first attacker shot at 132 s; movement orders replaced within 3 s: none
- city-37-107-spread12s37: score +0.073; attackers static 39% of squad-seconds; first attacker shot at 170 s; movement orders replaced within 3 s: none

## Rules
- Change only the drills controller's behaviour. Its policy lives mainly in: DrillSim.cpp, SquadDrillSim.cpp, PlatoonTaskSim.cpp, PositionSim.cpp, LeaderSim.cpp (under `Unreal/Source/ArmyPrototype/Sim/`). The other controllers and the static defenders must stay bit-identical: a parity guard reruns them on your build and rejects any digest change, so shared soldier-level code is off limits.
- Policy may use only the officer's own memory, own orders, received reports and permitted squad-member fields. Never read enemy truth, the frame, the shot record or observer fields.
- One general mechanism, as small as it can be. No per-map, per-seed or per-layout constants. No new draws from the battle RNG.
- Do not edit tests, fixtures, tools, maps or `TerrainSim.cpp`. Do not commit, reset or stash.

## Check your own work before you finish
- `./scripts/battle-lab.sh --version` must build.
- Run two of the parent's worst battles above on your build (`.local/lab/battle-lab --drills --map <map> --static-defence <layout> --defenders 12 --defence-seed <seed> --seed 107 --seconds 600 --evaluate --no-trace --out <dir>`; the key reads `city-<map seed>-107-<layout>12s<defence seed>`, the map file is `/home/jchan/ww1-autobattler/.local/loop/maps/<map seed>/city-<map seed>.army`; use that absolute path, your worktree has no copy) and compare casualties with the figures above. Attack battles run 600 s: pass `--seconds 600`.
- Finish with: the mechanism in two sentences, the files and functions touched, what you measured, and what could go wrong. If the idea did not help in your own check, say so; a negative result is still recorded.
