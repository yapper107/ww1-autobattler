#!/usr/bin/env python3
"""Serialized native benchmarks: first/repeated process runs, never labelled OS-cold."""
import argparse, json, re, subprocess
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__);p.add_argument('--binary',required=True);p.add_argument('--out',required=True);p.add_argument('--pairs',type=int,default=3);a=p.parse_args()
root=Path(a.out).resolve();root.mkdir(parents=True,exist_ok=True);reports=root/'reports'
report_arg=subprocess.check_output(['wslpath','-w',str(reports)],text=True).strip() if a.binary.lower().endswith('.exe') else str(reports)
version=subprocess.check_output([a.binary,'--version'],text=True).strip();results=[]
for traced,pairs in [(True,a.pairs),(False,1)]:
    for seed in (107,108,109):
        for pair in range(pairs):
            cmd=[a.binary,'--seed',str(seed),'--seconds','360','--repeat','2','--out',report_arg]+([] if traced else ['--no-trace'])
            process=subprocess.run(cmd,text=True,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,check=True)
            with (root/'raw.log').open('a') as log:log.write(process.stdout)
            for line in process.stdout.splitlines():
                values=dict(re.findall(r'(seed|repeat|simulation|export|total|peak_memory_bytes|digest)=([0-9.e+-]+)',line))
                if 'simulation' not in values:continue
                results.append(dict(build=version,pair=pair,trace=traced,process_run='first' if values['repeat']=='0' else 'repeated',**{k:(v if k=='digest' else float(v)) for k,v in values.items()}))
            (root/'measurements.json').write_text(json.dumps(results,indent=2)+'\n')
            print(f'{version}: seed {seed}, pair {pair+1}, trace {traced} complete',flush=True)
