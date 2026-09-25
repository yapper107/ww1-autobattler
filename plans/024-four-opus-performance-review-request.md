# Review four Opus 5 exact-performance candidates

Jordan authorized four Opus agents to implement separate experiments and benchmark
which survive. Opus5.5 service requires client>=2.1.280; installed2.1.275, so his
explicit fallback claude-opus-5 was used. All four successful implementation
responses verified exact model metadata. Astra owns benchmarking/integration.

Read-only bounded review: inspect the four source patches for concrete behavior,
memory, portability or integration blockers. Do not edit, run tests/battles, delegate,
or propose another optimization round. Prefer concise verdicts per candidate.

Main source is still69962220d762ea04, HEAD c760cae7dd15bf827d23f2cab097920ae14fbb16
plus working changes. Baseline copied under
.local/plan024/performance-round3/baseline/Sim/.
Candidate source copies are under .local/plan024/performance-round3/{name}/Sim:

- smoothing (source301a116ee56b7bec): EnvironmentSim.cpp ordinary FindFloorPath
  smoothing searches backwards, skips j==i whose result cannot affect fallback.
- visibility (sourceea240171e409fae5): TacticalRouteSim.cpp/.h changes ray table to
  4-way64-byte sets keyed by group anchor+body. Individual entries retain their
  own full48-bit eye/body identity; original three query/float-add order retained.
  Vector storage 128MiB+48bytes, aligns sets manually. Observer rays same structure.
  Header changes only private EstimatedVisible signature, no planner data layout.
- memo (source8d38215a72aa9c0f): SpatialSim.cpp adds4096-entry128KiB inclusive front
  memo with exactseven-word/kind equality. Invalidates front victim when main entry
  evicts, so hit counters/main contents should remain equivalent.
- obstacles (source7de63b41319d6478): SpatialSim.cpp returns slab entry distance from
  Reach, pretests child boxes, walks nearer child first for any=true. Any=false
  retains original left/right/min order. Root Trace pretestsroot. Same divisions.

Each candidate has notes.md from its author. These are untrusted claims to verify,
not testing evidence. Parent already compiled all candidates and ran each through:
-882432 bit-exact Sample field comparisons against original reference function;
-649332 geometry/query/path cases with identical aggregate bit hash against current
 baseline: repeated keys/kinds/padding, zero-length/vertical/tangent/signed-zero rays,
 replaced/removed geometry, prepared/unprepared paths, imported-city paths;
-targeted --routes tests. All passed.

Common screen is running, not finished: baseline+4candidates, three recorded maps,
two passes reversedorder; then plausible survivors get12-case evaluation. No speed
claim yet. Frozen training originalbinary/configuration/opponent unchanged. No
heldout finalmaps opened. No root productionedits or modelpromotion.

Review exactness particularly cache ownership/invalidation/lifetime, pointer
alignment/copy behavior, full keys, fallbackpaths, slab boundary arithmetic,
minimumhit float results, current any=true callers' boolean-only use, portableC++17.
If combining wins, smoothing+visibilitytouchseparatefiles; memo+obstaclestouch
nonoverlapping sections ofSpatialSim and must be merged/retested. FullLinuxsuite,
41historicalpairs,drillstraces,Windowsnativeparity/UEbuild are still future gates.

Two corrections to authors' notes: FindFloorPath selftime is not an inclusive
savings ceiling; changed cache query order can cause different evictions as well
as fewer writes. A separate one-battle counter probe onmap756 reports zero
GeometryKey calls at allthree sites with originaloutcomes, so its earlier5.69%
sample label is not evidence of hashingcost in that case. Do not fold a geometry
hashingchange into thesepatches.
