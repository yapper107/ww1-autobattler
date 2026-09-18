# Pre-repair diagnosis

Source 4786fc9830d0c1c0, existing C5 records only. The corrected export uses the
actual BeliefCellSize=16 from BeliefSim.h. Sixteen reference-win/current-loss pairs
are included; four reference-win/current-draw pairs are excluded as requested.
Each JSON contains staff mental-map samples and every recorded platoon decision,
with observer actual living counts sampled at or immediately before its time.
MG-weighted total is sum(estimate + 1.5*remembered MG); the exact 120 m spatial
filter is additionally applied to weak-observation decision rows. The total is
not labelled an exact policy ratio: eligible/fresh own squad reports can differ
from observer living strength, and the historical export does not store that
numerator at every assessment.

No duplicate identities: every exported decision knowledge list has unique enemy
IDs, and every run's maximum observation count is <= its initial defender count.
ReceiveObservations stores reports[evidence.track]; WithTracks and BuildMentalMap
iterate that single identity-indexed array. Multiple squads do not sum the same
contact. No belief policy change is justified under C6 item 3. Estimates are not
exact true counts: unseen-force allowance per cell, MG weighting and retained
tracks account for overestimation; preserve those reviewed semantics.

In 10/108 at weak observation 95.85 s the weighted estimate is 12.70 versus 10
living defenders; only 6 attackers remain alive (5 nonstaff). This is no longer
the initial numerical advantage. The attack at35.25s was followed by base member8
being incapacitated at44.55s (trace14220 records minStrength failure), before
BreakContact at45.55s (14303). This is new physical loss, not proof of a stale-ratio
interruption. The new explicit commitment contract is still implemented/tested,
but that specific diagnosis is disputed with the recorded evidence.
