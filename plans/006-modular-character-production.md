# Modular low-poly character production — proposal

Status: Astra proposal for Jordan's discussion, 2026-09-15. The simplified concept received positive feedback; exact bodies, faces, uniforms and production counts are not approved. No models, rigs or gameplay implementation created in this planning pass.

Source inspected: HEAD `3ebd263e79b098155004b62119baef0dca502722` plus the existing dirty working checkout. `Unreal/Source/ArmyPrototype/BattleGameMode.cpp` currently constructs soldiers from a cylinder, sphere and cube components. There is no existing authored character mesh/rig pipeline to preserve. The current documented home-host engine is UE5.8; older UE5.4 notes describe another host.

## Visual target

Use the user's Tactical Breach Wizards screenshot and the revised simplified soldier sheet as the visual references. Broad low-poly forms, flat colors, sparse facial marks, simple hair masses and equipment outlines. Avoid detailed models covered in artificial triangular facets. Clothing folds exist where they support silhouette or articulation. Art decisions remain Jordan's.

Session reference files (local exploration files, not imported game assets):
- `/mnt/c/Users/Jordan Chan/AppData/Local/Temp/codex-clipboard-6153d2ee-1fdd-4dc9-b91f-779c9cb26fe5.png`
- `/mnt/c/Users/Jordan Chan/.codex/visualizations/2026/09/16/01a0a7b1-2adf-70c0-a2d4-b42fa4ff1bf7/04-simplified-soldiers.png`

Before production, preserve selected references in a durable source-art location with their provenance. The temporary screenshot is a reference, not a redistributable game asset.

## Parts and compatibility

| System | Proposed construction | Compatibility rule |
| --- | --- | --- |
| Body proportions | Initially one male and one female reference form; later standard and broad/sturdy variants for each | Shared humanoid bone hierarchy, reference pose and initial bone lengths; mesh widths vary within validated motion limits |
| Head | Whole low-poly head meshes with very simple facial marks | Standard neck seam and scalp envelope; curated head/body compatibility only when needed for fit or art |
| Hair | Separate simple meshes in a small reusable library | Fit head/scalp family, not torso width; explicit helmet variant or approved hiding rule |
| Facial hair | Flat color region or small fitted geometry | Fits head family; eyes/brows remain minimal; full facial rig deferred |
| Fitted uniform | Base clothed body or fitted torso/legs, with boots/gloves combined where practical | Each supported body form receives a fitted garment mesh; uniform item identity can resolve to multiple fit meshes |
| Rigid equipment | Helmet, rifle, backpack and simple props | Shared attachment names and validated fit offsets; some headgear still needs fit variants |
| Personal detail | Palette, eyebrow/hair shape, sleeve variant, a repair or simple scar mark | Small authored options; avoid accessory clutter or independent components for every mark |

Body, head and hair are selected independently within an explicit compatibility table. A broad body does not require an entirely different face/hair catalog. Default combinations can still be curated for each body type. Do not promise that all arbitrary meshes fit each other.

Clothing is separate as an authored/equippable system; it need not be a floating shell over a complete invisible anatomy mesh. Under covered regions, omit or hide skin geometry. Match neck border positions, skin palette, normals and weights; choose ownership of the neck explicitly. Base garments must cover hidden areas when equipment is removed. Avoid runtime freeform body sliders in the first implementation.

## Creation workflow and ownership

1. Astra generates proportion sheets and specific front/side/back concept references. Jordan chooses silhouettes and permitted exaggeration. Generated views guide modeling; inconsistent views are reconciled in the actual model.
2. Build real editable low-poly meshes in Blender, using deliberate vertex placement and simple extrusion. Astra can use Blender Python for repeatable geometry operations, scene setup, variants, export and validation. Scripts do not establish visual quality; inspect actual shaded renders and turntables after each change.
3. Assign a compact flat-color material/palette scheme. Keep material sections few and common across parts so later assembly remains practical. Do not create a material slot for every color or pouch.
4. Rig the reference bodies to the same skeleton contract. Place the small amount of necessary joint geometry at elbows, shoulders, knees and hips. Weight and inspect the mesh in bent poses; a low triangle count does not justify visibly broken joints.
5. Establish export/import scale, axes, bind pose, stable asset naming and attachment locations using a single reference character. Reimport and test in the project's actual UE5.8 build mirror.
6. Expand only after the full pipeline and reference pair pass visual/technical checks.

Blender was not found on PATH or in the usual Windows Program Files folder during this pass; complete the tooling inventory before installation. No new paid tool or image-to-3D service is required by this proposal. Image generation provides visual references, not production-ready topology, rigs or animation.

Confirm Git LFS is available, configured and working before introducing large binary sources. Keep `.blend` source, required exports, Unreal source assets, palette data and reproducible scripts under a deliberate tracking policy; caches and local configuration remain ignored. Extend the current source/config-oriented Windows mirror workflow to carry Content assets without overwriting newer authoritative work. Do not author final assets only in the disposable build mirror.

## Production sequence and gates

### 1. Body concept selection

Compare four simple adult silhouettes: standard and broad/sturdy male, standard and broad/sturdy female. Same neutral stance, scale, lighting and plain fitted underclothing, with front/side/back views. These are visual options, not stat archetypes. Initially choose one male and one female to model. No weapons or elaborate outfits during silhouette selection.

Gate: Jordan selects proportions. Establish neck, wrist, ankle and clothing interfaces and one skeleton contract. Variation is mainly width and outline initially; larger height/limb changes require later retargeting and grip/stride validation.

### 2. Two complete reference soldiers

Create two body forms, two head options that can be swapped on each supported body, two simple hair styles, one helmet, one uniform design fitted to both bodies, one rifle and one backpack. Boots/gloves can be included in the uniform for this phase. Create modest idle, walk, crouch, aim and reload motion sufficient to reveal deformation and equipment issues. Choose animation sourcing only after verifying availability and licensing; do not presume existing animation files.

Gate: inspect actual Blender turntables and Unreal captures in neutral light and the game's battlefield light, at close and battle camera distances. Check silhouette, flat shading, neck seams, material consistency, feet, shoulder/elbow bends, crouching, left-hand weapon grip, head turns and helmet/hair fit. Exercise each supported combination on both bodies. Fix failures before making more variants.

### 3. Expand body/head/hair variety

Add the other two body silhouettes after their concept selection; fit the shared uniform design to each. Concept a small head library next, then hairstyles shown on those actual heads. A reasonable initial expanded catalog is four body forms, roughly six heads and six hairstyles, subject to art selection and compatibility. These are working scope suggestions, not quotas.

Gate: use a visible compatibility grid and repeat the motion/fit checks for new shapes. Any body-locked head or headgear variant has a recorded reason. A shared skeleton does not automatically guarantee garment or grip compatibility.

### 4. Equipment and personal history

Add role-defining silhouettes one group at a time: rifle kit, officer kit, signal kit, then other authorized roles. Helmets, straps and packs need explicit ownership so accessories do not double up. Begin individual history with restrained palette, repairs and facial marks; special sleeves and prosthetic variants come later, with their own deformation checks. This is a proposed cosmetic system, not new injury gameplay.

Gate: assembled soldiers remain recognizably part of one faction and distinguishable in role. Save/load retains selected appearance. Fitted items resolve to a valid body fit; incompatible combinations are rejected or use explicit reviewed fallbacks.

### 5. Persistent identity and replay integration

Store explicit, versioned appearance part IDs and palette choices on a presentation-side persistent soldier record keyed by stable soldier identity, distinct from temporary battle slot IDs. Snapshot the resolved appearance for a battle so older replays do not inherit later uniform changes. Retain versioned assets or define a documented fallback/migration policy for removed assets. A random seed alone is insufficient to preserve appearance after the catalog changes.

Render recorded authoritative movement and action state. Visual animation and skeleton bones do not decide projectile hits, perception, cover height or tactics. The initial body variations stay within the existing gameplay silhouette envelope; visibly large height changes require an explicit design decision about collision, rather than silently changing hitboxes. Integration checks must show appearance changes leave authoritative outcomes unchanged and seeking restores the same appearance/pose inputs. Pause/seek must not depend on animation events driving simulation.

### 6. Population validation and measured optimization

Keep authored parts modular. Start with a small, understandable number of rendering components for the reference pair. Test 64, 100 and 200 visible soldiers under repeatable camera/motion/lighting conditions, recording frame time, animation cost, component/material section count and memory. Compare the same scene before and after optimization; do not claim performance from polygon count alone.

If measurements justify it, cache assembled meshes for actual appearance combinations at preparation/load time, with a key including part versions, fit and material configuration. Avoid prebuilding every theoretical combination. Keep weapons or equipment that must move independently separate. Apply suitable distance simplification and animation update policies only after visual comparison. Shared skeleton animation does not eliminate per-component rendering cost.

Unreal's documented modular character options and limitations: https://dev.epicgames.com/documentation/unreal-engine/working-with-modular-characters-in-unreal-engine

## Review status and boundaries

Fable consultation was attempted through the authorized project launcher after a successful subscription doctor check. The launcher refused because the previous session needed inspection. Its last saved result at `/home/jchan/.local/state/astra-fable/0b43cbb8f8675fc01d54/20260915T175807-c964ad4c/stdout.jsonl` reports that the Fable subscription limit was reached. No response to this character proposal was obtained; no model substitution, API billing or paid usage was enabled. The focused request is saved as `006-modular-character-review-request.md` for review when available.

Astra owns this proposal. No architecture approval from Fable is claimed. Do not change cognition code, tactical gates, held-out seed policy or simulation behavior as part of art production. The next proposed deliverable is the body proportion concept sheet; broad asset production remains dependent on Jordan's art choices.
