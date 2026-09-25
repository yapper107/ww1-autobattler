# Four independent Opus performance experiments — 22 September 2026

Jordan authorized four Opus agents, benchmarking and retaining only improvements.
Opus 5.5 was probed through subscription authentication: the service requires
Claude Code 2.1.280 or newer; this host's client is 2.1.275. The explicitly approved
fallback `claude-opus-5` returned a successful response with exact model metadata.
Four independent Opus 5 implementation sessions were launched. No paid usage or
account/client settings changed. Evidence: `.local/plan024/performance-round3/`.

All start from the same immutable source snapshot, `69962220d762ea04`, including
existing uncommitted work. Each owns only its separate copied source directory:

| Agent | Scope | Owned source |
|---|---|---|
| smoothing | Ordinary exact path smoothing | EnvironmentSim.cpp |
| visibility | Exact reuse of three eye rays | TacticalRouteSim.cpp/.h |
| memo | Exact segment-cache layout/front cache | SpatialSim.cpp |
| obstacles | Obstacle index/traversal | SpatialSim.cpp |

The SpatialSim.cpp experiments are isolated copies, not concurrent edits to the
same file. Astra builds, validates ownership, benchmarks and integrates. Agents
cannot run shell commands or delegate. This avoids uncontrolled concurrent full
suites; builds and battles run through a bounded parent harness.

Common constraints: identical legal observations/actions, exact costs/paths,
rewards and battle results; geometry invalidation preserved; bounded RAM; no
candidate/search-budget reduction, lower decision frequency or weaker guards.
Current running PPO experiment, opponent and frozen binary remain unchanged.

Screen each candidate on the same three already-used recorded training battles,
rotating baseline/candidate order. Check complete protocol and end-result parity.
Broaden plausible winners to the common 12 recorded cases and repeats; report raw
CPU and memory, including negative results. Reject behavior divergence regardless
of speed. Timing noise does not count as a survivor: require repeatable aggregate
improvement, investigate material per-case regressions, and reject unclear gains.
Independent gains are not additive; combine survivors and benchmark the stack.

Before retaining a combined build: exact Sample oracle, direct geometry/clearance
checks where relevant, 41 historical pairs, full Linux suite, drills traces plus
repeat, Windows native parity and Unreal build. Fable reviews substantive retained
changes. No policy promotion; the live training executable is not replaced.

## Completed result

All four Opus 5 agents completed, exact model identity verified. All candidates
passed the focused exact-cost/query/path/route checks. Ninety benchmark battles
matched recorded training results. No candidate retained:

- Grouped visibility-cache layout: 11.0% more CPU in the six-block screen.
- Segment front cache: 3.6% more CPU in that screen.
- Near-first obstacle traversal: 0.42% more CPU on the broader 12-case corpus;
  no demonstrated improvement.
- Ordinary path smoothing: 0.96% less CPU over two full-corpus passes (24 pairs),
  but interval [-0.12%, +2.13%] includes no gain; parked as inconclusive.

These are measurements of the particular implementations, not proof that the
entire optimization families cannot help. No stack was built and full retention
gates were not run on rejected candidates. Production simulator and live training
binary remain unchanged. [Complete results and evidence](../docs/NEURAL_TRAINING_OPUS_EXPERIMENTS.md),
[Fable review/disposition](024-four-opus-performance-fable-review.md).
