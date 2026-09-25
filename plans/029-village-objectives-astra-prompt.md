# Prompt for Astra — 2–4 objectives per village (plan 029, Jordan's ruling of 23 September 2026)

Jordan's ruling: the village validator tests supportability against **2 to 4 objectives per map**, not
one focal point. This is validator/generator work only; do not export an objective record (a real,
scored objective is marked for a later plan).

Read `plans/029-village-verticality.md` ("Ruling: the village objective") and the addendum at the end
of `plans/029-village-art-pass-astra-request.md`.

## What to build

1. **Objective set per seed, 2–4 entries, drawn deterministically** (`random.Random(f'village|{seed}|objectives')`)
   from the map's own landmarks in this priority: the church square (always), the largest farm
   compound, the main crossroads or the side-road junction, a second farm or the sunken-lane junction.
   Keep the objectives at least 60 m apart; drop the weakest candidate if the map cannot satisfy that.
2. **Acceptance rule:** for every team and every objective, the approaches from that team's four
   deployment lanes must meet the existing supportability rule (≥ 0.70, unchanged thresholds, same
   observers-within-40 m construction per objective). The map passes only if all pass; the bounded
   repair loop may run per failing objective, within the existing retry limit and the 30 s New+
   budget (report the worst-case timing; today one attempt is about 0.3–1.0 s, so 4 objectives must
   stay well inside).
3. **Reporting:** the JSON sidecar lists the objectives (kind, position) and the per-team, per-objective
   supportable share; `generate_maps.py` stats and the 60-seed sweep report the minimum over objectives
   and the distribution of objective counts.
4. **Preview:** the support overlay gets an objective selector (all, or one), keeping the existing
   views; the physical-edge view unchanged.
5. **Tests** in `tests/test_mapgen.py`: count band 2–4, determinism of the draw, the 60 m spacing, a
   map that passes on the square but fails on a farm is rejected, and the Town/Trenches golden bytes
   stay byte-identical.

## Constraints (unchanged)

- The ARMYMAP 2 record contract, caps and Jordan's defaults from the request; no simulator or Unreal C++
  edits; nothing written to `Unreal/Config/GeneratedMaps/`.
- Determinism: sorted candidates, seeded streams, Python 3.9 syntax, no numpy.
- The validator's reachability flood is 4-neighbour against the simulator's 8 (finding from the native
  agreement suite, `tests/test_mapgen_native.py`); matching the native rule is optional but, if you do
  it, keep the agreement suite passing.
- Report per-seed results for 17, 5 and 1201, the 60-seed sweep (acceptance rate, contradictions,
  repairs, timings), and what is and is not established. Jordan retains art acceptance.
