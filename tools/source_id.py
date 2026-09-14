#!/usr/bin/env python3
import sys
from pathlib import Path
root=Path(sys.argv[1]) if len(sys.argv)>1 else Path(__file__).parents[1]/'Unreal/Source/ArmyPrototype/Sim'
h=1469598103934665603
for p in sorted((p for p in root.iterdir() if p.suffix in ('.h','.cpp')),key=lambda p:p.name):
    for b in p.name.encode()+p.read_bytes():h=((h^b)*1099511628211)&0xffffffffffffffff
print(f"{h:016x}")
