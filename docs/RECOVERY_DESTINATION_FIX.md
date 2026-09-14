# Recovery destination correction

Simulation source: `f2424236795f5531`. Implements Fable's appended destination-centroid correction in `RECOVERY_GATE_FINDINGS.md`.

## Change

Initial recovery routes and re-slotted continuations record the mean of the assigned firing peeks as their destination. Physical route points, stage destinations, and squad waypoints still approach the shelter centroid. The initial recorded objective changes only after route construction and stage splitting. No tactical thresholds changed.

Regression checks assert that the destination is within 0.01 m of the mean assigned peek (stronger than the requested 3 m), on initial assignment and re-slotting. They separately assert that the final navigation point and stage destination remain the mean shelter. The initial-assignment fixture runs 60 seconds: seed 107 selects its route at 21.25 seconds, beyond the previous 15-second test.

## Strict results

The evaluator is byte-for-byte unchanged from before this correction. SHA-256 of `tools/evaluate_routes.py`: `3ade284789f519b1d4c6d377b091b075b177f14b183d2329464a1bfaa8d86dca`.

| Layout | Seed | Completed routes | Strict pass | First qualifying time |
| --- | --- | --- | --- | --- |
| 5 | 107 | 1 | Yes | 54.8 s |
| 5 | 108 | 1 | Yes | 55.4 s |
| 5 | 109 | 1 | Yes | 149 s |
| 6 | 107 | 2 | No | — |
| 6 | 108 | 1 | No | — |
| 6 | 109 | 1 | Yes | 60.2 s |
| 7 | 107 | 0 | No | — |
| 7 | 108 | 0 | No | — |
| 7 | 109 | 1 | Yes | 116.8 s |

Layout 5 is **3/3 on Linux and native Windows**. Windows qualification times also match the table. Only after all three layout-5 passes did the Linux matrix run layouts 6 and 7. The complete matrix is **5/9**, below its **8/9** target; the matrix command correctly exits 1. Defender elimination in all nine cases is not a substitute for the strict maneuver criterion.

All three Linux layout-5 gameplay digests and `evaluation.jsonl` files exactly match the preceding `d220f8cc8bfa343b` runs. This is a recording correction, not a change to soldier behavior:

| Seed | Before and after Linux gameplay digest |
| --- | --- |
| 107 | 9331855787150085516 |
| 108 | 9518265499078922388 |
| 109 | 879215874165090514 |

Native Windows seed 109 also matches its prior gameplay digest, `7176990198708005916`, with tracing both enabled and disabled for the full 360-second configuration. Cross-platform digests are not expected to match.

## Remaining evidence and quality work

- Layout 6, seeds 107/108: routes complete and two movers meet the instantaneous arrival/firing/angle checks, but they do not sustain the evaluator's qualifying interval. For example, seed 107 route 2000000001 completes at 55.95 s; seed 108 completes at 43.25 s. These remain failures.
- Layout 7, seed 107: no accepted route completes. Seed 108 route 2000000002 achieves a sustained angle at 93 s but never completes. Arrival or angle alone does not pass the gate. The immediate failed predicates are established; deeper causes are not claimed here.
- Fable's four documented quality issues remain: exposed assault slots near defenders, ineffective suppression of the defending MG, two movers sharing a corner without a stacked stance pair, and individual step-out overshooting the assigned peek. This correction does not address them.

The recovery controller remains an experiment enabled only for encounters 5–7. Normal battles do not enable it. No promotion into normal gameplay or new Unreal editor build is claimed.

## Validation and reproduction

Passed: recovery/task-contract and destination regression tests, the focused simulation suite, 22 Python tests, and native MSVC standalone compilation. The strict nine-case matrix remains below acceptance as described above.

```bash
./scripts/test-sim.sh --recovery
.local/tests/sim_tests --focused
python3 -m unittest discover -s tests -p 'test_*.py'
./scripts/battle-lab.sh --version
python3 tools/run_route_matrix.py --recovery --binary .local/lab/battle-lab \
  --out .local/recovery-destination-matrix --check
./scripts/build-lab-windows.sh
```

Local preserved evidence: `.local/destination-fix/` contains the matrix, native Windows checks, failed-gate audits, compiler/test logs, and pre-change evaluator/source copies. Each run has its own versioned manifest and trace. A user-facing copy of this report and compressed run evidence is saved outside the repository. Generated battle data and machine-local files are deliberately excluded from Git.
