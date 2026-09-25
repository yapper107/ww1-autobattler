# Five-agent exact optimization round — 22 September 2026

At Jordan's request, five exact `claude-opus-5-5` agents each optimized one area above 10% of battle
CPU in the [fresh profile](NEURAL_TRAINING_PROFILE_6FF.md). Pure optimization: bit-exact results,
no gameplay, search-budget, cadence or candidate changes. Astra (claude-opus-5-5, this session)
reviewed, integrated and verified. No Fable review was requested or is claimed for this round.

**Source 6ff5c2010bc64352 → f28c195b711323f9. Same battles, 59.5% less battle CPU (about 2.5×).**
A real training generation (3 seeds × 24 battles, 15 workers, PGO training binary) takes 74–76 s,
against 202–220 s for the completed experiment's generation 1 and 115–119 s with the build changes
alone. Same battle digests and byte-identical trained checkpoints. Estimated full 40-generation run
(three seeds): about 1 hour, against 2.85 hours. This is an estimate from generation 1, not a
measured full run.

## Changes

| Agent | Files | Change |
|---|---|---|
| orders | BattleSim.cpp (ChooseOrder, UsefulCover) | Cover search in (score, index) order, cheap shelter tests first, stop at the first passing candidate with a path: the same argmin the original loop keeps. Traced calls keep the original loop. A duplicate ProtectedAt in UsefulCover is removed. |
| cover | BattleSim.cpp (ProtectedAt), CoordinationSim.cpp (GroupStation), CommandSim.cpp (RearPosition) | Pure rejections before the stand-off cover loop; RearPosition visits candidates by a monotone lower bound and stops exactly; 2 MiB thread-local ProtectedAt memo keyed on exact arguments plus the geometry-revision owner. |
| routes | TacticalRouteSim.cpp/.h | Sample counts rays the exact table already answers first and queries the rest only while they could raise the exposure maximum; FindPath memo per geometry revision in the route graph; flat open-addressing sample cache. |
| paths | EnvironmentSim.cpp | Ordinary (non-tactical) floor paths memoised per revision and exact endpoints; stale heap entries skipped; heap key with identical pop order and ties. |
| sight | SpatialSim.cpp | Flattened original obstacle tree; a second surface-area tree for eligible queries. It gives the identical minimum contact; `any=true` keeps the sign but may name a different blocker, and every such caller uses the sign only. Separate 512 KiB sight and 32 MiB movement memos with complete keys, huge pages on Linux. |

Agent reports, patches, differential tests and screens: `.local/plan024/opus-round4/<agent>/`.

## Quiet-machine timing (16 concurrent, 12 recorded training battles × 2 rounds, all exact)

| Build | CPU reduction vs 6ff | Faster |
|---|---:|---:|
| orders | 19.1% [16.0, 22.3] | 23/24 |
| cover | 13.6% [10.4, 17.0] | 23/24 |
| routes | 15.0% [10.6, 19.1] | 23/24 |
| paths | 7.3% [1.3, 12.5] | 18/24 |
| sight | 23.4% [19.2, 27.0] | 24/24 |
| **combined** | **59.5% [57.4, 61.5]** | **24/24** |

Peak memory per battle 222 → 197 MiB. Agents' own screening numbers were taken on an overloaded
machine and are not used here.

## Verification of the combined source

- Every recorded-action replay above matches decisions, observations, receipts, rewards, digests and
  winners.
- Original Sample oracle: 882,432 exact comparisons.
- 40/40 lean historical parity; `tools.neural.verify` 41/41 against the frozen baseline.
- Full Linux suite passes (exit 0, no FAIL lines).
- Drills trace on/off 3/3 plus repeat; all four digests equal the 6ff build's.
- Rebuilt lab binary is byte-identical to the benchmarked combined binary. PGO training binary rebuilt.
- MSVC native build; Windows route and neural contract groups pass; six paired Windows battles (three
  cities, Legacy and neural) match the 6ff Windows build.
- Unreal 5.8 build succeeds.
- Agent-level differential tests (bitwise, with deliberately broken builds that fail): orders 1.15M
  decisions; cover 702,852 checks plus every call in six battles; routes 8,503 full routes; paths every
  call in five battles; sight 43M queries.

## Limits and cautions

- Diagnostic query counters in `profile.json` (sight, memo and path counts) are lower, because fewer
  queries run. They are not gameplay or digest inputs.
- Future callers of an `any=true` obstacle query must use only its sign (comment in SpatialSim.cpp).
- The ProtectedAt memo relies on the existing invariant that geometry changes go through a revision
  change that replaces `map.segments`.
- Routes and paths each memoise ordinary FindPath results (at different levels). Both are exact; the
  redundancy was not ablated.
- No Windows timing is claimed. The completed experiment keeps its frozen d73667841df73faa binary.
