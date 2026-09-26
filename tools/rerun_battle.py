#!/usr/bin/env python3
"""Recreate a recorded configuration with optional focused diagnostic tracing."""
import argparse,json,subprocess,sys
from pathlib import Path
p=argparse.ArgumentParser(description=__doc__);p.add_argument('run');p.add_argument('--binary',default='.local/lab/battle-lab');p.add_argument('--out',default='.local/battles');p.add_argument('--soldier',type=int);p.add_argument('--squad',type=int);p.add_argument('--from',dest='start',type=float,default=0);p.add_argument('--to',type=float,default=600);a=p.parse_args()
root=Path(a.run)
if root.name=='latest.json':root=root.parent/json.loads(root.read_text())['run']
if not (root/'manifest.json').exists():root=root/json.loads((root/'latest.json').read_text())['run']
m=json.loads((root/'manifest.json').read_text())
version=subprocess.check_output([a.binary,'--version'],text=True).strip()
if version!=m['build']:print('Build differs from the recorded run: this rerun is a comparison, not proof of exact reproduction.',flush=True)
output=a.out
if sys.platform=='linux' and Path(a.binary).suffix.lower()=='.exe':
    output=subprocess.check_output(['wslpath','-w',str(Path(a.out).resolve())],text=True).strip()
cmd=[a.binary,'--seed',str(m['seed']),'--seconds',str(m['duration_limit']),'--doctrine',str(m['doctrine']),'--approach',str(m['approach']),'--out',output,'--detail','--from',str(a.start),'--to',str(a.to)]
cmd+=['--legacy-ai']
if m.get('digest_kind')=='lean':cmd+=['--lean']
cmd+=['--terrain',str(m.get('terrain',0))]
if m.get('battlefield_file'):
    map_path=str((root/m['battlefield_file']).resolve())
    if sys.platform=='linux' and Path(a.binary).suffix.lower()=='.exe':
        map_path=subprocess.check_output(['wslpath','-w',map_path],text=True).strip()
    cmd+=['--map',map_path,'--map-digest',str(m['battlefield_digest'])]

cmd+=['--ember-doctrine',str(m.get('ember_doctrine',0))]
if m.get('neural_policy'):
    model_path=str((root/m['policy_file']).resolve())
    if sys.platform=='linux' and Path(a.binary).suffix.lower()=='.exe':
        model_path=subprocess.check_output(['wslpath','-w',model_path],text=True).strip()
    cmd+=['--neural-model',model_path,'--policy-digest',str(m['policy_digest'])]
elif m.get('policy_candidates'):cmd+=['--policy-candidates',str(m['policy_candidates'])]
for key,flag in [('moving_fire','--no-moving-fire'),('threat_aware_paths','--no-threat-aware-paths'),('stamina','--no-stamina'),('off_lane_paths','--no-off-lane-paths'),('order_pace','--no-order-pace'),
                  ('keep_action','--no-keep-action'),('keep_kind_reset','--no-keep-kind-reset'),('keep_commit_clear','--no-keep-commit-clear'),('muzzle_credit','--no-muzzle-credit'),
                  ('prone','--no-prone'),('concealment','--no-concealment'),('vaulting','--no-vaulting'),('retire_fallen','--no-retire-fallen'),('spawn_lanes','--no-spawn-lanes')]:  # on by default since 24 Sep 2026
    if key in m and not m[key]:cmd.append(flag)
# Plan 028 switches, written to the manifest only when on (off by default).
for key,flag in [('cover_graduated','--cover-graduated'),('cover_requests','--cover-requests'),('cover_reports','--cover-reports'),
                  ('cover_gun_aim','--cover-gun-aim'),('cover_shift','--cover-shift'),('cover_platoon','--cover-platoon'),
                  ('impact_suppression','--impact-suppression'),('nerve','--nerve'),('stacked_suppression','--stacked-suppression'),('gunner_compensation','--gunner-compensation'),
                  ('cover_quiet_release','--cover-quiet-release'),('cover_upper_stations','--cover-upper-stations'),('cover_rifle_base','--cover-rifle-base'),
                  ('no_covering_fire','--no-covering-fire'),('graded_peek','--graded-peek'),('keep_down','--keep-down'),('pinned_neighbours','--pinned-neighbours'),
                  ('cover_sector','--cover-sector')]:
    if m.get(key):cmd.append(flag)
if m.get('impact_radius') is not None:cmd+=['--impact-radius',str(m['impact_radius'])]  # plan 030 S1b: only when S1 is on at another radius
# Plan 030 M-S7: the run constants, written only with their rule on and only when not the table's.
for key,flag in [('peek_floor','--peek-floor'),('peek_curve','--peek-curve'),('keep_down_weight','--keep-down-weight'),('keep_down_grace','--keep-down-grace'),('neighbour_effect','--neighbour-effect')]:
    if m.get(key) is not None:cmd+=[flag,str(m[key])]
if m.get('cover_station_radius') is not None:cmd+=['--cover-station-radius',str(m['cover_station_radius'])]  # plan 030 M-S5: only when not 25
# Plan 031 D: the fire-and-movement drill's teams (written only when on) and its run constants (only when not the table's).
if m.get('fire_and_movement'):cmd+=['--fire-and-movement',m['fire_and_movement']]
for key,flag in [('fm_leg','--fm-leg'),('fm_fire_window','--fm-fire-window'),('fm_deadline','--fm-deadline')]:
    if m.get(key) is not None:cmd+=[flag,str(m[key])]
# Plan 031 G: the support gun's and the bipod's teams (written only when on) and their run constants (only when not the table's).
for key,flag in [('gun_support','--gun-support'),('gun_bipod','--gun-bipod')]:
    if m.get(key):cmd+=[flag,m[key]]
# Stage G is the battle_cli default since 25 Sep 2026 and its keys are written only when on: a manifest without them
# (older, or run with --no-gun-*) was fought without them.
if not m.get('gun_support'):cmd+=['--no-gun-support']
if not m.get('gun_bipod'):cmd+=['--no-gun-bipod']
# Jordan's suppression design (plan 030 M-S7) is the battle_cli default since 25 Sep 2026 and its keys are written
# only when on: without them the battle was fought without it.
for key,flag in [('graded_peek','--no-graded-peek'),('keep_down','--no-keep-down'),('pinned_neighbours','--no-pinned-neighbours')]:
    if not m.get(key):cmd.append(flag)
for key,flag in [('gun_burst','--gun-burst'),('gun_beat','--gun-beat'),('gun_rotate','--gun-rotate'),('gun_threat_bonus','--gun-threat-bonus'),
                  ('gun_mover_weight','--gun-mover-weight'),('gun_bipod_factor','--gun-bipod-factor')]:
    if m.get(key) is not None:cmd+=[flag,str(m[key])]
# Plan 032: the grenade teams (written only when on) and the table's entries that differ from the defaults.
if m.get('grenades'):cmd+=['--grenades',m['grenades']]
for key,value in (m.get('grenade_params') or {}).items():cmd+=['--grenade-param',f'{key}={value!r}']
if m.get('roster_seed'):cmd+=['--roster-seed',str(m['roster_seed'])]
# Plan 033: destruction, its test charges and its table entries that differ from the defaults (written only when on).
if m.get('destruction'):
    cmd+=['--destruction']
    for charge in m.get('test_charges',[]):cmd+=['--test-charge',','.join(repr(float(v)) for v in charge)]
    for name,value in m.get('destruction_params',{}).items():cmd+=['--destruction-param',f'{name}={value!r}']
if m.get('foundations_policy'):cmd+=['--foundations','--estimate-bias',str(m.get('estimate_bias',0))]
if m.get('cognition_policy') or m.get('drills_policy'):
    cmd+=['--drills' if m.get('drills_policy') else '--cognition','--report-delay',str(m.get('report_delay',.75)),'--judgment',str(m.get('judgment',.7)),'--risk',str(m.get('risk',.5)),'--adaptability',str(m.get('adaptability',.7))]
    if m.get('full_vision'):cmd+=['--full-vision']
if m.get('leader_effects'):
    cmd+=['--leader-effects']
    for side,profile in zip(('azure','ember'),m['platoon_profiles']):cmd+=['--'+side+'-leader',','.join(str(v) for v in profile)]
if m.get('equal_troops'):cmd+=['--equal-troops']
if m.get('recovery_policy'):cmd+=['--recovery']
if m.get('scenario_family', 'none') != 'none':cmd+=['--generated',m['scenario_family'],'--gen-seed',str(m['gen_seed'])]
if m.get('static_defence'):
    defence=m['static_defence']
    cmd+=['--static-defence',defence['layout'],'--defenders',str(defence['defenders']),'--defence-seed',str(defence['seed'])]
if m.get('encounter'):cmd+=['--encounter',str(m['encounter'])]
if not m['support_weapon']:cmd+=['--no-mg']
if m.get('squad_machine_guns')==0:cmd+=['--platoon-mg']  # manifests before 24 Sep 2026 lack the key: one gun per platoon then
if a.soldier is not None:cmd+=['--soldier',str(a.soldier)]
if a.squad is not None:cmd+=['--squad',str(a.squad)]
raise SystemExit(subprocess.call(cmd))
