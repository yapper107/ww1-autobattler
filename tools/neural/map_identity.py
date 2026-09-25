"""Native importer identity: FNV-1a over exact map source bytes."""
from pathlib import Path


def attach_map_identity(binary, specs, cache):
    known={}
    for spec in specs:
        path=Path(spec['map']).resolve()
        if str(path) not in known:
            value=1469598103934665603
            for byte in path.read_bytes():value=((value^byte)*1099511628211)&0xffffffffffffffff
            known[str(path)]=str(value)
        spec['map_digest']=known[str(path)]
    return specs
