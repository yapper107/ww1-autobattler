Files read: `returns.py`, `worker.py`, `actor.py`, `ppo.py`, `neural_worker.h`, the KEEP block (`ManeuverSim.cpp:445-500,547`), `SquadPolicy.cpp`, the Simulate validation and truth-sink placement (`BattleSim.cpp:1044-1053,1235`), `scenarios.py`, `map_identity.py`, `tests/test_neural_rl.py`.

## Defects, by priority

**1. High. The three-arm comparison confounds interface change with learning.** Any schema-3 artifact, including the untrained migration written as `initial.policy` (`ppo.py:88`), runs with KEEP at index 1 and with commit clearing the pending clock (`ManeuverSim.cpp:547`), which legacy does not do. So "RL versus imitation" measures interface semantics plus learning together. Add a fourth arm, the untrained migrated schema-3 model, on the same maps and seeds. Report RL against that arm as the learning effect, and that arm against the schema-2 imitation model as the interface effect. Without it, no improvement claim is attributable.

**2. Medium. The KL early stop starves both actor and critic.** `update` checks the approximate KL of each 256-row minibatch before its step and returns from the whole update on the first excess (`ppo.py:54-57`). That is noisy on 256 rows and also aborts value training, since the critic only learns inside the same loop. Compute the stop statistic over the full batch at the end of each epoch, and keep the critic's epochs independent of the actor stop. Log steps per iteration either way, which it does.

**3. Medium. Single-legal-action rows enter the actor loss.** A decision with only hold legal (`mobile<2`) yields log-probability zero, ratio one, no gradient, yet counts in the advantage normalisation and the sample count. Keep such rows for reward chaining and the critic, exclude them from the surrogate and the normalisation statistics.

**4. Medium. Temperature is calibrated on schema-2 teacher rows without KEEP.** In rollouts the KEEP row duplicates its candidate's logit, so mass splits and the effective argmax confidence is below the 0.7 target. Acknowledged, but the fix is cheap: calibrate on the first iteration's actual schema-3 observations, or report both figures beside the rollout entropy that is already logged.

**5. Low. Map identity is computed from raw bytes in Python and from a text-mode read in C++** (`map_identity.py:11`, `neural_worker.h:24`). Identical on Linux; on Windows CRLF translation would break RESET. Open the file in binary mode in the worker before any Windows training.

**6. Low. `UpdateManeuver` dereferences `diagnostics` unconditionally on the external path** (`ManeuverSim.cpp:483`). Always non-null from `Simulate`, but a direct test call with `externalPolicy` and a null pointer would crash. Guard it or assert.

## Invariants confirmed

- **Terminal reward once, correct sign, telescoping.** Potential is own minus enemy active fraction (`returns.py:7-9`); reward events are potential deltas at count-change time, deduplicated by the `now!=active` guard so the per-tick sink and the frame sink cannot double-emit. Each squad's last pending row receives the bonus exactly once at END with `next_value=0` and `terminal=True` (`worker.py:104`); earlier rows never do. Squads that stop deciding still close their last interval at END with all intervening events.
- **Causal ordering.** Truth refreshes before `UpdateCommands` each tick (`BattleSim.cpp:1235`); casualties from the same tick's ballistics appear in the next tick's truth, so they land in the interval after the decision, never before it. Event cursors hand over without gap or overlap (`worker.py:72,100`).
- **Elapsed GAE.** δ and the trace use γ^Δt and λ^Δt per row, terminal rows zero both bootstrap and carry, returns are advantage plus value (`returns.py:30-36`). With half-life 0 the objective is exactly the undiscounted casualty difference plus bonus, as declared.
- **Old mask and distribution.** Rollout and update build the same masked Categorical at the same temperature from the same padded features and mask stored on the row; stored log-probabilities are the old ones. Torch's categorical KL zeroes doubly masked entries, so the frozen-teacher anchor is finite on masked supports; the entropy term is likewise mask-safe.
- **Information boundary.** The actor tensor comes only from `observation` (`actor.py:39-50`); the truth triple is consumed only by `critic_features`. The worker's `SquadDecision` is fresh, so `teacher_scores` and `logits` are empty on the wire. `neural_worker.h` reads the Frame legitimately and is outside the policy files. The static check still covers `SquadPolicy.cpp`.
- **Worker reset isolation.** Every RESET constructs a fresh `Config`, `DiagnosticOptions`, `LeanRecorder`, counters and a freshly imported battlefield, so no navigation or cover cache crosses episodes. Episode and sequence are enforced on every ACTION; an illegal or stale action terminates the process rather than being silently corrected. `action_hash` plus the lean digest make an episode reproducible from its action list.
- **Migration and backward compatibility.** Schema 2 loads 96 weights per hidden unit into a 97-wide array with column 96 zero; schema-2 rows carry a zero there, and adding an exact zero leaves float sums bit-identical, which the passing 159-decision recording check confirms. `SelectSquadAction` keeps the 31-action limit for schema 2. `read_policy` mirrors the same zero column, and the Python test pins logit equality.
- **KEEP.** Legal only with a pending clock, mobile at least 2, same family within 10 m; resolves to the nearest match; preserves the clock; hold and every legacy early return cancel it. The legal KEEP row is the matched candidate's row with column 96 set, so the untrained policy ties KEEP with re-selection, which is the intended behaviour-preserving start.

## Before long runs

Repair 1 to 3. Then the existing gates unchanged: 41 parity pairs, trace parity, full suite, Windows contracts and export, UE build. Fix 5 before any Windows collection.
