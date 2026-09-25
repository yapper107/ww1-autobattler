# Active-Legacy neural reward pilot

Experimental schema-3 squad rankers; Legacy remains the game default.

`squad.policy` is the final seed-25 narrow checkpoint selected on development by
the recorded rule. `seed24`, `seed25`, and `seed26` use two routed candidates per
maneuver family plus hold and continuation. `wide24` uses up to six per family.
Each directory contains its policy and training/export provenance.

See [the report](../../../docs/NEURAL_LEGACY_RL_PILOT.md) for held-out results,
regression guards, limitations, short comparison videos and Fable's actual review.
Inference is native C++; Python/PyTorch is needed only for training and export
verification. Launch explicitly with `--neural-model PATH` in the battle lab or
`-ArmyLegacy -ArmyNeuralModel=PATH` in Unreal. None of these artifacts is installed
as the default controller.
