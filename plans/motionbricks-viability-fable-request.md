# MotionBricks viability: bounded architecture consultation

User asks for research into NVIDIA MotionBricks and explicitly supplies the
localai-org/motion-bricks.cpp port. Research only; do not implement or modify files.
Return a concise attributed review (roughly 600 words maximum).

Project: /home/jchan/ww1-autobattler. HEAD c760cae7dd15bf827d23f2cab097920ae14fbb16,
dirty working tree; latest documented simulator source 6ff5c2010bc64352. Preserve all
existing work. Battle simulation completes before Unreal replay; recorded positions,
shot/reload/casualty times remain authoritative. User considers 100 vs 100 soldiers,
10 minutes, baking animation before playback to avoid live inference cost.

Read-only sources downloaded at exact revisions (no models installed or executed):
- NVIDIA 7f151314d4d1606544bf249d2a7a1cb754c64582:
  .local/research/motionbricks-2026-09-22/motionbricks/
- C++ port 93850c4f68598e7c47722e30972764dad13debde:
  .local/research/motionbricks-cpp-2026-09-22/
- Relevant game files: Unreal/Source/ArmyPrototype/BattleGameMode.cpp,
  SoldierVisual.cpp, SoldierAnimInstance.cpp, CharacterBlend.h.

Prioritize port docs/API-INFERENCE.md, docs/API.md,
docs/MOTIONBRICKS-CPU-PROFILE.md, docs/MOTION_QA.md, src/inference.cpp,
src/planner.cpp, src/agent.cpp. Upstream docs/adding_your_own_dataset.md and
motion_backbone/demo/full_agent.py clarify release limits.

Evidence already checked by Astra:
- Windows read-only hardware query finds AMD Radeon RX 9070 XT (and integrated AMD),
  no NVIDIA GPU. Official demo defaults to CUDA; port supports CPU and Vulkan.
- Port bundles F32 G1Skeleton34 weights (~0.73 GB), not the human demo model.
  Native API outputs root translations and 34 local quaternions at 30 Hz.
- Stateless API accepts four source and four target poses, output 24–64 frames in
  multiples of four including boundaries. Constraints are not exact pose pins.
  No public dense recorded trajectory override seen yet.
- Explicit batch API supports 1–64 requests. Shared model calls require serialization.
  CPU dispatcher executes lanes separately; Vulkan fuses compatible durations.
- Recorded port benchmarks: latest CPU F32 fixed 40-frame plan 33.7 ms on 2 Ryzen 7900
  cores; Vulkan RTX 5070 Ti B=4, 44 frames each, 27 ms per batch (148.1 plans/s).
  AMD integrated Vulkan was also tested, but no RX 9070 XT measurement found.
  Do not confuse sub-millisecond SONIC controller timings with MotionBricks planning.
- Model input convention bug causing extreme root jumps was fixed. Authored Kimodo
  clip transition QA still reports entry/seam failures; some endpoint orientation
  checks involve virtual joints. Do not generalize these to all ordinary locomotion.
- Upstream issue #131: author discussed UE demo release without decision (April 30).
  #249: collaborator said no public release date (August 13).
  #146: author referred G1→human user to Kimodo conversion docs; user subsequently
  reported high-quality G1→SOMA conversion using SOMA-retargeter. These are reports,
  not our visual verification. JSON copies in the port evidence folder.
- The game already applies authored upper-body handling and two-arm weapon IK.
- User has not requested neural training, model downloads, or game integration.

Assess:
1. Is a local offline baker via this port a sensible bounded experiment on this AMD
   Windows/WSL host? Identify real blockers versus manageable engineering.
2. Best boundary with authoritative recorded movement/timing; do not hand gameplay
   authority to generated root motion. Explain root-correction/foot-contact tradeoff.
3. Smallest proof to decide go/no-go before 200-character work: native execution,
   human retargeting, exact record timing, seam/contact quality, retained-frame speed.
4. Challenge extrapolation of 3.6M poses / headline throughput. Example: 44 generated
   frames includes context and overlap, so measure retained new frames; interactive
   10 Hz replanning could waste most generated frames during a bake.
5. No need to review art aesthetically without actual captures; no such claim.

Acceptance: concrete recommendation with limitations and tests; distinguish repository
authors' reported evidence from our source inspection and unrun experiments. Use exact
claude-fable-5-1; no fallback, API billing, subscriptions changes, or file edits.
