# Project working instructions

`CLAUDE.md` and `AGENTS.md` are identical: law, current state, standing rulings, gates and an
index. Dated history lives in [docs/PROJECT_LOG.md](docs/PROJECT_LOG.md); see "Keeping these files".

## Standing Astra / Fable collaboration

User approved 9 September 2026: GPT-6 Astra leads implementation, debugging,
graphics, testing and integration. Claude Fable 5.1 (`claude-fable-5-1`) provides
bounded architectural plans/reviews in a dedicated project session, through
`python3 /home/jchan/.local/share/astra-fable/fable_architect.py doctor` and
`ask --repo /home/jchan/ww1-autobattler --request /absolute/request.md`.
Use the existing subscription only: no API billing, paid extra usage, silent
model replacement, or credential copying. Fable reads but does not edit the
implementer's checkout; Astra resolves findings explicitly. User retains scope
and art authority. If Fable is unavailable, report why and continue independent
work. Avoid recursive consultation loops and idle polling.

Current accepted first-slice boundaries: [AI foundations plan](docs/AI_FOUNDATIONS_PLAN.md).
Actual architect response: [Fable review](docs/AI_FOUNDATIONS_FABLE_REVIEW.md).
The prior recovery experiment remains unaccepted; its 2/9 result is not replaced
by foundations checks. Preserve knowledge boundaries and strict tactical gates.

## Roles and scope

- The user is the game designer. The assistant is the programmer.
- Read `docs/DESIGN_VISION.md` before implementing gameplay. Preserve the core vision while explaining concrete technical or design tradeoffs.
- Distinguish the user's decisions from implementation assumptions and proposed features. The full vision is not the first prototype's feature list.
- Continue routine implementation and verification within the user's requested scope. Ask concise questions when a missing design decision materially changes the intended player experience.
- Keep the existing repository name unless the user requests a rename. Follow the original fantasy/retrofuturistic setting in the design document.

## Simulation principles

- The player prepares the army before battle. Combat is autonomous.
- Keep authoritative battle logic separate from Unreal rendering and presentation.
- Officers make decisions using their own knowledge and received reports. Never give tactical decision code unrestricted access to hidden enemy state.
- Record the information and reasons behind decisions so behavior can be inspected and explained.
- Keep persistent soldier identities distinct from temporary battle entities.
- Prefer simple, testable implementations. Add architectural complexity in response to actual requirements and measurements.

## Repository and tooling

- This WSL checkout is the authoritative source repository.
- Read `docs/DEVELOPMENT.md` for the verified Windows toolchain and build workflow.
- Keep build output, caches, installers, local machine settings, credentials, and temporary experiments out of Git.
- Track source assets, configuration, and scripts needed to reproduce the project. Do not ignore Unreal's `Build/` directory wholesale.
- Before introducing large binary assets, configure Git LFS and confirm it works in the active checkout.
- Validate changes with appropriate builds or behavior checks. Report what was actually tested and any limitations.

## AI investigation workflow

- Read `docs/BATTLE_LAB.md` when diagnosing battle behavior. Use structured traces and the offline analyzer to inspect the plan, received information, execution, and outcome before attributing a cause.
- Keep observer facts distinct from actor knowledge. Treat automatically flagged causes as hypotheses and link findings to concrete trace evidence.
- Compare fixed configurations against preserved baseline runs. Report remaining unexplained behavior and diagnostic overhead; do not equate movement or firing counts with tactical quality.
- Prepared map edits must use the geometry mutation/invalidation interface. Preserve stable IDs and revision-correct caches for future destruction.

## Current state

As of 24 September 2026:

- **Playable default:** Legacy Plan 023 Stage E (sim `45da1e25dd1aa9e7`, loop node `80dfe8feb994faf2`).
  Drills, cognition (candidate90) and the neural squad policy are opt-in only.
- **Source:** working simulator source `c945628c9538efbe`: a gun in every squad, muzzle credit,
  concealment, prone, vaulting, retire-fallen and spawn lanes by default; plan 028/030/031 switches off.
  Pushed on branch `covering-fire-2026-09-24` (24 Sep); `.local/` is not in Git: rebuild the lab with
  `scripts/battle-lab.sh`, the E-6 maps with `tools/covering/make_maps.py`.
- **Binaries:** `.local/lab/battle-lab` (lab); `.local/lab/battle-lab-train` (PGO+LTO,
  `scripts/build-train-lab.sh`, neural pipeline default); frozen training binary
  `.local/plan024/long-rl/bin/battle-lab` `d73667841df73faa` (sha256
  `4afbb09ef31f5656def8699d0c2bcb1b6e73e86936a3c03b9fe15ae653cfcc62`); frozen Legacy baseline
  `.local/plan024/baseline/battle-lab` `45da1e25dd1aa9e7`; frozen ARMYMAP 2 baseline
  `.local/plan029/baseline/battle-lab` `321600b6d945e49c` (village/city2 neural evaluation).
- **Neural runs:** plans [025](plans/025-stronger-learning-run.md) and [027](plans/027-schema4-training-run.md)
  finished with no reliable gain; neural training is paused. [Plan 028](plans/028-covering-fire.md)
  (covering-fire repair) stopped by Jordan's stop rule: no switch combination beats Legacy; all off. Capacity file `.local/neural/max_jobs`.
- **In progress:** [plan 031](plans/031-fire-and-movement.md): drill D measured (no gain), merged off; D2 next
  (rush fire, sheltered gun, get-down switch); tools in [tools/covering](tools/covering/README.md).
- **Models:** `models/squad/` (`plan024-imitation-v1`, `plan024-legacy-rl-v1`,
  `plan024-legacy-rl-duration-v1`); none promoted.
- **Maps:** four generated families in `Unreal/Config/GeneratedMaps/` (`city`, `trenches`, `village`,
  `city2`; village and city2 seed 17 accepted by Jordan 23 Sep 2026, golden-byte tested). Training
  701–760; development 901–930 (opened); 1001–1015 and 1101–1125 inspected; village/city2 development
  1201–1220, validation ≥ 1231 by salt.
- **Guards:** v8 (`tools/loop/guards.json`; village and city2 sets, thresholds unchanged; v7 preserved).
  Loop roots `2730fe73fadce803-legacy-v8` (+0.809) and `-drills-v8` **predate the 24 Sep defaults: re-root
  before the next loop generation.** The neural worker still fights one gun per platoon (`Config{}`).

## Standing rulings

Jordan's rulings in force, dated and linked to their source (`L:` = [docs/PROJECT_LOG.md](docs/PROJECT_LOG.md)).

- (16 Sep 2026, reaffirmed 21 Sep) **Legacy is the playable default**; other controllers stay
  opt-in. [L](docs/PROJECT_LOG.md#current-playable-default--user-replay-decision-16-september-2026)
- (16 Sep 2026) **No promotion without Jordan's replay approval**, judged from short side-by-side
  videos. Judge by distributions; **per-case fixes are refused**. [plan 014](plans/014-battle-drill-controller.md), [AI process](docs/AI_PROCESS.md)
- (16 Sep 2026) **Never restore candidate141** or reapply its later fixes.
  [L](docs/PROJECT_LOG.md#previous-main-build-decisions-history-superseded-by-the-replay-decision-above)
- (by 15 Sep 2026) **Frozen evaluator**; no tuning on held-out seeds; seeds **2001–2010 stay
  unopened**. [L](docs/PROJECT_LOG.md#early-project-instructions--undated-before-16-september-2026)
- (17 Sep 2026) Cover comes from **all usable physical geometry**, not generator-marked spots.
  [L](docs/PROJECT_LOG.md#integrated-map-generator--17-september-2026)
- (18 Sep 2026) Digests are re-measured after an approved change, **never tuned back**. [plan 017](plans/017-stat-system.md)
- Loop and machine, [plan 018](plans/018-static-defence-and-loop-roots.md): AI behaviour is judged
  on **generated city maps**, trench maps only prove soldiers shoot (18 Sep 2026); **WSL stays at
  30 GB** (19 Sep); **raw battle output is not a record**, battles regenerate from a node's frozen
  binary (19 Sep); **loop proposers are Sonnet** (20 Sep); **parents are chosen by the selection
  policy** (21 Sep); **the user sees only survivors** (21 Sep); suite and lean-parity memory
  limits **live in the scripts, not in memory** (21 Sep); the queued keep-away-from-known-enemies
  change waits, **not while generations are running** (21 Sep).
- (21 Sep 2026) "Pull up the project" = playable demo **`-game -ArmyLegacy`**, not the editor.
  **No Fable review of visual iteration.** Projectiles: **richer color, not larger bullets.**
  [L](docs/PROJECT_LOG.md#plan-023--art-integration--21-september-2026)
- (22 Sep 2026) **Train against active Legacy**; static defence is regression only. Plan 023
  benchmarks and conduct **thresholds are not weakened**. [plan 024](plans/024-neural-squad-layer.md)
- (22 Sep 2026) Inspected maps are **never a promotion set**.
  [L](docs/PROJECT_LOG.md#neural-reward-pilot-against-active-legacy--22-september-2026)
- (23 Sep 2026) **City2 is a new family**; Town and village stay byte-identical; shared paving
  accepted. [L](docs/PROJECT_LOG.md#city2-shared-paving-and-geometry-review--23-september-2026)
- (22 Sep 2026) **Keep the frozen training binary** (`d73667841df73faa`); new builds go to new
  paths. [L](docs/PROJECT_LOG.md#exact-training-battle-optimization--22-september-2026)
- (24 Sep 2026) **Every squad has a machine gunner; concealment, prone, vaulting and retire-fallen are
  on** ("switch the switches to baseline"): the game and `battle_cli` default; `--platoon-mg`,
  `--no-concealment`, `--no-prone`, `--no-vaulting`, `--no-retire-fallen` restore; `Config{}` keeps the
  old values for unit fixtures. [L](docs/PROJECT_LOG.md)
- (24 Sep 2026, [plan 029](plans/029-village-verticality.md)) **Towns are out of the runs**: measurements,
  loop sets and training use the village and city2 families; the old town family stays only for the 40
  historical references and history.
- (23 Sep 2026, [plan 029](plans/029-village-verticality.md)) **Village and city2 looks accepted**
  (generated layouts only; no AI or default change). **Covering-fire credit is judged from the
  muzzle (`muzzleCredit` on by default; `--no-muzzle-credit` for A/B)**: a Legacy change on every family,
  re-baselined and re-rooted.
- (22 Sep 2026, [plan 026](plans/026-ai-findings-fixes.md)) **Opus 5.5 agents implement; the main
  session oversees and integrates.** Parallel benchmark agents **stay under the thread count**;
  final timing is central, on a quiet machine. **Friendly-fire repairs may change Legacy
  directly**, followed by a re-baseline.

- (23 Sep 2026) **Village damage is uneven** (battered approach, quieter rear, map-wide crater
  budget); rim and coverage gates unchanged. [L](docs/PROJECT_LOG.md#village-uneven-damage-across-parcel-boundaries--23-september-2026)

- (23 Sep 2026) Village supportability checks **2–4 objectives, every team against every objective**;
  ≥0.70 unchanged; validator only. [L](docs/PROJECT_LOG.md#village-validation-across-multiple-objectives--23-september-2026)

- (23 Sep 2026) **Curve village roads and add more curved sunken lanes**, retaining the existing
  physical contract and objective coverage gates. [L](docs/PROJECT_LOG.md#curved-village-roads-and-sunken-lanes--23-september-2026)

## Verification gates

A feature test takes **5–10 minutes end to end** (Jordan, 24 Sep 2026): only the checks the change
needs (switch off by default → 40/40 + its own groups; exact optimization → 40/40 + replays; default
change → re-baseline + touched groups + Unreal build if the game changed); one question per measurement,
about 200 battles at most on a fixed map set, untraced unless needed, stopped once the answer is clear; the
full suite only before a commit. Report what ran; code tests are not tactical or visual acceptance.

- `scripts/test-sim.sh` — full Linux suite, including `--neural`.
- `python3 -m unittest discover -s tests` — Python tests (includes `tests/test_project_docs.py`).
- `python3 tools/verify/parity_lean.py <out> <binary>` — 40/40 lean historical parity.
- `python3 tools/verify/trace_checks_lean.py <name> <binary>` — 3/3 drills trace parity plus repeat.
- `.local/neural-venv/bin/python -m tools.neural.verify --out <dir>` — 41/41 neural parity.
- `.local/neural-venv/bin/python -m tools.neural.check_export --model-dir <m> --data <d> --probe <p>`
  (Linux) and `scripts/check-neural-windows.sh <m> <d>` (Windows).
- `scripts/build-lab-windows.sh` (native Windows lab) and `scripts/build.sh` (Unreal).
- Changes meant to be exact: 12 recorded training-battle replays,
  `python3 .local/plan024/opus-round4/bench.py OUTDIR CONCURRENCY ROUNDS variant=binary ...`.
- An allowed Legacy digest change: `python3 tools/verify/rebaseline_lean.py <name> <binary>`, then 40/40.
- **Raw battle output is deleted when its analysis is done** (`evaluation.jsonl`, `shots.jsonl`,
  `trace*.jsonl`, `battle-*` directories); manifests, metric rows and reports are the record. Only the
  40 lean references and the recorded training battles stay on disk (Jordan, 24 Sep 2026, after the
  WSL instance ran out of memory).

## Where things are

Plans, current first:

- [031](plans/031-fire-and-movement.md) fire and movement — D merged off, D2 next.
- [030](plans/030-suppression-mechanics.md) suppression and covering fire, W-1 — switches off.
- [029](plans/029-village-verticality.md) villages, verticality, city2 — landed.
- [026](plans/026-ai-findings-fixes.md) AI findings.
- [025](plans/025-stronger-learning-run.md) stronger-learning neural run — finished.
- [024](plans/024-neural-squad-layer.md) neural squad layer (reviews, longer RL, execution audit,
  performance work under `plans/024-*`).
- [023](plans/023-the-rifle-group-moves-as-one.md) rifle group moves as one — landed; the default.
- [022](plans/022-stamina-and-sprint.md) stamina and sprint — landed.
- [021](plans/021-legacy-attack-by-bounds.md) Legacy attack by bounds — inside 023.
- [020](plans/020-threat-aware-paths-and-rejoin.md) threat-aware paths — landed.
- [019](plans/019-fire-on-the-move.md) fire on the move — landed.
- [018](plans/018-static-defence-and-loop-roots.md) static defence and the loop — every generation at its end.
- [017](plans/017-stat-system.md) stats and weapons — complete on Linux.
- [016](plans/016-improvement-loop.md) improvement loop, with map generator reviews.
- [015](plans/015-squad-initiative-amendment.md) squad initiative — stopped at Step E.
- [014](plans/014-battle-drill-controller.md) battle-drill controller — experimental.
- [006](plans/006-modular-character-production.md) modular characters — proposal.
- 001–013 cognition roadmap, reviews and repairs — see [plans/README.md](plans/README.md).
- [MotionBricks review](plans/motionbricks-viability-fable-review.md) — research only.

Docs:

- Process: [AI_PROCESS](docs/AI_PROCESS.md), [IMPROVEMENT_LOOP](docs/IMPROVEMENT_LOOP.md),
  [BATTLE_LAB](docs/BATTLE_LAB.md), [DEVELOPMENT](docs/DEVELOPMENT.md),
  [DESIGN_VISION](docs/DESIGN_VISION.md), [morning summary 24 Sep](docs/AI_SESSION_HANDOFF_2026-09-24.md),
  [handoff 22 Sep](docs/AI_SESSION_HANDOFF_2026-09-22.md).
- Neural: `docs/NEURAL_SQUAD_PILOT.md`, `NEURAL_LEGACY_RL_PILOT.md`, `NEURAL_LEGACY_RL_DURATION.md`,
  `tools/neural/README.md`.
- Performance: `docs/NEURAL_TRAINING_*.md` (latest ROUND4), `BATTLE_PERFORMANCE.md`, `TACTICAL_ROUTES.md`.
- Maps: `docs/MAP_GENERATOR.md`, `MAP_GENERATOR_INTEGRATION.md`. Simulation:
  `docs/STATS_AND_WEAPONS.md`, `AI_MAIN_BUILD.md`.
- Art: `docs/ART_INTEGRATION_023.md`, `CHARACTER_ANIMATIONS.md`, `MOTIONBRICKS_VIABILITY.md`.
- History: [docs/PROJECT_LOG.md](docs/PROJECT_LOG.md), every dated entry verbatim; older
  cognition, recovery and tactical-AI docs are reached from it.

## Keeping these files

- New work gets a dated `## ` entry at the **top** of `docs/PROJECT_LOG.md` and a row in its index.
- Update **Current state** here when it changes; add or retire a **Standing ruling** (dated, linked).
- No narrative in these files. Edit `AGENTS.md`, then copy it to `CLAUDE.md` (byte-identical, at
  most 16 KB); `python3 -m unittest tests.test_project_docs` checks both.
- Older plans that say "prepend to AGENTS.md/CLAUDE.md" now mean the log.
