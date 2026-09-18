# Plan 015 Step B — Step C2 review continuation

## Result

**31/31 selectors pass at `4786fc9830d0c1c0`.** The 28 existing selectors, restored Q05, the clock-arrival pin and the new help-retention pin pass together. The join remains enabled. This closes the local prerequisite in the [Step C2 review](../../plans/015-step-c2-fable-review.md); it does not promote drills or change the legacy default.

Entry fingerprint: **`8bf1a7eac576fba9`**. Final simulation fingerprint: **`4786fc9830d0c1c0`**. The radio repair, clock certification and AAR summary are accepted by the attributed review and are unchanged in this continuation. The review corrects my earlier test design: exhaustion retention belongs in a focused state pin, not a mandatory battle sequence. I agree with that correction.

Earlier reports and source are preserved in `.local/plan015/review-c2/entry/`; this continuation's commands, source snapshot, binaries and logs are in `.local/plan015/review-c2/`. Prior three-attempt evidence remains under `.local/plan015/review-c/`. No pre-existing work was reset or stashed.

## Ruled fixture restoration and new pin

`Sim/PlatoonFixtures.cpp` means `Unreal/Source/ArmyPrototype/Sim/PlatoonFixtures.cpp`. Its Q05 block for encounters94–96 is restored byte-for-byte from the first prior attempt: no extra90 m displacement and no35 s delayed fixing reload. The existing 28 selectors' fixtures and assertions are unchanged. The clock pin retains its already accepted near/far fixture.

`tests/platoon_tests.h` restores Q05's original discriminating assertions: mixed NeedSupport and Fixing each act once, and the single-message controls act once independently. The vacuous exhaustion predicate is removed from that battle scenario under the explicit review ruling.

| Q05 case | Need received | Fixing received | Help accepts | Opportunity evaluations |
|---|---:|---:|---:|---:|
| 94 mixed | 1 | 1 | 1 | 1 |
| 95 Need only | 1 | 0 | 1 | 0 |
| 96 Fixing only | 0 | 1 | 0 | 1 |

The new `--platoon retention` selector records encounter94 through production sensing and report transport, retains an actual received Fixing, and supplies the review-authorised exhausted-help precondition at the `RadioAction` boundary. A test-only wrapper in `Sim/DrillSim.h` / `Sim/SquadDrillSim.cpp`, behind `ARMY_TEST_CONTROLS`, calls that production function. It is absent from the CLI/Unreal compiled interface. No alternate policy implementation is tested.

The recorded Fixing has serial3000001, received at5.9 s. With help instance2 active and exhausted, the real route query rejects the opportunity once. The pin then proves:

- Help, stage/generation, instance, route identity and exhaustion/rejection evidence remain retained.
- The full recorded gameplay-state digest is identical after normalizing only the expected broadcast-consumption bookkeeping; the rejection reason is explicitly compared too.
- The Fixing serial is consumed; a second call with the same message emits no new evaluation or acceptance and retains the same state.

This narrow test deliberately supplies exhausted help; that is the review's authorised state pin, not an assertion that encounter94 naturally reaches exhaustion. It does not inject messages into the battle transport or fabricate task receipts. The actual message and receiving leader knowledge come from the recorded battle.

The clock pin passes unchanged: near case97 has3 certification requests,18 actual-position Done certifications,0 timeout failures; far case98 has3 requests,0 certifications,15 timeout failures. The near leader retains Done in480 sampled frames, which are not480 distinct messages. Existing lifecycle pause/arrival assertions pass unchanged.

## Commands and local result

```text
./scripts/test-sim.sh --platoon retention
python3 .local/plan015/review-c2/run_pairs.py
./scripts/battle-lab.sh --version
python3 -m unittest discover -s tests -p 'test_*.py'
python3 tools/source_id.py
git diff --check
```

The retention pin passes on the first source; there was no further policy or fixture iteration. `final/results.json` records all31 selector argv and exits. The two observed retention executions are the initial focused invocation and confirmation on the same source, not two changed builds. The final CLI identifies `4786fc9830d0c1c0-linux`.

72 Python tests pass, including the existing AAR tests and five new tests for `tools/initiative_guards.py`. Those checks prove equal360 s baselines pass without the withdrawn absolute thresholds, each resolution/churn criterion can fail independently, intervals crossing zero do not fail, missing matched cases cannot pass, and zero shots/participation stop independently. No simulation observer metric is read by policy.

Protected-file hashes match for TerrainSim.cpp, both frozen seed lists and evaluate_routes.py. `git diff --check` passes. The exact simulation delta is `simulation.patch` under this continuation's evidence directory. Its runtime changes are confined to the authorised Q05 fixture restoration; the extra function is test-only. Fingerprints include fixture and wrapper source, explaining the new ID despite no authored-map tactical policy change in this continuation.

## Step C boundary

The measured build must remain this frozen simulation source. The unchanged accepted radio/arrival behavior has not yet been distribution-certified. Step C's full verification, per-run tables and guard decision are recorded in [the Step C report](015-step-c-report.md). No second measured source or reinterpretation of a failed guard is authorised. Windows and Unreal remain with the architect; no Fable launcher, commit, reset or stash is used.

No disagreement with the review. The accepted AAR presentation interpretation remains explicit: a bounded one-page overview links every additional turning point in the complete appendix; attribution describes observed sequences rather than inventing causal proof.

### Verification completed before measurement

On this same frozen source: full `./scripts/test-sim.sh` exits0 in237.642 s;
40/40 authored legacy/cognition digests match their preserved baselines;
3/3 drills trace on/off pairs match. Both maps use seed107; F1 uses genSeed1,
seed107. Paired digests: Works `2368092312704331323`, Trenches
`7010569149597981856`, F1 `7012570963591353430`. Full commands and manifests are
in `verification.json`, `authored-parity/parity.json` and `trace-parity.json`.
The default battle remains legacy (360 s,1878 shots, draw).

```text
./scripts/test-sim.sh
python3 .local/phase4/parity.py .local/plan015/review-c2/authored-parity .local/plan015/review-c2/final/battle-lab
python3 .local/plan015/review-c2/trace_checks.py
```

### Measured continuation outcome

Step C subsequently completes ten Works battles on the same source and fails
the legacy-paired stronger-remaining-strength guard. No Trenches/F1 distribution
or Steps E/D follows. This distribution stop does not undo the31-selector local
pass; the full per-run result is in the Step C report.


## C5 allocation-repair continuation

The two C5 attempts each finish at 24/31 selectors; D17 passes both, Q04 passes
the second and D08 still fails. Full Linux, 40 historical digest checks and three
trace pairs pass after each attempt, but those do not override the optional
selector failures. The authorised four-file copy restores the accepted B source
`4786fc9830d0c1c0`; fixtures/assertions are unchanged. See the
[Step C report](015-step-c-report.md) for fingerprints, exact failures, both
patches, trace evidence and the subsequent single floor-source measurement.
Step C stops on F1 win share; E and D do not follow.

## Step C6 mechanism continuation — 17 September 2026

The [C6 review](../../plans/015-step-c6-fable-review.md) authorises three local
attempts before one measured build. Final source `26145f87ae81a257` passes all
35 selectors: the existing31 plus Q06–Q09. The existing squad test header is
byte-identical to entry; previous platoon assertions and fixtures are unchanged.
Attempt1 `9b9e7f203aa939b4` passes32/35 (Q07, Q08, D11 fail); attempt2
`657e5ca3f49821b3` passes34/35 (Q07 fails); attempt3 changes only new fixture103
and passes35/35. Each attempt independently passes the full Linux suite,
40/40 historical authored digest checks and3/3 drills trace-parity checks.
74 Python tests pass on the final local source.

Q06 proves effective incoming fire with commitment held, then retirement on new
assault-element loss; its uninjured control does not retire in the same window.
Q07 proves an eligible caller chooses supported closure at28.3s when Fixing arrives,
and the no-Fixing control does not. It does not claim that Fixing interrupts an
already committed BreakContact: attempt2's caller completed its retirement first
and acted23s after receipt. Q08 preserves support instance1 on an identical renewed
sector and accepts instance2 for a different sector. Q09 counts4 shared contact
identities once despite overlapping reports;32 distinct identities count32.

The offline sixteen-loss belief audit found no duplicate identity accumulation,
so belief policy is unchanged. The specific10/108 stale-ratio diagnosis is disputed:
a real base-of-fire loss/minStrength failure precedes retirement. See the
[C6 Step C report](015-step-c-report.md) and
[local evidence](../plan015/review-c6/diagnostics/conclusion.md). Local success
certifies mechanisms and historical parity, not distribution guards or replay
quality. No native build, Fable invocation, commit, reset or stash was performed.
