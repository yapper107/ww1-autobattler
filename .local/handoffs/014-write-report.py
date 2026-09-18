import json
from pathlib import Path

base = Path('.local/baselines')
spatial = [c for name in ('works', 'trenches') for c in json.loads((base / f'dispersion-{name}.json').read_text())['cases']]
tactics = [c for name in ('works', 'trenches') for c in json.loads((base / f'tactics-{name}.json').read_text())['cases']]
spatial_summaries = [c for name in ('works', 'trenches') for c in json.loads((base / f'dispersion-{name}.json').read_text())['summary']]
tactical_summaries = [c for name in ('works', 'trenches') for c in json.loads((base / f'tactics-{name}.json').read_text())['summary']]
assert len(spatial) == len(tactics) == 40
assert len({(c['controller'],c['terrain'],c['seed']) for c in spatial}) == 40
assert all(c['build'] == 'd0e577abab5319b6-linux' for c in spatial)
for controller in ('legacy', 'candidate90'):
    for terrain in (0,1):
        assert sorted(c['seed'] for c in spatial if c['controller']==controller and c['terrain']==terrain)==list(range(100,110))

lines = ['# Plan 014 Phase 0 report — Astra', '',
'16 September 2026. Measurement slice complete. No gameplay or export changes; no commit, reset, stash, or Fable launcher invocation. Existing uncommitted work remains in place. This report is for the architect’s subsequent review; no Fable approval is claimed.', '',
'**Source fingerprint at entry and completion: `d0e577abab5319b6`.** Built executable: `d0e577abab5319b6-linux`. The frozen evaluator, both frozen seed manifests, and every simulation source/header pass the recorded SHA-256 preservation check.', '',
'## Delivered and tested', '',
'- Added `tools/measure_dispersion.py`, `tools/evaluate_tactics.py`, shared offline readers in `tools/phase0_metrics.py`, and `tests/test_phase0_metrics.py`. The review’s old spacing script was not present; its JSON results were retained and the new tool was written fresh.',
'- 12 hand-built fixture tests pass; the complete existing Python discovery run passes 39 tests. Checks cover duration weighting, exact thresholds, horizontal distances, singletons/dead members, RMS vs mean radius, team filtering, exposure parity with the existing definition, friendly-hit denominators, casualty fractions, no-trace missingness, reversal timing/duplicates/refreshes, two command levels, disabled fixture squads, and succession censoring.',
'- All forty required Linux playable-map battles completed with the requested 360-second limit, across seeds 100–109. Each output collection has exactly those ten seeds and the candidate90 source build. No incomplete step in the requested Phase 0 runs.',
'- Frozen regression runs completed unchanged: **8/9** and **28/30**. These are regression disclosures, not acceptance gates or tuning evidence for plan 014.',
'- Seed-107 Works gameplay digests match the preserved traced normal-map review runs exactly: candidate90 `5263252470802575170`, legacy `2434807712546868994`; all manifest fields match except trace_enabled (old on, new off). Evidence: `.local/handoffs/014-review-parity.json`. This is a two-run continuity/trace check, not a full parity matrix.',
'- The CLI C++ build succeeded. The full C++ simulation suite, Unreal/native Windows build and replay checks were not run for this Python-only slice; no visual-quality claim is made. Phase 0b still needs its own parity and Windows/replay checks.', '',
'## Playable-map spatial baseline', '',
'Each row contains ten runs. Entries are the arithmetic mean of each run’s duration-weighted statistic; “median” below means **mean of run medians**, not a pooled median. Radius is the mean per-frame squad RMS radius. JSON files retain all per-run p10/median/p90 values and duration denominators.', '',
'| Map | Controller | Nearest mate median (m) | Under 2 m | Squad RMS radius (m) | Minimum friendly centroid median (m) | Frames under 10 m |',
'|---|---|---:|---:|---:|---:|---:|']
for c in sorted(spatial_summaries, key=lambda c:(c['terrain'],c['controller'])):
    m=c['metrics']
    def v(name):return m[name]['mean']
    lines.append(f"| {'Works' if c['terrain']==0 else 'Trenches'} | {c['controller']} | {v('nearest_squadmate_m.median'):.3f} | {v('nearest_squadmate_m.share_below'):.2%} | {v('squad_rms_radius_m.mean'):.3f} | {v('minimum_friendly_squad_centroid_m.median'):.3f} | {v('minimum_friendly_squad_centroid_m.share_below'):.2%} |")
lines += ['', '## Tactical and outcome baseline', '',
'Exposure uses the existing investigator’s stationary Fire/Hold + observer sightline + no firing solution definition. Exposure is seconds per initial active, averaged equally over runs. Friendly-fire rates pool actual living soldier-time. Outcome counts are Azure wins / draws / Ember wins; losses are mean fractions of each side’s initial actives.', '',
'| Map | Controller | Exposed seconds/soldier | Friendly hits (per 100 soldier-min) | Azure/draw/Ember | Azure losses | Ember losses | Succession median seconds (completed / censored) |',
'|---|---|---:|---:|---|---:|---:|---|']
for c in sorted(tactical_summaries, key=lambda c:(c['terrain'],c['controller'])):
    latency=c['succession_median_seconds']
    latency='n/a' if latency is None else f'{latency:.3f}'
    lines.append(f"| {'Works' if c['terrain']==0 else 'Trenches'} | {c['controller']} | {c['mean_exposed_seconds_per_initial_active']:.3f} | {c['friendly_hits']} ({c['friendly_hits_per_100_soldier_minutes']:.4f}) | {' / '.join(map(str,c['wins_azure_draw_ember']))} | {c['mean_casualty_fractions'][0]:.2%} | {c['mean_casualty_fractions'][1]:.2%} | {latency} ({c['succession_completed']} / {c['succession_censored']}) |")
lines += ['', 'Order reversals are **unavailable in all forty baseline runs** because the mandated command disables tracing. This is not a zero result. Succession remains available in events.jsonl. The tools were additionally exercised on all 39 traced frozen runs; those command metrics are diagnostic evidence only.', '', '## Per-seed measurements', '',
'All distances are metres; exposure is seconds per initial active. Full denominators, percentiles, casualty exchange, durations, and individual succession/reversal evidence remain in JSON.', '',
'| Map | Controller | Seed | Nearest median | Under 2 m | Radius | Centroid median | Under 10 m | Exposure | Azure / Ember loss | Winner |',
'|---|---|---:|---:|---:|---:|---:|---:|---:|---|---|']
lookup={(c['controller'], c['terrain'], c['seed']):c for c in tactics}
for c in sorted(spatial, key=lambda c:(c['terrain'],c['controller'],c['seed'])):
    t=lookup[(c['controller'],c['terrain'],c['seed'])]
    n=c['nearest_squadmate_m']; sep=c['minimum_friendly_squad_centroid_m']; o=t['outcome']
    lines.append(f"| {'Works' if c['terrain']==0 else 'Trenches'} | {c['controller']} | {c['seed']} | {n['median']:.3f} | {n['share_below']:.2%} | {c['squad_rms_radius_m']['mean']:.3f} | {sep['median']:.3f} | {sep['share_below']:.2%} | {t['exposed_without_firing']['seconds_per_initial_active']:.3f} | {o['casualty_fractions'][0]:.2%} / {o['casualty_fractions'][1]:.2%} | {{-1: 'Draw', 0: 'Azure', 1: 'Ember'}} |".replace("{-1: 'Draw', 0: 'Azure', 1: 'Ember'}", {-1:'Draw',0:'Azure',1:'Ember'}[o['winner']]))
lines += ['', '## Frozen regression disclosure', '', '| Set | Layout 5 | Layout 6 | Layout 7 | Total | Failures (layout, seed) |', '|---|---:|---:|---:|---:|---|']
for name in ('frozen-nine','frozen-thirty'):
    r=json.loads((base/name/'acceptance.json').read_text())
    totals=r['per_layout']; failures=[(c['encounter'],c['seed']) for c in r['cases'] if not c['passed']]
    lines.append(f"| {name} | {totals['5']} | {totals['6']} | {totals['7']} | {sum(totals.values())}/{len(r['cases'])} | {failures} |")
lines += ['', 'These are candidate90 cognition cases: the existing runner explicitly selects --cognition. The unchanged runner retains its historical pass/refusal logic. The nine result satisfied its existing prerequisite, so the thirty ran via its normal --held-out interface; neither score was used to select a code change. Seeds 2001–2010 were not opened.', '',
'## Commands and evidence', '', 'Commands executed from `/home/jchan/ww1-autobattler`:', '', '```bash',
'python3 tools/source_id.py',
'./scripts/battle-lab.sh --seconds 1 --out .local/build-check',
Path('.local/handoffs/014-run-baselines.sh').read_text().split('set -euo pipefail\n')[1].strip(),
'python3 tests/test_phase0_metrics.py',
"python3 -m unittest discover -s tests -p 'test_*.py'",
'python3 tools/run_ai_acceptance.py --out .local/baselines/frozen-nine',
'python3 tools/run_ai_acceptance.py --held-out --development-results .local/baselines/frozen-nine/acceptance.json --out .local/baselines/frozen-thirty',
'python3 tools/measure_dispersion.py .local/baselines/legacy/works .local/baselines/candidate90/works --out .local/baselines/dispersion-works.json',
'python3 tools/evaluate_tactics.py .local/baselines/legacy/works .local/baselines/candidate90/works --out .local/baselines/tactics-works.json',
'python3 tools/measure_dispersion.py .local/baselines/legacy/trenches .local/baselines/candidate90/trenches --out .local/baselines/dispersion-trenches.json',
'python3 tools/evaluate_tactics.py .local/baselines/legacy/trenches .local/baselines/candidate90/trenches --out .local/baselines/tactics-trenches.json',
'python3 tools/evaluate_tactics.py .local/baselines/frozen-nine .local/baselines/frozen-thirty --out .local/baselines/tactics-frozen.json',
'sha256sum -c .local/handoffs/014-protected.sha256',
'git diff --check', 'python3 tools/source_id.py', '```', '',
'Build/run/test logs: `.local/handoffs/014-build.log`, `014-baselines.log`, `014-frozen-nine.log`, `014-frozen-thirty.log`, `014-python-tests.log`, `014-all-python-tests.log`, `014-protected-check.log`. Raw run directories are under `.local/baselines/{legacy,candidate90}/{works,trenches}` and `frozen-{nine,thirty}`. Each contains its manifest, gameplay digest, events and evaluation samples. The initial acknowledgement is `.local/handoffs/014-astra-ack.md`.', '',
Path('.local/handoffs/014-report-notes.md').read_text().replace('# Phase 0 metric conventions and ambiguities','## Metric definitions: ambiguities and explicit conventions').replace('# Phase 0b proposal to be refined against the complete numbers','## Proposed Phase 0b hotfix next')]
Path('.local/handoffs/014-phase0-report.md').write_text('\n'.join(lines)+'\n')
print('Wrote .local/handoffs/014-phase0-report.md')
