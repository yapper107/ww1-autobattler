# Exact tactical-route performance optimization

Jordan authorized implementation on 22 September 2026: “we want the same results
with better performance without sacrificing anything.” Preserve combat rules,
decisions, observations, routes, random draw order, budgets, rewards and training
settings. The running duration experiment retains its frozen native executable.

## Implemented change

Tactical route scoring repeats visibility queries from the same reported threats
to thousands of sampled positions. The retained implementation snapshots each
merged report’s confidence and uncertainty once per planner, lazily rounds and
packs its three eye positions on first use, and rounds/packs the sampled body once
per uncached sample. Observer visibility also reuses its fixed eye endpoint.
These are the same arithmetic expressions and the same visibility queries in the
same order. Stance-specific heights, cell keys, cache size, hash, replacement and
geometry invalidation remain unchanged. No approximate geometry or faster-math
compiler option is introduced.

Only `Sim/TacticalRouteSim.cpp` and `.h` change for this optimization. Baseline
source is `d73667841df73faa`; final candidate is `cfcd101678649cb2`. Original source
copies, hashes, isolated build and verification scripts live under
`.local/plan024/performance/`. Both builds use GCC C++17 with `-O2`.

## Profile and discarded alternatives

Whole-battle profiling identified command logic as 76.9% of one representative
battle, with tactical routing an inclusive 56.6% of the total. A subsequent flat
sample attributed 29.1% to tactical visibility and 26.2% to segment memoization.
See [initial measurements](024-training-performance-assessment.md).

A regional path-copy/connection reuse prototype reproduced one recorded battle
but used 40.86 native CPU seconds against 40.79 for the original. It was removed.
A smaller visibility/segment cache reduced memory from roughly 232 MB to 55 MB,
but increased CPU time to 43.12 seconds on that replay. It was also removed.
Neither experiment is part of the retained patch. The first endpoint-reuse
prototype used 32.31 CPU seconds and matched all protocol hashes. That preliminary
measurement is superseded by the paired benchmark of the final lazy version.

## Review and acceptance

The [independent Astra review](024-route-performance-astra-review.md) found no
remaining gameplay-equivalence defect for finite, bounded simulator coordinates.
Astra addressed its eager-conversion finding by initializing endpoints only after
the original visibility/distance bounds allow their queries. The review correctly
requires whole-battle timing: work moved before the existing tactical substage
timer, so that timer alone cannot establish a speedup.

Fable consultation was unavailable in this session: the launcher state directory
is read-only and direct subscription connection attempts failed. No new Fable
approval is claimed. This is an optimization within the existing per-assessment
cache design, not a new controller or training architecture.

Acceptance: compare complete decision/receipt/reward protocol hashes, gameplay and
action digests on 12 recorded training replays; run 41 historical battle pairs,
the full Linux simulator suite, reference field-cost comparisons and drills trace
checks; measure whole-battle native CPU, wall time and peak memory. Preserve the
active experiment’s binary and configuration hashes. Final evidence belongs in
[the performance report](../docs/NEURAL_TRAINING_PERFORMANCE.md).

## Subsequent Fable review

Full access later enabled the requested Fable 5.1 consultation to complete. See
[the actual review](024-command-performance-fable-review.md) and
[Astra’s corrections and next experiments](024-command-performance-next-steps.md).
No defect was found in the retained patch; new optimization hypotheses still need
profiling, exact parity and performance measurement.
