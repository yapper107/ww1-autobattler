# Morning summary for Jordan — 24 September 2026

Written by the overseer (claude-fable-5-1) at the end of the overnight run Jordan authorized on 23
September ("keep going with this without my input for tonight, implement and wire the city maps, I want
covering fire in a happy spot where it is actually useful"). Nothing was promoted; every behaviour
change is a switch, off by default. Implementation agents were `claude-opus-5-5`; each package's
report is in its `.local/plan029/<pkg>/REPORT.md` or `.local/plan030/<pkg>/REPORT.md`.

## Where things stand

- **Working source `a8e46ca6b2bfffd5`** (lab and train rebuilt): all plan 029 packages, the credit-ray
  flip, the stair index, and every plan 028/030 switch merged as opt-in. Gates on the last batch:
  see `.local/plan030/integration-6/` (parity, trace, full suite, MSVC, Unreal), the night's final batch (M-S6, M-S7 and G-6 merged; a second MSVC shadowed-name error from M-S7 was renamed away, `range` → `slotRange`).
- **Playable default: Legacy, unchanged in behaviour except the muzzle-credit flip Jordan approved.**
- **Maps:** four generated families in the demo (`Town`, `Trenches`, `Village`, `City`); village and
  city2 seed 17 promoted and golden-byte tested; city2 wired into the loop and neural tools; city2
  battles cost 1.47× a town after the stair index (was 2.0×).

## Decisions waiting for Jordan

1. **Flip `--concealment --prone --vaulting` on by default?** Three pre-fixed tests on fresh maps:
   city2 **+0.097 [+0.039, +0.164]** attack score, attackers lost −3.1, cleared +0.16 (E-4); village
   +0.038 [−0.045, +0.136] and town +0.020 [−0.014, +0.059], i.e. neutral (E-5). Videos:
   `.local/plan029/videos/city2-472471-switches.mp4`, `village-1201-switches.mp4` (a bad village seed
   for the switches, shown deliberately), `town-103-switches.mp4`. If yes: re-baseline and re-root as
   for the credit flip.
2. **The covering-fire "happy spot" is not reached yet, and the night found why.** Every lever tried
   is score-neutral or worse; the trace diagnosis (M-S5) shows **62% of unanswered covering-fire
   requests name an enemy who is already down** (a median of 30 s earlier): the leader waits on, and
   calls fire onto, dead men's tracks. That is a knowledge-layer defect, not a fire-control one. **K-1**
   (retire the track of a man *seen* to fall, sight only, behind `--retire-fallen`) is built and
   measured (`.local/plan030/K-1/`): it halves the ghost requests (40–46% → 20–25%; the rest are men
   nobody in the squad saw fall), raises the answered share by 9–20 points and cuts support-wait, but
   the attack score does not move (best: concealment-only villages +0.025 [−0.002, +0.062]).
   **Ruling asked: flip `--retire-fallen` on as a correctness fix** (like the muzzle credit: changes
   Legacy on every family, needs a re-baseline; no video is decisive for a knowledge change, but the
   traces show every `seenDown` names a man truly out of action).
3. **Suppression mechanics S1–S4 stay off** (plan 030): impacts-on-cover, nerve, stacking and gunner
   compensation all make the *attacker* suffer more than the defender, or add lethality without
   suppression; two open readings (fully-suppressed = 1.0; nerve does not stop ordered moves) do not
   matter while off.
4. **Plan 028 stays closed** (E-2, E-3b): no covering-fire stack beats Legacy on any family with credit
   repaired; the quiet release (S5) doubles covered crossings at about one extra mover per battle for
   no score change.

## What was measured tonight (all paired, map-cluster 95%)

| Test | Result |
|---|---|
| E-2 plan 028 stack on repaired credit (900 battles) | no arm beats Legacy; full stack −0.03 to −0.05 on villages |
| M-S S1–S3 (840) | all three together −0.075 town / −0.099 village; nerve pins attackers 2× defenders |
| M-S4 gunner compensation | hits +40–55% both sides, no suppression gain, village −0.032 |
| S1b impact radius 2.2 m | pins covered defenders longer, village wins 55 → 48 |
| E-3 covering fire on city2 (720) | covered-station share 19% (town 16, village 21); R helped on dev maps |
| E-3b R on city2 validation | did not replicate (−0.023, friendly hits +2.0) |
| E-4 plan 029 switches, fresh city2 (pre-fixed) | **+0.097 [+0.039, +0.164]** |
| E-5 same on fresh village / town (pre-fixed) | +0.038 [−0.045, +0.136] / +0.020 [−0.014, +0.059] |
| M-S5 quiet release, radius 40, upper stations, rifle base (1,080) | score-neutral; diagnosis above |
| K-1 retire fallen tracks (1,080) | ghost requests halved, answered share +9–20 pts, score unchanged |
| M-S6 covering fire off entirely, meeting battles on villages/city2 (1,560) | **no outcome change**: one side without vs one with, exchange −0.009 [−0.035, +0.018]; squads stop waiting, lose ~1 more mover per battle |
| G-6 loop score v8 (Jordan: towns out) | objective and guards on village + city2 sets; Legacy root `2730fe73fadce803-legacy-v8` +0.809, every guard passing |
| M-S7 Jordan's suppression design + sector fire (3,360) | acceptance not met by any arm or constant; closest: graded peek + keep-down + neighbours on city2, W/L 45/15 → 53/7, attack score +0.014 n.s.; sector fire hurts concealment-only villages |
| P-1 stair index (exact) | city2 CPU −30%, 180/180 digests equal |
| Loop roots on the new families | village 0.811, city2 0.793, town 0.810 |

## Housekeeping done

- Gate protocol trimmed at Jordan's instruction: agents prove 40/40 + own groups; overseer gates once
  per batch (parity, full suite, builds). The 12 recorded replays predate the credit flip: run them
  with `--no-muzzle-credit` until re-recorded.
- Frozen ARMYMAP 2 neural baseline `.local/plan029/baseline/battle-lab` (321600b6d945e49c);
  `evaluate --expected-baseline` accepts it. The loop's objective and guards are still town-only.
- Astra: village art pass, uneven damage, 2–4 objectives, city2 (street-first) and the geometry
  review follow-up all landed; my review's two wrong claims are recorded as corrected.

## Rulings taken in the night (Jordan, awake briefly)

- **Towns are out of the runs**: village and city2 only (loop v8 done; agents told).
- **Jordan's suppression design** (one rifle never suppresses; two-on-one pins with a graded peek;
  cover impacts keep a pinned man down but never start it; a pinned man puts ~0.10 on neighbours in
  cover; constants found by sweep, "fluid") plus sector covering fire (the request names every threat
  overlooking the crossing) is package **M-S7**: measured, no arm meets acceptance, all four kept off;
  the closest result (city2 W/L 45/15 → 53/7 with the three suppression rules) is worth one pre-fixed
  replication on fresh city2 maps if Jordan wants to pursue it.
- **Does covering fire do anything?** Measured (M-S6): in meeting battles on the new families, no.
  The version worth flipping is whichever wins the one-side-against-the-other pairing.

## Suggested next steps

1. Rule on K-1 (retire fallen tracks) as a correctness flip; then decide whether the quiet release (S5)
   rides with it (score-neutral, more crossings at about one extra mover per battle).
2. Rule on the plan 029 switch flip; then re-baseline and re-root.
3. A family-aware loop objective (village/city2 sets scored, not only towns) before any loop generation
   on the new families.
4. Re-record the 12 training replays on the current default, or keep the flag rule.
