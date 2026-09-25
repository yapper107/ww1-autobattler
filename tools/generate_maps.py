#!/usr/bin/env python3
"""Generate JSON geometry + SVGs, or serve the local interactive map workshop.

python3 tools/generate_maps.py --seed 17 --output .local/mapgen/preview
python3 tools/generate_maps.py --kind village --seed 1201 --deadline 30
python3 tools/generate_maps.py --serve --port 8766

--deadline S aborts generation that has not finished within S seconds (exit 3);
nothing is written or published when it does.
"""
import argparse
from functools import lru_cache
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
import json
import os
import sys
import time
from pathlib import Path
from urllib.parse import urlparse, parse_qs
from mapgen import city, trenches, village, city2
from mapgen.render import svg
from mapgen.validate import validate
from mapgen.native import export as export_native


KINDS=('city','trenches','village','city2')


def generate(kind,seed,damage,deadline=None):
    if deadline is None:
        return _generate(kind,seed,damage)
    return _build(kind,seed,damage,deadline)


@lru_cache(maxsize=12)
def _generate(kind,seed,damage):
    return _build(kind,seed,damage,None)


def _build(kind,seed,damage,deadline):
    if kind not in KINDS or not 0<=seed<=4294967295 or not 0<=damage<=1:
        raise ValueError('Choose city, trenches, village or city2, seed 0–4294967295, damage 0–1.')
    if kind in ('village','city2'):
        try:
            m=(city2 if kind=='city2' else village).generate(seed,damage,deadline=deadline)
        except village.GenerationFailed as error:
            raise ValueError(str(error))
        m['meta']=dict(cover='validated examples supplement cover derived from all eligible physical geometry',
                       buildings='two-storey houses and farmhouses have interior stairs and upper firing windows; roofs are decorative',
                       runtime_integration=True)
        if kind=='city2':
            # Jordan accepted the city2 look on 23 September 2026; the importer accepts the kind (ae3224df477f0f4c).
            m['meta'].update(buildings='connected native rectangular wings; each upper floor owns its stairs and windows',
                             runtime_integration=True)
        if not m['validation']['passed']:
            raise ValueError('; '.join(m['validation']['errors'][:8]))
        return dict(map=m,svg=svg(m))
    m=(city if kind=='city' else trenches).generate(seed,damage)
    m['meta']=dict(cover='validated examples supplement cover derived from all eligible physical geometry',
                   buildings='single-storey shells; decorative roofs do not imply upper floors',
                   runtime_integration=True)
    m['validation']=validate(m)
    if not m['validation']['passed']:
        raise ValueError('; '.join(m['validation']['errors'][:8]))
    return dict(map=m,svg=svg(m))


def preview(samples,unreal=False):
    template=(Path(__file__).parent/'mapgen'/'preview.html').read_text()
    return template.replace('/*SAMPLES*/{}',json.dumps(samples).replace('</','<\\/')).replace('/*UNREAL*/false','true' if unreal else 'false')


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--seed',type=int,default=17)
    parser.add_argument('--damage',type=float,default=.32)
    parser.add_argument('--output',type=Path,default=Path('.local/mapgen/preview'))
    parser.add_argument('--serve',action='store_true')
    parser.add_argument('--unreal',action='store_true',help='Also write the two native maps to Unreal/Config/GeneratedMaps')
    parser.add_argument('--mirror',type=Path,help='Existing Windows build mirror to receive generated map data')
    parser.add_argument('--port',type=int,default=8766)
    parser.add_argument('--kind',choices=KINDS,help='Generate one family (village and city2 only when named)')
    parser.add_argument('--deadline',type=float,help='Abort, writing nothing, if generation takes longer than this many seconds')
    parser.add_argument('--native-target',type=Path,help='Project directory to receive Config/GeneratedMaps (editor integration)')
    args=parser.parse_args()
    # city2 publication was gated until Jordan accepted the look (23 September 2026); it now publishes like the village.
    deadline=time.monotonic()+args.deadline if args.deadline is not None else None
    try:
        samples={kind:generate(kind,args.seed,args.damage,deadline) for kind in ((args.kind,) if args.kind else ('city','trenches'))}
        if deadline is not None and time.monotonic()>deadline:
            raise village.DeadlineExceeded('generation deadline exceeded; no map was written')
    except village.DeadlineExceeded as error:
        print(f'deadline: {error}',file=sys.stderr,flush=True)
        sys.exit(3)
    args.output.mkdir(parents=True,exist_ok=True)
    for kind,data in samples.items():
        (args.output/f'{kind}-{args.seed}.json').write_text(json.dumps(data['map'],indent=2)+'\n')
        (args.output/f'{kind}-{args.seed}.svg').write_text(data['svg'])
        (args.output/f'{kind}-{args.seed}.army').write_text(export_native(data['map']))
        if args.native_target:
            folder=args.native_target/'Config'/'GeneratedMaps';folder.mkdir(parents=True,exist_ok=True)
            temporary=folder/f'{kind}.army.{os.getpid()}.tmp';temporary.write_text(export_native(data['map']));temporary.replace(folder/f'{kind}.army')
        summary={k:v for k,v in data['map']['validation'].items() if k!='support'}
        print(kind,json.dumps(summary),flush=True)
    def publish(data):
        kind=data['map']['kind'];text=export_native(data['map'])
        targets=[Path(__file__).resolve().parents[1]/'Unreal']
        if args.mirror:
            if not (args.mirror/'.army-build-mirror').exists():
                raise ValueError('Destination is not an existing Army build mirror')
            targets.append(args.mirror)
        for target in targets:
            folder=target/'Config'/'GeneratedMaps';folder.mkdir(parents=True,exist_ok=True)
            temporary=folder/f'{kind}.army.{os.getpid()}.tmp';temporary.write_text(text);temporary.replace(folder/f'{kind}.army')
    if args.unreal:
        for data in samples.values():publish(data)
    html=preview(samples,args.unreal).encode()
    (args.output/'index.html').write_bytes(html)
    if not args.serve:
        print(f'Preview: {(args.output/"index.html").resolve()}')
        return

    class Handler(BaseHTTPRequestHandler):
        def do_POST(self):
            origin=self.headers.get('Origin','')
            allowed=(f'http://localhost:{args.port}',f'http://127.0.0.1:{args.port}')
            if self.path!='/api/publish' or not args.unreal or origin not in allowed:
                self.send_error(403);return
            try:
                size=int(self.headers.get('Content-Length','0'))
                if size<=0 or size>1024:raise ValueError('Invalid publish request')
                request=json.loads(self.rfile.read(size));data=generate(request['kind'],int(request['seed']),float(request['damage']))
                publish(data);body=json.dumps(dict(message='Sent to Unreal. Select this map, then press G in preparation to reload it.')).encode();status=200
            except (ValueError,KeyError,TypeError,OSError) as error:
                body=json.dumps(dict(error=str(error))).encode();status=400
            self.send_response(status);self.send_header('Content-Type','application/json');self.send_header('Content-Length',str(len(body)));self.end_headers();self.wfile.write(body)
        def do_GET(self):
            url=urlparse(self.path)
            status=200
            try:
                if url.path=='/':
                    body,content_type=html,'text/html; charset=utf-8'
                elif url.path=='/api/generate':
                    q=parse_qs(url.query)
                    data=generate(q.get('kind',['city'])[0],int(q.get('seed',['17'])[0]),float(q.get('damage',['.32'])[0]))
                    body,content_type=json.dumps(data).encode(),'application/json'
                else:
                    status,body,content_type=404,b'Not found','text/plain'
            except (ValueError,OverflowError) as error:
                status,body,content_type=400,json.dumps(dict(error=str(error))).encode(),'application/json'
            self.send_response(status);self.send_header('Content-Type',content_type)
            self.send_header('Content-Length',str(len(body)));self.send_header('Cache-Control','no-store')
            self.end_headers();self.wfile.write(body)
        def log_message(self,*args): pass

    print(f'Local preview: http://localhost:{args.port}',flush=True)
    ThreadingHTTPServer(('127.0.0.1',args.port),Handler).serve_forever()


if __name__=='__main__':
    main()
