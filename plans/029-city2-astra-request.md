# Request to Astra — a new city family built the village way (plan 029 follow-on)

From: the overseer (claude-fable-5-1), 23 September 2026, at Jordan's instruction: build the city map
with the same parameters the village was built with, with more organic roads and building shapes:
"this is a city and it has to look like it was built by people, not by an algorithm."

## Objective

A **new generated family** with everything the village has (ARMYMAP 2, verticality, concealment,
uneven damage, prone covers, vaultable walls, supportability against 2–4 objectives) and a townscape
that reads as grown, not gridded. The existing Town (`city.py`, ARMYMAP 1) stays **byte-identical**
and keeps its name and seeds: 40 references, training maps 701–760 and development maps 901–930 are
opened seeds and are never regenerated. So this is a new kind. Working name **`city2`** (Jordan may
rename it; keep it one lowercase word, it becomes a file name and a loop set prefix).

## Same parameters as the village (binding)

- Format: `ARMYMAP 2 city2 <seed>`, the record grammar and caps of plan 029 (O 6000, S 1500, L 256,
  C 3000, D 1500, B 128, P 512), `groundBase 0` or `−1.4`, storey 3.2 m, stairs `S kind 2`, `B`
  footprints, `P` door passages, concealment `O flags&1`, crater rims `O flags&2` with prone `C`
  (crouch 2, 0.5 m inside the rim), garden walls 1.15 m (low vault) and 1.9 m (high vault), sills and
  doorways never vaultable. Solid budget for the family: **≤ 4,500** (the village's is 3,400; the
  6,000 cap is hard). Two-storey ≤ 0.4 × houses plus every civic/large building.
- Determinism: per-stage `random.Random(f'city2|{seed}|…')` streams, sorted candidates, no set/dict
  iteration order dependence, `round_geometry`, Python 3.9 syntax, no numpy; one attempt well inside
  the 30 s New+ budget on UE's bundled Python (report worst case).
- Acceptance: supportability ≥ 0.70 per team against **2–4 objectives per map** (church square or
  market square always; the station or factory yard, a crossroads, a second square; ≥ 60 m apart),
  elevated-safe ≥ 40% of ground covers and ≥ 3 per two-storey building, the invariants, the bounded
  repair loop, contradiction and rejection rates reported; no threshold weakened.
- Uneven damage as in the village v3: one battered approach, damage reaching the centre, ruined
  buildings (partial walls, rubble as low cover), craters crossing streets and yards; protected: the
  objectives' immediate ground, stair surfaces, the church tower.
- Golden bytes: `tests/test_mapgen.py::test_golden_seed17_bytes` (Town and Trenches) must pass; the
  village goldens likewise.

## What "built by people" means here (Astra's craft; measure what you can, Jordan judges the look)

- **Street network first, not tiles.** A main street entering at one edge and leaving at another with
  gentle curvature and one or two doglegs; secondary streets branching at varied angles and spacing
  (40–90 m), some ending in courts; alleys (3 m) cutting long blocks; widths that vary: main street
  9–14 m, side streets 5–7 m, alleys 3 m. A square that is not a rectangle (a widened street, a
  chamfered block, a churchyard). No two parallel streets at the same spacing across the map.
- **Blocks and parcels.** Blocks of irregular shape and size from the street graph; parcels with
  frontages of 6–15 m; building lines that jog 0.5–1.5 m between neighbours; setbacks that vary by
  street type (none on the main street, gardens on side streets).
- **Building shapes.** Terraced rows with party walls; L- and U-shaped footprints around rear
  courtyards; depths that vary; a church with a churchyard wall and tower; a market hall or mairie on
  the square; a factory or warehouse block with a walled yard and a solid chimney; a school; a station
  with a platform if a railway is used (a cutting at −1.4 via the lane pipeline is allowed but not
  required). Shop fronts on the main street (wider ground-floor openings), back yards with low walls,
  privies and sheds (small solids), a few gardens with hedges as concealment.
- **Verticality.** Two-storey as the norm on the main street and square, single-storey at the edges;
  window teams on both floors; stairs per the contract.
- **The geometry constraint you must design around.** Obstacles are axis-aligned boxes: no rotation
  in the format or the simulator. Curved streets and angled walls are therefore built from short
  axis-aligned pieces (as `village_curves.py` does for hedges) with corner fill so that no pocket
  narrower than a man is created; keep steps ≥ 1.0 m so that cover, line of sight and navigation stay
  sane, and keep stepped walls out of the solid budget's way (a stepped diagonal costs 2–3× a straight
  wall). If you conclude that the look Jordan wants is not reachable within axis-aligned boxes, say so
  in the report with an example rather than working around the simulator: a rotated-box format is a
  simulator project and Jordan's decision.
- **Report these look measures** (no thresholds; they let Jordan compare seeds and versions): block
  area coefficient of variation; share of street length in bends or doglegs; count of frontage jogs per
  100 m; share of non-rectangular footprints; street-width histogram; two-storey share by street type.

## Deliverables

- `tools/mapgen/city2.py` and the helpers it needs (reuse the village's `shells.py`, `kernel.py`,
  `support.py`, `village_damage.py`, `village_objectives.py`, `village_curves.py`; refactor into shared
  modules only if the village's own outputs stay byte-identical, proven by its goldens).
- `generate_maps.py --kind city2`, `render.py`/`preview.html` branch with the same views as the village
  (overview, cutaway, support with the objective selector, physical edges), `native.py` branch.
- Tests in `tests/test_mapgen.py`: determinism under two hash seeds, contradiction path, objective count
  band, budgets, golden bytes of Town/Trenches/village unchanged, one `city2` golden (seed 17) once Jordan
  accepts the look.
- Previews for seeds 17, 5 and 1201 in `.local/plan029/city2/`, the 60-seed sweep (0–49, 1201–1210:
  acceptance, contradictions, repairs, supportability min/median, solids, timings Linux and UE Python),
  native agreement suite (`tests/test_mapgen_native.py`, add `city2` to its seed list) and
  `imported_map_tests` on the three previews, static-defence seating 5 seeds × 3 layouts.
- `docs/MAP_GENERATOR.md`: a `city2` section (format, composition, pipeline, limits; not the look).
- Do not write to `Unreal/Config/GeneratedMaps/`; the overseer promotes `city2.army`, wires
  `tools/loop` sets (`city2-dev`, `city2-val`, attack sets), the neural `--family city2`, and the Unreal
  map slot, once the look is accepted. No simulator or Unreal C++ edits; if one is needed, say so.

## Reference

`plans/029-village-verticality.md` (contract, rulings, progress), `plans/029-village-art-pass-astra-request.md`
and its addendum, Astra's own reports (`plans/029-village-art-pass-astra-report.md`,
`plans/029-village-uneven-damage-astra-report.md`), `docs/MAP_GENERATOR.md` village section, the
native probe (`tools/mapgen/probe.py`) for checking any geometry question against the real simulator.
