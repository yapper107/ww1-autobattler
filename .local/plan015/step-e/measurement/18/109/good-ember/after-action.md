# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/18/109/good-ember/battle-109-1789674059686423148`

## Battle summary

**Ember** · 360 s · 771 shots.

### Turning points

- 17.9s, squad 4: contact (events line 234). First recorded contact.
- 23.8s, squad 1: withdrawal ([trace 4774](#trace-4774)). 70.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 45.9s, squad 0: help call ([trace 10793](#trace-10793)). 99.6s, squad 1: answered a neighbour with support by fire.
- 47.2s, squad 0: help call ([trace 11132](#trace-11132)). 99.6s, squad 1: answered a neighbour with support by fire.
- 48.4s, squad 1: help call ([trace 11237](#trace-11237)). No completion observed before termination.
- 89.9s, squad 0: withdrawal ([trace 17658](#trace-17658)). 137.9s, squad 0: took cover and returned fire.
- 99.6s, squad 1: help answer ([trace 18346](#trace-18346)). 127.0s, squad 1: took cover and returned fire.
- 126.0s, squad 1: help call ([trace 21270](#trace-21270)). No completion observed before termination.
- 130.8s, squad 1: withdrawal ([trace 21494](#trace-21494)). 151.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 137.9s, squad 0: help call ([trace 21836](#trace-21836)). No completion observed before termination.
- 5 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 77 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, answered a neighbour with support by fire and 2 further drill types; withdrew; 36 shots, 2/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 510 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 148 shots, 0/4 lost.

### Decisions and attribution

At 108.0s, squad 1 chose FightHere: nearest known group ([trace 20402](#trace-20402)), followed by 12 shots and 1 own casualties; estimate 14.5 against 0 distinct squad-reported contacts; At 23.8s, squad 1 chose broke contact ([trace 4774](#trace-4774)), followed by 4 shots and 1 own casualties; estimate 10.1 against 0 distinct squad-reported contacts; At 331.5s, squad 1 chose took cover and returned fire ([trace 29866](#trace-29866)), followed by 2 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1560](#trace-1560)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4986139127632206, 'next_transition': 1597}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1562](#trace-1562)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019822311209246, 'next_transition': 1744}.

### Communication

267 matched deliveries (mean 0.68s, max 5.50s); 304 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.90s, squad 4, contact, evidence events line 234: First recorded contact; .
- 23.80s, squad 1, withdrawal, evidence 4774: BreakContact: believed ratio at least two without superiority; 70.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 45.90s, squad 0, help call, evidence 10793: NeedSupport; 99.6s, squad 1: answered a neighbour with support by fire.
- 47.15s, squad 0, help call, evidence 11132: NeedSupport; 99.6s, squad 1: answered a neighbour with support by fire.
- 48.40s, squad 1, help call, evidence 11237: NeedSupport; No completion observed before termination.
- 89.90s, squad 0, withdrawal, evidence 17658: BreakContact: believed ratio at least two without superiority; 137.9s, squad 0: took cover and returned fire.
- 99.60s, squad 1, help answer, evidence 18346: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 127.0s, squad 1: took cover and returned fire.
- 126.05s, squad 1, help call, evidence 21270: NeedSupport; No completion observed before termination.
- 130.80s, squad 1, withdrawal, evidence 21494: BreakContact: believed ratio at least two without superiority; 151.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 137.85s, squad 0, help call, evidence 21836: NeedSupport; No completion observed before termination.
- 141.25s, squad 0, withdrawal, evidence 22026: BreakContact: believed ratio at least two without superiority; 161.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 216.20s, squad 1, withdrawal, evidence 25023: BreakContact: believed ratio at least two without superiority; 238.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 334.85s, squad 1, withdrawal, evidence 30211: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 346.00s, squad 0, withdrawal, evidence 31365: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 352.70s, squad 1, help call, evidence 31797: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.765544737037564, 'next_transition': 956}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.765544737037564, 'next_transition': 956}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.765544737037564, 'next_transition': 956}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309540395754983, 'next_transition': 145}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309540395754983, 'next_transition': 145}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309540395754983, 'next_transition': 145}.
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-770"></a>
<a id="trace-772"></a>
<a id="trace-793"></a>
<a id="trace-795"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
<a id="trace-842"></a>
<a id="trace-844"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-960"></a>
<a id="trace-962"></a>
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1026"></a>
<a id="trace-1028"></a>
<a id="trace-1072"></a>
<a id="trace-1074"></a>
<a id="trace-1095"></a>
<a id="trace-1097"></a>
<a id="trace-1127"></a>
<a id="trace-1129"></a>
<a id="trace-1159"></a>
<a id="trace-1161"></a>
<a id="trace-1192"></a>
<a id="trace-1194"></a>
<a id="trace-1210"></a>
<a id="trace-1212"></a>
<a id="trace-1230"></a>
<a id="trace-1232"></a>
<a id="trace-1319"></a>
<a id="trace-1321"></a>
<a id="trace-1343"></a>
<a id="trace-1345"></a>
<a id="trace-1555"></a>
<a id="trace-1557"></a>
<a id="trace-1601"></a>
<a id="trace-1603"></a>
<a id="trace-1641"></a>
<a id="trace-1643"></a>
<a id="trace-1673"></a>
<a id="trace-1675"></a>
<a id="trace-1709"></a>
<a id="trace-1711"></a>
<a id="trace-1740"></a>
<a id="trace-1742"></a>
<a id="trace-2077"></a>
<a id="trace-2079"></a>
<a id="trace-2108"></a>
<a id="trace-2110"></a>
<a id="trace-2197"></a>
<a id="trace-2199"></a>
<a id="trace-2220"></a>
<a id="trace-2222"></a>
<a id="trace-2252"></a>
<a id="trace-2254"></a>
<a id="trace-2281"></a>
<a id="trace-2283"></a>
<a id="trace-2567"></a>
<a id="trace-2569"></a>
<a id="trace-2597"></a>
<a id="trace-2599"></a>
<a id="trace-2647"></a>
<a id="trace-2649"></a>
<a id="trace-3062"></a>
<a id="trace-3064"></a>
<a id="trace-3897"></a>
<a id="trace-3899"></a>
<a id="trace-4357"></a>
<a id="trace-4359"></a>
<a id="trace-4486"></a>
<a id="trace-4488"></a>
<a id="trace-4540"></a>
<a id="trace-4542"></a>
<a id="trace-4603"></a>
<a id="trace-4605"></a>
<a id="trace-4659"></a>
<a id="trace-4661"></a>
<a id="trace-4708"></a>
<a id="trace-4710"></a>
<a id="trace-4723"></a>
<a id="trace-4725"></a>
<a id="trace-4754"></a>
<a id="trace-4756"></a>
<a id="trace-4771"></a>
<a id="trace-4773"></a>
<a id="trace-5193"></a>
<a id="trace-5195"></a>
<a id="trace-5388"></a>
<a id="trace-5390"></a>
<a id="trace-5496"></a>
<a id="trace-5498"></a>
<a id="trace-5533"></a>
<a id="trace-5535"></a>
<a id="trace-5569"></a>
<a id="trace-5571"></a>
<a id="trace-5601"></a>
<a id="trace-5603"></a>
<a id="trace-6052"></a>
<a id="trace-6054"></a>
<a id="trace-6075"></a>
<a id="trace-6077"></a>
<a id="trace-6538"></a>
<a id="trace-6540"></a>
<a id="trace-6568"></a>
<a id="trace-6570"></a>
<a id="trace-7026"></a>
<a id="trace-7028"></a>
<a id="trace-7068"></a>
<a id="trace-7070"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
<a id="trace-7197"></a>
<a id="trace-7199"></a>
<a id="trace-7224"></a>
<a id="trace-7226"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7543"></a>
<a id="trace-7545"></a>
<a id="trace-7562"></a>
<a id="trace-7564"></a>
<a id="trace-7592"></a>
<a id="trace-7594"></a>
<a id="trace-7615"></a>
<a id="trace-7617"></a>
<a id="trace-7647"></a>
<a id="trace-7649"></a>
<a id="trace-7665"></a>
<a id="trace-7667"></a>
<a id="trace-7748"></a>
<a id="trace-7750"></a>
<a id="trace-7765"></a>
<a id="trace-7767"></a>
<a id="trace-7782"></a>
<a id="trace-7784"></a>
<a id="trace-7807"></a>
<a id="trace-7809"></a>
<a id="trace-7827"></a>
<a id="trace-7829"></a>
<a id="trace-7944"></a>
<a id="trace-7946"></a>
<a id="trace-7966"></a>
<a id="trace-7968"></a>
<a id="trace-7985"></a>
<a id="trace-7987"></a>
<a id="trace-8033"></a>
<a id="trace-8035"></a>
<a id="trace-8062"></a>
<a id="trace-8064"></a>
<a id="trace-8157"></a>
<a id="trace-8159"></a>
<a id="trace-8193"></a>
<a id="trace-8195"></a>
<a id="trace-8235"></a>
<a id="trace-8237"></a>
<a id="trace-8279"></a>
<a id="trace-8281"></a>
<a id="trace-10537"></a>
<a id="trace-10539"></a>
<a id="trace-10556"></a>
<a id="trace-10558"></a>
<a id="trace-10599"></a>
<a id="trace-10601"></a>
<a id="trace-10614"></a>
<a id="trace-10616"></a>
<a id="trace-10643"></a>
<a id="trace-10645"></a>
<a id="trace-10664"></a>
<a id="trace-10666"></a>
<a id="trace-10747"></a>
<a id="trace-10749"></a>
<a id="trace-10780"></a>
<a id="trace-10782"></a>
<a id="trace-10833"></a>
<a id="trace-10835"></a>
<a id="trace-10855"></a>
<a id="trace-10857"></a>
<a id="trace-11153"></a>
<a id="trace-11155"></a>
<a id="trace-11192"></a>
<a id="trace-11194"></a>
<a id="trace-11232"></a>
<a id="trace-11234"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11594"></a>
<a id="trace-11596"></a>
<a id="trace-11612"></a>
<a id="trace-11614"></a>
<a id="trace-11704"></a>
<a id="trace-11706"></a>
<a id="trace-11729"></a>
<a id="trace-11731"></a>
<a id="trace-11813"></a>
<a id="trace-11815"></a>
<a id="trace-11839"></a>
<a id="trace-11841"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11899"></a>
<a id="trace-11901"></a>
<a id="trace-11932"></a>
<a id="trace-11934"></a>
<a id="trace-11967"></a>
<a id="trace-11969"></a>
<a id="trace-11991"></a>
<a id="trace-11993"></a>
<a id="trace-12014"></a>
<a id="trace-12016"></a>
<a id="trace-12089"></a>
<a id="trace-12091"></a>
<a id="trace-12112"></a>
<a id="trace-12114"></a>
<a id="trace-12140"></a>
<a id="trace-12142"></a>
<a id="trace-15129"></a>
<a id="trace-15131"></a>
<a id="trace-15171"></a>
<a id="trace-15173"></a>
<a id="trace-15217"></a>
<a id="trace-15219"></a>
<a id="trace-15260"></a>
<a id="trace-15262"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15380"></a>
<a id="trace-15382"></a>
<a id="trace-15489"></a>
<a id="trace-15491"></a>
<a id="trace-15537"></a>
<a id="trace-15539"></a>
<a id="trace-15574"></a>
<a id="trace-15576"></a>
<a id="trace-15595"></a>
<a id="trace-15597"></a>
<a id="trace-15625"></a>
<a id="trace-15627"></a>
<a id="trace-15644"></a>
<a id="trace-15646"></a>
<a id="trace-15676"></a>
<a id="trace-15678"></a>
<a id="trace-15693"></a>
<a id="trace-15695"></a>
<a id="trace-15838"></a>
<a id="trace-15840"></a>
<a id="trace-15881"></a>
<a id="trace-15883"></a>
<a id="trace-15969"></a>
<a id="trace-15971"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16030"></a>
<a id="trace-16032"></a>
<a id="trace-16049"></a>
<a id="trace-16051"></a>
<a id="trace-16091"></a>
<a id="trace-16093"></a>
<a id="trace-16114"></a>
<a id="trace-16116"></a>
<a id="trace-16134"></a>
<a id="trace-16136"></a>
<a id="trace-16157"></a>
<a id="trace-16159"></a>
<a id="trace-16348"></a>
<a id="trace-16350"></a>
<a id="trace-16432"></a>
<a id="trace-16434"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
<a id="trace-16484"></a>
<a id="trace-16486"></a>
<a id="trace-16503"></a>
<a id="trace-16505"></a>
<a id="trace-16539"></a>
<a id="trace-16541"></a>
<a id="trace-16559"></a>
<a id="trace-16561"></a>
<a id="trace-16584"></a>
<a id="trace-16586"></a>
<a id="trace-16599"></a>
<a id="trace-16601"></a>
<a id="trace-16626"></a>
<a id="trace-16628"></a>
<a id="trace-16642"></a>
<a id="trace-16644"></a>
<a id="trace-16723"></a>
<a id="trace-16725"></a>
<a id="trace-16737"></a>
<a id="trace-16739"></a>
<a id="trace-16759"></a>
<a id="trace-16761"></a>
<a id="trace-16770"></a>
<a id="trace-16772"></a>
<a id="trace-16787"></a>
<a id="trace-16789"></a>
<a id="trace-16798"></a>
<a id="trace-16800"></a>
<a id="trace-16812"></a>
<a id="trace-16814"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-16843"></a>
<a id="trace-16845"></a>
<a id="trace-16857"></a>
<a id="trace-16859"></a>
<a id="trace-16932"></a>
<a id="trace-16934"></a>
<a id="trace-16947"></a>
<a id="trace-16949"></a>
<a id="trace-16965"></a>
<a id="trace-16967"></a>
<a id="trace-16976"></a>
<a id="trace-16978"></a>
<a id="trace-16994"></a>
<a id="trace-16996"></a>
<a id="trace-17005"></a>
<a id="trace-17007"></a>
<a id="trace-17021"></a>
<a id="trace-17023"></a>
<a id="trace-17032"></a>
<a id="trace-17034"></a>
<a id="trace-17050"></a>
<a id="trace-17052"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
<a id="trace-17155"></a>
<a id="trace-17157"></a>
<a id="trace-17168"></a>
<a id="trace-17170"></a>
<a id="trace-17202"></a>
<a id="trace-17204"></a>
<a id="trace-17389"></a>
<a id="trace-17391"></a>
<a id="trace-17518"></a>
<a id="trace-17520"></a>
<a id="trace-17544"></a>
<a id="trace-17546"></a>
<a id="trace-17571"></a>
<a id="trace-17573"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
<a id="trace-17623"></a>
<a id="trace-17625"></a>
<a id="trace-17648"></a>
<a id="trace-17650"></a>
<a id="trace-17891"></a>
<a id="trace-17893"></a>
<a id="trace-17910"></a>
<a id="trace-17912"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17940"></a>
<a id="trace-17942"></a>
<a id="trace-17969"></a>
<a id="trace-17971"></a>
<a id="trace-17984"></a>
<a id="trace-17986"></a>
<a id="trace-18014"></a>
<a id="trace-18016"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18107"></a>
<a id="trace-18109"></a>
<a id="trace-18130"></a>
<a id="trace-18132"></a>
<a id="trace-18202"></a>
<a id="trace-18204"></a>
<a id="trace-18221"></a>
<a id="trace-18223"></a>
<a id="trace-18236"></a>
<a id="trace-18238"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18269"></a>
<a id="trace-18271"></a>
<a id="trace-18286"></a>
<a id="trace-18288"></a>
<a id="trace-18304"></a>
<a id="trace-18306"></a>
<a id="trace-18317"></a>
<a id="trace-18319"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-19875"></a>
<a id="trace-19877"></a>
<a id="trace-19947"></a>
<a id="trace-19949"></a>
<a id="trace-19964"></a>
<a id="trace-19966"></a>
<a id="trace-20092"></a>
<a id="trace-20094"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20133"></a>
<a id="trace-20135"></a>
<a id="trace-20150"></a>
<a id="trace-20152"></a>
<a id="trace-20173"></a>
<a id="trace-20175"></a>
<a id="trace-20186"></a>
<a id="trace-20188"></a>
<a id="trace-20212"></a>
<a id="trace-20214"></a>
<a id="trace-20229"></a>
<a id="trace-20231"></a>
<a id="trace-20307"></a>
<a id="trace-20309"></a>
<a id="trace-20323"></a>
<a id="trace-20325"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20359"></a>
<a id="trace-20361"></a>
<a id="trace-20376"></a>
<a id="trace-20378"></a>
<a id="trace-20393"></a>
<a id="trace-20395"></a>
<a id="trace-20419"></a>
<a id="trace-20421"></a>
<a id="trace-20434"></a>
<a id="trace-20436"></a>
<a id="trace-20460"></a>
<a id="trace-20462"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20562"></a>
<a id="trace-20564"></a>
<a id="trace-20580"></a>
<a id="trace-20582"></a>
<a id="trace-20595"></a>
<a id="trace-20597"></a>
<a id="trace-20611"></a>
<a id="trace-20613"></a>
<a id="trace-20633"></a>
<a id="trace-20635"></a>
<a id="trace-20646"></a>
<a id="trace-20648"></a>
<a id="trace-20665"></a>
<a id="trace-20667"></a>
<a id="trace-20675"></a>
<a id="trace-20677"></a>
<a id="trace-20691"></a>
<a id="trace-20693"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20856"></a>
<a id="trace-20858"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20900"></a>
<a id="trace-20902"></a>
<a id="trace-20913"></a>
<a id="trace-20915"></a>
<a id="trace-20933"></a>
<a id="trace-20935"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-20977"></a>
<a id="trace-20979"></a>
<a id="trace-21052"></a>
<a id="trace-21054"></a>
<a id="trace-21059"></a>
<a id="trace-21061"></a>
<a id="trace-21081"></a>
<a id="trace-21083"></a>
<a id="trace-21101"></a>
<a id="trace-21103"></a>
<a id="trace-21115"></a>
<a id="trace-21117"></a>
<a id="trace-21130"></a>
<a id="trace-21132"></a>
<a id="trace-21142"></a>
<a id="trace-21144"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21174"></a>
<a id="trace-21176"></a>
<a id="trace-21247"></a>
<a id="trace-21249"></a>
<a id="trace-21256"></a>
<a id="trace-21258"></a>
<a id="trace-21286"></a>
<a id="trace-21288"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21342"></a>
<a id="trace-21344"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21405"></a>
<a id="trace-21407"></a>
<a id="trace-21480"></a>
<a id="trace-21482"></a>
<a id="trace-21489"></a>
<a id="trace-21491"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21574"></a>
<a id="trace-21576"></a>
<a id="trace-21599"></a>
<a id="trace-21601"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21627"></a>
<a id="trace-21629"></a>
<a id="trace-21636"></a>
<a id="trace-21638"></a>
<a id="trace-21653"></a>
<a id="trace-21655"></a>
<a id="trace-21660"></a>
<a id="trace-21662"></a>
<a id="trace-21732"></a>
<a id="trace-21734"></a>
<a id="trace-21740"></a>
<a id="trace-21742"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21761"></a>
<a id="trace-21763"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21826"></a>
<a id="trace-21828"></a>
<a id="trace-21876"></a>
<a id="trace-21878"></a>
<a id="trace-21898"></a>
<a id="trace-21900"></a>
<a id="trace-21919"></a>
<a id="trace-21921"></a>
<a id="trace-21932"></a>
<a id="trace-21934"></a>
<a id="trace-22006"></a>
<a id="trace-22008"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22036"></a>
<a id="trace-22038"></a>
<a id="trace-22047"></a>
<a id="trace-22049"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
<a id="trace-22137"></a>
<a id="trace-22139"></a>
<a id="trace-22155"></a>
<a id="trace-22157"></a>
<a id="trace-22168"></a>
<a id="trace-22170"></a>
<a id="trace-22184"></a>
<a id="trace-22186"></a>
<a id="trace-22199"></a>
<a id="trace-22201"></a>
<a id="trace-22268"></a>
<a id="trace-22270"></a>
<a id="trace-22278"></a>
<a id="trace-22280"></a>
<a id="trace-22295"></a>
<a id="trace-22297"></a>
<a id="trace-22306"></a>
<a id="trace-22308"></a>
<a id="trace-22321"></a>
<a id="trace-22323"></a>
<a id="trace-22338"></a>
<a id="trace-22340"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22379"></a>
<a id="trace-22381"></a>
<a id="trace-22444"></a>
<a id="trace-22446"></a>
<a id="trace-22452"></a>
<a id="trace-22454"></a>
<a id="trace-22464"></a>
<a id="trace-22466"></a>
<a id="trace-22471"></a>
<a id="trace-22473"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22503"></a>
<a id="trace-22505"></a>
<a id="trace-22527"></a>
<a id="trace-22529"></a>
<a id="trace-22540"></a>
<a id="trace-22542"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22566"></a>
<a id="trace-22568"></a>
<a id="trace-22636"></a>
<a id="trace-22638"></a>
<a id="trace-22645"></a>
<a id="trace-22647"></a>
<a id="trace-22662"></a>
<a id="trace-22664"></a>
<a id="trace-22668"></a>
<a id="trace-22670"></a>
<a id="trace-22684"></a>
<a id="trace-22686"></a>
<a id="trace-22690"></a>
<a id="trace-22692"></a>
<a id="trace-22703"></a>
<a id="trace-22705"></a>
<a id="trace-22713"></a>
<a id="trace-22715"></a>
<a id="trace-22727"></a>
<a id="trace-22729"></a>
<a id="trace-22744"></a>
<a id="trace-22746"></a>
<a id="trace-22817"></a>
<a id="trace-22819"></a>
<a id="trace-22824"></a>
<a id="trace-22826"></a>
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22857"></a>
<a id="trace-22859"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-22877"></a>
<a id="trace-22879"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22898"></a>
<a id="trace-22900"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22921"></a>
<a id="trace-22923"></a>
<a id="trace-22990"></a>
<a id="trace-22992"></a>
<a id="trace-23000"></a>
<a id="trace-23002"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23026"></a>
<a id="trace-23028"></a>
<a id="trace-23046"></a>
<a id="trace-23048"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23066"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23072"></a>
<a id="trace-23082"></a>
<a id="trace-23084"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23154"></a>
<a id="trace-23156"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23175"></a>
<a id="trace-23177"></a>
<a id="trace-23181"></a>
<a id="trace-23183"></a>
<a id="trace-23197"></a>
<a id="trace-23199"></a>
<a id="trace-23203"></a>
<a id="trace-23205"></a>
<a id="trace-23219"></a>
<a id="trace-23221"></a>
<a id="trace-23229"></a>
<a id="trace-23231"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23252"></a>
<a id="trace-23254"></a>
<a id="trace-23320"></a>
<a id="trace-23322"></a>
<a id="trace-23327"></a>
<a id="trace-23329"></a>
<a id="trace-23341"></a>
<a id="trace-23343"></a>
<a id="trace-23349"></a>
<a id="trace-23351"></a>
<a id="trace-23367"></a>
<a id="trace-23369"></a>
<a id="trace-23375"></a>
<a id="trace-23377"></a>
<a id="trace-23389"></a>
<a id="trace-23391"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23423"></a>
<a id="trace-23425"></a>
<a id="trace-23496"></a>
<a id="trace-23498"></a>
<a id="trace-23505"></a>
<a id="trace-23507"></a>
<a id="trace-23520"></a>
<a id="trace-23522"></a>
<a id="trace-23527"></a>
<a id="trace-23529"></a>
<a id="trace-23546"></a>
<a id="trace-23548"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23573"></a>
<a id="trace-23575"></a>
<a id="trace-23589"></a>
<a id="trace-23591"></a>
<a id="trace-23615"></a>
<a id="trace-23617"></a>
<a id="trace-23626"></a>
<a id="trace-23628"></a>
<a id="trace-23762"></a>
<a id="trace-23764"></a>
<a id="trace-23783"></a>
<a id="trace-23785"></a>
<a id="trace-23800"></a>
<a id="trace-23802"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23851"></a>
<a id="trace-23853"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23877"></a>
<a id="trace-23879"></a>
<a id="trace-23942"></a>
<a id="trace-23944"></a>
<a id="trace-23953"></a>
<a id="trace-23955"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-24028"></a>
<a id="trace-24030"></a>
<a id="trace-24049"></a>
<a id="trace-24051"></a>
<a id="trace-24059"></a>
<a id="trace-24061"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24092"></a>
<a id="trace-24094"></a>
<a id="trace-24108"></a>
<a id="trace-24110"></a>
<a id="trace-24114"></a>
<a id="trace-24116"></a>
<a id="trace-24182"></a>
<a id="trace-24184"></a>
<a id="trace-24189"></a>
<a id="trace-24191"></a>
<a id="trace-24205"></a>
<a id="trace-24207"></a>
<a id="trace-24210"></a>
<a id="trace-24212"></a>
<a id="trace-24228"></a>
<a id="trace-24230"></a>
<a id="trace-24236"></a>
<a id="trace-24238"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24263"></a>
<a id="trace-24265"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
<a id="trace-24291"></a>
<a id="trace-24293"></a>
<a id="trace-24366"></a>
<a id="trace-24368"></a>
<a id="trace-24375"></a>
<a id="trace-24377"></a>
<a id="trace-24397"></a>
<a id="trace-24399"></a>
<a id="trace-24403"></a>
<a id="trace-24405"></a>
<a id="trace-24470"></a>
<a id="trace-24472"></a>
<a id="trace-24481"></a>
<a id="trace-24483"></a>
<a id="trace-24494"></a>
<a id="trace-24496"></a>
<a id="trace-24506"></a>
<a id="trace-24508"></a>
<a id="trace-24522"></a>
<a id="trace-24524"></a>
<a id="trace-24533"></a>
<a id="trace-24535"></a>
<a id="trace-24606"></a>
<a id="trace-24608"></a>
<a id="trace-24615"></a>
<a id="trace-24617"></a>
<a id="trace-24639"></a>
<a id="trace-24641"></a>
<a id="trace-24652"></a>
<a id="trace-24654"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24677"></a>
<a id="trace-24679"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24697"></a>
<a id="trace-24699"></a>
<a id="trace-24711"></a>
<a id="trace-24713"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24790"></a>
<a id="trace-24792"></a>
<a id="trace-24801"></a>
<a id="trace-24803"></a>
<a id="trace-24820"></a>
<a id="trace-24822"></a>
<a id="trace-24828"></a>
<a id="trace-24830"></a>
<a id="trace-24851"></a>
<a id="trace-24853"></a>
<a id="trace-24879"></a>
<a id="trace-24881"></a>
<a id="trace-24905"></a>
<a id="trace-24907"></a>
<a id="trace-24913"></a>
<a id="trace-24915"></a>
<a id="trace-24934"></a>
<a id="trace-24936"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-25011"></a>
<a id="trace-25013"></a>
<a id="trace-25017"></a>
<a id="trace-25019"></a>
<a id="trace-25087"></a>
<a id="trace-25089"></a>
<a id="trace-25096"></a>
<a id="trace-25098"></a>
<a id="trace-25110"></a>
<a id="trace-25112"></a>
<a id="trace-25129"></a>
<a id="trace-25131"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25164"></a>
<a id="trace-25166"></a>
<a id="trace-25186"></a>
<a id="trace-25188"></a>
<a id="trace-25201"></a>
<a id="trace-25203"></a>
<a id="trace-25269"></a>
<a id="trace-25271"></a>
<a id="trace-25277"></a>
<a id="trace-25279"></a>
<a id="trace-25290"></a>
<a id="trace-25292"></a>
<a id="trace-25298"></a>
<a id="trace-25300"></a>
<a id="trace-25313"></a>
<a id="trace-25315"></a>
<a id="trace-25323"></a>
<a id="trace-25325"></a>
<a id="trace-25337"></a>
<a id="trace-25339"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25362"></a>
<a id="trace-25364"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25455"></a>
<a id="trace-25457"></a>
<a id="trace-25473"></a>
<a id="trace-25475"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25493"></a>
<a id="trace-25495"></a>
<a id="trace-25559"></a>
<a id="trace-25561"></a>
<a id="trace-25573"></a>
<a id="trace-25575"></a>
<a id="trace-25585"></a>
<a id="trace-25587"></a>
<a id="trace-25600"></a>
<a id="trace-25602"></a>
<a id="trace-25607"></a>
<a id="trace-25609"></a>
<a id="trace-25675"></a>
<a id="trace-25677"></a>
<a id="trace-25682"></a>
<a id="trace-25684"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25707"></a>
<a id="trace-25709"></a>
<a id="trace-25725"></a>
<a id="trace-25727"></a>
<a id="trace-25734"></a>
<a id="trace-25736"></a>
<a id="trace-25753"></a>
<a id="trace-25755"></a>
<a id="trace-25762"></a>
<a id="trace-25764"></a>
<a id="trace-25780"></a>
<a id="trace-25782"></a>
<a id="trace-25788"></a>
<a id="trace-25790"></a>
<a id="trace-25856"></a>
<a id="trace-25858"></a>
<a id="trace-25864"></a>
<a id="trace-25866"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25886"></a>
<a id="trace-25888"></a>
<a id="trace-25900"></a>
<a id="trace-25902"></a>
<a id="trace-25911"></a>
<a id="trace-25913"></a>
<a id="trace-25934"></a>
<a id="trace-25936"></a>
<a id="trace-25945"></a>
<a id="trace-25947"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-25988"></a>
<a id="trace-25990"></a>
<a id="trace-26057"></a>
<a id="trace-26059"></a>
<a id="trace-26070"></a>
<a id="trace-26072"></a>
<a id="trace-26092"></a>
<a id="trace-26094"></a>
<a id="trace-26098"></a>
<a id="trace-26100"></a>
<a id="trace-26111"></a>
<a id="trace-26113"></a>
<a id="trace-26119"></a>
<a id="trace-26121"></a>
<a id="trace-26131"></a>
<a id="trace-26133"></a>
<a id="trace-26139"></a>
<a id="trace-26141"></a>
<a id="trace-26152"></a>
<a id="trace-26154"></a>
<a id="trace-26161"></a>
<a id="trace-26163"></a>
<a id="trace-26229"></a>
<a id="trace-26231"></a>
<a id="trace-26239"></a>
<a id="trace-26241"></a>
<a id="trace-26269"></a>
<a id="trace-26271"></a>
<a id="trace-26327"></a>
<a id="trace-26329"></a>
<a id="trace-26345"></a>
<a id="trace-26347"></a>
<a id="trace-26351"></a>
<a id="trace-26353"></a>
<a id="trace-26369"></a>
<a id="trace-26371"></a>
<a id="trace-26377"></a>
<a id="trace-26379"></a>
<a id="trace-26391"></a>
<a id="trace-26393"></a>
<a id="trace-26398"></a>
<a id="trace-26400"></a>
<a id="trace-26467"></a>
<a id="trace-26469"></a>
<a id="trace-26475"></a>
<a id="trace-26477"></a>
<a id="trace-26497"></a>
<a id="trace-26499"></a>
<a id="trace-26615"></a>
<a id="trace-26617"></a>
<a id="trace-26637"></a>
<a id="trace-26639"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26675"></a>
<a id="trace-26677"></a>
<a id="trace-26683"></a>
<a id="trace-26685"></a>
<a id="trace-26704"></a>
<a id="trace-26706"></a>
<a id="trace-26713"></a>
<a id="trace-26715"></a>
<a id="trace-26782"></a>
<a id="trace-26784"></a>
<a id="trace-26791"></a>
<a id="trace-26793"></a>
<a id="trace-26813"></a>
<a id="trace-26815"></a>
<a id="trace-26824"></a>
<a id="trace-26826"></a>
<a id="trace-26845"></a>
<a id="trace-26847"></a>
<a id="trace-26859"></a>
<a id="trace-26861"></a>
<a id="trace-26880"></a>
<a id="trace-26882"></a>
<a id="trace-26894"></a>
<a id="trace-26896"></a>
<a id="trace-26914"></a>
<a id="trace-26916"></a>
<a id="trace-26923"></a>
<a id="trace-26925"></a>
<a id="trace-26997"></a>
<a id="trace-26999"></a>
<a id="trace-27008"></a>
<a id="trace-27010"></a>
<a id="trace-27030"></a>
<a id="trace-27032"></a>
<a id="trace-27143"></a>
<a id="trace-27145"></a>
<a id="trace-27165"></a>
<a id="trace-27167"></a>
<a id="trace-27171"></a>
<a id="trace-27173"></a>
<a id="trace-27195"></a>
<a id="trace-27197"></a>
<a id="trace-27209"></a>
<a id="trace-27211"></a>
<a id="trace-27235"></a>
<a id="trace-27237"></a>
<a id="trace-27311"></a>
<a id="trace-27313"></a>
<a id="trace-27317"></a>
<a id="trace-27319"></a>
<a id="trace-27340"></a>
<a id="trace-27342"></a>
<a id="trace-27347"></a>
<a id="trace-27349"></a>
<a id="trace-27368"></a>
<a id="trace-27370"></a>
<a id="trace-27374"></a>
<a id="trace-27376"></a>
<a id="trace-27394"></a>
<a id="trace-27396"></a>
<a id="trace-27402"></a>
<a id="trace-27404"></a>
<a id="trace-27419"></a>
<a id="trace-27421"></a>
<a id="trace-27430"></a>
<a id="trace-27432"></a>
<a id="trace-27507"></a>
<a id="trace-27509"></a>
<a id="trace-27517"></a>
<a id="trace-27519"></a>
<a id="trace-27535"></a>
<a id="trace-27537"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27563"></a>
<a id="trace-27565"></a>
<a id="trace-27574"></a>
<a id="trace-27576"></a>
<a id="trace-27593"></a>
<a id="trace-27595"></a>
<a id="trace-27598"></a>
<a id="trace-27600"></a>
<a id="trace-27612"></a>
<a id="trace-27614"></a>
<a id="trace-27618"></a>
<a id="trace-27620"></a>
<a id="trace-27688"></a>
<a id="trace-27690"></a>
<a id="trace-27696"></a>
<a id="trace-27698"></a>
<a id="trace-27712"></a>
<a id="trace-27714"></a>
<a id="trace-27724"></a>
<a id="trace-27726"></a>
<a id="trace-27741"></a>
<a id="trace-27743"></a>
<a id="trace-27749"></a>
<a id="trace-27751"></a>
<a id="trace-27766"></a>
<a id="trace-27768"></a>
<a id="trace-27775"></a>
<a id="trace-27777"></a>
<a id="trace-27796"></a>
<a id="trace-27798"></a>
<a id="trace-27804"></a>
<a id="trace-27806"></a>
<a id="trace-27873"></a>
<a id="trace-27875"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
<a id="trace-27895"></a>
<a id="trace-27897"></a>
<a id="trace-27904"></a>
<a id="trace-27906"></a>
<a id="trace-27918"></a>
<a id="trace-27920"></a>
<a id="trace-27928"></a>
<a id="trace-27930"></a>
<a id="trace-27950"></a>
<a id="trace-27952"></a>
<a id="trace-27956"></a>
<a id="trace-27958"></a>
<a id="trace-27972"></a>
<a id="trace-27974"></a>
<a id="trace-27980"></a>
<a id="trace-27982"></a>
<a id="trace-28054"></a>
<a id="trace-28056"></a>
<a id="trace-28066"></a>
<a id="trace-28068"></a>
<a id="trace-28083"></a>
<a id="trace-28085"></a>
<a id="trace-28088"></a>
<a id="trace-28090"></a>
<a id="trace-28103"></a>
<a id="trace-28105"></a>
<a id="trace-28113"></a>
<a id="trace-28115"></a>
<a id="trace-28131"></a>
<a id="trace-28133"></a>
<a id="trace-28137"></a>
<a id="trace-28139"></a>
<a id="trace-28154"></a>
<a id="trace-28156"></a>
<a id="trace-28160"></a>
<a id="trace-28162"></a>
<a id="trace-28236"></a>
<a id="trace-28238"></a>
<a id="trace-28245"></a>
<a id="trace-28247"></a>
<a id="trace-28263"></a>
<a id="trace-28265"></a>
<a id="trace-28272"></a>
<a id="trace-28274"></a>
<a id="trace-28293"></a>
<a id="trace-28295"></a>
<a id="trace-28299"></a>
<a id="trace-28301"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28337"></a>
<a id="trace-28339"></a>
<a id="trace-28344"></a>
<a id="trace-28346"></a>
<a id="trace-28414"></a>
<a id="trace-28416"></a>
<a id="trace-28421"></a>
<a id="trace-28423"></a>
<a id="trace-28437"></a>
<a id="trace-28439"></a>
<a id="trace-28449"></a>
<a id="trace-28451"></a>
<a id="trace-28467"></a>
<a id="trace-28469"></a>
<a id="trace-28474"></a>
<a id="trace-28476"></a>
<a id="trace-28495"></a>
<a id="trace-28497"></a>
<a id="trace-28500"></a>
<a id="trace-28502"></a>
<a id="trace-28518"></a>
<a id="trace-28520"></a>
<a id="trace-28527"></a>
<a id="trace-28529"></a>
<a id="trace-28595"></a>
<a id="trace-28597"></a>
<a id="trace-28603"></a>
<a id="trace-28605"></a>
<a id="trace-28618"></a>
<a id="trace-28620"></a>
<a id="trace-28627"></a>
<a id="trace-28629"></a>
<a id="trace-28643"></a>
<a id="trace-28645"></a>
<a id="trace-28652"></a>
<a id="trace-28654"></a>
<a id="trace-28674"></a>
<a id="trace-28676"></a>
<a id="trace-28679"></a>
<a id="trace-28681"></a>
<a id="trace-28697"></a>
<a id="trace-28699"></a>
<a id="trace-28704"></a>
<a id="trace-28706"></a>
<a id="trace-28776"></a>
<a id="trace-28778"></a>
<a id="trace-28789"></a>
<a id="trace-28791"></a>
<a id="trace-28805"></a>
<a id="trace-28807"></a>
<a id="trace-28811"></a>
<a id="trace-28813"></a>
<a id="trace-28826"></a>
<a id="trace-28828"></a>
<a id="trace-28832"></a>
<a id="trace-28834"></a>
<a id="trace-28851"></a>
<a id="trace-28853"></a>
<a id="trace-28856"></a>
<a id="trace-28858"></a>
<a id="trace-28875"></a>
<a id="trace-28877"></a>
<a id="trace-28887"></a>
<a id="trace-28889"></a>
<a id="trace-28956"></a>
<a id="trace-28958"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-28981"></a>
<a id="trace-28983"></a>
<a id="trace-28991"></a>
<a id="trace-28993"></a>
<a id="trace-29012"></a>
<a id="trace-29014"></a>
<a id="trace-29021"></a>
<a id="trace-29023"></a>
<a id="trace-29037"></a>
<a id="trace-29039"></a>
<a id="trace-29042"></a>
<a id="trace-29044"></a>
<a id="trace-29056"></a>
<a id="trace-29058"></a>
<a id="trace-29065"></a>
<a id="trace-29067"></a>
<a id="trace-29135"></a>
<a id="trace-29137"></a>
<a id="trace-29145"></a>
<a id="trace-29147"></a>
<a id="trace-29165"></a>
<a id="trace-29167"></a>
<a id="trace-29171"></a>
<a id="trace-29173"></a>
<a id="trace-29190"></a>
<a id="trace-29192"></a>
<a id="trace-29199"></a>
<a id="trace-29201"></a>
<a id="trace-29218"></a>
<a id="trace-29220"></a>
<a id="trace-29230"></a>
<a id="trace-29232"></a>
<a id="trace-29247"></a>
<a id="trace-29249"></a>
<a id="trace-29253"></a>
<a id="trace-29255"></a>
<a id="trace-29320"></a>
<a id="trace-29322"></a>
<a id="trace-29327"></a>
<a id="trace-29329"></a>
<a id="trace-29346"></a>
<a id="trace-29348"></a>
<a id="trace-29470"></a>
<a id="trace-29472"></a>
<a id="trace-29490"></a>
<a id="trace-29492"></a>
<a id="trace-29497"></a>
<a id="trace-29499"></a>
<a id="trace-29524"></a>
<a id="trace-29526"></a>
<a id="trace-29533"></a>
<a id="trace-29535"></a>
<a id="trace-29553"></a>
<a id="trace-29555"></a>
<a id="trace-29564"></a>
<a id="trace-29566"></a>
<a id="trace-29638"></a>
<a id="trace-29640"></a>
<a id="trace-29644"></a>
<a id="trace-29646"></a>
<a id="trace-29664"></a>
<a id="trace-29666"></a>
<a id="trace-29669"></a>
<a id="trace-29671"></a>
<a id="trace-29689"></a>
<a id="trace-29691"></a>
<a id="trace-29697"></a>
<a id="trace-29699"></a>
<a id="trace-29719"></a>
<a id="trace-29721"></a>
<a id="trace-29727"></a>
<a id="trace-29729"></a>
<a id="trace-29748"></a>
<a id="trace-29750"></a>
<a id="trace-29766"></a>
<a id="trace-29768"></a>
<a id="trace-29836"></a>
<a id="trace-29838"></a>
<a id="trace-29847"></a>
<a id="trace-29849"></a>
<a id="trace-29860"></a>
<a id="trace-29862"></a>
<a id="trace-30110"></a>
<a id="trace-30112"></a>
<a id="trace-30139"></a>
<a id="trace-30141"></a>
<a id="trace-30152"></a>
<a id="trace-30154"></a>
<a id="trace-30173"></a>
<a id="trace-30175"></a>
<a id="trace-30180"></a>
<a id="trace-30182"></a>
<a id="trace-30193"></a>
<a id="trace-30195"></a>
<a id="trace-30205"></a>
<a id="trace-30207"></a>
<a id="trace-30466"></a>
<a id="trace-30468"></a>
<a id="trace-30479"></a>
<a id="trace-30481"></a>
<a id="trace-30498"></a>
<a id="trace-30500"></a>
<a id="trace-30507"></a>
<a id="trace-30509"></a>
<a id="trace-30523"></a>
<a id="trace-30525"></a>
<a id="trace-30536"></a>
<a id="trace-30538"></a>
<a id="trace-30572"></a>
<a id="trace-30574"></a>
<a id="trace-30603"></a>
<a id="trace-30605"></a>
<a id="trace-30649"></a>
<a id="trace-30651"></a>
<a id="trace-30688"></a>
<a id="trace-30690"></a>
<a id="trace-30788"></a>
<a id="trace-30790"></a>
<a id="trace-30828"></a>
<a id="trace-30830"></a>
<a id="trace-30874"></a>
<a id="trace-30876"></a>
<a id="trace-31020"></a>
<a id="trace-31022"></a>
<a id="trace-31062"></a>
<a id="trace-31064"></a>
<a id="trace-31189"></a>
<a id="trace-31191"></a>
<a id="trace-31226"></a>
<a id="trace-31228"></a>
<a id="trace-31235"></a>
<a id="trace-31237"></a>
<a id="trace-31258"></a>
<a id="trace-31260"></a>
<a id="trace-31270"></a>
<a id="trace-31272"></a>
<a id="trace-31344"></a>
<a id="trace-31346"></a>
<a id="trace-31356"></a>
<a id="trace-31358"></a>
<a id="trace-31540"></a>
<a id="trace-31542"></a>
<a id="trace-31559"></a>
<a id="trace-31561"></a>
<a id="trace-31578"></a>
<a id="trace-31580"></a>
<a id="trace-31594"></a>
<a id="trace-31596"></a>
<a id="trace-31618"></a>
<a id="trace-31620"></a>
<a id="trace-31627"></a>
<a id="trace-31629"></a>
<a id="trace-31646"></a>
<a id="trace-31648"></a>
<a id="trace-31658"></a>
<a id="trace-31660"></a>
<a id="trace-31728"></a>
<a id="trace-31730"></a>
<a id="trace-31741"></a>
<a id="trace-31743"></a>
<a id="trace-31758"></a>
<a id="trace-31760"></a>
<a id="trace-31767"></a>
<a id="trace-31769"></a>
<a id="trace-31790"></a>
<a id="trace-31792"></a>
<a id="trace-31807"></a>
<a id="trace-31809"></a>
<a id="trace-31830"></a>
<a id="trace-31832"></a>
<a id="trace-31842"></a>
<a id="trace-31844"></a>
<a id="trace-31865"></a>
<a id="trace-31867"></a>
<a id="trace-31874"></a>
<a id="trace-31876"></a>
<a id="trace-31942"></a>
<a id="trace-31944"></a>
<a id="trace-31949"></a>
<a id="trace-31951"></a>
<a id="trace-31963"></a>
<a id="trace-31965"></a>
<a id="trace-31975"></a>
<a id="trace-31977"></a>
<a id="trace-31991"></a>
<a id="trace-31993"></a>
<a id="trace-32001"></a>
<a id="trace-32003"></a>
<a id="trace-32020"></a>
<a id="trace-32022"></a>
<a id="trace-32028"></a>
<a id="trace-32030"></a>
<a id="trace-32046"></a>
<a id="trace-32048"></a>
<a id="trace-32055"></a>
<a id="trace-32057"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 701): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39486361591713726, 'next_transition': 729}.
<a id="trace-956"></a>
<a id="trace-958"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1022"></a>
<a id="trace-1024"></a>
<a id="trace-1068"></a>
<a id="trace-1070"></a>
<a id="trace-1091"></a>
<a id="trace-1093"></a>
<a id="trace-1123"></a>
<a id="trace-1125"></a>
<a id="trace-1155"></a>
<a id="trace-1157"></a>
<a id="trace-1188"></a>
<a id="trace-1190"></a>
<a id="trace-1315"></a>
<a id="trace-1317"></a>
<a id="trace-1339"></a>
<a id="trace-1341"></a>
- 5.20s–10.70s (×20), actor 5, squad 0 (trace 956): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 888. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0725100503557508, 'next_transition': 991}.
<a id="trace-1350"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1350): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1236. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787559028307194, 'next_transition': 1551}.
<a id="trace-1351"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1351): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1236. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787559028307194, 'next_transition': 1551}.
<a id="trace-1551"></a>
<a id="trace-1553"></a>
- 11.20s–11.20s (×2), actor 5, squad 0 (trace 1551): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1241. Next observer evidence: None.
<a id="trace-144"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 144): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4986139127632206, 'next_transition': 1597}.
<a id="trace-145"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 145): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019822311209246, 'next_transition': 1744}.
<a id="trace-1560"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1560): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1560. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4986139127632206, 'next_transition': 1597}.
<a id="trace-1561"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1561): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1561. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4986139127632206, 'next_transition': 1597}.
<a id="trace-1562"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1562): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1562. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019822311209246, 'next_transition': 1744}.
<a id="trace-1563"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1563): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1563. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.019822311209246, 'next_transition': 1744}.
<a id="trace-1597"></a>
<a id="trace-1599"></a>
<a id="trace-1637"></a>
<a id="trace-1639"></a>
<a id="trace-1669"></a>
<a id="trace-1671"></a>
<a id="trace-1705"></a>
<a id="trace-1707"></a>
<a id="trace-2073"></a>
<a id="trace-2075"></a>
<a id="trace-2193"></a>
<a id="trace-2195"></a>
<a id="trace-2216"></a>
<a id="trace-2218"></a>
<a id="trace-2248"></a>
<a id="trace-2250"></a>
- 11.70s–16.25s (×16), actor 5, squad 0 (trace 1597): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1563. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40312200998332653, 'next_transition': 1637}.
<a id="trace-1744"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1744): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1244. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.80105386898974, 'next_transition': 2663}.
<a id="trace-1745"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1745): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1244. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.80105386898974, 'next_transition': 2663}.
<a id="trace-2284"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2284): received platoon directive. Knowledge: actor memory at 15.00s, trace 2116. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9240319502497136, 'next_transition': 2563}.
<a id="trace-2563"></a>
<a id="trace-2565"></a>
<a id="trace-3058"></a>
<a id="trace-3060"></a>
<a id="trace-3893"></a>
<a id="trace-3895"></a>
<a id="trace-4482"></a>
<a id="trace-4484"></a>
<a id="trace-4536"></a>
<a id="trace-4538"></a>
<a id="trace-4599"></a>
<a id="trace-4601"></a>
<a id="trace-4655"></a>
<a id="trace-4657"></a>
<a id="trace-4704"></a>
<a id="trace-4706"></a>
<a id="trace-4767"></a>
<a id="trace-4769"></a>
<a id="trace-5189"></a>
<a id="trace-5191"></a>
- 17.25s–24.25s (×20), actor 5, squad 0 (trace 2563): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2121. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.626857026427845, 'next_transition': 3058}.
<a id="trace-2663"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 2663): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2124. Next observer evidence: {'until': 18.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28865974172939657, 'next_transition': 3071}.
<a id="trace-2664"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 2664): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2124. Next observer evidence: {'until': 18.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28865974172939657, 'next_transition': 3071}.
<a id="trace-2665"></a>
<a id="trace-3071"></a>
<a id="trace-3472"></a>
<a id="trace-3931"></a>
- 18.60s–19.55s (×4), actor 8, squad 1 (trace 2665): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2124. Next observer evidence: {'until': 18.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28865974172939657, 'next_transition': 3071}.
<a id="trace-4774"></a>
- 23.80s–23.80s (×1), actor 8, squad 1 (trace 4774): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 4387. Next observer evidence: {'until': 37.6, 'shots': 4, 'casualties': 1, 'mean_displacement': 9.678825097139995, 'next_transition': 7837}.
<a id="trace-4775"></a>
- 23.80s–23.80s (×1), actor 8, squad 1 (trace 4775): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 4387. Next observer evidence: {'until': 37.6, 'shots': 4, 'casualties': 1, 'mean_displacement': 9.678825097139995, 'next_transition': 7837}.
<a id="trace-5214"></a>
- 24.55s–24.55s (×1), actor 0, squad 0 (trace 5214): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 4379. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06375180801357709, 'next_transition': 5384}.
<a id="trace-5384"></a>
<a id="trace-5386"></a>
<a id="trace-5529"></a>
<a id="trace-5531"></a>
<a id="trace-5565"></a>
<a id="trace-5567"></a>
- 24.75s–26.25s (×6), actor 5, squad 0 (trace 5384): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4384. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.271092978601376, 'next_transition': 5529}.
<a id="trace-5620"></a>
- 27.05s–27.05s (×1), actor 0, squad 0 (trace 5620): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 5400. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22125078026909073, 'next_transition': 6048}.
<a id="trace-5621"></a>
- 27.05s–27.05s (×1), actor 0, squad 0 (trace 5621): bounding overwatch. Knowledge: actor memory at 25.00s, trace 5400. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22125078026909073, 'next_transition': 6048}.
<a id="trace-5622"></a>
- 27.05s–27.05s (×1), actor 0, squad 0 (trace 5622): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5400. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22125078026909073, 'next_transition': 6048}.
<a id="trace-6048"></a>
<a id="trace-6050"></a>
<a id="trace-6071"></a>
<a id="trace-6073"></a>
- 27.25s–27.75s (×4), actor 5, squad 0 (trace 6048): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5405. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4350206261158711, 'next_transition': 6071}.
<a id="trace-6100"></a>
- 28.05s–28.05s (×1), actor 0, squad 0 (trace 6100): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5400. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11217662777757642, 'next_transition': 6534}.
<a id="trace-6534"></a>
<a id="trace-6536"></a>
<a id="trace-6564"></a>
<a id="trace-6566"></a>
- 28.25s–28.75s (×4), actor 5, squad 0 (trace 6534): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5405. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4311500990918274, 'next_transition': 6564}.
<a id="trace-6589"></a>
- 29.05s–29.05s (×1), actor 0, squad 0 (trace 6589): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5400. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.358768950076774, 'next_transition': 7022}.
<a id="trace-7022"></a>
<a id="trace-7024"></a>
<a id="trace-7064"></a>
<a id="trace-7066"></a>
<a id="trace-7159"></a>
<a id="trace-7161"></a>
<a id="trace-7193"></a>
<a id="trace-7195"></a>
<a id="trace-7220"></a>
<a id="trace-7222"></a>
<a id="trace-7241"></a>
<a id="trace-7243"></a>
- 29.25s–31.75s (×12), actor 5, squad 0 (trace 7022): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5405. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7016369145608442, 'next_transition': 7064}.
<a id="trace-7262"></a>
- 32.15s–32.15s (×1), actor 1, squad 0 (trace 7262): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 7076. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05224419788115139, 'next_transition': 7558}.
<a id="trace-7558"></a>
<a id="trace-7560"></a>
<a id="trace-7611"></a>
<a id="trace-7613"></a>
<a id="trace-7645"></a>
<a id="trace-7763"></a>
- 32.75s–35.75s (×6), actor 5, squad 0 (trace 7558): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7080. Next observer evidence: {'until': 33.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3815961012393962, 'next_transition': 7611}.
<a id="trace-7797"></a>
- 36.65s–36.65s (×1), actor 1, squad 0 (trace 7797): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 7677. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0788984349638464, 'next_transition': 7981}.
<a id="trace-7837"></a>
- 37.70s–37.70s (×1), actor 9, squad 1 (trace 7837): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 7684. Next observer evidence: {'until': 48.4, 'shots': 8, 'casualties': 0, 'mean_displacement': 19.328574289684372, 'next_transition': 11237}.
<a id="trace-7838"></a>
- 37.70s–37.70s (×1), actor 9, squad 1 (trace 7838): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 7684. Next observer evidence: {'until': 48.4, 'shots': 8, 'casualties': 0, 'mean_displacement': 19.328574289684372, 'next_transition': 11237}.
<a id="trace-7981"></a>
<a id="trace-7983"></a>
- 38.75s–38.75s (×2), actor 5, squad 0 (trace 7981): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7681. Next observer evidence: {'until': 38.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 656}.
<a id="trace-656"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 656): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7991"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 7991): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.126099 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 7991. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.014735313961739188, 'next_transition': 8029}.
<a id="trace-7992"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 7992): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.126099 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 7992. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.014735313961739188, 'next_transition': 8029}.
<a id="trace-8029"></a>
<a id="trace-8031"></a>
<a id="trace-8058"></a>
<a id="trace-8060"></a>
<a id="trace-8189"></a>
<a id="trace-8191"></a>
<a id="trace-8275"></a>
<a id="trace-8277"></a>
- 39.25s–41.75s (×8), actor 5, squad 0 (trace 8029): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 7992. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01321628718433357, 'next_transition': 8058}.
<a id="trace-8287"></a>
- 41.80s–41.80s (×1), actor 1, squad 0 (trace 8287): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 8072. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13214287568339647, 'next_transition': 10533}.
<a id="trace-10178"></a>
- 41.80s–41.80s (×1), actor 1, squad 0 (trace 10178): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 8072. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13214287568339647, 'next_transition': 10533}.
<a id="trace-10179"></a>
- 41.80s–41.80s (×1), actor 1, squad 0 (trace 10179): MoveTactically. Knowledge: actor memory at 40.00s, trace 8072. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13214287568339647, 'next_transition': 10533}.
<a id="trace-10180"></a>
- 41.80s–41.80s (×1), actor 1, squad 0 (trace 10180): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 8072. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13214287568339647, 'next_transition': 10533}.
<a id="trace-10533"></a>
<a id="trace-10535"></a>
<a id="trace-10552"></a>
<a id="trace-10554"></a>
<a id="trace-10595"></a>
<a id="trace-10597"></a>
<a id="trace-10610"></a>
<a id="trace-10612"></a>
<a id="trace-10639"></a>
<a id="trace-10641"></a>
<a id="trace-10660"></a>
<a id="trace-10662"></a>
- 42.25s–44.75s (×12), actor 5, squad 0 (trace 10533): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8076. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08451428962619516, 'next_transition': 10552}.
<a id="trace-10791"></a>
- 45.90s–45.90s (×1), actor 2, squad 0 (trace 10791): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42478089711798783, 'next_transition': 10829}.
<a id="trace-10793"></a>
- 45.90s–45.90s (×1), actor 2, squad 0 (trace 10793): NeedSupport. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42478089711798783, 'next_transition': 10829}.
<a id="trace-10829"></a>
<a id="trace-10831"></a>
<a id="trace-10851"></a>
<a id="trace-10853"></a>
- 46.25s–46.75s (×4), actor 5, squad 0 (trace 10829): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10673. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5759627467556712, 'next_transition': 10851}.
<a id="trace-10861"></a>
- 46.90s–46.90s (×1), actor 2, squad 0 (trace 10861): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150078580362288, 'next_transition': 11132}.
<a id="trace-10866"></a>
- 46.90s–46.90s (×1), actor 2, squad 0 (trace 10866): MoveTactically. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150078580362288, 'next_transition': 11132}.
<a id="trace-10867"></a>
- 46.90s–46.90s (×1), actor 2, squad 0 (trace 10867): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150078580362288, 'next_transition': 11132}.
<a id="trace-11132"></a>
- 47.15s–47.15s (×1), actor 2, squad 0 (trace 11132): NeedSupport. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8254352581039965, 'next_transition': 11188}.
<a id="trace-11188"></a>
<a id="trace-11190"></a>
<a id="trace-11228"></a>
<a id="trace-11230"></a>
<a id="trace-11268"></a>
<a id="trace-11270"></a>
- 47.75s–48.75s (×6), actor 5, squad 0 (trace 11188): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10673. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5368296393326074, 'next_transition': 11228}.
<a id="trace-11237"></a>
- 48.40s–48.40s (×1), actor 9, squad 1 (trace 11237): NeedSupport. Knowledge: actor memory at 45.00s, trace 10676. Next observer evidence: {'until': 50.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5316372561703009, 'next_transition': 11739}.
<a id="trace-11289"></a>
- 49.20s–49.20s (×1), actor 2, squad 0 (trace 11289): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9162435963302666, 'next_transition': 11702}.
<a id="trace-11290"></a>
- 49.20s–49.20s (×1), actor 2, squad 0 (trace 11290): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 10670. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9162435963302666, 'next_transition': 11702}.
<a id="trace-11702"></a>
<a id="trace-11835"></a>
<a id="trace-11837"></a>
<a id="trace-11895"></a>
<a id="trace-11897"></a>
- 50.25s–52.75s (×5), actor 5, squad 0 (trace 11702): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11635. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6134049596217803, 'next_transition': 11835}.
<a id="trace-11739"></a>
- 50.90s–50.90s (×1), actor 9, squad 1 (trace 11739): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 11638. Next observer evidence: {'until': 64, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.999990511962723, 'next_transition': 15707}.
<a id="trace-11740"></a>
- 50.90s–50.90s (×1), actor 9, squad 1 (trace 11740): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 11638. Next observer evidence: {'until': 64, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.999990511962723, 'next_transition': 15707}.
<a id="trace-11904"></a>
- 52.75s–52.75s (×1), actor 2, squad 0 (trace 11904): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 11632. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8913643682992299, 'next_transition': 11928}.
<a id="trace-11928"></a>
<a id="trace-11930"></a>
<a id="trace-12085"></a>
<a id="trace-12087"></a>
- 53.25s–55.25s (×4), actor 5, squad 0 (trace 11928): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11635. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.011867492920646, 'next_transition': 12085}.
<a id="trace-12100"></a>
- 55.65s–55.65s (×1), actor 2, squad 0 (trace 12100): Fixing. Knowledge: actor memory at 55.00s, trace 12019. Next observer evidence: None.
<a id="trace-12108"></a>
<a id="trace-12110"></a>
<a id="trace-12136"></a>
<a id="trace-12138"></a>
- 55.75s–56.25s (×4), actor 5, squad 0 (trace 12108): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12022. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630083176839972, 'next_transition': 12136}.
<a id="trace-12166"></a>
- 56.65s–56.65s (×1), actor 2, squad 0 (trace 12166): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 12019. Next observer evidence: {'until': 57.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8886068730771847, 'next_transition': 15167}.
<a id="trace-15002"></a>
- 56.65s–56.65s (×1), actor 2, squad 0 (trace 15002): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 55.00s, trace 12019. Next observer evidence: {'until': 57.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8886068730771847, 'next_transition': 15167}.
<a id="trace-15003"></a>
- 56.65s–56.65s (×1), actor 2, squad 0 (trace 15003): MoveTactically. Knowledge: actor memory at 55.00s, trace 12019. Next observer evidence: {'until': 57.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8886068730771847, 'next_transition': 15167}.
<a id="trace-15004"></a>
- 56.65s–56.65s (×1), actor 2, squad 0 (trace 15004): contact cover complete: assessment resumes closure. Knowledge: actor memory at 55.00s, trace 12019. Next observer evidence: {'until': 57.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8886068730771847, 'next_transition': 15167}.
<a id="trace-15111"></a>
- 56.65s–56.65s (×1), actor 2, squad 0 (trace 15111): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 55.00s, trace 12019. Next observer evidence: {'until': 57.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8886068730771847, 'next_transition': 15167}.
<a id="trace-15167"></a>
<a id="trace-15169"></a>
<a id="trace-15256"></a>
<a id="trace-15258"></a>
<a id="trace-15293"></a>
<a id="trace-15295"></a>
<a id="trace-15338"></a>
<a id="trace-15340"></a>
<a id="trace-15376"></a>
<a id="trace-15378"></a>
<a id="trace-15533"></a>
<a id="trace-15535"></a>
<a id="trace-15570"></a>
<a id="trace-15572"></a>
<a id="trace-15621"></a>
<a id="trace-15623"></a>
<a id="trace-15689"></a>
<a id="trace-15691"></a>
<a id="trace-15834"></a>
<a id="trace-15836"></a>
<a id="trace-15877"></a>
<a id="trace-15879"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16026"></a>
<a id="trace-16028"></a>
<a id="trace-16069"></a>
<a id="trace-16071"></a>
<a id="trace-16087"></a>
<a id="trace-16089"></a>
<a id="trace-16110"></a>
<a id="trace-16112"></a>
- 57.25s–68.25s (×32), actor 5, squad 0 (trace 15167): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12022. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.409004041902012, 'next_transition': 15256}.
<a id="trace-15707"></a>
- 64.10s–64.10s (×1), actor 9, squad 1 (trace 15707): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 15405. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.235004180127488, 'next_transition': 16459}.
<a id="trace-15708"></a>
- 64.10s–64.10s (×1), actor 9, squad 1 (trace 15708): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 15405. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.235004180127488, 'next_transition': 16459}.
<a id="trace-16124"></a>
- 68.55s–68.55s (×1), actor 2, squad 0 (trace 16124): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 65.00s, trace 15898. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19922990502494856, 'next_transition': 16153}.
<a id="trace-16153"></a>
<a id="trace-16155"></a>
- 69.25s–69.25s (×2), actor 5, squad 0 (trace 16153): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 15900. Next observer evidence: {'until': 69.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575008782515203, 'next_transition': 16168}.
<a id="trace-16168"></a>
- 69.55s–69.55s (×1), actor 2, squad 0 (trace 16168): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 15898. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750092358856166, 'next_transition': 16344}.
<a id="trace-16171"></a>
- 69.55s–69.55s (×1), actor 2, squad 0 (trace 16171): MoveTactically. Knowledge: actor memory at 65.00s, trace 15898. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750092358856166, 'next_transition': 16344}.
<a id="trace-16172"></a>
- 69.55s–69.55s (×1), actor 2, squad 0 (trace 16172): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 65.00s, trace 15898. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750092358856166, 'next_transition': 16344}.
<a id="trace-16344"></a>
<a id="trace-16346"></a>
<a id="trace-16428"></a>
<a id="trace-16430"></a>
<a id="trace-16450"></a>
<a id="trace-16452"></a>
<a id="trace-16480"></a>
<a id="trace-16482"></a>
<a id="trace-16499"></a>
<a id="trace-16501"></a>
<a id="trace-16535"></a>
<a id="trace-16537"></a>
- 69.75s–72.25s (×12), actor 5, squad 0 (trace 16344): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 15900. Next observer evidence: {'until': 70.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42421970557719263, 'next_transition': 16428}.
<a id="trace-16459"></a>
- 70.80s–70.80s (×1), actor 9, squad 1 (trace 16459): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 16366. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7299825755813445, 'next_transition': 1513}.
<a id="trace-16550"></a>
- 72.60s–72.60s (×1), actor 2, squad 0 (trace 16550): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 16362. Next observer evidence: {'until': 73.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.692825, 'next_transition': 16595}.
<a id="trace-16595"></a>
<a id="trace-16597"></a>
<a id="trace-16622"></a>
<a id="trace-16624"></a>
<a id="trace-16638"></a>
<a id="trace-16640"></a>
<a id="trace-16719"></a>
<a id="trace-16721"></a>
<a id="trace-16733"></a>
<a id="trace-16735"></a>
<a id="trace-16755"></a>
<a id="trace-16757"></a>
<a id="trace-16766"></a>
<a id="trace-16768"></a>
<a id="trace-16783"></a>
<a id="trace-16785"></a>
<a id="trace-16794"></a>
<a id="trace-16796"></a>
<a id="trace-16819"></a>
<a id="trace-16821"></a>
<a id="trace-16839"></a>
<a id="trace-16841"></a>
<a id="trace-16853"></a>
<a id="trace-16855"></a>
<a id="trace-16928"></a>
<a id="trace-16930"></a>
<a id="trace-16943"></a>
<a id="trace-16945"></a>
<a id="trace-16961"></a>
<a id="trace-16963"></a>
<a id="trace-16972"></a>
<a id="trace-16974"></a>
<a id="trace-16990"></a>
<a id="trace-16992"></a>
<a id="trace-17001"></a>
<a id="trace-17003"></a>
<a id="trace-17017"></a>
<a id="trace-17019"></a>
<a id="trace-17028"></a>
<a id="trace-17030"></a>
<a id="trace-17046"></a>
<a id="trace-17048"></a>
<a id="trace-17151"></a>
<a id="trace-17153"></a>
<a id="trace-17198"></a>
<a id="trace-17200"></a>
- 73.75s–86.25s (×46), actor 5, squad 0 (trace 16595): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 16364. Next observer evidence: {'until': 74.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06332499999999985, 'next_transition': 16622}.
<a id="trace-1513"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1513): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16938"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 16938): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.30s, trace 16938. Next observer evidence: {'until': 86, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17182}.
<a id="trace-17182"></a>
- 86.10s–86.10s (×1), actor 9, squad 1 (trace 17182): MoveTactically. Knowledge: actor memory at 85.00s, trace 17089. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17403}.
<a id="trace-17183"></a>
- 86.10s–86.10s (×1), actor 9, squad 1 (trace 17183): received platoon directive. Knowledge: actor memory at 85.00s, trace 17089. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17403}.
<a id="trace-17210"></a>
- 86.45s–86.45s (×1), actor 2, squad 0 (trace 17210): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 17085. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17385}.
<a id="trace-17211"></a>
- 86.45s–86.45s (×1), actor 2, squad 0 (trace 17211): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 17085. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17385}.
<a id="trace-17212"></a>
- 86.45s–86.45s (×1), actor 2, squad 0 (trace 17212): . Knowledge: actor memory at 85.00s, trace 17085. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17385}.
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17514"></a>
<a id="trace-17516"></a>
<a id="trace-17540"></a>
<a id="trace-17542"></a>
<a id="trace-17567"></a>
<a id="trace-17569"></a>
<a id="trace-17619"></a>
<a id="trace-17621"></a>
<a id="trace-17644"></a>
<a id="trace-17646"></a>
- 86.75s–89.75s (×12), actor 5, squad 0 (trace 17385): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 17087. Next observer evidence: {'until': 87.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17514}.
<a id="trace-17403"></a>
- 87.10s–87.10s (×1), actor 9, squad 1 (trace 17403): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 17089. Next observer evidence: {'until': 92.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.250914869285308, 'next_transition': 17992}.
<a id="trace-17658"></a>
- 89.90s–89.90s (×1), actor 2, squad 0 (trace 17658): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 17085. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17906}.
<a id="trace-17659"></a>
- 89.90s–89.90s (×1), actor 2, squad 0 (trace 17659): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 17085. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17906}.
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-17936"></a>
<a id="trace-17938"></a>
<a id="trace-17965"></a>
<a id="trace-17967"></a>
<a id="trace-18103"></a>
<a id="trace-18105"></a>
<a id="trace-18126"></a>
<a id="trace-18128"></a>
<a id="trace-18198"></a>
<a id="trace-18200"></a>
<a id="trace-18232"></a>
<a id="trace-18234"></a>
<a id="trace-18246"></a>
<a id="trace-18248"></a>
<a id="trace-18265"></a>
<a id="trace-18267"></a>
- 90.75s–97.25s (×18), actor 5, squad 0 (trace 17906): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 17827. Next observer evidence: {'until': 91.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.2080725000000001, 'next_transition': 17936}.
<a id="trace-17992"></a>
- 92.90s–92.90s (×1), actor 9, squad 1 (trace 17992): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 17829. Next observer evidence: {'until': 93.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18033}.
<a id="trace-18033"></a>
- 93.90s–93.90s (×1), actor 9, squad 1 (trace 18033): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 17829. Next observer evidence: {'until': 94, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1624}.
<a id="trace-1624"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (events line 1624): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18089"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (trace 18089): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.803367 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 18089. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.4600417891156185, 'next_transition': 18346}.
<a id="trace-18090"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (trace 18090): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.803367 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 18090. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.4600417891156185, 'next_transition': 18346}.
<a id="trace-18277"></a>
- 97.40s–97.40s (×1), actor 2, squad 0 (trace 18277): support established: element delivered fire on threat area. Knowledge: actor memory at 95.00s, trace 18135. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18282}.
<a id="trace-18282"></a>
<a id="trace-18284"></a>
<a id="trace-18300"></a>
<a id="trace-18302"></a>
<a id="trace-18313"></a>
<a id="trace-18315"></a>
<a id="trace-18330"></a>
<a id="trace-18332"></a>
<a id="trace-19871"></a>
<a id="trace-19873"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
- 97.75s–100.75s (×14), actor 5, squad 0 (trace 18282): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 18137. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18300}.
<a id="trace-18346"></a>
- 99.60s–99.60s (×1), actor 9, squad 1 (trace 18346): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 18139. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.78493403987798, 'next_transition': 1665}.
<a id="trace-18347"></a>
- 99.60s–99.60s (×1), actor 9, squad 1 (trace 18347): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 95.00s, trace 18139. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.78493403987798, 'next_transition': 1665}.
<a id="trace-19969"></a>
- 100.85s–100.85s (×1), actor 2, squad 0 (trace 19969): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 19880. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874998246500201, 'next_transition': 20129}.
<a id="trace-19970"></a>
- 100.85s–100.85s (×1), actor 2, squad 0 (trace 19970): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 19880. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874998246500201, 'next_transition': 20129}.
<a id="trace-20129"></a>
<a id="trace-20131"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20169"></a>
<a id="trace-20171"></a>
<a id="trace-20182"></a>
<a id="trace-20184"></a>
<a id="trace-20208"></a>
<a id="trace-20210"></a>
<a id="trace-20225"></a>
<a id="trace-20227"></a>
<a id="trace-20303"></a>
<a id="trace-20305"></a>
<a id="trace-20319"></a>
<a id="trace-20321"></a>
<a id="trace-20355"></a>
<a id="trace-20357"></a>
<a id="trace-20389"></a>
<a id="trace-20391"></a>
- 102.25s–107.75s (×20), actor 5, squad 0 (trace 20129): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 19882. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000800793549, 'next_transition': 20146}.
<a id="trace-1664"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 1664): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7547529555649581, 'next_transition': 20415}.
<a id="trace-1665"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 1665): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 126, 'shots': 12, 'casualties': 1, 'mean_displacement': 7.425957841996621, 'next_transition': 21269}.
<a id="trace-20400"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 20400): renew committed intent (75 s lifetime). Knowledge: actor memory at 107.95s, trace 20400. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7547529555649581, 'next_transition': 20415}.
<a id="trace-20401"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 20401): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.779528 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 20401. Next observer evidence: {'until': 126, 'shots': 12, 'casualties': 1, 'mean_displacement': 7.425957841996621, 'next_transition': 21269}.
<a id="trace-20402"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 20402): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.779528 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 20402. Next observer evidence: {'until': 126, 'shots': 12, 'casualties': 1, 'mean_displacement': 7.425957841996621, 'next_transition': 21269}.
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20430"></a>
<a id="trace-20432"></a>
- 108.25s–108.75s (×4), actor 5, squad 0 (trace 20415): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 20402. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7615728931493432, 'next_transition': 20430}.
<a id="trace-20439"></a>
- 108.75s–108.75s (×1), actor 2, squad 0 (trace 20439): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 105.00s, trace 20240. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2749087741746798, 'next_transition': 20456}.
<a id="trace-20456"></a>
<a id="trace-20458"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20558"></a>
<a id="trace-20560"></a>
<a id="trace-20576"></a>
<a id="trace-20578"></a>
<a id="trace-20627"></a>
<a id="trace-20629"></a>
<a id="trace-20661"></a>
<a id="trace-20685"></a>
<a id="trace-20687"></a>
<a id="trace-20769"></a>
- 109.25s–115.25s (×14), actor 5, squad 0 (trace 20456): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 20402. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.06926225105018, 'next_transition': 20474}.
<a id="trace-20791"></a>
- 115.75s–115.75s (×1), actor 2, squad 0 (trace 20791): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 20709. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361411402693785, 'next_transition': 20853}.
<a id="trace-20833"></a>
- 115.75s–115.75s (×1), actor 2, squad 0 (trace 20833): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 20709. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361411402693785, 'next_transition': 20853}.
<a id="trace-20853"></a>
<a id="trace-20895"></a>
<a id="trace-20897"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20959"></a>
<a id="trace-20961"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21069"></a>
<a id="trace-21071"></a>
<a id="trace-21095"></a>
<a id="trace-21097"></a>
<a id="trace-21125"></a>
<a id="trace-21157"></a>
<a id="trace-21159"></a>
<a id="trace-21280"></a>
<a id="trace-21282"></a>
<a id="trace-21321"></a>
<a id="trace-21356"></a>
<a id="trace-21388"></a>
<a id="trace-21474"></a>
<a id="trace-21476"></a>
<a id="trace-21561"></a>
<a id="trace-21593"></a>
<a id="trace-21595"></a>
<a id="trace-21621"></a>
<a id="trace-21623"></a>
<a id="trace-21647"></a>
<a id="trace-21649"></a>
<a id="trace-21727"></a>
<a id="trace-21791"></a>
<a id="trace-21793"></a>
- 116.25s–137.30s (×33), actor 5, squad 0 (trace 20853): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 20711. Next observer evidence: {'until': 117.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9787717038687367, 'next_transition': 20895}.
<a id="trace-21269"></a>
- 126.05s–126.05s (×1), actor 9, squad 1 (trace 21269): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 125.00s, trace 21187. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21304}.
<a id="trace-21270"></a>
- 126.05s–126.05s (×1), actor 9, squad 1 (trace 21270): NeedSupport. Knowledge: actor memory at 125.00s, trace 21187. Next observer evidence: {'until': 127, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21304}.
<a id="trace-21304"></a>
- 127.05s–127.05s (×1), actor 9, squad 1 (trace 21304): Reorganise: completed/failed drill. Knowledge: actor memory at 125.00s, trace 21187. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21494}.
<a id="trace-21307"></a>
- 127.05s–127.05s (×1), actor 9, squad 1 (trace 21307): ReactToContact: cover and return fire. Knowledge: actor memory at 125.00s, trace 21187. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21494}.
<a id="trace-21308"></a>
- 127.05s–127.05s (×1), actor 9, squad 1 (trace 21308): Reorganise complete: known contact. Knowledge: actor memory at 125.00s, trace 21187. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21494}.
<a id="trace-21494"></a>
- 130.80s–130.80s (×1), actor 9, squad 1 (trace 21494): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 130.00s, trace 21416. Next observer evidence: {'until': 142, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000000802166644, 'next_transition': 22057}.
<a id="trace-21495"></a>
- 130.80s–130.80s (×1), actor 9, squad 1 (trace 21495): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 21416. Next observer evidence: {'until': 142, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000000802166644, 'next_transition': 22057}.
<a id="trace-21835"></a>
- 137.85s–137.85s (×1), actor 2, squad 0 (trace 21835): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 135.00s, trace 21666. Next observer evidence: None.
<a id="trace-21836"></a>
- 137.85s–137.85s (×1), actor 2, squad 0 (trace 21836): NeedSupport. Knowledge: actor memory at 135.00s, trace 21666. Next observer evidence: None.
<a id="trace-21843"></a>
- 137.90s–137.90s (×1), actor 2, squad 0 (trace 21843): Reorganise: completed/failed drill. Knowledge: actor memory at 135.00s, trace 21666. Next observer evidence: None.
<a id="trace-21845"></a>
- 137.90s–137.90s (×1), actor 2, squad 0 (trace 21845): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 21666. Next observer evidence: None.
<a id="trace-21846"></a>
- 137.90s–137.90s (×1), actor 2, squad 0 (trace 21846): Reorganise complete: known contact. Knowledge: actor memory at 135.00s, trace 21666. Next observer evidence: None.
<a id="trace-21851"></a>
- 137.95s–137.95s (×1), actor 2, squad 0 (trace 21851): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 135.00s, trace 21666. Next observer evidence: {'until': 138.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21870}.
<a id="trace-21870"></a>
<a id="trace-21872"></a>
<a id="trace-21915"></a>
<a id="trace-22000"></a>
<a id="trace-22002"></a>
- 138.30s–140.30s (×5), actor 5, squad 0 (trace 21870): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 21668. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21915}.
<a id="trace-22026"></a>
- 141.25s–141.25s (×1), actor 2, squad 0 (trace 22026): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 21938. Next observer evidence: None.
<a id="trace-22027"></a>
- 141.25s–141.25s (×1), actor 2, squad 0 (trace 22027): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 21938. Next observer evidence: None.
<a id="trace-22032"></a>
<a id="trace-22116"></a>
<a id="trace-22149"></a>
<a id="trace-22151"></a>
<a id="trace-22180"></a>
<a id="trace-22263"></a>
<a id="trace-22289"></a>
<a id="trace-22291"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22438"></a>
<a id="trace-22440"></a>
<a id="trace-22460"></a>
<a id="trace-22486"></a>
<a id="trace-22488"></a>
<a id="trace-22521"></a>
<a id="trace-22523"></a>
<a id="trace-22552"></a>
<a id="trace-22630"></a>
<a id="trace-22632"></a>
<a id="trace-22656"></a>
<a id="trace-22658"></a>
<a id="trace-22678"></a>
<a id="trace-22680"></a>
<a id="trace-22697"></a>
<a id="trace-22699"></a>
<a id="trace-22721"></a>
<a id="trace-22723"></a>
<a id="trace-22812"></a>
<a id="trace-22836"></a>
<a id="trace-22838"></a>
- 141.30s–161.30s (×31), actor 5, squad 0 (trace 22032): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 21939. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750294298837706, 'next_transition': 22116}.
<a id="trace-22057"></a>
- 142.10s–142.10s (×1), actor 9, squad 1 (trace 22057): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 21940. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.072582805245489, 'next_transition': 22474}.
<a id="trace-22058"></a>
- 142.10s–142.10s (×1), actor 9, squad 1 (trace 22058): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 21940. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.072582805245489, 'next_transition': 22474}.
<a id="trace-22474"></a>
- 151.80s–151.80s (×1), actor 9, squad 1 (trace 22474): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 150.00s, trace 22385. Next observer evidence: {'until': 177, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087203715147458, 'next_transition': 2065}.
<a id="trace-22845"></a>
- 161.30s–161.30s (×1), actor 2, squad 0 (trace 22845): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 22749. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22888}.
<a id="trace-22888"></a>
<a id="trace-22905"></a>
<a id="trace-22907"></a>
<a id="trace-22984"></a>
<a id="trace-22986"></a>
<a id="trace-23013"></a>
<a id="trace-23015"></a>
<a id="trace-23040"></a>
<a id="trace-23042"></a>
<a id="trace-23060"></a>
<a id="trace-23062"></a>
<a id="trace-23078"></a>
<a id="trace-23149"></a>
<a id="trace-23169"></a>
<a id="trace-23171"></a>
<a id="trace-23191"></a>
<a id="trace-23193"></a>
<a id="trace-23213"></a>
<a id="trace-23215"></a>
<a id="trace-23240"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23336"></a>
- 163.30s–176.30s (×23), actor 5, squad 0 (trace 22888): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 22750. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22905}.
<a id="trace-2064"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (events line 2064): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23361}.
<a id="trace-2065"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (events line 2065): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23592}.
<a id="trace-23355"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 23355): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.05s, trace 23355. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23361}.
<a id="trace-23356"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 23356): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.05s, trace 23356. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23592}.
<a id="trace-23361"></a>
<a id="trace-23363"></a>
<a id="trace-23383"></a>
<a id="trace-23385"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23491"></a>
<a id="trace-23514"></a>
<a id="trace-23516"></a>
- 177.30s–181.30s (×9), actor 5, squad 0 (trace 23361): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.05s, trace 23356. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23383}.
<a id="trace-23533"></a>
- 182.05s–182.05s (×1), actor 2, squad 0 (trace 23533): MoveTactically. Knowledge: actor memory at 180.00s, trace 23428. Next observer evidence: None.
<a id="trace-23534"></a>
- 182.05s–182.05s (×1), actor 2, squad 0 (trace 23534): received platoon directive. Knowledge: actor memory at 180.00s, trace 23428. Next observer evidence: None.
<a id="trace-23538"></a>
- 182.10s–182.10s (×1), actor 2, squad 0 (trace 23538): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 23428. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23567}.
<a id="trace-23567"></a>
<a id="trace-23569"></a>
<a id="trace-23611"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23777"></a>
<a id="trace-23779"></a>
<a id="trace-23810"></a>
<a id="trace-23812"></a>
<a id="trace-23835"></a>
<a id="trace-23860"></a>
<a id="trace-23938"></a>
<a id="trace-24044"></a>
<a id="trace-24079"></a>
<a id="trace-24081"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24199"></a>
<a id="trace-24201"></a>
<a id="trace-24222"></a>
<a id="trace-24224"></a>
<a id="trace-24250"></a>
<a id="trace-24278"></a>
<a id="trace-24280"></a>
<a id="trace-24360"></a>
<a id="trace-24362"></a>
<a id="trace-24391"></a>
<a id="trace-24393"></a>
<a id="trace-24465"></a>
<a id="trace-24490"></a>
<a id="trace-24516"></a>
<a id="trace-24518"></a>
<a id="trace-24600"></a>
<a id="trace-24602"></a>
<a id="trace-24635"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24816"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24899"></a>
<a id="trace-24901"></a>
<a id="trace-24928"></a>
<a id="trace-24930"></a>
<a id="trace-25005"></a>
<a id="trace-25007"></a>
<a id="trace-25081"></a>
<a id="trace-25083"></a>
<a id="trace-25105"></a>
<a id="trace-25139"></a>
<a id="trace-25141"></a>
- 183.30s–218.30s (×57), actor 5, squad 0 (trace 23567): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 23429. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23611}.
<a id="trace-23592"></a>
- 183.90s–183.90s (×1), actor 9, squad 1 (trace 23592): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 23430. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23631}.
<a id="trace-23593"></a>
- 183.90s–183.90s (×1), actor 9, squad 1 (trace 23593): MoveTactically. Knowledge: actor memory at 180.00s, trace 23430. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23631}.
<a id="trace-23594"></a>
- 183.90s–183.90s (×1), actor 9, squad 1 (trace 23594): . Knowledge: actor memory at 180.00s, trace 23430. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23631}.
<a id="trace-23631"></a>
- 184.90s–184.90s (×1), actor 9, squad 1 (trace 23631): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 23430. Next observer evidence: {'until': 190.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.850754553613286, 'next_transition': 23949}.
<a id="trace-23949"></a>
- 190.70s–190.70s (×1), actor 9, squad 1 (trace 23949): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 190.00s, trace 23883. Next observer evidence: {'until': 191.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23973}.
<a id="trace-23973"></a>
- 191.70s–191.70s (×1), actor 9, squad 1 (trace 23973): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 190.00s, trace 23883. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.019608713266209, 'next_transition': 24379}.
<a id="trace-24379"></a>
- 200.90s–200.90s (×1), actor 9, squad 1 (trace 24379): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 200.00s, trace 24305. Next observer evidence: {'until': 201.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24407}.
<a id="trace-24407"></a>
- 201.90s–201.90s (×1), actor 9, squad 1 (trace 24407): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 200.00s, trace 24305. Next observer evidence: {'until': 210.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.096489607569778, 'next_transition': 24795}.
<a id="trace-24795"></a>
- 210.50s–210.50s (×1), actor 9, squad 1 (trace 24795): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 210.00s, trace 24729. Next observer evidence: {'until': 211.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24826}.
<a id="trace-24826"></a>
- 211.50s–211.50s (×1), actor 9, squad 1 (trace 24826): matching received arrivals: deployment leg complete. Knowledge: actor memory at 210.00s, trace 24729. Next observer evidence: {'until': 212.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24867}.
<a id="trace-24867"></a>
- 212.50s–212.50s (×1), actor 9, squad 1 (trace 24867): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 24729. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25023}.
<a id="trace-24870"></a>
- 212.50s–212.50s (×1), actor 9, squad 1 (trace 24870): ReactToContact: cover and return fire. Knowledge: actor memory at 210.00s, trace 24729. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25023}.
<a id="trace-24871"></a>
- 212.50s–212.50s (×1), actor 9, squad 1 (trace 24871): Reorganise complete: known contact. Knowledge: actor memory at 210.00s, trace 24729. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25023}.
<a id="trace-25023"></a>
- 216.20s–216.20s (×1), actor 9, squad 1 (trace 25023): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 215.00s, trace 24948. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.00003028632276, 'next_transition': 25496}.
<a id="trace-25024"></a>
- 216.20s–216.20s (×1), actor 9, squad 1 (trace 25024): rearward bound: one stationary suppressing element. Knowledge: actor memory at 215.00s, trace 24948. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.00003028632276, 'next_transition': 25496}.
<a id="trace-2344"></a>
- 218.50s–218.50s (×1), actor 5, squad 0 (events line 2344): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25181}.
<a id="trace-25153"></a>
- 218.50s–218.50s (×1), actor 5, squad 0 (trace 25153): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.628246 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 218.50s, trace 25153. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25181}.
<a id="trace-25154"></a>
- 218.50s–218.50s (×1), actor 5, squad 0 (trace 25154): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.628246 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 218.50s, trace 25154. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25181}.
<a id="trace-25181"></a>
<a id="trace-25265"></a>
<a id="trace-25286"></a>
<a id="trace-25307"></a>
<a id="trace-25309"></a>
<a id="trace-25331"></a>
<a id="trace-25333"></a>
- 219.30s–223.30s (×7), actor 5, squad 0 (trace 25181): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 218.50s, trace 25154. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25265}.
<a id="trace-25341"></a>
- 223.50s–223.50s (×1), actor 2, squad 0 (trace 25341): received platoon directive. Knowledge: actor memory at 220.00s, trace 25206. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25357}.
<a id="trace-25357"></a>
<a id="trace-25436"></a>
<a id="trace-25438"></a>
<a id="trace-25469"></a>
<a id="trace-25488"></a>
<a id="trace-25567"></a>
<a id="trace-25569"></a>
<a id="trace-25594"></a>
<a id="trace-25596"></a>
<a id="trace-25669"></a>
<a id="trace-25671"></a>
<a id="trace-25692"></a>
<a id="trace-25694"></a>
<a id="trace-25720"></a>
<a id="trace-25749"></a>
<a id="trace-25776"></a>
<a id="trace-25850"></a>
<a id="trace-25852"></a>
- 224.30s–235.30s (×18), actor 5, squad 0 (trace 25357): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 25207. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25436}.
<a id="trace-25496"></a>
- 227.30s–227.30s (×1), actor 9, squad 1 (trace 25496): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 225.00s, trace 25380. Next observer evidence: {'until': 238, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.647408981325844, 'next_transition': 25919}.
<a id="trace-25497"></a>
- 227.30s–227.30s (×1), actor 9, squad 1 (trace 25497): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 225.00s, trace 25380. Next observer evidence: {'until': 238, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.647408981325844, 'next_transition': 25919}.
<a id="trace-25859"></a>
- 235.30s–235.30s (×1), actor 2, squad 0 (trace 25859): current contact unknown for 10 s. Knowledge: actor memory at 235.00s, trace 25793. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25873}.
<a id="trace-25873"></a>
<a id="trace-25875"></a>
<a id="trace-25895"></a>
<a id="trace-25928"></a>
<a id="trace-25930"></a>
<a id="trace-25963"></a>
<a id="trace-25965"></a>
<a id="trace-26053"></a>
<a id="trace-26086"></a>
<a id="trace-26088"></a>
<a id="trace-26127"></a>
<a id="trace-26147"></a>
<a id="trace-26224"></a>
- 236.30s–245.30s (×13), actor 5, squad 0 (trace 25873): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 25794. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25895}.
<a id="trace-25919"></a>
- 238.00s–238.00s (×1), actor 9, squad 1 (trace 25919): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 235.00s, trace 25795. Next observer evidence: {'until': 246, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9687298095790091, 'next_transition': 2519}.
<a id="trace-2518"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (events line 2518): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2519"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (events line 2519): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26250"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (trace 26250): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 26250. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26263}.
<a id="trace-26251"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (trace 26251): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 26251. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26263}.
<a id="trace-26252"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 26252): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 26252. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26500}.
<a id="trace-26253"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 26253): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 26253. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26500}.
<a id="trace-26263"></a>
<a id="trace-26265"></a>
- 246.30s–246.30s (×2), actor 5, squad 0 (trace 26263): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 246.10s, trace 26253. Next observer evidence: {'until': 246.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26274}.
<a id="trace-26274"></a>
- 246.65s–246.65s (×1), actor 2, squad 0 (trace 26274): traveling. Knowledge: actor memory at 245.00s, trace 26168. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498670606868623, 'next_transition': 26339}.
<a id="trace-26275"></a>
- 246.65s–246.65s (×1), actor 2, squad 0 (trace 26275): current contact unknown for 10 s. Knowledge: actor memory at 245.00s, trace 26168. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498670606868623, 'next_transition': 26339}.
<a id="trace-26339"></a>
<a id="trace-26341"></a>
<a id="trace-26364"></a>
<a id="trace-26385"></a>
<a id="trace-26387"></a>
<a id="trace-26462"></a>
- 247.30s–250.30s (×6), actor 5, squad 0 (trace 26339): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 246.10s, trace 26253. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750544911208617, 'next_transition': 26364}.
<a id="trace-26483"></a>
- 251.10s–251.10s (×1), actor 2, squad 0 (trace 26483): traveling overwatch. Knowledge: actor memory at 250.00s, trace 26404. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150331768242828, 'next_transition': 26493}.
<a id="trace-26484"></a>
- 251.10s–251.10s (×1), actor 2, squad 0 (trace 26484): received platoon directive. Knowledge: actor memory at 250.00s, trace 26404. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150331768242828, 'next_transition': 26493}.
<a id="trace-26493"></a>
<a id="trace-26631"></a>
<a id="trace-26633"></a>
<a id="trace-26669"></a>
<a id="trace-26671"></a>
<a id="trace-26698"></a>
<a id="trace-26700"></a>
<a id="trace-26807"></a>
<a id="trace-26809"></a>
<a id="trace-26839"></a>
<a id="trace-26841"></a>
<a id="trace-26874"></a>
<a id="trace-26876"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26991"></a>
<a id="trace-26993"></a>
<a id="trace-27024"></a>
<a id="trace-27026"></a>
<a id="trace-27159"></a>
<a id="trace-27161"></a>
<a id="trace-27189"></a>
<a id="trace-27191"></a>
<a id="trace-27223"></a>
<a id="trace-27225"></a>
<a id="trace-27305"></a>
<a id="trace-27307"></a>
<a id="trace-27334"></a>
<a id="trace-27336"></a>
<a id="trace-27362"></a>
<a id="trace-27364"></a>
<a id="trace-27388"></a>
<a id="trace-27390"></a>
<a id="trace-27414"></a>
<a id="trace-27501"></a>
<a id="trace-27503"></a>
<a id="trace-27529"></a>
<a id="trace-27531"></a>
<a id="trace-27557"></a>
<a id="trace-27559"></a>
<a id="trace-27587"></a>
<a id="trace-27589"></a>
<a id="trace-27607"></a>
<a id="trace-27708"></a>
<a id="trace-27735"></a>
<a id="trace-27737"></a>
<a id="trace-27761"></a>
<a id="trace-27790"></a>
<a id="trace-27792"></a>
<a id="trace-27867"></a>
<a id="trace-27869"></a>
<a id="trace-27889"></a>
<a id="trace-27891"></a>
<a id="trace-27913"></a>
<a id="trace-27944"></a>
<a id="trace-27946"></a>
<a id="trace-27968"></a>
<a id="trace-28048"></a>
<a id="trace-28050"></a>
<a id="trace-28077"></a>
<a id="trace-28079"></a>
<a id="trace-28099"></a>
<a id="trace-28125"></a>
<a id="trace-28127"></a>
<a id="trace-28149"></a>
<a id="trace-28230"></a>
<a id="trace-28232"></a>
<a id="trace-28257"></a>
<a id="trace-28259"></a>
<a id="trace-28287"></a>
<a id="trace-28289"></a>
<a id="trace-28311"></a>
<a id="trace-28313"></a>
<a id="trace-28331"></a>
<a id="trace-28333"></a>
<a id="trace-28463"></a>
<a id="trace-28489"></a>
<a id="trace-28491"></a>
<a id="trace-28589"></a>
<a id="trace-28591"></a>
<a id="trace-28614"></a>
<a id="trace-28638"></a>
<a id="trace-28691"></a>
<a id="trace-28693"></a>
<a id="trace-28770"></a>
<a id="trace-28772"></a>
<a id="trace-28799"></a>
<a id="trace-28801"></a>
<a id="trace-28845"></a>
<a id="trace-28847"></a>
<a id="trace-28869"></a>
<a id="trace-28871"></a>
<a id="trace-28950"></a>
<a id="trace-28952"></a>
<a id="trace-28977"></a>
<a id="trace-29006"></a>
<a id="trace-29008"></a>
<a id="trace-29031"></a>
<a id="trace-29033"></a>
<a id="trace-29051"></a>
- 251.30s–314.30s (×100), actor 5, squad 0 (trace 26493): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 26405. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750024846726431, 'next_transition': 26631}.
<a id="trace-26500"></a>
- 251.30s–251.30s (×1), actor 9, squad 1 (trace 26500): MoveTactically. Knowledge: actor memory at 250.00s, trace 26406. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.05631352741071, 'next_transition': 27034}.
<a id="trace-26501"></a>
- 251.30s–251.30s (×1), actor 9, squad 1 (trace 26501): traveling. Knowledge: actor memory at 250.00s, trace 26406. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.05631352741071, 'next_transition': 27034}.
<a id="trace-26502"></a>
- 251.30s–251.30s (×1), actor 9, squad 1 (trace 26502): received platoon directive. Knowledge: actor memory at 250.00s, trace 26406. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.05631352741071, 'next_transition': 27034}.
<a id="trace-27034"></a>
- 261.50s–261.50s (×1), actor 9, squad 1 (trace 27034): matching received arrivals: traveling stage complete. Knowledge: actor memory at 260.00s, trace 26935. Next observer evidence: {'until': 271.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.99997442931346, 'next_transition': 27541}.
<a id="trace-27541"></a>
- 271.75s–271.75s (×1), actor 9, squad 1 (trace 27541): matching received arrivals: deployment leg complete. Knowledge: actor memory at 270.00s, trace 27438. Next observer evidence: {'until': 287.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2793}.
<a id="trace-2793"></a>
- 287.50s–287.50s (×1), actor 5, squad 1 (events line 2793): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 317.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29350}.
<a id="trace-28108"></a>
- 287.50s–287.50s (×1), actor 5, squad 1 (trace 28108): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 287.50s, trace 28108. Next observer evidence: {'until': 317.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29350}.
<a id="trace-28109"></a>
- 287.50s–287.50s (×1), actor 5, squad 1 (trace 28109): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 287.50s, trace 28109. Next observer evidence: {'until': 317.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29350}.
<a id="trace-2973"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (events line 2973): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29085"></a>
- 315.10s–315.10s (×1), actor 5, squad 0 (trace 29085): renew committed intent (75 s lifetime). Knowledge: actor memory at 315.10s, trace 29085. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29131}.
<a id="trace-29131"></a>
<a id="trace-29160"></a>
<a id="trace-29184"></a>
<a id="trace-29186"></a>
<a id="trace-29213"></a>
<a id="trace-29241"></a>
<a id="trace-29243"></a>
<a id="trace-29315"></a>
<a id="trace-29340"></a>
<a id="trace-29342"></a>
<a id="trace-29485"></a>
<a id="trace-29519"></a>
<a id="trace-29547"></a>
<a id="trace-29549"></a>
<a id="trace-29634"></a>
<a id="trace-29658"></a>
<a id="trace-29660"></a>
<a id="trace-29684"></a>
<a id="trace-29715"></a>
<a id="trace-29742"></a>
<a id="trace-29744"></a>
<a id="trace-29830"></a>
<a id="trace-29832"></a>
<a id="trace-29856"></a>
<a id="trace-30133"></a>
<a id="trace-30135"></a>
<a id="trace-30168"></a>
<a id="trace-30188"></a>
<a id="trace-30460"></a>
<a id="trace-30462"></a>
<a id="trace-30493"></a>
<a id="trace-30517"></a>
<a id="trace-30519"></a>
<a id="trace-30568"></a>
<a id="trace-30643"></a>
<a id="trace-30645"></a>
<a id="trace-30783"></a>
<a id="trace-30870"></a>
- 315.30s–341.30s (×38), actor 5, squad 0 (trace 29131): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.10s, trace 29085. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29160}.
<a id="trace-29350"></a>
- 321.75s–321.75s (×1), actor 9, squad 1 (trace 29350): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 320.00s, trace 29259. Next observer evidence: {'until': 331.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.35046336555306, 'next_transition': 29866}.
<a id="trace-29351"></a>
- 321.75s–321.75s (×1), actor 9, squad 1 (trace 29351): Reorganise: completed/failed drill. Knowledge: actor memory at 320.00s, trace 29259. Next observer evidence: {'until': 331.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.35046336555306, 'next_transition': 29866}.
<a id="trace-29354"></a>
- 321.75s–321.75s (×1), actor 9, squad 1 (trace 29354): MoveTactically. Knowledge: actor memory at 320.00s, trace 29259. Next observer evidence: {'until': 331.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.35046336555306, 'next_transition': 29866}.
<a id="trace-29355"></a>
- 321.75s–321.75s (×1), actor 9, squad 1 (trace 29355): traveling overwatch. Knowledge: actor memory at 320.00s, trace 29259. Next observer evidence: {'until': 331.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.35046336555306, 'next_transition': 29866}.
<a id="trace-29356"></a>
- 321.75s–321.75s (×1), actor 9, squad 1 (trace 29356): Reorganise complete. Knowledge: actor memory at 320.00s, trace 29259. Next observer evidence: {'until': 331.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.35046336555306, 'next_transition': 29866}.
<a id="trace-29866"></a>
- 331.50s–331.50s (×1), actor 9, squad 1 (trace 29866): ReactToContact: cover and return fire. Knowledge: actor memory at 330.00s, trace 29772. Next observer evidence: {'until': 334.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.0284708308680819, 'next_transition': 30211}.
<a id="trace-29867"></a>
- 331.50s–331.50s (×1), actor 9, squad 1 (trace 29867): bounding overwatch. Knowledge: actor memory at 330.00s, trace 29772. Next observer evidence: {'until': 334.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.0284708308680819, 'next_transition': 30211}.
<a id="trace-29868"></a>
- 331.50s–331.50s (×1), actor 9, squad 1 (trace 29868): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 29772. Next observer evidence: {'until': 334.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.0284708308680819, 'next_transition': 30211}.
<a id="trace-30211"></a>
- 334.85s–334.85s (×1), actor 9, squad 1 (trace 30211): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 330.00s, trace 29772. Next observer evidence: {'until': 346, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.10814443348306, 'next_transition': 31473}.
<a id="trace-30212"></a>
- 334.85s–334.85s (×1), actor 9, squad 1 (trace 30212): rearward bound: one stationary suppressing element. Knowledge: actor memory at 330.00s, trace 29772. Next observer evidence: {'until': 346, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.10814443348306, 'next_transition': 31473}.
<a id="trace-30905"></a>
- 341.70s–341.70s (×1), actor 2, squad 0 (trace 30905): ReactToContact: cover and return fire. Knowledge: actor memory at 340.00s, trace 30704. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.024997765862981, 'next_transition': 31056}.
<a id="trace-30906"></a>
- 341.70s–341.70s (×1), actor 2, squad 0 (trace 30906): bounding overwatch. Knowledge: actor memory at 340.00s, trace 30704. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.024997765862981, 'next_transition': 31056}.
<a id="trace-30907"></a>
- 341.70s–341.70s (×1), actor 2, squad 0 (trace 30907): new contact inside 100 m. Knowledge: actor memory at 340.00s, trace 30704. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.024997765862981, 'next_transition': 31056}.
<a id="trace-31056"></a>
<a id="trace-31058"></a>
- 342.30s–342.30s (×2), actor 5, squad 0 (trace 31056): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 30705. Next observer evidence: {'until': 342.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5917512843883401, 'next_transition': 3266}.
<a id="trace-3266"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (events line 3266): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31076"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 31076): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.527797 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 342.70s, trace 31076. Next observer evidence: {'until': 343.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450002667327664, 'next_transition': 31220}.
<a id="trace-31077"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 31077): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.527797 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 342.70s, trace 31077. Next observer evidence: {'until': 343.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450002667327664, 'next_transition': 31220}.
<a id="trace-31078"></a>
- 342.70s–342.70s (×1), actor 2, squad 0 (trace 31078): new contact inside 100 m. Knowledge: actor memory at 340.00s, trace 30704. Next observer evidence: {'until': 343.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450002667327664, 'next_transition': 31220}.
<a id="trace-31220"></a>
<a id="trace-31222"></a>
<a id="trace-31252"></a>
<a id="trace-31254"></a>
<a id="trace-31340"></a>
- 343.30s–345.30s (×5), actor 5, squad 0 (trace 31220): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.70s, trace 31077. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749971034893997, 'next_transition': 31252}.
<a id="trace-31365"></a>
- 346.00s–346.00s (×1), actor 2, squad 0 (trace 31365): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 345.00s, trace 31274. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49197340668792755, 'next_transition': 31534}.
<a id="trace-31366"></a>
- 346.00s–346.00s (×1), actor 2, squad 0 (trace 31366): rearward bound: one stationary suppressing element. Knowledge: actor memory at 345.00s, trace 31274. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49197340668792755, 'next_transition': 31534}.
<a id="trace-31473"></a>
- 346.10s–346.10s (×1), actor 9, squad 1 (trace 31473): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 345.00s, trace 31276. Next observer evidence: {'until': 352.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 4.236631552675427, 'next_transition': 31797}.
<a id="trace-31474"></a>
- 346.10s–346.10s (×1), actor 9, squad 1 (trace 31474): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 345.00s, trace 31276. Next observer evidence: {'until': 352.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 4.236631552675427, 'next_transition': 31797}.
<a id="trace-31534"></a>
<a id="trace-31536"></a>
<a id="trace-31572"></a>
<a id="trace-31574"></a>
<a id="trace-31612"></a>
<a id="trace-31614"></a>
<a id="trace-31641"></a>
<a id="trace-31722"></a>
<a id="trace-31724"></a>
<a id="trace-31754"></a>
<a id="trace-31784"></a>
<a id="trace-31786"></a>
<a id="trace-31826"></a>
<a id="trace-31859"></a>
<a id="trace-31861"></a>
<a id="trace-31938"></a>
<a id="trace-32016"></a>
<a id="trace-32042"></a>
- 346.30s–359.30s (×18), actor 5, squad 0 (trace 31534): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 31275. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6639821038151879, 'next_transition': 31572}.
<a id="trace-31797"></a>
- 352.70s–352.70s (×1), actor 9, squad 1 (trace 31797): NeedSupport. Knowledge: actor memory at 350.00s, trace 31667. Next observer evidence: {'until': 356.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.427760080387887, 'next_transition': 3408}.
<a id="trace-3408"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (events line 3408): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.973380647449348, 'next_transition': None}.
<a id="trace-31970"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (trace 31970): renew committed intent (75 s lifetime). Knowledge: actor memory at 356.50s, trace 31970. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.973380647449348, 'next_transition': None}.

## Net delivery

267 matched order/radio deliveries; 304 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.678s; maximum 5.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4387: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 4389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 4390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4391: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4392: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4394: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4396: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4397: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4400: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 4401: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 4402: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5402: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5406: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5408: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5412: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5413: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5415: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5417: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5418: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5419: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5420: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5421: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5422: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5423: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7076: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7077: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7080: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7081: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7082: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7083: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 7084: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7086: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7087: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7088: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7089: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7091: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7092: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7093: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7094: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7095: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7096: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7097: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7677: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7678: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7681: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7682: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7683: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7684: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 7685: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 7686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7687: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7688: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7689: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7690: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7692: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7693: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7694: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7695: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7696: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 7697: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 7698: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 7991: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 7992: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8072: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8073: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8076: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8077: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8078: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8079: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 8080: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 8081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8082: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8083: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8084: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8085: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8087: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8088: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8089: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8090: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8091: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 8092: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 8093: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10670: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10673: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10674: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10675: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10676: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 10677: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 10678: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10679: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10680: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10681: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10682: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10684: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10685: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10686: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10687: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10688: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 10689: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 10690: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11632: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11633: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11635: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11636: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11637: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11638: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 11639: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 11640: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11641: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11642: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11643: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11644: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11646: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11647: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11648: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11649: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11650: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 11651: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 11652: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12019: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12020: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12022: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12023: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12024: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12025: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 12026: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 12027: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12028: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12029: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12030: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12031: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12033: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12034: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12035: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12036: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12037: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 12038: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 12039: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 15399: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15400: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15402: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15403: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15404: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15405: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 15406: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 15407: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15408: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15409: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15410: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15411: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15413: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15414: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15415: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15416: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15417: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 15418: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 15419: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 15898: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 15899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 15900: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 15901: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 15902: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 15903: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 15904: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 15905: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 15906: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 15907: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 15908: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 15909: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 15910: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 15911: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 15912: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 15913: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 15914: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 15915: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 15916: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 16362: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16364: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16365: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16366: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 16367: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 16368: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16369: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16370: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16371: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16372: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16373: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16374: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16375: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16376: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16377: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 16378: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 16379: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 16648: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16649: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16650: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16651: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16652: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 16653: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 16654: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16655: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16656: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16657: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16658: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16659: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16660: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16661: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16662: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16663: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 16664: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 16665: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 16862: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 16863: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 16864: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 16865: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 16866: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 16867: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 16868: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 16869: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 16870: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 16871: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 16872: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 16873: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 16874: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 16875: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 16876: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 16877: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 16878: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 16879: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 16938: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 17085: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 17086: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 17087: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 17088: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17089: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 17090: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 17091: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 17092: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17093: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 17094: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 17095: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17096: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17097: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 17098: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17099: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17100: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 17101: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 17102: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 17825: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17826: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17827: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17828: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17829: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 17830: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 17831: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17832: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17833: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17834: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17835: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17836: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17837: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17838: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17839: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17840: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 17841: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 17842: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 18089: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 18090: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 18135: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 18136: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 18137: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 18138: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 18139: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 18140: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 18141: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 18142: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 18143: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 18144: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 18145: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 18146: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 18147: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 18148: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 18149: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 18150: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 18151: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 18152: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 19880: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 19881: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 19882: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 19883: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 19884: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 19885: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 19886: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 19887: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 19888: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 19889: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 19890: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 19891: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 19892: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 19893: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 19894: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 19895: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 19896: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 19897: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 20240: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 20241: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 20242: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20243: estimate 14.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20244: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 20245: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 20246: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 20247: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20248: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20249: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20250: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20251: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20252: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20253: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20254: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20255: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 20256: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 20257: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 20400: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 20401: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 20402: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 20490: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 20491: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 20492: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 20493: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 20494: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 20495: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 20496: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 20497: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 20498: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 20499: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 20500: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 20501: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 20502: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 20503: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 20504: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 20505: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 20506: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 20507: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 20709: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 20710: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 20711: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 20712: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 20713: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 20714: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 20715: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 20716: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 20717: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 20718: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 20719: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 20720: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 20721: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 20722: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 20723: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 20724: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 20725: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 20986: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 20987: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 20988: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 20989: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 20990: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 20991: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 20992: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 20993: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 20994: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 20995: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 20996: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 20997: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 20998: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 20999: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 21000: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 21001: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 21184: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 21185: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 21186: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 21187: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 21188: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 21189: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 21190: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 21191: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 21192: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 21193: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 21194: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 21195: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 21196: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 21197: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 21198: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 21199: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 21413: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 21414: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 21415: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 21416: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 21417: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 21418: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 21419: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 21420: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 21421: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 21422: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 21423: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 21424: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 21425: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 21426: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 21427: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 21666: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 21667: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 21668: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 21669: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 21670: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 21671: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 21672: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 21673: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 21674: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 21675: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 21676: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 21677: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 21678: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 21679: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 21680: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 21938: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 21939: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 21940: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 21941: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 21942: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 21943: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 21944: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 21945: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 21946: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 21947: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 21948: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 21949: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 21950: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 21951: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 22205: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 22206: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 22207: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 22208: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 22209: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 22210: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 22211: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 22212: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 22213: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 22214: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 22215: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 22216: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 22217: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 22218: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 22383: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 22384: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 22385: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 22386: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 22387: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 22388: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 22389: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 22390: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 22391: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 22392: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 22393: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 22394: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 22395: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 22396: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 22575: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 22576: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 22577: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 22578: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 22579: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 22580: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 22581: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 22582: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 22583: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 22584: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 22585: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 22586: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 22587: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 22588: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 22749: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 22750: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 22751: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 22752: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22753: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22754: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 22755: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 22756: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22757: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 22758: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22759: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22760: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 22761: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 22762: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 22925: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 22926: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 22927: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 22928: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22929: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22930: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 22931: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 22932: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22933: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22934: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 22935: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22936: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 22937: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 22938: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 23092: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 23093: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 23094: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 23095: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23096: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23097: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23098: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23099: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23100: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23101: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23102: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23103: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 23104: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 23105: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 23256: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 23257: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 23258: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 10, trace 23259: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23260: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23261: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 23262: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 23263: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23264: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 23265: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23266: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23267: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 23268: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 23269: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 23355: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 23356: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 23428: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 23429: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 23430: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 10, trace 23431: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 23432: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 23433: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 23434: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 23435: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 23436: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 23437: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 23438: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 23439: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 23440: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 23441: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 23685: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 23686: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 23687: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 10, trace 23688: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 23689: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 23690: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 23691: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 23692: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 23693: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 23694: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 23695: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 23696: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 23697: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 23698: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 23881: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23882: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23883: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 10, trace 23884: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23885: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23886: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23887: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23888: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23889: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23890: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23891: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23892: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 23893: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 23894: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 24118: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 24119: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 24120: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 10, trace 24121: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24122: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24123: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 24124: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 24125: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24126: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 24127: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24128: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24129: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 24130: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 24131: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 24303: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 24304: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 24305: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 10, trace 24306: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 24307: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 24308: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 24309: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 24310: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 24311: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 24312: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 24313: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 24314: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 24315: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 24316: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 24539: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 24540: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 24541: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 10, trace 24542: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 24543: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 24544: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 24545: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 24546: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 24547: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 24548: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 24549: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 24550: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 24551: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 24552: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 24727: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 24728: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 24729: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 10, trace 24730: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24731: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24732: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 24733: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 24734: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24735: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24736: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24737: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24738: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 24739: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 24740: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 24946: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24947: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24948: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 10, trace 24949: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24950: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24951: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24952: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24953: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24954: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24955: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24956: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24957: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 24958: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 24959: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.50s leader 5, trace 25153: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.50s leader 5, trace 25154: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 25206: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 25207: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 25208: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 10, trace 25209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 25210: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 25211: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 25212: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 25213: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 25214: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 25215: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 25216: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 25217: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 25218: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 25219: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 25378: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 25379: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 25380: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 10, trace 25381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 25382: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 25383: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 25384: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 25385: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 25386: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 25387: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 25388: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 25389: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 25390: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 25391: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 25614: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 25615: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 25616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 10, trace 25617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 25618: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 25619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 25620: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 25621: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 25622: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 25623: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 25624: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 25625: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 25626: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 25627: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 25793: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 25794: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 25795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 10, trace 25796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25797: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 25800: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25801: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25803: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25804: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 25805: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 25806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 25993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 10, trace 25996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 26000: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 26001: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 26002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 26003: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 26004: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 26005: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 26006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 26168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 26169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 26170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 10, trace 26171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 26172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 26173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 26174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 26175: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 26176: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 26177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 26178: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 26179: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 26180: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 26181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 26250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 26251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 26252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 26253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 26404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 26405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 26406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 10, trace 26407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 26408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 26409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 26410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 26411: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 26412: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 26413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 26414: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 26415: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 26416: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 26417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 26719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 26720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 26721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 10, trace 26722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 26723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 26724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 26725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 26726: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 26727: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 26728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 26729: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 26730: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 26731: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 26732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 26933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 26934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 10, trace 26936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 26937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 26938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 26939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 26940: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 26941: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 26942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 26943: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26944: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 26945: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 26946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 27244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 27245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 27246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 10, trace 27247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 27248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 27249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 27250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 27251: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 27252: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 27253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 27254: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 27255: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 27256: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 27257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 27436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 27437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 27438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 10, trace 27439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 27440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 27441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 27442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 27443: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 27444: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 27445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 27446: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 27447: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 27448: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 27449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 27623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 27624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 27625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 10, trace 27626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 27627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 27628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 27629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 27630: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 27631: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 27632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 27633: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 27634: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 27635: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 27636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 27808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 27809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 27810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 10, trace 27811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 27812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 27813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 27814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 27815: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 27816: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 27817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 27818: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 27819: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 27820: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 27821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 27985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 27986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 27987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 10, trace 27988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 27991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 27992: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 27993: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 27995: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27996: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 27997: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 27998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.50s leader 5, trace 28108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.50s leader 5, trace 28109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 28171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 28172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 28173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 10, trace 28174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 28175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 28176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 28177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 28178: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 28179: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 28180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 28181: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 28182: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 28183: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 28184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 28352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 28353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 28354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 10, trace 28355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28359: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28360: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28362: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28363: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 28364: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 28365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 28531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 28532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 28533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 10, trace 28534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28538: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28539: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28541: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28542: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 28543: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 28544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 28712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 28714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 10, trace 28715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28719: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28720: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28722: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28723: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 28724: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 28725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 28891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 28892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 28893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 10, trace 28894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 28895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 28896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 28897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 28898: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 28899: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 28900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 28901: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 28902: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 28903: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 28904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 29069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 29070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 29071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 10, trace 29072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29076: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29077: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29079: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29080: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 29081: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 29082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.10s leader 5, trace 29085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 29257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 29259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 10, trace 29260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29264: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29265: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29267: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29268: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 29269: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 29568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 29569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 29570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 10, trace 29571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 29573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 29574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29575: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 29576: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 29578: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29579: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 29580: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 29581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 29770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 29771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 29772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 10, trace 29773: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29776: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29777: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29778: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29779: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29780: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29781: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 29782: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 29783: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 30397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 30398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 30399: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 10, trace 30400: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30401: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 30402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 30403: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 30404: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30405: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 30406: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30407: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30408: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 30409: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 30410: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 30704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 30705: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 30706: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 10, trace 30707: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30708: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 30709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30710: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30711: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30712: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30713: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30714: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30715: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 30716: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 30717: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 31076: estimate 12.71; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 31077: estimate 12.71; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 31274: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 31275: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 31276: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 10, trace 31277: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 31278: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 31279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 31280: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 31281: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 31282: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 31283: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 31284: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 31285: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 31286: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 31287: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 31665: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 31666: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 31667: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 10, trace 31668: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 31669: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 31670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 31671: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 31672: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 31673: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 31674: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 31675: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 31676: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 31677: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 31678: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 31882: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 31883: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 10, trace 31884: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 31885: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 31886: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 31887: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 31888: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 31889: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 31890: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 31891: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 31892: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 31893: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 31894: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 31970: estimate 14.21; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 32062: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 32063: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 10, trace 32064: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 32065: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 32066: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 32067: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 32068: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 32069: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 32070: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 32071: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 32072: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 32073: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 32074: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren killed in action
- 1: Rook incapacitated
- 1: Ash incapacitated
- 1: Bram incapacitated
- 1: Reed incapacitated
- 1: Moss incapacitated
- 1: Voss incapacitated
- 1: Ellis killed in action
- 1: Tern killed in action
- 1: Soren incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
