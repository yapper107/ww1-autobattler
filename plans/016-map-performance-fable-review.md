**Verdict.** No blocker in cache ownership, route correctness or cover derivation as written. Two structural gaps remain in process lifetime and one in ID validation. Everything else is measurement, not design.

## Findings

**Shared mutable caches are correct today but need a determinism pin.** `MakeBattleMap` copies the immutable battlefield's `Map` (`TerrainSim.cpp:35`), and that copy carries the `navigation`, `spatial` and `coverCatalog` pointers already populated during import validation (`ImportedMap.h:63-70`). Every `Record` in the process shares one `NavigationCache` (`EnvironmentSim.cpp:35-45`), mutated by queries. No thread use exists anywhere in the sources, so there is no race. The structural requirement is that results be independent of cache state: `importedFloorRoutes` and `endpointParents` are pure functions of geometry, and the 16384 bound only causes recomputation. Prove it with one test: same imported config simulated twice in one process must match a fresh-process run and a manifest rerun by digest. Destruction remains safe because `InvalidateGeometry` bumps the revision and resets the cache only on the mutated copy.

**Generator process lifetime has two holes.** `EndPlay` closes the handle but does not terminate the child (`BattleGameMode.cpp:93-95`), so an orphan keeps running after a session ends. A new session can start another generator, and both write the same `{kind}.army.tmp` before `replace` (`generate_maps.py:62`). A truncation race can publish a partial file. The loader rejects it and Unreal keeps the previous map (`:285-290`), so nothing crashes, but the user sees a failure. Fix: terminate the process in `EndPlay`, suffix the temporary name with the process id, and add a wall-clock timeout to the `IsValid()` guard in `GenerateMap` (`:98`) so a hung generator does not lock the button forever.

**Cover ID ranges can collide.** The loader accepts imported cover IDs at or above 1,000,000 with no upper bound (`ImportedMap.h:41`), while generated face samples start at 2,000,000 plus obstacle id times 2048 (`EnvironmentSim.cpp:149`). Add an upper bound below 2,000,000 in the loader. The per-obstacle slot budget is safe: with half-extents capped at 500 m, four faces yield at most about 1,340 samples, under 2,048.

**Route graph review.** The flat-component rejection applies only below grade (`EnvironmentSim.cpp:387`), the endpoint Dijkstra fields key on exact link endpoints (`:321-326`), string pulling revalidates every segment (`:358-363`), and the small graph covers floor, ramp, grade, ramp, floor. Mid-ramp starts are handled by `attach` (`:412-419`), which replaces the authored finish-the-ramp rule. Authored maps never enter this branch (`:442`). One fragility: non-integer link endpoints silently fall back to per-query A* (`:326`). Accept it, or have the loader require integer endpoints.

**Cover sampling review.** Faces of every blocking or half-cover solid are sampled at 3 m, filtered by `Walkable` and the six-ray `ProtectedAt` (`:142-166`). Treads are excluded by flag, internal earth seams fail walkability, and standing cover degrades to crouch rather than being dropped. The solid-face peek sits 0.65 m past the corner on the face line, versus 2 m beyond in the authored rule (`:176`). That is a behaviour difference for replay review, not a structural fault.

## Non-blocking cautions

- **Revision recompute cliff.** Any destruction event on the town resamples up to roughly 19k candidates with six rays each and rebuilds all endpoint fields. Measure one mid-battle removal on the city map before relying on destruction there.
- **Mirror divergence.** New+ writes into the Windows mirror, and `scripts/build.sh` rsyncs with delete from the repo. A map shown in Unreal may not exist in the repo. The manifest battlefield digest is the only durable record, so keep it mandatory.
- **BeginPlay ordering is correct**: `SelectMap` precedes `InitialFrame` and `MakeBattleMap` (`BattleGameMode.cpp:65-67`) and clears family and scenario.

## Minimum checks before closing

- Warmed-cache, cold-cache and manifest-rerun digests equal for both imported maps.
- Two-link route test: own trench floor to enemy fire line returns a path; own floor to own dugout stays on the floor layer.
- Corrupt and truncated `.army` files rejected with the previous map retained.
- Generator terminated on `EndPlay`, and a second launch refused while one runs.
