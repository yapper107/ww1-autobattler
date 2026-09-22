"""Run a portable Blender stage for the September 21 character handoff."""
import argparse
import os
from pathlib import Path
import subprocess

REPO = Path(__file__).resolve().parents[2]
PACKAGE = REPO / "art/characters/gunners_v02"
SCENE = "Azure_Gunners_Hands_Cloth_v02.blend"
STAGES = {
    "inspect": "inspect_package.py",
    "build": "build_gunners.py",
    "bake": "bake_review.py",
    "check": "check_grips.py",
    "export": "export_gunners.py",
    "verify": "verify_gunners.py",
    "preview": "render_preview.py",
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("stage", choices=STAGES)
    parser.add_argument("--blender", default="blender", help="Blender 5.2 executable")
    parser.add_argument("--output", type=Path, default=REPO / ".local/gunners_v02")
    args = parser.parse_args()
    output = args.output.expanduser().resolve()
    output.mkdir(parents=True, exist_ok=True)
    source = output / SCENE if (output / SCENE).exists() else PACKAGE / SCENE
    if args.stage == "build":
        source = REPO / "art/characters/male/tripo_candidate/rigged/Male_Azure_Rigged_v01.blend"
    if source.read_bytes()[:7] != b"BLENDER":
        # Blender may compress saved files; reject actual LFS pointer stubs only.
        if source.read_bytes()[:50].startswith(b"version https://git-lfs"):
            raise SystemExit("Source is a Git LFS pointer. Run git lfs install and git lfs pull.")
    if args.stage == "verify" and not (output / "exports/SK_Male_Gunner_v02.fbx").exists():
        raise SystemExit("Run the export stage first, then verify that output.")
    if args.stage == "preview" and not (output / SCENE).exists():
        raise SystemExit("Run the bake stage first; preview needs the generated cloth caches.")
    env = dict(os.environ, ARMY_ART_OUTPUT=str(output))
    command = [args.blender, "-b", str(source), "--python-exit-code", "1",
               "--python", str(PACKAGE / "scripts" / STAGES[args.stage])]
    print("Stage:", args.stage, "\nInput:", source, "\nOutput:", output, flush=True)
    subprocess.run(command, env=env, check=True)


if __name__ == "__main__":
    main()
