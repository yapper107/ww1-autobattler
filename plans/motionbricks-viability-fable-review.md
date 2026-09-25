# MotionBricks viability: exact Fable review

22 September 2026. Requested and reported model: `claude-fable-5-1`.
Original response follows verbatim. Astra's corrections/disposition are in
[the research report](../docs/MOTIONBRICKS_VIABILITY.md#architect-review-and-astras-disposition).
Evidence: `/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T200638-320a4112/`.

---

Nothing further is needed. Sources inspected: the port's `API-INFERENCE.md`, `API.md`, `MOTIONBRICKS-CPU-PROFILE.md`, `MOTION_QA.md`, `LICENSE`, `src/agent.cpp` and `src/planner.cpp`; upstream `README.md`, `adding_your_own_dataset.md` and `demo/full_agent.py`; the game's `CharacterBlend.h`, `SoldierVisual.cpp` and `SoldierAnimInstance.cpp`. Benchmarks and QA results are the port authors' reports, not ours; nothing was run.

**Verdict: a bounded offline-bake experiment is sensible, but only after one cheap kill test. The released model animates the Unitree G1 robot skeleton, not a human; nothing else matters until a retargeted clip looks acceptable on the game's rig.**

**Real blockers versus engineering.**

- *Blocker: no human model.* Upstream released G1Skeleton34 checkpoints only (`README.md:107-110`); the port bundles those weights. The G1 has robot proportions, so a retarget to the male and female rigs is required and its quality is a third-party report (issue #146), unverified. This decides go or no-go.
- *Blocker-adjacent: vocabulary.* The model in-betweens poses; it has no notion of rifles, crouch-walking under fire, prone, wounded gait or death. Those stay authored. The realistic scope is lower-body locomotion only, which fits the game, since the anim instance already overrides everything above `Spine` and runs two-arm weapon IK (`SoldierAnimInstance.cpp:44-118`).
- *Engineering, not blocker:* AMD host. The port runs on CPU (authors: 33.7 ms per fixed 40-frame plan on two Zen 4 cores, F32 with Llamafile kernels) and Vulkan; no RDNA4 measurement exists, and WSL has no usable GPU Vulkan, so native Windows or CPU. Licences: port Apache-2.0, weights NVIDIA Open Model License with attribution and trustworthy-AI terms; read before shipping.
- *Engineering:* the stateless API gives you constraints, not pins (`API-INFERENCE.md:29-30,124`); seams, overlap removal and placement are yours. The authors' own clip-transition QA still fails entry seams after the root-explosion fix (`MOTION_QA.md:67-78`), so seam handling is real work.

**Authority boundary.** Keep it exactly as today: the simulation's recorded positions drive the root, clips are in-place (`CharacterBlend.h:46-53`), and the bake produces per-soldier lower-body rotation tracks at 30 fps keyed to battle time. Condition each plan's source and target roots on the recorded positions so stride matches the trajectory, then discard the generated root. The tradeoff: forcing the recorded root gives foot sliding wherever the generated stride disagrees; using the generated root gives clean contacts but drifts off the authoritative path. Recommended: recorded root, optional planted-foot IK lock as later polish, and measure sliding against the current in-place clips before judging, since those slide too.

**Smallest go/no-go proof, in order.**

1. Native execution: build the port on Windows CPU, run the bundled example for a 40-frame walk, confirm deterministic repeat and time per plan at 1, 2 and 4 threads on the 9800X3D; try Vulkan on the RX 9070 XT.
2. Retarget kill test: three clips (straight walk, walk-to-stop, 90° turn) retargeted onto the male rig, imported as sequences, captured beside the authored walk. Jordan's eye decides. Stop here if it fails.
3. Record timing: one real soldier trajectory from a lean export (positions every 0.2 s), chained plans conditioned on it; measure root deviation before correction and foot slide with the root forced.
4. Seams: ten chained plans with four-frame overlap and the port's blend weights; apply the port's QA limits; inspect the nine seams.
5. Retained-frame throughput: sustained plans per second across four processes and the fraction of movement time per battle, from the same export.

**On the headline numbers.** The demo replans every 0.25 s (`full_agent.py:109,123`) and keeps about eight of a 44-frame plan, so interactive throughput overstates a bake by roughly five times; a chained bake with four-frame overlap retains about 36 of 40. Arithmetic, not a promise: 200 soldiers × 600 s × 30 fps is 3.6M frames, about 100k plans if every frame were generated, near an hour on two cores at the authors' rate; soldiers are moving perhaps a third of the time, so the bake budget is plausibly tens of minutes on this CPU. That is only worth computing if step 2 passes.
