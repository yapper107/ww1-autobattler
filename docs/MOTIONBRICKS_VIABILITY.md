# MotionBricks for recorded soldier battles

Research by Astra, 22 September 2026. User supplied both NVIDIA's repository and
the localai-org C++ port. **Worth a small offline animation experiment; not yet a
verified replacement for the game's animation system.** The C++ port materially
improves feasibility on Jordan's AMD machine. Human retargeting, authoritative
battle timing/path fidelity and local retained-frame throughput remain untested.

This is source/documentation research, not a runtime or visual benchmark. No model
weights were downloaded, dependencies installed, battle run started, or game code
changed. Existing training and its frozen artifacts remain untouched.

## Exact evidence

- NVIDIA repository revision: `7f151314d4d1606544bf249d2a7a1cb754c64582`.
  [Source](https://github.com/NVlabs/GR00T-WholeBodyControl/tree/7f151314d4d1606544bf249d2a7a1cb754c64582/motionbricks).
  Read-only snapshot: `.local/research/motionbricks-2026-09-22/`.
- Port revision: `93850c4f68598e7c47722e30972764dad13debde`.
  [Source](https://github.com/localai-org/motion-bricks.cpp/tree/93850c4f68598e7c47722e30972764dad13debde).
  Snapshot and upstream issue-comment records:
  `.local/research/motionbricks-cpp-2026-09-22/`.
- Game HEAD: `c760cae7dd15bf827d23f2cab097920ae14fbb16`, with substantial existing
  changes; documented simulator source `6ff5c2010bc64352`.
- Windows `Win32_VideoController` query identified **AMD Radeon RX 9070 XT** plus
  integrated Radeon and a virtual display adapter. Its legacy AdapterRAM field
  is not used to infer VRAM capacity. No local MotionBricks GPU execution was tested.

## What the port actually provides

The C++23/GGML library implements the released G1 model on CPU and Vulkan, with
opaque C handles, a pretrained F32 bundle of approximately 0.73 GB and 15 supplied
style primitives. Outputs are root positions and local joint quaternions. This
is usable animation data, not rendered video. The weights are shared across
agents; working buffers and cached poses require additional memory.
[Port overview](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/README.md).

Motion generation can run independently of SONIC, MuJoCo, the web demo, Go and
Python. Its stateless API is a better starting point for our recorded-battle
adapter than the demo's spring-driven movement controller. Batch APIs accept
1–64 independent requests; separate calls sharing one model must be serialized.
CPU dispatch currently handles the lanes separately; Vulkan can combine compatible
requests. Two hundred soldiers do not require 200 copies of the network.
[API boundary](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/docs/API.md).

The build includes Windows/MSVC branches, but the documented benchmarks inspected
here are Linux measurements. A native Windows Vulkan baker is a candidate, not a
verified binary. Do not assume WSL exposes the same Vulkan device/driver path.
[Build definition](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/CMakeLists.txt).

## Human soldiers: possible, with a real retargeting step

Both released NVIDIA checkpoints and the converted port bundle use **G1Skeleton34**.
This is the robot representation, not a generic human skeleton. NVIDIA's human UE5
demonstration is not the released model/rig package. The author team stated on
13 August that there was no public UE demo release date.
[Representation](https://github.com/NVlabs/GR00T-WholeBodyControl/blob/7f151314d4d1606544bf249d2a7a1cb754c64582/motionbricks/docs/motion_representation.md),
[release discussion](https://github.com/NVlabs/GR00T-WholeBodyControl/issues/249).

This does not make human use impossible. In issue #146, a MotionBricks author
pointed a user to Kimodo conversion tools; the user subsequently reported a
high-quality G1-to-SOMA conversion using SOMA-retargeter. That is a third-party
success report in the upstream issue, not our verified result.
[Retargeting discussion](https://github.com/NVlabs/GR00T-WholeBodyControl/issues/146).

The current Kimodo conversion documentation supports G1 CSV import but also
specifies skeleton restrictions on SOMA BVH output. File conversion alone should
not be described as a complete automatic G1-to-human rig solution. A retargeting
solver and then adaptation to our soldier skeleton are still needed. Missing human
degrees of freedom, such as detailed fingers, cannot simply be recovered from
robot joint angles.
[Conversion documentation](https://research.nvidia.com/labs/sil/projects/kimodo/docs/user_guide/motion_convert.html).

Start with locomotion. Our existing authored upper-body handling and arm IK are
available for rifle/MG grips and reloads. Combining them with generated lower-body
motion is a proposal that must be visually checked on both male and female rigs.
The port's separate SONIC SMPL encoder is not a human MotionBricks model.
[SONIC SMPL scope](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/docs/SONIC-SMPL.md).

## Fit with our recorded battles

`ABattleGameMode::RunBattle` completes simulation before replay; `ShowUnits` and
`ASoldierVisual::Present` currently reconstruct animation from recorded state.
Proposed flow: **battle record → animation baker → retarget/handling correction →
compressed, seekable pose cache → Unreal playback**. Gameplay remains authoritative.
No inference is required while viewing a completed cache.

The stateless port accepts four source and four target frames on the G1 rig at
30 Hz. Output lengths are 24–64 frames in steps of four, including boundary regions.
It does not promise exact pose pins, handle seams or remove context overlap.
No public API for prescribing every sample of our recorded trajectory was found.
[Inference contract](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/docs/API-INFERENCE.md),
[implementation](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/src/inference.cpp).

Consequences for the game:

- Generated root paths must not move soldiers away from recorded cover, doorways,
  firing positions or casualty locations. Endpoint agreement does not prove the
  intervening path is correct. Forcing an incompatible root path can produce
  sliding feet; smaller segments or decoder trajectory conditioning may be needed.
- Event times must not move to accommodate the model's preferred duration. Preserve
  shot, reload and casualty times through authored layers and explicit time mapping.
- We know the whole battle, so the baker can plan ahead. It should consume useful
  generated segments instead of blindly reproducing an interactive replan cadence.
- Cache identity must include battle/rig/model/adapter versions and generation
  settings. Freeze the generated artifact for replay; identical seeds alone do not
  guarantee identical outputs across CPU and GPU implementations.

These are integration recommendations, not implemented features or new gameplay rules.

## Performance: use this port's measurements, not the headline

The maintainer reports the following MotionBricks planner results, excluding model
loading. These are not our measurements:

| Workload | Hardware | Reported elapsed time |
|---|---|---:|
| Fixed 40-frame plan, F32/Llamafile | Ryzen 9 7900, two cores | 33.7 ms |
| One 44-frame plan, Vulkan | RTX 5070 Ti | 12.5 ms |
| Four 44-frame plans together, Vulkan | RTX 5070 Ti | 27.0 ms |
| Four 44-frame plans together, Vulkan | Ryzen 7900 integrated Radeon | 140.8 ms |

Vulkan batching was useful on the tested GPUs. The AMD integrated result establishes
an AMD example, not RX 9070 XT performance. The sub-millisecond SONIC results elsewhere
in the repository measure a different model and must not be substituted here.
[Planner profile](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/docs/MOTIONBRICKS-CPU-PROFILE.md).

For 200 soldiers × 600 seconds × 30 Hz = **3.6 million retained poses**, conditional
arithmetic illustrates the importance of keeping generated frames:

| Assumption using the measured RTX rate of 148.1 plans/s | Calculated generation time |
|---|---:|
| Keep 40 new frames from each 44-frame plan | 10.1 minutes |
| Keep 30 new frames per plan | 13.5 minutes |
| Keep only 3 new frames per plan | 135 minutes |

At the CPU result above, retaining 36 new frames from each 40-frame plan gives about
56 minutes on that two-core workload. These calculations assume sustained measured
throughput, omit setup/retargeting/compression, and do not establish visual validity
for any overlap strategy. More workers or larger batches may change throughput;
the API limit of 64 is not evidence of 64-way speedup. Actual battles can also stop
animating settled casualties. **No bake-time estimate for Jordan's GPU is established.**

The earlier four-minute answer divided by NVIDIA's 15,000 generated frames/s on an
RTX 5090. That was explicitly conditional arithmetic; it should not be used as a
forecast for this AMD host and this port. Report retained animation seconds per
wall-clock second after all preparation, not just network calls.
[NVIDIA paper, §7.4](https://arxiv.org/html/2604.24833v1).

## Reliability and release scope

The port records native/upstream parity tests and keeps failures visible. Its
Kimodo-to-MotionBricks transition report says the representation error behind extreme
root jumps was fixed, but entry/seam QA still has failures, including virtual endpoint
orientation checks. This concerns those authored-clip transitions; it is not evidence
that ordinary walking always fails. It is reason to inspect our own seams and weapon
contacts rather than infer visual quality from numerical parity.
[Current motion QA](https://github.com/localai-org/motion-bricks.cpp/blob/93850c4f68598e7c47722e30972764dad13debde/docs/MOTION_QA.md).

NVIDIA's custom-data guide recommends a custom loader/representation for non-G1
training; current examples use synthetic data. Training a new human model is a
separate undertaking, not an automatic consequence of loading our soldier mesh.
[Custom data guide](https://github.com/NVlabs/GR00T-WholeBodyControl/blob/7f151314d4d1606544bf249d2a7a1cb754c64582/motionbricks/docs/adding_your_own_dataset.md).

The repository identifies Apache-2.0 source and NVIDIA Open Model License weights;
the two should remain separately tracked when packaging a future tool.
[Upstream license](https://github.com/NVlabs/GR00T-WholeBodyControl/blob/7f151314d4d1606544bf249d2a7a1cb754c64582/LICENSE).

## Smallest useful next experiment

1. Verify CPU then Vulkan model execution and numerical results on this host; record
   native Windows versus WSL explicitly. Load one model, with physics disabled.
2. Retarget one generated walk/turn/crouch sequence onto an existing human soldier.
   Check proportions, foot contact, root drift, shoulders and the weapon grip.
3. Bake 30 seconds of one recorded soldier including a turn, cover arrival, shooting
   and a reload. Preserve recorded movement and event times; inspect at 1× and in
   slow motion, with seeking checked separately.
4. Only if the result is acceptable, test 20 independent soldiers, batches of 1/4/16,
   retained-frame throughput, peak RAM/VRAM and output size; then forecast 200.

Go/no-go depends first on human motion quality and record fidelity, then acceptable
preparation time. This research does not start that experiment or establish an
AnimGen-versus-MotionBricks performance winner.

Architect consultation request:
[bounded Fable brief](../plans/motionbricks-viability-fable-request.md).

## Architect review and Astra's disposition

Exact `claude-fable-5-1` returned a read-only review through the existing project
architect session. [Verbatim response](../plans/motionbricks-viability-fable-review.md).
Astra accepts the bounded experiment, early human-rig visual gate, preservation of
recorded movement/timing, and measurement of retained frames rather than headline
generation speed. This is an architecture recommendation, not visual approval or
authorization to start a larger integration.

Corrections and qualifications to the attributed response:

- The claim that the model has no crouch/injured/gun vocabulary is too broad:
  upstream `demo/clips.py` explicitly provides crouched, injured, gun-walk and
  crawling styles. These still do not establish our exact rifle/MG handling,
  reload timing or casualty animation. Preserve authored actions in the first trial.
- Absence of a released human checkpoint is an integration/quality risk, not proof
  that human use is impossible; issue #146 reports a retargeting success.
- "WSL has no usable GPU Vulkan" was not established by our hardware query.
  Native Windows and WSL device/runtime compatibility both remain untested here.
  The review's CPU model reference was not independently verified in this research.
- "Soldiers are moving perhaps a third of the time" is speculation and is excluded
  from the timing estimates. Motion fractions must come from an actual replay.
- A lean run does not automatically retain the poses/frames needed by a baker.
  Select a real retained replay/export and verify its cadence and events first.
- Dropping generated root motion protects gameplay authority but does not guarantee
  foot contact or preserve generated pelvis motion. Align the character's path while
  retaining appropriate local pelvis offsets; compare foot sliding against the
  existing clips. Foot-lock IK is an option to evaluate, not a promised repair.
- The port's generous generic motion-QA limits are not sufficient soldier visual
  acceptance criteria. Inspect foot planting, weapon contacts and exact event timing;
  do not weaken project requirements to pass a port's numerical gate.

The proposed first trial remains one recorded soldier and three simple retargeted
clips. Larger batching/performance work follows only after that quality check.
