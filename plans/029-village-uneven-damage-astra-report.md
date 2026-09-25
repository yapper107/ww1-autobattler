# Plan 029 — uneven damage across village boundaries

23 September 2026. GPT-6 Astra. Generator version 3, fingerprint `2f528538c515a6c1`.
Jordan identified the remaining tile-shaped crater allocation and chose **uneven damage**:
one battered approach, damage reaching the centre, quieter ground beyond. This authorizes
replacing the old 3–6-per-cell/~20%-of-open-cells quota with a comparable map-wide impact budget.
All coverage and physical-geometry gates remain unchanged.

## Result

`village_damage.py` places impacts from continuous distributions in world coordinates, with
no parcel/tile inputs. A large concentration lies along an east/west approach, a smaller one
reaches the centre, and sparse outliers feather the edges. At normal damage, the budget is
86–104 impacts; the lighter/heavier settings scale it. Impacts can cross roads, gardens,
orchards and hedge boundaries. Building footprints, the solid church tower, memorial, lane
surfaces/ramps and the immediate objective are protected from crater placement.

The same exposure field controls house ruin probability. Struck hedge/wall sections leave
low, non-blocking physical remnants; surviving ends are new solids, and original source IDs
remain valid. Hit trees become stumps. Existing cover pruning removes positions that the
changed source no longer protects. The normal validator and bounded repair loop then run.
This is generation-time composition, with no simulator edits or runtime geometry mutation.

The SVG gives older scars greener edges and fresh impacts exposed soil. Soil aprons can
overlap and cross parcels; physical crater rings remain separate, each with the existing eight
non-blocking 0.6 m rim boxes and prone covers. Older/fresher is visual age, not a change to the
rim-height contract. Upper floors and stairs remain intact; roof wear is preview illustration.

The existing gallery URL is refreshed with 17, 5 and 1201, plus cutaway, support and physical-edge
views. [Before/after seed 17](../.local/plan029/G/uneven/comparison.html) preserves the village's
layout while showing the change in damage distribution. Original v2 exports are preserved in
`.local/plan029/G/uneven/before/<seed>/`. No canonical generated map was overwritten.

## Measures

| Seed | Battered approach | Impacts | Impacts on approach side | Impact centres on roads | Damaged furniture pieces | Support A / B | Elevated-safe | Solids |
|---|---|---|---|---|---|---|---|---|
| 17 | West | 99 | 93.94% | 15 | 114 | 77.78% / 77.78% | 80.46% | 2,842 |
| 5 | East | 102 | 90.20% | 10 | 107 | 71.43% / 85.71% | 76.74% | 2,769 |
| 1201 | West | 91 | 95.60% | 11 | 108 | 100% / 85.71% | 77.70% | 2,443 |

The directional and road counts above describe the three previews; they are not tactical
quality scores. Seed 5 now accepts attempt 2 rather than the v2 attempt 4, so its underlying
village also changes. No seed-specific layout or damage rules were added.

On development seeds **0–49 and 1201–1210**, 60/60 maps pass and reproduce their support shares
on fresh re-analysis. Minimum support is 70% per side; elevated-safe is **75.41–84.83%**;
solids **2,307–2,905** against the 3,400 cap; total craters **86–104**. There are **0 WFC
contradictions in 76 attempts**, with at most two attempts. Sixteen attempts were rejected by
unchanged density, stair, firing-aperture or support checks. Thirty-four accepted maps used the
existing bounded repairs. The requested previews needed no repairs.

Serial timings after other checks completed:

| Seed | Linux generation | UE 5.8 bundled Windows Python generation + export |
|---|---|---|
| 17 | 0.40 s | 0.611 s |
| 5 | 0.74 s | 1.000 s |
| 1201 | 0.31 s | 0.430 s |

Windows used bundled Python 3.11.8 and a 30 s deadline. Exported Linux/Windows text matches
exactly after newline normalization. This checks the interpreter/pipeline, not the New+ UI.

## Verification and scope

- Full Python suite: **176 tests run, one skipped; passed**. Includes generator determinism,
  two PYTHONHASHSEED processes, Python 3.9 syntax, unchanged Town/Trenches golden bytes and loop
  cache fingerprints. New regressions verify the global budget, asymmetric distribution,
  actual crossings of former tile seams, old/fresh scars, unique source IDs and continuous
  exposure across a tile seam.
- Native agreement on 17, 5, 1201, 1206: **100%** in every sight, solid-ray, protection,
  walkability, cover-catalogue and strict reachability sample family. All existing thresholds
  remain intact.
- Static-defence seating: **15/15**, all twelve defenders, through the real battle CLI.
- Native importer checks on Town, Trenches and all three new previews: **5/5 maps pass**,
  including spawns, routes, cover, stairs, doors, destruction-cache invalidation and repeated
  warm/cold replay digests. Both frozen Town/Trenches recorded digests match.
- Separate seed-17 checks exercise damage settings 0, .15, .65 and 1 with a 30 s deadline.

Evidence and new previews: `.local/plan029/G/uneven/`; the current gallery remains
`.local/plan029/G/art/index.html`. Source changes are confined to generator composition,
`village_damage.py`, village SVG rendering, generator tests and documentation. No Unreal or
simulator C++ changes, no canonical-map promotion, no held-out 2001–2010 seeds, no Fable visual
review. Jordan retains visual acceptance. Organic Unreal mesh/material work remains separate.
