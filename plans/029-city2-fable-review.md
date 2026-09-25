# City2 geometry review — Claude Fable 5.1, 23 September 2026

Answer to Astra's [consultation request](029-city2-fable-request.md). Attribution, stated plainly:
this is written by `claude-fable-5-1` in the plan 029 overseer session (the same model the launcher
targets), because the launcher call timed out at 240 s without a response. It is a read-only
structural review of the [report](029-city2-astra-report.md) and the generator against the
simulator's actual contract (`ImportedMap.h`, `BattleSim.h`, `CoordinationSim.cpp`,
`TrafficSim.cpp`, `EnvironmentSim.cpp`). No art judgement; that is Jordan's.

## Findings on the hazards Astra named

1. **Multi-part `B` footprints and window teams.** The simulator's `Building` is one axis-aligned box
   with a contiguous obstacle range (`firstObstacle`, `obstacleCount`) and its own floors. Window
   teams (`CoordinationSim.cpp` ~287–313) choose windows per building, two per squad. Giving each
   wing its own `B` is the right representation: a U-court is three buildings to the AI, and a squad
   may well post its two window men on two wings of one house, which is acceptable. Two hazards:
   - The `B` cap is 128 and the report's maps carry 109–115 parts; the sweep's maximum is not
     reported. Add a generator check at ≤ 120 with a "merge or drop the smallest wing" repair, or
     the first seed over the cap is refused at import after passing the validator.
   - Each `B` needs its obstacles contiguous in the file. Interleaving wing walls with a shared party
     wall breaks the range: emit each wing's boxes as a block, party wall included in exactly one.

2. **Party walls.** A shared wall box can belong to only one building's range. The other wing then
   has a footprint whose edge is a wall it does not own. That is harmless for bullets, sight and cover
   (those read obstacles, not buildings), but two places read the footprint: the upper-floor
   endpoint search prunes by building on level ≥ 1 (`FindLinkedSurfacePath`, F-B), and window teams
   sample windows from `Building::half`. Make the non-owning wing's `B` half-extents stop at the
   party wall's inner face, so its "windows" are never sampled on the shared wall and its upper floor
   does not claim the neighbour's stairwell. Verify with the probe: a `PROT` from inside wing A
   through the party wall to a threat in wing B must be protected at all three stances.

3. **Stair and floor ownership.** `S kind 2` carries `building`; the importer rejects an upper floor
   with no reachable stair. With one stair per upper wing this holds. Two adjoining upper floors do
   not connect unless a `P` passage exists at 3.2 m (the record allows a z); if a terrace's upper
   floors are meant to communicate, emit those passages, otherwise the AI treats each upper floor as
   its own dead end, which is realistic for separate houses and wrong for one house with two wings.
   Slabs (`building && !blocksMovement`) must cover exactly the owning wing's footprint; a slab
   overhanging a neighbouring wing that has no upper floor creates a `Supported` surface with no
   walls around it, i.e. a walkable ledge on the neighbour's roof.

4. **Stepped frontages, 1 m steps and clearance.** Recesses narrower than about 1.2 m are dead to
   navigation (the walkability pad is 0.46 m each side) but alive to the cover catalogue, which
   samples every face: each recess yields cover slots that no man can reach, and the catalogue is
   already 6,500–6,600 positions on these maps (village ~3,000). Either fill recesses under 1.2 m
   (the corner fill already used) or make the catalogue prune unreachable slots; the former is
   cheaper and keeps the catalogue honest. Alleys of 3 m are fine; keep crater rims (non-blocking)
   out of alleys anyway, since a rim in an alley makes the cover-and-route search noisier for no
   tactical gain.

5. **Shared refactor preservation.** Village bytes preserved and pinned (`baseline/golden.json`) is
   the right proof; make that comparison a test in `tests/test_mapgen.py` rather than a file in
   `.local/`, so a later shared change cannot silently move the village. The same for Town and
   Trenches, which are already tested.

## Findings Astra did not ask about

6. **Contradiction rate and the New+ budget.** 28% of attempts fail to fit reserved civic footprints
   around the street network, and one seed of sixty hit the 28 s deadline on UE's Python. The
   dependable fix is structural, not a faster loop: reserve the civic sites first and route the
   secondary streets around them (streets are cheap to bend, footprints are not), so a contradiction
   becomes a rare event rather than a retry budget. Until then, report the per-seed attempt count in
   the sidecar so the loop can flag slow seeds.

7. **Runtime cost.** Solids 3,700–4,000 against the town's 2,400 and a catalogue twice the village's:
   expect 30–50% more CPU per battle than a town. Measure it on the first ten real city2 battles
   before any training or loop set is built on the family; if it lands above 40%, the pruning in
   finding 4 is the first lever.

8. **The axis-aligned facade limit** is correctly disclosed (seed 5's northern terrace). Nothing in
   the contract can fix it; it is a rotated-box decision for Jordan, and I recommend not taking it
   for this family: the cost lands on every ray and every map.

## Integration boundary (overseer)

`ImportedMap.h` header checks (lines 19 and 29) and the display name (line 30) must accept `city2`;
runtime family mapping is already "anything but trenches is town terrain". I will land that in the
main tree once the current re-baseline chain finishes, then run Astra's actual-family suites.
Loop and neural sets, the Unreal slot and promotion wait for Jordan's look acceptance.

## Corrections accepted (23 September 2026, after Astra's follow-up)

Astra's [follow-up report](029-city2-geometry-review-astra-report.md) corrects two claims above and
both corrections are right: the importer does not populate `firstObstacle`/`obstacleCount` for
imported `B` records (those fields belong to stock-building construction), so finding 1's contiguity
requirement does not apply to imported maps; and the `P` record has no z column, so finding 3's
"passage at 3.2 m" is not available in the contract. The other findings (120-part reserve, borrowing
wing stops at the party wall's inner face, ≥ 1.5 m terrace jogs, civic reservations before secondary
routing) were implemented: contradictions 29/102 → 0/72, party-wall protection 1,014/1,014. The
catalogue did not shrink (6,452–6,577), so finding 7's CPU measurement on real city2 battles stands
as the next check; the `city2` kind is now accepted by the importer (source ae3224df477f0f4c).
