# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/10/108/good-azure/battle-108-1789673847448280416`

## Battle summary

**Ember** · 360 s · 475 shots.

### Turning points

- 17.6s, squad 1: contact (events line 218). First recorded contact.
- 36.0s, squad 0: assault ([trace 9010](#trace-9010)). 36.4s, squad 0: advanced tactically.
- 39.4s, squad 1: help call ([trace 10429](#trace-10429)). No completion observed before termination.
- 41.0s, squad 0: help answer ([trace 10612](#trace-10612)). 71.5s, squad 0: prepared a base of fire.
- 42.4s, squad 0: help call ([trace 14055](#trace-14055)). 43.9s, squad 1: answered a neighbour with support by fire.
- 43.9s, squad 1: help answer ([trace 14142](#trace-14142)). 72.5s, squad 1: joined the assault from its own side.
- 72.5s, squad 1: assault ([trace 20125](#trace-20125)). 96.2s, squad 1: effective fire without superiority for 15 s after expected support.
- 92.8s, squad 0: withdrawal ([trace 21420](#trace-21420)). 124.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 129.6s, squad 1: withdrawal ([trace 23378](#trace-23378)). No completion observed before termination.
- 130.2s, squad 0: withdrawal ([trace 23506](#trace-23506)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 5 further drill types; withdrew; 83 shots, 5/8 lost.
- **1** — FightHere; chose effective fire without superiority for 15 s after expected support, Withdraw to received rally and 4 further drill types; withdrew; 13 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 321 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 58 shots, 1/2 lost.

### Decisions and attribution

At 31.1s, squad 1 chose FightHere: nearest known group ([trace 7384](#trace-7384)), followed by 0 shots and 1 own casualties; estimate 12.8 against 10 distinct squad-reported contacts; At 72.5s, squad 1 chose joined the assault from its own side ([trace 20125](#trace-20125)), followed by 3 shots and 0 own casualties; estimate 12.9 against 0 distinct squad-reported contacts; At 36.0s, squad 0 chose prepared a base of fire ([trace 7686](#trace-7686)), followed by 2 shots and 0 own casualties; estimate 12.9 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.

### Communication

195 matched deliveries (mean 0.43s, max 1.85s); 501 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.55s, squad 1, contact, evidence events line 218: First recorded contact; .
- 36.05s, squad 0, assault, evidence 9010: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 36.4s, squad 0: advanced tactically.
- 39.35s, squad 1, help call, evidence 10429: NeedSupport; No completion observed before termination.
- 41.00s, squad 0, help answer, evidence 10612: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 71.5s, squad 0: prepared a base of fire.
- 42.40s, squad 0, help call, evidence 14055: NeedSupport; 43.9s, squad 1: answered a neighbour with support by fire.
- 43.85s, squad 1, help answer, evidence 14142: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 72.5s, squad 1: joined the assault from its own side.
- 72.45s, squad 1, assault, evidence 20125: radio opportunity: join existing assault from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map; 96.2s, squad 1: effective fire without superiority for 15 s after expected support.
- 92.80s, squad 0, withdrawal, evidence 21420: BreakContact: believed ratio at least two without superiority; 124.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 129.55s, squad 1, withdrawal, evidence 23378: Withdraw to received rally; No completion observed before termination.
- 130.25s, squad 0, withdrawal, evidence 23506: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915688660345217, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915688660345217, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915688660345217, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-639"></a>
<a id="trace-641"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-683"></a>
<a id="trace-685"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259977012703431, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-935"></a>
<a id="trace-937"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449850561532156, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.863886882600056, 'next_transition': 1841}.
<a id="trace-939"></a>
<a id="trace-941"></a>
<a id="trace-1280"></a>
<a id="trace-1282"></a>
<a id="trace-1318"></a>
<a id="trace-1320"></a>
<a id="trace-1360"></a>
<a id="trace-1362"></a>
<a id="trace-1399"></a>
<a id="trace-1401"></a>
<a id="trace-1433"></a>
<a id="trace-1435"></a>
<a id="trace-1480"></a>
<a id="trace-1482"></a>
<a id="trace-1514"></a>
<a id="trace-1516"></a>
<a id="trace-1631"></a>
<a id="trace-1633"></a>
<a id="trace-1656"></a>
<a id="trace-1658"></a>
<a id="trace-1680"></a>
<a id="trace-1682"></a>
<a id="trace-1709"></a>
<a id="trace-1711"></a>
<a id="trace-1740"></a>
<a id="trace-1742"></a>
<a id="trace-1766"></a>
<a id="trace-1768"></a>
<a id="trace-1791"></a>
<a id="trace-1793"></a>
<a id="trace-1836"></a>
<a id="trace-1838"></a>
<a id="trace-2038"></a>
<a id="trace-2040"></a>
<a id="trace-2127"></a>
<a id="trace-2129"></a>
<a id="trace-2153"></a>
<a id="trace-2155"></a>
<a id="trace-2624"></a>
<a id="trace-2626"></a>
<a id="trace-2690"></a>
<a id="trace-2692"></a>
<a id="trace-3110"></a>
<a id="trace-3112"></a>
<a id="trace-3625"></a>
<a id="trace-3627"></a>
<a id="trace-3711"></a>
<a id="trace-3713"></a>
<a id="trace-4751"></a>
<a id="trace-4753"></a>
<a id="trace-4869"></a>
<a id="trace-4871"></a>
<a id="trace-4930"></a>
<a id="trace-4932"></a>
<a id="trace-5550"></a>
<a id="trace-5552"></a>
<a id="trace-5585"></a>
<a id="trace-5587"></a>
<a id="trace-5647"></a>
<a id="trace-5649"></a>
<a id="trace-5723"></a>
<a id="trace-5725"></a>
<a id="trace-5782"></a>
<a id="trace-5784"></a>
<a id="trace-5833"></a>
<a id="trace-5835"></a>
<a id="trace-6226"></a>
<a id="trace-6228"></a>
<a id="trace-6258"></a>
<a id="trace-6260"></a>
<a id="trace-6295"></a>
<a id="trace-6297"></a>
<a id="trace-6327"></a>
<a id="trace-6329"></a>
<a id="trace-7088"></a>
<a id="trace-7090"></a>
<a id="trace-7111"></a>
<a id="trace-7113"></a>
<a id="trace-7147"></a>
<a id="trace-7149"></a>
<a id="trace-7188"></a>
<a id="trace-7190"></a>
<a id="trace-7332"></a>
<a id="trace-7334"></a>
<a id="trace-7418"></a>
<a id="trace-7420"></a>
<a id="trace-7445"></a>
<a id="trace-7447"></a>
<a id="trace-7468"></a>
<a id="trace-7470"></a>
<a id="trace-7549"></a>
<a id="trace-7551"></a>
<a id="trace-7568"></a>
<a id="trace-7570"></a>
<a id="trace-7660"></a>
<a id="trace-7662"></a>
<a id="trace-7677"></a>
<a id="trace-7679"></a>
<a id="trace-9401"></a>
<a id="trace-9403"></a>
<a id="trace-10199"></a>
<a id="trace-10201"></a>
<a id="trace-10235"></a>
<a id="trace-10237"></a>
<a id="trace-10327"></a>
<a id="trace-10329"></a>
<a id="trace-10372"></a>
<a id="trace-10374"></a>
<a id="trace-10420"></a>
<a id="trace-10422"></a>
<a id="trace-10465"></a>
<a id="trace-10467"></a>
<a id="trace-10568"></a>
<a id="trace-10570"></a>
<a id="trace-10604"></a>
<a id="trace-10606"></a>
<a id="trace-13987"></a>
<a id="trace-13989"></a>
<a id="trace-14108"></a>
<a id="trace-14110"></a>
<a id="trace-14129"></a>
<a id="trace-14131"></a>
<a id="trace-14188"></a>
<a id="trace-14190"></a>
<a id="trace-14233"></a>
<a id="trace-14235"></a>
<a id="trace-14328"></a>
<a id="trace-14330"></a>
<a id="trace-14364"></a>
<a id="trace-14366"></a>
<a id="trace-14397"></a>
<a id="trace-14399"></a>
<a id="trace-14424"></a>
<a id="trace-14426"></a>
<a id="trace-14448"></a>
<a id="trace-14450"></a>
<a id="trace-14467"></a>
<a id="trace-14469"></a>
<a id="trace-14493"></a>
<a id="trace-14495"></a>
<a id="trace-14513"></a>
<a id="trace-14515"></a>
<a id="trace-14537"></a>
<a id="trace-14539"></a>
<a id="trace-14551"></a>
<a id="trace-14553"></a>
<a id="trace-14651"></a>
<a id="trace-14653"></a>
<a id="trace-14689"></a>
<a id="trace-14691"></a>
<a id="trace-14736"></a>
<a id="trace-14738"></a>
<a id="trace-14769"></a>
<a id="trace-14771"></a>
<a id="trace-14809"></a>
<a id="trace-14811"></a>
<a id="trace-14830"></a>
<a id="trace-14832"></a>
<a id="trace-14854"></a>
<a id="trace-14856"></a>
<a id="trace-14868"></a>
<a id="trace-14870"></a>
<a id="trace-14891"></a>
<a id="trace-14893"></a>
<a id="trace-14910"></a>
<a id="trace-14912"></a>
<a id="trace-14992"></a>
<a id="trace-14994"></a>
<a id="trace-15009"></a>
<a id="trace-15011"></a>
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15048"></a>
<a id="trace-15050"></a>
<a id="trace-15077"></a>
<a id="trace-15079"></a>
<a id="trace-15098"></a>
<a id="trace-15100"></a>
<a id="trace-15136"></a>
<a id="trace-15138"></a>
<a id="trace-15164"></a>
<a id="trace-15166"></a>
<a id="trace-15179"></a>
<a id="trace-15181"></a>
<a id="trace-15296"></a>
<a id="trace-15298"></a>
<a id="trace-15341"></a>
<a id="trace-15343"></a>
<a id="trace-15368"></a>
<a id="trace-15370"></a>
<a id="trace-15388"></a>
<a id="trace-15390"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-15467"></a>
<a id="trace-15469"></a>
<a id="trace-15499"></a>
<a id="trace-15501"></a>
<a id="trace-15685"></a>
<a id="trace-15687"></a>
<a id="trace-15758"></a>
<a id="trace-15760"></a>
<a id="trace-15841"></a>
<a id="trace-15843"></a>
<a id="trace-15909"></a>
<a id="trace-15911"></a>
<a id="trace-15985"></a>
<a id="trace-15987"></a>
<a id="trace-16150"></a>
<a id="trace-16152"></a>
<a id="trace-16216"></a>
<a id="trace-16218"></a>
<a id="trace-19649"></a>
<a id="trace-19651"></a>
<a id="trace-19674"></a>
<a id="trace-19676"></a>
<a id="trace-20149"></a>
<a id="trace-20151"></a>
<a id="trace-20190"></a>
<a id="trace-20192"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20399"></a>
<a id="trace-20401"></a>
<a id="trace-20440"></a>
<a id="trace-20442"></a>
<a id="trace-20477"></a>
<a id="trace-20479"></a>
<a id="trace-20496"></a>
<a id="trace-20498"></a>
<a id="trace-20547"></a>
<a id="trace-20549"></a>
<a id="trace-20589"></a>
<a id="trace-20591"></a>
<a id="trace-20612"></a>
<a id="trace-20614"></a>
<a id="trace-20637"></a>
<a id="trace-20639"></a>
<a id="trace-20658"></a>
<a id="trace-20660"></a>
<a id="trace-20676"></a>
<a id="trace-20678"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20805"></a>
<a id="trace-20807"></a>
<a id="trace-20820"></a>
<a id="trace-20822"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20880"></a>
<a id="trace-20882"></a>
<a id="trace-20902"></a>
<a id="trace-20904"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20942"></a>
<a id="trace-20944"></a>
<a id="trace-21026"></a>
<a id="trace-21028"></a>
<a id="trace-21053"></a>
<a id="trace-21055"></a>
<a id="trace-21072"></a>
<a id="trace-21074"></a>
<a id="trace-21093"></a>
<a id="trace-21095"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21135"></a>
<a id="trace-21137"></a>
<a id="trace-21162"></a>
<a id="trace-21164"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21290"></a>
<a id="trace-21292"></a>
<a id="trace-21311"></a>
<a id="trace-21313"></a>
<a id="trace-21382"></a>
<a id="trace-21384"></a>
<a id="trace-21672"></a>
<a id="trace-21674"></a>
<a id="trace-21689"></a>
<a id="trace-21691"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21759"></a>
<a id="trace-21761"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21881"></a>
<a id="trace-21883"></a>
<a id="trace-21966"></a>
<a id="trace-21968"></a>
<a id="trace-21986"></a>
<a id="trace-21988"></a>
<a id="trace-22004"></a>
<a id="trace-22006"></a>
<a id="trace-22024"></a>
<a id="trace-22026"></a>
<a id="trace-22072"></a>
<a id="trace-22074"></a>
<a id="trace-22113"></a>
<a id="trace-22115"></a>
<a id="trace-22132"></a>
<a id="trace-22134"></a>
<a id="trace-22215"></a>
<a id="trace-22217"></a>
<a id="trace-22235"></a>
<a id="trace-22237"></a>
<a id="trace-22259"></a>
<a id="trace-22261"></a>
<a id="trace-22299"></a>
<a id="trace-22301"></a>
<a id="trace-22310"></a>
<a id="trace-22312"></a>
<a id="trace-22321"></a>
<a id="trace-22323"></a>
<a id="trace-22338"></a>
<a id="trace-22340"></a>
<a id="trace-22349"></a>
<a id="trace-22351"></a>
<a id="trace-22434"></a>
<a id="trace-22436"></a>
<a id="trace-22459"></a>
<a id="trace-22461"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22489"></a>
<a id="trace-22491"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
<a id="trace-22630"></a>
<a id="trace-22632"></a>
<a id="trace-22723"></a>
<a id="trace-22725"></a>
<a id="trace-22735"></a>
<a id="trace-22737"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22778"></a>
<a id="trace-22780"></a>
<a id="trace-22795"></a>
<a id="trace-22797"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22813"></a>
<a id="trace-22815"></a>
<a id="trace-22824"></a>
<a id="trace-22826"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22909"></a>
<a id="trace-22911"></a>
<a id="trace-22924"></a>
<a id="trace-22926"></a>
<a id="trace-22930"></a>
<a id="trace-22932"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-22947"></a>
<a id="trace-22949"></a>
<a id="trace-22959"></a>
<a id="trace-22961"></a>
<a id="trace-22967"></a>
<a id="trace-22969"></a>
<a id="trace-23038"></a>
<a id="trace-23040"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23075"></a>
<a id="trace-23077"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23096"></a>
<a id="trace-23098"></a>
<a id="trace-23108"></a>
<a id="trace-23110"></a>
<a id="trace-23131"></a>
<a id="trace-23133"></a>
<a id="trace-23143"></a>
<a id="trace-23145"></a>
<a id="trace-23219"></a>
<a id="trace-23221"></a>
<a id="trace-23246"></a>
<a id="trace-23248"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23302"></a>
<a id="trace-23304"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23354"></a>
<a id="trace-23356"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23618"></a>
<a id="trace-23620"></a>
<a id="trace-23629"></a>
<a id="trace-23631"></a>
<a id="trace-23655"></a>
<a id="trace-23657"></a>
<a id="trace-23665"></a>
<a id="trace-23667"></a>
<a id="trace-23702"></a>
<a id="trace-23704"></a>
<a id="trace-23717"></a>
<a id="trace-23719"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23860"></a>
<a id="trace-23862"></a>
<a id="trace-23891"></a>
<a id="trace-23893"></a>
<a id="trace-23899"></a>
<a id="trace-23901"></a>
<a id="trace-23923"></a>
<a id="trace-23925"></a>
<a id="trace-23975"></a>
<a id="trace-23977"></a>
<a id="trace-24002"></a>
<a id="trace-24004"></a>
<a id="trace-24092"></a>
<a id="trace-24094"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24161"></a>
<a id="trace-24163"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-24194"></a>
<a id="trace-24196"></a>
<a id="trace-24223"></a>
<a id="trace-24225"></a>
<a id="trace-24318"></a>
<a id="trace-24320"></a>
<a id="trace-24354"></a>
<a id="trace-24356"></a>
<a id="trace-24371"></a>
<a id="trace-24373"></a>
<a id="trace-24404"></a>
<a id="trace-24406"></a>
<a id="trace-24443"></a>
<a id="trace-24445"></a>
<a id="trace-24449"></a>
<a id="trace-24451"></a>
<a id="trace-24524"></a>
<a id="trace-24526"></a>
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24586"></a>
<a id="trace-24588"></a>
<a id="trace-24602"></a>
<a id="trace-24604"></a>
<a id="trace-24632"></a>
<a id="trace-24634"></a>
<a id="trace-24646"></a>
<a id="trace-24648"></a>
<a id="trace-24652"></a>
<a id="trace-24654"></a>
<a id="trace-24724"></a>
<a id="trace-24730"></a>
<a id="trace-24746"></a>
<a id="trace-24766"></a>
<a id="trace-24768"></a>
<a id="trace-24774"></a>
<a id="trace-24776"></a>
<a id="trace-24790"></a>
<a id="trace-24792"></a>
<a id="trace-24826"></a>
<a id="trace-24828"></a>
<a id="trace-24844"></a>
<a id="trace-24846"></a>
<a id="trace-24917"></a>
<a id="trace-24919"></a>
<a id="trace-24925"></a>
<a id="trace-24927"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24947"></a>
<a id="trace-24949"></a>
<a id="trace-24965"></a>
<a id="trace-24967"></a>
<a id="trace-24971"></a>
<a id="trace-24973"></a>
<a id="trace-24986"></a>
<a id="trace-24988"></a>
<a id="trace-25008"></a>
<a id="trace-25010"></a>
<a id="trace-25020"></a>
<a id="trace-25022"></a>
<a id="trace-25099"></a>
<a id="trace-25101"></a>
<a id="trace-25116"></a>
<a id="trace-25118"></a>
<a id="trace-25137"></a>
<a id="trace-25139"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25163"></a>
<a id="trace-25165"></a>
<a id="trace-25184"></a>
<a id="trace-25186"></a>
<a id="trace-25278"></a>
<a id="trace-25280"></a>
<a id="trace-25293"></a>
<a id="trace-25295"></a>
<a id="trace-25308"></a>
<a id="trace-25310"></a>
<a id="trace-25344"></a>
<a id="trace-25346"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25371"></a>
<a id="trace-25373"></a>
<a id="trace-25382"></a>
<a id="trace-25384"></a>
<a id="trace-25401"></a>
<a id="trace-25403"></a>
<a id="trace-25407"></a>
<a id="trace-25409"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25487"></a>
<a id="trace-25489"></a>
<a id="trace-25501"></a>
<a id="trace-25503"></a>
<a id="trace-25512"></a>
<a id="trace-25514"></a>
<a id="trace-25538"></a>
<a id="trace-25540"></a>
<a id="trace-25559"></a>
<a id="trace-25561"></a>
<a id="trace-25568"></a>
<a id="trace-25570"></a>
<a id="trace-25590"></a>
<a id="trace-25592"></a>
<a id="trace-25600"></a>
<a id="trace-25602"></a>
<a id="trace-25676"></a>
<a id="trace-25678"></a>
<a id="trace-25688"></a>
<a id="trace-25690"></a>
<a id="trace-25704"></a>
<a id="trace-25706"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25724"></a>
<a id="trace-25726"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25758"></a>
<a id="trace-25760"></a>
<a id="trace-25775"></a>
<a id="trace-25777"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25874"></a>
<a id="trace-25876"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25905"></a>
<a id="trace-25907"></a>
<a id="trace-25929"></a>
<a id="trace-25931"></a>
<a id="trace-25942"></a>
<a id="trace-25944"></a>
<a id="trace-25953"></a>
<a id="trace-25955"></a>
<a id="trace-25967"></a>
<a id="trace-25969"></a>
<a id="trace-25981"></a>
<a id="trace-25983"></a>
<a id="trace-26061"></a>
<a id="trace-26063"></a>
<a id="trace-26079"></a>
<a id="trace-26081"></a>
<a id="trace-26094"></a>
<a id="trace-26096"></a>
<a id="trace-26116"></a>
<a id="trace-26118"></a>
<a id="trace-26127"></a>
<a id="trace-26129"></a>
<a id="trace-26145"></a>
<a id="trace-26147"></a>
<a id="trace-26165"></a>
<a id="trace-26167"></a>
<a id="trace-26177"></a>
<a id="trace-26179"></a>
<a id="trace-26270"></a>
<a id="trace-26272"></a>
<a id="trace-26278"></a>
<a id="trace-26280"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26327"></a>
<a id="trace-26329"></a>
<a id="trace-26357"></a>
<a id="trace-26359"></a>
<a id="trace-26364"></a>
<a id="trace-26366"></a>
<a id="trace-26447"></a>
<a id="trace-26449"></a>
<a id="trace-26461"></a>
<a id="trace-26463"></a>
<a id="trace-26475"></a>
<a id="trace-26477"></a>
<a id="trace-26489"></a>
<a id="trace-26491"></a>
<a id="trace-26495"></a>
<a id="trace-26497"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26521"></a>
<a id="trace-26523"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26630"></a>
<a id="trace-26632"></a>
<a id="trace-26655"></a>
<a id="trace-26657"></a>
<a id="trace-26688"></a>
<a id="trace-26690"></a>
<a id="trace-26710"></a>
<a id="trace-26712"></a>
<a id="trace-26731"></a>
<a id="trace-26733"></a>
<a id="trace-26808"></a>
<a id="trace-26810"></a>
<a id="trace-26817"></a>
<a id="trace-26819"></a>
<a id="trace-26841"></a>
<a id="trace-26843"></a>
<a id="trace-26849"></a>
<a id="trace-26851"></a>
<a id="trace-26868"></a>
<a id="trace-26870"></a>
<a id="trace-26882"></a>
<a id="trace-26884"></a>
<a id="trace-26907"></a>
<a id="trace-26909"></a>
<a id="trace-26925"></a>
<a id="trace-26927"></a>
<a id="trace-26998"></a>
<a id="trace-27000"></a>
<a id="trace-27008"></a>
<a id="trace-27010"></a>
<a id="trace-27028"></a>
<a id="trace-27030"></a>
<a id="trace-27052"></a>
<a id="trace-27054"></a>
<a id="trace-27060"></a>
<a id="trace-27062"></a>
<a id="trace-27081"></a>
<a id="trace-27083"></a>
<a id="trace-27096"></a>
<a id="trace-27098"></a>
<a id="trace-27114"></a>
<a id="trace-27116"></a>
<a id="trace-27127"></a>
<a id="trace-27129"></a>
<a id="trace-27197"></a>
<a id="trace-27199"></a>
<a id="trace-27220"></a>
<a id="trace-27222"></a>
<a id="trace-27250"></a>
<a id="trace-27252"></a>
<a id="trace-27267"></a>
<a id="trace-27269"></a>
<a id="trace-27276"></a>
<a id="trace-27278"></a>
<a id="trace-27292"></a>
<a id="trace-27294"></a>
<a id="trace-27311"></a>
<a id="trace-27313"></a>
<a id="trace-27399"></a>
<a id="trace-27401"></a>
<a id="trace-27416"></a>
<a id="trace-27418"></a>
<a id="trace-27422"></a>
<a id="trace-27424"></a>
<a id="trace-27438"></a>
<a id="trace-27440"></a>
<a id="trace-27445"></a>
<a id="trace-27447"></a>
<a id="trace-27462"></a>
<a id="trace-27464"></a>
<a id="trace-27486"></a>
<a id="trace-27488"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-27614"></a>
<a id="trace-27616"></a>
<a id="trace-27632"></a>
<a id="trace-27634"></a>
<a id="trace-27639"></a>
<a id="trace-27641"></a>
<a id="trace-27656"></a>
<a id="trace-27658"></a>
<a id="trace-27663"></a>
<a id="trace-27665"></a>
<a id="trace-27681"></a>
<a id="trace-27683"></a>
<a id="trace-27688"></a>
<a id="trace-27690"></a>
<a id="trace-27766"></a>
<a id="trace-27768"></a>
<a id="trace-27825"></a>
<a id="trace-27827"></a>
<a id="trace-27844"></a>
<a id="trace-27846"></a>
<a id="trace-27968"></a>
<a id="trace-27970"></a>
<a id="trace-27974"></a>
<a id="trace-27976"></a>
<a id="trace-27989"></a>
<a id="trace-27991"></a>
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28050"></a>
<a id="trace-28052"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28135"></a>
<a id="trace-28137"></a>
<a id="trace-28147"></a>
<a id="trace-28149"></a>
<a id="trace-28166"></a>
<a id="trace-28168"></a>
<a id="trace-28190"></a>
<a id="trace-28192"></a>
<a id="trace-28203"></a>
<a id="trace-28205"></a>
<a id="trace-28228"></a>
<a id="trace-28230"></a>
<a id="trace-28326"></a>
<a id="trace-28328"></a>
<a id="trace-28350"></a>
<a id="trace-28352"></a>
<a id="trace-28360"></a>
<a id="trace-28362"></a>
<a id="trace-28389"></a>
<a id="trace-28391"></a>
<a id="trace-28409"></a>
<a id="trace-28411"></a>
<a id="trace-28423"></a>
<a id="trace-28425"></a>
<a id="trace-28433"></a>
<a id="trace-28435"></a>
<a id="trace-28503"></a>
<a id="trace-28505"></a>
<a id="trace-28516"></a>
<a id="trace-28518"></a>
<a id="trace-28532"></a>
<a id="trace-28534"></a>
<a id="trace-28540"></a>
<a id="trace-28542"></a>
<a id="trace-28559"></a>
<a id="trace-28561"></a>
<a id="trace-28576"></a>
<a id="trace-28578"></a>
<a id="trace-28598"></a>
<a id="trace-28600"></a>
<a id="trace-28626"></a>
<a id="trace-28628"></a>
<a id="trace-28632"></a>
<a id="trace-28634"></a>
<a id="trace-28702"></a>
<a id="trace-28704"></a>
<a id="trace-28726"></a>
<a id="trace-28728"></a>
<a id="trace-28748"></a>
<a id="trace-28750"></a>
<a id="trace-28756"></a>
<a id="trace-28758"></a>
<a id="trace-28774"></a>
<a id="trace-28776"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28824"></a>
<a id="trace-28826"></a>
<a id="trace-28900"></a>
<a id="trace-28902"></a>
<a id="trace-28909"></a>
<a id="trace-28911"></a>
<a id="trace-28925"></a>
<a id="trace-28927"></a>
<a id="trace-28935"></a>
<a id="trace-28937"></a>
<a id="trace-28948"></a>
<a id="trace-28950"></a>
<a id="trace-28958"></a>
<a id="trace-28960"></a>
<a id="trace-28971"></a>
<a id="trace-28973"></a>
<a id="trace-28978"></a>
<a id="trace-28980"></a>
<a id="trace-28995"></a>
<a id="trace-28997"></a>
<a id="trace-29005"></a>
<a id="trace-29007"></a>
<a id="trace-29080"></a>
<a id="trace-29082"></a>
<a id="trace-29096"></a>
<a id="trace-29098"></a>
<a id="trace-29121"></a>
<a id="trace-29123"></a>
<a id="trace-29129"></a>
<a id="trace-29131"></a>
<a id="trace-29157"></a>
<a id="trace-29159"></a>
<a id="trace-29170"></a>
<a id="trace-29172"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
<a id="trace-29194"></a>
<a id="trace-29196"></a>
<a id="trace-29200"></a>
<a id="trace-29202"></a>
<a id="trace-29272"></a>
<a id="trace-29274"></a>
<a id="trace-29281"></a>
<a id="trace-29283"></a>
<a id="trace-29302"></a>
<a id="trace-29304"></a>
<a id="trace-29332"></a>
<a id="trace-29334"></a>
<a id="trace-29340"></a>
<a id="trace-29342"></a>
<a id="trace-29359"></a>
<a id="trace-29361"></a>
<a id="trace-29376"></a>
<a id="trace-29378"></a>
<a id="trace-29393"></a>
<a id="trace-29395"></a>
<a id="trace-29403"></a>
<a id="trace-29405"></a>
<a id="trace-29493"></a>
<a id="trace-29495"></a>
<a id="trace-29499"></a>
<a id="trace-29501"></a>
<a id="trace-29518"></a>
<a id="trace-29520"></a>
<a id="trace-29525"></a>
<a id="trace-29527"></a>
<a id="trace-29543"></a>
<a id="trace-29545"></a>
<a id="trace-29552"></a>
<a id="trace-29554"></a>
<a id="trace-29659"></a>
<a id="trace-29661"></a>
<a id="trace-29678"></a>
<a id="trace-29680"></a>
<a id="trace-29692"></a>
<a id="trace-29694"></a>
<a id="trace-29698"></a>
<a id="trace-29700"></a>
<a id="trace-29718"></a>
<a id="trace-29720"></a>
<a id="trace-29735"></a>
<a id="trace-29737"></a>
<a id="trace-29742"></a>
<a id="trace-29744"></a>
<a id="trace-29760"></a>
<a id="trace-29762"></a>
<a id="trace-29768"></a>
<a id="trace-29770"></a>
<a id="trace-29840"></a>
<a id="trace-29842"></a>
<a id="trace-29878"></a>
<a id="trace-29880"></a>
<a id="trace-29892"></a>
<a id="trace-29894"></a>
<a id="trace-29917"></a>
<a id="trace-29919"></a>
<a id="trace-29953"></a>
<a id="trace-29955"></a>
<a id="trace-29959"></a>
<a id="trace-29961"></a>
<a id="trace-30039"></a>
<a id="trace-30041"></a>
<a id="trace-30055"></a>
<a id="trace-30057"></a>
<a id="trace-30087"></a>
<a id="trace-30089"></a>
<a id="trace-30103"></a>
<a id="trace-30105"></a>
<a id="trace-30143"></a>
<a id="trace-30145"></a>
<a id="trace-30151"></a>
<a id="trace-30153"></a>
<a id="trace-30226"></a>
<a id="trace-30228"></a>
<a id="trace-30234"></a>
<a id="trace-30236"></a>
<a id="trace-30250"></a>
<a id="trace-30252"></a>
<a id="trace-30256"></a>
<a id="trace-30258"></a>
<a id="trace-30271"></a>
<a id="trace-30273"></a>
<a id="trace-30284"></a>
<a id="trace-30286"></a>
<a id="trace-30298"></a>
<a id="trace-30300"></a>
<a id="trace-30317"></a>
<a id="trace-30319"></a>
<a id="trace-30337"></a>
<a id="trace-30339"></a>
<a id="trace-30344"></a>
<a id="trace-30346"></a>
<a id="trace-30421"></a>
<a id="trace-30423"></a>
<a id="trace-30431"></a>
<a id="trace-30433"></a>
<a id="trace-30471"></a>
<a id="trace-30473"></a>
<a id="trace-30477"></a>
<a id="trace-30479"></a>
<a id="trace-30490"></a>
<a id="trace-30492"></a>
<a id="trace-30502"></a>
<a id="trace-30504"></a>
<a id="trace-30519"></a>
<a id="trace-30521"></a>
<a id="trace-30606"></a>
<a id="trace-30608"></a>
<a id="trace-30616"></a>
<a id="trace-30618"></a>
<a id="trace-30646"></a>
<a id="trace-30648"></a>
<a id="trace-30670"></a>
<a id="trace-30672"></a>
<a id="trace-30676"></a>
<a id="trace-30678"></a>
<a id="trace-30694"></a>
<a id="trace-30696"></a>
<a id="trace-30702"></a>
<a id="trace-30704"></a>
<a id="trace-30724"></a>
<a id="trace-30726"></a>
<a id="trace-30795"></a>
<a id="trace-30797"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
<a id="trace-30830"></a>
<a id="trace-30832"></a>
<a id="trace-30854"></a>
<a id="trace-30856"></a>
<a id="trace-30883"></a>
<a id="trace-30885"></a>
<a id="trace-30894"></a>
<a id="trace-30896"></a>
<a id="trace-30910"></a>
<a id="trace-30912"></a>
<a id="trace-30985"></a>
<a id="trace-30987"></a>
<a id="trace-31034"></a>
<a id="trace-31036"></a>
<a id="trace-31042"></a>
<a id="trace-31044"></a>
<a id="trace-31059"></a>
<a id="trace-31061"></a>
<a id="trace-31075"></a>
<a id="trace-31077"></a>
<a id="trace-31105"></a>
<a id="trace-31107"></a>
<a id="trace-31180"></a>
<a id="trace-31182"></a>
<a id="trace-31188"></a>
<a id="trace-31190"></a>
<a id="trace-31202"></a>
<a id="trace-31204"></a>
<a id="trace-31224"></a>
<a id="trace-31226"></a>
<a id="trace-31238"></a>
<a id="trace-31240"></a>
<a id="trace-31251"></a>
<a id="trace-31253"></a>
<a id="trace-31276"></a>
<a id="trace-31278"></a>
<a id="trace-31283"></a>
<a id="trace-31285"></a>
<a id="trace-31366"></a>
<a id="trace-31368"></a>
<a id="trace-31379"></a>
<a id="trace-31381"></a>
<a id="trace-31426"></a>
<a id="trace-31428"></a>
<a id="trace-31439"></a>
<a id="trace-31441"></a>
<a id="trace-31450"></a>
<a id="trace-31452"></a>
<a id="trace-31467"></a>
<a id="trace-31469"></a>
<a id="trace-31474"></a>
<a id="trace-31476"></a>
<a id="trace-31547"></a>
<a id="trace-31549"></a>
<a id="trace-31575"></a>
<a id="trace-31577"></a>
<a id="trace-31589"></a>
<a id="trace-31591"></a>
<a id="trace-31610"></a>
<a id="trace-31612"></a>
<a id="trace-31632"></a>
<a id="trace-31634"></a>
<a id="trace-31645"></a>
<a id="trace-31647"></a>
<a id="trace-31659"></a>
<a id="trace-31661"></a>
<a id="trace-31670"></a>
<a id="trace-31672"></a>
<a id="trace-31746"></a>
<a id="trace-31748"></a>
<a id="trace-31770"></a>
<a id="trace-31772"></a>
<a id="trace-31792"></a>
<a id="trace-31794"></a>
<a id="trace-31799"></a>
<a id="trace-31801"></a>
<a id="trace-31821"></a>
<a id="trace-31823"></a>
<a id="trace-31830"></a>
<a id="trace-31832"></a>
<a id="trace-31941"></a>
<a id="trace-31943"></a>
<a id="trace-31955"></a>
<a id="trace-31957"></a>
<a id="trace-31961"></a>
<a id="trace-31963"></a>
<a id="trace-31978"></a>
<a id="trace-31980"></a>
<a id="trace-31984"></a>
<a id="trace-31986"></a>
<a id="trace-32002"></a>
<a id="trace-32004"></a>
<a id="trace-32014"></a>
<a id="trace-32016"></a>
<a id="trace-32033"></a>
<a id="trace-32035"></a>
<a id="trace-32041"></a>
<a id="trace-32043"></a>
<a id="trace-32119"></a>
<a id="trace-32121"></a>
<a id="trace-32135"></a>
<a id="trace-32137"></a>
<a id="trace-32153"></a>
<a id="trace-32155"></a>
<a id="trace-32166"></a>
<a id="trace-32168"></a>
<a id="trace-32184"></a>
<a id="trace-32186"></a>
<a id="trace-32199"></a>
<a id="trace-32201"></a>
<a id="trace-32207"></a>
<a id="trace-32209"></a>
<a id="trace-32225"></a>
<a id="trace-32227"></a>
<a id="trace-32231"></a>
<a id="trace-32233"></a>
<a id="trace-32317"></a>
<a id="trace-32319"></a>
<a id="trace-32333"></a>
<a id="trace-32335"></a>
<a id="trace-32352"></a>
<a id="trace-32354"></a>
<a id="trace-32370"></a>
<a id="trace-32372"></a>
<a id="trace-32403"></a>
<a id="trace-32405"></a>
<a id="trace-32419"></a>
<a id="trace-32421"></a>
<a id="trace-32425"></a>
<a id="trace-32427"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 939): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624999958994736, 'next_transition': 1280}.
<a id="trace-957"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 957): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629999860572455, 'next_transition': 1276}.
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1356"></a>
<a id="trace-1358"></a>
<a id="trace-1395"></a>
<a id="trace-1397"></a>
<a id="trace-1429"></a>
<a id="trace-1431"></a>
<a id="trace-1476"></a>
<a id="trace-1478"></a>
<a id="trace-1510"></a>
<a id="trace-1512"></a>
<a id="trace-1536"></a>
<a id="trace-1538"></a>
<a id="trace-1627"></a>
<a id="trace-1629"></a>
<a id="trace-1652"></a>
<a id="trace-1654"></a>
<a id="trace-1676"></a>
<a id="trace-1678"></a>
<a id="trace-1705"></a>
<a id="trace-1707"></a>
<a id="trace-1736"></a>
<a id="trace-1738"></a>
<a id="trace-1762"></a>
<a id="trace-1764"></a>
<a id="trace-1787"></a>
<a id="trace-1789"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-1832"></a>
<a id="trace-1834"></a>
<a id="trace-2034"></a>
<a id="trace-2036"></a>
<a id="trace-2123"></a>
<a id="trace-2125"></a>
<a id="trace-2149"></a>
<a id="trace-2151"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1276): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2638913722890301, 'next_transition': 1314}.
<a id="trace-1841"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1841): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1556. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.65124696957072, 'next_transition': 2700}.
<a id="trace-1842"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1842): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1556. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.65124696957072, 'next_transition': 2700}.
<a id="trace-2158"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2158): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2050. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199348538330083, 'next_transition': 2620}.
<a id="trace-2159"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2159): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2050. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199348538330083, 'next_transition': 2620}.
<a id="trace-2620"></a>
<a id="trace-2622"></a>
<a id="trace-2656"></a>
<a id="trace-2658"></a>
<a id="trace-2686"></a>
<a id="trace-2688"></a>
<a id="trace-3106"></a>
<a id="trace-3108"></a>
<a id="trace-3621"></a>
<a id="trace-3623"></a>
<a id="trace-3670"></a>
<a id="trace-3672"></a>
<a id="trace-3707"></a>
<a id="trace-3709"></a>
- 16.25s–19.25s (×14), actor 5, squad 0 (trace 2620): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2055. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843710658651544, 'next_transition': 2656}.
<a id="trace-2700"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2700): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2058. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2902}.
<a id="trace-2701"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2701): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2058. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2902}.
<a id="trace-2702"></a>
<a id="trace-2902"></a>
<a id="trace-3113"></a>
<a id="trace-3341"></a>
- 17.55s–17.80s (×4), actor 8, squad 1 (trace 2702): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2058. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2902}.
<a id="trace-3728"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 3728): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2050. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875182694468654, 'next_transition': 4212}.
<a id="trace-3729"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 3729): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2050. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875182694468654, 'next_transition': 4212}.
<a id="trace-3730"></a>
<a id="trace-4212"></a>
- 19.35s–19.60s (×2), actor 0, squad 0 (trace 3730): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2050. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875182694468654, 'next_transition': 4212}.
<a id="trace-4747"></a>
<a id="trace-4749"></a>
<a id="trace-4865"></a>
<a id="trace-4867"></a>
<a id="trace-4926"></a>
<a id="trace-4928"></a>
- 19.75s–20.75s (×6), actor 5, squad 0 (trace 4747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2055. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1812414836480396, 'next_transition': 4865}.
<a id="trace-339"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 339): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-340"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (events line 340): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4951"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 4951): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4951. Next observer evidence: None.
<a id="trace-4952"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 4952): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4952. Next observer evidence: None.
<a id="trace-4953"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 4953): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4953. Next observer evidence: None.
<a id="trace-4954"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 4954): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 4954. Next observer evidence: None.
<a id="trace-4960"></a>
- 21.10s–21.10s (×1), actor 0, squad 0 (trace 4960): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4766. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5512677532980181, 'next_transition': 5545}.
<a id="trace-5537"></a>
- 21.15s–21.15s (×1), actor 8, squad 1 (trace 5537): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4774. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.510757784398497, 'next_transition': 5716}.
<a id="trace-5545"></a>
<a id="trace-5547"></a>
<a id="trace-5580"></a>
<a id="trace-5582"></a>
<a id="trace-5642"></a>
<a id="trace-5644"></a>
<a id="trace-5718"></a>
<a id="trace-5720"></a>
<a id="trace-5749"></a>
<a id="trace-5751"></a>
<a id="trace-5776"></a>
<a id="trace-5778"></a>
<a id="trace-5827"></a>
<a id="trace-5829"></a>
- 21.25s–24.25s (×14), actor 5, squad 0 (trace 5545): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 4954. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.192518574998494, 'next_transition': 5580}.
<a id="trace-5716"></a>
- 22.70s–22.70s (×1), actor 8, squad 1 (trace 5716): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4774. Next observer evidence: None.
<a id="trace-5726"></a>
- 22.75s–22.75s (×1), actor 8, squad 1 (trace 5726): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 4774. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4235107509561415, 'next_transition': 5839}.
<a id="trace-5839"></a>
- 24.30s–24.30s (×1), actor 8, squad 1 (trace 5839): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4774. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.376267747452195, 'next_transition': 427}.
<a id="trace-6113"></a>
- 24.65s–24.65s (×1), actor 0, squad 0 (trace 6113): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4766. Next observer evidence: None.
<a id="trace-6128"></a>
<a id="trace-6130"></a>
<a id="trace-6220"></a>
<a id="trace-6222"></a>
<a id="trace-6252"></a>
<a id="trace-6254"></a>
<a id="trace-6289"></a>
<a id="trace-6291"></a>
<a id="trace-6321"></a>
<a id="trace-6323"></a>
- 24.75s–26.75s (×10), actor 5, squad 0 (trace 6128): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 4954. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9063432982785253, 'next_transition': 6220}.
<a id="trace-427"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (events line 427): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6269"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (trace 6269): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676781 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 6269. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.797350779196896, 'next_transition': 7099}.
<a id="trace-6270"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (trace 6270): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676781 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 6270. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.797350779196896, 'next_transition': 7099}.
<a id="trace-6344"></a>
- 27.20s–27.20s (×1), actor 0, squad 0 (trace 6344): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 6145. Next observer evidence: None.
<a id="trace-7082"></a>
<a id="trace-7084"></a>
- 27.25s–27.25s (×2), actor 5, squad 0 (trace 7082): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 6270. Next observer evidence: {'until': 27.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1726615764233562, 'next_transition': 7095}.
<a id="trace-7095"></a>
- 27.45s–27.45s (×1), actor 0, squad 0 (trace 7095): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 6145. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14198345588510808, 'next_transition': 7105}.
<a id="trace-7099"></a>
- 27.65s–27.65s (×1), actor 8, squad 1 (trace 7099): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 6153. Next observer evidence: None.
<a id="trace-7101"></a>
- 27.70s–27.70s (×1), actor 8, squad 1 (trace 7101): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 6153. Next observer evidence: {'until': 29, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7283431846897351, 'next_transition': 7199}.
<a id="trace-7105"></a>
<a id="trace-7107"></a>
<a id="trace-7141"></a>
<a id="trace-7143"></a>
<a id="trace-7182"></a>
<a id="trace-7184"></a>
<a id="trace-7207"></a>
<a id="trace-7209"></a>
<a id="trace-7229"></a>
<a id="trace-7231"></a>
<a id="trace-7328"></a>
<a id="trace-7330"></a>
<a id="trace-7369"></a>
<a id="trace-7371"></a>
- 27.75s–30.75s (×14), actor 5, squad 0 (trace 7105): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 6270. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3686880930785695, 'next_transition': 7141}.
<a id="trace-7199"></a>
- 29.05s–29.05s (×1), actor 8, squad 1 (trace 7199): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 6153. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1726005974862033, 'next_transition': 533}.
<a id="trace-7380"></a>
- 30.90s–30.90s (×1), actor 0, squad 0 (trace 7380): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7246. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6276048373665517, 'next_transition': 7398}.
<a id="trace-533"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 533): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7383"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 7383): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.626031 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 7383. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.3276019440976832, 'next_transition': 10429}.
<a id="trace-7384"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 7384): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.626031 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 7384. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.3276019440976832, 'next_transition': 10429}.
<a id="trace-7398"></a>
<a id="trace-7400"></a>
<a id="trace-7414"></a>
<a id="trace-7416"></a>
<a id="trace-7440"></a>
<a id="trace-7442"></a>
<a id="trace-7463"></a>
<a id="trace-7465"></a>
<a id="trace-7492"></a>
<a id="trace-7494"></a>
<a id="trace-7509"></a>
<a id="trace-7511"></a>
<a id="trace-7544"></a>
<a id="trace-7546"></a>
<a id="trace-7563"></a>
<a id="trace-7565"></a>
<a id="trace-7653"></a>
<a id="trace-7655"></a>
<a id="trace-7670"></a>
<a id="trace-7672"></a>
- 31.25s–35.75s (×20), actor 5, squad 0 (trace 7398): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 7384. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6175013782507957, 'next_transition': 7414}.
<a id="trace-7686"></a>
- 36.05s–36.05s (×1), actor 0, squad 0 (trace 7686): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1114254209146866, 'next_transition': 9396}.
<a id="trace-9010"></a>
- 36.05s–36.05s (×1), actor 0, squad 0 (trace 9010): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1114254209146866, 'next_transition': 9396}.
<a id="trace-9011"></a>
- 36.05s–36.05s (×1), actor 0, squad 0 (trace 9011): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1114254209146866, 'next_transition': 9396}.
<a id="trace-9365"></a>
- 36.05s–36.05s (×1), actor 0, squad 0 (trace 9365): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1114254209146866, 'next_transition': 9396}.
<a id="trace-9366"></a>
- 36.05s–36.05s (×1), actor 0, squad 0 (trace 9366): Assaulting. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1114254209146866, 'next_transition': 9396}.
<a id="trace-9396"></a>
<a id="trace-9398"></a>
- 36.25s–36.25s (×2), actor 5, squad 0 (trace 9396): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7584. Next observer evidence: None.
<a id="trace-9406"></a>
- 36.35s–36.35s (×1), actor 0, squad 0 (trace 9406): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21789895622401562, 'next_transition': 10194}.
<a id="trace-9413"></a>
- 36.35s–36.35s (×1), actor 0, squad 0 (trace 9413): MoveTactically. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21789895622401562, 'next_transition': 10194}.
<a id="trace-9414"></a>
- 36.35s–36.35s (×1), actor 0, squad 0 (trace 9414): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 7579. Next observer evidence: {'until': 36.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21789895622401562, 'next_transition': 10194}.
<a id="trace-10194"></a>
<a id="trace-10196"></a>
<a id="trace-10230"></a>
<a id="trace-10232"></a>
<a id="trace-10280"></a>
<a id="trace-10282"></a>
<a id="trace-10322"></a>
<a id="trace-10324"></a>
<a id="trace-10368"></a>
<a id="trace-10370"></a>
<a id="trace-10416"></a>
<a id="trace-10418"></a>
<a id="trace-10461"></a>
<a id="trace-10463"></a>
<a id="trace-10564"></a>
<a id="trace-10566"></a>
<a id="trace-10599"></a>
<a id="trace-10601"></a>
- 36.75s–40.75s (×18), actor 5, squad 0 (trace 10194): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7584. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3664685377322815, 'next_transition': 10230}.
<a id="trace-10429"></a>
- 39.35s–39.35s (×1), actor 9, squad 1 (trace 10429): NeedSupport. Knowledge: actor memory at 35.00s, trace 7587. Next observer evidence: {'until': 43.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.5173001957277792, 'next_transition': 14142}.
<a id="trace-10612"></a>
- 41.00s–41.00s (×1), actor 0, squad 0 (trace 10612): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 10473. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3221652754627396, 'next_transition': 13982}.
<a id="trace-10613"></a>
- 41.00s–41.00s (×1), actor 0, squad 0 (trace 10613): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 10473. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3221652754627396, 'next_transition': 13982}.
<a id="trace-13982"></a>
<a id="trace-13984"></a>
<a id="trace-13999"></a>
<a id="trace-14001"></a>
<a id="trace-14038"></a>
<a id="trace-14040"></a>
- 41.25s–42.25s (×6), actor 5, squad 0 (trace 13982): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10478. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6364679936291094, 'next_transition': 13999}.
<a id="trace-14055"></a>
- 42.40s–42.40s (×1), actor 0, squad 0 (trace 14055): NeedSupport. Knowledge: actor memory at 40.00s, trace 10473. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33393673020612374, 'next_transition': 14071}.
<a id="trace-14071"></a>
<a id="trace-14073"></a>
<a id="trace-14102"></a>
<a id="trace-14104"></a>
<a id="trace-14123"></a>
<a id="trace-14125"></a>
<a id="trace-14182"></a>
<a id="trace-14184"></a>
- 42.75s–44.25s (×8), actor 5, squad 0 (trace 14071): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10478. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8485081168498253, 'next_transition': 14102}.
<a id="trace-14142"></a>
- 43.85s–43.85s (×1), actor 9, squad 1 (trace 14142): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 10481. Next observer evidence: None.
<a id="trace-14143"></a>
- 43.85s–43.85s (×1), actor 9, squad 1 (trace 14143): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 10481. Next observer evidence: None.
<a id="trace-14154"></a>
- 43.90s–43.90s (×1), actor 9, squad 1 (trace 14154): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 10481. Next observer evidence: {'until': 72.4, 'shots': 5, 'casualties': 0, 'mean_displacement': 1.8363999999999976, 'next_transition': 20125}.
<a id="trace-1018"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (events line 1018): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14210"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 14210): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.546623 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 14210. Next observer evidence: None.
<a id="trace-14211"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 14211): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.546623 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 14211. Next observer evidence: None.
<a id="trace-14227"></a>
<a id="trace-14229"></a>
<a id="trace-14322"></a>
<a id="trace-14324"></a>
<a id="trace-14358"></a>
<a id="trace-14360"></a>
<a id="trace-14391"></a>
<a id="trace-14393"></a>
<a id="trace-14418"></a>
<a id="trace-14420"></a>
<a id="trace-14442"></a>
<a id="trace-14444"></a>
<a id="trace-14461"></a>
<a id="trace-14463"></a>
<a id="trace-14487"></a>
<a id="trace-14489"></a>
<a id="trace-14507"></a>
<a id="trace-14509"></a>
<a id="trace-14531"></a>
<a id="trace-14533"></a>
<a id="trace-14545"></a>
<a id="trace-14547"></a>
<a id="trace-14645"></a>
<a id="trace-14647"></a>
<a id="trace-14683"></a>
<a id="trace-14685"></a>
<a id="trace-14730"></a>
<a id="trace-14732"></a>
<a id="trace-14763"></a>
<a id="trace-14765"></a>
<a id="trace-14803"></a>
<a id="trace-14805"></a>
<a id="trace-14824"></a>
<a id="trace-14826"></a>
<a id="trace-14848"></a>
<a id="trace-14850"></a>
<a id="trace-14862"></a>
<a id="trace-14864"></a>
<a id="trace-14885"></a>
<a id="trace-14887"></a>
<a id="trace-14904"></a>
<a id="trace-14906"></a>
<a id="trace-14986"></a>
<a id="trace-14988"></a>
<a id="trace-15003"></a>
<a id="trace-15005"></a>
<a id="trace-15028"></a>
<a id="trace-15030"></a>
<a id="trace-15042"></a>
<a id="trace-15044"></a>
<a id="trace-15071"></a>
<a id="trace-15073"></a>
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15114"></a>
<a id="trace-15116"></a>
<a id="trace-15130"></a>
<a id="trace-15132"></a>
<a id="trace-15158"></a>
<a id="trace-15160"></a>
<a id="trace-15173"></a>
<a id="trace-15175"></a>
<a id="trace-15277"></a>
<a id="trace-15279"></a>
<a id="trace-15290"></a>
<a id="trace-15292"></a>
<a id="trace-15318"></a>
<a id="trace-15320"></a>
<a id="trace-15335"></a>
<a id="trace-15337"></a>
<a id="trace-15362"></a>
<a id="trace-15364"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15461"></a>
<a id="trace-15463"></a>
<a id="trace-15493"></a>
<a id="trace-15495"></a>
<a id="trace-15527"></a>
<a id="trace-15529"></a>
<a id="trace-15629"></a>
<a id="trace-15631"></a>
<a id="trace-15657"></a>
<a id="trace-15659"></a>
<a id="trace-15679"></a>
<a id="trace-15681"></a>
<a id="trace-15698"></a>
<a id="trace-15700"></a>
<a id="trace-15722"></a>
<a id="trace-15724"></a>
<a id="trace-15752"></a>
<a id="trace-15754"></a>
<a id="trace-15793"></a>
<a id="trace-15795"></a>
<a id="trace-15835"></a>
<a id="trace-15837"></a>
<a id="trace-15903"></a>
<a id="trace-15905"></a>
<a id="trace-15979"></a>
<a id="trace-15981"></a>
<a id="trace-16098"></a>
<a id="trace-16100"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
- 44.75s–70.75s (×106), actor 5, squad 0 (trace 14227): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 14211. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7502166633334917, 'next_transition': 14322}.
<a id="trace-16196"></a>
- 71.20s–71.20s (×1), actor 0, squad 0 (trace 16196): support established: element delivered fire on threat area. Knowledge: actor memory at 70.00s, trace 16012. Next observer evidence: None.
<a id="trace-16197"></a>
- 71.20s–71.20s (×1), actor 0, squad 0 (trace 16197): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 70.00s, trace 16012. Next observer evidence: None.
<a id="trace-16198"></a>
- 71.20s–71.20s (×1), actor 0, squad 0 (trace 16198): Fixing. Knowledge: actor memory at 70.00s, trace 16012. Next observer evidence: None.
<a id="trace-16210"></a>
<a id="trace-16212"></a>
- 71.25s–71.25s (×2), actor 5, squad 0 (trace 16210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 16017. Next observer evidence: {'until': 71.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05121546051424745, 'next_transition': 16237}.
<a id="trace-16237"></a>
- 71.45s–71.45s (×1), actor 0, squad 0 (trace 16237): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 16012. Next observer evidence: {'until': 71.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.03761563423556786, 'next_transition': 19644}.
<a id="trace-16238"></a>
- 71.45s–71.45s (×1), actor 0, squad 0 (trace 16238): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 70.00s, trace 16012. Next observer evidence: {'until': 71.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.03761563423556786, 'next_transition': 19644}.
<a id="trace-19644"></a>
<a id="trace-19646"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-20143"></a>
<a id="trace-20145"></a>
- 71.75s–72.75s (×6), actor 5, squad 0 (trace 19644): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 16017. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11896664124624248, 'next_transition': 19669}.
<a id="trace-20125"></a>
- 72.45s–72.45s (×1), actor 9, squad 1 (trace 20125): radio opportunity: join existing assault from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 16020. Next observer evidence: {'until': 92, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.56230000031222, 'next_transition': 1743}.
<a id="trace-20126"></a>
- 72.45s–72.45s (×1), actor 9, squad 1 (trace 20126): radio assault committed: wait for delivered support evidence. Knowledge: actor memory at 70.00s, trace 16020. Next observer evidence: {'until': 92, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.56230000031222, 'next_transition': 1743}.
<a id="trace-20127"></a>
- 72.45s–72.45s (×1), actor 9, squad 1 (trace 20127): Assaulting. Knowledge: actor memory at 70.00s, trace 16020. Next observer evidence: {'until': 92, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.56230000031222, 'next_transition': 1743}.
<a id="trace-1489"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (events line 1489): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20161"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 20161): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548418 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 20161. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08971800926394732, 'next_transition': 20184}.
<a id="trace-20162"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 20162): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548418 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 20162. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08971800926394732, 'next_transition': 20184}.
<a id="trace-20184"></a>
<a id="trace-20186"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20240"></a>
<a id="trace-20242"></a>
<a id="trace-20278"></a>
<a id="trace-20280"></a>
<a id="trace-20393"></a>
<a id="trace-20395"></a>
<a id="trace-20434"></a>
<a id="trace-20436"></a>
<a id="trace-20471"></a>
<a id="trace-20473"></a>
<a id="trace-20490"></a>
<a id="trace-20492"></a>
<a id="trace-20541"></a>
<a id="trace-20543"></a>
<a id="trace-20583"></a>
<a id="trace-20585"></a>
<a id="trace-20606"></a>
<a id="trace-20608"></a>
<a id="trace-20631"></a>
<a id="trace-20633"></a>
<a id="trace-20670"></a>
<a id="trace-20672"></a>
- 73.25s–79.75s (×26), actor 5, squad 0 (trace 20184): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.95s, trace 20162. Next observer evidence: {'until': 73.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05899802499231889, 'next_transition': 20205}.
<a id="trace-20702"></a>
- 80.10s–80.10s (×1), actor 5, squad 0 (trace 20702): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 80.10s, trace 20702. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10876355487095836, 'next_transition': 20758}.
<a id="trace-20758"></a>
<a id="trace-20760"></a>
<a id="trace-20774"></a>
<a id="trace-20776"></a>
<a id="trace-20799"></a>
<a id="trace-20801"></a>
<a id="trace-20814"></a>
<a id="trace-20816"></a>
<a id="trace-20839"></a>
<a id="trace-20841"></a>
<a id="trace-20854"></a>
<a id="trace-20856"></a>
<a id="trace-20874"></a>
<a id="trace-20876"></a>
<a id="trace-20896"></a>
<a id="trace-20898"></a>
<a id="trace-20922"></a>
<a id="trace-20924"></a>
<a id="trace-20936"></a>
<a id="trace-20938"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21089"></a>
<a id="trace-21091"></a>
<a id="trace-21100"></a>
<a id="trace-21102"></a>
<a id="trace-21120"></a>
<a id="trace-21122"></a>
<a id="trace-21130"></a>
<a id="trace-21132"></a>
<a id="trace-21157"></a>
<a id="trace-21159"></a>
<a id="trace-21169"></a>
<a id="trace-21171"></a>
<a id="trace-21258"></a>
<a id="trace-21260"></a>
<a id="trace-21285"></a>
<a id="trace-21287"></a>
<a id="trace-21306"></a>
<a id="trace-21308"></a>
<a id="trace-21343"></a>
<a id="trace-21345"></a>
- 80.25s–91.75s (×46), actor 5, squad 0 (trace 20758): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.10s, trace 20702. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27571230490962817, 'next_transition': 20774}.
<a id="trace-21350"></a>
- 91.80s–91.80s (×1), actor 1, squad 0 (trace 21350): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 21180. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08734199999999995, 'next_transition': 21375}.
<a id="trace-1743"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (events line 1743): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21361"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (trace 21361): renew committed intent (75 s lifetime). Knowledge: actor memory at 92.15s, trace 21361. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.431200000329056, 'next_transition': 21907}.
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21407"></a>
<a id="trace-21409"></a>
- 92.25s–92.75s (×4), actor 5, squad 0 (trace 21375): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 21361. Next observer evidence: {'until': 92.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21407}.
<a id="trace-21420"></a>
- 92.80s–92.80s (×1), actor 1, squad 0 (trace 21420): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 21180. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21667}.
<a id="trace-21421"></a>
- 92.80s–92.80s (×1), actor 1, squad 0 (trace 21421): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 21180. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21667}.
<a id="trace-21667"></a>
<a id="trace-21669"></a>
<a id="trace-21684"></a>
<a id="trace-21686"></a>
- 93.25s–93.75s (×4), actor 5, squad 0 (trace 21667): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 21361. Next observer evidence: {'until': 93.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21684}.
<a id="trace-21907"></a>
- 96.20s–96.20s (×1), actor 9, squad 1 (trace 21907): effective fire without superiority for 15 s after expected support. Knowledge: actor memory at 95.00s, trace 21782. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8385598304107478, 'next_transition': 1822}.
<a id="trace-21908"></a>
- 96.20s–96.20s (×1), actor 9, squad 1 (trace 21908): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 21782. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8385598304107478, 'next_transition': 1822}.
<a id="trace-1821"></a>
- 97.25s–97.25s (×1), actor 6, squad 0 (events line 1821): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6808611913657714, 'next_transition': 22038}.
<a id="trace-1822"></a>
- 97.25s–97.25s (×1), actor 6, squad 1 (events line 1822): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.481401448211843, 'next_transition': 22250}.
<a id="trace-21998"></a>
<a id="trace-22000"></a>
- 97.25s–97.25s (×2), actor 6, squad 0 (trace 21998): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 95.00s, trace 21780. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6808611913657714, 'next_transition': 22038}.
<a id="trace-22007"></a>
- 97.25s–97.25s (×1), actor 6, squad 0 (trace 22007): renew committed intent (75 s lifetime). Knowledge: actor memory at 97.25s, trace 22007. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6808611913657714, 'next_transition': 22038}.
<a id="trace-22008"></a>
- 97.25s–97.25s (×1), actor 6, squad 1 (trace 22008): renew committed intent (75 s lifetime). Knowledge: actor memory at 97.25s, trace 22008. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.481401448211843, 'next_transition': 22250}.
<a id="trace-22038"></a>
<a id="trace-22040"></a>
<a id="trace-22107"></a>
<a id="trace-22109"></a>
<a id="trace-22209"></a>
<a id="trace-22211"></a>
<a id="trace-22253"></a>
<a id="trace-22255"></a>
<a id="trace-22282"></a>
<a id="trace-22284"></a>
<a id="trace-22305"></a>
<a id="trace-22332"></a>
<a id="trace-22334"></a>
<a id="trace-22421"></a>
<a id="trace-22423"></a>
<a id="trace-22442"></a>
<a id="trace-22444"></a>
<a id="trace-22471"></a>
<a id="trace-22473"></a>
<a id="trace-22498"></a>
<a id="trace-22500"></a>
- 98.25s–108.25s (×21), actor 6, squad 0 (trace 22038): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 97.25s, trace 22008. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5108591272672598, 'next_transition': 22107}.
<a id="trace-22250"></a>
- 101.05s–101.05s (×1), actor 9, squad 1 (trace 22250): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 100.00s, trace 22145. Next observer evidence: {'until': 109, 'shots': 0, 'casualties': 0, 'mean_displacement': 21.20794456422878, 'next_transition': 22582}.
<a id="trace-22513"></a>
- 108.65s–108.65s (×1), actor 1, squad 0 (trace 22513): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 22359. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22624}.
<a id="trace-22520"></a>
- 108.65s–108.65s (×1), actor 1, squad 0 (trace 22520): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 22359. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22624}.
<a id="trace-22582"></a>
- 109.10s–109.10s (×1), actor 9, squad 1 (trace 22582): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 22363. Next observer evidence: {'until': 123.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23112}.
<a id="trace-22619"></a>
- 109.10s–109.10s (×1), actor 9, squad 1 (trace 22619): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 22363. Next observer evidence: {'until': 123.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23112}.
<a id="trace-22624"></a>
<a id="trace-22626"></a>
<a id="trace-22717"></a>
<a id="trace-22719"></a>
<a id="trace-22749"></a>
<a id="trace-22772"></a>
<a id="trace-22774"></a>
<a id="trace-22789"></a>
<a id="trace-22791"></a>
<a id="trace-22807"></a>
<a id="trace-22809"></a>
<a id="trace-22887"></a>
<a id="trace-22889"></a>
<a id="trace-22904"></a>
<a id="trace-22918"></a>
<a id="trace-22920"></a>
<a id="trace-22935"></a>
<a id="trace-22937"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
- 109.25s–119.25s (×20), actor 6, squad 0 (trace 22624): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 105.00s, trace 22361. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39357325640374746, 'next_transition': 22717}.
<a id="trace-22965"></a>
- 119.65s–119.65s (×1), actor 1, squad 0 (trace 22965): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 115.00s, trace 22828. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45358932703492955, 'next_transition': 23032}.
<a id="trace-23032"></a>
<a id="trace-23034"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23069"></a>
<a id="trace-23071"></a>
<a id="trace-23090"></a>
<a id="trace-23092"></a>
<a id="trace-23125"></a>
<a id="trace-23127"></a>
- 120.25s–124.25s (×10), actor 6, squad 0 (trace 23032): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 120.00s, trace 22973. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560142598596347, 'next_transition': 23055}.
<a id="trace-23112"></a>
- 123.80s–123.80s (×1), actor 9, squad 1 (trace 23112): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 22975. Next observer evidence: None.
<a id="trace-23115"></a>
- 123.85s–123.85s (×1), actor 9, squad 1 (trace 23115): MoveTactically. Knowledge: actor memory at 120.00s, trace 22975. Next observer evidence: {'until': 127.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1969}.
<a id="trace-23116"></a>
- 123.85s–123.85s (×1), actor 9, squad 1 (trace 23116): received platoon directive. Knowledge: actor memory at 120.00s, trace 22975. Next observer evidence: {'until': 127.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1969}.
<a id="trace-23136"></a>
- 124.65s–124.65s (×1), actor 1, squad 0 (trace 23136): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 22972. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535893270349301, 'next_transition': 23213}.
<a id="trace-23213"></a>
<a id="trace-23215"></a>
- 125.25s–125.25s (×2), actor 6, squad 0 (trace 23213): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 125.00s, trace 23152. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023928846899527, 'next_transition': 23231}.
<a id="trace-23231"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 23231): MoveTactically. Knowledge: actor memory at 125.00s, trace 23151. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45362137520672907, 'next_transition': 23262}.
<a id="trace-23232"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 23232): received platoon directive. Knowledge: actor memory at 125.00s, trace 23151. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45362137520672907, 'next_transition': 23262}.
<a id="trace-23262"></a>
<a id="trace-23264"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
- 126.25s–127.25s (×4), actor 6, squad 0 (trace 23262): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 125.00s, trace 23152. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2473897685903061, 'next_transition': 23296}.
<a id="trace-1968"></a>
- 127.90s–127.90s (×1), actor 6, squad 0 (events line 1968): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239978044157173, 'next_transition': 23334}.
<a id="trace-1969"></a>
- 127.90s–127.90s (×1), actor 6, squad 1 (events line 1969): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23378}.
<a id="trace-23321"></a>
- 127.90s–127.90s (×1), actor 6, squad 0 (trace 23321): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 127.90s, trace 23321. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239978044157173, 'next_transition': 23334}.
<a id="trace-23322"></a>
- 127.90s–127.90s (×1), actor 6, squad 0 (trace 23322): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 127.90s, trace 23322. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239978044157173, 'next_transition': 23334}.
<a id="trace-23323"></a>
- 127.90s–127.90s (×1), actor 6, squad 1 (trace 23323): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 127.90s, trace 23323. Next observer evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23378}.
<a id="trace-23324"></a>
- 127.90s–127.90s (×1), actor 6, squad 1 (trace 23324): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 127.90s, trace 23324. Next observer evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23378}.
<a id="trace-23334"></a>
<a id="trace-23336"></a>
<a id="trace-23368"></a>
- 128.30s–129.30s (×3), actor 6, squad 0 (trace 23334): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 127.90s, trace 23324. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559992164972434, 'next_transition': 23368}.
<a id="trace-23378"></a>
- 129.55s–129.55s (×1), actor 9, squad 1 (trace 23378): Withdraw to received rally. Knowledge: actor memory at 125.00s, trace 23154. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 24095}.
<a id="trace-23379"></a>
- 129.55s–129.55s (×1), actor 9, squad 1 (trace 23379): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 23154. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 24095}.
<a id="trace-23506"></a>
- 130.25s–130.25s (×1), actor 1, squad 0 (trace 23506): Withdraw to received rally. Knowledge: actor memory at 130.00s, trace 23445. Next observer evidence: None.
<a id="trace-23507"></a>
- 130.25s–130.25s (×1), actor 1, squad 0 (trace 23507): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 23445. Next observer evidence: None.
<a id="trace-23612"></a>
<a id="trace-23614"></a>
<a id="trace-23649"></a>
<a id="trace-23651"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23740"></a>
<a id="trace-23742"></a>
<a id="trace-23768"></a>
<a id="trace-23770"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23917"></a>
<a id="trace-23919"></a>
<a id="trace-23949"></a>
<a id="trace-23951"></a>
<a id="trace-23996"></a>
<a id="trace-23998"></a>
<a id="trace-24086"></a>
<a id="trace-24088"></a>
<a id="trace-24126"></a>
<a id="trace-24128"></a>
<a id="trace-24155"></a>
<a id="trace-24157"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24212"></a>
<a id="trace-24214"></a>
- 130.30s–144.30s (×30), actor 6, squad 0 (trace 23612): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 130.00s, trace 23446. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6804159587993869, 'next_transition': 23649}.
<a id="trace-24095"></a>
- 140.30s–140.30s (×1), actor 9, squad 1 (trace 24095): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 24023. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2617}.
<a id="trace-24096"></a>
- 140.30s–140.30s (×1), actor 9, squad 1 (trace 24096): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 24023. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2617}.
<a id="trace-24228"></a>
- 144.85s–144.85s (×1), actor 1, squad 0 (trace 24228): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 24020. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048193074676222, 'next_transition': 24312}.
<a id="trace-24229"></a>
- 144.85s–144.85s (×1), actor 1, squad 0 (trace 24229): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 24020. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048193074676222, 'next_transition': 24312}.
<a id="trace-24312"></a>
<a id="trace-24314"></a>
<a id="trace-24350"></a>
<a id="trace-24383"></a>
<a id="trace-24385"></a>
<a id="trace-24414"></a>
<a id="trace-24416"></a>
<a id="trace-24437"></a>
<a id="trace-24439"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24614"></a>
<a id="trace-24616"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24718"></a>
<a id="trace-24720"></a>
<a id="trace-24740"></a>
<a id="trace-24742"></a>
<a id="trace-24760"></a>
<a id="trace-24762"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24820"></a>
<a id="trace-24822"></a>
<a id="trace-24911"></a>
<a id="trace-24913"></a>
<a id="trace-24935"></a>
<a id="trace-24937"></a>
<a id="trace-24959"></a>
<a id="trace-24961"></a>
<a id="trace-24980"></a>
<a id="trace-24982"></a>
<a id="trace-25004"></a>
<a id="trace-25093"></a>
<a id="trace-25095"></a>
<a id="trace-25131"></a>
<a id="trace-25133"></a>
<a id="trace-25157"></a>
<a id="trace-25159"></a>
<a id="trace-25178"></a>
<a id="trace-25180"></a>
<a id="trace-25199"></a>
<a id="trace-25201"></a>
<a id="trace-25272"></a>
<a id="trace-25274"></a>
<a id="trace-25302"></a>
<a id="trace-25304"></a>
<a id="trace-25339"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25395"></a>
<a id="trace-25397"></a>
<a id="trace-25473"></a>
<a id="trace-25475"></a>
<a id="trace-25495"></a>
<a id="trace-25497"></a>
<a id="trace-25523"></a>
<a id="trace-25525"></a>
<a id="trace-25553"></a>
<a id="trace-25555"></a>
<a id="trace-25584"></a>
<a id="trace-25586"></a>
<a id="trace-25670"></a>
<a id="trace-25672"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25718"></a>
<a id="trace-25720"></a>
<a id="trace-25740"></a>
<a id="trace-25742"></a>
<a id="trace-25769"></a>
<a id="trace-25771"></a>
<a id="trace-25857"></a>
<a id="trace-25859"></a>
<a id="trace-25890"></a>
<a id="trace-25892"></a>
<a id="trace-25918"></a>
<a id="trace-25920"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-25961"></a>
<a id="trace-25963"></a>
- 145.30s–189.30s (×87), actor 6, squad 0 (trace 24312): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 145.00s, trace 24239. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8316191888999468, 'next_transition': 24350}.
<a id="trace-2616"></a>
- 189.75s–189.75s (×1), actor 6, squad 0 (events line 2616): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26047}.
<a id="trace-2617"></a>
- 189.75s–189.75s (×1), actor 6, squad 1 (events line 2617): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 219.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3214}.
<a id="trace-25976"></a>
- 189.75s–189.75s (×1), actor 6, squad 0 (trace 25976): renew committed intent (75 s lifetime). Knowledge: actor memory at 189.75s, trace 25976. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26047}.
<a id="trace-25977"></a>
- 189.75s–189.75s (×1), actor 6, squad 1 (trace 25977): renew committed intent (75 s lifetime). Knowledge: actor memory at 189.75s, trace 25977. Next observer evidence: {'until': 219.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3214}.
<a id="trace-26047"></a>
<a id="trace-26049"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26110"></a>
<a id="trace-26112"></a>
<a id="trace-26139"></a>
<a id="trace-26141"></a>
<a id="trace-26159"></a>
<a id="trace-26161"></a>
<a id="trace-26242"></a>
<a id="trace-26244"></a>
<a id="trace-26264"></a>
<a id="trace-26266"></a>
<a id="trace-26290"></a>
<a id="trace-26292"></a>
<a id="trace-26321"></a>
<a id="trace-26323"></a>
<a id="trace-26351"></a>
<a id="trace-26353"></a>
<a id="trace-26431"></a>
<a id="trace-26433"></a>
<a id="trace-26455"></a>
<a id="trace-26457"></a>
<a id="trace-26483"></a>
<a id="trace-26485"></a>
<a id="trace-26505"></a>
<a id="trace-26507"></a>
<a id="trace-26534"></a>
<a id="trace-26536"></a>
<a id="trace-26624"></a>
<a id="trace-26626"></a>
<a id="trace-26649"></a>
<a id="trace-26651"></a>
<a id="trace-26674"></a>
<a id="trace-26676"></a>
<a id="trace-26698"></a>
<a id="trace-26700"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26802"></a>
<a id="trace-26804"></a>
<a id="trace-26835"></a>
<a id="trace-26837"></a>
<a id="trace-26862"></a>
<a id="trace-26864"></a>
<a id="trace-26891"></a>
<a id="trace-26893"></a>
<a id="trace-26915"></a>
<a id="trace-26917"></a>
<a id="trace-26992"></a>
<a id="trace-26994"></a>
<a id="trace-27022"></a>
<a id="trace-27024"></a>
<a id="trace-27046"></a>
<a id="trace-27048"></a>
<a id="trace-27075"></a>
<a id="trace-27077"></a>
<a id="trace-27108"></a>
<a id="trace-27110"></a>
<a id="trace-27191"></a>
<a id="trace-27193"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27236"></a>
<a id="trace-27238"></a>
<a id="trace-27261"></a>
<a id="trace-27263"></a>
<a id="trace-27286"></a>
<a id="trace-27288"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27410"></a>
<a id="trace-27412"></a>
<a id="trace-27432"></a>
<a id="trace-27434"></a>
<a id="trace-27456"></a>
<a id="trace-27458"></a>
<a id="trace-27480"></a>
<a id="trace-27482"></a>
<a id="trace-27559"></a>
<a id="trace-27561"></a>
<a id="trace-27595"></a>
<a id="trace-27597"></a>
<a id="trace-27626"></a>
<a id="trace-27628"></a>
<a id="trace-27650"></a>
<a id="trace-27652"></a>
<a id="trace-27675"></a>
<a id="trace-27677"></a>
<a id="trace-27754"></a>
<a id="trace-27756"></a>
<a id="trace-27776"></a>
<a id="trace-27778"></a>
<a id="trace-27803"></a>
<a id="trace-27805"></a>
<a id="trace-27838"></a>
<a id="trace-27840"></a>
<a id="trace-27864"></a>
<a id="trace-27866"></a>
<a id="trace-27942"></a>
<a id="trace-27944"></a>
<a id="trace-27962"></a>
<a id="trace-27964"></a>
<a id="trace-27983"></a>
<a id="trace-27985"></a>
<a id="trace-28008"></a>
<a id="trace-28010"></a>
<a id="trace-28044"></a>
<a id="trace-28046"></a>
<a id="trace-28129"></a>
<a id="trace-28131"></a>
<a id="trace-28161"></a>
<a id="trace-28180"></a>
<a id="trace-28182"></a>
<a id="trace-28197"></a>
<a id="trace-28199"></a>
<a id="trace-28222"></a>
<a id="trace-28224"></a>
<a id="trace-28307"></a>
<a id="trace-28309"></a>
- 190.30s–250.30s (×121), actor 6, squad 0 (trace 26047): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 190.00s, trace 25986. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26073}.
<a id="trace-3213"></a>
- 250.40s–250.40s (×1), actor 6, squad 0 (events line 3213): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3214"></a>
- 250.40s–250.40s (×1), actor 6, squad 1 (events line 3214): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28315"></a>
- 250.40s–250.40s (×1), actor 6, squad 0 (trace 28315): renew committed intent (75 s lifetime). Knowledge: actor memory at 250.40s, trace 28315. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28344}.
<a id="trace-28316"></a>
- 250.40s–250.40s (×1), actor 6, squad 1 (trace 28316): renew committed intent (75 s lifetime). Knowledge: actor memory at 250.40s, trace 28316. Next observer evidence: {'until': 280.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3835}.
<a id="trace-28344"></a>
<a id="trace-28346"></a>
<a id="trace-28376"></a>
<a id="trace-28378"></a>
<a id="trace-28398"></a>
<a id="trace-28400"></a>
<a id="trace-28417"></a>
<a id="trace-28419"></a>
<a id="trace-28497"></a>
<a id="trace-28499"></a>
<a id="trace-28526"></a>
<a id="trace-28528"></a>
<a id="trace-28553"></a>
<a id="trace-28555"></a>
<a id="trace-28592"></a>
<a id="trace-28594"></a>
<a id="trace-28620"></a>
<a id="trace-28622"></a>
<a id="trace-28696"></a>
<a id="trace-28698"></a>
<a id="trace-28720"></a>
<a id="trace-28722"></a>
<a id="trace-28742"></a>
<a id="trace-28744"></a>
<a id="trace-28768"></a>
<a id="trace-28770"></a>
<a id="trace-28803"></a>
<a id="trace-28805"></a>
<a id="trace-28894"></a>
<a id="trace-28896"></a>
<a id="trace-28919"></a>
<a id="trace-28921"></a>
<a id="trace-28943"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-28989"></a>
<a id="trace-28991"></a>
<a id="trace-29074"></a>
<a id="trace-29076"></a>
<a id="trace-29115"></a>
<a id="trace-29117"></a>
<a id="trace-29141"></a>
<a id="trace-29143"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29189"></a>
<a id="trace-29266"></a>
<a id="trace-29268"></a>
<a id="trace-29296"></a>
<a id="trace-29298"></a>
<a id="trace-29326"></a>
<a id="trace-29328"></a>
<a id="trace-29353"></a>
<a id="trace-29355"></a>
<a id="trace-29387"></a>
<a id="trace-29389"></a>
<a id="trace-29467"></a>
<a id="trace-29469"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29512"></a>
<a id="trace-29514"></a>
<a id="trace-29537"></a>
<a id="trace-29539"></a>
<a id="trace-29569"></a>
<a id="trace-29571"></a>
<a id="trace-29653"></a>
<a id="trace-29655"></a>
<a id="trace-29686"></a>
<a id="trace-29688"></a>
<a id="trace-29708"></a>
<a id="trace-29710"></a>
<a id="trace-29729"></a>
<a id="trace-29731"></a>
<a id="trace-29754"></a>
<a id="trace-29756"></a>
<a id="trace-29834"></a>
<a id="trace-29836"></a>
<a id="trace-29872"></a>
<a id="trace-29874"></a>
<a id="trace-29906"></a>
<a id="trace-29908"></a>
<a id="trace-29926"></a>
<a id="trace-29928"></a>
<a id="trace-29947"></a>
<a id="trace-29949"></a>
<a id="trace-30025"></a>
<a id="trace-30027"></a>
<a id="trace-30049"></a>
<a id="trace-30051"></a>
<a id="trace-30081"></a>
<a id="trace-30083"></a>
<a id="trace-30114"></a>
<a id="trace-30116"></a>
<a id="trace-30137"></a>
<a id="trace-30139"></a>
<a id="trace-30220"></a>
<a id="trace-30222"></a>
<a id="trace-30244"></a>
<a id="trace-30246"></a>
<a id="trace-30265"></a>
<a id="trace-30267"></a>
<a id="trace-30292"></a>
<a id="trace-30294"></a>
<a id="trace-30331"></a>
<a id="trace-30333"></a>
<a id="trace-30415"></a>
<a id="trace-30417"></a>
<a id="trace-30443"></a>
<a id="trace-30445"></a>
<a id="trace-30465"></a>
<a id="trace-30467"></a>
<a id="trace-30484"></a>
<a id="trace-30486"></a>
<a id="trace-30513"></a>
<a id="trace-30515"></a>
<a id="trace-30600"></a>
<a id="trace-30602"></a>
<a id="trace-30631"></a>
<a id="trace-30633"></a>
- 251.30s–311.30s (×120), actor 6, squad 0 (trace 28344): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 250.40s, trace 28316. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28376}.
<a id="trace-3834"></a>
- 312.05s–312.05s (×1), actor 6, squad 0 (events line 3834): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3835"></a>
- 312.05s–312.05s (×1), actor 6, squad 1 (events line 3835): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30656"></a>
- 312.05s–312.05s (×1), actor 6, squad 0 (trace 30656): renew committed intent (75 s lifetime). Knowledge: actor memory at 312.05s, trace 30656. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30664}.
<a id="trace-30657"></a>
- 312.05s–312.05s (×1), actor 6, squad 1 (trace 30657): renew committed intent (75 s lifetime). Knowledge: actor memory at 312.05s, trace 30657. Next observer evidence: {'until': 342, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-30664"></a>
<a id="trace-30666"></a>
<a id="trace-30688"></a>
<a id="trace-30690"></a>
<a id="trace-30710"></a>
<a id="trace-30712"></a>
<a id="trace-30789"></a>
<a id="trace-30791"></a>
<a id="trace-30817"></a>
<a id="trace-30848"></a>
<a id="trace-30850"></a>
<a id="trace-30877"></a>
<a id="trace-30879"></a>
<a id="trace-30904"></a>
<a id="trace-30906"></a>
<a id="trace-30979"></a>
<a id="trace-30981"></a>
<a id="trace-31006"></a>
<a id="trace-31008"></a>
<a id="trace-31028"></a>
<a id="trace-31030"></a>
<a id="trace-31053"></a>
<a id="trace-31055"></a>
<a id="trace-31091"></a>
<a id="trace-31093"></a>
<a id="trace-31174"></a>
<a id="trace-31176"></a>
<a id="trace-31198"></a>
<a id="trace-31218"></a>
<a id="trace-31220"></a>
<a id="trace-31245"></a>
<a id="trace-31247"></a>
<a id="trace-31270"></a>
<a id="trace-31272"></a>
<a id="trace-31360"></a>
<a id="trace-31362"></a>
<a id="trace-31394"></a>
<a id="trace-31411"></a>
<a id="trace-31413"></a>
<a id="trace-31433"></a>
<a id="trace-31435"></a>
<a id="trace-31461"></a>
<a id="trace-31463"></a>
<a id="trace-31541"></a>
<a id="trace-31543"></a>
<a id="trace-31569"></a>
<a id="trace-31571"></a>
<a id="trace-31606"></a>
<a id="trace-31626"></a>
<a id="trace-31628"></a>
<a id="trace-31653"></a>
<a id="trace-31655"></a>
<a id="trace-31734"></a>
<a id="trace-31736"></a>
<a id="trace-31757"></a>
<a id="trace-31759"></a>
<a id="trace-31786"></a>
<a id="trace-31788"></a>
<a id="trace-31817"></a>
<a id="trace-31843"></a>
<a id="trace-31845"></a>
<a id="trace-31925"></a>
<a id="trace-31927"></a>
<a id="trace-31949"></a>
<a id="trace-31951"></a>
<a id="trace-31972"></a>
<a id="trace-31974"></a>
<a id="trace-31996"></a>
<a id="trace-31998"></a>
<a id="trace-32027"></a>
<a id="trace-32029"></a>
<a id="trace-32113"></a>
<a id="trace-32115"></a>
<a id="trace-32147"></a>
<a id="trace-32149"></a>
<a id="trace-32174"></a>
<a id="trace-32176"></a>
<a id="trace-32193"></a>
<a id="trace-32195"></a>
<a id="trace-32219"></a>
<a id="trace-32221"></a>
<a id="trace-32302"></a>
<a id="trace-32304"></a>
<a id="trace-32327"></a>
<a id="trace-32329"></a>
<a id="trace-32364"></a>
<a id="trace-32366"></a>
<a id="trace-32392"></a>
<a id="trace-32394"></a>
<a id="trace-32413"></a>
<a id="trace-32415"></a>
- 312.30s–359.30s (×91), actor 6, squad 0 (trace 30664): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 312.05s, trace 30657. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30688}.

## Net delivery

195 matched order/radio deliveries; 501 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.434s; maximum 1.850s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4766: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4772: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4774: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4776: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4777: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4778: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4779: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4780: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4781: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4782: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4784: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4785: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4951: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4952: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4953: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 4954: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6145: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6150: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6151: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6153: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6154: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6155: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6156: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6157: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6158: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6159: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6160: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6161: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6162: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6163: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6164: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 6269: estimate 11.82; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 6270: estimate 11.82; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7246: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7251: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7252: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7254: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7255: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7256: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7257: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7258: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7259: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7260: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7261: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7262: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7263: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7264: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7265: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 7383: estimate 12.78; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 7384: estimate 12.78; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 7579: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7580: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7583: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7584: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7585: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7587: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7588: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7589: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7590: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7591: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7592: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7593: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7594: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7595: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7596: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7597: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 10473: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10474: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10477: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10478: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10479: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10480: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10481: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10482: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10483: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10484: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10485: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10486: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10487: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10488: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10489: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10490: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10491: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 14210: estimate 12.81; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 14211: estimate 12.81; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 14251: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 14252: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 14253: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 14254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 14255: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 14256: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 14257: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 14258: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 14259: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 14260: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 14261: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 14262: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 14263: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 14264: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 14265: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 14266: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 14267: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 14268: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 14269: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 14560: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 14561: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 14562: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 14563: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 14564: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 14565: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 14566: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 14567: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 14568: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 14569: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 14570: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 14571: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 14572: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 14573: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 14574: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 14575: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 14576: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 14577: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 14578: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 14915: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 14916: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 14917: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 14918: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 14919: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 14920: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 14921: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 14922: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 14923: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 14924: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 14925: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 14926: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 14927: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 14928: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 14929: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 14930: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 14931: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 14932: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 14933: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 15190: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 15191: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 15192: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15193: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15194: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15195: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15196: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15197: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15198: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15199: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15200: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15201: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15202: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15203: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15204: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15205: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15206: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15207: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 15544: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 15545: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 15546: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 15547: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 15548: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 15549: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 15550: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 15551: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 15552: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 15553: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 15554: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 15555: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 15556: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 15557: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 15558: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 15559: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 15560: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 15561: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 16012: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 16013: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 16014: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 16015: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16016: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16017: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16018: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 16019: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16020: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16021: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16022: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16023: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16024: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 16025: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16026: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16027: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16028: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16029: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 20161: estimate 12.76; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 20162: estimate 12.76; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 20303: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 20304: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 20305: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 20306: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 20307: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 20308: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 20309: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 20310: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 20311: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 20312: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 20313: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 20314: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 20315: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 20316: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 20317: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 20318: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 20319: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 20320: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 20683: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 20684: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 20685: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 20686: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 20687: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 20688: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 20689: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 20690: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 20691: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 20692: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 20693: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 20694: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 20695: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 20696: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 20697: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 20698: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 20699: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.10s leader 5, trace 20702: estimate 12.72; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 20950: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 20951: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 20952: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 20953: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 20954: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 20955: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 20956: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 20957: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 20958: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 20959: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 20960: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 20961: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 20962: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 20963: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 20964: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 20965: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 20966: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 21180: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 21181: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 21182: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 21183: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 21184: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 21185: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 21186: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 21187: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 21188: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 21189: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 21190: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 21191: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 21192: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 21193: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 21194: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 21195: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 21361: estimate 12.72; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 21778: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 21779: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 21780: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 21781: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 21782: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 21783: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 21784: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 21785: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 21786: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 21787: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 21788: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 21789: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 21790: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 21791: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 97.25s leader 6, trace 22007: estimate 12.66; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 97.25s leader 6, trace 22008: estimate 12.66; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 22141: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 22142: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 22143: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 22144: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 22145: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 22146: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 22147: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 22148: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 22149: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 22150: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 22151: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 22152: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 22153: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 22154: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 22359: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 22360: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 22361: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 22362: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 22363: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 22364: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 22365: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 22366: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 22367: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 22368: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 22369: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 22370: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 22371: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 22372: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 22657: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 22658: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 22659: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 22660: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 22661: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 22662: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 22663: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 22664: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 22665: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 22666: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 22667: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 22668: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 22669: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 22670: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 22828: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 22829: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 22830: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 22831: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 22832: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 22833: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 22834: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 22835: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 22836: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 22837: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 22838: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 22839: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 22840: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 22972: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 22973: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 22974: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 22975: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 22976: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 22977: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 22978: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 22979: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 22980: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 22981: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 22982: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 22983: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 22984: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 23151: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 23152: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 23153: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 23154: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 23155: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 23156: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 23157: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 23158: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 23159: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 23160: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 23161: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 23162: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 23163: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 127.90s leader 6, trace 23321: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 127.90s leader 6, trace 23322: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 127.90s leader 6, trace 23323: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 127.90s leader 6, trace 23324: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 23445: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 23446: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 23447: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 23448: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 23449: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 23450: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 23451: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 23452: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 23453: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 23454: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 23455: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 23456: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 23457: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 23790: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 23791: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 23792: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 23793: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 23794: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 23795: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 23796: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 23797: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 23798: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 23799: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 23800: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 23801: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 23802: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 24020: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 24021: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 24022: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 24023: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 24024: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 24025: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 24026: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 24027: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 24028: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 24029: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 24030: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 24031: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 24032: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 24238: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 24239: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 24240: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 24241: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 24242: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 24243: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 24244: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 24245: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 24246: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 24247: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 24248: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 24249: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 24250: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24454: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 24455: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 24456: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 24457: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 24458: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24459: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24460: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24461: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24462: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24463: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24464: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 24465: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24466: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 24659: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 24660: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 24661: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 24662: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 24663: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 24664: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 24665: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 24666: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 24667: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 24668: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 24669: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 24670: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 24671: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 24848: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 24849: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 24850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 24851: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 24852: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 24853: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 24854: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 24855: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 24856: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 24857: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 24858: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 24859: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 24860: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 25025: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 25026: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 25027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 25028: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 25029: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 25030: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 25031: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 25032: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 25033: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 25034: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 25035: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 25036: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 25037: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 25212: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 25213: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 25214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 25215: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 25216: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25217: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 25218: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25219: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25220: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 25221: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25222: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 25223: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25224: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 25410: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 25411: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 25412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 25413: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 25414: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 25415: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 25416: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 25417: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 25418: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 25419: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 25420: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 25421: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 25422: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 25605: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 25606: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 25607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 25608: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 25609: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 25610: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 25611: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 25612: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 25613: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 25614: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 25615: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 25616: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 25617: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 25796: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 25797: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 25798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 25799: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 25800: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 25801: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 25802: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 25803: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 25804: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 25805: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 25806: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 25807: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 25808: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.75s leader 6, trace 25976: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.75s leader 6, trace 25977: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 25985: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 25986: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 25987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 25988: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 25989: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 25990: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 25991: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 25992: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 25993: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 25994: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 25995: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 25996: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 25997: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 26180: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 26181: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 26182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 26183: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 26184: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 26185: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 26186: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 26187: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 26188: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 26189: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 26190: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 26191: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 26192: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 26371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 26372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 26373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 26374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 26375: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 26376: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 26377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 26378: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 26379: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 26380: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 26381: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 26382: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 26383: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 26557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 26558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 26559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 26561: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 26562: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 26563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 26564: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 26565: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 26566: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 26567: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 26568: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 26569: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 26737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 26738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 26739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 26740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 26741: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 26742: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 26743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 26744: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 26745: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 26746: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 26747: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 26748: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 26749: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 26933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 26934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 26936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 26937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 26938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 26939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 26940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 26941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 26942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 26943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 26944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 26945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 27130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 27131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 27132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 27133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 27134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 27135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 27136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 27137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 27138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 27139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 27140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 27141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 27142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 27314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 27315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 27316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 27317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 27318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 27319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 27320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 27321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 27322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 27323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 27324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 27325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 27326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 27498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 27499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 27500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 27501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 27502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 27503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 27504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 27505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 27506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 27507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 27508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 27509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 27510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 27691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 27692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 27693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 27694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 27695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 27696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 27697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 27698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 27699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 27700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 27701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 27702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 27703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 27879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 27880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 27881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 27882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 27883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 27884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 27885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 27886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 27887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 27888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 27889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 27890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 27891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 28069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 28070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 28071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 28072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 28073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 28074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 28075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 28076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 28077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 28078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 28079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 28080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 28081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 28243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 28244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 28245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 28246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 28247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 28248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 28249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 28250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 28251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 28252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 28253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 28254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 28255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.40s leader 6, trace 28315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.40s leader 6, trace 28316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 28436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 28437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 28438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 28439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 28440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 28441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 28442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 28443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 28444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 28445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 28446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 28447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 28448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 28637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 28638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 28639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 28640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 28641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 28642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 28643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 28644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 28645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 28646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 28647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 28648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 28649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 28827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 28828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 28829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 28830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 28831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 28832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 28833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 28834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 28835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 28836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 28837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 28838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 28839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 29010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 29011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 29012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 29013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 29014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 29015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 29016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 29017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 29018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 29019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 29020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 29021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 29022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 29207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 29208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 29209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 29210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 29211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 29212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 29213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 29214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 29215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 29216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 29217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 29218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 29219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 29406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 29407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 29408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 29409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 29410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 29411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 29412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 29413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 29414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 29415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 29416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 29417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 29418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 29589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 29590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 29591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 29592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 29593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 29594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 29595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 29596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 29597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 29598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 29599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 29600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 29601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 29774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 29775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 29776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 29777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 29778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 29779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 29780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 29781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 29782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 29783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 29784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 29785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 29786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 29962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 29963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 29964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 29965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 29966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 29967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 29968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 29969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 29970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 29971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 29972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 29973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 29974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 30156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 30157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 30158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 30159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 30160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 30161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 30162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 30163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 30164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 30165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 30166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 30167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 30168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 30354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 30355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 30356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 30357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 30358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 30359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 30360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 30361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 30362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 30363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 30364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 30365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 30366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 30531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 30532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 30533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 30534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 30535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 30536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 30537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 30538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 30539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 30540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 30541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 30542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 30543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.05s leader 6, trace 30656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.05s leader 6, trace 30657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 30727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 30728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 30729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 30730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 30731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 30732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 30733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 30734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 30735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 30736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 30737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 30738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 30739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 30920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 30921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 30922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 30923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 30924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 30925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 30926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 30927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 30928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 30929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 30930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 30931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 30932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 31109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 31110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 31111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 31112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 31113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 31114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 31115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 31116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 31117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 31118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 31119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 31120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 31121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 31290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 31291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 31292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 31293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 31294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 31295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 31296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 31297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 31298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 31299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 31300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 31301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 31302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 31481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 31482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 31483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 31484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 31485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 31486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 31487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 31488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 31489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 31490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 31491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 31492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 31493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 31673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 31674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 31675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 31676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 31677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 31678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 31679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 31680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 31681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 31682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 31683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 31684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 31685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 31862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 31863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 31864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 31865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 31866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 31867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 31868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 31869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 31870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 31871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 31872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 31873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 31874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 32052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 32053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 32054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 32055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 32056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 32057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 32058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 32059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 32060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 32061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 32062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 32063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 32064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 32236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 32237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 32238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 32239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 32240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 32241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 32242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 32243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 32244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 32245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 32246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 32247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 32248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 32430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 32431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 32432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 32433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 32434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 32435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 32436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 32437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 32438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 32439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 32440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 32441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 32442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Renn killed in action
- 1: Soren incapacitated
- 1: Vale killed in action
- 1: Tern incapacitated
- 1: Iven killed in action
- 1: Ash incapacitated

## Outcome attribution

- 127.90s, evidence 1968: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239978044157173, 'next_transition': 23334}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 127.90s, evidence 1969: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23378}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 127.90s, evidence 23321: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239978044157173, 'next_transition': 23334}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 127.90s, evidence 23322: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239978044157173, 'next_transition': 23334}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 127.90s, evidence 23323: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23378}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 127.90s, evidence 23324: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258311 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 129.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23378}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 189.75s, evidence 2616: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26047}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 189.75s, evidence 2617: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 219.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3214}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 250.40s, evidence 3213: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 250.40s, evidence 3214: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 312.05s, evidence 3834: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 312.05s, evidence 3835: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
