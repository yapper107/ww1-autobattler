# Experimental neural squad ranker

This is the first Plan 024 imitation pilot, **not promoted**. Legacy remains the
default. The model is executable through the optional CLI/Unreal flag and is
provided with its training provenance, checks and failed conduct guard.

- `squad.policy`: schema 2, 96→32→1 shared action scorer, 3,137 parameters.
- `provenance.json`: data hashes, map split, training settings, benchmark summary
  and native export checks. Raw data/evaluation are in `.local/plan024/`.
- Source fingerprint: `aef3b097c0df4b47`; baseline: `45da1e25dd1aa9e7`.
- SHA-256: `a16bff3cd0d09bef1f2dc4dfe4f05dfb00e81a80242e99031bbd1c70f45ccd66`.

```sh
scripts/battle-lab.sh --legacy-ai --neural-model models/squad/plan024-imitation-v1/squad.policy --lean --no-trace --seed 107 --seconds 360 --out .local/neural-demo
```

For the established generated city tests and short videos, use the commands in
[tools/neural](../../../tools/neural/README.md). For Unreal, pass
`-ArmyLegacy -ArmyNeuralModel=<absolute model path>`; quote paths containing spaces.

Attack performance is statistically level with Legacy. The model fails the
existing order-churn guard (+18.44 Azure orders/minute in symmetric city battles).
It chooses manoeuvres through Plan 023 execution; it is not PPO or the complete
squad intent layer. See the [pilot report](../../../docs/NEURAL_SQUAD_PILOT.md).
