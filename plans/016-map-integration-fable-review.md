Nothing further is needed; the importer, config plumbing, exporter and generator have been inspected. Review follows.

**Verdict.** The boundary is structurally sound: null pointer preserves authored behaviour, `SameConfig` compares the content digest (`BattleSim.h:255-256`), `MakeBattleMap` copies the immutable map (`TerrainSim.cpp:35`), and `InitialFrame` overlays positions and goals after the authored branch (`BattleSim.cpp:191-194`). Four blockers must be fixed before the Unreal build is worth screenshotting.

## Blockers

1. **Every imported cover record is marked `window=true`** (`ImportedMap.h:41`). That flag is a filter, not a label: legacy skips window candidates unless the soldier holds a Window or Overwatch task (`BattleSim.cpp:574`), and the maneuver, command, platoon and coordination searches all `continue` on it (`ManeuverSim.cpp:249`, `CommandSim.cpp:247`, `PlatoonSim.cpp:69`, `CoordinationSim.cpp:121,134`). Auto-derived cover also skips `building=true` solids (`EnvironmentSim.cpp:125`), and the town shells are buildings. Result: in the town, every controller sees almost no cover at all. Import records as `window=false` by default; add a stance/window column to the export so only true interior sills carry the window flag. Trenches are less affected because earth boxes still yield auto cover through the `halfCover && z<0` rule.

2. **Chained-link routing is declared but not implemented.** `linkedSurfaceRouting` exists on `Map` (`BattleSim.h:42`) and is set by the importer (`ImportedMap.h:58`), but nothing in `EnvironmentSim.cpp` reads it. Today a same-height query from own trench floor to enemy trench floor skips the link branch entirely, because it requires a height difference (`EnvironmentSim.cpp:269`), then fails on the disconnected floor layer. Confirmed boundary: add one fallback branch inside `FindPath`, entered only when `m.linkedSurfaceRouting` is true and the existing logic returned empty, that tries ordered link pairs (up via link A, floor path at the intermediate height, down via link B) and keeps the shortest. Authored maps never set the flag, so their digests cannot change, and the parity gate proves it. Do not touch `FindFloorPath` or the single-link branch.

3. **Reruns cannot reconstruct an imported battle.** The manifest writes only `terrain` (`Diagnostics.cpp:283`) and the rerun tool passes `--terrain` back (`rerun_battle.py:17`). The importer already retains the full source text and digest (`ImportedMap.h:17`). Write that text as `battlefield.army` in the run directory, add `battlefield_digest` and `battlefield_file` to the manifest, and have the CLI refuse a `--map` whose digest differs from the manifest. Confirm the 40/40 digest gate compares `gameplay_digest`, not the manifest text, before adding fields.

4. **Unreal can combine an imported map with encounters, and the terrain toggle becomes a no-op.** `BeginPlay` applies MG and cognitive encounters after `MakeBattleMap` (`BattleGameMode.cpp:63-64`), which the CLI rejects (`BattleSim.cpp:676`) but Unreal would not. The existing button flips `terrain` and rebuilds, which the battlefield pointer silently overrides (`BattleGameMode.cpp:214`). The selector must set both fields together as a four-state cycle, and `-ArmyMap` must force scenario 0 and family None. Also, the smoke check asserts on `terrain` (`:320-323`) and the road décor keys on it (`:95`); keep authored décor keyed to a null pointer, and draw imported decorations from the `D` records only.

## Trench overlap

The loader validates links against their slope (`ImportedMap.h:54-57`) but not flat-floor overlap with slope interiors. Since `Supported` returns the first matching surface (`EnvironmentSim.cpp:137`) and the export orders slopes first, an overlap becomes an unsupported hole at floor height, not a crash. Add one loader rule: no flat surface may overlap a sloped surface with positive area. On the generator side, the ramp attaches at whatever `line_x` returns for its y (`trenches.py:80-89`); if that y falls on a traverse, or within 2 m of a bay end, the square caps from `path_rects` (`geometry.py:68-75`) overlap the ramp rectangle. Constrain ramp placement to bay segments at least 4 m from either end and assert it in the Python tests. The 24 treads per slope match the authored construction (`TerrainSim.cpp:26-29`).

## Required checks before screenshots

- Legacy and cognition authored digests unchanged, drills trace parity unchanged, on the new source. This is mandatory since `BattleSim.h` changed and everything recompiles.
- Native certification per map: all 64 spawns and goals walkable, `FindPath` from each squad spawn to its goal and to the enemy front line (the two-link case), `ProtectedAt` at every cover record against a threat along its facing, and a standing-shot ray from the fire point.
- One short CLI battle per map per controller, with a rerun from its manifest producing the same digest.
- Frame time in Unreal with 2400 town actors and dynamic material instances (`BattleGameMode.cpp:76-87`). The grid layer for a 340 × 260 map is about 89k nodes per height; that is fine, but the spatial index and tactical visibility caches are unmeasured at this obstacle count.

## Unresolved for the user

- Trench goals sit at x = 0 in the open (`native.py:59`), so both platoons attack into no man's land rather than the enemy line. Correct for connection, but the replay will show it.
- Imported cover records carry no stance, so every position is crouch-only until the export adds a column.
