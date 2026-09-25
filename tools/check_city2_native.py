#!/usr/bin/env python3
"""City2 native checks, with an explicitly requested geometry-only diagnostic.

Actual city2 headers are always tested first. --geometry-alias permits separate
temporary copies bearing the village header when the native importer lacks city2.
Those copies prove only existing v2 geometry, never city2 family integration.
Nothing in the simulator, actual exports or canonical map directory is changed.
"""
import argparse
from concurrent.futures import ThreadPoolExecutor
import json
from pathlib import Path
import subprocess
import sys

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT))
from tests.test_mapgen_native import (agreement, describe, threshold, seat, BATTLE_BINARY,
                                      AGREEMENT_SEEDS, SEATING_SEEDS, SEATING_LAYOUTS,party_wall_queries)
from mapgen import city2
from mapgen.native import export
from mapgen.probe import Probe, ProbeError


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out',type=Path,required=True)
    parser.add_argument('--geometry-alias',action='store_true')
    args=parser.parse_args();args.out.mkdir(parents=True,exist_ok=True)
    maps={};paths={};report=dict(actual_headers={},agreement={},seating=[],imports={},party_walls={},catalogues={})
    for seed in SEATING_SEEDS:
        m=city2.generate(seed);maps[seed]=m
        actual=args.out/f'city2-{seed}.army';payload=export(m);actual.write_text(payload)
        try:
            Probe(actual).info();report['actual_headers'][seed]='accepted';paths[seed]=actual
        except ProbeError as error:
            report['actual_headers'][seed]=str(error)
            if not args.geometry_alias:raise
            if 'Unsupported map header' not in str(error):raise
            diagnostic=args.out/f'city2-{seed}-GEOMETRY-ONLY-as-village.army'
            diagnostic.write_text(payload.replace(f'ARMYMAP 2 city2 {seed}\n',f'ARMYMAP 2 village {seed}\n',1))
            paths[seed]=diagnostic
    report['geometry_alias_used']=any('GEOMETRY-ONLY' in str(p) for p in paths.values())
    title='city2 GEOMETRY ONLY (village header)' if report['geometry_alias_used'] else 'city2'
    failures=[]
    for seed in (17,5,1201):
        probe=Probe(paths[seed]);queries=party_wall_queries(maps[seed])
        answers=probe.protected(queries)
        report['party_walls'][seed]=dict(queries=len(queries),protected=sum(answers))
        report['catalogues'][seed]=len(probe.covers())
        if not queries or not all(answers):failures.append(f'party wall protection {seed}')
    for seed in AGREEMENT_SEEDS:
        result=agreement(maps[seed],paths[seed],Probe(paths[seed]));report['agreement'][seed]=result
        print(describe(seed,result,title),flush=True)
        failures += [f'{seed} {name}' for name,(ok,total,_) in result.items() if (ok/total if total else 1)<threshold(name)]
    importer=ROOT/'.local/mapgen/tests/imported-map-tests'
    for label,selected in [('actual',[args.out/f'city2-{s}.army' for s in (17,5,1201)]),
                           ('geometry',[paths[s] for s in (17,5,1201)])]:
        proc=subprocess.run([str(importer)]+list(map(str,selected)),capture_output=True,text=True,timeout=600)
        (args.out/f'import-{label}.log').write_text(proc.stdout+proc.stderr)
        report['imports'][label]=dict(exit_code=proc.returncode,files=list(map(str,selected)))
        if label=='geometry' and proc.returncode:failures.append('native geometry import')
    jobs=[(seed,layout,paths[seed],args.out/f'seat-{seed}-{layout}') for seed in SEATING_SEEDS for layout in SEATING_LAYOUTS]
    with ThreadPoolExecutor(max_workers=3) as pool:
        results=list(pool.map(lambda j:(j,*seat(BATTLE_BINARY,j[2],j[0],j[1],j[3])),jobs))
    for (seed,layout,path,out),code,text in results:
        record=dict(seed=seed,layout=layout,exit_code=code)
        (args.out/f'seat-{seed}-{layout}.log').write_text(text)
        if code:failures.append(f'seating {seed} {layout}')
        else:
            run=out/json.loads((out/'latest.json').read_text())['run']
            manifest=json.loads((run/'manifest.json').read_text());record['defence']=manifest.get('static_defence')
            if record['defence'].get('defenders')!=12:failures.append(f'seating {seed} {layout}: count')
        report['seating'].append(record);print(title,'seating',record,flush=True)
    report['failures']=failures
    (args.out/'report.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps(dict(geometry_alias_used=report['geometry_alias_used'],failures=failures)),flush=True)
    return int(bool(failures))


if __name__=='__main__':sys.exit(main())
