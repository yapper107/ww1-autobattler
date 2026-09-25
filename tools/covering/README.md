# Covering-fire measurement (plan 030 W-1, plan 031)

These tools measure the covering-fire chain and paired outcomes on the 30 E-6 maps (15 village and 15
city2; seeds in `e6_draw.json`). Results are written to `.local/covering/`, which is outside Git. Raw battle
output is deleted as soon as each row is written.

| Script | What it does |
|---|---|
| `make_maps.py [JOBS]` | Rebuilds the 30 maps into `.local/plan030/E-6/maps/` and checks them against `e6_maps.sha256` (generator `b4b635355d181df4`). Run it first on a fresh machine. |
| `chain.py RUN_DIR` | Analyses one traced battle and prints one row of summable counts. |
| `run.py ARMS JOBS [--binary=PATH] [flags…]` | Runs 60 traced battles per pair of arms, then analyses and deletes each one. |
| `pool.py ARM…` / `pool.py guns ARM…` | Prints the full chain for an arm. |
| `compare.py ARMS LABELS` | Prints the headline chain measures side by side. |
| `outcome.py BINARY ARMS SEEDS JOBS [flags…]` | Runs untraced paired outcome battles. |
| `analyse.py` | Paired outcome deltas with map-cluster 95% intervals. |

**Arms in `run.py`.** A name starting with `M` is a meeting battle (360 s). A name starting with `S` is a
static attack (600 s, 12 defenders, E-6 layouts). Examples of `run.py` flags: `--fire-and-movement both`,
`--no-covering-fire`.

**Arms in `outcome.py`:**

| Arm | Battle | Drill |
|---|---|---|
| `N` | Meeting | None |
| `A` | Meeting | Azure only |
| `E` | Meeting | Ember only |
| `SN` | Static attack | None |
| `SA` | Static attack | Attacker (Azure) only |

**The chain rows** hold, for each battle:

| Field | What it holds |
|---|---|
| `exposure` | Moving in an enemy's line of sight, broken down by task. |
| `cover` / `underfire` / `unpinned` | The mover's watchers: whether they are pinned, whether they are under fire. |
| `mgcover` | His own squad gun: firing at a watcher, silent, moving, has a line. |
| `timeline` | Overwatch assignments: travel time, first round, whether they were never set. |
| `shooters` / `reaction` | Who fires at movers, and how fast. |
| `effect` | Fire rate and hit rate by the shooter's own suppression. |
| `area` | Pins from machine-gun bursts. |
| `lethality` | Rounds, hits and casualties. |

**Observer facts** (who could see whom) are used only to measure. They are never an input to any decision.

**Baselines on a fresh machine.** Rebuild the lab binary with `scripts/battle-lab.sh --version`. Then run:
- `python3 tools/covering/run.py M,S 12` (the chain baseline, about 75 s);
- `python3 tools/covering/outcome.py .local/lab/battle-lab N,SN 107,108 12`.

Findings are recorded in `plans/030-suppression-mechanics.md` (W-1) and
`plans/031-fire-and-movement.md`.
