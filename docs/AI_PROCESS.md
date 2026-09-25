# How the battle AI was improved, and how to pick it up again

Written 21 September 2026 at the user's request ("I want this saved as our AI process in case we do more with AI in
the future"). It is the map: every detail lives in the plans and documents it points to. Nothing here needs the battle
output that was generated along the way: every battle regenerates bit-identically from a node's frozen binary or from
the source fingerprint in its plan.

## 1. What there is

- **Three squad AIs** in one deterministic C++17 simulator (`Unreal/Source/ArmyPrototype/Sim/`): **legacy** (the
  playable default and the one this process improved), cognition (candidate90, preserved) and drills (plan 014/015,
  preserved). Shared soldier-level code (movemeqqnt, cover, fire, paths, stamina) is common to all three.
- **The improvement loop** (`tools/loop/`, guide `docs/IMPROVEMENT_LOOP.md`, design plan 016): a discovery tree of
  nodes, each a frozen source snapshot and binary with its battles' rows and scores. `python3 -m tools.loop evaluate`
  scores the current source as a node; `tree`, `view` (an HTML page of the tree), `select` (the exploration policy),
  `rescore`, `remeasure`, `replay` (a node's battle in Unreal), `diagnose`, `brief`.
- **The objective** (plan 018): an attack on twelve static defenders on generated city maps, 600 s, score = defenders
  put out of action minus half the attacker's own loss; 60 development attacks (fixed) and 45 validation attacks (drawn
  fresh each generation), 20 symmetric town battles and 10 trench battles for the guards. The loop ranks on the lower
  bound of the validation mean ("value"); children are scored paired against their lineage root on the same battles.
- **The guards** (`tools/loop/guards.json`, version v7; every earlier version kept as `guards-vN.json`): a node has a
  score only if every guard passes: at least three attacking squads fire (cleared battles exempt), no silent battle,
  friendly fire, men within 2 m and orders a minute not above the root on the symmetric battles, no mechanism test the
  root passes may fail, the other two controllers and the defenders bit-identical, and the conduct guards paired
  against the root: men at the fight, seen-and-shotless (half a point of tolerance), seen at all (4 points; 5 when
  flanking fire is reliably up). Each guard's `provenance` field records the user's replay verdict that created it.
- **The conduct measures** (`tools/conduct_metrics.py`, `tools/family_metrics.py`): everything the user has ever
  pointed at in a replay, as a number: flanking fire, quiet squads, stragglers, men behind their corporal, order
  churn, wounds while displacing, exposure, stutter, gun silence. When the user says "I see X", the first step is a
  measure for X on all 60 development battles, before any change.
- **The video tool** (`tools/battle_video.py`): a side-by-side top-down MP4 of two nodes on the same map and seed, the
  focus squad coloured, exposure, sprints, walking fire, the corporal's path and flank goal. This is how the user
  reviews behaviour, and his verdict on it outranks every number.
- **Verification** (`tools/verify/`, `scripts/test-sim.sh`, `tests/`): 40 lean reference battles (20 legacy, 20
  cognition) with stored digests, regenerated when shared code changes; drills trace parity; the full C++ suite with
  mechanism pins per plan; the Python tests; the Unreal build (`scripts/build.sh`, UE 5.4 on this machine).

## 2. The loop, generation by generation

1. **Roots.** Each lineage's root is the plain controller on the current build, scored once. Every shared-code change
   (plans 019 to 022, the path fix, the pace field) re-roots both lineages and the best nodes are carried onto the new
   build and re-scored (`--carried-from`).
2. **Parents.** `python3 -m tools.loop select <root> --workers N` (`tools/loop/policy.py`): per worker the
   guard-passing node with the highest value plus an exploration bonus that shrinks with its children. The user ruled
   (21 September) that parents are chosen by score and likelihood, not by hand. This is a hand-written seed policy;
   Dream-RSI (Zheng et al., arXiv 2609.14858) makes the policy itself code that an LLM rewrites and tests by replaying
   recorded trees. The tree (about 200 nodes over eight builds) is the material for that; it has not been built.
3. **Proposers.** One Sonnet agent per parent, in its own git worktree at the parent's source, briefed with: the
   user's words, the measures, the trace evidence so far, what the other proposers hold, the rules
   (`.local/loop/briefs/genN-common.md`: lean battles only, no background jobs, legacy code only, no enemy truth, no
   per-map constants, parity digests before and after, a fixed check set, an honest report with disagreements). Opus
   only when the user says so (he did for plans 020 to 023). A proposer's own check set of 15 to 20 battles predicts
   little: the full suite decides.
4. **Scoring.** `scripts/loop-evaluate.sh <worktree> --parent <id> --controller legacy --proposer llm --model sonnet
   --generation N --title ... --brief ...`, serialised by `flock .local/loop/eval.lock`, run as a tracked task that
   wakes the architect when the score lands. About ten minutes a node at fourteen lean battles in parallel.
5. **Survivors.** A node that passes every guard and beats its parent's value is shown to the user as videos on the
   maps he has commented on; his verdict becomes the next measures, guards and briefs. Nothing is promoted to the
   playable default without his replay approval.
6. **Records.** Every generation is written at the end of plan 018 and summarised in `docs/PROJECT_LOG.md`; the tree
   page is republished; commits are local until the user asks for a push.

## 3. Plan-sized changes

When traces from several proposers point at the same code, a one-idea proposal stops working (generation 19: five
proposals, none beat its parent, four traces on the corporal's relay). The pattern then is a plan with the user's
rulings, built in stages, each stage scored as a loop node before the next is started, by an Opus agent (with Sonnet
finishing when the Opus API failed), the architect reviewing each diff and folding the implementer's disagreements
into the plan when they are measured:

- plan 017: stats, weapons, ballistics, sway and recoil (shared code);
- plan 018: the static-defence objective and the loop's first roots;
- plan 019: fire on the move; plan 020: threat-aware paths and the cover rule; plan 022: stamina and sprint (shared
  code, each behind a `Config` switch with a CLI off flag that reproduces the previous digests);
- plan 021: the legacy attack by bounds (a loop node only until plan 023 landed with it);
- plan 023: the rifle group moves as one (stations, the axis, the stand-off, the leader's pace with a general `pace`
  on every order, the covering pair, the gun's firing position, the officer with the leading squad, the shattered
  squad attached or merged), five stages, each scored; landed on the branch on 21 September 2026 with plan 021 inside it.

## 4. What was learned (the short list)

- **Measure the user's complaint before changing anything.** Every productive change started as a number on 60
  battles and a trace of one battle; every change that started from a guess was reverted.
- **Read the trace, then read it again.** The first reading of the stutter trace was wrong; the first reading of the
  "men stand still" trace missed a shared-code bug (a legacy order carried no task id, so a man off his squad's route
  lane got no path at all) that was worth more than two generations of proposals: legacy root 0.586 to 0.705.
- **One-branch fixes to a coupled mechanism trade one failure for another.** Recalls, forward men, laggards, the
  leader's pace and the gun were one design (plan 023), not five patches.
- **Scores saturate.** At 97 % of defenders out of action the attack score cannot separate nodes; the conduct measures
  and the videos can. The validation draw changes each generation, so a small value drop is often the draw.
- **A measure can mislead.** `flank_fire_share` is measured against the squad's own gun: move the gun and it reads as
  less flanking. Check what a measure is relative to before trusting a change in it.
- **Machine limits.** WSL has 30 GB: two crashes came from full-record battles and test suites run side by side. Lean
  battles (0.5 GB) run fourteen at a time; traced battles are lean too; the full suite takes one of three slots by
  itself. Proposers may not start background jobs or poll by process name (stuck shells, three times).
- **The user decides taste.** Tolerances (cover guard half a point, seen-at-all 4 to 5 points with flanking), the
  objective, the parent rule, the officer's place, the shattered squad: all his rulings, all recorded in the plans.

## 5. Picking it up again

1. `git log` on `plan-018-static-defence`; read `docs/PROJECT_LOG.md` (the running summary), then the end of plan 018 and the
   whole of plan 023.
2. Rebuild: `scripts/battle-lab.sh --version`; `python3 tools/source_id.py` gives the source fingerprint; check it
   against the last fingerprint recorded in the plan (`45da1e25dd1aa9e7` at this writing: plan 023 stage E plus one
   MSVC rename, battle-identical to `80dfe8feb994faf2`).
3. Verify: `python3 tools/verify/parity_lean.py <out> .local/lab/battle-lab` (40/40), `scripts/test-sim.sh`, the
   Python tests, `scripts/build.sh`.
4. Re-root the loop on the current source (`python3 -m tools.loop evaluate --controller legacy --suffix legacy
   --proposer baseline ...` and drills), then `select`, then brief proposers. The queued shared-code change (keep
   soldiers away from enemies they know about: shelter, goals, paths) is at the end of plan 018 and waits for a re-root
   of all three controllers.
5. Show the user videos, not tables, when it is time for a verdict.


## Neural AI and performance resume checkpoint — 22 September 2026

The completed Plan024 training, fresh-map findings, exact performance improvements,
short videos, current model access and proposed execution audit are consolidated
in [the session handoff](AI_SESSION_HANDOFF_2026-09-22.md). Jordan asked to save and
resume later. No next training run or soldier-controller replacement has started.
