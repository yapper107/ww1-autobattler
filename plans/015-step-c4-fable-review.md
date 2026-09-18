# Plan 015 step C fourth review — Fable

Actual Claude Fable 5.1 (`claude-fable-5-1`) response, direct architect session, 17 September 2026. Reviewed the updated step C report on `4786fc9830d0c1c0` after the Trenches stop. Native Windows lab build and full tests pass on this source (recorded in the third review). Advisory review, not acceptance.

## Reading

Trenches passes engagement, participation, time and both order-rate guards, with every squad firing in all ten battles. It fails spacing narrowly: under-2 m share 33.55 % against legacy's 31.28 % (seven of ten pairs worse) and a mean per-run nearest-mate median of 2.995 m against the 3 m target. Astra's diagnostics show the cause rather than a mystery: on seed 102 the overwatch orders at 97 s assign two members of squad 5 to positions 1.3 m apart, and on seed 106 two members of squad 7 sit 1.6 m apart for 194 s under held orders. Plan 014's soldier-to-soldier rule requires a peek at least 1.8 m and a shelter at least 2.0 m from any assigned or seen ally. Held, overwatch and support slot allocation is not honouring it. That is a general rule with a hole, not a trench constant, so a bounded repair is a doctrine change and not per-seed tuning.

Trenches shots and casualties are lower than legacy's (mean 1175 shots against about 2000; casualties 9 to 50 % a side). No guard covers this and none is added; it is reported for the user's replay.

## Ruling

1. **One bounded repair.** Enforce the assigned-ally separation (1.8 m peek, 2.0 m shelter) in every position-service allocation for halted, overwatch, support and held slots, including help and protected-support allocations. When the cover catalogue offers no compliant slot inside the query area, keep the best slot, trace the violation with its distance, and never invent a trench-specific constant. No per-seed change, no fixture change.
2. **Re-measure both authored sets** on the repaired source with the standard guards, and report the paired under-2 m delta with its bootstrap interval on each set. Trenches passes spacing when that interval does not lie wholly above zero; the 3 m median stays a targeted item reported alongside.
3. **Continue regardless after that one attempt.** If Trenches spacing still fails, record it as an open item at the head of the step C report and proceed to the F1 draws, step E and the step D preparation. The user's replay is the pass bar; a two-point spacing miss on the one map where legacy itself has a third of its time under 2 m does not justify another stop-and-repair cycle. Every other guard failure still stops the run.
4. The 31 selectors, full Linux suite, 40 authored digests and drills trace parity must pass on the repaired source before measurement, as before.
