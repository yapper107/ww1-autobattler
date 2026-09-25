# Bounded exact prefetch review

Jordan authorized Opus5.5 to find further battle optimization and benchmarks while
neural final evaluation runs. Astra owns integration. Review only; do not modify
source, tests, models, live evaluation or reserved-map data. Exact Fable5.1 required,
existing subscription only, no delegation.

Baseline simulation69962220d762ea04 (HEAD c760cae7dd15bf827d23f2cab097920ae14fbb16 plus working changes).
Candidate6ff5c2010bc64352 at .local/plan024/opus55-performance/prefetch/Sim.
Relevant files: TacticalRouteSim.cpp and .h only; complete diff archived at
plans/024-opus55-performance/ray-prefetch.patch. Opus notes:
plans/024-opus55-performance/ray-prefetch-notes.md. Baseline source copy:
.local/plan024/performance-round3/baseline/Sim. Prior rejected proposals/report:
docs/NEURAL_TRAINING_OPUS_EXPERIMENTS.md and plans/024-four-opus-performance-fable-review.md.

The candidate batches three unchanged integer slot hashes and issues hardware
prefetch hints, then performs the original exact lookups in the original order.
Same table layout/capacity, evictions, miss computation, float sums and guards.
GCC/Clang builtin, MSVCx86/x64 intrinsic, portable no-op fallback. Other overload
computes same hash for observer ray. No additional persistent RAM.

Astra evidence: candidate native compile,882432 exact reference Sample comparisons,
649332 exact query/path probe (digest5617442804858431954), targeted routes passed.
Three first screen pairs are faster with complete saved protocol/outcome parity;
reversed-order repeats and broader12case benchmark are pending. Do not infer a
confirmed speedup, full regression pass or Windows execution from this.
Fresh scratch counters on3training maps give actual ray hit/miss distributions at
.local/plan024/opus55-performance/ray-counters.json. All counter replays exact.

Review: any correctness/lifetime/index/invalidation/C++ODR/portable-intrinsic issue;
whether reordered unsigned hash work or read hints can affect float/query semantics;
needed focused tests beyond existing oracles; risk of attributing benefit to prefetch
rather than compiler layout; suitable retention gates. No architecture expansion.
All behavioral budgets, precision, RNG, opposition and scores must remain identical.

Correct Opus overstatements: table larger than cache does NOT establish memory-bound
execution, hit usuallyDRAM, or dominantTLB/loadlatency without measurements. Its
under1percent expected ceiling and cost-per-lookup estimate mix profiling runs and
inclusive/selftime and are hypotheses, not facts. Prior four-wayvisibility and
three-rayreuse descriptions refer to the same prior candidate, not two independent
experiments. Its blanket prefetch cannotfault claim should be evaluated for actual
valid-address code and supported platforms, not accepted as a universal statement.

Return concise blocking findings or no blocker, reasoning and residual tests. Astra
will run full Linux/historical/trace and Windows/UE gates only if broader performance
supports retention. No live experiment binary is replaced.
