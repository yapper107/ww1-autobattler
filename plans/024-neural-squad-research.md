# Neural squad layer: implementation research

22 September 2026. Astra's source inspection and primary-source research supporting
the [Fable consultation request](024-neural-squad-review-request.md). These are
findings and proposals, not a trained model or an approved replacement controller.

## Current source findings

Inspected HEAD `c760cae7dd15bf827d23f2cab097920ae14fbb16`; verified simulation
fingerprint `45da1e25dd1aa9e7`. The playable baseline is Legacy Plan 023 Stage E.

- `BattleSim.cpp::Simulate` owns a whole episode in local variables: frame, RNG,
  soldier runtimes, projectiles, command/message runtime, traffic, geometry receipt
  state, and recorder. There is no public reset/step interface. The existing
  `DiagnosticOptions::frameSink` observes recorded frames; it is not a policy action
  interface. A training session must preserve all this state between decisions.
- `CommandSim.cpp::UpdateCommands` runs message transport, platoon updates, squad
  planning and the corporal's relay. `PlanSim.cpp::UpdateSquadPlan` handles received
  directives, calls `UpdateManeuver`, search and coordination, and allocates group
  stations. `CommandSim.cpp::PlanSquad` turns those decisions into member orders.
  Replacing a single score without tracing these other writers can leave legacy
  code overriding the neural choice.
- Reusable execution includes `CoordinationSim.h::PlanGroupStations`,
  `GroupStation`, order serials and delivery, the group relay, leadership succession,
  paths, cover, stamina and weapon handling. Exact preservation requires extracting
  policy-free execution contracts; these functions currently mix some tactical
  choices with mechanics.
- There are eight roster slots per squad and four squads per side. Masked entity
  inputs can handle casualties and attachments now; larger initial rosters still
  require simulator work. A variable-size neural input does not remove C++ roster
  limits.
- Existing city generators, static defence, lean recording, paired evaluation,
  conduct metrics and replay videos are useful infrastructure. The source-search
  tree and summary metrics are not a reinforcement-learning rollout buffer or
  demonstrations of the policy's observations and actions.
- Hardware visible to this session: Ryzen 7 9800X3D, 16 logical CPUs, about 45 GiB
  RAM and 12 GiB swap. The historical 30 GB memory limit is not today's observed
  capacity. `nvidia-smi` was unavailable in PATH and the usual WSL library location;
  GPU model, GPU memory and training access remain unverified.

## Primary-source checks

These sources were opened on 22 September 2026. Library versions must be pinned
when implementation starts; the links point to moving documentation.

1. **Environment contract.** Gymnasium defines reset and step, including distinct
   `terminated` and `truncated` results. Our adapter must distinguish a completed
   game objective from a training collection cut-off so value bootstrapping is
   correct. A game whose rules define a loss at a deadline differs from an
   artificial rollout limit. [Gymnasium Env API](https://gymnasium.farama.org/api/env/).
2. **Action masks and memory.** SB3-Contrib's MaskablePPO supports discrete legal
   action filtering and multiprocessing, but explicitly does not support recurrent
   policies. RecurrentPPO separately supplies LSTM memory and requires correct
   hidden-state/episode-start handling. A recurrent masked candidate policy is
   custom integration, not two interchangeable options on an existing class.
   Start with a bounded nonrecurrent baseline using explicit contact ages and intent
   state, or budget for tested recurrent rollout/mask support.
   [MaskablePPO](https://sb3-contrib.readthedocs.io/en/master/modules/ppo_mask.html),
   [RecurrentPPO](https://sb3-contrib.readthedocs.io/en/master/modules/ppo_recurrent.html).
3. **Cooperative training.** Yu et al. show that PPO variants are competitive on
   several cooperative multi-agent benchmarks. This supports PPO as a baseline;
   it does not establish that our squad policy will learn good tactics, or how
   many battles it will require. Shared weights with per-squad observations and
   separate memory must remain decentralized at execution, even if training uses
   a team critic. [MAPPO paper](https://arxiv.org/abs/2103.01955).
4. **Imitation limitations.** Ross et al. address the distribution shift that
   occurs when a learner's actions lead to states outside its demonstrations.
   Behaviour cloning needs closed-loop battle checks, not only classification
   accuracy. Additional teacher labels on learner-visited states can help if the
   teacher can actually label the new action interface. A weak teacher still
   limits what imitation teaches. [DAgger paper](https://proceedings.mlr.press/v15/ross11a.html).
5. **Runtime integration.** ONNX Runtime offers C/C++ inference with CPU packages
   for Windows and Linux, providing a possible common deployment backend for the
   simulator and Unreal. This establishes availability, not model-export
   compatibility or bit-exact decisions across machines; test the actual operators,
   numerical outputs and selected actions. [ONNX Runtime C++](https://onnxruntime.ai/docs/get-started/with-cpp.html).
6. **Reproducibility limits.** PyTorch warns that complete reproducibility is not
   guaranteed across releases and platforms, and CPU/GPU execution may differ.
   Freeze training provenance and separately validate shipped inference. Record
   model hash, observation/action schema, normalizers, runtime/backend, seed and
   selected actions. [PyTorch reproducibility](https://docs.pytorch.org/docs/main/notes/randomness.html).

## Measurements before a training-time estimate

Benchmark generated city episodes with diagnostics disabled, then with observation
and candidate generation, then with inference. Report simulated seconds and squad
decisions per wall-clock second, memory per worker, action-candidate time and
inference latency. Measure the worker count at which total throughput stops rising.
Separately measure model updates on the available CPU/GPU. Historical six- or
ten-minute evaluation runs are not enough to estimate RL training time.

Set an initial experiment budget in decisions and wall time after that measurement.
Keep complete battle records for selected evaluations, with compact transition
buffers for training. Do not launch the full historical test suite beside every
training worker.
