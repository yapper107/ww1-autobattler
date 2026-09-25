import sys
import os
exec(open(os.path.join(os.path.dirname(os.path.abspath(__file__)),'pool.py')).read().split("if __name__ == '__main__' and len(sys.argv)")[0].replace('if sys.argv[1] != "guns":','if False:'))
PCT=('gun still with line to a watcher','all watchers pinned','own gun on watcher','own gun silent','gun moving share','gun firing share','OW never set','mates exposed before gun fires','enemy fires at new mover','Azure wins')
def metrics(arm):
    R=load(arm); n=len(R); ex=tot(R,'exposure'); cv=tot(R,'cover'); mc=tot(R,'mgcover'); ga=tot(R,'gunner'); tl=tot(R,'timeline'); le=tot(R,'lethality'); ep=tot(R,'episodes'); re=tot(R,'reaction')
    T=cv['none_s']+cv['some_s']+cv['all_s']; MT=sum(mc.get(k+'_s',0) for k in ('own_gun_on_a_watcher','other_gun_on_a_watcher','own_gun_on_someone_else','own_gun_silent','own_gun_down'))
    G=sum(ga.values()); fired=re['free_onsets']-re['free_no_round']; w=[r['winner'] for r in R]
    return {'hits/battle': (le['rifle_hits']+le['mg_hits'])/n,'Azure lost': le['casualties_team0']/n,'Ember lost': le['casualties_team1']/n,'Azure wins': w.count(0)/n,
     'moving in view s': T/n,'mover hits/100s': 100*ex['seen_hits']/ex['seen_s'],'all watchers pinned': cv['all_s']/T,
     'own gun on watcher': mc['own_gun_on_a_watcher_s']/MT,'own gun silent': mc['own_gun_silent_s']/MT,'gun moving share': ga['moving']/G,'gun firing share': ga['firing']/G,
     'MG rounds/battle': le['mg_rounds']/n,'OW assignments/gun': tl['assignments']/n/8,'OW never set': tl['never_set']/tl['assignments'],'OW held s': tl['held_s']/tl['assignments'],
     'order->1st round s': tl['first_round_s']/max(tl['fired'],1),'gun still with line to a watcher': mc.get('gun_still_line_any_s',0)/max(mc.get('gun_alive_s',0),1e-9),'mates exposed before gun fires': tl['mates_exposed_before_fire_s']/max(tl['mates_exposed_before_fire_s']+tl['mates_exposed_after_fire_s'],1e-9)}
arms=sys.argv[1].split(','); labels=sys.argv[2].split(',')
M={a:metrics(a) for a in arms}
print(f"{'':32s}"+''.join(f'{l:>16s}' for l in labels))
for k in M[arms[0]]:
    fmt=(lambda v: f'{v:16.1%}') if k in PCT else (lambda v: f'{v:16.2f}')
    print(f'{k:32s}'+''.join(fmt(M[a][k]) for a in arms))
