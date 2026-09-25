# Request to Astra — village map art pass (plan 029)

From: the Claude Code session overseeing plan 029 (claude-fable-5-1; its implementation agents are claude-opus-5-5), 23 September 2026.
For: GPT-6 Astra, in Codex, at Jordan's instruction: "Let's do the art pass now, pass it to Astra as
they are the better visual agent for this."

## Objective

Make the generated **village** map family look like a Somme-sector French village rather than a grid,
while keeping every tactical and technical property the generator already guarantees. Deliver a
revised `tools/mapgen/village.py` (and the files it owns) plus new previews for Jordan's judgement.

## Current state

- Generator and validator: `tools/mapgen/village.py`, `shells.py`, `kernel.py`, `support.py`, with
  village branches in `native.py`, `validate.py`, `render.py`, `preview.html`, `generate_maps.py`
  (`--kind village`, `--deadline`). Tests: `tests/test_mapgen.py::VillageGeneratorTests` (14 tests).
- Preview of seed 17: `.local/plan029/G/village-17-support.png` (and `-cutaway.png`, `preview/`).
  Generation stats for 60 seeds: `.local/plan029/G/stats-*.jsonl`, `stats.py`.
- The simulator side (ARMYMAP 2 importer, stacked floors, stairs, passages, window teams,
  concealment) is integrated on source 0c59ea67b5264b3b; G's village files import and pass
  `imported_map_tests` (7–11 stairs, 35–55 door passages each).

## What is wrong with the look (Jordan agreed this needs fixing before battles)

The layout is a 20 m checkerboard: same-sized hedged fields with the cell grid showing through; a thin
strip of houses along the through-road; a small farm compound; orchards as dots on a lattice; crater
rims spread evenly across every field; the sunken lane reads as a road bend. A real village of this
period has irregular fields of different sizes, houses crowding the road and the church square, large
walled farm compounds, orchards behind houses, and shell damage concentrated where the fighting was.

## What must be preserved (binding)

1. **The record contract** in `plans/029-village-verticality.md` ("Reconciled design decisions"), as
   F-A implemented it (the exact grammar is in that plan's Progress section): `ARMYMAP 2 village`,
   storey 3.2 m, stair `S kind 2` (slope 0.5–1.05, 1.2 m wide, one `L`, 8 treads), `B` footprints,
   `P` door passages, hedges `O flags&1` (1.8 m, ≥0.6 thick, block movement, gaps every 12–16 m),
   crater rims `O flags&2` h 0.6 non-blocking with prone `C` (crouch 2), lanes at −1.4 with earth
   complement and 6 m ramps. Caps: O 6000, S 1500, L 256, C 3000, D 1500, B 128, P 512.
2. **Determinism**: per-stage and per-cell `random.Random(f'village|{seed}|…')` streams, sorted
   candidates, no iteration over sets/dicts of strings, `round_geometry`, no numpy, Python 3.9 syntax
   (UE-bundled Python runs it in New+ with a 30 s budget; today one attempt is ≤1.8 s).
3. **Byte-identical Town and Trenches**: `tests/test_mapgen.py::test_golden_seed17_bytes` must pass;
   do not touch `city.py`/`trenches.py` behaviour.
4. **The acceptance rule**: supportability ≥ 0.70 per team (`support.py`), elevated-safe ≥ 40% of
   ground covers and ≥ 3 per two-storey building, the invariants, the bounded repair loop. Report the
   achieved shares; do not weaken thresholds.
5. Jordan's defaults: farmhouses always two-storey and 35% of houses; church tower solid; objective at
   the church square (80%) or the largest farm (20%); 3–6 craters per crater field on ~20% of open
   cells (cluster them, but keep the count band).
6. Budget: village solids ≤ 3400; two-storey ≤ 0.4 × houses + farmhouses.

## Suggested direction (Astra's call on the art; measure, don't guess)

- Replace the uniform cell grid with a field mosaic: merge 2–6 cells into irregular fields, jitter
  hedge lines (bent segments, not straight cell edges), vary hedge presence by field.
- A linear village: houses along both sides of the through-road and the side road, closer together,
  with garden walls and yards behind; the square ringed by houses, the church and a café/mairie.
- Farms as real compounds: 25–35 m walled courtyards with a gateway, farmhouse, barn and byre.
- Orchards behind houses, not as lattice dots in open fields.
- Craters clustered along the roads, around the objective and on the attacker's approaches.
- The sunken lane drawn as a lane: hedged banks both sides, visible ramps, crossing fields.
- Keep the through-road spine and the deployments at the map edges (spawns at x = ±160–164).

## Deliverables

- Revised generator files; `python3 -m unittest tests.test_mapgen` passing; new previews for seeds
  17, 5 and 1201 in `.local/plan029/G/art/`; a short report with per-seed supportability, solids,
  timings and the contradiction rate; an updated `docs/MAP_GENERATOR.md` village section.
- Do not write to `Unreal/Config/GeneratedMaps/` (the overseer promotes `village.army`).

## Coordination

- No simulator changes are needed for the art pass. If one becomes necessary, say so in the report
  rather than editing C++.
- Other plan 029 packages still in flight on the simulator: prone cover/craters (M-A2), vaulting (M-C),
  the native probe and pipeline wiring (G-3/G-4), the renderer (F-D). The art pass is independent.

## Addendum (23 September 2026, from the overseer)

- **Jordan's ruling on the objective:** test supportability against **several objectives per map**
  (church square, the largest farm, a crossroads) rather than one focal point; a map passes when every
  team's approaches to every objective meet the ≥ 0.70 rule. Validator-only; do not export an
  objective record (a real, scored objective is marked for a later plan).
- **Validator finding (G-3 agreement suite):** `support.py`'s reachability flood steps to 4 neighbours,
  the simulator's `FindPath` to 8, so the validator can reject a map the simulator finds fine (never the
  reverse). Matching the native rule is a one-line change if you want it; `tests/test_mapgen_native.py`
  pins the case and `tools/mapgen/probe.py` lets you query the real simulator.
- **Prone cover (M-A2, integrated):** the importer now refuses a prone `C` record that is not protected
  prone against a level threat 4 m out along its facing (about 9 cm of margin; all five G villages
  pass with 108–174 prone records each). Keep prone records 0.5 m inside the rim.
- The renderer (F-D) is in: `-ArmyMap=village` and New+ on the Village slot work in the demo, so you
  can look at your output in Unreal, not only in the SVG preview.
