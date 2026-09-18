# Plan 014 implementation handoff to Astra

**From:** Claude Fable 5.1 (`claude-fable-5-1`), project architect session, 16 September 2026.
**To:** GPT-6 Astra (Codex), implementation lead under the standing collaboration agreement.
**Repository:** `/home/jchan/ww1-autobattler` (WSL authoritative checkout). Source fingerprint `d0e577abab5319b6` (candidate90). The working tree contains the uncommitted cognition work; do not reset it.
**Authority:** the user approved [plan 014](014-battle-drill-controller.md) and its [scenario and metric companion](014-battle-drill-scenarios.md) in the architect session today and asked Fable to hand the plan to Astra to start implementation. The four user decisions are recorded at the top of `AGENTS.md` and `CLAUDE.md`.

## Objective

Start the plan 014 programme in order: Phase 0 measurement, then the authorised Phase 0b crowding hotfix on candidate90, then Phase 1 generator and family runner. Later phases follow after Fable review of each slice.

## First slice: Phase 0 (no gameplay change)

1. Commit `tools/measure_dispersion.py`: nearest-squadmate distance median and share under 2 m, squad radius, minimum inter-squad centroid distance, from `evaluation.jsonl`; definitions in companion section 4. The uncommitted script that produced `.local/normal-map-review/spacing.json` is the starting point if it still exists; otherwise write it fresh. Python unit tests with hand-built fixtures in `tests/test_family.py` or a sibling.
2. Commit `tools/evaluate_tactics.py` for the metrics computable from existing exports: exposed-without-firing seconds, friendly-fire hits, outcome as casualty fractions, order reversals from trace, succession latency. Metrics that need `shots.jsonl` or `element_role` wait for the export change in Phase 1.
3. Produce the baseline report with the commands in companion section 5 (legacy and candidate90, both playable maps, seeds 100-109, 360 s, `--evaluate --no-trace`), and run the frozen nine and thirty with `tools/run_ai_acceptance.py` as regression information only.
4. Report: the numbers, the commands, the source fingerprint, and anything in the metric definitions that turned out to be ambiguous. Do not change gameplay source in this slice.

## Second slice: Phase 0b hotfix on candidate90 (authorised by the user)

Four bounded fixes, each traced and measured with the Phase 0 tools on both playable maps, reported against the frozen 9 and 30 as regression information only. The user accepts that the 28/30 historical score may move.

1. Initialise each squad's mission from its deployment sector when no higher order exists, lifting the lane logic of `UpdateSearchMission` (`CommandSim.cpp:159-205`) into the cognition path at `CognitiveSim.cpp:603`, and retain the accepted mission instead of rewriting it each tick.
2. Apply the ally occupancy rejection (`BattleSim.cpp:552` rule) to typed tasks and to the emergency shelter search (`TaskSim.cpp:100-113`).
3. Widen `Positions()` (`CognitiveSim.cpp:151-202`) separation to 2.0 m shelter and 1.8 m peek, remove the packed fallback block at `:188`, and limit movers to the required occupants plus a covering element.
4. Query reserve and consolidate positions inside the squad's own sector with the occupancy rule instead of `mover.position` plus an offset (`PlatoonSim.cpp:109-115`).

Exit: median nearest-squadmate distance and share under 2 m at or better than legacy on both maps; no new hidden-state reads; legacy digests unchanged (`tools/check_foundations_parity.py`); trace on and off parity; the user reviews replay on both maps before this becomes the default.

## Constraints

- Preserve the knowledge boundary: policy reads the officer's own memory, own orders and received reports only.
- Legacy and cognition gameplay digests must stay byte-identical except where the hotfix intentionally changes cognition behaviour; report the parity evidence.
- No per-case fixes: every behaviour change names its rule and is checked on both maps across the ten seeds, never on one seed.
- Do not edit the authored layouts 5-7, the frozen seed lists or the evaluator.
- Native Windows builds, Unreal integration and replay smoke checks remain Astra's; run them for the hotfix before proposing it as the default.
- Ask Fable through the launcher for a bounded review at the end of each slice, with objective, fingerprint, changed files, scenario evidence and parity evidence. Fable will refuse per-case fixes.

## Acceptance for this handoff

Astra acknowledges the plan in a short note at `.local/handoffs/014-astra-ack.md` (objective understood, first slice started, any disagreement with the plan stated explicitly with evidence), then proceeds with Phase 0. Disagreements are welcome and should be argued with evidence rather than silently dropped.
