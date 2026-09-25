# Fable 5.1 — neural squad architecture review

22 September 2026. Exact responder `claude-fable-5-1`, confirmed by the project's
subscription launcher. Source HEAD `c760cae7dd15bf827d23f2cab097920ae14fbb16`.
Evidence run: `20260922T072253-1e021ba9`, dedicated project session.

The response below is preserved verbatim. It is advisory; read
[Astra's resolutions and proposed plan](024-neural-squad-layer.md) for corrections
and scope. Implementation has not started.

---

Read for this review: `docs/AI_PROCESS.md`, `plans/023-the-rifle-group-moves-as-one.md`, the AGENTS.md simulation principles, `docs/DESIGN_VISION.md` (command sections), `BattleSim.h` (Config, Contact, SquadCommand, PlatoonDirective, Frame, Record, Simulate), `BattleSim.cpp` (Simulate setup and tick loop), `CommandSim.{h,cpp}` (plan cadence and dispatch), `PlanSim.{h,cpp}`, `ManeuverSim.{h,cpp}` (candidate generation), `PlatoonSim.h`, `tools/battle_cli.cpp`, `tools/loop/{config,runner,static_check}.py`, `guards.json`, `scripts/battle-lab.sh`. Everything below is a proposal unless marked as a user ruling. No GPU was verified and no training time is claimed.

## 1. What to build first, and who owns what

**The seam already exists.** Legacy squad decisions are made in `UpdateManeuver` (`ManeuverSim.cpp:308-394`): five candidate families (FlankNorth, FlankSouth, Press, PullBack, Reposition) are drawn from the cover catalogue, hand-scored, the top two per family are routed by the tactical planner, route costs are subtracted, and the winner is compared against a hand-built `hold` score. The result is written into the squad's command record (maneuver, waypoint, route, plan reason) and everything downstream, from `PlanSquad` (`CommandSim.cpp:888`) through plan 023 stations, pace, the covering pair, gun station and succession, executes it. The decision is already "candidate plan ranking" with a linear scorer. That is the first thing a network should replace.

**Recommendation: two levels, one interface.**

- **Level 1 (first slice): learned ranking over a widened candidate set.** The network scores each candidate plus two explicit actions, `hold` and `keep current plan`, and the argmax is committed exactly where the legacy scorer commits today. Learned authority: which manoeuvre, where, and when to move or stay. Hand-coded: candidate geometry, routes, stations, orders, pace, covering pair, gun, staff, shattered-squad attachment, and every soldier-level rule. To stop the candidate set from encoding legacy's limits, generation must change in two ways: take more than two candidates per family by a cheap non-score prefilter (stratified by range band and lateral band, K of about 24 to 32 total) rather than the legacy score, and route them all. Everything else in the generator (cover catalogue, protection test, failed-move exclusion) is geometry, not policy, and stays.
- **Level 2 (the genuine squad layer): intent plus parameters.** Same interface, with extra discrete heads: pace {0.5, 1.0}, covering pair {0, 2}, commit horizon {8, 16, 30 s}, gun stance {with the rifles, angled}. The executor's plan 023 machinery consumes them as parameters it already has. This is where the layer becomes tactically expressive without touching soldier execution.
- **Rejected: direct member orders.** It discards plan 023, fights the shared cover rule that overrides any order under fire, and multiplies the action space by squad size. Revisit only if level 2 plateaus with evidence.

**Ownership rule (must be a code invariant, not a convention).** When `Config::neural` is on, the neural policy is the sole writer of the maneuver decision fields of `SquadCommand` at a decision instant; the legacy scorer code path is not executed for that squad. The platoon commander stays hand-coded and its directive enters the network only as observation and mask (the existing rule that Reposition needs a live directive, `ManeuverSim.cpp:322`, becomes a mask bit). Attached, merged or shattered squads (`mobile<2`, `attachedTo`, `mergedInto`) are masked out of neural control and keep the legacy path, because those states belong to the platoon layer's rulings in plan 023 section 11. Succession does not reset the squad's policy state: the command record belongs to the squad, not the man.

## 2. Observations, actions, timing, training and the bridge

**Information boundary.** The feature builder gets exactly what `PlanSquad` gets: the leader after `WithTracks`/`WithReports`, the squad's own members, the known map, and the command record. Put it in a new policy file, `NeuralSquadSim.cpp`, added to `POLICY_FILES` so the static check (`tools/loop/static_check.py`) forbids the frame, observer fields and full vision there. The privileged critic lives in Python during training only; it may read true enemy positions from a separate export the actor process never receives.

**Observation (bounded sets, all relative to the leader, rotated into the squad's axis frame so that a mirrored map is the same problem):**

- Known contacts, up to 16 by track confidence: relative position /100 m, age of last observation /30 s clipped, visible now, automatic weapon, own sighting versus relayed, seconds since it last fired, a presence bit. Unknown slots are zero with presence 0.
- Own members, up to 12 (room for larger squads): relative position, health and suppression as understood by the leader, role one-hot, gun flag, on station, under fire, presence bit.
- Friendly squads known through received situations, up to 8: relative position, engaged, strength, presence.
- Reported fire areas, up to 8.
- Candidates, up to 32: family one-hot, relative target, range gain, lateral offset, travel time, route exposure fraction, covering available, firing angle, flank-qualifies, fire danger, distance to nearest friendly approach, presence bit.
- Scalars: battle time fraction, able riflemen, gun up, mean suppression, believed strength ratio, pressure, idle seconds, current maneuver and phase one-hot, seconds since plan, platoon task one-hot with relative position and time to expiry, doctrine one-hot, officer profile (four floats), leader stats that the design says matter.

No raster in the first slice. Geometry reaches the network through candidate features, which keeps it map-size independent. A coarse local visibility raster is a level 2 option if candidates prove too thin.

**Action and mask.** One categorical head over [keep, hold, candidate 1..32]. Mask: absent candidates, Reposition without a live directive, `keep` when no plan is held. Level 2 adds the parameter heads, sampled jointly during training and argmaxed at runtime.

**Timing and persistence.** Decisions happen at the legacy cadence (`CommandSim.cpp:871-874`: 8 s idle, 2 s with a waypoint, 1 s with an opportunity, and on changed knowledge). Intent persists because `keep` is an action and the executor carries the chosen plan to arrival or block. This is semi-Markov: store Δt on each transition and discount by γ^Δt with γ per second around 0.995. Battle end is terminal; the 600 s limit is truncation with a bootstrapped value.

**Memory.** Start without recurrence: append the previous two decisions' scalars and chosen family. Add a small GRU per squad only if the frame-stacked policy is measured to churn or forget contacts. If added, its hidden state is a fixed float array in `CommandRuntime`, never in the digest, reproducible from inputs.

**Concrete example.** Squad 2, 190 s, leader at (0,0) in axis frame. Contacts: one known at (+62, +4), seen 3 s ago, automatic weapon, firing 1 s ago; one at (+58, −20), relayed, 14 s old. Members: 6 able, gun up, mean suppression 0.3, two men under fire. Platoon task Advance, expiry 40 s. Candidates after masking: FlankSouth (+30, −38) travel 41 s exposure 0.08 covering yes flank-qualifies yes; Press (+22, +2) exposure 0.31 covering no; PullBack (−25, 0); hold; keep (current Advance to (+40, 0), bound paused for fire). Output logits favour FlankSouth 0.71, keep 0.12, hold 0.09. Committed: FlankSouth with that route; `PlanSquad` lays out stations at the flank position, the covering pair is chosen by the executor, and nothing else changes.

**Reproducible inference.** Native C++ inference only for the authoritative simulation: a small MLP with explicit loop order, float32, compiled with contraction off (`-ffp-contract=off` and the MSVC equivalent), argmax ties broken by lowest index. Weights are a flat binary loaded once into `Config` as `shared_ptr<const NeuralPolicy>` with a content digest in the manifest and in `SameConfig`, exactly as the imported battlefield is handled (`BattleSim.h:445,454`). ONNX Runtime and Unreal NNE are not used in the simulation because their kernels are not bit-reproducible across platforms; they are fine for training-side checks. Parity test: 1,000 random observations, C++ against PyTorch, max abs logit error under 1e-5 and identical argmax; plus the existing Linux versus Windows digest check on the reference battles.

**The bridge, in order of least change.** `Simulate` is one monolithic loop with local state: the battle RNG (`BattleSim.cpp:1098`), `CommandRuntime`, per-soldier `Runtime`, projectiles, traffic and the recorder. Do not refactor it into a stepper first. Instead:

1. Add a `SquadPolicy` interface consulted at the decision instant with the observation and candidates, returning an action. Three implementations: `LegacyScorer` (reproduces today's decision bit for bit, proven by the 40 lean references and the loop parity guard), `NativePolicy` (weights), and `RecordingPolicy` (writes observation, candidates and the legacy choice to a file). This costs no stepping change and yields imitation data.
2. For RL, a `PipePolicy`: the battle-lab process runs battles as it does now, blocking on a pipe at each decision. Python drives 12 to 14 such processes (the runner already sizes jobs by memory, `runner.py:62-67`). About 1,500 decisions per attack battle is a trivial IPC load.
3. Python bindings with reset/step are the third option and require the refactor; defer until the pipe design is measured as a bottleneck. Whole-episode perturbation (evolution strategies) needs no bridge at all and is the fallback if throughput is too low, viable only for a linear or tiny scorer.

Exploration must never draw from the battle RNG; the policy samples from its own seeded RNG in training and is argmax at runtime, so combat digests stay a pure function of the chosen actions.

**Training.** Imitation first: behaviour-clone the legacy choice over the widened set (the label is legacy's winner when present, else `hold` or `keep` as legacy decided). This is cheap, gives a policy the loop can score immediately, and calibrates features: if BC cannot match legacy's value within noise, the observation is missing something and RL would only hide that. Then PPO with invalid-action masking, a KL penalty toward the BC policy early, a shared policy across the attacking squads with per-squad state, and a centralised critic with privileged inputs. Cooperative credit: team reward plus a small own-squad shaping term; no per-squad kill credit. Opponents: static defenders (the loop objective), then legacy as a manoeuvring defender and attacker, then self-play last. Stack: PyTorch CPU, NumPy, a hand-written PPO of a few hundred lines following the CleanRL single-file style and the published "37 implementation details" notes; no Ray or RLlib. Optional and later: GRU, self-play league, a raster encoder.

**Why the archive is not demonstration data.** The loop keeps only the manifest and summary per battle (`runner.py:107-116`); videos are renderings. Neither contains the leader's knowledge at the decision instant, the candidate set, or the chosen action, and none of that can be inferred from soldier positions. Labels come from regenerating battles deterministically from frozen binaries and seeds with `RecordingPolicy`, which the process document already relies on for bit-identical reruns.

## 3. Reward, gates, milestones, risks and decisions

**Reward.** Per decision interval: change in defenders out of action /12, minus 0.5 × own casualties as a fraction of starting strength, minus a small per-second cost so camping is not free, plus a clear bonus. Nothing for shots, movement, orders or contacts: those become conduct measures. Wounded men count as the score counts them. Reward validation is separate from promotion: the existing guards (`guards.json`) are the training-time validation gate, the 45 fresh validation attacks are the unopened promotion set, and the user's replay is the final authority, as the process document records. Hard contracts stay (no hidden truth, parity of the other controllers and the defenders, mechanism pins that hold for any controller: never dark, no enemy body reads). Behaviour tests written against legacy's specific choices are declared per plan as applying or not; none are weakened.

**Curriculum.** The generated city static-defence attacks (60 development, 45 validation) first. Then defence on the same maps with legacy attacking, symmetric town battles, trench maps, roster and stat variation through `statProfiles`, doctrine and officer profile variation, and moving opponents. Larger rosters need the compile-time constants changed; features are already variable-size so the policy survives that.

**Measurements before any large run** (the throughput budget replaces invented wall times): decisions per battle and planner seconds per decision at K=32 candidates versus today's 10 routes; lean battle wall time per core (the process document's figure is about a minute per attack battle in parallel); pipe round-trip per decision; memory per worker. Decide the worker count from those numbers.

**Milestones and files.**

- M0: measure the above; add a `neural` lineage to `tools/loop/config.py` with legacy, cognition and drills as parity partners.
- M1: `SquadPolicy` interface in `ManeuverSim`, `Config::neural`, `LegacyScorer` reproducing every reference digest with the switch on, widened candidate generation behind the switch.
- M2: `RecordingPolicy`, dataset from the 60 development battles, BC in PyTorch, weight export, `NativePolicy`, parity test, manifest digest.
- M3: BC node scored by the loop and shown to the user in videos. This is the first result worth a verdict.
- M4: `PipePolicy`, PPO fine-tune on static defence, scored as nodes.
- M5: curriculum expansion and level 2 heads.

**Falsifiers and pivots.** If BC on the widened set cannot reach legacy's validation value within about 0.03, fix observations before RL. If PPO raises the score but any conduct guard fails, that is reward hacking: stop, revise the reward, do not relax the guard. If native throughput is under about three battles a minute on this machine, semi-Markov PPO is not affordable here; pivot to ES over a small scorer or narrow the decision set. If level 1 matches but cannot beat legacy on the fresh validation draw after the curriculum's first two stages, the candidate generator is the ceiling and level 2 is the next step, not more training.

**User decisions needed.**

1. Accept level 1 as the first neural squad layer, with the executor and platoon commander hand-coded.
2. Whether the neural line is a new loop lineage judged by the same guards and videos.
3. Whether doctrine and officer traits are inputs from the start, so their effect is learned rather than scripted.
4. CPU-only training on this machine, with no purchase or cloud, and throughput measured before committing to PPO.
