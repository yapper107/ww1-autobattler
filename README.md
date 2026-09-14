# Persistent Army Autobattler

"You build the army. Your officers command the battle. Your soldiers try to survive it."

A persistent-army management game with autonomous tactical battles. The player recruits, equips, organizes, and prepares an army. Officers command during combat using the information available to them, and surviving soldiers carry their experience and injuries into later battles.

## Design

The designer's original [master design vision](docs/DESIGN_VISION.md) is the project's starting point. It describes the intended game, including ideas that remain open to refinement. It is not a commitment to implement every system in the first prototype.

The setting is an original fantasy/retrofuturistic world undergoing industrialized magical warfare. The repository's existing name is a project identifier.

The user owns game design, priorities, and playtest feedback. Codex handles programming, debugging, technical proposals, and verification.

## Development status

- This repository is the authoritative source checkout.
- The Windows development environment has passed a minimal Unreal C++ compile and link check.
- The playable 32v32 Fractured Works deathmatch battlefield (340 × 300 metres) (four squads of eight per side) in `Unreal/` includes physical projectiles, stance-aware cover, sergeant/corporal orders and delayed lieutenant/platoon-sergeant coordination, delayed reports, succession, individual reaction delays, sustained MG overwatch, suppression-sensitive 3D dispersion, an orbiting/tilting camera, active wounded support, two-floor enterable buildings with stairs and window firing, default cover observation, reported danger and flanking, squad progress recovery, friendly firing-lane clearance, alternating fireteam bounds, small window teams, useful overwatch checks, doorway/stair traffic coordination, earlier personal shelter reactions, sustained hold-and-engage behavior, tall sight blockers, range-limited personal spotting, 136 individual cover objects, sector searches with post-contact release, local strength assessments for covered advances/withdrawals, and close camera zoom.
- The simulator also builds independently with Linux `g++` for fast behavior checks.

The AI now uses committed squad plans and prepared opportunities. Structured battle traces and an offline investigator explain behavior without watching playback; revisioned spatial/navigation caches support future destructible geometry. See [battle laboratory](docs/BATTLE_LAB.md) for commands and evidence interpretation.

See [prototype controls and scope](docs/PROTOTYPE.md) to play, and run `./scripts/test-sim.sh` to test the simulation.

See [development notes](docs/DEVELOPMENT.md) for the verified toolchain and workflow.

## Intended technical direction

Army preparation feeds an authoritative C++ battle simulation. The simulation produces a battle record that Unreal presents to the player. Simulation outcomes are independent of rendering.

AI perception and knowledge must remain distinct from the authoritative world state. Soldiers and officers act on their own observations and received reports.

Implementation will proceed through small playable milestones, with the designer evaluating behavior before larger systems are added.
