# Soldier animation adapter

`AnimationContext.h` is the engine-independent, read-only adapter used by
`SoldierVisual` to generate and replay the GASP motion cache. The completed simulation record must outlive
the adapter and remain immutable. It copies only per-soldier shot indexes, not the
large frame history. Samples are returned by value, independently of query order. `Valid()` rejects
malformed/lean records; sampling returns `std::nullopt` on invalid input. No C++
exceptions are required, matching the Unreal module configuration.

## Available inputs

| Input | Source / rule |
| --- | --- |
| Position, velocity, facing | Recorded frames, actual displacement, shortest-angle facing interpolation; SI units |
| Trajectory history/future | Samples of the completed replay; requests outside its range are flagged unavailable |
| Stance | Explicit standing/crouched/prone, never inferred from a lowered mesh |
| Carry family and firing mechanism | Equipped weapon definition and resolved gun action, not role or the legacy MG flag |
| Magazine, cycle and reload timing | Resolved weapon properties, scaled through the existing dexterity function |
| Shots | Every `Record.shots` event, including multiple shots between snapshots; stable original event indices |
| Reload interval | Existing `reloadUntil` and effective duration; recover a start between frames without importing future stance/equipment |
| Sprint/winded/stamina | Explicit state; available seconds and endurance-normalized fraction |
| Suppression/nerve, health | Recorded continuous inputs; no new combat thresholds |
| Attention and aim | Recorded look direction (or facing when directional sight is off), chosen aim point and accumulated recoil; restores the stored aim marker's −1.5 m offset to obtain the world target |
| Cover/moving fire/area fire/hold fire | Explicit recorded flags |
| Support intent | `supportGun`; does not claim a bipod or other surface contact exists |
| Traversal | Recorded progress, height, takeoff, landing and landing time |
| Grenade/blast state | Recorded reason, stun, deafness, rush and interpolated knock height; airborne samples disable grounded contacts |
| Out of action | Overrides movement/aim/action eligibility; leaves original action available to distinguish wounded/killed |

No enemy soldier array, target search, movement order, random generator or tactical
decision is consulted by pose inputs. Future trajectory queries are for replay
rendering only. Do not use them in AI inference. A vault's takeoff/landing position
jump is deliberately excluded from ordinary grounded velocity/interpolation; its
visual trajectory needs a real traversal clip and its recorded anchors.

Stance and action remain discrete; the new graph owns transitions. The adapter
must not invent smooth gameplay states that hide the need for transition clips.
`sprinting=true` with zero displacement remains stationary motion plus sprint intent,
not an instruction to run in place. `ShotsBetween` is a pure `(after, through]`
lookup: the caller owns event dispatch and deduplication on seek. No animation
notify may apply ammunition, damage or additional shots.

## Equipment profiles to author with the sample

The context currently recognizes the simulator's two item definitions. Additional
items are explicitly unsupported until mapped. The future Unreal data assets bind
those IDs to the following authoring data; this table is a contract, not calibrated
contact offsets or a claim that the assets exist:

- Carry/load family, compatible Pose Search databases and linked animation layers.
- Body-specific retarget profile, shoulder/trigger/support grip contacts, relaxed
  and aimed hand poses, muzzle marker and permitted aim ranges.
- Per-action clips and phase/contact curves, including hand release and reacquire.
- Weapon-part tracks and grip ownership through bolt operation/reload/traversal.
- Allowed stance/action combinations, fallback diagnostics and visual LOD policy.

| Phase | Rifle contact ownership | Machine-gun contact ownership |
| --- | --- | --- |
| Carry/aim | Weapon carrier, shoulder when aimed, both hands | Heavy carry body pose, both hands; shoulder or hip according to action |
| Shot/recovery | Both hands and shoulder; additive recoil | Both hands; heavy recoil/body reaction and any real support contact |
| Manual cycle | Left support retained; right hand follows authored bolt path | Not applicable for automatic mechanism |
| Reload | Authored stabilizing hand plus manipulating hand and clip/chamber contacts | Right grip retained as authored; left follows ammunition-box/latch contacts |
| Vault/interaction | Explicit weapon carry/attachment transition and world-contact release curves | Weapon-specific traversal source; do not borrow a two-free-hands vault unchanged |
| Prone | Authored prone body balance and actual ground contacts | Authored prone carry/aim/support and reload; support intent alone cannot deploy a bipod |
| Death/release | Release curves and recorded attachment transition | Same contract, different weapon geometry and mass profile |

A gun can move between contacts only through a continuous authored trajectory.
Global wrist IK must be reduced where a hand intentionally leaves a grip; otherwise
it will fight the reload or wall contact. Masking everything above the spine is
insufficient for heavy equipment, which changes hips, shoulder loading and turns.
Geometry probes and terrain/cover support transforms belong in the Unreal adapter,
not in this simulation-facing header. Plan 032 is merged; its recorded state is
available here, but authored grenade throw/release/throw-back tracks remain open.

## Replay requirements

Query-order invariance of these inputs alone does not make a stateful graph seek-safe.
The native GASP planner now caches pose-search blend decisions, root offsets,
pelvis/foot correction, sprint carry, world aim and gaze at 30 Hz. These reproduce
across seeks and playback-rate changes. Cloth freezes on pause but resets and
settles on a seek; it does not reproduce historical cloth deformation. Snapshots at 0.2 s cannot reconstruct
an unrecorded instantaneous stance/attention change. Shots are timestamped exactly;
reload starts are reconstructed from the currently recorded duration contract.
If richer events become necessary, request a simulation export change explicitly.

## Checks and dependency gate

```sh
mkdir -p .local/animation-context
g++ -std=c++17 -fno-exceptions -Wall -Wextra -Werror -IUnreal/Source/ArmyPrototype tests/presentation/animation_context.cpp Unreal/Source/ArmyPrototype/Sim/Stats.cpp -o .local/animation-context/test
.local/animation-context/test
python3 -m unittest tests.test_gasp_preflight
python3 tools/character/preflight_gasp.py --engine '<UE_5.8>' --sample '<GameAnimationSample.uproject>' --output .local/animation-context/preflight.json
```

The context check covers 2,000 shuffled seeks, sub-snapshot and simultaneous shot
events, no early future shots, old/new reload boundaries, blocked movement, different
equipment, fatigue normalization, prone, vaulting, death and invalid time/frame input.
The preflight rejects old engine versions, missing plugins, unloaded LFS pointers,
incomplete packages and mismatched sample associations. A passing preflight permits
editor validation; it does not certify sample identity or Blueprint compatibility.

See [plan 034](../plans/034-contextual-soldier-animation.md) for architecture and
the first visible acceptance slice, and [clip coverage](ANIMATION_COVERAGE_2026-09-25.md)
for the existing library's gaps.
