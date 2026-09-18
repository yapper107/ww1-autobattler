# Plan 015 step C sixth review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed the C5 continuation on the restored floor source `4786fc9830d0c1c0` (native Windows lab build and tests pass on it). Both authored sets pass the revised guards; Trenches spacing stays an open item for replay. F1 attacker win share fails: 57/90 against the squad-only reference's 75/90, paired delta -20 points, interval [-31.1, -8.9]. Advisory review, not acceptance.

## Reading

The guard is right and the failure is real. The squad-only reference wins more because it never withdraws, but that is not what the lost battles show. In sixteen matched losses the attacker loses 75 to 94 % of its men while the defender loses a third or less, with attacker order rates a third of those in won battles. The platoon sat in a firefight and bled without assaulting. The stop evidence names the mechanisms:

1. **Assault abandoned on stale evidence.** Squad 1 in draw 10/108 broadcasts Assaulting at 35 s and accepts BreakContact at 45.6 s "citing its believed ratio without superiority". That ratio was known when it chose to attack. A committed assault may be broken only on new evidence: a casualty in the assault element, loss of the base of fire, or effective incoming fire without superiority sustained for a bounded time after support was expected. The pre-assault ratio test does not re-run inside an assault.
2. **Support received, never used.** In draw 1/109 squad 2 calls NeedSupport at 49 s, squad 0 broadcasts Fixing at 62.5 s, and no SquadAttack candidate is ever recorded for the caller, while squad 1 re-accepts received-sector SupportByFire at 182, 189 and 195 s. A squad that receives Fixing from a neighbour must select an attack within a bound: a covered route if one exists, otherwise the supported fire-and-movement of the Phase 4e review. Re-accepting an identical support directive for the same sector and sender is churn and must be refused while the earlier one stands.
3. **Believed ratio against a defender the attacker outnumbers.** The platoon begins weak-ratio observation at 96 s in draw 10/108 and orders Withdraw against 4 to 12 defenders. Diagnose before repairing: for the sixteen losses, export the platoon's believed enemy strength over time against the true count (offline observer comparison only). If reports of the same contact from several squads are summed, deduplicate by contact identity inside the platoon's own memory; the net's delay and loss are unchanged. If the belief is accurate, leave it and report.

## Ruling

- Diagnostics for item 3 first, on existing records where possible.
- Bounded repairs on items 1 and 2, and on item 3 only if double counting is confirmed. Each behaviour change gets a discriminating fixture in the platoon or squad suites (an assault under fire that holds until a real loss trigger; a caller that attacks after Fixing; a platoon whose believed strength matches unique contacts). No per-seed or family constant; no reading of hidden enemy state.
- Three local attempts across the new and existing selectors, with the full suite, 40 authored digests and trace parity after each. Then one measurement: both authored sets and the 90 F1 draws under the standing guards.
- Continue regardless after that measurement: record F1's status at the head of the step C report, then step E and the step D preparation as briefed. Every other guard failure still stops with traces.
