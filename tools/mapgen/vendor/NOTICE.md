# ProbableTrain MapGenerator

Upstream: https://github.com/ProbableTrain/MapGenerator

Author: Keir (ProbableTrain) and upstream contributors.
Revision: `f487e4cee321d105d5b0e14258363fa8b4d004ef`.
License: **LGPL-3.0-only**, as declared by upstream package.json.
Full texts are included in COPYING and COPYING.LESSER.

`polygon_util.upstream.ts` is an unchanged source reference. `lots.py` is a
modified Python rectangular specialization of its `subdividePolygon` routine;
the modifications are documented in the module. It remains LGPL-3.0-only and
is distributed as replaceable source. No upstream UI, fonts, assets, bundles,
PolyK or JSTS dependencies are redistributed or required.

Reuse is specifically the lot subdivision component, **not** a port of the
complete tensor-field street generator. The town structure, military cover
geometry, trench grammar, validation and renderer are this project's work.
