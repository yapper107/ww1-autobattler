"""Rebuild the integrated male, MG, and arcane assets in a synced Unreal mirror.

Run with UnrealEditor-Cmd -run=pythonscript -script=<this file> -nullrhi.
Use forward slashes in the Windows script path. Female base assets must exist.
"""
from pathlib import Path
import runpy

for filename in ['import_actual_male.py', 'import_runtime_gunners.py', 'import_arcane_materials.py']:
    runpy.run_path(str(Path(__file__).parent / filename), run_name='__main__')
