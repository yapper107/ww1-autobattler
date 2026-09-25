# Bounded geometry-contract consultation — 23 September 2026

Astra implementing Jordan's request for curved village roads and more (2–3) curved sunken lanes.
This is an encoding/invariant review only, not an art review. Jordan retains art authority.
Source HEAD a32a669, dirty integrated simulator aca3a8350cad7018; village generator v4 fingerprint
480f62407688605d. Read only; do not edit this checkout or delegate implementation.

Relevant files: tools/mapgen/village.py (_lane, _earth, macro), geometry.py, native.py
(export_village), kernel.py (supported), support.py (_lanes, navigation),
tests/test_mapgen_native.py and plans/029-village-verticality.md record contract.

Proposed implementation: keep the ARMYMAP 2 axis-aligned boxes/surfaces. Reserve 2–3 separate
lane cell corridors in the existing WFC scaffold, across different flanks. Create smooth
polylines within those corridors. Rasterize the 4 m-wide curved floor to 1 m squares, merge
identical row spans into non-overlapping rectangles; write kind-0 level--1 surfaces at -1.4.
Compute the exact earth complement from the union of those rectangles AND the ramps, once
for the entire map. Ramp mouths stay straight and axis-aligned: 6 m long, width 4, same
24 ballistic treads, same links/landings. Bank hedges follow offsets of the curved line,
using existing short AABB segments and 12–16 m gateway spacing, outside floor/ramps.
Roads are decorative existing D records; use densely sampled curves inside the reserved road
corridor, preserving junctions and avoiding frontage geometry. No simulator or Unreal C++ edits.

Flag concrete invariant failures or a simpler safe encoding if this cannot work, especially
floor/ramp/earth seams, exact height queries at shared boundaries, 4/8-neighbour navigation,
AABB count/caps and bounding placement. Do not request a new record type or change thresholds.
Acceptance: count/depth/ramps/connectivity, native agreement + import tests, golden town/trench
bytes, all objective/team support >= .70, solids <=3400, existing record caps, deterministic
Python 3.9/no numpy, 12 attempts, 30 s New+ budget. No canonical map writes. Keep response concise.
