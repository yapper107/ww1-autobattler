# Plan 014 restore / Slice A report — Astra

The rejected hotfix is archived and the playable default is legacy. Explicit
`--cognition` / `-ArmyCognition` selects candidate90. The timeline click no longer
reads Canvas outside DrawHUD. Native Windows/Unreal build and smoke belong to the
architect session after this report; none were attempted here.

## Fingerprints and restoration

Entry `b011de1fb6d44828`; restored **`d0e577abab5319b6` before any further edit**;
final Slice A simulation **`d0e577abab5319b6`**. The default/crash changes are outside
the simulation fingerprint. `.local/restore014/restored-source.txt` records the
checkpoint; `.local/restore014/Sim/` and `battle-lab` preserve this verified slice.

Restored the original simulation, `tests/sim_tests.cpp`, `scripts/test-sim.sh`,
`tools/battle_cli.cpp`, and the three hotfix-amended C++ optional-test headers.
Removed the extra CrowdingFixtures.cpp / crowding_tests.h from the active build.
Their full amended contents are preserved under `.local/restore014/hotfix/` and
in `.local/phase0b/hotfix-final.patch`. The Phase 0 metric tools/tests and
`--regression-only` runner option remain. Protected file hashes match the
preserved originals; authored layouts 5–7 are restored byte-for-byte. No commit,
reset, stash, Fable launcher, native process launch, or other presentation change.

## Changes

- CLI starts with Config's legacy default. Explicit historical controller flags keep
  their semantics; the defaults test now requires default digest = legacy digest.
- Unreal enables cognition only with `-ArmyCognition`; `-ArmyLegacy` remains an
  explicit override. Recorded-manifest rerun semantics are unchanged.
- `ABattleHUD::DrawHUD` caches both canvas dimensions. `NotifyHitBoxClick` guards
  PlayerOwner and cached size, validates mouse retrieval and positive timeline
  width, and seeks using cached width. It never dereferences Canvas.
- AGENTS.md, CLAUDE.md and AI_MAIN_BUILD.md record rejection, legacy default and
  the stricter engagement rule, retaining the candidate90 decision as history.
  DEVELOPMENT.md's current launch instructions were corrected too.

## Verification

| Command/check | Result | Evidence under `.local/restore014/` |
|---|---|---|
| `./scripts/test-sim.sh` | PASS, exit 0, 288.548 s | `full-suite.log` |
| `./scripts/battle-lab.sh --version` | PASS, d0e577abab5319b6-linux | `build.log` |
| `python3 tests/check_controller_defaults.py --binary .local/restore014/battle-lab --out .local/restore014/defaults` | PASS: default legacy; explicit controllers; old/new manifest reruns | `defaults.log` |
| `python3 -m unittest discover -s tests -p 'test_*.py'` | 39 tests PASS | `python.log` |
| `python3 tools/check_foundations_parity.py --baseline .local/phase0b/original/legacy-battle-lab --candidate .local/restore014/battle-lab --out .local/restore014/foundations-parity` | 10/10 MATCH, 360 s, seeds 100–109 | `foundations-parity/parity.json` |
| `python3 .local/restore014/parity.py .local/restore014/parity .local/restore014/battle-lab` | 20/20 legacy + 20/20 explicit cognition MATCH against Phase 0 manifests, both maps, seeds 100–109, 360 s | `parity/parity.json` |
| Protected hashes / `git diff --check` | PASS | preserved `.local/phase0b/original/protected.json` |

The comparison JSON records every command, source manifest, output manifest,
expected/actual digest and shot count. The frozen acceptance suite was not rerun
or retuned. The click fix has source review only here; native crash reproduction
and smoke verification are pending with the architect, not claimed from Linux tests.

## Fighting intensity, per run

These are the Phase 0 shot counts and casualty fractions, with restored gameplay
confirmed by exact digest equality for every listed controller/map/seed. Health
and positions are included in that digest. No rounded number is used as an exit
tolerance. Azure/Ember fractions use initial actives. Every restored cognition
run equals candidate90 exactly; legacy is the user's explicitly chosen interim
baseline, and its lower cases are disclosed rather than labeled a gate pass.

| Map / seed | Candidate90 shots | Candidate90 casualties A/E | Legacy shots | Legacy casualties A/E | Legacy below candidate90 |
|---|---:|---|---:|---|---|
| works/100 | 839 | 84.4%/31.2% | 2583 | 56.2%/56.2% | Azure casualty fraction |
| works/101 | 1038 | 90.6%/37.5% | 2012 | 62.5%/46.9% | Azure casualty fraction |
| works/102 | 965 | 68.8%/71.9% | 2270 | 37.5%/71.9% | Azure casualty fraction |
| works/103 | 1272 | 56.2%/75.0% | 2347 | 68.8%/56.2% | Ember casualty fraction |
| works/104 | 1067 | 78.1%/50.0% | 2086 | 75.0%/50.0% | Azure casualty fraction |
| works/105 | 1003 | 65.6%/40.6% | 2318 | 68.8%/59.4% | none |
| works/106 | 973 | 62.5%/62.5% | 2803 | 78.1%/50.0% | Ember casualty fraction |
| works/107 | 1197 | 53.1%/75.0% | 1878 | 59.4%/59.4% | Ember casualty fraction |
| works/108 | 841 | 71.9%/50.0% | 1962 | 46.9%/53.1% | Azure casualty fraction |
| works/109 | 689 | 56.2%/31.2% | 2806 | 65.6%/65.6% | none |
| trenches/100 | 598 | 6.2%/28.1% | 2104 | 59.4%/65.6% | none |
| trenches/101 | 1342 | 46.9%/6.2% | 1569 | 62.5%/12.5% | none |
| trenches/102 | 1179 | 40.6%/31.2% | 1774 | 21.9%/65.6% | Azure casualty fraction |
| trenches/103 | 511 | 15.6%/28.1% | 1805 | 15.6%/75.0% | none |
| trenches/104 | 817 | 31.2%/25.0% | 1377 | 37.5%/43.8% | none |
| trenches/105 | 558 | 25.0%/21.9% | 1948 | 40.6%/56.2% | none |
| trenches/106 | 552 | 18.8%/21.9% | 2552 | 75.0%/53.1% | none |
| trenches/107 | 655 | 15.6%/31.2% | 2284 | 50.0%/71.9% | none |
| trenches/108 | 385 | 6.2%/25.0% | 2262 | 62.5%/59.4% | none |
| trenches/109 | 1392 | 65.6%/28.1% | 2218 | 50.0%/50.0% | Azure casualty fraction |

## Disagreements and next slice

No implementation disagreement. The new per-run criterion is stricter than the
old nonzero-shot rule and is retained. Casualty fractions in self-play mix own
losses with enemy losses; they are reported separately, not presented as a single
quality score. Some legacy fractions are below candidate90; the explicit user
choice of legacy is implemented without tuning it to remove these cases.

Slice A is complete. Continue to Phase 1 F1 generation, schema-2 exports and the
family runner/report, with both authored controllers kept digest-identical.
