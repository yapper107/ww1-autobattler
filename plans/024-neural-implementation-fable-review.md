Files read: `SquadPolicy.{h,cpp}`, the `UpdateManeuver` integration (`ManeuverSim.cpp:300-490`), `TacticalRouteSim.h`, the Config, Simulate validation, digest and manifest changes, `tests/neural_tests.h`, `tools/neural/{run,train,verify,check_export}.py`, `probe.cpp`, and the CLI, runner, rerun and Unreal flag changes. Plan 024 resolutions read. Findings are ordered by severity; tactical quality is not assessed.

## Defects

**1. High. Cached candidate features carry stale context while the `stay` row is fresh.** Candidate features are built once per assessment and cached in `ManeuverOption::policyFeatures` (`TacticalRouteSim.h:19-20`), then reused for up to 4 s (`ManeuverSim.cpp:339-340`). The shared context columns 0 to 31 (time, idle, opportunity age, waypoint, block reason, track age, danger, plan age, `ratio`) are copied into each candidate at assessment time (`:379`), but the `stay` action is built from the fresh `context` every call (`:442`). With the plan cadence at 1 to 2 s in contact, most recorded decisions have candidate rows whose context disagrees with the `stay` row in the same observation, and column 1 (`ratio`) disagrees with the fresh column 61 on the same row. A ranker can learn "stay" from staleness alone, and inference sees the same artefact. Fix: on every call, overwrite columns 0 to 31 of each candidate row from the current context, and cache only the candidate-specific columns 33 to 58. Add a test that all rows of one observation share identical context columns.

**2. Medium. Reference parity does not cover the configurations the recorder is used on.** `verify.py` runs the two authored terrains only; `neural_tests.h` proves recording parity on encounter 1. Nothing proves the recorder is passive on an imported city map with a static defence, which is the only configuration teacher data is collected from. Add the loop's `parity-attack` spec to `verify.py`, and one `--map` plus `--static-defence` pair to the C++ test.

**3. Medium. The baseline binary's identity is not asserted.** `verify.py` and `run.py evaluate` trust `.local/plan024/baseline/battle-lab`. Neither checks the manifest `build` of a baseline row against the expected fingerprint. Since the previous cached lab was found to be stale, assert `build == 45da1e25dd1aa9e7` on every baseline row and fail otherwise.

**4. Medium. `complete_benchmark` is claimed without the ranking set.** `run.py` evaluate runs `town-attack-dev`, `town-dev` and `trench-dev` (`run.py:23`) and marks the report complete. The loop ranks on `town-attack-val`, and the paired attack summary uses development maps only. Either include the validation draw or rename the flag; do not let a report say complete benchmark for a set the loop does not rank on.

**5. Medium. Training reports accuracy only, and selects checkpoints on its validation split.** `train.py` exports the best validation-accuracy epoch (`:129-132`), which makes the four validation maps part of development, and prints no label distribution, per-family coverage, or share of `stay` labels. Consecutive rows at 1 to 2 s cadence are near-duplicates, so accuracy will be dominated by long holds. Report label and family histograms, decisions per battle, and the fraction of decisions where the teacher's chosen candidate was later blocked by a release gate. Disclose in `training.json` that the validation maps chose the checkpoint.

**6. Medium. Model identity in the gameplay digest is asserted, not tested.** The digest folds the model digest (`Diagnostics.cpp:150`) and `SameConfig` compares it. Add one test that two artefacts with identical numbers but different text (whitespace passes the loader) give different gameplay digests on the same battle, and that the lean digest path includes it, since lean is the only path the loop uses.

**7. Low. Platoon task is absent from the observation.** Legality of the Reposition family depends on the platoon task and its expiry (`:344`), and column 47 is computed against `platoonOrder.position` even when no order exists. Columns 59, 62 and 63 are free: add the task one-hot and time to expiry. The officer profile columns 21 to 24 are `config.officer`, constant for legacy, so the trait-input claim is hollow until a per-leader source exists.

**8. Low. Failure handling in Unreal is fatal.** A malformed model or an invalid decision exits the game (`BattleGameMode.cpp:83,87`; `ManeuverSim.cpp:460` throws inside `Simulate`). Acceptable for an opt-in flag, but the CLI path should record the throw as a failed row rather than a crash, which it does; Unreal should fall back to legacy with a notice.

**9. Low. Cross-platform inference is unproven.** `check_export.py` compares native and PyTorch on this host only and says so. The Windows lab must run the same 2,000 rows before any Unreal replay claim.

## Confirmed sound

- No hidden-state read in the feature builder: every input derives from the leader's tracks, reports, own squad state, planner costs and config. `SquadPolicy.cpp` is in `POLICY_FILES` for the static check.
- Teacher scores are recorded but never enter features or inference; canonical action order is by manoeuvre kind and position, not score (`:446-450`), and argmax tie-breaking is first index in both C++ and NumPy.
- Off-mode parity: with neither model nor recorder, `policyFeatures` is false and the refactored `selected` expression reproduces the old rule exactly.
- Label semantics: `target = scores − scores[0]` with `scores[0] = (hold+2)/16` matches the legacy `best < hold+2` rule; all-illegal rows are skipped; masks are legal at the label.
- Widened mode is a distinct legacy controller and is in `SameConfig`, the digest and the manifest; reruns pass the model file and digest.

## Outside this slice

The `stay` action is a hold, not a `keep`: re-selection every cadence with a target more than 10 m from the prepared one restarts the preparation clock (`:474`), so churn is a live risk for any model less smooth than the linear teacher. The existing order-rate and replaced-before-arrival measures must be part of every neural evaluation, and the accepted-versus-executed rate the plan calls for is not yet measured.
