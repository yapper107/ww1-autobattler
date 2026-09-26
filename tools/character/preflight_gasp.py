"""Check local prerequisites for GASP 5.8 without launching or changing the project.

This is structural validation, never animation/compatibility certification.
Exit 2 means a prerequisite is missing; exit 0 means editor validation may begin.
"""
import argparse
import json
import os
from pathlib import Path

REQUIRED_PLUGINS = {"PoseSearch", "Chooser", "AnimationWarping", "MotionWarping", "ControlRig", "IKRig"}


def plugin_names(root: Path) -> set[str]:
    names = set()
    for _, directories, files in os.walk(root):
        descriptors = [Path(name).stem for name in files if name.endswith(".uplugin")]
        names.update(descriptors)
        # A plugin's content/source subtree may contain millions of files on a
        # mounted Windows drive. Its descriptor is at the plugin root.
        directories[:] = [] if descriptors else [name for name in directories if name not in {
            "Content", "Source", "Binaries", "Intermediate", "Resources", ".git"}]
    return names


def preflight(engine: Path | None, sample: Path | None) -> dict:
    result = {"required_engine": "5.8", "engine": None, "sample": None,
              "blockers": [], "warnings": [], "can_start_editor_validation": False}
    if engine is None:
        result["blockers"].append("Supply the installed UE 5.8 engine directory.")
    else:
        version_path = engine / "Engine/Build/Build.version"
        try:
            version = json.loads(version_path.read_text(encoding="utf-8-sig"))
            actual = (version["MajorVersion"], version["MinorVersion"])
            result["engine"] = {"path": str(engine), "version": version}
            if actual != (5, 8):
                result["blockers"].append(f"Engine is {actual[0]}.{actual[1]}; this integration requires 5.8. No automatic downgrade.")
        except (OSError, ValueError, KeyError, TypeError) as error:
            result["blockers"].append(f"Cannot read engine version: {error}")
        plugins = plugin_names(engine / "Engine/Plugins")
        missing = sorted(REQUIRED_PLUGINS - plugins)
        if missing:
            result["blockers"].append("Missing engine plugin descriptors: " + ", ".join(missing))
        executables = [engine / "Engine/Binaries/Win64/UnrealEditor.exe",
                       engine / "Engine/Binaries/Linux/UnrealEditor",
                       engine / "Engine/Binaries/Mac/UnrealEditor.app/Contents/MacOS/UnrealEditor"]
        if not any(path.is_file() for path in executables):
            result["blockers"].append("No installed Unreal Editor executable found.")
    if sample is None:
        result["blockers"].append("Supply the official Game Animation Sample .uproject downloaded for UE 5.8.")
    elif sample.suffix.lower() != ".uproject":
        result["blockers"].append("Sample must be the exact .uproject path, not a directory.")
    else:
        try:
            descriptor = json.loads(sample.read_text(encoding="utf-8-sig"))
            association = str(descriptor.get("EngineAssociation", ""))
            result["sample"] = {"path": str(sample), "association": association}
            if association != "5.8":
                result["blockers"].append(f"Sample engine association is {association!r}; verify the matching 5.8 download before migration.")
            assets = sorted((sample.parent / "Content").rglob("*.uasset"))
            pointers, invalid = [], []
            for asset in assets:
                with asset.open("rb") as stream:
                    header = stream.read(64)
                if header.startswith(b"version https://git-lfs"):
                    pointers.append(str(asset.relative_to(sample.parent)))
                elif len(header) < 4 or header[:4] != bytes.fromhex("c1832a9e"):
                    invalid.append(str(asset.relative_to(sample.parent)))
            result["sample"].update(asset_count=len(assets), lfs_pointers=pointers, invalid_package_headers=invalid)
            if not assets:
                result["blockers"].append("Sample Content contains no .uasset files.")
            if pointers:
                result["blockers"].append(f"{len(pointers)} sample assets are Git LFS pointers, not downloaded packages.")
            if invalid:
                result["blockers"].append(f"{len(invalid)} assets have unrecognized package headers; inspect incomplete/wrong downloads.")
            result["warnings"].append("File checks cannot authenticate the sample or verify Blueprint classes/references. Open the official sample and compile its animation assets before migration.")
        except (OSError, ValueError, TypeError, AttributeError) as error:
            result["blockers"].append(f"Cannot inspect sample: {error}")
    result["can_start_editor_validation"] = not result["blockers"]
    return result


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--engine", type=Path)
    parser.add_argument("--sample", type=Path)
    parser.add_argument("--output", type=Path)
    args = parser.parse_args()
    result = preflight(args.engine, args.sample)
    text = json.dumps(result, indent=2) + "\n"
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(text)
    print(text, end="")
    return 0 if result["can_start_editor_validation"] else 2


if __name__ == "__main__":
    raise SystemExit(main())
