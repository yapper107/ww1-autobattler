"""Pool chain rows per arm and print the covering-fire chain. Usage: python3 pool.py ARM [ARM...]"""
import json, glob, sys, random
from collections import defaultdict
from pathlib import Path
ROWS = Path(__file__).resolve().parents[2]/'.local/covering/rows'
def load(arm):
    return [json.load(open(f)) for f in sorted(glob.glob(str(ROWS/arm/'*.json')))]
def tot(rows, sec):
    d = defaultdict(float)
    for r in rows:
        for k, v in r[sec].items(): d[k] += v
    return d
def ci(rows, fn, B=400):
    random.seed(7); vals = []
    for _ in range(B):
        smp = [random.choice(rows) for _ in rows]
        try: vals.append(fn(smp))
        except ZeroDivisionError: pass
    vals.sort(); return vals[int(.025*len(vals))], vals[int(.975*len(vals))-1]
def rate(rows, sec, a, b):
    t = tot(rows, sec); return t[a]/t[b]
def show(arm):
    R = load(arm); n = len(R); f = lambda x: f'{x:.3f}'
    print(f'==== {arm}: {n} battles ====')
    ex, st, le = tot(R, 'exposure'), tot(R, 'still'), tot(R, 'lethality')
    hits = {'moving, in view': ex['seen_hits'], 'moving, unseen': ex['unseen_hits']}
    secs = {'moving, in view': ex['seen_s'], 'moving, unseen': ex['unseen_s']}
    for s, lab in ((0, 'standing'), (1, 'crouched'), (2, 'prone')):
        hits[f'still {lab}, in view'] = st[f'seen_st{s}_hits']; secs[f'still {lab}, in view'] = st[f'seen_st{s}_s']
        hits[f'still {lab}, unseen'] = st[f'unseen_st{s}_hits']; secs[f'still {lab}, unseen'] = st[f'unseen_st{s}_s']
    H = sum(hits.values())
    print(f'hits per battle {H/n:.1f}; casualties per battle {le["casualties"]/n:.1f}; friendly hits per battle {le["friendly_hits"]/n:.1f}')
    print('where hits land (share of hits | man-seconds per battle | hits per 100 s in that state):')
    for k in hits: print(f'   {k:26s} {hits[k]/H:6.1%} | {secs[k]/n:7.0f} s | {100*hits[k]/max(secs[k],1e-9):.2f}')
    ep, sp = tot(R, 'episodes'), tot(R, 'speed')
    print(f'exposed runs per battle {ep["runs"]/n:.0f}; mean {ep["seconds"]/ep["runs"]:.2f} s, {ep["dist"]/ep["runs"]:.1f} m, {ep["dist"]/ep["seconds"]:.2f} m/s; sprinting {ep["sprint_frames"]/ep["frames"]:.1%} of exposed frames')
    bins = ['<2 s', '2-4 s', '4-6 s', '6-10 s', '10-20 s', '20+ s']
    print('   runs by length (share, P(hit during run)):', ', '.join(f'{b} {ep.get(f"dur{i}",0)/ep["runs"]:.0%} ({ep.get(f"dur{i}_hit",0)/max(ep.get(f"dur{i}",0),1):.0%})' for i, b in enumerate(bins)))
    allmv = sum(v for k, v in sp.items() if k.startswith('bin'))
    print('   all moving frames by speed:', ', '.join(f'{i*0.5:.1f}-{i*0.5+0.5:.1f} {sp.get(f"bin{i}",0)/allmv:.0%}' for i in range(1, 10)), f'| sprint flag {sp["sprint"]/(sp["sprint"]+sp["no_sprint"]):.1%}')
    cv, un, uf = tot(R, 'cover'), tot(R, 'unpinned'), tot(R, 'underfire')
    T = cv['none_s']+cv['some_s']+cv['all_s']
    print(f'moving in view: {T/n:.0f} man-s per battle, {ex["observers"]/(T/0.2):.1f} enemies see him on average')
    for c, lab in (('none', 'no watcher pinned'), ('some', 'some pinned'), ('all', 'every watcher pinned')):
        print(f'   {lab:22s} {cv[c+"_s"]/T:6.1%} of the time, hits per 100 s {100*cv[c+"_hits"]/max(cv[c+"_s"],1e-9):.2f}')
    for c, lab in (('none', 'no watcher under fire'), ('some', 'some under fire'), ('all', 'every watcher under fire')):
        print(f'   {lab:22s} {uf[c+"_s"]/T:6.1%} of the time, hits per 100 s {100*uf[c+"_hits"]/max(uf[c+"_s"],1e-9):.2f}')
    print('   by unpinned watchers:', ', '.join(f'{k} {un.get(f"u{k}_s",0)/T:.0%} ({100*un.get(f"u{k}_hits",0)/max(un.get(f"u{k}_s",0),1e-9):.2f}/100 s)' for k in range(5)))
    lo, hi = ci(R, lambda s: rate(s,'cover','none_hits','none_s')); lo2, hi2 = ci(R, lambda s: rate(s,'underfire','all_hits','all_s'))
    print(f'   95% intervals, hits/100 s: none pinned {100*lo:.2f}-{100*hi:.2f}; every watcher under fire {100*lo2:.2f}-{100*hi2:.2f}')
    sh = tot(R, 'shooters')
    print(f'rounds at moving men per battle {sh["all_n"]/n:.0f}, hit {sh["all_hit"]/sh["all_n"]:.1%}')
    for key, lab in (('supp_0','shooter unsuppressed'),('supp_s','shooter suppressed <rise'),('supp_r','shooter in rise band'),('supp_p','shooter pinned'),
                     ('fired_on_0','not fired on (3 s)'),('fired_on_1','fired on by movers side'),('rifle','rifle'),('mg','machine gun'),
                     ('losx','no line at the shot (track)'),('los0','line <1 s old'),('los1','line 1-2 s'),('los2','line 2-3 s'),('los3','line 3-5 s'),('los4','line 5-10 s'),('los5','line 10+ s')):
        if sh.get(key+'_n'): print(f'   {lab:30s} {sh[key+"_n"]/sh["all_n"]:6.1%} of rounds, hit {sh[key+"_hit"]/sh[key+"_n"]:.1%}')
    re = tot(R, 'reaction')
    for tag in ('free', 'pinned'):
        o = re[f'{tag}_onsets']
        if not o: continue
        fired = o-re[f'{tag}_no_round']
        print(f'{tag} enemy gains a line to a moving man: {o/n:.0f} per battle, line lasts {re[f"{tag}_line_s"]/o:.1f} s; fires at him {fired/o:.0%}; delay mean {re[f"{tag}_delay_sum"]/max(fired,1):.2f} s:',
              ', '.join(f'{b} {re.get(f"{tag}_d{i}",0)/max(fired,1):.0%}' for i,b in enumerate(['<1','1-2','2-3','3-5','5-10','10+'])))
    efx = tot(R, 'effect')
    print('rounds per second with an enemy in view, still, by own suppression (and hit share of all his rounds):')
    for b, lab in (('0','under 0.1'),('s','0.1 to rise'),('r','rise band'),('p','pinned (>= duck)')):
        print(f'   {lab:16s} {efx[b+"_s"]/n:6.0f} man-s/battle  {efx[b+"_rounds"]/max(efx[b+"_s"],1e-9):.2f} rounds/s  hit {efx[b+"_shot_hits"]/max(efx[b+"_shots"],1):.1%}')
    ar, pn = tot(R, 'area'), tot(R, 'pinned')
    print(f'machine-gun bursts per battle {ar["bursts"]/n:.0f}, {ar["rounds"]/ar["bursts"]:.1f} rounds; main target pinned by the burst {ar["target_pinned"]/ar["bursts"]:.0%}, target in view {ar["target_seen"]/ar["bursts"]:.0%}; stays pinned after it {ar.get("pinned_after_s",0)/max(ar["target_pinned"],1):.1f} s')
    print('   pinned share by range:', ', '.join(f'{b} {ar.get(f"target_r{i}_pinned",0)/max(ar.get(f"target_r{i}",0),1):.0%} (n {ar.get(f"target_r{i}",0):.0f})' for i,b in enumerate(['<25','25-50','50-100','100-150','150-250','250+'])))
    print('   pinned share by target stance:', ', '.join(f'{b} {ar.get(f"target_st{i}_pinned",0)/max(ar.get(f"target_st{i}",0),1):.0%} (n {ar.get(f"target_st{i}",0):.0f})' for i,b in enumerate(['standing','crouched','prone'])))
    for w in ('rifle', 'mg'):
        print(f'{w}: {le[w+"_rounds"]/n:.0f} rounds per battle, {le[w+"_rounds"]/max(le[w+"_hits"],1):.0f} rounds per enemy hit; by range (hit, near-miss on the aimed man):',
              ', '.join(f'{b} n{le.get(f"{w}_r{i}_n",0)/n:.0f} {le.get(f"{w}_r{i}_hit",0)/max(le.get(f"{w}_r{i}_n",0),1):.1%}/{le.get(f"{w}_r{i}_jump",0)/max(le.get(f"{w}_r{i}_n",0),1):.0%}' for i,b in enumerate(['<25','25-50','50-100','100-150','150-250','250+'])))
    print('hit share by target state:', ', '.join(f'{k[7:-2]} {le[k[:-2]+"_hit"]/le[k]:.1%} (n {le[k]/n:.0f})' for k in sorted(le) if k.startswith('target_') and k.endswith('_n')))
    for tm in (0, 1):
        print(f'team {tm}: pinned {pn[f"team{tm}_pinned_s"]/pn[f"team{tm}_alive_s"]:.1%} of alive time, mean pinned spell {pn[f"team{tm}_run_s"]/max(pn[f"team{tm}_runs"],1):.1f} s')
    w = [r['winner'] for r in R]; print('winner Azure/draw/Ember', w.count(0), w.count(-1), w.count(1))
if sys.argv[1] != "guns":
    for a in sys.argv[1:]: show(a)
def guns(arm):
    R = load(arm); n = len(R)
    ga, mc = tot(R, 'gunner'), tot(R, 'mgcover')
    G = sum(ga.values()); print(f'---- {arm}: machine gunner time (alive), {G/n/8:.0f} s per gun per battle')
    for k in sorted(ga, key=ga.get, reverse=True): print(f'   {k:28s} {ga[k]/G:6.1%}')
    T = sum(v for k, v in mc.items() if k.endswith('_s'))
    print('   a mover in view, his watchers and the guns (share of time, hits per 100 s):')
    for k in ('own_gun_on_a_watcher', 'other_gun_on_a_watcher', 'own_gun_on_someone_else', 'own_gun_silent', 'own_gun_down'):
        print(f'      {k:28s} {mc.get(k+"_s",0)/T:6.1%}  {100*mc.get(k+"_hits",0)/max(mc.get(k+"_s",0),1e-9):.2f}')
    S = mc.get('own_gun_silent_s', 0)
    print('   when his own gun is silent, the gun is:', ', '.join(f'{w} {mc.get(f"silent_{w}_s",0)/S:.0%} (has a line to a watcher {mc.get(f"silent_{w}_sees_watcher_s",0)/max(mc.get(f"silent_{w}_s",0),1e-9):.0%})' for w in ('moving','no_enemy_in_view','enemy_in_view','reloading','pinned')))
if __name__ == '__main__' and len(sys.argv) > 1 and sys.argv[1] == 'guns':
    for a in sys.argv[2:]: guns(a)
