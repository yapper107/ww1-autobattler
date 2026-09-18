# Improvement loop (plan 016)

Harness for scoring drills-controller candidates and recording them as a discovery
tree. Design and decisions: [plan 016](../plans/016-improvement-loop.md). Code:
`tools/loop/`. Tests: `tests/test_loop.py`. Everything lives under `.local/loop/`
(override with `ARMY_LOOP_ROOT`). Legacy remains the playable default; nothing here
changes a default.

## Commands

All from the repository root.

```bash
python3 -m tools.loop evaluate --proposer human --brief "what this candidate changes"
```

Evaluates the current simulation source as one node: snapshots the sources, builds
the lab binary, runs the static hidden-state check, the protected-file check, the
test build and all mechanism selectors, the Python tests, then the candidate battles
(Works and Trenches seeds 100 to 109, the 90 F1 development draws, 30 F1
validation draws hashed from the fingerprint, and the generated town and trench sets), the legacy and cognition parity spot
battles, the cached baseline rows, and finally the score. Options: `--parent ID`,
`--proposer llm --model sonnet`, `--jobs N`, `--sets works,f1-dev` for a partial run,
`--skip-selectors` and `--skip-python` for smoke tests (both leave the node without a
score, since their guards fail), `--suffix` for parameter variants of one fingerprint,
`--force` to re-evaluate an existing node.

```bash
python3 -m tools.loop tree            # list nodes with guard status, value and verdict
python3 -m tools.loop tree <id>       # one node in full
python3 -m tools.loop rescore [--guards other-guards.json] [ids...]
python3 -m tools.loop verdict <id> reject --battle works:107 --at 120 --squad 5 --wrong "..." --expected "..."
python3 -m tools.loop rejections     # rejections not yet turned into a guard
python3 -m tools.loop pairs make <left> <right> --set works --key t0-107
python3 -m tools.loop pairs answer <pair-id> A|B|neither
python3 -m tools.loop pairs calibrate
python3 -m tools.loop static-check
```

## Score v1

Defined in `tools/loop/guards.json`; computed by `tools/loop/score.py` from recorded
rows only, so any version can be recomputed over the whole tree.

1. **Guards, hard.** Build, selectors, Python tests, protected files, static check,
   legacy and cognition parity, no zero-shot battle, at least three squads firing per
   side on authored maps, and paired-against-legacy intervals for under-2 m share,
   orders per minute per side and friendly fire. A failing guard leaves the node with
   no value. Every guard carries a provenance note naming the user verdict or review
   that introduced it.
2. **Objective.** Per F1 set and sparring partner (legacy, candidate90): paired delta
   of attacker result (win 1, draw 0.5, loss 0) plus a quarter of the paired delta of
   clipped log2 casualty exchange, cluster-bootstrapped on the generated map. The node's
   value is the lower interval bound on the validation set. The development set is
   reported beside it. The squad-only reference `a0364bff5cea6ab9` is reported as
   information.
3. **Tie-break.** Fewer changed lines against the parent.

Authored maps are guards only, and so are the generated town and trench maps: the
CLI runs one controller for both sides, so a mixed-controller sparring battle does
not exist yet and symmetric maps cannot yield a win share against a partner. That
per-team controller flag is the integration item that would turn them into
objective sets.

## Generated map sets

`tools/loop/maps.py` calls `tools/generate_maps.py` for a seed (under a second for
both kinds) and caches the `.army` files under `.local/loop/maps/<seed>/`. Sets
`town-dev` and `trench-dev` use map seeds 21 to 40 with battle seed 107; `town-val`
and `trench-val` use ten map seeds hashed from the candidate fingerprint. Rows carry
the battlefield digest from the manifest. A sweep of twenty fresh seeds on
17 September 2026 imported, pathed and fought on every one (336 to 2,622 shots,
7 to 21 s of simulation each).

## Tree layout

```
.local/loop/tree/<id>/node.json        identity, parent, proposer, external checks, draws, score summary
                      source/          simulation source snapshot
                      diff.patch       against the parent's snapshot
                      battle-lab       frozen candidate binary
                      sim-tests, selectors/, selectors.json
                      runs/<set>/drills/<key>/   battle exports (no trace)
                      parity/          legacy and cognition spot battles
                      rows.json        one metric row per battle
                      scores/v1.json   full score for each version
                      verdicts.jsonl   user replay verdicts
.local/loop/baselines/<name>/<set>/<key>-360.json   cached sparring-partner rows
.local/loop/pairs/<pair-id>/{pair.json,key.json,A/,B/}  blind comparisons; labels.jsonl
```

## Adding a guard from a verdict

Record the verdict, derive the metric (existing rows already carry every
`family_metrics` field plus orders per minute and firing squads), append a guard
object to `guards.json` with its provenance set to the verdict, bump `version`, then
`python3 -m tools.loop rescore`. Every node is re-scored from its rows; no battle is
rerun. If the metric needs a new export field, that is a Sim change and a new
candidate.

## Costs measured on 17 September 2026

Works battle 21 s with trace, about 13 s without; F1 draw about 2 s. A full candidate
evaluation is roughly two minutes of battles plus about ten minutes of build and
selectors. Baselines are run once per scenario and cached.
