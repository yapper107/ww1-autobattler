# Project working instructions

## Roles and scope

- The user is the game designer. The assistant is the programmer.
- Read `docs/DESIGN_VISION.md` before implementing gameplay. Preserve the core vision while explaining concrete technical or design tradeoffs.
- Distinguish the user's decisions from implementation assumptions and proposed features. The full vision is not the first prototype's feature list.
- Continue routine implementation and verification within the user's requested scope. Ask concise questions when a missing design decision materially changes the intended player experience.
- Keep the existing repository name unless the user requests a rename. Follow the original fantasy/retrofuturistic setting in the design document.

## Simulation principles

- The player prepares the army before battle. Combat is autonomous.
- Keep authoritative battle logic separate from Unreal rendering and presentation.
- Officers make decisions using their own knowledge and received reports. Never give tactical decision code unrestricted access to hidden enemy state.
- Record the information and reasons behind decisions so behavior can be inspected and explained.
- Keep persistent soldier identities distinct from temporary battle entities.
- Prefer simple, testable implementations. Add architectural complexity in response to actual requirements and measurements.

## Repository and tooling

- This WSL checkout is the authoritative source repository.
- Read `docs/DEVELOPMENT.md` for the verified Windows toolchain and build workflow.
- Keep build output, caches, installers, local machine settings, credentials, and temporary experiments out of Git.
- Track source assets, configuration, and scripts needed to reproduce the project. Do not ignore Unreal's `Build/` directory wholesale.
- Before introducing large binary assets, configure Git LFS and confirm it works in the active checkout.
- Validate changes with appropriate builds or behavior checks. Report what was actually tested and any limitations.

## AI investigation workflow

- Read `docs/BATTLE_LAB.md` when diagnosing battle behavior. Use structured traces and the offline analyzer to inspect the plan, received information, execution, and outcome before attributing a cause.
- Keep observer facts distinct from actor knowledge. Treat automatically flagged causes as hypotheses and link findings to concrete trace evidence.
- Compare fixed configurations against preserved baseline runs. Report remaining unexplained behavior and diagnostic overhead; do not equate movement or firing counts with tactical quality.
- Prepared map edits must use the geometry mutation/invalidation interface. Preserve stable IDs and revision-correct caches for future destruction.
