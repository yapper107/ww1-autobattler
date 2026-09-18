# Step E contract before implementation and paired measurement

Entry C6 source26145f87ae81a257: all35 selectors and parity pass; both authored
sets pass; F1 win share61/90 vs75/90 fails (delta-15.56pp, CI[-28.89,-3.33]).
C6 explicitly authorises E/D after this isolated failure.

Leader effects are opt-in for drills, with separate per-team lieutenant profiles;
ordinary C6 drills and historical controllers keep their default behavior.
Profiles are judgement/risk/adaptability/communication. Good=(.9,.5,.9,.9),
bad=(.15,.9,.2,.2): the latter is an overconfident, inflexible, poor communicator.
No marksmanship, health, ammunition, movement-speed or hidden-enemy advantage.
Succession uses the successor's own profile. Delays/drops are deterministic own-net
state, not diagnostic RNG. All effects and decisions have trace reasons.

F1 is normally asymmetric. For the equal-troop comparison only, retain each F1
map and deployment geometry but mask the attacker to the defender's roster and
match the defender's gun configuration on both sides. This reduces the larger
attacker roster; it does not add exposed defender positions. Verify walkability,
identical role/weapon counts, and scenario hashes independent of battle seed and
leader profile. Ordinary F1 generation/digests are unchanged. This is a disclosed
comparison variant, not substituted into Step C's F1 scoreboard.

One paired set: gen1-30 x battle107-109, two role swaps per draw (good Azure/bad
Ember, then bad Azure/good Ember), same seeds, troops and geometry. Report all180
battles and90 role-swap pairs. Majority bar: bad loses more than90/180 battles
and good wins more than45/90 pairs by win-count difference (ties don't count as
wins). No second measured profile set or outcome-driven tuning. Record first
coordinated assault, help latency, wrong-target rate, stale-order seconds and
casualty exchange; missing episodes/undefined exchange remain null.
