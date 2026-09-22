"""Blender: load the gunner scene and match male uniform colors to the female.

The atlas is palette art: replace exact sRGB colors, preserving UVs, markings,
skin and equipment. Read female colors from the approved export manifest.
"""
import json
import struct
import zlib
from pathlib import Path

import bpy
import numpy as np

ROOT = Path(__file__).resolve().parents[2]
PACKAGE = ROOT / "art/characters/gunners_v02"
PALETTE = json.loads((ROOT / "art/characters/female_rifle/manifest.json").read_text())["palette_linear"]
REGIONS = {"coat": ("29475f", "coat blue"), "collar": ("577a94", "collar and cuffs"),
           "helmet": ("30495f", "helmet blue"), "trousers": ("293b4c", "navy trousers")}


def srgb(rgb):
    return [round(255 * (12.92 * v if v <= .0031308 else 1.055 * v ** (1 / 2.4) - .055)) for v in rgb[:3]]


def chunk(kind, data):
    return struct.pack("!I", len(data)) + kind + data + struct.pack("!I", zlib.crc32(kind + data) & 0xffffffff)


source = ROOT / "art/characters/male/tripo_candidate/textured/Male_Azure_BaseColor.png"
data = source.read_bytes()
pos, compressed = 8, b""
while pos < len(data):
    size = struct.unpack("!I", data[pos:pos + 4])[0]
    kind, payload = data[pos + 4:pos + 8], data[pos + 8:pos + 8 + size]
    if kind == b"IHDR":
        width, height, depth, channels, _, _, interlace = struct.unpack("!2I5B", payload)
        assert (depth, channels, interlace) == (8, 2, 0)
    if kind == b"IDAT":
        compressed += payload
    pos += size + 12
raw = np.frombuffer(zlib.decompress(compressed), dtype=np.uint8).reshape(height, 1 + width * 3)
assert np.all(raw[:, 0] == 0), "Expected the authored unfiltered RGB atlas"
pixels = raw[:, 1:].reshape(height, width, 3).copy()
report = {}
for region, (old, female_name) in REGIONS.items():
    linear = next(v for k, v in PALETTE.items() if k.startswith("Female Azure | " + female_name))
    color = srgb(linear)
    match = np.all(pixels == [int(old[i:i + 2], 16) for i in (0, 2, 4)], axis=2)
    assert match.any(), region
    pixels[match] = color
    report[region] = {"female_linear": linear, "matched_srgb": color, "pixels": int(match.sum())}
out = PACKAGE / "Male_Azure_Matched.png"
raw = b"".join(b"\0" + row.tobytes() for row in pixels)
out.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack("!2I5B", width, height, 8, 2, 0, 0, 0)) +
                chunk(b"sRGB", b"\0") + chunk(b"IDAT", zlib.compress(raw, 9)) + chunk(b"IEND", b""))
runtime = ROOT / 'art/characters/male_runtime'
runtime.mkdir(exist_ok=True)
(runtime / 'Male_Azure.png').write_bytes(out.read_bytes())
ember = pixels.copy()
for region, color in {'coat': [112,38,28], 'collar': [162,65,35], 'helmet': [78,30,29], 'trousers': [67,44,40]}.items():
    ember[np.all(pixels == report[region]['matched_srgb'], axis=2)] = color
ember_raw = b''.join(b'\0' + row.tobytes() for row in ember)
(runtime / 'Male_Ember.png').write_bytes(b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('!2I5B', width, height, 8, 2, 0, 0, 0)) + chunk(b'sRGB', b'\0') + chunk(b'IDAT', zlib.compress(ember_raw, 9)) + chunk(b'IEND', b''))
image = bpy.data.images.load(str(out), check_existing=False)
image.pack()
body = bpy.data.objects["Male_Azure_Skinned"]
for material in body.data.materials:
    for node in material.node_tree.nodes:
        if node.type == "TEX_IMAGE":
            node.image = image
    shader = next(n for n in material.node_tree.nodes if n.type == "BSDF_PRINCIPLED")
    shader.inputs['Roughness'].default_value = .95
    shader.inputs['Specular IOR Level'].default_value = .1
female_coat = bpy.data.objects["Female_Coat_Cloth"].data.materials[0]
male_coat = bpy.data.objects["Male_Coat_Cloth"]
male_coat.data.materials.clear()
male_coat.data.materials.append(female_coat)
body["uniform_palette_source"] = "Female rifle approved grip C"
bpy.ops.wm.save_as_mainfile(filepath=str(PACKAGE / "Azure_Gunners_Hands_Cloth_v02.blend"))
(PACKAGE / "uniform_palette_match.json").write_text(json.dumps(report, indent=2) + "\n")
print("UNIFORM_PALETTE_MATCHED", json.dumps(report), flush=True)
