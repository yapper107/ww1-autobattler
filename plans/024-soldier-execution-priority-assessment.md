# Soldier execution versus further squad learning — 22 September 2026

Jordan asked whether individual soldier AI should come before squad neural AI.
This is architectural advice, not authorization to replace a controller, alter
conduct rules or start another training experiment. Current source 6ff5c2010bc64352;
completed training used frozen d73667841df73faa. No simulator or model was changed.

## Astra recommendation

Prioritize a bounded audit of the squad-to-soldier execution interface before
another large PPO run. Preserve the existing soldier controller and squad models.
Repair demonstrated faults at the layer that owns them; a learned soldier policy
is not a prerequisite established by this experiment.

The squad model selects proposed maneuvers/destinations and HOLD/KEEP. Candidate
creation, preparation/support gates, member orders and cover/path/fire decisions
remain partly or wholly hand-coded. A better ranker cannot directly repair an
unavailable action or a broken executor. Conversely, unchanged soldier rules serve
all compared arms: the PPO plateau alone does not locate the problem there.

First diagnostic lead: schema 3 continuation already fails the fresh-map friendly-
fire guard before PPO, and all trained schema 3 models also fail; schema 2 imitation
passes. Trace the schema change, movement/commit timing and actual friendly-hit
situations before blaming learned soldier behavior or changing rewards. Separately
classify non-arrivals by order replacement, legitimate cover/suppression reactions,
inherited wounded/support duties, route failures and unexplained lack of progress.
Use available traces first and collect targeted development replays where needed.

Recommended sequence:

1. Compare imitation and untrained continuation on existing development scenarios;
   trace friendly hits and follow selected plans through issued orders to actions.
2. Repair only demonstrated execution/interface defects, with isolated comparisons,
   existing conduct guards and short Plan 023 videos. Keep legitimate safety and
   wounded behavior unless Jordan changes that design.
3. Freeze that execution version and compare the existing fixed policies again.
   Diagnose effective policy authority, sampled versus greedy decisions and credit
   assignment before another large training run. Keep active Legacy opponents.

No new reward weights, conduct thresholds or automatic behavior changes are adopted.
Fresh final maps will be required for subsequent promotion evidence.

## Exact Fable consultation and Astra corrections

Exact claude-fable-5-1 assistant identity, successful terminal result and model usage
verified. [Request](024-soldier-versus-squad-fable-request.md). Raw evidence:
`/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260922T180205-559d29f3/`.
Fable agrees on the execution audit and prioritizes the schema 3 friendly-fire lead.
Its opening "no" addresses starting a learned soldier controller; Jordan's question
can also mean improving the existing individual controller, which remains in scope
as a recommendation if faults are demonstrated.

Corrections to stronger assertions in the response:

- No statistically demonstrated PPO benefit is not proof of zero benefit or
  equivalence. The intervals are broad. Do not attribute the complete Legacy
  advantage to imitation/interface alone as an established causal decomposition.
- One arm failing a guard while another passes does not establish a significant
  difference between those arms, nor isolate KEEP or commit-clearing as a defect.
  Those are testable leads. For selected RL versus continuation, the friendly-fire
  difference is -0.0302 with interval [-0.2939, +0.2272]. Proposed ablations are needed.
- Six wounded RearGuard assignments explain part of an earlier replay. They do not
  prove every separation was justified; the record establishes inherited behavior,
  not a new user ruling about every threshold or rear position.
- The cited waiting/commit proportions are from the nine-update snapshot, not a
  measurement of all 40 updates or battle time under policy control.
- Lean recording alone does not guarantee full time-resolved traces. Inventory the
  actual artifacts; targeted trace regeneration or instrumentation may be needed.
  KEEP masking and disabling commit-clear are proposed controlled changes, not
  claimed existing executable flags or analyzer-only reruns.
- Arrival within 1.5 times estimated travel, the category scheme, clean-continuation
  guard requirement and receipts-as-guards are proposals, not adopted thresholds.
  Waiting may be legitimate and invalid orders may originate upstream. Episodes
  can have several intermediate states before one eventual outcome; do not force
  overlapping causal states into misleading exclusive labels.
- Shared execution need not be perfect before learning. It should have observable,
  explainable progress/failure and stable ownership. Any actor-visible status must
  respect existing knowledge and message-delay boundaries. Deterministic code is
  not a guarantee that a valid order survives new threats, wounds or obstructions.

Response below is verbatim. No new training or execution audit has been launched.

---

Nothing further is needed; the duration results, Astra's snapshot assessment, the pilot's straggler trace, and the relevant `ManeuverSim`, `CommandSim` and `BattleSim` paths were already inspected in this session.

**Judgment: no. Do not start a learned soldier policy, and do not treat the soldier layer as the proven cause. The next priority is a deterministic execution audit at the squad-to-soldier interface, starting with one defect the experiment already isolated.**

## What the evidence actually says

- Learning added nothing measurable. Imitation, untrained schema-3 continuation and the three RL seeds are indistinguishable on the fresh maps (RL versus imitation −0.09 [−0.38, +0.19]; versus continuation −0.04 [−0.20, +0.12]). The gain over Legacy comes from the imitation model and the schema-3 interface, not from PPO.
- One thing did change deterministically: every schema-3 arm, including the continuation with identical weights, fails the fresh-map friendly-fire guard, while schema-2 imitation passes. That is not a learning result and not a soldier-policy result. It is an interface effect of KEEP or of commit-clears-pending (`ManeuverSim.cpp:547`), and it is fully traceable without training.
- The policy's effective authority is small: two routed candidates per family, active bounds and flank holds return before the policy is consulted (`ManeuverSim.cpp:238-280,301`), and support and preparation gates decide when anything moves (`:501-510`). About 55 to 61% of decisions were support waits and under 3% commits. Those are decision counts, not time, but they show where control sits.
- The straggler trace located six of nine survivors in `RearGuard` by the wounded rule (`CommandSim.cpp` `KnowsWounded`/`RearPosition`). That is a user-ratified rule, not a soldier defect. No demonstrated soldier-execution defect exists in the record yet; the audit is what would produce one.

Evidence limits: 25 maps, three training seeds, one opponent, one map generator; the selected model alone is not reliably better than Legacy; the final maps are now opened.

## Fixing execution versus replacing it

Fixing means deterministic repairs to shared soldier or relay code behind a `Config` switch whose off-flag reproduces existing digests, as plans 019 to 023 did, with the 40 lean references re-rooted and Jordan's videos. Replacing means a per-tick learned controller for 64 agents that would sit under the cover rule, the wounded rules and the passage rules the user has ruled on, multiply the credit-assignment problem the squad ranker already has, and break the parity infrastructure that lets three controllers share one executor. Nothing measured justifies the second; the first is justified only for defects the audit demonstrates.

**Evidence that would change the order.** Run the disposition analysis below. If most non-arrivals fall into "valid order, path exists, not under fire, not wounded, not blocked, still not executed", the soldier or relay layer is at fault and its repair comes before any squad learning. If most fall into safety overrides, wounded rules or plan supersession, the squad layer's authority and credit are the problem and soldier work would be wasted.

## The diagnostic, from existing traces

For each committed squad decision (receipt `committed`) and each member order it produces, classify the order's terminal disposition from the lean trace, using fields that already exist: order serials and plan 023's `groupOrder`, soldier `Reason` per frame, the plan 020 `CoverRule` field, `MoveFailure` reports and `PassageWait`:

1. **Arrived** within 1.5 × planner travel time.
2. **Superseded** before arrival, tagged by who replaced it: squad policy re-selection, relay re-station, platoon directive.
3. **Legitimate override**: `StayedUnderFire`, `EmergencyCover`, `Suppressed`.
4. **By rule**: wounded `RearGuard`, covering pair, attached squad.
5. **Cannot execute**: empty route, `MoveFailure`, `PassageWait` beyond a bound, `Blocked`.
6. **Unexplained idle**: none of the above and no progress.

Report time-weighted shares per arm on the 30 development cases for Legacy, imitation and continuation. Categories 5 and 6 are the only ones that indict execution; category 2 with "squad policy" as the tag indicts churn. In parallel, the friendly-fire ablation: run the continuation with KEEP masked out, and separately with commit-clear disabled, on the same cases. Both are deterministic reruns of existing binaries plus one analyzer; no training.

## Minimal execution contract before further squad learning

- Every committed decision yields member orders with a serial and exactly one logged disposition from the list above; supersession names its author.
- The executor may replace a committed manoeuvre's stations only through plan 023's listed give-up conditions, each logged.
- A candidate offered to the policy has a routed path and reachable stations; a chosen candidate that later cannot be executed is reported as category 5, not silently dropped.
- The untrained schema-3 continuation passes every fresh-map guard, so the interface baseline is clean before learning is judged.
- Sampled-versus-greedy agreement on the deployed checkpoint is measured and reported alongside outcomes.

## Staged sequence

1. **Friendly-fire ablation** on the continuation; repair the interface defect it isolates; re-verify on the development set. Reserve a new unopened map range now.
2. **Disposition analyzer** over existing lean traces; publish the shares; repair only demonstrated category 5 and 6 defects, each behind a switch with digest parity and videos.
3. **Authority and credit diagnostics** on the frozen checkpoints: sampled versus greedy, advantage by receipt outcome, share of battle time under policy control versus bypass.
4. Only then a next training run, with the contract's receipts as guards and the same reward and anchor unless step 3 gives a reason.

On Astra's preliminary view: agreed, with two refinements. The audit should be gated by the disposition shares, or "repair low-level defects" becomes the one-branch guessing plan 023 was written to stop. And the schema-3 friendly-fire failure is the most actionable fact in the whole experiment; it belongs at the front, not inside the audit.
