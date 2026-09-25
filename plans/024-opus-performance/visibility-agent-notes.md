# Candidate: visibility — set-associative triple locality for the tactical eye rays

Touched: `Sim/TacticalRouteSim.cpp`, `Sim/TacticalRouteSim.h`. Nothing else.
I could not read the three required plan documents: the file tools in this run are
`--restricted` to this directory, so `/home/jchan/ww1-autobattler/plans/...` and
`docs/NEURAL_TRAINING_CURRENT_PROFILE.md` were unreadable. The design below rests on
source review only; if an Astra correction in those documents contradicts it, re-judge it.

## Why this design, and why not the alternative

The fallback offered in the request — bit-identical duplicate-eye reuse — is **dead code
on this source**. `Sample` builds the eyes from `u=min(8,ceil(TrackUncertainty(ct,time)/2)*2)`
with offsets `{0,0},{u,0},{-u,0}`, and `CommandSim.cpp:130` gives
`TrackUncertainty=min(24,1+max(0,time-observedAt)*.35)`, i.e. always >= 1. So `u` is always
one of 2, 4, 6, 8 metres, the three eyes always differ in x by at least 2 m, and after the
half-metre snap their packed keys are always distinct. Duplicate eyes never occur; reusing
them would never fire. I discarded that option rather than ship a no-op.

A separate triple-result cache was the other offer. An exact triple entry must verify all
four snapped points (3 eyes + body = 192 bits) so it costs 24-32 B per entry, and staying
inside the 128 MiB budget then means shrinking the per-ray table by a third to a half. That
trades random-access count against **raycast recomputation** (`IndexedContact` ->
`SpatialIndex::Query`, 18.60% of the profile), and it adds a fourth probe on every triple
miss. I judged the trade not worth benchmarking when the same locality is available for free.

Instead the existing table is re-shaped, at identical record size and identical total
footprint, from 8388608 direct-mapped slots into 2097152 four-way sets of 64 bytes:

* the set is addressed by `(group anchor, body)` where the anchor is `ct.eyes[0].packed`,
  which is shared by all three eyes of a report, so the whole triple lands in **one cache
  line** instead of three unrelated lines 128 MiB apart;
* each way still stores and verifies its own full `(from.packed, to.packed)` pair, so it
  remains an individual ray record — partial reuse survives (e.g. when `u` steps up as a
  track goes stale, `eyes[0]` still hits while the two flanking rays are recomputed, exactly
  as before);
* the observer ray is a group of one (`group = observerEye.packed`), so its address, its
  probe count and its single touched line are unchanged from baseline;
* insertion fills a free way first, so a whole eye group stays resident; a full set gives up
  the way that the incoming ray is keyed to.

This is the "triple cache supporting observer rays within the existing budget" as a set,
not as a wider entry, and it keeps per-ray reuse rather than eliminating it.

## Exactness

* For one geometry revision, `IndexedContact(...)<0` and `ClearLine3D` are pure functions of
  the two snapped positions. `MemoisedSegment` (`SpatialSim.cpp:48`) verifies its full
  seven-word key with `memcmp`, and `SpatialIndex::Query` is const. So the underlying answer
  does not depend on how many times, in what order, or from which cache state it is asked.
* Every way stores `from` (48 bits + occupancy bit) and `to` (48 bits + answer bit) and a hit
  requires both to match exactly. The group anchor only selects the set; a foreign group
  aliasing into the set cannot produce a false hit. Hence identical booleans.
* Query order, the `for(const auto& eye:ct.eyes)` iteration, the `visible+=1.f/3`
  accumulation, the threat grouping, the sorted upper bounds, the `seen`/distance skips, the
  `Sample` memo key, `Measure`, RNG and every float cost are untouched.
* Revision handling is unchanged: the cache is still rebuilt when
  `revision!=map.revision`, still `reset()` by `InvalidateGeometry` and still dropped per
  planner on unprepared maps (`TacticalRouteSim.cpp:42`), which covers both this table and
  its new alignment pointer since they live in the same object.
* `TacticalVisibilityCache` is only forward-declared in `BattleSim.h`; it is defined and
  constructed solely in this translation unit, so widening it touches no other file.

## What does change (non-gameplay)

Eviction differs, so the number of underlying segment/index queries differs and the
diagnostic counters `QueryProfile::sight`, `memoLookups`, `memoHits` will move. Those are
written in `BattleSim.cpp:88`/`SpatialSim.cpp:54-55` and read only by `Diagnostics.cpp`
reporting; nothing feeds a decision. Old probe/hit numbers should not be expected to hold.

## Risks

* **Recomputation trade.** Cross-group sharing of a single ray is lost when the same snapped
  ray is reached under two different anchors — mainly a track that drifts by exactly the
  offset distance with an unchanged snapped y and z, or two unmerged reports within 0.25 m in
  y. Both are rare (`Distance<4` grouping already merges near reports), and they cost a
  recomputed raycast, never a different answer. Against it, four-way associativity should cut
  conflict misses: baseline scatters the triple over three slots that any unrelated ray can
  evict; here a triple is only disturbed when a second group aliases into the same set.
* **Alias pathology.** Two hot groups sharing a set put six keys in four ways and thrash. At
  plausible live-set sizes this is a smaller loss than the baseline's independent per-ray
  conflicts, but it is the failure mode to watch if the measurement disappoints.
* Observer sets use one of four ways, a modest capacity cost for roughly one ray in four.
* The gain is a memory-locality gain (3 lines -> 1 per report). The brief rightly notes the
  profile does not prove stalls; if `EstimatedVisible`'s 15.60% self time is hashing and
  comparing rather than stalling, this will measure flat, and the extra way scan (up to four
  compares in one hot line, average about two) could make it slightly negative.

## Memory

Unchanged budget: 8388608 records x 16 B = 128 MiB, plus 3 spare records (48 B) so the sets
can be 64-byte aligned by hand with `std::align` — the allocator only guarantees 16 B, and
unaligned sets would straddle lines and forfeit the entire point. No second table, no
per-worker growth, no over-aligned `operator new` (deliberately avoided for Unreal, which
overrides global allocation).

## Portability

C++17 only: `std::align` (`<memory>`), `<cstdint>`, `static constexpr` members, no intrinsics,
no prefetch, no compiler or platform dependency. The 64-byte set width is a performance
assumption, never a correctness one, so a different line size degrades speed only.

## Suggested focused regression (not run here)

No tests were executed and none are claimed; there is no shell in this run. Worth Astra
running beyond the standard gates: an exactness check that hammers `Sample` across many
actors and ticks on a prepared map to force set eviction (the path where a recomputed ray
must agree with a cached one), and a trench-style map where reports share a y coordinate,
which is the aliasing case above. Any diagnostic baseline that pins `sight`/`memoLookups`
counts will need re-recording.

## Possible follow-up, deliberately not included

`EstimatedVisible` re-validates `map.tacticalVisibility` (shared_ptr deref plus revision
compare) on every ray; the pointer could be resolved once per planner, which the planner's
existing revision-free `samples` memo already assumes is safe. That is a separate candidate
and was left out to keep this one coherent.
