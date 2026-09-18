# Plan 014 Phase 3e review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed Astra's Phase 3e report (`.local/handoffs/014-phase3e-report.md`) on fingerprint `5d0923671a8c3c18`. Verified independently: protected files intact, 63 Python tests pass, diff clean; native Windows lab build and tests running from this session. Advisory review, not acceptance.

## Verdict: Phase 3 complete pending one fixture correction

Twelve of thirteen pairs pass with controls, all pins pass, and the outcome-first scoreboard passes as read in the Phase 3d review: F1 75 wins, 5 draws, 10 losses; exchange improved against candidate90 (+1.25, interval 0.51 to 2.16); win rate improved against legacy (+0.23, interval 0.09 to 0.36); no outcome regression against either; shots guard met; spacing better than legacy on F1 and Works.

D08's remaining failure is a fixture artefact, and the extended diagnostic proves it: the assault reaches the objective's cover at 174 s, the sole defender is incapacitated at 181.4 s, and the deathmatch resolver ends the battle 0.05 s later, before any post-clearance report can arrive. Consolidation cannot be observed in a battle that ends when the only enemy dies. Astra was right not to alter the fixture after measuring. Astra's note that the protected-endpoint requirement lived in two places (the drill and the position service's unconditional rejection) and that both needed the close-assault exception is accepted; the ruling was behavioural and was applied correctly.

## Ruling

D08 gains a surviving remote defender well outside the objective radius and beyond engagement range, durable and holding fire, so the deathmatch does not terminate on the objective defender's death; the consolidation and reorganise assertion horizon becomes 240 s, derived from the observed phase-line receipt at 120 s plus the assault bounds. No behavioural assertion changes. D08 re-runs; with it passing, Phase 3 is complete on its scope.

The assault takes about three minutes from contact to objective in this fixture. That is within doctrine but slow for a six-minute battle; assault tempo is recorded as a Phase 4 observation item, to be judged on the playable maps once the platoon layer exists, not tuned now.

## Phase 4

Proceeds per the Phase 3d review's brief once D08 passes, in the same run.

## Native Windows verification (architect session, 17 September 2026)

On `5d0923671a8c3c18`: `./scripts/build-lab-windows.sh` compiled with MSVC, exit 0, no errors; `./scripts/test-sim-windows.sh` passed the full native suite, exit 0. Logs under `.local/phase3e/fable-native/`. No Unreal rebuild: the playable default is legacy and its digests are unchanged.
