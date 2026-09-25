# Plan 030 — Suppression mechanics that make covering fire worth doing (draft for Jordan's rulings)

Drafted 23 September 2026 by the overseer (claude-fable-5-1) after Jordan asked, on the day the
covering-fire credit ray was repaired (plan 029 F-E), whether basic mechanics need to change to make
suppressing fire worth it. Nothing here is authorized until the rulings in section 5 are answered.
Legacy remains the default; every change is a switch, off by default, measured before any flip.

## 1. The model today (`BattleSim.cpp`, `docs/STATS_AND_WEAPONS.md`)

- A round passing within 2.2 m of a man's body point (0.7 of his body height) adds 0.23 suppression
  (÷ composure), once per round; a hit adds 0.3; suppression decays at 0.15/s (× composure).
- Above his doctrine's duck threshold (0.40 cautious, 0.52 balanced, 0.65 aggressive) he shelters and
  stops firing; he comes up when suppression falls 0.2 below the threshold.
- While suppressed: aim cone widens, settle time ×(1 + 3·s), bolt cadence +0.5 s·s, slower movement.
- The near-miss test requires a solid-clear line from the round's end point to his body.

## 2. Why covering fire buys little (hypotheses, each to be verified by a fixture before any change)

H1. **Impacts on his cover do not suppress him.** A round that strikes the wall or rim he shelters
    behind ends on the far face; the line from that end point to his body crosses the solid, so the
    near-miss test fails. Only rounds passing over or beside the cover count.
H2. **Only the machine gun suppresses, and only while it fires.** A rifle near miss every ~2 s (+0.23)
    loses to 0.30 of decay in the same time; a 10-round burst saturates in a second, and 1.3 s after
    it stops the man is up again. There is no memory of sustained fire.
H3. **Sustained MG fire drifts high** (plan 017 recoil walk-up, the 18-round pause), so longer bursts
    suppress less at 50 m and beyond.
H4. **The commit rule watches an input** (rounds credited near one threat) rather than the observable
    output (the threats overlooking the crossing have gone quiet).

## 3. Candidate changes (each its own `Config` switch, `SameConfig`, manifest and digest fold only when on)

| Id | Change | Constants to rule on | Measures |
|---|---|---|---|
| S1 | Impacts on cover suppress: a round ending in a solid within `impactRadius` of the man's shelter face, on his side of it, counts as a near miss at weight `impactWeight`. | radius 1.5 m; weight 0.15 | near misses per delivered round on covered targets; defender fire rate while under fire |
| S2 | Nerve (pinned hysteresis): a slow variable accumulating while suppression > duck threshold, decaying at `nerveDecay`; while nerve > `pinnedAt` he does not peek, and his first shots after peeking use the suppressed cone. | decay 0.03/s; pinnedAt 0.5 | seconds down per burst; pop-up count per minute |
| S3 | Rounds stack while they keep coming: decay pauses `stackWindow` after each near miss. | 2 s | rifle-group suppression of one position |
| S4 | Gunner compensation: the gunner holds his burst against recoil walk-up (plan 017's open item). | compensation share 0.7 | rounds within 2.2 m of the target per burst at 50/100 m |
| S5 | Release on observed silence (Legacy rule, plan 028): a crossing is released when every known threat overlooking it has not fired for `quietSeconds`, or is under credited fire and quiet; credit alone remains the fallback. | 3 s | covered commits, wounds while displacing, attack score |

## 4. Verification and acceptance

- Fixtures first: H1–H3 each get a pin test on the current build (a gun firing at a man behind a
  0.6 m rim / a 1.15 m wall / a window; rifle group of four at one position; MG burst at 50 and 100 m).
- Measurement on E-1's harness (town and village, 20 maps × 3 seeds, static defence) and E-2's arms,
  then the loop (both lineages), paired against the re-rooted baseline; guards v7 unchanged.
- Symmetry caution: stronger suppression helps the defence as much as the attack; the acceptance
  question is whether **movement under covering fire becomes viable** (wounds while displacing down,
  covered commits up, attack score not down), not whether suppression is higher.
- Jordan's side-by-side videos before any flip; then re-baseline and re-root as for the credit flip.

## 5. Rulings needed from Jordan

1. Proceed with the fixtures for H1–H3 now (measurement only, no behaviour change)?
2. Which of S1–S5 to build, and in what order (overseer's proposal: S1, S2, S3 as one small mechanics
   package; S4 separately; S5 inside the plan 028 re-measurement E-2)?
3. The constants in section 3, or leave them to the implementer with the measures as the check?
4. Whether suppression should also reduce a man's *perception* (a pinned man reports less), which
   touches the knowledge layer and is not proposed by default.

## Authorization (Jordan, 23 September 2026)

Jordan: "I like your suggestions here, when can we implement and test." Applied as: S1–S5 authorized
as switches (off by default), constants as proposed in section 3 unless Jordan objects after the first
measurements; ruling 4 (perception) not taken. Order: fixtures H1–H3 with package **M-S** (S1, S2, S3 in
one mechanics package, Opus 5.5 agent), **M-S4** (gunner compensation) in parallel, **S5** inside the
plan 028 re-measurement (E-2, then a Legacy-rule package if the measurement says the gate is the
lever). Machine: agents together ≤ 8 battles. Evidence: `.local/plan030/`.

## M-S4 result (23 September 2026, agent claude-opus-5-5, `.local/plan030/M-S4/`)

`Config::gunnerCompensation` (`--gunner-compensation`): the gunner holds `0.7 × StatScale(Dex) ×
(1 − 0.5·suppression)` of the recoil he felt after his last round; physical recoil, rifles and the RNG
draw order unchanged; off = identical (40/40, 3/3, 41/41, groups, 202 Python). Burst fixture (400 × 18
rounds): walk-up at round 18 0.90 → 0.27 m at 50 m, 1.81 → 0.54 m at 100 m, 2.71 → 0.81 m at 150 m;
struck 159 → 350 / 57 → 137 / 28 → 70. **Measured on E-1's harness (60 paired battles per family):
lethality, not suppression.** Gun hits per burst +40–55% for both sides; near misses per burst
unchanged (most MG fire is at short range where a walked-up round still passes within 2.2 m);
defender suppression-seconds −8.1 [−15.1, −0.2] on towns, unchanged on villages; attack score −0.013
[−0.051, +0.022] town, **−0.032 [−0.062, −0.003] village**, attacker wins −0.117 on villages (the
defending gun gains as much as the attacking one); friendly fire unchanged; CPU unchanged.
**Recommendation (agent and overseer): keep the switch, do not flip it.** Open: whether the hold
should apply to automatic fire on the move. Maintenance finding: the 12 recorded training replays
predate the credit flip and now fail on the default ("recorded action became illegal"); run them with
`--no-muzzle-credit` or re-record. Patch held for batch integration with M-S.

## M-S result (23 September 2026, agent claude-opus-5-5, `.local/plan030/M-S/`)

Three switches, off by default and byte-identical off (40/40, 3/3, groups, fixtures' parent digests):
`--impact-suppression` (S1), `--nerve` (S2), `--stacked-suppression` (S3); constants in
`SuppressionTable`. **Hypotheses on the unchanged build:** H1 confirmed but small except at windows (a
round stopping in the man's cover within 1.5 m never counts; such rounds are 4% of registered near
misses at a rim, 13% at a wall, 96% at a window sill: the gun's cone at 50 m is about ±4 m); H2 partly
(four rifles keep a covered man above his threshold 10.5 s of 20; no memory: up 4.35 s after a
saturating burst); H3 confirmed (rounds within 2.2 m fall 0.51 → 0.41 at 50 m, 0.21 → 0.10 at 100 m
over an 18-round burst). **Fixtures with the switches:** pop-up after a 5-round burst 4.35 s off, 15.3 s
with nerve, 21.9 s with all three; both sides obey the switches.
**Measured on E-1's harness (840 battles, paired, map-cluster 95%):** no switch meets the acceptance
question. All three together: town attack score **−0.075 [−0.148, −0.014]**, village **−0.099 [−0.183,
−0.028]**, attacker wins −22 to −30 points, wounds while displacing +3.4 to +4.1 per battle, battles
85–130 s longer; nerve pins attackers about twice as many man-seconds as defenders (872 vs 374 on
towns) because attackers move in the open against a sheltered defence; S2 alone is the worst single
switch on villages (a prone man in the open cannot rise while pinned); S3 alone costs attacker wins
on villages (−17 points); **S1 alone is neutral on towns and slightly favourable on villages** (defender
suppression-seconds +19, defender fire rate under fire −0.037, not significant on the attack score).
Covered-station share: no paired change excludes zero. **Recommendation (agent and overseer): keep all
three off.** Worth one cheap measurement: S1 with `impactRadius` 2.2 m (the near-miss radius; would
catch 74 refused window rounds instead of 23). Open readings: "fully suppressed" = 1 (used) or 0.8;
whether nerve should also stop ordered moves (it does not). Conclusion for the plan: the mechanics
S1–S3 are symmetric and punish the mover more than the defender; the remaining levers are S1 at 2.2 m
and the release rule S5, pending E-2. Patches integrated as opt-in switches with M-S4.

## Integration (23 September 2026)

M-S (S1–S3) and M-S4 (S4) merged into the main tree as opt-in switches (all off): source
**321600b6d945e49c**; nine M-S4 hunks hand-merged against M-S (Config block, `SameConfig`, digest folds,
manifest, CLI, test roster). Batch gate: 40/40 parity, full suite (`--suppression`, `--gunner` in the
run), MSVC and Unreal builds; evidence `.local/plan030/integration/`.

## Overnight authorization (Jordan, 23 September 2026, evening)

"Keep going with this without my input for tonight, implement and wire the city maps, I want covering
fire in a happy spot where it is actually useful." Applied as: the overseer proceeds autonomously
tonight within the standing rules (every change a switch; **no default flips without Jordan's video
review**; agents at half the machine; Legacy stays the default). Programme:
1. S1 variant at `impactRadius` 2.2 m (S1b), one arm on E-1's harness.
2. E-2 result → S5 (release on observed silence) as a Legacy-rule switch if the gate is the lever,
   measured on towns, villages and city2.
3. City2: P-1 stair index integrated and the cost re-measured; E-3 = E-1's covered-station and
   covering-fire measurement on city2; a neural baseline binary that reads ARMYMAP 2 for
   `evaluate --family village|city2`; loop root values on the village and city2 attack sets;
   Astra's `MAP_GENERATOR.md` city2 paragraph corrected.
4. "Happy spot": the measure is movement under covering fire becoming viable (covered commits up,
   wounds while displacing down, attack score not down, request→first-round latency down) on all
   three families; candidates are the E-2 arms, S1b, S5 and a bounded parameter sweep of the plan 028
   release constants; the best candidate gets side-by-side videos (town, village, city2) for Jordan's
   morning review. Nothing is promoted tonight.
  Batch gate passed (24 Sep 2026, 00:xx): 40/40, full suite exit 0, MSVC and Unreal builds. Frozen
  ARMYMAP 2 neural baseline: `.local/plan029/baseline/battle-lab` (source 321600b6d945e49c) for
  `evaluate --family village|city2 --expected-baseline 321600b6d945e49c`.

## S1b result (24 September 2026, agent claude-opus-5-5, `.local/plan030/S1b/`)

`Config::impactRadius` (`--impact-radius`, default 1.5; S1 at 1.5 keeps its digests). At 2.2 m S1 counts
about three times as many rounds in the man's cover (window 24 → 86) and keeps a window occupant down
8.9 s of 20 instead of 5.3. On E-1's harness (60 paired battles per family): defender suppression-seconds
+25 (town) and +37 (village), defender fire rate under fire −0.039 on villages; **but the village attack
loses**: attacker wins 55 → 48 of 60 (all seven extra losses are 600 s timeouts with 1–3 defenders still
standing: a pinned defender also survives longer), attack score −0.023 [−0.047, −0.002] against 1.5 m;
towns unchanged in outcome, with attackers sheltering on the approach suppressed more (+45 s) than
defenders (+25 s). Acceptance not met at either radius. **Kept off.** Patch merged as the opt-in
parameter (batch gate with P-1/M-S5).

## M-S5 result (24 September 2026, agent claude-opus-5-5, `.local/plan030/M-S5/`)

**Diagnosis (traces, R arm, 490 requests):** 62% of unanswered covering-fire requests name a threat
that is already down (median 30 s before the request; the track a median of 32 s old), 17% have no
station within 25 m, 8% expire within 2 s, 7% station without a muzzle line, 4% gun moving, 2% gun
engaged. **The leader waits on, and calls fire onto, dead men's tracks.**
**Built (four switches, off, byte-identical off):** `--cover-quiet-release` (S5: a crossing is released
when every known threat overlooking it has not fired for 3 s, or is under credited fire and quiet 1 s;
credit after 8 s as fallback; quiet crossings scored as supported; `lastFireAt` kept across sightings),
`--cover-station-radius <m>` (25 default), `--cover-upper-stations`, `--cover-rifle-base`. Folds 3006–3008.
**Measured (E-2's harness, 1,080 battles):** S5 works as designed (covered commits +7–10 per battle,
support-wait −0.3, overrides gone) **but is score-neutral** (town +0.021 [−0.022, +0.067], natural
village 0.00, concealment-only −0.033 n.s.) and each released crossing costs about one more mover per
battle (movers lost per exposed commit 0.03 → 0.11; wounds while displacing +0.05 on natural villages).
Radius 40 raises the covered-station share (town 14 → 21%, village 24 → 35%) with no outcome change;
upper stations change nothing (the last-resort search already chose those windows); rifle base answers
1.5–2.8 more requests with no outcome change. **No arm meets the acceptance measures. All four kept
off.** Integrated as opt-in switches (batch gate below). **Next lever, needing Jordan's ruling:** retire
or weaken a track when the man was seen to fall (knowledge layer, K-1), then re-run S5 on it.
  M-S5 integration: source 2a62392bc577ad80 failed the Unreal build (MSVC C4456: `quiet` redeclared in
  `ManeuverSim.cpp`); renamed the inner local to `crossingQuiet`, source **c85b82c17112c156**; batch gate
  re-run in `.local/plan030/integration-3/`.
  Batch gate on c85b82c17112c156 (`.local/plan030/integration-3/`): 40/40, full suite exit 0, MSVC and
  Unreal builds pass.

## K-1 result (24 September 2026, agent claude-opus-5-5, `.local/plan030/K-1/`)

`Config::retireFallen` (`--retire-fallen`, Legacy only, off = byte-identical): a soldier who had an
enemy in sight and sees him go out of action marks the contact `seenDown` (sight only; never hidden
state); the flag travels on the existing report paths; the leader's `WithoutFallen` view feeds the
commit gate, quiet release, `support_wait`, requests, bound gates and flank danger checks; live requests
on a man known down are withdrawn; a running bound overlooked only by fallen men is released
(`release: "fallen"`). **It does its job:** requests naming an already-down threat fall from 40–46% to
20–25% in every family (the rest are men nobody in the squad saw fall), the answered share rises
+0.09 to +0.20, support-wait −0.07 to −0.13, override commits −0.7 to −1.6 per battle. **Attack score
unchanged** (town +0.006, village +0.005, concealment-only +0.025 [−0.002, +0.062], W/L 43/17 → 47/13);
with the quiet release on natural villages it takes back part of S5's mover cost (−0.47 movers lost on
bounds per battle). Acceptance not met (covered commits fall because crossings watched only by dead
men are no longer "covered"; wounds while displacing not down). **Recommendation: a correctness fix
worth flipping with Jordan's approval (it changes Legacy on every family; re-baseline), and mandatory
alongside S5 if S5 is ever flipped.** Integrated as an opt-in switch: source **f628c0e25140e6fa**, batch
gate `.local/plan030/integration-4/`.
  Batch gate on f628c0e25140e6fa (`.local/plan030/integration-4/`): 40/40, full suite exit 0, MSVC and
  Unreal builds pass. Overnight run complete; machine idle. Morning summary:
  `docs/AI_SESSION_HANDOFF_2026-09-24.md`.

## Jordan's suppression design and rulings (24 September 2026, night)

1. One rifleman never suppresses another (the threshold stays where a single rifle cannot reach it);
   two-on-one pins him, but a pinned man still gets a shot out now and then (graded peek, not a hard duck).
2. Rounds striking his cover do nothing while he is not suppressed; once he is at the "does not want
   to come out" level, further hits on his cover keep him there.
3. A pinned man puts a small fixed suppression effect (about 0.10) on the men near him; not a spreading pin.
4. **Constants are found by measurement, not fixed by hand:** "that 10% can remain fluid": the agent
   sweeps each constant (the neighbour effect, the peek curve, the cover-impact weight) and reports
   whether changing it changes anything.
5. Overseer's addition, accepted in discussion: a covering-fire request names the whole set of threats
   overlooking the crossing and the gun works it as a sector (burst on each, loudest first), the rifle
   group's covering pair taking the nearer ones. Package M-S7.

## M-S6 result: does covering fire do anything? (24 September 2026, agent claude-opus-5-5, `.local/plan030/M-S6/`)

`Config::noCoveringFire` (`--no-covering-fire`, Legacy only, off = byte-identical): no support-wait, no
override, no requests; guns and riflemen still shoot at what they see. **On villages and city2, meeting
battles (360 s):** one side without covering fire against a side with it, both orientations, 240
battles: exchange −0.009 [−0.035, +0.018], win share unchanged (0.475 → 0.479); both sides without:
exchange +0.016 [−0.029, +0.057]. What switching it off changes: squads stop waiting (support-wait
0.38 → 0), crossings run (+1.3 exposed commits), each side loses about one more mover on bounds per
battle, wounds while displacing +0.033, orders/min −4 to −9, CPU −1.1 s. Static-defence control: attack
score −0.019 [−0.050, +0.011]. Retire-fallen and the quiet-release stack do not beat default in meeting
battles either (QK is bloodier: casualties +0.033). Background (towns, completed before the ruling):
the only family where losing covering fire costs a side measurably, and little (exchange −0.037
[−0.070, −0.002]). **Plain reading: on the new families, waiting for and calling for covering fire buys
nothing and costs nothing in meeting battles; the men it saves on crossings are offset by the time
spent waiting.** The switch is integrated as an opt-in (batch gate with M-S7/G-6).

## M-S7 result: Jordan's suppression design + sector fire (24 September 2026, agent claude-opus-5-5, `.local/plan030/M-S7/`)

Four switches with CLI constants (`--graded-peek --peek-floor --peek-curve`, `--keep-down
--keep-down-weight --keep-down-grace`, `--pinned-neighbours --neighbour-effect`, `--cover-sector`), off
= byte-identical (40/40; 90 s digest = parent with any constant). Fixtures: rule 1 holds for near misses
(one rifle never pins; two rifles do in 6/6) but a *hit* pins at once; graded peek gets a pinned man 12
rounds off instead of 5, at the cost of 9.4 → 13.1 s above threshold (total rounds unchanged);
keep-down counts far fewer cover rounds than S1 (it needs the man already pinned); sector requests
carry 3.4–3.8 threats but the gun fires on two or more of them in only 3–12% of requests (the M-S5
supply limit). **Measured (V, C, city2 attacks; village/city2 meeting battles; 3,360 battles): no arm
meets the acceptance measures**; full stack vs baseline attack score V −0.026, C −0.030, city2 −0.003
(n.s.), wounds while displacing up with the covering stack; sector fire makes concealment-only villages
worse (−0.049) and raises support-wait 0.07–0.12 everywhere. **Closest:** P1+P2+P3 on city2, W/L 45/15 →
53/7 (+0.133, significant), defenders out +0.22, attack score +0.014 n.s.; keep-down alone on city2
W/L → 52/8. Meeting battles: nothing changes the exchange. **Constant sweeps (Jordan's rule 4):**
neighbour effect 0.05/0.10/0.20: no consistent change; keep-down weight 0.10/0.15/0.25: no; peek floor
0.05/0.15/0.30 and curve 1/2/4: secondary measures only (more peeking = pinned defenders survive more,
attackers wounded less while displacing), attack score never. **All four kept off**; merged as opt-ins,
source **7b19e6f17daf5a37**; batch gate `.local/plan030/integration-5/`. The loop roots stay on
2730fe73fadce803 (digests identical with every switch off).
  Source 7b19e6f17daf5a37 failed the Unreal build (MSVC C4456: `range` redeclared in `ManeuverSim.cpp`,
  M-S7's sector code); renamed to `slotRange`, source **a8e46ca6b2bfffd5**; gates re-run in
  `.local/plan030/integration-6/`.
  Final gate on a8e46ca6b2bfffd5 (interrupted by the WSL crash, re-run 24 Sep 2026 afternoon,
  `.local/plan030/integration-6/`): 40/40, 3/3, full suite exit 0 (873 s). Raw output deleted.

## E-6: covering fire with a gun in every squad (24 September 2026, agent claude-opus-5-5, `.local/plan030/E-6/`)

New baseline (ee42cd0a80c00dac: a gun in every squad; muzzle credit, concealment, prone, vaulting and
retire-fallen on). Pre-registered, fresh draw of 15 village + 15 city2 maps × 3 seeds, 540 battles.
**Hypothesis not supported:** the side without covering fire vs the same side in the baseline, both
orientations pooled (180 battles): exchange −0.007 [−0.035, +0.021], win share +0.000 [−0.056, +0.061]
(one-gun M-S6: −0.009). Switching it off still changes how squads fight (no support-wait, ~0.8 more movers
lost on bounds per battle, wounds while displacing +0.02–0.03), not who wins. Village lead, not established:
own casualties +0.029, draws turn into losses, exchange −0.030 [−0.065, +0.008]; city2 leans the other way.
Static attack control: −0.005 [−0.024, +0.014]. Not measured: the opt-in request/report/gun-aim form.
New finding: on the new baseline Azure wins 63/6/21 meeting battles (city2 35/1/9, 12 of 15 maps), against
a roughly even split on the one-gun baseline; diagnosed in E-6b.
**E-6b (overseer, same 30 maps × 3 seeds, meeting, `.local/plan030/E-6b/`, 270 battles, raw output
deleted):** Azure win share with the old defaults 0.561 (village 23/0/22, city2 27/1/17); guns only 0.650
(+0.089 [−0.050, +0.217]); switches only 0.711 (+0.150 [−0.017, +0.300]); both (the new baseline) 0.733
(+0.172 [+0.011, +0.317]). Both changes push the same way and neither alone is significant: the new
mechanics amplify an edge Azure already had on these maps rather than one switch misbehaving. Not yet
separated: map side (Azure always deploys west) from simulation order (Azure's soldiers are updated
first); a mirrored-map test would separate them.
**E-6b mirror test (overseer, `.local/plan030/E-6b/`: `mirror_army.py` flips every map left-to-right and
swaps the teams' spawn records, so Azure still deploys west but faces the terrain Ember had; mirroring twice
returns each file exactly up to "-0"; all 30 mirrored maps pass the native import checks exactly as their
originals do). 180 more battles, raw output deleted.** New baseline: Azure win share 0.733 on the original
maps, 0.567 mirrored: **team edge with the terrain cancelled 0.650 [0.600, 0.706]**, map-side edge +0.083
[−0.025, +0.186] (village 0.600, city2 0.700). Old defaults: original 0.561, mirrored 0.578: team edge 0.569
[0.506, 0.631], map-side −0.008 [−0.092, +0.075]. **The maps are fair; the simulation favours Azure
regardless of terrain, slightly with the old defaults and clearly with the new ones.** Candidates, not
tested: update order (Azure's soldiers act first each tick) and team-dependent behaviour (Azure's approach
setting). Side note: city2 maps 262268 and 585845 each have one staircase the native import check cannot
route through, in the original and mirrored form alike; the single-file check prints it but exits 0.
**E-6c to E-6f, Azure's edge found (overseer, same 30 maps and mirrors, seeds 107-109, lean, untraced, raw
output deleted; rows in `.local/plan030/E-6c`, `E-6d`, `E-6e`).** Update order is not it: a scratch build
where Ember's soldiers and squads act first (`--ember-first`) gave 0.628 on the original maps (90) and 0.639
with a fresh roster per battle (180), against 0.575 Azure-first. The standing roster is part of it: a fresh
roster every battle takes the team edge from 0.650 to 0.575 (Azure's standing soldiers happen to be better;
a property of the roster, not a bug). With identical soldiers man for man (`--equal-troops`, scratch) Azure
still won 0.594 (104/6/70 of 180), fired 1,993 rounds to Ember's 1,744 at the same accuracy (0.033/0.034)
and fired first in 104 of 180. **Cause: the no-contact search lanes** (`CommandSim.cpp`, `sector()`)
mirror Ember's lanes, correct on the authored maps where Ember spawns mirrored, but the generator spawns
both teams in the same lateral order, so every Ember squad first crossed to the far lane (squads 4-7 sent
to y 72, 24, -24, -72 from spawns at -82.5, -30.5, 21.5, 73.5). With the lane taken from the team's spawn
order, the same 180 equal-troops battles: Azure 0.478 (82/8/90), rounds 1,947 / 1,910, fires first 89.
Made the default as `Config::spawnLanes` (24 Sep 2026; battle_cli and the game on, `--no-spawn-lanes` /
`-ArmyNoSpawnLanes` restore, `Config{}` off for the fixtures; imported maps only, not folded into the
digest). Source `5ab0c846380f6623`; checks: new group `--spawn-lanes`, 40/40 lean parity unchanged
(authored maps), main binary equal to the measured scratch fix digest for digest on 4 generated battles,
Unreal build. Every earlier village/city2 measurement carried the bias in both arms; paired results stand.

## W-1: why covering fire does not work (24 September 2026, overseer, `.local/plan030/why/`)

Jordan: "I think we have a fundamental problem in the game right now that covering fire doesn't work
with … maybe soldiers move too slow … maybe they should sprint … the machine gunners … maybe they're
too slow, the other soldiers react too fast … we gotta figure this out." Method: the covering-fire chain
measured from observer facts (who could see whom, suppression, positions, every round; never a decision
input) in traced battles on the 30 E-6 maps, seed 107: meeting 360 s (M) and static attack 600 s, 12
defenders (S), 60 battles per arm, source `5ab0c846380f6623`; experiments as switches in a scratch build
(`bin/battle-lab-why`, knobs off = the lab digest for digest). `chain.py`, `run.py`, `pool.py`,
`compare.py`; rows kept, raw output deleted per battle. Mechanics numbers from a code survey (agent
claude-opus-5-5), spot-checked. Figures are M / S.

**Suppression works when it lands.** Pinned men fire 0.29 / 0.18 rounds/s against 1.36 / 1.14 unsuppressed
and fire at a newly seen mover 0–1% of the time against 16–23%. A moving man whose every watcher is pinned
is hit 1.47 / 2.11 times per 100 exposed seconds against 5.14 / 6.73 when none is (about −70%).

**It almost never lands on the men who threaten the movers.** A man moving in view of the enemy (897 / 303
man-seconds per battle, 2.1 / 1.5 watchers): every watcher pinned 3.5% / 8.9% of that time, none 90% /
87%; no watcher even under fire from the mover's side 53% / 50%. His squad's gun: silent 69% / 80%, firing
at one of his watchers 3.5% / 2.4%, standing still with a line to one of them 7% / 5%. When it is silent the
gun is itself moving 72–77% of the time, 71–73% of it walking to an overwatch position. Knowledge is not
the gap: 88–89% of the watchers had been in a line of sight of another man of the mover's side in the
previous 10 s.

**The gun is not a base of fire; it chases the rifle group.** Gunner time: moving 39% / 38%, no enemy in
view 25% / 38%, firing 12% / 7%. Overwatch assignments per gun per battle 8.1 / 4.6, held 18 / 31 s; 44% /
54% are replaced before he gets there (by Hold 63% / 29%, Rally 24% / 51%); he fires in 39% / 22% of
them; order to first round 7.7 / 36 s on average. 70% / 82% of his squadmates' exposed movement during an
assignment happens before its first round. Code: the station is recomputed at every plan from the rifle
group's current centre (within 60 m), protected from every known enemy within 80 m (the fallback search:
every enemy known in 120 s) and bearing on the nearest known enemy, so every group move re-sites the gun;
nobody tells the gun which enemy threatens a crossing (`coverRequests` off), it fires at its own nearest
sighting of the last 6 s; the leader's gate credits rounds on his own "primary" enemy. Formal bounds are
under 2% of exposed movement: flanking 23–25%, repositioning on Hold 15–24%, moving to overwatch 14%,
advancing 13–14%, rear guard 13–14%, lanes and windows 8–12%, none of them with a covering step.

**Secondary.** The gun suppresses poorly: 103 / 69 rounds per enemy hit (rifles 17 / 12), 21–26% of its
rounds register a near miss on the man aimed at; a burst (12.7 rounds, one every ~15 s per gun) pins its
target 57% / 63% of the time, for 3.5 / 4.1 s after it ends (cone ±4 m at 50 m, recoil walk-up 0.9–1.8 m).
Below the duck line suppression changes accuracy little: suppressed-but-not-pinned shooters hit movers
4–6%, like fresh ones. Engagements are all inside 100 m (rifle sight 70 m, gun 95 m, hard cut-offs,
detection instant and certain); 51% / 57% of the rounds at moving men are fired at tracks without a line
(0.5–0.8% hit).

**Jordan's candidate causes, tested (M / S, against the same 60 battles):**
- Orders instant (0.75 s per hop → 0): chain unchanged (gun still moving 39%, silent 70% / 76%).
- Gunner sprints to his overwatch position: unchanged (his stamina lasts ~6 s).
- Every mover sprints every move of 4 m or more: exposed runs 1.73 → 1.82 s, hits per exposed second
  unchanged (men already move at 3.15 m/s in runs of 1.4–1.7 s; stamina lasts ~8 s).
- Enemies react slower (aim time ×3: first round at a new mover 1.5 → 2.7 s): movers hit 33–36% less
  per exposed second, for both sides; the covering chain unchanged. Reaction speed protects movement by
  itself; it does not create covering fire.
Not the cause either: the gun's must-move flag never clears in Legacy (a real defect: the clear at
`ManeuverSim.cpp:558` runs on a copy that `PlanSim.cpp:69` discards; only a new gunner clears it) — fixed in
the scratch build, chain unchanged; the whole plan 028/030 covering stack (requests, reports, gun aim,
sector, quiet release) with that fix: gun on a watcher 3.5 → 4.3% / 2.4 → 3.3%; riflemen holding their
ordinary moves while their gun walks: gun on a watcher 6.0% / 5.7%, still with a line to one 14% / 12%,
exposed movement −17% / −30%, hits per battle −12% / −9%, attack wins 83 → 60% (slower), movers' hits per
exposed second unchanged; plus the gun accepting exposure (no every-enemy protection) and aiming at the
named threat: no further gain.

**Answer.** Covering fire fails at delivery, not at effect. The squad never fights as base of fire plus
movement: its gun is re-sited from the rifle group's position at every plan and spends its time walking;
it shoots its own nearest target; the riflemen move on the squad's plan whether or not anyone is firing on
the men watching them, and most of their exposed movement is not a covered bound at all. No timing value
(orders, pace, sprint) changes that; slower enemy reaction would make movement cheaper on its own. What
would have to exist is a squad fire-and-movement drill: the gun sets first on ground that overlooks the
next rush and fires on the men watching it, the riflemen rush short cover-to-cover legs only while those
men are down, and the gun stays until they are set, then displaces under their cover. That is a design
decision for Jordan (with the gun's siting rule, its target choice and the suppression mechanics as the
parts to rule on); nothing is changed by default.

**History against the game** (sourced sheet: [030-w1-history-sources.md](030-w1-history-sources.md), research
agent claude-opus-5-5; primary sources where marked high). Doctrine made fire the condition of movement: a
rush only "when the remainder of the line is firing vigorously" (US IDR 1911 ¶312 = IDR AEF 1918 ¶407); SS
143 (Feb 1917): the Lewis gun fires "traversing fire on the point of resistance from the nearest cover"
while riflemen and bombers take the flank "without halting". The game has no such link (above). Pace and
reaction are not out of line: WW1 rushes ≤ 80 m "to leave the enemy no time to fire", modern 3–5 s; the
game's men are exposed 1.4–1.7 s at a time; an alert range shooter needs 1.34–1.62 s for a first aimed
shot, the game's riflemen 1.0–1.5 s (range speed, no combat degradation). The machine gun is badly
under-powered: historically about 9 riflemen (Rowland; 30–60 in the US 1917 manual), in the game about 1.7
by hits (M: 2.9 enemy hits per gun per battle against 1.7 per rifleman); combat rifle fire fell to ~1/10 of
trial effectiveness while MG fire kept 15–25% (Rowland 1989), so the gun dominated; the game's gun spreads
±0.080 rad (±4 m at 50 m) where a WW1 tripod gun put 75% of its rounds in 0.8 yd at 500 yd (about ±0.8 mrad;
no figure found for bipod light guns). Suppression: the 2.2 m near-miss radius matches 5.56 mm (1–3 m for
50%), is below 7.62 mm (~6 m, low confidence) and far below .50 (~25 m); the game's ~3.5 s pin matches the
shortest model (Huggins: 3.6 s + 0.6 s per further round), others say "tens of seconds"; in trials burst
interval mattered (4 s beat 12 s) and burst length did not, random spread beat systematic fire. Not found:
rounds per casualty, time to bring a light gun into action, platoon reaction time, any study of attacks
with and without small-arms covering fire. Engagements: 80% of effective WWII small-arms fire under 200 yd,
90% under 300 yd; the game's all inside 100 m (70 m rifle sight).
