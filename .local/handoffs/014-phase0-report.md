# Plan 014 Phase 0 report — Astra

16 September 2026. Measurement slice complete. No gameplay or export changes; no commit, reset, stash, or Fable launcher invocation. Existing uncommitted work remains in place. This report is for the architect’s subsequent review; no Fable approval is claimed.

**Source fingerprint at entry and completion: `d0e577abab5319b6`.** Built executable: `d0e577abab5319b6-linux`. The frozen evaluator, both frozen seed manifests, and every simulation source/header pass the recorded SHA-256 preservation check.

## Delivered and tested

- Added `tools/measure_dispersion.py`, `tools/evaluate_tactics.py`, shared offline readers in `tools/phase0_metrics.py`, and `tests/test_phase0_metrics.py`. The review’s old spacing script was not present; its JSON results were retained and the new tool was written fresh.
- 12 hand-built fixture tests pass; the complete existing Python discovery run passes 39 tests. Checks cover duration weighting, exact thresholds, horizontal distances, singletons/dead members, RMS vs mean radius, team filtering, exposure parity with the existing definition, friendly-hit denominators, casualty fractions, no-trace missingness, reversal timing/duplicates/refreshes, two command levels, disabled fixture squads, and succession censoring.
- All forty required Linux playable-map battles completed with the requested 360-second limit, across seeds 100–109. Each output collection has exactly those ten seeds and the candidate90 source build; all actual durations are 360 s. The manifest validation is recorded in `.local/handoffs/014-baseline-completeness.json`. No incomplete step in the requested Phase 0 runs.
- Frozen regression runs completed unchanged: **8/9** and **28/30**. These are regression disclosures, not acceptance gates or tuning evidence for plan 014.
- Seed-107 Works gameplay digests match the preserved traced normal-map review runs exactly: candidate90 `5263252470802575170`, legacy `2434807712546868994`; all manifest fields match except trace_enabled (old on, new off). Evidence: `.local/handoffs/014-review-parity.json`. This is a two-run continuity/trace check, not a full parity matrix.
- The CLI C++ build succeeded. The full C++ simulation suite, Unreal/native Windows build and replay checks were not run for this Python-only slice; no visual-quality claim is made. Phase 0b still needs its own parity and Windows/replay checks.

## Playable-map spatial baseline

Each row contains ten runs. Entries are the arithmetic mean of each run’s duration-weighted statistic; “median” below means **mean of run medians**, not a pooled median. Radius is the mean per-frame squad RMS radius. JSON files retain all per-run p10/median/p90 values and duration denominators.

| Map | Controller | Nearest mate median (m) | Under 2 m | Squad RMS radius (m) | Minimum friendly centroid median (m) | Frames under 10 m |
|---|---|---:|---:|---:|---:|---:|
| Works | candidate90 | 0.976 | 79.73% | 5.644 | 15.253 | 15.37% |
| Works | legacy | 6.539 | 16.44% | 15.162 | 33.493 | 4.15% |
| Trenches | candidate90 | 1.454 | 66.47% | 8.543 | 9.721 | 53.42% |
| Trenches | legacy | 3.946 | 31.28% | 14.391 | 8.486 | 60.27% |

Candidate90 has closer squadmate spacing on both maps: under-2 m time is 79.73% versus 16.44% on Works and 66.47% versus 31.28% in Trenches. Inter-squad crowding is not uniformly worse: candidate90's mean minimum centroid median is higher in Trenches (9.721 m versus 8.486 m), with fewer frames under 10 m. The evidence supports the member-dispersion problem on both maps, not a blanket claim that every crowding measure favours legacy.

## Tactical and outcome baseline

Exposure uses the existing investigator’s stationary Fire/Hold + observer sightline + no firing solution definition. Exposure is seconds per initial active, averaged equally over runs. Friendly-fire rates pool actual living soldier-time. Outcome counts are Azure wins / draws / Ember wins; losses are mean fractions of each side’s initial actives.

| Map | Controller | Exposed seconds/soldier | Friendly hits (per 100 soldier-min) | Azure/draw/Ember | Azure losses | Ember losses | Succession median seconds (completed / censored) |
|---|---|---:|---:|---|---:|---:|---|
| Works | candidate90 | 8.437 | 332 (13.1863) | 3 / 1 / 6 | 68.75% | 52.50% | 11.066 (39 / 79) |
| Works | legacy | 4.687 | 109 (3.9900) | 2 / 3 / 5 | 61.88% | 56.88% | 3.068 (40 / 15) |
| Trenches | candidate90 | 6.257 | 115 (3.4156) | 5 / 0 / 5 | 27.19% | 24.69% | 3.078 (16 / 15) |
| Trenches | legacy | 0.397 | 68 (2.3737) | 6 / 1 / 3 | 47.50% | 55.31% | 3.082 (54 / 13) |

Both armies in each run use the selected controller; these are self-play outcome descriptions, not mixed-controller head-to-head wins. Candidate90's lower trench casualty fractions cannot establish tactical superiority; lower engagement can also reduce losses. Higher exposure and friendly-hit counts identify outcomes for further investigation, not proven causal links to spacing. Succession medians include only completed episodes and must be read with the substantial censored counts.

Order reversals are **unavailable in all forty baseline runs** because the mandated command disables tracing. This is not a zero result. Succession remains available in events.jsonl. The tools were additionally exercised on all 39 traced frozen runs; those command metrics are diagnostic evidence only.

## Per-seed measurements

All distances are metres; exposure is seconds per initial active. Full denominators, percentiles, casualty exchange, durations, and individual succession/reversal evidence remain in JSON.

| Map | Controller | Seed | Nearest median | Under 2 m | Radius | Centroid median | Under 10 m | Exposure | Azure / Ember loss | Winner |
|---|---|---:|---:|---:|---:|---:|---:|---:|---|---|
| Works | candidate90 | 100 | 0.994 | 76.81% | 5.213 | 14.779 | 32.39% | 5.438 | 84.38% / 31.25% | Ember |
| Works | candidate90 | 101 | 1.003 | 81.08% | 5.535 | 14.445 | 19.61% | 11.288 | 90.62% / 37.50% | Ember |
| Works | candidate90 | 102 | 1.155 | 73.60% | 6.942 | 19.729 | 0.00% | 6.425 | 68.75% / 71.88% | Azure |
| Works | candidate90 | 103 | 1.051 | 80.42% | 5.581 | 16.033 | 0.00% | 8.938 | 56.25% / 75.00% | Azure |
| Works | candidate90 | 104 | 0.900 | 83.64% | 5.361 | 17.905 | 0.00% | 6.688 | 78.12% / 50.00% | Ember |
| Works | candidate90 | 105 | 0.919 | 81.74% | 5.159 | 18.892 | 0.00% | 9.031 | 65.62% / 40.62% | Ember |
| Works | candidate90 | 106 | 0.912 | 82.27% | 4.223 | 1.934 | 62.94% | 10.022 | 62.50% / 62.50% | Draw |
| Works | candidate90 | 107 | 0.952 | 76.18% | 5.428 | 15.565 | 0.00% | 9.600 | 53.12% / 75.00% | Azure |
| Works | candidate90 | 108 | 0.900 | 79.04% | 6.454 | 17.595 | 5.33% | 8.006 | 71.88% / 50.00% | Ember |
| Works | candidate90 | 109 | 0.978 | 82.56% | 6.543 | 15.657 | 33.44% | 8.938 | 56.25% / 31.25% | Ember |
| Works | legacy | 100 | 7.272 | 16.21% | 15.832 | 33.483 | 0.00% | 4.194 | 56.25% / 56.25% | Draw |
| Works | legacy | 101 | 5.037 | 23.52% | 16.672 | 33.372 | 7.22% | 3.191 | 62.50% / 46.88% | Ember |
| Works | legacy | 102 | 5.982 | 16.51% | 15.234 | 34.454 | 3.33% | 6.244 | 37.50% / 71.88% | Azure |
| Works | legacy | 103 | 5.510 | 19.16% | 13.208 | 33.088 | 15.11% | 5.263 | 68.75% / 56.25% | Ember |
| Works | legacy | 104 | 7.556 | 14.20% | 14.669 | 32.368 | 0.00% | 5.538 | 75.00% / 50.00% | Ember |
| Works | legacy | 105 | 6.796 | 13.31% | 13.171 | 36.973 | 0.00% | 3.816 | 68.75% / 59.38% | Ember |
| Works | legacy | 106 | 6.876 | 16.53% | 15.802 | 27.627 | 15.83% | 4.606 | 78.12% / 50.00% | Ember |
| Works | legacy | 107 | 7.560 | 12.54% | 16.317 | 37.985 | 0.00% | 3.272 | 59.38% / 59.38% | Draw |
| Works | legacy | 108 | 6.285 | 17.33% | 15.850 | 30.674 | 0.00% | 5.366 | 46.88% / 53.12% | Azure |
| Works | legacy | 109 | 6.513 | 15.09% | 14.864 | 34.904 | 0.00% | 5.381 | 65.62% / 65.62% | Draw |
| Trenches | candidate90 | 100 | 1.507 | 66.16% | 5.780 | 9.869 | 89.17% | 2.359 | 6.25% / 28.12% | Azure |
| Trenches | candidate90 | 101 | 1.493 | 67.73% | 7.142 | 6.522 | 83.94% | 4.581 | 46.88% / 6.25% | Ember |
| Trenches | candidate90 | 102 | 1.492 | 65.62% | 8.077 | 10.712 | 7.39% | 6.672 | 40.62% / 31.25% | Ember |
| Trenches | candidate90 | 103 | 1.418 | 69.97% | 8.627 | 4.331 | 87.78% | 4.716 | 15.62% / 28.12% | Azure |
| Trenches | candidate90 | 104 | 1.644 | 61.66% | 9.060 | 7.574 | 94.72% | 4.087 | 31.25% / 25.00% | Ember |
| Trenches | candidate90 | 105 | 1.464 | 62.71% | 9.366 | 7.927 | 94.83% | 2.494 | 25.00% / 21.88% | Ember |
| Trenches | candidate90 | 106 | 1.229 | 64.80% | 8.349 | 15.966 | 0.00% | 10.566 | 18.75% / 21.88% | Azure |
| Trenches | candidate90 | 107 | 1.390 | 66.91% | 8.617 | 10.507 | 34.50% | 4.684 | 15.62% / 31.25% | Azure |
| Trenches | candidate90 | 108 | 1.407 | 68.82% | 9.028 | 12.607 | 1.33% | 15.722 | 6.25% / 25.00% | Azure |
| Trenches | candidate90 | 109 | 1.493 | 70.35% | 11.383 | 11.197 | 40.56% | 6.688 | 65.62% / 28.12% | Ember |
| Trenches | legacy | 100 | 4.168 | 28.50% | 14.368 | 13.044 | 32.72% | 0.159 | 59.38% / 65.62% | Azure |
| Trenches | legacy | 101 | 3.392 | 33.43% | 15.263 | 10.639 | 43.50% | 0.678 | 62.50% / 12.50% | Ember |
| Trenches | legacy | 102 | 2.579 | 39.51% | 12.748 | 6.121 | 80.33% | 0.466 | 21.88% / 65.62% | Azure |
| Trenches | legacy | 103 | 3.304 | 30.39% | 14.502 | 7.801 | 64.78% | 0.387 | 15.62% / 75.00% | Azure |
| Trenches | legacy | 104 | 2.688 | 40.27% | 11.974 | 10.808 | 45.89% | 0.259 | 37.50% / 43.75% | Azure |
| Trenches | legacy | 105 | 5.767 | 27.75% | 16.110 | 7.497 | 58.06% | 0.281 | 40.62% / 56.25% | Azure |
| Trenches | legacy | 106 | 4.405 | 26.96% | 13.145 | 7.286 | 67.06% | 0.409 | 75.00% / 53.12% | Ember |
| Trenches | legacy | 107 | 4.680 | 28.78% | 15.711 | 7.648 | 69.94% | 0.578 | 50.00% / 71.88% | Azure |
| Trenches | legacy | 108 | 4.143 | 30.53% | 14.770 | 5.919 | 74.22% | 0.381 | 62.50% / 59.38% | Ember |
| Trenches | legacy | 109 | 4.337 | 26.66% | 15.319 | 8.094 | 66.22% | 0.372 | 50.00% / 50.00% | Draw |

## Frozen regression disclosure

| Set | Layout 5 | Layout 6 | Layout 7 | Total | Failures (layout, seed) |
|---|---:|---:|---:|---:|---|
| frozen-nine | 3 | 3 | 2 | 8/9 | [(7, 108)] |
| frozen-thirty | 9 | 10 | 9 | 28/30 | [(5, 110), (7, 115)] |

These are candidate90 cognition cases: the existing runner explicitly selects --cognition. The unchanged runner retains its historical pass/refusal logic. The nine result satisfied its existing prerequisite, so the thirty ran via its normal --held-out interface; neither score was used to select a code change. Seeds 2001–2010 were not opened.

## Commands and evidence

Commands executed from `/home/jchan/ww1-autobattler`:

```bash
python3 tools/source_id.py
./scripts/battle-lab.sh --seconds 1 --out .local/build-check
for seed in 100 101 102 103 104 105 106 107 108 109; do
  .local/lab/battle-lab --legacy-ai --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/legacy/works
  .local/lab/battle-lab --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/candidate90/works
  .local/lab/battle-lab --legacy-ai --terrain 1 --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/legacy/trenches
  .local/lab/battle-lab --terrain 1 --seed "$seed" --seconds 360 --evaluate --no-trace --out .local/baselines/candidate90/trenches
done
python3 tests/test_phase0_metrics.py
python3 -m unittest discover -s tests -p 'test_*.py'
python3 tools/run_ai_acceptance.py --out .local/baselines/frozen-nine
python3 tools/run_ai_acceptance.py --held-out --development-results .local/baselines/frozen-nine/acceptance.json --out .local/baselines/frozen-thirty
python3 tools/measure_dispersion.py .local/baselines/legacy/works .local/baselines/candidate90/works --out .local/baselines/dispersion-works.json
python3 tools/evaluate_tactics.py .local/baselines/legacy/works .local/baselines/candidate90/works --out .local/baselines/tactics-works.json
python3 tools/measure_dispersion.py .local/baselines/legacy/trenches .local/baselines/candidate90/trenches --out .local/baselines/dispersion-trenches.json
python3 tools/evaluate_tactics.py .local/baselines/legacy/trenches .local/baselines/candidate90/trenches --out .local/baselines/tactics-trenches.json
python3 tools/evaluate_tactics.py .local/baselines/frozen-nine .local/baselines/frozen-thirty --out .local/baselines/tactics-frozen.json
sha256sum -c .local/handoffs/014-protected.sha256
git diff --check
python3 tools/source_id.py
```

Build/run/test logs: `.local/handoffs/014-build.log`, `014-baselines.log`, `014-frozen-nine.log`, `014-frozen-thirty.log`, `014-python-tests.log`, `014-all-python-tests.log`, `014-protected-check.log`. Raw run directories are under `.local/baselines/{legacy,candidate90}/{works,trenches}` and `frozen-{nine,thirty}`. Each contains its manifest, gameplay digest, events and evaluation samples. The initial acknowledgement is `.local/handoffs/014-astra-ack.md`.

## Metric definitions: ambiguities and explicit conventions

These are implementation conventions for review, not new gameplay or promotion rules.

- Window: whole exported battle, including initial deployment, not the 30–180 s window in AI_NORMAL_MAP_REVIEW. Its single-seed 0.95 m / 7.50 m comparison is therefore not an expected exact numerical match.
- Duration: left-endpoint intervals [frame time, next frame time), actual elapsed time, terminal frame has zero weight. No invented last 0.2 s. All required runs export an initial frame and final frame. Living means the exported `alive` flag, including active wounded soldiers.
- Identity: schema 1 omits squad/team. Use the existing fixed roster mapping `id//8`, `id//32`, including attached platoon staff in their physical squad. Explicit squad/team fields take precedence if present. This fallback must not be used to infer future generated organisations.
- Spatial distances: horizontal, including squad radius and centroid distance; vertical separation between floors is not counted. Nearest mate excludes self and dead members; no sample for singletons. Radius is zero for singletons and absent for empty squads.
- Squad radius: RMS distance to each living squad's centroid per frame, then duration-weighted mean of those radii, one sample per living squad per interval. This is not the square root of the grand mean of all member squared distances. Per-run radius quantiles are also retained.
- Inter-squad separation: one minimum over all same-team pairs in each frame, considering both teams. Different-team pairs are never included. Exclude frames with no eligible pair; do not count them as infinitely separated or zero.
- Quantiles: inverse weighted empirical CDF (first value reaching the quantile weight). Shares use strict <2 m / <10 m. Each nearest-mate sample carries the interval duration; each squad-radius sample also carries it. A frame with fewer living soldiers has fewer nearest-mate samples.
- Across seeds: equal-run mean and median of per-run statistics, with per-run p10/median/p90 preserved. “Mean run median” is not a pooled soldier-time median. No confidence/promotion claim is made from this Phase 0 ten-seed sample; the later family bootstrap runner is not implemented here.
- Exposure: exact investigate_engagement.py rule: living, action Fire/Hold (2/4), <=0.1 m 3D displacement to the next frame, observer_exposed=true, solution=false. Total soldier-seconds, divided by initial actives for seconds per soldier; living-soldier-time share also exported. A firing solution does not imply ammunition, readiness, or that a shot was fired.
- Friendly hits: EventKind::Hit (3), actor and target on the same team. Rate denominator is integrated living soldier-minutes, not initial strength times duration. Unknown actor/target IDs are excluded. Counts are physical recorded hits, not lane crossings.
- Outcome: casualties are initial actives missing from the final living roster, reported separately for Azure and Ember. Azure casualty exchange is Ember's casualty fraction divided by Azure's; null for zero denominator (including zero/zero), not infinity or an arbitrary smoothing constant. Winner -1 means draw; time of decision is manifest duration, including time-limit decisions.
- Reversals: per-recipient `order_issued` trace assignments, deduplicated by recipient/order serial. A-B-A within 30 seconds from the first to third issue, first/third destinations within 5 m, intermediate destination more than 5 m from the first. This last condition prevents A-A-A refreshes counting as reversals; the companion leaves it implicit. Distances are 3D. Frequency is total reversals per battle minute, not per soldier minute. No-trace baselines report null/unavailable, not zero.
- Succession: EventKind::Casualty actor is the casualty (target is shooter); join to explicit down/assumes succession events and the successor's first OrderIssued with an actual recipient. Starting time is casualty time, not command's later recognition or appointment. Schema 1 exposes office only in event text; both squad and platoon episodes are retained, including a soldier holding both offices. The metric is the successor's first issued order, not necessarily the first order in one particular office. Non-recipient announcement events are excluded. If the successor dies before issuing an order, censor at that death; otherwise censor at battle end. Report completed medians alongside censored counts, never replace censored episodes with zero. Fixture-disabled leaders without casualty events are missing-casualty episodes excluded from both completed latency and casualty censor counts. This corrects the acknowledgement's initial expectation: succession IS available with --no-trace because events.jsonl is always exported.
- Deferred: shots/element/drill/assigned-area-dependent metrics remain unavailable. No suppression, covered movement, flank-angle, or gun-recovery result is inferred from counts or labels. Directive churn and contact-to-drill latency are outside this slice's five requested tactical metrics.

## Proposed Phase 0b hotfix next

The measured reference targets, using this report's equal-run aggregation, are Works nearest-mate median at least 6.539 m and under-2 m share at most 16.44%, and Trenches at least 3.946 m and at most 31.28%. Retain the per-run distributions so an aggregate improvement cannot conceal adverse cases. These values describe the measured legacy reference, not fitted doctrine constants.

Implement the four authorised changes as distinct measured increments: retained deployment-sector mission; typed-task and emergency-shelter occupancy; dispersed position allocation and bounded moving group with covering members; reserve/consolidate positions inside their own reported sector. Keep all checks restricted to officer memory, received orders/reports, and assigned or seen friendly occupancy. Source locations were reread and still match the handoff.

Before changing behaviour, pin mechanisms for distinct first objectives and retention; occupied typed/emergency slots and no-free-slot waiting/fallback; required occupants vs cover group; and reserves staying within their sector despite a mover in another lane. Preserve legacy digests and test trace parity, then compare all ten seeds on both maps. Frozen 9/30 still run, solely for disclosure. Native Windows build/replay checks and user replay review precede any proposed new default.

The 2.0 m shelter / 1.8 m peek values are collision/occupancy minima. They alone cannot establish the “at or better than legacy” dispersion exit if legacy's median is much larger. Use the plan's separate terrain-aware formation intervals (10 m open, 3–5 m restrictive) for the fallback allocation, report unresolved failure against that exit honestly, and do not tune those values to individual seeds. “Required occupants plus a covering element” is underspecified until element organisation exists: propose retain the accepted plan's required occupant count as the mover group and keep remaining eligible members as covering/holding members for 0b; do not add frozen doctrine element machinery in this hotfix. Confirm this interpretation with the architect's subsequent report review.

