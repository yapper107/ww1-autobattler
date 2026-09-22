"""Checkout-relative inputs; generated working files stay outside source assets."""
import os
from pathlib import Path

PACKAGE = Path(__file__).resolve().parents[1]
CHARACTERS = PACKAGE.parent
REPO = PACKAGE.parents[2]
OUTPUT = Path(os.environ.get("ARMY_ART_OUTPUT", str(REPO / ".local/gunners_v02"))).expanduser().resolve()
OUTPUT.mkdir(parents=True, exist_ok=True)
