# Current training-battle CPU profile — 22 September 2026

Current source: `69962220d762ea04`. Frozen training source: `d73667841df73faa`.

Fresh direct comparison: **26.7% less native CPU time**, or **1.36× throughput** at equal CPU capacity, across six paired replays (three maps, two repeats). This replaces the earlier compounded estimate for these cases; it is not a full training-speed measurement.

## Where the current build spends its CPU time

Three recorded training battles replayed with process-CPU stage timers. Totals below span all three battles. These timers exclude time blocked waiting for the Python action reply or descheduled by other processes.

| Stage | CPU seconds | Share of simulation CPU |
|---|---:|---:|
| Squad/platoon commands and candidate planning | 60.247 | 68.11% |
| Individual soldier decisions | 18.474 | 20.88% |
| Perception and reactions | 5.514 | 6.23% |
| Lean battle recording/digests | 1.994 | 2.25% |
| Movement execution | 1.415 | 1.60% |
| Firing | 0.549 | 0.62% |
| Ballistics | 0.128 | 0.14% |
| Trace bookkeeping | 0.010 | 0.01% |
| Setup / uncategorized / timing boundaries | 0.126 | 0.14% |
| **Total** | **88.458** | **100%** |

Nested timers (overlap the stages above and can overlap each other; do **not** add these percentages):

- `tactical_inclusive`: 32.151 CPU seconds, 36.35% of simulation CPU.
- `navigation_inclusive`: 15.078 CPU seconds, 17.05% of simulation CPU.
- `corridor_inclusive`: 0.192 CPU seconds, 0.22% of simulation CPU.

## Functions sampled in the unchanged optimized objects

A separate executable links the existing current-build `-O2` objects with `-pg` only at link time, enabling gprof PC sampling without adding function-entry instrumentation. Aggregate flat samples across the same three battles; self time excludes child functions. Percentages are of sampled executable time, not an independently exhaustive accounting of library/kernel CPU. No call graph or hardware cache-stall measurement is claimed.

| Function | Sampled self seconds | Sample share |
|---|---:|---:|
| `army::MemoisedSegment(army::Map const&, army::Vec3, army::Vec3, float, int, bool (*)(army::Map const&, army::Vec3, army::Vec3, float))` | 22.70 | 26.34% |
| `army::SpatialIndex::Query(army::Map const&, int, army::Vec3, army::Vec3, bool, float) const` | 16.03 | 18.60% |
| `army::TacticalRoutePlanner::EstimatedVisible(army::TacticalRoutePlanner::SightPoint const&, army::TacticalRoutePlanner::SightPoint const&) const` | 13.44 | 15.60% |
| `army::FindFloorPath(army::Map const&, army::Vec3, army::Vec3, std::function<float (army::Vec3)> const*, int, int*, army::RouteStatus*)` | 6.33 | 7.35% |
| `army::GeometryKey(army::Map const&)` | 4.90 | 5.69% |
| `army::SegmentObstacle(army::Vec3, army::Vec3, army::Obstacle const&)` | 4.02 | 4.67% |
| `army::Distance(army::Vec3, army::Vec3)` | 2.21 | 2.56% |
| `army::DigestCore(army::Record const&, army::Frame const*, unsigned long, bool)` | 1.95 | 2.26% |
| `army::TacticalRoutePlanner::Sample(army::Vec3)` | 1.55 | 1.80% |
| `army::Soldier::Soldier(army::Soldier const&)` | 1.03 | 1.20% |
| `army::ProcessReactions(army::Frame&, army::ReactionRuntime&, std::vector<army::Event, std::allocator<army::Event> >&)` | 0.94 | 1.09% |
| `army::ChooseOrder(army::Soldier const&, army::Map const&, army::Config const&, std::vector<army::Vec3, std::allocator<army::Vec3> > const&, army::Tactics&, float, army::DecisionAlternatives*)` | 0.70 | 0.81% |

## Direct comparison with the live training version

| Map | Repeat | Original CPU s | Current CPU s | CPU reduction |
|---|---:|---:|---:|---:|
| 756 | 1 | 39.533 | 28.821 | 27.1% |
| 756 | 2 | 41.904 | 28.671 | 31.6% |
| 713 | 1 | 47.531 | 35.590 | 25.1% |
| 713 | 2 | 48.643 | 37.692 | 22.5% |
| 739 | 1 | 40.075 | 28.472 | 29.0% |
| 739 | 2 | 39.672 | 29.414 | 25.9% |
| **Total** | | **257.359** | **188.659** | **26.7%** |

## Method, checks, and limits

- Maps 756, 713, and 739: first recorded battle of update 1 for training seeds 24, 25, and 26. All are already-used training maps; no reserved final maps were opened.
- Six original/current pairs, two concurrent pairs at most; within each pair the binaries run sequentially, with order reversed on the repeat. Existing trainers and development evaluation continue running. CPU frequency and shared-cache contention can still affect CPU-time measurements.
- Every run replays the exact saved legal actions. Original, current, CPU-timer, and sampled binaries match decision/receipt/reward/start message hashes, action hashes, gameplay digests, winners, and active counts. All 18 battles also match their recorded training outcomes.
- The speed comparison uses uninstrumented binaries. Stage timing uses scratch-only copies of BattleSim, TacticalRouteSim, EnvironmentSim, and CLI transport, replacing elapsed-time clocks with CLOCK_PROCESS_CPUTIME_ID and printing diagnostics to stderr. Profiling overhead makes stage totals approximate; they are not used to calculate the speedup.
- External actor/critic inference and PPO updates are excluded: saved actions are replayed. These results locate simulator costs, not every component of end-to-end training.
- The commands stage includes both armies, candidate generation, empty-track observation and worker messaging. Its label is not a claim that every second is the hard-coded opponent.
- Current and frozen binaries retained their original SHA-256 hashes. Production simulation source is unchanged. The frozen experiment was not restarted or reconfigured.

Evidence and reproducibility: `.local/plan024/profile-current/` contains build.py, run.py, report.py, provenance.json, pairs.json, profiles.json, summary.json, aggregate-flat.txt, individual replay JSON/logs and gmon samples. Run build.py, then run.py, then report.py from the repository root.

## Interpretation and next profiling target

Squad/platoon command processing remains the largest stage (68.1%), followed by individual soldier decisions (20.9%). Tactical route evaluation alone occupies 36.3% of simulation CPU, included in the stage totals above.

The leading sampled self costs are MemoisedSegment (26.34%), SpatialIndex::Query (18.60%) and TacticalRoutePlanner::EstimatedVisible (15.60%): 60.54% together. These functions serve cached line checks, obstacle searches and tactical visibility. Their shares are not additive with the stage table. This is the strongest current optimization target; movement execution, firing and ballistics are small by comparison.

Before changing behavior or search budgets, attribute the remaining MemoisedSegment work to its callers and measure opportunities to reuse exact ray inputs and query setup. Its aggregate hit rate is about 71.4%, so eliminating that cache wholesale is not justified by this profile. Investigate GeometryKey (5.69% sampled self time) as a separate measured cost; this profile does not identify its callers or prove that validation is redundant. Cache misses versus hashing versus memory stalls require further measurements, not an assumption from these samples.

No gameplay optimization is introduced by this profiling task.

## Follow-up measurement

A later scratch replay of map 756 counted zero GeometryKey calls at all three call
sites while preserving the recorded outcome. Its sampled 5.69% label is therefore
not evidence of geometry hashing cost in that case; the true address/symbol
attribution remains to be resolved. See the [four Opus experiments](NEURAL_TRAINING_OPUS_EXPERIMENTS.md)
for the counter evidence and subsequent timing results.
