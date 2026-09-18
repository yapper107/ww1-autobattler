# Plan 016: automated improvement loop for the drills controller

Draft 1, 17 September 2026. Architect and harness implementer: Claude Fable 5.1 (`claude-fable-5-1`), direct Claude Code session in this checkout. Source fingerprint at planning time: `4c2ca48bb9c1add9` (plan 015 step E source, uncommitted). Legacy remains the playable default throughout.

## User decisions recorded in this planning session

1. **Why.** Plan 015 execution went in circles: each review-implement-measure turn cost one to two hours, stopped on the first failed guard, relayed through the architect, and four architect rulings were withdrawn as wrong. The user asked whether a Dream-RSI style self-improvement workflow should replace that loop, expecting the AI to need rework as features are added.
2. **What Dream-RSI is** (Zheng et al., arXiv 2609.14858, September 2026): a coding agent produces candidates that form a discovery tree (code, score, workspace, parent); an *exploration policy* in plain code decides which nodes to continue from, how many workers to run and when to stop; that policy is improved by an LLM and evaluated by "dreaming", replaying frozen historical trees where every outcome is already recorded. It requires a deterministic evaluator, a scalar score per node and enough recorded history to replay. Its gains came at hundreds to thousands of evaluations per problem.
3. **Order of build.** Score and tree first (this plan's Phase 1), then the outer loop (Phase 2 parameter search without an LLM, Phase 3 structural proposals), then the Dream-RSI policy layer once the tree has hundreds of nodes (Phase 4).
4. **Ownership.** Fable builds the harness and integration in this session (`tools/loop/`, its tests, this plan). Astra, working with the user, redesigns the two playable maps; the user judged Trenches and Fractured Works as not resembling real ground. Neither party edits the other's files. Fable does not touch `Sim/`, map authoring or shared build scripts until the map work lands.
5. **Objective consequence of the map redesign.** Generated families are the primary objective. Authored maps are light regression checks until redesigned. F3 urban and F4 trench families, deferred in plan 014, become worth building because they give the loop and the redesign the same vocabulary.
6. **Agents and cost.** The user is concerned about token usage. Parameter search uses no LLM. Structural proposals default to a cheaper model (Sonnet 5 recommended, Haiku 4.5 for narrow single-function mutations), with the proposing model and approximate usage recorded on every node. Fable does weekly tree diagnosis and guard design from user verdicts; Astra owns harness integration into the build and the map redesign. Everything stays within existing subscriptions; no API billing; no silent model substitution.
7. **Human time.** Under an hour a day: 15 to 20 minutes per survivor verdict, one or two survivors a day at most, plus a weekly 30 to 40 minute blind pairwise session that calibrates the score. The weekly session is the one part not to drop.

## Measured throughput (this box, 16 cores, 45 GB)

| Battle | Wall | Peak memory |
|---|---|---:|
| Fractured Works, 360 s, drills, with trace | 21 s (12.5 s sim, 7 s export) | 4 GB |
| F1 generated draw, 360 s, drills, with trace | 2.3 s | 1.2 GB |

Ten Works battles or a dozen F1 draws run at once. A full candidate evaluation (20 authored battles, 90 F1 draws) is about two minutes of wall time without traces. Sparring-partner baselines are deterministic and cached per baseline binary and scenario, never rerun per candidate. The build and the 35 mechanism selectors dominate at roughly ten minutes per candidate. Evaluation is cheap; proposals are the scarce resource, the reverse of the paper's domains.

## Score, versioned

The score is layered. Only the objective layer is optimised. The user's replay is not a term in the score; it is the source of new guards.

1. **Guards (hard).** A candidate failing any guard has no score. Guards are data (a list in `tools/loop/guards.json`), each with a metric name, comparison, reference (absolute, or paired against a named baseline with its bootstrap interval) and a provenance note saying which user verdict or review introduced it. Initial set, all already computable:
   - build passes; all mechanism selectors pass; Python tests pass; protected files unchanged; no policy read of hidden enemy state (static check over the policy sources for observer and enemy-truth symbols);
   - no zero-shot battle; at least three of four squads per side fire in every authored battle;
   - under-2 m share not worse than legacy beyond its paired interval on every set; orders per minute per side not higher than legacy beyond its interval; friendly-fire hits bounded.
2. **Objective (one number).** Mean over families and authored sets of paired attacker or own-side win share and clipped log casualty exchange against two fixed sparring partners (legacy and candidate90), each with a bootstrap interval. The optimiser uses the lower bound of the interval, not the mean. Validation draws for a candidate are derived from `hash(fingerprint, family, salt)` and never reused; development draws are fixed and open and are reported separately.
3. **Tie-break.** Smaller diff from the parent wins at equal objective.

Every node stores its raw exports, so any score version can be recomputed over the whole tree. A guard added from a user verdict re-scores history for free; that is the property the loop relies on to never repeat a caught mistake.

## Tree

`.local/loop/tree/<node-id>/` with `node.json`:

```
id (fingerprint), parent, created, proposer {kind: human|param-search|llm, model, usage}, brief,
diff (path), build {ok, log}, selectors {passed, failed[]}, guards {name: {value, reference, pass}},
objective {mean, ci95, lower, per_set{}}, score_version, exports (path), aar (path), verdict (path or null)
```

Nodes are append-only. Baselines are nodes too (kind `baseline`). A re-score writes a new `scores/<version>.json` beside `node.json` rather than rewriting it.

## Human channels

- **Verdict form.** `tools/loop/verdict.py` records a structured note against a node: battle, time, squad, what looked wrong, what should have happened, decision (accept, reject, undecided). A reject must be turned into a guard within the same round by the architect; the guard's provenance points at the verdict.
- **Blind pairs.** `tools/loop/pairs.py` selects pairs of nodes on the same map and seed, writes two replay manifests with hidden labels and an answer key the user does not see, and records the user's preference. Its first use is calibration: where the score's ordering disagrees with the user's, the score is blind and the disagreement is investigated before the optimiser finds it. With a few hundred labels a learned term may be trained later; not in Phase 1.

## Phases

### Phase 1: score and tree (Fable, this session)

`tools/loop/`: `score.py` (versioned layers, guards as data), `tree.py` (node store, append-only), `evaluate.py` (runs authored sets and families in parallel against a binary, no traces except for survivors, baseline cache keyed by baseline fingerprint and scenario), `rescore.py`, `verdict.py`, `pairs.py`, `static_check.py` (hidden-state read check), CLI entry `python3 -m tools.loop`. Reuses `run_family.py`, `family_metrics.py`, `report_family.py` bootstrap, `measure_dispersion.py`, `evaluate_tactics.py`, `after_action.py` and the plan 015 guard code rather than reimplementing them. Tests in `tests/test_loop.py`. Exit: the plan 015 sources (`4786fc9830d0c1c0`, `26145f87ae81a257`, `4c2ca48bb9c1add9`) and the three baselines are recorded as nodes with scores, and a re-score over them with a new guard works.

Status 17 September 2026: harness written and unit-tested (`tests/test_loop.py`, 13
tests); runner, baselines, score, tree, verdicts, pairs and static check in place;
generated town and trench maps added as `town-dev`, `trench-dev`, `town-val` and
`trench-val` sets through `tools/loop/maps.py` after the user's map rework; an
end-to-end evaluation with selectors has not yet been run, so the exit criterion
(the plan 015 sources and baselines recorded as scored nodes) is open. Battle cost
was reduced first; see [battle performance](../docs/BATTLE_PERFORMANCE.md).

### Phase 2: parameter search (no LLM)

Expose doctrine thresholds as a parameter vector read from a file at CLI start (Astra integrates the read into the Sim after the map work; the search itself lives in `tools/loop/search.py`). Evolutionary or CMA-ES search over the vector under the guards, nightly, results as nodes. No per-seed or per-map parameters; a candidate is one vector for all scenarios.

### Phase 3: structural proposals

`tools/loop/propose.py` builds tight briefs from a node's diagnostics (failing metric, after-action turning points, file region) and hands them to a proposer agent (default Sonnet 5), applies the returned diff in an isolated worktree, evaluates, records. Survivors go to the user's replay; a rejection becomes a guard. Fable reviews the tree weekly.

### Phase 4: exploration policy and dreaming

Once the tree has hundreds of nodes: the parent-selection and budget policy as replaceable code, evaluated by replay over frozen trees per Dream-RSI, improved by an LLM at a few calls a week.

## Constraints preserved

Officer memory, own orders, received reports and permitted squad-member fields only; no hidden enemy state in policy (now a static guard). Protected files untouched (`tests/ai_acceptance.json`, `tests/ai_validation_v2.json`, `tools/evaluate_routes.py`, `TerrainSim.cpp`, authored layouts 5 to 7, frozen seed lists). No commit, reset or stash by agents. No per-seed tuning. Windows and Unreal verification remain checks on survivors, not part of the loop. Legacy remains default until the user's replay approves a survivor.
