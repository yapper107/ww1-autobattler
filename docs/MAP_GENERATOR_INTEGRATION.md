# Map integration verification — 17 September 2026

Final simulation/importer source: `4f00be36d9b119fe`. Existing dirty AI work was preserved;
no commit/reset/stash or AI promotion. Legacy remains default.

## Completed checks

- Unreal Development Editor build succeeded; `New +` generated and loaded trench
  seed18 using the built-in project generator. Town, cutaway, trenches and seed18
  screenshots were captured in the engine. Editor and town game preview reopened.
- Final-source historical parity:40/40 authored legacy/cognition gameplay digests
  match, and3/3 drills trace-on/off pairs match their references (46 executions).
  Evidence: `.local/mapgen/parity/results.json` and `parity.log`.
- Full Linux simulation suite passed on `85e77ee2ee625ef7`; the only subsequent
  simulation-header edit restricts imported cover IDs below2,000,000. Final-source
  native import tests and historical parity cover that edit. No behavior policy
  changed after the suite. Log: `.local/mapgen/full-suite.log`.
-102 Python tests passed; after the trench deployment/spacing adjustment, the11
  generator tests passed again (24 seed/damage combinations).
- Native seed17 checks:64 spawns and8 squad routes per map,644/81 explicit body-cover
  and standing-shot probes, full derived catalogs5520/2431, same-floor rear route,
  multi-ramp cross-network route, warm/cold repeated digests, corruption/truncation,
  cover-ID collision and destruction invalidation. Native seed18 trench also passes.
  Logs: `.local/mapgen/native-tests.log`, `native-seed18.log`.
- Six eight-second imported map/controller runs reproduce via their exported map
  payload and content digest. Final trench legacy/cognition/drills shot counts are
  150/169/161. Evidence: `.local/mapgen/runtime/imported-results.json`.
- Six-minute legacy combat smoke tests: town1342 shots, trench2923 shots. These ran
  before the final cover-ID input-range validation change. No balance, AI promotion
  or user replay approval is inferred. Original reserve-deployment trench smoke
  produced zero shots; it is retained separately and superseded by front deployment
  and a rifle-sight-range-compatible front-line separation.
- Browser Send to Unreal published successfully without JavaScript errors; the
  game generator itself does not require the browser or server.

## Attributed review

`plans/016-map-performance-fable-review.md` records the actual exact-model Fable
response. Its worker-lifetime, timeout, publication-name and cover-ID findings are
fixed. Warm/cold cache-state determinism is now tested. Non-integer custom exit
endpoints retain the correct but slower A* fallback. Concurrent simulation threads
are not supported by the existing mutable shared geometry caches. No art approval
is claimed. Generation in the Windows build mirror can be replaced by the next
repo sync; battle exports preserve the exact map payload for reproducibility.

## Performance evidence

The older-layout trench8-second test fell from308.789 s to60.996 s using exact
route caching with the same digest. Surface indexing, geometry-derived face cover
and reusable exit shortest-path fields brought it to0.420 s, with8977 path queries
versus8082 initially; that comparison changes route/cover choices. Final6-minute
trench smoke took9.71 s and town25.08 s, with replay-record peak memory around3 GB.
Per-run profiles and manifests remain under `.local/mapgen/`.
