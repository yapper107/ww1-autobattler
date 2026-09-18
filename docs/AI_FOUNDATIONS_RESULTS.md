# AI foundations: first controlled implementation

Simulation source **59fbe5635ddb36bf**, based on git **3ebd263**. Implemented by
Astra with two actual Claude Fable 5.1 architectural consultations. The plan,
reviews, and explicit resolutions are linked from [AI_FOUNDATIONS_PLAN.md](AI_FOUNDATIONS_PLAN.md).

## What works in this slice

- Soldiers look independently of movement, turn at a bounded rate, watch received
  sectors/known contacts and scan when no recent contact holds their attention.
  A 140-degree horizontal visual field gates physical line-of-sight checks.
  The same field rule applies to friendly sight, clearing old tracks and remote
  geometry observations. Close physical interaction can still reveal geometry.
- Personal/received sightings retain timestamps, original observer and clearing
  evidence. The sparse mental map groups remembered observations into 16-metre
  regions and records observed count, recognized MGs, confidence and an uncertainty
  band. Missing regions are unknown. Terrain begins from a shared briefing map.
- Squad reports relay multiple original observations to platoon command. Relays
  neither multiply contacts nor refresh their observation timestamps. Stale
  downward directives cannot resurrect cleared contacts.
- Each actor gets a reproducible judgment bias once per battle. Officer policy
  uses it to choose within the estimated band. Identical evidence can therefore
  lead one officer to commit and another to observe first. This is an initial
  judgment parameter, not persistent officer progression or a complete skill model.
- Goal identity, purpose, objective and expiry travel with directives and member
  tasks. Two active members reporting relevant obstruction can block the goal;
  a single casualty or a temporary interruption cannot. Matching delayed feedback
  makes platoon command issue its retained observation alternative. The squad's
  subsequent orders actually change. Expired goals stop tagging new tasks.
- Traces expose mental maps and the upward-feedback/downward-order chain. The
  old corporal formation refresh is disabled in this mode so it cannot overwrite
  the squad's assigned destinations.

## Scope

Enabled only with **`--foundations --encounter 8`**. This is separate from the
unaccepted recovery controller and cannot be combined with it. Encounter 8 reuses
the existing controlled MG terrain and deployment. The normal Unreal game does
not expose this experimental mode.

The controlled tests script an obstruction/report sequence to prove the complete
transport and changed-order chain. The integrated 90-second seed-107 battle
recorded observation decisions but did **not** naturally trigger the two-member
blocked-goal fallback. Do not describe the scripted test as a spontaneous battle
outcome. The strict flanking evaluator is unchanged and was not used to accept
this work as improved tactics.

## Verification

- Foundations C++ tests passed: directional sight and occlusion; recognition
  delay; stationary rear scanning; negative evidence; memory ageing and dedup;
  biased judgments changing actual plans; real navigation failure transport;
  matching two-member obstruction; casualty/temporary-interruption distinction;
  stale contact clearance; goal expiry; feedback traces and changed squad orders.
- The 40-second integration test has matching trace-on/off gameplay digest
  **8441748753321685167**.
- Final full C++ suite and recovery/task-contract suite: **passed**. The full
  suite includes the existing encounter matrix, fixed-defender checks, four
  large-battle configurations, deterministic replay, physics, geometry and
  leadership regressions.
- Final ten-seed normal-battle parity: **10/10 exact matches** for seeds
  100–109 at 360 seconds against the preserved pre-change executable. This
  verifies isolation, not improved tactics.
- Python analyzer/evaluator suite: **22 tests passed**. Shell script syntax,
  Python compilation, Visual Studio component-file JSON, and `git diff --check`
  passed.

Final 90-second encounter samples:

| Seed | Gameplay digest |
|---|---|
| 107 | 17755323440607505564 |
| 108 | 3658656909978413117 |
| 109 | 926826896248619230 |

Seed 107 has the same digest with standard tracing, tracing disabled, and the
manifest-driven detailed rerun. These establish bounded repeatability and
integration coverage; they do not establish tactical balance, broad acceptance,
or a performance improvement.

Local evidence: `.local/foundations-validation/`. Preserved baseline executable:
`.local/foundations-baseline/battle-lab`. Source ID and manifests identify each
stage separately. Large generated traces and binaries remain outside Git.

## Inspect it

```bash
./scripts/test-sim.sh --foundations
./scripts/battle-lab.sh --foundations --encounter 8 --seed 107 --seconds 90 --out .local/foundations
python3 tools/investigate_foundations.py .local/foundations/latest.json --soldier 5 --time 30
python3 tools/rerun_battle.py .local/foundations/latest.json --out .local/foundations-repeat --soldier 5
```

Use `--estimate-bias -1` or `1` on the battle CLI to shift seeded judgments.
The output explicitly separates remembered observations from interpreted strength.

## Remaining work

Broader method selection and multi-stage goal planning; better coordination and
completion semantics; perception/scan tuning; unidentified-contact association;
calibrated strength estimates; hearing; exploration of unknown terrain; persistent
officer/soldier traits and progression; and Unreal visualization. The neutral
estimate can rise as uncertainty widens; it is a conservative planning heuristic,
not a probability-calibrated enemy count. Contact identity handles remain the
existing simulator IDs; no hidden positions/counts are consulted to build beliefs.

## Windows / Unreal follow-up (2026-09-14)

Visual Studio Community 2026 and Windows SDK 10.0.26100.0 are now installed.
Native Windows CLI and UE 5.8 editor-module builds passed. Foundations and
focused simulation checks passed on Windows. The 40-second foundations test
matched tracing on/off with digest **8565701859593197313**; the 90-second seed-107
CLI sample matched on/off with **11921550369815342934**. The foundation tests and
CLI trace comparison also passed after the final build-only rename, with the same
digests. Focused tests ran before that rename. Windows and Linux digests differ;
cross-platform bitwise parity is not claimed.

The subsequent stricter Unreal compiler required renaming one shadowed local in
`RecoverySim.cpp`. That build-only change produces simulation source
**bdebee7423944a54**. Native CLI and Unreal compile this source successfully.
Project targets now use UE 5.8 build settings V7; the primary scene light gets
explicit forward-shading priority. The full Linux results above remain recorded
against their original source identity rather than being relabeled.

Local logs: `.local/windows-validation/`. Toolchain details and reproducible build
commands: [DEVELOPMENT.md](DEVELOPMENT.md). These integration checks exercise the
normal Unreal game; the experimental foundations mode still requires the CLI.

Unreal main-map smoke seed 108 passed preparation, battle playback, stairs,
both-floor firing, command displays, result/restart and replay-cache checks.
Trench smoke seed 108 passed terrain, below-ground movement and replay checks,
including a repeat after the lighting fix. Captured preparation and battle screens
were inspected; the repeated trench capture no longer displays the lighting
warning. This verifies those integration paths, not tactical quality or final art.
Source and Config contents match the Windows build mirror.
