Everything needed is in hand. Design follows; all weights and constants are proposals.

## 1. KEEP semantics (schema 3)

**State.** Reuse the legacy pending state, `cmd.opportunitySince` and `cmd.preparedTarget`, and add one field, `cmd.preparedKind` (Maneuver), set wherever `preparedTarget` is set (`ManeuverSim.cpp:485`). Nothing else is stored: no cached candidate object, no route.

**Resolution.** KEEP resolves at decision time to the current candidate of `preparedKind` nearest `preparedTarget` within 10 m, which is legacy's own plan-identity radius. Because candidates are regenerated from the leader's current knowledge and terrain at most every 4 s, revalidation is automatic: if the pending place is no longer protected, no longer a legal family, or now inside a failed-move exclusion, no candidate matches and KEEP is illegal. No new expiry is introduced, and no legacy rule moves. KEEP is legal when `opportunitySince >= 0`, a match exists, and `mobile >= 2`. Selecting KEEP takes the matched candidate through the identical support-wait, preparation and commit gates with the clock untouched. Hold (action 0) cancels as today (`:477`).

**Action layout.** Action 0 hold, action 1 KEEP, then canonical candidates; `SquadActionLimit` 32. The KEEP row is the matched candidate's row with a new column 96 set to 1; schema 3 has 97 features. Migration appends one zero input weight per hidden unit, so a migrated model's logits are bit-identical on every schema-2 row and the KEEP logit equals its candidate's logit. With first-legal tie-breaking, argmax prefers KEEP over re-selecting the same candidate, which is exactly the legacy 10 m behaviour, so the migrated imitation model reproduces the schema-2 decisions on the 159-decision fixture. When KEEP is illegal the row is omitted from features and masked, never zero-filled.

## 2. Persistent worker

**Flag.** `--neural-worker` in `battle_cli.cpp`: a loop over stdin lines, one battle per RESET, `Simulate` called as today with `keepFrames=false`, no exports. Requires `--legacy-ai`, forbids `--neural-model`. A new `Config::externalPolicy=true` marks the battle; `ManeuverSim` then calls `DiagnosticOptions::squadActionCallback(const SquadObservation&, int squad, float time) -> int` instead of `SelectSquadAction`, with the same illegal-index check and throw.

**Protocol** (one line each, space-separated, base64 little-endian float32 for feature blocks so Python and native see identical bits):

```
RESET  <episode> <seed> <map-path> <map-digest> <seconds> <candidates>
DECISION <episode> <n> <time> <squad> <actions> <mask-bits> <features-b64> TRUTH <a0> <a1> <w0> <w1>
ACTION <episode> <n> <index>
END    <episode> <winner> <duration> <a0> <a1> <digest>
ERROR  <episode> <text>
```

`TRUTH` carries active and wounded counts per team, collected by the frame sink into worker state and appended after the observation. Python routes it to reward and critic only; the actor tensor is built from the features block. `n` is monotonic; an ACTION with the wrong `n` or an illegal index is an ERROR and ends the episode. The callback blocks on stdin, so one squad decides at a time and the battle stays deterministic given the ACTION sequence. Policy sampling lives in Python with its own RNG; the battle RNG is untouched.

**Identity.** External-policy battles fold a fixed marker into the gameplay digest and write `external_policy:true` with no `policy_digest`, so they can never be mistaken for artifact replays. Checkpoints exported as schema 3 artifacts replay natively by argmax.

## 3. Reward for normal battles

Per squad decision interval, shared team reward:

```
r = (ΔE / E0) − (ΔA / A0)            E0 = A0 = 32 initial actives
r_terminal += +0.25 win, −0.25 loss, 0 draw   (winner by ResolveDeathmatch)
```

Equal weights because the mission is symmetric and the deadline rule counts survivors. The bonus of 0.25 equals a quarter of a total wipe: large enough to break the near-ties the survivor-count rule decides, small enough that a bought win with heavy losses still scores below a clean one. No time, shot, movement or cohesion terms. Undiscounted return over a full squad trajectory equals the casualty-fraction difference plus the bonus. Discount per second γ = 0.995 (half-life about 140 s), stated as provisional; report the effective horizon alongside results.

## 4. PPO

- **Trajectories** per squad: transition from decision to that squad's next decision or END; reward summed over the interval; Δt stored. A squad that stops deciding (attached, shattered) closes its last transition at END.
- **Variable-time GAE:** δ = r + γ^Δt V(s') − V(s); A = δ + γ^Δt λ A', λ = 0.95. The 600 s deadline is terminal (V(s_T) = 0). A collection cutoff shorter than the configured battle is truncation and bootstraps.
- **Actor:** migrated schema-3 scorer. Fit a temperature τ once on the recorded 17,904 rows so the argmax action has median probability 0.7; store τ in the artifact and ignore it in native argmax. Report initial entropy before any update.
- **Critic:** separate 64-unit MLP over pooled permitted context (columns 0 to 31, 59 to 63, mean and max of candidate rows) plus the four TRUTH counts and time. Never fed to the actor.
- **Coefficients:** clip 0.2, lr 1e-4, four epochs, minibatch 512, entropy 0.003, KL penalty 0.05 toward the frozen imitation policy with early stop at KL 0.02 per update. About 48 battles per update: at the measured 20 s per battle with 12 workers that is roughly 1.5 minutes per update, so 100 updates and three seeds fit in a working day. Learning is not guaranteed.
- **Arms and sets.** Opponent: Ember legacy in the same binary, proven identical by the parity guard. Training maps: generated cities 601 to 700, three seeds each, 360 s. Development draw: town-dev 21 to 40. Final unopened set: 15 maps keyed to an experiment salt, opened once. Three arms on identical maps and seeds: legacy, frozen imitation, RL; existing guards plus the cohesion diagnostics, no new thresholds. Mode 0 first. Widening to 30 is a separate ablation that starts from the same migrated weights, since rows share the schema; its results are reported apart and never mixed.

## 5. Tests before any end-to-end claim

- Schema-3 migration: equal logits on all recorded rows; KEEP logit equals its candidate's.
- KEEP legality: pending within 10 m same kind legal; different kind or beyond 10 m illegal; hold cancels; illegal after assessment regeneration removes the place; selecting KEEP preserves `opportunitySince`.
- Migrated imitation model reproduces the 159-decision fixture selections and the city-24 digest.
- Worker: a scripted always-hold policy through the pipe equals the same policy through an in-process callback by digest; repeated ACTION sequences repeat the digest; wrong `n` yields ERROR; DECISION features equal the recorder's features for the same battle.
- Static check covers the observation builder; TRUTH fields are asserted absent from features.
- Then the existing gates unchanged: 41 parity pairs, trace parity, full Linux suite, Windows contracts and export check, UE build.
