# City2 geometry architecture consultation — 23 September 2026

Astra requests one bounded read-only structural review; no art approval, edits or delegation.
Jordan’s full request is plans/029-city2-astra-request.md. Implement a separate city2 family,
ARMYMAP 2, organic street-first city, ≤4500 solids, 2–4 spaced objectives with unchanged
support/elevated safety gates, bounded repairs and ≤30 s New+ budget. Preserve Town, Trenches
and village bytes. No simulator/Unreal C++ edits or canonical map writes. HEAD a32a669;
dirty integrated simulator e767b6471b9ca2f1, village v5 be711b3ca7f9d117.

Read tools/mapgen/{shells,kernel,support,village_damage,village_objectives,village_curves,native}.py,
plans/029-village-verticality.md contract, and ImportedMap.h header parsing.

Proposed structure: city2 street graph and 1 m raster block decomposition first, frontage
parcels along densely sampled road edges; stepped orthogonal footprints, connected L/U wings,
terraces with shared party walls. Reuse shell stair/opening construction with optional footprint
and opening controls that default to village’s current behavior. Streets choose irregular
branch spacing and civic reservations, then parcels fill blocks. Different street classes
allocate storeys so main/square are mostly two-storey while peripheral stock keeps the brief’s
global cap. Reuse support with explicit family parameters (solid budget, allowed groundBase,
storey accounting, repair stream/rebuild), never by patching globals. Reuse damage/objective
helpers with optional seeded stream and landmark inputs; preserve defaults byte-for-byte.

Known blocker: ImportedMap.h accepts only city/trenches/village in both header detection and
parser checks. No C++ edits authorized. Actual city2 exports must keep city2. Plan to report
native import as blocked, while separately testing same-geometry temporary diagnostic copies
with only header kind changed to village, explicitly labeled as geometry checks only, unless
the overseer independently lands city2 header support. Do not silently alias real exports.

Please flag concrete contract hazards, especially multi-part B footprints/window teams,
party walls, stair floor ownership, street/parcels with 1 m steps and clearance, and exact
shared-refactor preservation. Recommend a simple bounded representation and any essential
correction. Do not design new simulator records or relax thresholds. Return concise findings.
