# City2 road blending — research and visual study, 23 September 2026

Jordan asked for ways to blend roads together so their individual outlines do not cut across
the interconnected network. After reviewing the three-way comparison, Jordan ruled **“Lock in
shared paving.”** The third option is now the city2 preview default: roads and squares share
one mask, continuous fine grain and subdued shoulders. This accepts the road treatment; overall
city2 art acceptance and promotion remain separate.

The original study below was presentation-only. Its saved variants remain the comparison
record. The integrated renderer uses the same appearance with a transparent mask background
so alpha-mask PNG renderers also preserve the unpaved ground.

## Diagnosis

The previous `tools/mapgen/render.py` drew each road's wide pale casing, then its narrower surface,
before moving to the next road. That later casing painted over an earlier road's surface. The
street network already meets at those junctions; the visible dividing lines are caused by
drawing order. Squares are painted separately before the roads, so road borders also cut
through the market paving. The Trench preview already uses grouped passes to avoid this issue.

## Techniques and recommendation

1. **Group borders and surfaces across the network.** Draw every road casing first, then every
   road interior. Esri explicitly describes this as joining and merging road symbols. It
   removes crossbars at intersections while retaining the existing outside border style.
   [Esri symbol-layer drawing](https://doc.esri.com/en/arcgis-pro/latest/help/mapping/layer-properties/symbol-layer-drawing.html).
2. **Make one paved area from roads and squares.** Buffer each centre line by half its width,
   union those areas with the squares, and texture the combined area. Only its exterior needs
   a kerb or shoulder. The underlying geometry operations are documented in
   [buffer](https://shapely.readthedocs.io/en/stable/reference/shapely.buffer.html) and
   [union_all](https://shapely.readthedocs.io/en/stable/reference/shapely.union_all.html).
   These references explain the method; adding Shapely/numpy is not proposed. An opaque SVG
   mask already provides a visual union without a new dependency.
3. **Style the perimeter by context.** My recommendation is restrained kerbs around formal
   urban blocks, a quieter worn shoulder elsewhere, and one texture anchored to map coordinates
   so each road does not restart its pattern. Keep the road core sharp and feather only the
   shoulder. These are art recommendations, not source claims or accepted defaults.
4. **Round junction mouths locally if desired.** Small corner fillets can make road joins
   feel built rather than overlapped. This is a follow-up geometry/art choice: do not expand
   paving into buildings, walls, narrow pedestrian gaps or protected objective ground. A
   global smoothing operation can bridge nearby streets unintentionally, so local clearance
   checks should constrain it.

The immediate recommendation is grouped drawing plus the shared road/square surface. Changing
the presentation does not require changing the physical map, acceptance thresholds or the
ARMYMAP contract. General SVG compositing follows the documented
[painter's model](https://svgwg.org/svg2-draft/render.html#PaintersModel).

## Concrete comparison

[Interactive study](../.local/plan029/city2/road-blend/index.html), seeds 17, 5 and 1201:

- Current road-by-road casing and surface.
- All casings, then all interiors; existing colours and widths.
- Shared road/square mask, continuous fine grain and subdued shoulders; this is the recommended
  direction. It does not yet implement context-selected formal kerbs or local corner fillets.

The third option uses opaque road strokes and square polygons in one mask. A slightly wider,
subdued shoulder sits underneath; only that shoulder is softened. Buildings, damage and all
physical geometry remain the saved seed's original content. Native files and the original
gallery are unchanged. Preview road end caps are rounded and clipped to the map boundary.

Build script: `.local/plan029/city2/road-blend/build_study.py`. Browser checks loaded all nine
SVG variants, exercised seed selection and the whole-map/detail toggle, and reported no page
errors. Screenshots and `check.json` sit beside the study. No generator or battle tests were
rerun for these presentation-only copies; they do not constitute new geometry or art acceptance.

For later Unreal terrain presentation, Epic documents road splines writing into runtime virtual
textures to blend with Landscape. That is a rendering integration option; it does not itself
solve how road junction shapes join, and it is outside this offline study.
[Epic RVT quick start](https://dev.epicgames.com/documentation/unreal-engine/runtimevirtual-texturing-quick-start-in-unreal-engine).

## Accepted renderer integration

`render._city2_paving` is isolated to city2. The three preview seeds were refreshed and their
native SHA-256 hashes stayed byte-identical for this renderer-only change. Four targeted tests
passed (city2/village preview layers, village 17/5/1201 goldens, Town/Trenches seed 17 goldens).
Browser pixel comparisons match the accepted prototype on all three saved seeds. Browser checks passed for all three seeds, including every objective choice, roof cutaway,
physical overlay and disabled publication, with no page errors. Evidence and the unchanged
geometry snapshots: `.local/plan029/city2/shared-paving/`.

The [subsequent structural review](029-city2-geometry-review-astra-report.md) is handled separately; its new generator geometry is not
attributed to this paving change. Context-selected kerbs and local junction fillets remain
ideas, outside the accepted third prototype.
