import json
import tempfile
import unittest
from pathlib import Path
from tools.character.preflight_gasp import REQUIRED_PLUGINS, preflight


class GaspPreflightTests(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory()
        self.addCleanup(self.directory.cleanup)
        self.root = Path(self.directory.name)
        self.engine = self.root / "UE_5.8"
        version = self.engine / "Engine/Build/Build.version"
        version.parent.mkdir(parents=True)
        version.write_text(json.dumps({"MajorVersion": 5, "MinorVersion": 8, "PatchVersion": 0}))
        binary = self.engine / "Engine/Binaries/Win64/UnrealEditor.exe"
        binary.parent.mkdir(parents=True)
        binary.write_bytes(b"fixture")
        plugins = self.engine / "Engine/Plugins"
        plugins.mkdir()
        for plugin in REQUIRED_PLUGINS:
            (plugins / (plugin + ".uplugin")).write_text("{}")
        self.sample = self.root / "GameAnimationSample/GameAnimationSample.uproject"
        self.sample.parent.mkdir()
        self.sample.write_text(json.dumps({"EngineAssociation": "5.8"}))
        self.asset = self.sample.parent / "Content/Sample.uasset"
        self.asset.parent.mkdir()
        self.asset.write_bytes(bytes.fromhex("c1832a9e") + b"structural fixture only")

    def test_structural_pass_still_requires_editor_verification(self):
        result = preflight(self.engine, self.sample)
        self.assertTrue(result["can_start_editor_validation"])
        self.assertTrue(result["warnings"])

    def test_old_engine_cannot_silently_pass(self):
        (self.engine / "Engine/Build/Build.version").write_text('{"MajorVersion":5,"MinorVersion":4}')
        result = preflight(self.engine, self.sample)
        self.assertFalse(result["can_start_editor_validation"])
        self.assertTrue(any("No automatic downgrade" in x for x in result["blockers"]))

    def test_lfs_stub_rejected(self):
        self.asset.write_text("version https://git-lfs.github.com/spec/v1\noid sha256:abc\n")
        result = preflight(self.engine, self.sample)
        self.assertFalse(result["can_start_editor_validation"])
        self.assertEqual(len(result["sample"]["lfs_pointers"]), 1)

    def test_incomplete_download_rejected(self):
        self.asset.write_bytes(b"")
        self.assertFalse(preflight(self.engine, self.sample)["can_start_editor_validation"])

    def test_wrong_sample_or_absent_inputs_rejected(self):
        self.sample.write_text('{"EngineAssociation":"5.4"}')
        self.assertFalse(preflight(self.engine, self.sample)["can_start_editor_validation"])
        self.assertFalse(preflight(None, None)["can_start_editor_validation"])

    def test_missing_plugin_rejected(self):
        (self.engine / "Engine/Plugins/PoseSearch.uplugin").unlink()
        self.assertFalse(preflight(self.engine, self.sample)["can_start_editor_validation"])
