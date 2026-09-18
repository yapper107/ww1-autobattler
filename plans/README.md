# AI planning index

## Current status and execution order

**16 September 2026:** the main build is candidate90 (`d0e577abab5319b6`, 28/30 historical, 8/9 original) and the user has approved [plan 014](014-battle-drill-controller.md), which supersedes the strict-gate promotion law for the new battle-drill controller. The paragraph below describes the earlier cognition status.

Source `8a5b385e04c22185` passes the original matrix **9/9 on Linux and Windows**.
Frozen held-outs score **22/30** (layouts 5/6/7: **10/10, 7/10, 5/10**).
Cognition remains experimental: the per-layout held-out gate has not passed.
See [measured results](../docs/AI_NINE_GATE_RESULTS.md).

| Plan | Status | Dependency / next action |
|---|---|---|
| [004 — Decision-to-action loop](004-decision-action-loop.md) | Implemented; promotion still blocked | Preserve execution contracts and strict gates. |
| [005 — Held-out diagnosis and reliability repairs](005-held-out-reliability.md) | Proposed; diagnosis complete, fixes not implemented | Freeze fresh validation → lifecycle/capability → executable final connectors → relevant support and friendly lanes → defensible occupation/escalation → integration gates. |
| [014 — Battle-drill controller](014-battle-drill-controller.md) with [scenarios, families and metrics](014-battle-drill-scenarios.md) | User-approved architecture, 16 September 2026; attributed Fable plan; implementation not started | Phase 0 measurement → 0b candidate90 crowding hotfix → generator and family runner → position service and tactical movement → squad drills → platoon task tree → profiles → promotion by distributional scoreboard and replay review. |
| [017 — Soldier stats and weapon items](017-stat-system.md) | User-approved 17 September 2026; attributed Fable plan; Opus agents implement under Fable review; phase 1 landed on branch `plan-017-stats` | Phase 1 stats and fire control → phase 2 energy ballistics with over-penetration → phase 3 sway and recoil. Digests re-baselined after each phase, never tuned back. Formulas in [docs/STATS_AND_WEAPONS.md](../docs/STATS_AND_WEAPONS.md). |

Plan 005 was requested specifically for the opened failures; no further finding
selection is needed. Its [architect request](005-held-out-review-request.md) was
blocked by Fable's subscription limit; no fresh architectural approval is claimed.

## Earlier accepted design and attributed reviews

1. [AI upgrade roadmap and research](001-ai-upgrade-roadmap.md) — user authorized implementation on 14 September 2026.
2. [Roadmap architectural review](001-ai-upgrade-fable-review.md) — attributed Fable response; resolutions are in the roadmap.
3. [Implementation contract](002-ai-upgrade-implementation-review.md) — plan authority, method lifecycle and scenario requirements.
4. [Code review](003-cognition-code-review.md) — findings and [Astra resolutions/results](../docs/AI_COGNITION_IMPLEMENTATION.md).

The bounded vision, memory, method library, officer profiles and replay inspector
are implemented behind `--cognition` / `-ArmyCognition`. Feature scenarios,
normal-game isolation, platform builds and strict tactical scoring are separate
checks. The implementation report records actual results and unresolved behavior.
A failed tactical matrix prevents promotion even when mechanism scenarios pass.

## Considered and rejected in the held-out audit

- **Increase duration:** these failures include elimination, member losses and
  execution inconsistency; changing the 360-second gate would not repair them.
- **Count arrival/angles as completion:** would hide invalid or missing receipts
  and weaken the frozen evaluator.
- **Count all wounded or historical Done soldiers as current occupants:** needs
  current capability/position evidence; never a shortcut to a passing score.
- **Friendly fire explains every failure:** contradicted by layout 7 pre-failure
  damage sources. The range/coordination gap is directly evidenced in 6/118.
- **Command succession itself loses the route:** inspected layout 7 traces retain
  the accepted plan; casualties and final execution failures explain these cases.
- **Deadline cycling or geometry alone explains all eight:** deadline-reset risks
  deserve scenarios, but are not established primary causes; passing controls also
  contain the final-path defect, masked by other members.
- **Replace the AI architecture or tune opened seeds:** fix the demonstrated
  contracts in new physical scenarios; use a newly frozen cohort for generalization.

Still deferred by the roadmap: a generic planner replacement, dense probability
maps, anonymous-contact association, hearing, unreliable/capacity-limited
communications and persistent progression. No planning/ML dependency is required.
