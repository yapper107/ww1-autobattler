# Plan 031 — Fire and movement: making covering fire happen

Written 24 September 2026 by the overseer (claude-opus-5-5) after W-1 ([plan 030](030-suppression-mechanics.md),
"W-1"; sources [030-w1-history-sources.md](030-w1-history-sources.md)).

## Why

W-1 measured the covering-fire chain in 60 traced battles per arm. Suppression works when it lands: a man
moving while every enemy watching him is pinned is hit about 70% less, and pinned men fire about 80% less.
It almost never lands. While a man moves in view of the enemy, his squad's gun is firing on one of the men
watching him 2–4% of the time and is standing still with a line to one of them 5–7% of the time. The gun
is re-sited from the rifle group's position at every plan and spends about 39% of its time walking; 44–54%
of its overwatch positions are never reached. It fires at its own nearest sighting, and the riflemen move
on the squad's plan whether or not anyone is firing. Formal bounds are under 2% of exposed movement.
Orders, pace and sprinting are not the cause.

History: fire was the condition of movement. A rush was made only "when the remainder of the line is
firing vigorously" (US IDR 1911/1918), and in SS 143 (1917) the Lewis gun fires on the strong point from
the nearest cover while the riflemen and bombers work round the flank.

## Authorization (Jordan, 24 September 2026)

"Yeah, let's do it … Just start it up and let's do this thing." The three changes below were proposed in
answer to "Give me your three changes."

Jordan's note on the gun: "it's probably an exaggeration that a machine gunner was worth nine riflemen. The
machine gunner did need support because nine riflemen can take out a machine gunner." Applied as follows.
Stage G does not aim at a gun worth nine rifles. The gun becomes a support weapon that suppresses well and
needs riflemen around it, and its value is calibrated modestly by measurement.

Standing law applies:
- Every change is a `Config` switch, off by default, byte-identical when off (`SameConfig`, a manifest key,
  a digest fold only when on, a CLI flag, `rerun_battle.py`).
- Legacy only.
- Knowledge boundary: decisions use tracks and reports, never observer facts.
- Constants are found by measurement (Jordan's rule 4).
- Per-case fixes are refused.
- No default changes without Jordan's side-by-side videos.
- Tests take 5–10 minutes each.
- Opus 5.5 agents implement; the overseer measures and integrates.

## The three changes

### Stage D — the squad fire-and-movement drill (`Config::fireAndMovement`, per team)

While in contact, every deliberate move of the rifle group is made under the fire of a base of fire.
Deliberate moves are flank, advance, bound, clear-lane and platoon-ordered repositions.

1. **Legs.** The move is cut into short cover-to-cover rushes (about 10–20 m, constant measured). At the
   end of each leg the men get down: behind cover if it is there, otherwise crouched or prone.
2. **Leg threats.** These are the known enemies (the leader's tracks) that overlook the next leg.
3. **Base of fire.** The gun takes a station that bears on the leg threats. It prefers cover from them, but
   it does not demand protection from every known enemy. It keeps that station while it still bears. The
   must-move flag defect found in W-1 does not apply while the drill is on.
4. **Fire on the right men.** The gun's order carries the leg threats as its sector. It fires on the ones
   it can see, then at their last known places.
5. **The gate.** A leg starts only when the gun is set and has fired on a leg threat within the last few
   seconds. The riflemen know their own gun is firing; this is local perception with no report delay, and
   the knowledge assumption is written down. If the fire stops, the men finish the rush, get down and
   wait. A deadline falls back to Legacy behaviour so that nothing deadlocks.
6. **Leapfrog.** When the gun can no longer bear on the next leg, the riflemen hold at the leg end and fire
   on what they see while the gun displaces (sprinting allowed). The legs then resume.
7. **Emergency moves are never gated.** These are cover-seeking under fire, pull-back and retreat.

### Stage G — the gun as a real support weapon

The constants in this stage are found by measurement.

- **Spread.** The gun gets a bipod spread when set. The present ±0.080 rad (±4 m at 50 m) is kept only for
  fire on the move.
- **Fire pattern.** Short bursts at a steady cadence, spread across the sector's threats. This replaces
  18-round bursts at one point or silence. In the trials the interval between bursts mattered, the burst
  length did not, and random spread beat systematic fire.
- **Suppression radius by weapon.** Today every round uses 2.2 m. Full-power rounds and the gun should
  reach further.
- **Calibration.** The gun should be a support weapon that needs its riflemen, not a nine-rifle
  equivalent (Jordan's note above).

### Stage S — suppression that matters

The plan 030 mechanics are re-measured on top of D (and G). They are all still in the code, off by
default:
- Jordan's graded peek, keep-down and pinned neighbours.
- Nerve and stacked suppression, so that sustained fire holds a man for longer (the sources say up to
  "tens of seconds").
- Impact suppression.

They were judged against a game in which covering fire was not delivered. There the added suppression fell
mainly on attackers moving in the open.

Added here: a graded loss of accuracy under fire below the pin line. W-1 found that a suppressed man who
is not pinned hits movers as well as a fresh one does, whereas trials measured a 44–61% loss of useful
output under fire.

## Measures (the W-1 harness, `.local/plan030/why/`)

**Delivery.** While a man moves in view of the enemy:

| Measure | Baseline, M / S |
|---|---|
| His squad's gun firing on one of his watchers | 3.5% / 2.4% |
| Gun still with a line to one of his watchers | 7% / 5% |
| Every watcher pinned | 3.5% / 8.9% |
| Share of the gun's time spent walking | 39% / 38% |
| Overwatch stations never reached | 44% / 54% |

**Effect.** Mover hits per 100 exposed seconds, baseline 5.1 / 6.3, and wounds while displacing.

**Outcome.**
- Static attack, Azure attacking: wins, attackers lost, time.
- Meeting battles with the drill on one side only (both orientations): that side's exchange and win share.

**Guards.** Friendly fire, orders per minute, stragglers and idle exposure do not worsen.

A stage passes when delivery rises materially, the movers' hits fall, and outcomes are not worse. Jordan
then sees side-by-side videos.

## Sequencing

1. **D.** An Opus 5.5 agent in a private copy delivers a patch and a report. The overseer integrates and
   measures: 60 traced battles for the chain, then a paired outcome set of at most ~200 battles.
2. **G.** Built on D.
3. **S.** The switches re-measured on D + G, sweeping constants per rule 4.

## Stage D result (24 September 2026, agent claude-opus-5-5, `.local/plan031/D/`, REPORT.md)

**Build.** The drill was built as specified: legs, leg threats, base of fire, sector fire, the gate and
leapfrog through the station rules. It ran as `--fire-and-movement both|azure|ember` with `--fm-leg`,
`--fm-fire-window` and `--fm-deadline`, on source `c945628c9538efbe` (16 files, +982/−29).

**Gates run:**
- Off is byte-identical: 40/40 parity, and 6 generated maps equal to the lab.
- The `--fire-movement` group passes.
- Not yet run: MSVC, Unreal and the full suite.

**The drill works where it applies, but it applies to too little.**
- A drilled move is covered 30% (M) and 40% (S) of the time, against 2–4% for baseline moves.
- Drilled moves are only 7% of exposed movement. Total coverage therefore moves only from 3.5% to 4.8%
  (M) and from 2.4% to 4.9% (S), and movers are not safer.

**Where the uncovered time comes from**, ranked (agent's analysis on 8 maps; figures M / S):

| Rank | Source | Share |
|---|---|---|
| 1 | Emergency cover runs, which were exempt | 32% / 25% |
| 2 | The gun's own moves | 17% / 17% |
| 3 | Gate fallbacks | 15% / 11% |
| 4 | Moves outside the drill | 12% / 23% |
| 5 | Squads whose gunner is down | 12% / 16% |

- **Emergency cover runs.** 66% (M) and 41% (S) of them are made while the man is not under fire: he is
  standing in the open, sees an enemy and runs up to 35 m for cover.
- **The gun's own moves.** A drill station bears on the threats and is therefore in their view, so his
  emergency runs doubled.
- **Gate fallbacks.** The 20 s deadline is hit because the gun is still walking to its station (44% of
  waiting time in M, 54% in S) or is set but has no named threat in sight (27%).
- **Moves outside the drill.** The leader does not know the watchers.
- **The gun firing elsewhere.** It works its threats one burst each, so the man watching the current rush
  is under fire only 30–40% of the time.
- **Not the cause:** plan re-tasking of the gun, or stale threats.

**Outcome** (overseer, paired, untraced, on the E-6 maps with seeds 107–108; `.local/plan031/measure/`):
- Meeting battles, drill on one side, 120 pairs:
  - exchange +0.003 [−0.041, +0.047];
  - win share −0.029 [−0.096, +0.037].
- Static attack, drill for the attacker, 60 pairs:
  - wins −0.07 [−0.17, +0.03] against a baseline of 0.85;
  - attackers lost +1.12 [−0.20, +2.63];
  - duration +38 s [+9, +68].
- Acceptance is not met. The patch is not integrated; it is the base for D2.

**Proposed D2, for Jordan's ruling:**
- "Get down, don't run": a man in the open who sees an enemy but is not under fire drops, or dashes only
  to cover a few metres away.
- The gun holds the men watching the current rush for the whole rush (G's first piece).
- The No. 2 takes over the gun when the gunner falls.
- Drill stations that give the gunner cover he can fire over.

## Jordan's rulings on D2 (24 September 2026, evening)

1. **"Get down, don't run."** Jordan asked whether the 35 m emergency sprint is actually bad, or whether
   those runs could simply be left out of the statistics.
   - Answer: yes, they can be left out of the coverage statistic, and the drill's own coverage is now
     reported on the moves it governs.
   - But they cost men either way. In W-1, exposed runs of 6–20 s were hit 30–44% of the time, and
     movement under Hold had the highest hazard. Two-thirds of these runs start with nobody firing at the
     man.
   - Whether dropping in place beats running is not known, so this becomes its own switch and is
     measured. Jordan: "ok that sounds good".
2. **The gun holds the men watching the current rush, for the whole rush.** Approved.
   - During a rush the gun fires only on the one or two enemies who can see the men moving, in short bursts
     on a steady beat.
   - The other threats wait until the rush ends.
   - The riflemen go when the gun has their watchers under fire.
   - This is the first piece of Stage G.
3. **The No. 2 takes over the gun when the gunner falls.** Later.
4. **Drill stations with cover the gunner fires over.** Approved ("sounds good").

**Integration.** Stage D is integrated as an opt-in switch, the base for D2.
- It is off by default and byte-identical when off. Source `c945628c9538efbe`.
- Gates: 40/40 parity, the `--fire-movement` group, the full suite and the Unreal build. MSVC's two
  shadowing warnings predate it.

**Tools.** The measurement tools moved to [tools/covering/](../tools/covering/README.md): the W-1 chain,
paired outcomes, and a map rebuild checked against the E-6 hashes.

**Next.** A D2 package (Opus 5.5 agent): items 2 and 4, plus item 1 as a separate switch. It is measured on
the same harness.
