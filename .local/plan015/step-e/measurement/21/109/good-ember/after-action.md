# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/21/109/good-ember/battle-109-1789674140339342421`

## Battle summary

**Ember** · 360 s · 369 shots.

### Turning points

- 14.0s, squad 4: contact (events line 181). First recorded contact.
- 42.3s, squad 0: help call ([trace 11816](#trace-11816)). No completion observed before termination.
- 44.5s, squad 1: help call ([trace 12359](#trace-12359)). No completion observed before termination.
- 54.8s, squad 0: assault ([trace 16477](#trace-16477)). 62.1s, squad 0: new loss of own base of fire.
- 70.4s, squad 1: help call ([trace 18931](#trace-18931)). No completion observed before termination.
- 72.0s, squad 1: withdrawal ([trace 19193](#trace-19193)). No completion observed before termination.
- 81.2s, squad 0: assault ([trace 20085](#trace-20085)). 81.5s, squad 0: advanced tactically.
- 81.8s, squad 0: withdrawal ([trace 20642](#trace-20642)). 104.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 178.4s, squad 0: help call ([trace 26158](#trace-26158)). No completion observed before termination.
- 197.7s, squad 0: withdrawal ([trace 27488](#trace-27488)). 217.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 40 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 6 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 199 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 124 shots, 0/4 lost.

### Decisions and attribution

At 72.0s, squad 1 chose broke contact ([trace 19193](#trace-19193)), followed by 0 shots and 1 own casualties; estimate 16.5 against 0 distinct squad-reported contacts; At 251.4s, squad 0 chose Withdraw to received rally ([trace 29960](#trace-29960)), followed by 0 shots and 1 own casualties; estimate 14.4 against 0 distinct squad-reported contacts; At 54.8s, squad 0 chose prepared a base of fire ([trace 15333](#trace-15333)), followed by 2 shots and 0 own casualties; estimate 15.2 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1342](#trace-1342)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4610877224919381, 'next_transition': 1373}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1344](#trace-1344)). Following evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.4948228251776494, 'next_transition': 1930}.

### Communication

242 matched deliveries (mean 0.63s, max 6.35s); 161 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.00s, squad 4, contact, evidence events line 181: First recorded contact; .
- 42.30s, squad 0, help call, evidence 11816: NeedSupport; No completion observed before termination.
- 44.50s, squad 1, help call, evidence 12359: NeedSupport; No completion observed before termination.
- 54.75s, squad 0, assault, evidence 16477: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 62.1s, squad 0: new loss of own base of fire.
- 70.40s, squad 1, help call, evidence 18931: NeedSupport; No completion observed before termination.
- 72.00s, squad 1, withdrawal, evidence 19193: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 81.25s, squad 0, assault, evidence 20085: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 81.5s, squad 0: advanced tactically.
- 81.75s, squad 0, withdrawal, evidence 20642: BreakContact: believed ratio at least two without superiority; 104.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 178.45s, squad 0, help call, evidence 26158: NeedSupport; No completion observed before termination.
- 197.65s, squad 0, withdrawal, evidence 27488: BreakContact: believed ratio at least two without superiority; 217.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 251.40s, squad 0, withdrawal, evidence 29960: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.07511952136328, 'next_transition': 922}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.07511952136328, 'next_transition': 922}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.07511952136328, 'next_transition': 922}.
<a id="trace-311"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 311): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.336407454656758, 'next_transition': 142}.
<a id="trace-312"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 312): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.336407454656758, 'next_transition': 142}.
<a id="trace-313"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 313): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.336407454656758, 'next_transition': 142}.
<a id="trace-666"></a>
<a id="trace-668"></a>
<a id="trace-695"></a>
<a id="trace-697"></a>
<a id="trace-736"></a>
<a id="trace-738"></a>
<a id="trace-759"></a>
<a id="trace-761"></a>
<a id="trace-785"></a>
<a id="trace-787"></a>
<a id="trace-808"></a>
<a id="trace-810"></a>
<a id="trace-841"></a>
<a id="trace-843"></a>
<a id="trace-926"></a>
<a id="trace-928"></a>
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1033"></a>
<a id="trace-1035"></a>
<a id="trace-1057"></a>
<a id="trace-1059"></a>
<a id="trace-1093"></a>
<a id="trace-1095"></a>
<a id="trace-1126"></a>
<a id="trace-1128"></a>
<a id="trace-1166"></a>
<a id="trace-1168"></a>
<a id="trace-1186"></a>
<a id="trace-1188"></a>
<a id="trace-1206"></a>
<a id="trace-1208"></a>
<a id="trace-1296"></a>
<a id="trace-1298"></a>
<a id="trace-1318"></a>
<a id="trace-1320"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
<a id="trace-1377"></a>
<a id="trace-1379"></a>
<a id="trace-1405"></a>
<a id="trace-1407"></a>
<a id="trace-1432"></a>
<a id="trace-1434"></a>
<a id="trace-1835"></a>
<a id="trace-1837"></a>
<a id="trace-1861"></a>
<a id="trace-1863"></a>
<a id="trace-1899"></a>
<a id="trace-1901"></a>
<a id="trace-1924"></a>
<a id="trace-1926"></a>
<a id="trace-2355"></a>
<a id="trace-2357"></a>
<a id="trace-2393"></a>
<a id="trace-2395"></a>
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-2800"></a>
<a id="trace-2802"></a>
<a id="trace-3272"></a>
<a id="trace-3274"></a>
<a id="trace-3300"></a>
<a id="trace-3302"></a>
<a id="trace-3346"></a>
<a id="trace-3348"></a>
<a id="trace-3369"></a>
<a id="trace-3371"></a>
<a id="trace-3401"></a>
<a id="trace-3403"></a>
<a id="trace-3437"></a>
<a id="trace-3439"></a>
<a id="trace-3534"></a>
<a id="trace-3536"></a>
<a id="trace-4125"></a>
<a id="trace-4127"></a>
<a id="trace-5304"></a>
<a id="trace-5306"></a>
<a id="trace-5359"></a>
<a id="trace-5361"></a>
<a id="trace-5415"></a>
<a id="trace-5417"></a>
<a id="trace-5471"></a>
<a id="trace-5473"></a>
<a id="trace-5509"></a>
<a id="trace-5511"></a>
<a id="trace-5558"></a>
<a id="trace-5560"></a>
<a id="trace-5623"></a>
<a id="trace-5625"></a>
<a id="trace-5666"></a>
<a id="trace-5668"></a>
<a id="trace-5750"></a>
<a id="trace-5752"></a>
<a id="trace-5772"></a>
<a id="trace-5774"></a>
<a id="trace-5808"></a>
<a id="trace-5810"></a>
<a id="trace-5831"></a>
<a id="trace-5833"></a>
<a id="trace-6560"></a>
<a id="trace-6562"></a>
<a id="trace-6581"></a>
<a id="trace-6583"></a>
<a id="trace-6615"></a>
<a id="trace-6617"></a>
<a id="trace-6663"></a>
<a id="trace-6665"></a>
<a id="trace-6693"></a>
<a id="trace-6695"></a>
<a id="trace-6713"></a>
<a id="trace-6715"></a>
<a id="trace-6817"></a>
<a id="trace-6819"></a>
<a id="trace-6846"></a>
<a id="trace-6848"></a>
<a id="trace-10569"></a>
<a id="trace-10571"></a>
<a id="trace-10590"></a>
<a id="trace-10592"></a>
<a id="trace-10616"></a>
<a id="trace-10618"></a>
<a id="trace-10667"></a>
<a id="trace-10669"></a>
<a id="trace-10689"></a>
<a id="trace-10691"></a>
<a id="trace-10722"></a>
<a id="trace-10724"></a>
<a id="trace-10752"></a>
<a id="trace-10754"></a>
<a id="trace-10789"></a>
<a id="trace-10791"></a>
<a id="trace-10976"></a>
<a id="trace-10978"></a>
<a id="trace-10995"></a>
<a id="trace-10997"></a>
<a id="trace-11023"></a>
<a id="trace-11025"></a>
<a id="trace-11045"></a>
<a id="trace-11047"></a>
<a id="trace-11070"></a>
<a id="trace-11072"></a>
<a id="trace-11092"></a>
<a id="trace-11094"></a>
<a id="trace-11119"></a>
<a id="trace-11121"></a>
<a id="trace-11140"></a>
<a id="trace-11142"></a>
<a id="trace-11174"></a>
<a id="trace-11176"></a>
<a id="trace-11196"></a>
<a id="trace-11198"></a>
<a id="trace-11289"></a>
<a id="trace-11291"></a>
<a id="trace-11314"></a>
<a id="trace-11316"></a>
<a id="trace-11337"></a>
<a id="trace-11339"></a>
<a id="trace-11771"></a>
<a id="trace-11773"></a>
<a id="trace-11809"></a>
<a id="trace-11811"></a>
<a id="trace-11841"></a>
<a id="trace-11843"></a>
<a id="trace-12282"></a>
<a id="trace-12284"></a>
<a id="trace-12310"></a>
<a id="trace-12312"></a>
<a id="trace-12344"></a>
<a id="trace-12346"></a>
<a id="trace-12849"></a>
<a id="trace-12851"></a>
<a id="trace-13199"></a>
<a id="trace-13201"></a>
<a id="trace-14101"></a>
<a id="trace-14103"></a>
<a id="trace-14149"></a>
<a id="trace-14151"></a>
<a id="trace-14178"></a>
<a id="trace-14180"></a>
<a id="trace-14228"></a>
<a id="trace-14230"></a>
<a id="trace-14262"></a>
<a id="trace-14264"></a>
<a id="trace-14303"></a>
<a id="trace-14305"></a>
<a id="trace-14348"></a>
<a id="trace-14350"></a>
<a id="trace-14386"></a>
<a id="trace-14388"></a>
<a id="trace-14674"></a>
<a id="trace-14676"></a>
<a id="trace-15028"></a>
<a id="trace-15030"></a>
<a id="trace-15048"></a>
<a id="trace-15050"></a>
<a id="trace-15073"></a>
<a id="trace-15075"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15128"></a>
<a id="trace-15130"></a>
<a id="trace-15168"></a>
<a id="trace-15170"></a>
<a id="trace-15213"></a>
<a id="trace-15215"></a>
<a id="trace-15258"></a>
<a id="trace-15260"></a>
<a id="trace-15300"></a>
<a id="trace-15302"></a>
<a id="trace-15327"></a>
<a id="trace-15329"></a>
<a id="trace-16988"></a>
<a id="trace-16990"></a>
<a id="trace-17285"></a>
<a id="trace-17287"></a>
<a id="trace-17329"></a>
<a id="trace-17331"></a>
<a id="trace-17353"></a>
<a id="trace-17355"></a>
<a id="trace-17382"></a>
<a id="trace-17384"></a>
<a id="trace-17413"></a>
<a id="trace-17415"></a>
<a id="trace-17458"></a>
<a id="trace-17460"></a>
<a id="trace-17485"></a>
<a id="trace-17487"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17625"></a>
<a id="trace-17627"></a>
<a id="trace-17651"></a>
<a id="trace-17653"></a>
<a id="trace-17668"></a>
<a id="trace-17670"></a>
<a id="trace-17694"></a>
<a id="trace-17696"></a>
<a id="trace-18280"></a>
<a id="trace-18282"></a>
<a id="trace-18316"></a>
<a id="trace-18318"></a>
<a id="trace-18367"></a>
<a id="trace-18369"></a>
<a id="trace-18417"></a>
<a id="trace-18419"></a>
<a id="trace-18460"></a>
<a id="trace-18462"></a>
<a id="trace-18504"></a>
<a id="trace-18506"></a>
<a id="trace-18609"></a>
<a id="trace-18611"></a>
<a id="trace-18636"></a>
<a id="trace-18638"></a>
<a id="trace-18668"></a>
<a id="trace-18670"></a>
<a id="trace-18697"></a>
<a id="trace-18699"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18760"></a>
<a id="trace-18762"></a>
<a id="trace-18781"></a>
<a id="trace-18783"></a>
<a id="trace-18803"></a>
<a id="trace-18805"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18916"></a>
<a id="trace-18918"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-18977"></a>
<a id="trace-18979"></a>
<a id="trace-18997"></a>
<a id="trace-18999"></a>
<a id="trace-19260"></a>
<a id="trace-19262"></a>
<a id="trace-19290"></a>
<a id="trace-19292"></a>
<a id="trace-19316"></a>
<a id="trace-19318"></a>
<a id="trace-19328"></a>
<a id="trace-19330"></a>
<a id="trace-19352"></a>
<a id="trace-19354"></a>
<a id="trace-19374"></a>
<a id="trace-19376"></a>
<a id="trace-19444"></a>
<a id="trace-19446"></a>
<a id="trace-19461"></a>
<a id="trace-19463"></a>
<a id="trace-19479"></a>
<a id="trace-19481"></a>
<a id="trace-19494"></a>
<a id="trace-19496"></a>
<a id="trace-19514"></a>
<a id="trace-19516"></a>
<a id="trace-19526"></a>
<a id="trace-19528"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19557"></a>
<a id="trace-19559"></a>
<a id="trace-19573"></a>
<a id="trace-19575"></a>
<a id="trace-19586"></a>
<a id="trace-19588"></a>
<a id="trace-19664"></a>
<a id="trace-19666"></a>
<a id="trace-19680"></a>
<a id="trace-19682"></a>
<a id="trace-19698"></a>
<a id="trace-19700"></a>
<a id="trace-20637"></a>
<a id="trace-20639"></a>
<a id="trace-20740"></a>
<a id="trace-20742"></a>
<a id="trace-20771"></a>
<a id="trace-20773"></a>
<a id="trace-20793"></a>
<a id="trace-20795"></a>
<a id="trace-20806"></a>
<a id="trace-20808"></a>
<a id="trace-20835"></a>
<a id="trace-20837"></a>
<a id="trace-20848"></a>
<a id="trace-20850"></a>
<a id="trace-20921"></a>
<a id="trace-20923"></a>
<a id="trace-20933"></a>
<a id="trace-20935"></a>
<a id="trace-20947"></a>
<a id="trace-20949"></a>
<a id="trace-20959"></a>
<a id="trace-20961"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
<a id="trace-20979"></a>
<a id="trace-20981"></a>
<a id="trace-20996"></a>
<a id="trace-20998"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21021"></a>
<a id="trace-21023"></a>
<a id="trace-21029"></a>
<a id="trace-21031"></a>
<a id="trace-21104"></a>
<a id="trace-21106"></a>
<a id="trace-21116"></a>
<a id="trace-21118"></a>
<a id="trace-21128"></a>
<a id="trace-21130"></a>
<a id="trace-21135"></a>
<a id="trace-21137"></a>
<a id="trace-21146"></a>
<a id="trace-21148"></a>
<a id="trace-21157"></a>
<a id="trace-21159"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21185"></a>
<a id="trace-21187"></a>
<a id="trace-21203"></a>
<a id="trace-21205"></a>
<a id="trace-21210"></a>
<a id="trace-21212"></a>
<a id="trace-21282"></a>
<a id="trace-21284"></a>
<a id="trace-21295"></a>
<a id="trace-21297"></a>
<a id="trace-21311"></a>
<a id="trace-21313"></a>
<a id="trace-21426"></a>
<a id="trace-21428"></a>
<a id="trace-21448"></a>
<a id="trace-21450"></a>
<a id="trace-21463"></a>
<a id="trace-21465"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21498"></a>
<a id="trace-21500"></a>
<a id="trace-21517"></a>
<a id="trace-21519"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21603"></a>
<a id="trace-21605"></a>
<a id="trace-21617"></a>
<a id="trace-21619"></a>
<a id="trace-21633"></a>
<a id="trace-21635"></a>
<a id="trace-21644"></a>
<a id="trace-21646"></a>
<a id="trace-21682"></a>
<a id="trace-21684"></a>
<a id="trace-21695"></a>
<a id="trace-21697"></a>
<a id="trace-21710"></a>
<a id="trace-21712"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21740"></a>
<a id="trace-21742"></a>
<a id="trace-21753"></a>
<a id="trace-21755"></a>
<a id="trace-21839"></a>
<a id="trace-21841"></a>
<a id="trace-21852"></a>
<a id="trace-21854"></a>
<a id="trace-21874"></a>
<a id="trace-21876"></a>
<a id="trace-21888"></a>
<a id="trace-21890"></a>
<a id="trace-21910"></a>
<a id="trace-21912"></a>
<a id="trace-21921"></a>
<a id="trace-21923"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-21984"></a>
<a id="trace-21986"></a>
<a id="trace-21992"></a>
<a id="trace-21994"></a>
<a id="trace-22064"></a>
<a id="trace-22066"></a>
<a id="trace-22077"></a>
<a id="trace-22079"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22099"></a>
<a id="trace-22101"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22122"></a>
<a id="trace-22124"></a>
<a id="trace-22138"></a>
<a id="trace-22140"></a>
<a id="trace-22153"></a>
<a id="trace-22155"></a>
<a id="trace-22167"></a>
<a id="trace-22169"></a>
<a id="trace-22189"></a>
<a id="trace-22191"></a>
<a id="trace-22272"></a>
<a id="trace-22274"></a>
<a id="trace-22399"></a>
<a id="trace-22401"></a>
<a id="trace-22413"></a>
<a id="trace-22415"></a>
<a id="trace-22437"></a>
<a id="trace-22439"></a>
<a id="trace-22456"></a>
<a id="trace-22458"></a>
<a id="trace-22468"></a>
<a id="trace-22470"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22502"></a>
<a id="trace-22504"></a>
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-22527"></a>
<a id="trace-22529"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22622"></a>
<a id="trace-22624"></a>
<a id="trace-22654"></a>
<a id="trace-22656"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22696"></a>
<a id="trace-22698"></a>
<a id="trace-22713"></a>
<a id="trace-22715"></a>
<a id="trace-22724"></a>
<a id="trace-22726"></a>
<a id="trace-22741"></a>
<a id="trace-22743"></a>
<a id="trace-22751"></a>
<a id="trace-22753"></a>
<a id="trace-22826"></a>
<a id="trace-22828"></a>
<a id="trace-22837"></a>
<a id="trace-22839"></a>
<a id="trace-22856"></a>
<a id="trace-22858"></a>
<a id="trace-22867"></a>
<a id="trace-22869"></a>
<a id="trace-23002"></a>
<a id="trace-23004"></a>
<a id="trace-23011"></a>
<a id="trace-23013"></a>
<a id="trace-23135"></a>
<a id="trace-23137"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23179"></a>
<a id="trace-23181"></a>
<a id="trace-23196"></a>
<a id="trace-23198"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23282"></a>
<a id="trace-23284"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23308"></a>
<a id="trace-23310"></a>
<a id="trace-23328"></a>
<a id="trace-23330"></a>
<a id="trace-23345"></a>
<a id="trace-23347"></a>
<a id="trace-23360"></a>
<a id="trace-23362"></a>
<a id="trace-23375"></a>
<a id="trace-23377"></a>
<a id="trace-23598"></a>
<a id="trace-23600"></a>
<a id="trace-23669"></a>
<a id="trace-23671"></a>
<a id="trace-23761"></a>
<a id="trace-23763"></a>
<a id="trace-23772"></a>
<a id="trace-23774"></a>
<a id="trace-23785"></a>
<a id="trace-23787"></a>
<a id="trace-23805"></a>
<a id="trace-23807"></a>
<a id="trace-23819"></a>
<a id="trace-23821"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23849"></a>
<a id="trace-23851"></a>
<a id="trace-23859"></a>
<a id="trace-23861"></a>
<a id="trace-23875"></a>
<a id="trace-23877"></a>
<a id="trace-23882"></a>
<a id="trace-23884"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-23979"></a>
<a id="trace-23981"></a>
<a id="trace-23996"></a>
<a id="trace-23998"></a>
<a id="trace-24021"></a>
<a id="trace-24023"></a>
<a id="trace-24035"></a>
<a id="trace-24037"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24058"></a>
<a id="trace-24060"></a>
<a id="trace-24068"></a>
<a id="trace-24070"></a>
<a id="trace-24171"></a>
<a id="trace-24173"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24261"></a>
<a id="trace-24263"></a>
<a id="trace-24268"></a>
<a id="trace-24270"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
<a id="trace-24306"></a>
<a id="trace-24308"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24336"></a>
<a id="trace-24338"></a>
<a id="trace-24362"></a>
<a id="trace-24364"></a>
<a id="trace-24375"></a>
<a id="trace-24377"></a>
<a id="trace-24577"></a>
<a id="trace-24579"></a>
<a id="trace-24774"></a>
<a id="trace-24776"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24878"></a>
<a id="trace-24880"></a>
<a id="trace-24893"></a>
<a id="trace-24895"></a>
<a id="trace-24908"></a>
<a id="trace-24910"></a>
<a id="trace-24929"></a>
<a id="trace-24931"></a>
<a id="trace-24939"></a>
<a id="trace-24941"></a>
<a id="trace-24958"></a>
<a id="trace-24960"></a>
<a id="trace-24970"></a>
<a id="trace-24972"></a>
<a id="trace-24986"></a>
<a id="trace-24988"></a>
<a id="trace-24992"></a>
<a id="trace-24994"></a>
<a id="trace-25076"></a>
<a id="trace-25078"></a>
<a id="trace-25085"></a>
<a id="trace-25087"></a>
<a id="trace-25099"></a>
<a id="trace-25101"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25121"></a>
<a id="trace-25123"></a>
<a id="trace-25128"></a>
<a id="trace-25130"></a>
<a id="trace-25144"></a>
<a id="trace-25146"></a>
<a id="trace-25156"></a>
<a id="trace-25158"></a>
<a id="trace-25168"></a>
<a id="trace-25170"></a>
<a id="trace-25180"></a>
<a id="trace-25182"></a>
<a id="trace-25257"></a>
<a id="trace-25259"></a>
<a id="trace-25266"></a>
<a id="trace-25268"></a>
<a id="trace-25285"></a>
<a id="trace-25287"></a>
<a id="trace-25305"></a>
<a id="trace-25307"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25326"></a>
<a id="trace-25328"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25364"></a>
<a id="trace-25366"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25447"></a>
<a id="trace-25449"></a>
<a id="trace-25461"></a>
<a id="trace-25463"></a>
<a id="trace-25476"></a>
<a id="trace-25478"></a>
<a id="trace-25490"></a>
<a id="trace-25492"></a>
<a id="trace-25503"></a>
<a id="trace-25505"></a>
<a id="trace-25516"></a>
<a id="trace-25518"></a>
<a id="trace-25544"></a>
<a id="trace-25546"></a>
<a id="trace-25552"></a>
<a id="trace-25554"></a>
<a id="trace-25750"></a>
<a id="trace-25752"></a>
<a id="trace-25758"></a>
<a id="trace-25760"></a>
<a id="trace-25837"></a>
<a id="trace-25839"></a>
<a id="trace-25846"></a>
<a id="trace-25848"></a>
<a id="trace-25860"></a>
<a id="trace-25862"></a>
<a id="trace-25880"></a>
<a id="trace-25882"></a>
<a id="trace-25895"></a>
<a id="trace-25897"></a>
<a id="trace-25907"></a>
<a id="trace-25909"></a>
<a id="trace-25929"></a>
<a id="trace-25931"></a>
<a id="trace-25939"></a>
<a id="trace-25941"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-25985"></a>
<a id="trace-25987"></a>
<a id="trace-26060"></a>
<a id="trace-26062"></a>
<a id="trace-26070"></a>
<a id="trace-26072"></a>
<a id="trace-26087"></a>
<a id="trace-26089"></a>
<a id="trace-26104"></a>
<a id="trace-26106"></a>
<a id="trace-26117"></a>
<a id="trace-26119"></a>
<a id="trace-26131"></a>
<a id="trace-26133"></a>
<a id="trace-26152"></a>
<a id="trace-26154"></a>
<a id="trace-26167"></a>
<a id="trace-26169"></a>
<a id="trace-26460"></a>
<a id="trace-26462"></a>
<a id="trace-26478"></a>
<a id="trace-26480"></a>
<a id="trace-26549"></a>
<a id="trace-26551"></a>
<a id="trace-26564"></a>
<a id="trace-26566"></a>
<a id="trace-26579"></a>
<a id="trace-26581"></a>
<a id="trace-26590"></a>
<a id="trace-26592"></a>
<a id="trace-26609"></a>
<a id="trace-26611"></a>
<a id="trace-26617"></a>
<a id="trace-26619"></a>
<a id="trace-26635"></a>
<a id="trace-26637"></a>
<a id="trace-26644"></a>
<a id="trace-26646"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26669"></a>
<a id="trace-26671"></a>
<a id="trace-26748"></a>
<a id="trace-26750"></a>
<a id="trace-26761"></a>
<a id="trace-26763"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26787"></a>
<a id="trace-26789"></a>
<a id="trace-26796"></a>
<a id="trace-26798"></a>
<a id="trace-26815"></a>
<a id="trace-26817"></a>
<a id="trace-26881"></a>
<a id="trace-26883"></a>
<a id="trace-26896"></a>
<a id="trace-26898"></a>
<a id="trace-26912"></a>
<a id="trace-26914"></a>
<a id="trace-26982"></a>
<a id="trace-26984"></a>
<a id="trace-26995"></a>
<a id="trace-26997"></a>
<a id="trace-27019"></a>
<a id="trace-27021"></a>
<a id="trace-27033"></a>
<a id="trace-27035"></a>
<a id="trace-27049"></a>
<a id="trace-27051"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27079"></a>
<a id="trace-27081"></a>
<a id="trace-27084"></a>
<a id="trace-27086"></a>
<a id="trace-27342"></a>
<a id="trace-27344"></a>
<a id="trace-27357"></a>
<a id="trace-27359"></a>
<a id="trace-27425"></a>
<a id="trace-27427"></a>
<a id="trace-27435"></a>
<a id="trace-27437"></a>
<a id="trace-27458"></a>
<a id="trace-27460"></a>
<a id="trace-27470"></a>
<a id="trace-27472"></a>
<a id="trace-27483"></a>
<a id="trace-27485"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27558"></a>
<a id="trace-27560"></a>
<a id="trace-27569"></a>
<a id="trace-27571"></a>
<a id="trace-27582"></a>
<a id="trace-27584"></a>
<a id="trace-27593"></a>
<a id="trace-27595"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27679"></a>
<a id="trace-27681"></a>
<a id="trace-27693"></a>
<a id="trace-27695"></a>
<a id="trace-27704"></a>
<a id="trace-27706"></a>
<a id="trace-27718"></a>
<a id="trace-27720"></a>
<a id="trace-27726"></a>
<a id="trace-27728"></a>
<a id="trace-27737"></a>
<a id="trace-27739"></a>
<a id="trace-27744"></a>
<a id="trace-27746"></a>
<a id="trace-27755"></a>
<a id="trace-27757"></a>
<a id="trace-27768"></a>
<a id="trace-27770"></a>
<a id="trace-27834"></a>
<a id="trace-27836"></a>
<a id="trace-27842"></a>
<a id="trace-27844"></a>
<a id="trace-27855"></a>
<a id="trace-27857"></a>
<a id="trace-27863"></a>
<a id="trace-27865"></a>
<a id="trace-27876"></a>
<a id="trace-27878"></a>
<a id="trace-27883"></a>
<a id="trace-27885"></a>
<a id="trace-27896"></a>
<a id="trace-27898"></a>
<a id="trace-27903"></a>
<a id="trace-27905"></a>
<a id="trace-27914"></a>
<a id="trace-27916"></a>
<a id="trace-27928"></a>
<a id="trace-27930"></a>
<a id="trace-27994"></a>
<a id="trace-27996"></a>
<a id="trace-28006"></a>
<a id="trace-28008"></a>
<a id="trace-28018"></a>
<a id="trace-28020"></a>
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28040"></a>
<a id="trace-28042"></a>
<a id="trace-28047"></a>
<a id="trace-28049"></a>
<a id="trace-28062"></a>
<a id="trace-28064"></a>
<a id="trace-28072"></a>
<a id="trace-28074"></a>
<a id="trace-28085"></a>
<a id="trace-28087"></a>
<a id="trace-28096"></a>
<a id="trace-28098"></a>
<a id="trace-28163"></a>
<a id="trace-28165"></a>
<a id="trace-28173"></a>
<a id="trace-28175"></a>
<a id="trace-28189"></a>
<a id="trace-28191"></a>
<a id="trace-28219"></a>
<a id="trace-28221"></a>
<a id="trace-28230"></a>
<a id="trace-28232"></a>
<a id="trace-28240"></a>
<a id="trace-28242"></a>
<a id="trace-28253"></a>
<a id="trace-28255"></a>
<a id="trace-28265"></a>
<a id="trace-28267"></a>
<a id="trace-28279"></a>
<a id="trace-28281"></a>
<a id="trace-28287"></a>
<a id="trace-28289"></a>
<a id="trace-28360"></a>
<a id="trace-28362"></a>
<a id="trace-28367"></a>
<a id="trace-28369"></a>
<a id="trace-28380"></a>
<a id="trace-28382"></a>
<a id="trace-28398"></a>
<a id="trace-28400"></a>
<a id="trace-28410"></a>
<a id="trace-28412"></a>
<a id="trace-28429"></a>
<a id="trace-28431"></a>
<a id="trace-28452"></a>
<a id="trace-28454"></a>
<a id="trace-28460"></a>
<a id="trace-28462"></a>
<a id="trace-28471"></a>
<a id="trace-28473"></a>
<a id="trace-28478"></a>
<a id="trace-28480"></a>
<a id="trace-28549"></a>
<a id="trace-28551"></a>
<a id="trace-28556"></a>
<a id="trace-28558"></a>
<a id="trace-28570"></a>
<a id="trace-28572"></a>
<a id="trace-28579"></a>
<a id="trace-28581"></a>
<a id="trace-28592"></a>
<a id="trace-28594"></a>
<a id="trace-28603"></a>
<a id="trace-28605"></a>
<a id="trace-28619"></a>
<a id="trace-28621"></a>
<a id="trace-28632"></a>
<a id="trace-28634"></a>
<a id="trace-28650"></a>
<a id="trace-28652"></a>
<a id="trace-28657"></a>
<a id="trace-28659"></a>
<a id="trace-28737"></a>
<a id="trace-28739"></a>
<a id="trace-28744"></a>
<a id="trace-28746"></a>
<a id="trace-28759"></a>
<a id="trace-28761"></a>
<a id="trace-28768"></a>
<a id="trace-28770"></a>
<a id="trace-28784"></a>
<a id="trace-28786"></a>
<a id="trace-28794"></a>
<a id="trace-28796"></a>
<a id="trace-28807"></a>
<a id="trace-28809"></a>
<a id="trace-28820"></a>
<a id="trace-28822"></a>
<a id="trace-28831"></a>
<a id="trace-28833"></a>
<a id="trace-28842"></a>
<a id="trace-28844"></a>
<a id="trace-28915"></a>
<a id="trace-28917"></a>
<a id="trace-28922"></a>
<a id="trace-28924"></a>
<a id="trace-28942"></a>
<a id="trace-28944"></a>
<a id="trace-28963"></a>
<a id="trace-28965"></a>
<a id="trace-28979"></a>
<a id="trace-28981"></a>
<a id="trace-28986"></a>
<a id="trace-28988"></a>
<a id="trace-29130"></a>
<a id="trace-29132"></a>
<a id="trace-29139"></a>
<a id="trace-29141"></a>
<a id="trace-29154"></a>
<a id="trace-29156"></a>
<a id="trace-29165"></a>
<a id="trace-29167"></a>
<a id="trace-29237"></a>
<a id="trace-29239"></a>
<a id="trace-29256"></a>
<a id="trace-29258"></a>
<a id="trace-29269"></a>
<a id="trace-29271"></a>
<a id="trace-29439"></a>
<a id="trace-29441"></a>
<a id="trace-29463"></a>
<a id="trace-29465"></a>
<a id="trace-29470"></a>
<a id="trace-29472"></a>
<a id="trace-29480"></a>
<a id="trace-29482"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29500"></a>
<a id="trace-29502"></a>
<a id="trace-29511"></a>
<a id="trace-29513"></a>
<a id="trace-29587"></a>
<a id="trace-29589"></a>
<a id="trace-29597"></a>
<a id="trace-29599"></a>
<a id="trace-29609"></a>
<a id="trace-29611"></a>
<a id="trace-29620"></a>
<a id="trace-29622"></a>
<a id="trace-29632"></a>
<a id="trace-29634"></a>
<a id="trace-29641"></a>
<a id="trace-29643"></a>
<a id="trace-29656"></a>
<a id="trace-29658"></a>
<a id="trace-29803"></a>
<a id="trace-29805"></a>
<a id="trace-29813"></a>
<a id="trace-29815"></a>
<a id="trace-29821"></a>
<a id="trace-29823"></a>
<a id="trace-29894"></a>
<a id="trace-29896"></a>
<a id="trace-29916"></a>
<a id="trace-29918"></a>
<a id="trace-29950"></a>
<a id="trace-29952"></a>
<a id="trace-30036"></a>
<a id="trace-30038"></a>
<a id="trace-30062"></a>
<a id="trace-30064"></a>
<a id="trace-30069"></a>
<a id="trace-30071"></a>
<a id="trace-30078"></a>
<a id="trace-30080"></a>
<a id="trace-30087"></a>
<a id="trace-30089"></a>
<a id="trace-30098"></a>
<a id="trace-30100"></a>
<a id="trace-30105"></a>
<a id="trace-30107"></a>
<a id="trace-30170"></a>
<a id="trace-30172"></a>
<a id="trace-30177"></a>
<a id="trace-30179"></a>
<a id="trace-30185"></a>
<a id="trace-30187"></a>
<a id="trace-30194"></a>
<a id="trace-30196"></a>
<a id="trace-30204"></a>
<a id="trace-30206"></a>
<a id="trace-30210"></a>
<a id="trace-30212"></a>
<a id="trace-30218"></a>
<a id="trace-30220"></a>
<a id="trace-30226"></a>
<a id="trace-30228"></a>
<a id="trace-30237"></a>
<a id="trace-30239"></a>
<a id="trace-30244"></a>
<a id="trace-30246"></a>
<a id="trace-30311"></a>
<a id="trace-30313"></a>
<a id="trace-30321"></a>
<a id="trace-30323"></a>
<a id="trace-30331"></a>
<a id="trace-30333"></a>
<a id="trace-30341"></a>
<a id="trace-30343"></a>
<a id="trace-30353"></a>
<a id="trace-30355"></a>
<a id="trace-30360"></a>
<a id="trace-30362"></a>
<a id="trace-30369"></a>
<a id="trace-30371"></a>
<a id="trace-30375"></a>
<a id="trace-30377"></a>
<a id="trace-30387"></a>
<a id="trace-30389"></a>
<a id="trace-30453"></a>
<a id="trace-30455"></a>
<a id="trace-30465"></a>
<a id="trace-30467"></a>
<a id="trace-30478"></a>
<a id="trace-30480"></a>
<a id="trace-30495"></a>
<a id="trace-30497"></a>
<a id="trace-30505"></a>
<a id="trace-30507"></a>
<a id="trace-30516"></a>
<a id="trace-30518"></a>
<a id="trace-30525"></a>
<a id="trace-30527"></a>
<a id="trace-30532"></a>
<a id="trace-30534"></a>
<a id="trace-30543"></a>
<a id="trace-30545"></a>
<a id="trace-30550"></a>
<a id="trace-30552"></a>
<a id="trace-30618"></a>
<a id="trace-30620"></a>
<a id="trace-30628"></a>
<a id="trace-30630"></a>
<a id="trace-30640"></a>
<a id="trace-30642"></a>
<a id="trace-30651"></a>
<a id="trace-30653"></a>
<a id="trace-30662"></a>
<a id="trace-30664"></a>
<a id="trace-30677"></a>
<a id="trace-30679"></a>
<a id="trace-30690"></a>
<a id="trace-30692"></a>
<a id="trace-30708"></a>
<a id="trace-30710"></a>
<a id="trace-30724"></a>
<a id="trace-30726"></a>
<a id="trace-30731"></a>
<a id="trace-30733"></a>
<a id="trace-30796"></a>
<a id="trace-30798"></a>
<a id="trace-30805"></a>
<a id="trace-30807"></a>
<a id="trace-30817"></a>
<a id="trace-30819"></a>
<a id="trace-30825"></a>
<a id="trace-30827"></a>
<a id="trace-30837"></a>
<a id="trace-30839"></a>
<a id="trace-30845"></a>
<a id="trace-30847"></a>
<a id="trace-30856"></a>
<a id="trace-30858"></a>
<a id="trace-30869"></a>
<a id="trace-30871"></a>
<a id="trace-30885"></a>
<a id="trace-30887"></a>
<a id="trace-30901"></a>
<a id="trace-30903"></a>
<a id="trace-30970"></a>
<a id="trace-30972"></a>
<a id="trace-30979"></a>
<a id="trace-30981"></a>
<a id="trace-30997"></a>
<a id="trace-30999"></a>
<a id="trace-31007"></a>
<a id="trace-31009"></a>
<a id="trace-31021"></a>
<a id="trace-31023"></a>
<a id="trace-31028"></a>
<a id="trace-31030"></a>
<a id="trace-31039"></a>
<a id="trace-31041"></a>
<a id="trace-31046"></a>
<a id="trace-31048"></a>
<a id="trace-31055"></a>
<a id="trace-31057"></a>
<a id="trace-31068"></a>
<a id="trace-31070"></a>
<a id="trace-31133"></a>
<a id="trace-31135"></a>
<a id="trace-31149"></a>
<a id="trace-31151"></a>
<a id="trace-31166"></a>
<a id="trace-31168"></a>
<a id="trace-31175"></a>
<a id="trace-31177"></a>
<a id="trace-31193"></a>
<a id="trace-31195"></a>
<a id="trace-31208"></a>
<a id="trace-31210"></a>
<a id="trace-31221"></a>
<a id="trace-31223"></a>
<a id="trace-31228"></a>
<a id="trace-31230"></a>
<a id="trace-31238"></a>
<a id="trace-31240"></a>
<a id="trace-31245"></a>
<a id="trace-31247"></a>
<a id="trace-31308"></a>
<a id="trace-31310"></a>
<a id="trace-31321"></a>
<a id="trace-31323"></a>
<a id="trace-31331"></a>
<a id="trace-31333"></a>
<a id="trace-31345"></a>
<a id="trace-31347"></a>
<a id="trace-31360"></a>
<a id="trace-31362"></a>
<a id="trace-31371"></a>
<a id="trace-31373"></a>
<a id="trace-31387"></a>
<a id="trace-31389"></a>
<a id="trace-31400"></a>
<a id="trace-31402"></a>
<a id="trace-31420"></a>
<a id="trace-31422"></a>
<a id="trace-31427"></a>
<a id="trace-31429"></a>
<a id="trace-31492"></a>
<a id="trace-31494"></a>
<a id="trace-31500"></a>
<a id="trace-31502"></a>
<a id="trace-31508"></a>
<a id="trace-31510"></a>
<a id="trace-31521"></a>
<a id="trace-31523"></a>
<a id="trace-31532"></a>
<a id="trace-31534"></a>
<a id="trace-31545"></a>
<a id="trace-31547"></a>
<a id="trace-31557"></a>
<a id="trace-31559"></a>
<a id="trace-31565"></a>
<a id="trace-31567"></a>
<a id="trace-31583"></a>
<a id="trace-31585"></a>
<a id="trace-31595"></a>
<a id="trace-31597"></a>
<a id="trace-31668"></a>
<a id="trace-31670"></a>
<a id="trace-31684"></a>
<a id="trace-31686"></a>
<a id="trace-31694"></a>
<a id="trace-31696"></a>
<a id="trace-31702"></a>
<a id="trace-31704"></a>
<a id="trace-31712"></a>
<a id="trace-31714"></a>
<a id="trace-31724"></a>
<a id="trace-31726"></a>
<a id="trace-31733"></a>
<a id="trace-31735"></a>
<a id="trace-31744"></a>
<a id="trace-31746"></a>
<a id="trace-31753"></a>
<a id="trace-31755"></a>
<a id="trace-31762"></a>
<a id="trace-31764"></a>
<a id="trace-31829"></a>
<a id="trace-31831"></a>
<a id="trace-31845"></a>
<a id="trace-31847"></a>
<a id="trace-31862"></a>
<a id="trace-31864"></a>
<a id="trace-31876"></a>
<a id="trace-31878"></a>
<a id="trace-31896"></a>
<a id="trace-31898"></a>
<a id="trace-31904"></a>
<a id="trace-31906"></a>
<a id="trace-31913"></a>
<a id="trace-31915"></a>
<a id="trace-31924"></a>
<a id="trace-31926"></a>
<a id="trace-31932"></a>
<a id="trace-31934"></a>
<a id="trace-31943"></a>
<a id="trace-31945"></a>
<a id="trace-32006"></a>
<a id="trace-32008"></a>
<a id="trace-32015"></a>
<a id="trace-32017"></a>
<a id="trace-32027"></a>
<a id="trace-32029"></a>
<a id="trace-32037"></a>
<a id="trace-32039"></a>
<a id="trace-32059"></a>
<a id="trace-32061"></a>
<a id="trace-32072"></a>
<a id="trace-32074"></a>
<a id="trace-32089"></a>
<a id="trace-32091"></a>
<a id="trace-32098"></a>
<a id="trace-32100"></a>
<a id="trace-32114"></a>
<a id="trace-32116"></a>
<a id="trace-32125"></a>
<a id="trace-32127"></a>
<a id="trace-32188"></a>
<a id="trace-32190"></a>
<a id="trace-32200"></a>
<a id="trace-32202"></a>
<a id="trace-32208"></a>
<a id="trace-32210"></a>
<a id="trace-32216"></a>
<a id="trace-32218"></a>
<a id="trace-32229"></a>
<a id="trace-32231"></a>
<a id="trace-32238"></a>
<a id="trace-32240"></a>
<a id="trace-32253"></a>
<a id="trace-32255"></a>
<a id="trace-32265"></a>
<a id="trace-32267"></a>
<a id="trace-32284"></a>
<a id="trace-32286"></a>
<a id="trace-32291"></a>
<a id="trace-32293"></a>
<a id="trace-32360"></a>
<a id="trace-32362"></a>
<a id="trace-32380"></a>
<a id="trace-32382"></a>
<a id="trace-32388"></a>
<a id="trace-32390"></a>
<a id="trace-32400"></a>
<a id="trace-32402"></a>
<a id="trace-32410"></a>
<a id="trace-32412"></a>
<a id="trace-32417"></a>
<a id="trace-32419"></a>
<a id="trace-32428"></a>
<a id="trace-32430"></a>
<a id="trace-32437"></a>
<a id="trace-32439"></a>
<a id="trace-32451"></a>
<a id="trace-32453"></a>
<a id="trace-32459"></a>
<a id="trace-32461"></a>
<a id="trace-32529"></a>
<a id="trace-32531"></a>
<a id="trace-32541"></a>
<a id="trace-32543"></a>
<a id="trace-32554"></a>
<a id="trace-32556"></a>
<a id="trace-32572"></a>
<a id="trace-32574"></a>
<a id="trace-32590"></a>
<a id="trace-32592"></a>
<a id="trace-32601"></a>
<a id="trace-32603"></a>
<a id="trace-32610"></a>
<a id="trace-32612"></a>
<a id="trace-32618"></a>
<a id="trace-32620"></a>
<a id="trace-32628"></a>
<a id="trace-32630"></a>
<a id="trace-32637"></a>
<a id="trace-32639"></a>
<a id="trace-32705"></a>
<a id="trace-32707"></a>
<a id="trace-32713"></a>
<a id="trace-32715"></a>
<a id="trace-32726"></a>
<a id="trace-32728"></a>
<a id="trace-32735"></a>
<a id="trace-32737"></a>
<a id="trace-32753"></a>
<a id="trace-32755"></a>
<a id="trace-32769"></a>
<a id="trace-32771"></a>
<a id="trace-32784"></a>
<a id="trace-32786"></a>
<a id="trace-32803"></a>
<a id="trace-32805"></a>
<a id="trace-32811"></a>
<a id="trace-32813"></a>
<a id="trace-32819"></a>
<a id="trace-32821"></a>
<a id="trace-32884"></a>
<a id="trace-32886"></a>
<a id="trace-32892"></a>
<a id="trace-32894"></a>
<a id="trace-32904"></a>
<a id="trace-32906"></a>
<a id="trace-32912"></a>
<a id="trace-32914"></a>
<a id="trace-32925"></a>
<a id="trace-32927"></a>
<a id="trace-32934"></a>
<a id="trace-32936"></a>
<a id="trace-32945"></a>
<a id="trace-32947"></a>
<a id="trace-32964"></a>
<a id="trace-32966"></a>
<a id="trace-32977"></a>
<a id="trace-32979"></a>
<a id="trace-32995"></a>
<a id="trace-32997"></a>
<a id="trace-33066"></a>
<a id="trace-33068"></a>
<a id="trace-33074"></a>
<a id="trace-33076"></a>
<a id="trace-33084"></a>
<a id="trace-33086"></a>
<a id="trace-33092"></a>
<a id="trace-33094"></a>
<a id="trace-33106"></a>
<a id="trace-33108"></a>
<a id="trace-33113"></a>
<a id="trace-33115"></a>
<a id="trace-33124"></a>
<a id="trace-33126"></a>
<a id="trace-33132"></a>
<a id="trace-33134"></a>
<a id="trace-33142"></a>
<a id="trace-33144"></a>
<a id="trace-33156"></a>
<a id="trace-33158"></a>
<a id="trace-33227"></a>
<a id="trace-33229"></a>
<a id="trace-33246"></a>
<a id="trace-33248"></a>
<a id="trace-33260"></a>
<a id="trace-33262"></a>
<a id="trace-33268"></a>
<a id="trace-33270"></a>
<a id="trace-33288"></a>
<a id="trace-33290"></a>
<a id="trace-33295"></a>
<a id="trace-33297"></a>
<a id="trace-33308"></a>
<a id="trace-33310"></a>
<a id="trace-33315"></a>
<a id="trace-33317"></a>
<a id="trace-33325"></a>
<a id="trace-33327"></a>
<a id="trace-33332"></a>
<a id="trace-33334"></a>
<a id="trace-33396"></a>
<a id="trace-33398"></a>
<a id="trace-33411"></a>
<a id="trace-33413"></a>
<a id="trace-33421"></a>
<a id="trace-33423"></a>
<a id="trace-33437"></a>
<a id="trace-33439"></a>
<a id="trace-33456"></a>
<a id="trace-33458"></a>
<a id="trace-33463"></a>
<a id="trace-33465"></a>
<a id="trace-33480"></a>
<a id="trace-33482"></a>
<a id="trace-33495"></a>
<a id="trace-33497"></a>
<a id="trace-33507"></a>
<a id="trace-33509"></a>
<a id="trace-33514"></a>
<a id="trace-33516"></a>
<a id="trace-33579"></a>
<a id="trace-33581"></a>
<a id="trace-33588"></a>
<a id="trace-33590"></a>
<a id="trace-33596"></a>
<a id="trace-33598"></a>
<a id="trace-33609"></a>
<a id="trace-33611"></a>
<a id="trace-33621"></a>
<a id="trace-33623"></a>
<a id="trace-33633"></a>
<a id="trace-33635"></a>
<a id="trace-33647"></a>
<a id="trace-33649"></a>
<a id="trace-33658"></a>
<a id="trace-33660"></a>
<a id="trace-33673"></a>
<a id="trace-33675"></a>
<a id="trace-33686"></a>
<a id="trace-33688"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46582008112411666, 'next_transition': 695}.
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-954"></a>
<a id="trace-956"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1029"></a>
<a id="trace-1031"></a>
<a id="trace-1053"></a>
<a id="trace-1055"></a>
<a id="trace-1089"></a>
<a id="trace-1091"></a>
<a id="trace-1122"></a>
<a id="trace-1124"></a>
<a id="trace-1162"></a>
<a id="trace-1164"></a>
<a id="trace-1292"></a>
<a id="trace-1294"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1334"></a>
<a id="trace-1336"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 922): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 854. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600130545181027, 'next_transition': 954}.
<a id="trace-141"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 141): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4610877224919381, 'next_transition': 1373}.
<a id="trace-142"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.4948228251776494, 'next_transition': 1930}.
<a id="trace-1342"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1342): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1342. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4610877224919381, 'next_transition': 1373}.
<a id="trace-1343"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1343): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1343. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4610877224919381, 'next_transition': 1373}.
<a id="trace-1344"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1344): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1344. Next observer evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.4948228251776494, 'next_transition': 1930}.
<a id="trace-1345"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1345): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1345. Next observer evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.4948228251776494, 'next_transition': 1930}.
<a id="trace-1373"></a>
<a id="trace-1375"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1428"></a>
<a id="trace-1430"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1373): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1345. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27561773473984585, 'next_transition': 1401}.
<a id="trace-1438"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1438): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1213. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724984517913676, 'next_transition': 1831}.
<a id="trace-1439"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1439): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1213. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724984517913676, 'next_transition': 1831}.
<a id="trace-1831"></a>
<a id="trace-1833"></a>
<a id="trace-1895"></a>
<a id="trace-1897"></a>
<a id="trace-2351"></a>
<a id="trace-2353"></a>
<a id="trace-2389"></a>
<a id="trace-2391"></a>
<a id="trace-2769"></a>
<a id="trace-2771"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1831): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1345. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600018843147756, 'next_transition': 1895}.
<a id="trace-1930"></a>
- 14.80s–14.80s (×1), actor 8, squad 1 (trace 1930): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1221. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19457415002062847, 'next_transition': 2400}.
<a id="trace-1931"></a>
- 14.80s–14.80s (×1), actor 8, squad 1 (trace 1931): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1221. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19457415002062847, 'next_transition': 2400}.
<a id="trace-1932"></a>
<a id="trace-2400"></a>
- 14.80s–15.80s (×2), actor 8, squad 1 (trace 1932): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1221. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19457415002062847, 'next_transition': 2400}.
<a id="trace-2803"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2803): received platoon directive. Knowledge: actor memory at 15.00s, trace 2279. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.157861189274265, 'next_transition': 3268}.
<a id="trace-3268"></a>
<a id="trace-3270"></a>
<a id="trace-3365"></a>
<a id="trace-3367"></a>
<a id="trace-3397"></a>
<a id="trace-3399"></a>
<a id="trace-3530"></a>
<a id="trace-3532"></a>
- 17.25s–20.25s (×8), actor 5, squad 0 (trace 3268): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2284. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0796996420809526, 'next_transition': 3365}.
<a id="trace-3425"></a>
- 19.50s–19.50s (×1), actor 9, squad 1 (trace 3425): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 2288. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.921117103350855, 'next_transition': 6718}.
<a id="trace-3546"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 3546): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3448. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31203987713256665, 'next_transition': 4121}.
<a id="trace-3547"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 3547): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3448. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31203987713256665, 'next_transition': 4121}.
<a id="trace-3548"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 3548): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3448. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31203987713256665, 'next_transition': 4121}.
<a id="trace-4121"></a>
<a id="trace-4123"></a>
- 20.75s–20.75s (×2), actor 5, squad 0 (trace 4121): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3453. Next observer evidence: {'until': 20.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43079626607350663, 'next_transition': 4133}.
<a id="trace-4133"></a>
<a id="trace-4715"></a>
- 20.80s–21.15s (×2), actor 0, squad 0 (trace 4133): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3448. Next observer evidence: {'until': 21, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3898169743165187, 'next_transition': 4715}.
<a id="trace-5300"></a>
<a id="trace-5302"></a>
<a id="trace-5355"></a>
<a id="trace-5357"></a>
<a id="trace-5411"></a>
<a id="trace-5413"></a>
<a id="trace-5556"></a>
<a id="trace-5621"></a>
<a id="trace-5664"></a>
- 21.25s–24.75s (×9), actor 5, squad 0 (trace 5300): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3453. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8885572554594379, 'next_transition': 5355}.
<a id="trace-5676"></a>
- 24.85s–24.85s (×1), actor 0, squad 0 (trace 5676): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3448. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.338292057065237, 'next_transition': 5768}.
<a id="trace-5768"></a>
<a id="trace-5770"></a>
<a id="trace-5804"></a>
<a id="trace-5806"></a>
- 25.75s–26.25s (×4), actor 5, squad 0 (trace 5768): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5683. Next observer evidence: {'until': 26.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4213650455641645, 'next_transition': 5804}.
<a id="trace-5854"></a>
- 27.20s–27.20s (×1), actor 0, squad 0 (trace 5854): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5678. Next observer evidence: None.
<a id="trace-6556"></a>
<a id="trace-6558"></a>
<a id="trace-6577"></a>
<a id="trace-6579"></a>
<a id="trace-6611"></a>
<a id="trace-6613"></a>
<a id="trace-6659"></a>
<a id="trace-6661"></a>
<a id="trace-6689"></a>
<a id="trace-6691"></a>
<a id="trace-6709"></a>
<a id="trace-6711"></a>
<a id="trace-6813"></a>
<a id="trace-6815"></a>
<a id="trace-6842"></a>
<a id="trace-6844"></a>
- 27.25s–30.75s (×16), actor 5, squad 0 (trace 6556): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5683. Next observer evidence: {'until': 27.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.03618750000000004, 'next_transition': 6577}.
<a id="trace-6718"></a>
- 29.75s–29.75s (×1), actor 9, squad 1 (trace 6718): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 5686. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10794}.
<a id="trace-6861"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 6861): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6730. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0644420107659786, 'next_transition': 6866}.
<a id="trace-6866"></a>
- 31.15s–31.15s (×1), actor 0, squad 0 (trace 6866): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6730. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249991119366069, 'next_transition': 10565}.
<a id="trace-10004"></a>
- 31.15s–31.15s (×1), actor 0, squad 0 (trace 10004): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 6730. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249991119366069, 'next_transition': 10565}.
<a id="trace-10005"></a>
- 31.15s–31.15s (×1), actor 0, squad 0 (trace 10005): MoveTactically. Knowledge: actor memory at 30.00s, trace 6730. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249991119366069, 'next_transition': 10565}.
<a id="trace-10006"></a>
- 31.15s–31.15s (×1), actor 0, squad 0 (trace 10006): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 6730. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249991119366069, 'next_transition': 10565}.
<a id="trace-10565"></a>
<a id="trace-10567"></a>
<a id="trace-10586"></a>
<a id="trace-10588"></a>
<a id="trace-10663"></a>
<a id="trace-10665"></a>
<a id="trace-10718"></a>
<a id="trace-10720"></a>
<a id="trace-10748"></a>
<a id="trace-10750"></a>
<a id="trace-10991"></a>
<a id="trace-10993"></a>
<a id="trace-11019"></a>
<a id="trace-11021"></a>
<a id="trace-11066"></a>
<a id="trace-11068"></a>
<a id="trace-11115"></a>
<a id="trace-11117"></a>
<a id="trace-11136"></a>
<a id="trace-11138"></a>
- 31.25s–38.75s (×20), actor 5, squad 0 (trace 10565): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6735. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28222704357409545, 'next_transition': 10586}.
<a id="trace-10794"></a>
- 34.75s–34.75s (×1), actor 9, squad 1 (trace 10794): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 30.00s, trace 6738. Next observer evidence: {'until': 38.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.283029132668238, 'next_transition': 639}.
<a id="trace-638"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 638): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-639"></a>
- 38.85s–38.85s (×1), actor 5, squad 1 (events line 639): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11146"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 11146): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.528503 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 11146. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5941671073685045, 'next_transition': 11170}.
<a id="trace-11147"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 11147): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.528503 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 11147. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5941671073685045, 'next_transition': 11170}.
<a id="trace-11148"></a>
- 38.85s–38.85s (×1), actor 5, squad 1 (trace 11148): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.528503 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 11148. Next observer evidence: {'until': 41.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.446495422799723, 'next_transition': 11348}.
<a id="trace-11149"></a>
- 38.85s–38.85s (×1), actor 5, squad 1 (trace 11149): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.528503 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 11149. Next observer evidence: {'until': 41.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.446495422799723, 'next_transition': 11348}.
<a id="trace-11170"></a>
<a id="trace-11172"></a>
<a id="trace-11192"></a>
<a id="trace-11194"></a>
<a id="trace-11310"></a>
<a id="trace-11312"></a>
<a id="trace-11767"></a>
<a id="trace-11769"></a>
<a id="trace-11805"></a>
<a id="trace-11807"></a>
- 39.25s–42.25s (×10), actor 5, squad 0 (trace 11170): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 11149. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5128155990880587, 'next_transition': 11192}.
<a id="trace-11348"></a>
- 41.45s–41.45s (×1), actor 9, squad 1 (trace 11348): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 43, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.876243175716521, 'next_transition': 11865}.
<a id="trace-11349"></a>
<a id="trace-11865"></a>
- 41.45s–43.15s (×2), actor 9, squad 1 (trace 11349): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 43, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.876243175716521, 'next_transition': 11865}.
<a id="trace-11816"></a>
- 42.30s–42.30s (×1), actor 0, squad 0 (trace 11816): NeedSupport. Knowledge: actor memory at 40.00s, trace 11208. Next observer evidence: {'until': 42.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1575016895197079, 'next_transition': 11837}.
<a id="trace-11837"></a>
<a id="trace-11839"></a>
<a id="trace-12278"></a>
<a id="trace-12280"></a>
<a id="trace-12306"></a>
<a id="trace-12308"></a>
<a id="trace-12340"></a>
<a id="trace-12342"></a>
- 42.75s–44.25s (×8), actor 5, squad 0 (trace 11837): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11213. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625090402274132, 'next_transition': 12278}.
<a id="trace-12357"></a>
- 44.50s–44.50s (×1), actor 9, squad 1 (trace 12357): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33885516683739897, 'next_transition': 12854}.
<a id="trace-12359"></a>
- 44.50s–44.50s (×1), actor 9, squad 1 (trace 12359): NeedSupport. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33885516683739897, 'next_transition': 12854}.
<a id="trace-12376"></a>
- 44.60s–44.60s (×1), actor 0, squad 0 (trace 12376): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 40.00s, trace 11208. Next observer evidence: None.
<a id="trace-12845"></a>
<a id="trace-12847"></a>
- 44.75s–44.75s (×2), actor 5, squad 0 (trace 12845): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11213. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6909896455761105, 'next_transition': 13214}.
<a id="trace-12854"></a>
- 44.75s–44.75s (×1), actor 9, squad 1 (trace 12854): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977175224360762, 'next_transition': 14291}.
<a id="trace-12857"></a>
- 44.75s–44.75s (×1), actor 9, squad 1 (trace 12857): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977175224360762, 'next_transition': 14291}.
<a id="trace-12858"></a>
- 44.75s–44.75s (×1), actor 9, squad 1 (trace 12858): Reorganise complete: known contact. Knowledge: actor memory at 40.00s, trace 11216. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977175224360762, 'next_transition': 14291}.
<a id="trace-13214"></a>
- 45.60s–45.60s (×1), actor 0, squad 0 (trace 13214): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 13120. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43837669834409304, 'next_transition': 14145}.
<a id="trace-13215"></a>
- 45.60s–45.60s (×1), actor 0, squad 0 (trace 13215): received platoon directive. Knowledge: actor memory at 45.00s, trace 13120. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43837669834409304, 'next_transition': 14145}.
<a id="trace-14145"></a>
<a id="trace-14147"></a>
<a id="trace-14174"></a>
<a id="trace-14176"></a>
<a id="trace-14258"></a>
<a id="trace-14260"></a>
<a id="trace-14299"></a>
<a id="trace-14301"></a>
<a id="trace-14344"></a>
<a id="trace-14346"></a>
- 46.25s–48.75s (×10), actor 5, squad 0 (trace 14145): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 13125. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4579396239342955, 'next_transition': 14174}.
<a id="trace-14291"></a>
- 48.20s–48.20s (×1), actor 9, squad 1 (trace 14291): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 13128. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.683822234720776, 'next_transition': 14398}.
<a id="trace-14391"></a>
- 49.25s–49.25s (×1), actor 0, squad 0 (trace 14391): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 13120. Next observer evidence: {'until': 50.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.37372155133173063, 'next_transition': 15024}.
<a id="trace-14398"></a>
<a id="trace-14714"></a>
- 49.35s–50.00s (×2), actor 9, squad 1 (trace 14398): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 13128. Next observer evidence: {'until': 50, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2280710964260926, 'next_transition': 14714}.
<a id="trace-15024"></a>
<a id="trace-15026"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15164"></a>
<a id="trace-15166"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
- 50.25s–53.25s (×8), actor 5, squad 0 (trace 15024): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 14692. Next observer evidence: {'until': 51.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4599717735105653, 'next_transition': 15096}.
<a id="trace-15250"></a>
- 53.70s–53.70s (×1), actor 9, squad 1 (trace 15250): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 14695. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0509872623514518, 'next_transition': 15322}.
<a id="trace-15322"></a>
- 54.70s–54.70s (×1), actor 9, squad 1 (trace 15322): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 14695. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6180896071768237, 'next_transition': 16995}.
<a id="trace-15333"></a>
- 54.75s–54.75s (×1), actor 0, squad 0 (trace 15333): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 14687. Next observer evidence: {'until': 55.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16984}.
<a id="trace-16477"></a>
- 54.75s–54.75s (×1), actor 0, squad 0 (trace 16477): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 14687. Next observer evidence: {'until': 55.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16984}.
<a id="trace-16478"></a>
- 54.75s–54.75s (×1), actor 0, squad 0 (trace 16478): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 14687. Next observer evidence: {'until': 55.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16984}.
<a id="trace-16877"></a>
- 54.75s–54.75s (×1), actor 0, squad 0 (trace 16877): Assaulting. Knowledge: actor memory at 50.00s, trace 14687. Next observer evidence: {'until': 55.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16984}.
<a id="trace-16984"></a>
<a id="trace-16986"></a>
<a id="trace-17281"></a>
<a id="trace-17283"></a>
<a id="trace-17325"></a>
<a id="trace-17327"></a>
<a id="trace-17378"></a>
<a id="trace-17380"></a>
<a id="trace-17454"></a>
<a id="trace-17456"></a>
<a id="trace-17481"></a>
<a id="trace-17483"></a>
<a id="trace-17511"></a>
<a id="trace-17513"></a>
<a id="trace-17535"></a>
<a id="trace-17537"></a>
<a id="trace-17647"></a>
<a id="trace-17649"></a>
<a id="trace-17664"></a>
<a id="trace-17666"></a>
- 55.25s–61.25s (×20), actor 5, squad 0 (trace 16984): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16902. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17281}.
<a id="trace-16995"></a>
- 55.35s–55.35s (×1), actor 9, squad 1 (trace 16995): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 16905. Next observer evidence: {'until': 58.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1269255945103285, 'next_transition': 17498}.
<a id="trace-17498"></a>
- 58.95s–58.95s (×1), actor 9, squad 1 (trace 17498): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 16905. Next observer evidence: {'until': 65.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.677513861412853, 'next_transition': 18647}.
<a id="trace-17716"></a>
- 62.10s–62.10s (×1), actor 0, squad 0 (trace 17716): new loss of own base of fire. Knowledge: actor memory at 60.00s, trace 17551. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03584474109047345, 'next_transition': 18276}.
<a id="trace-17717"></a>
- 62.10s–62.10s (×1), actor 0, squad 0 (trace 17717): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 17551. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03584474109047345, 'next_transition': 18276}.
<a id="trace-18276"></a>
<a id="trace-18278"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18632"></a>
<a id="trace-18634"></a>
<a id="trace-18664"></a>
<a id="trace-18666"></a>
- 62.25s–66.25s (×12), actor 5, squad 0 (trace 18276): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 17556. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0182908905540629, 'next_transition': 18413}.
<a id="trace-18647"></a>
- 65.90s–65.90s (×1), actor 9, squad 1 (trace 18647): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 65.00s, trace 18534. Next observer evidence: {'until': 66.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1234}.
<a id="trace-1233"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 1233): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1234"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (events line 1234): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18682"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 18682): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.304559 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 18682. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.436676687334094, 'next_transition': 18714}.
<a id="trace-18683"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 18683): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.304559 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 18683. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.436676687334094, 'next_transition': 18714}.
<a id="trace-18684"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (trace 18684): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.304559 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 18684. Next observer evidence: {'until': 70.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6244999999999976, 'next_transition': 18931}.
<a id="trace-18685"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (trace 18685): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.304559 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 18685. Next observer evidence: {'until': 70.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6244999999999976, 'next_transition': 18931}.
<a id="trace-18714"></a>
<a id="trace-18716"></a>
<a id="trace-18756"></a>
<a id="trace-18799"></a>
<a id="trace-18912"></a>
- 67.25s–70.25s (×5), actor 5, squad 0 (trace 18714): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 18685. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.6279304481078138, 'next_transition': 18756}.
<a id="trace-18931"></a>
- 70.40s–70.40s (×1), actor 9, squad 1 (trace 18931): NeedSupport. Knowledge: actor memory at 70.00s, trace 18844. Next observer evidence: {'until': 72, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0008000000000016882, 'next_transition': 19193}.
<a id="trace-18966"></a>
- 70.90s–70.90s (×1), actor 1, squad 0 (trace 18966): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 70.00s, trace 18839. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079937149326832, 'next_transition': 18971}.
<a id="trace-18971"></a>
<a id="trace-18973"></a>
- 71.25s–71.25s (×2), actor 5, squad 0 (trace 18971): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 18842. Next observer evidence: {'until': 71.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5119828369106756, 'next_transition': 19007}.
<a id="trace-19007"></a>
- 71.90s–71.90s (×1), actor 1, squad 0 (trace 19007): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 18839. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.008011617493917, 'next_transition': 19254}.
<a id="trace-19012"></a>
- 71.90s–71.90s (×1), actor 1, squad 0 (trace 19012): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 18839. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.008011617493917, 'next_transition': 19254}.
<a id="trace-19013"></a>
- 71.90s–71.90s (×1), actor 1, squad 0 (trace 19013): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 18839. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.008011617493917, 'next_transition': 19254}.
<a id="trace-19193"></a>
- 72.00s–72.00s (×1), actor 9, squad 1 (trace 19193): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 18844. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-19194"></a>
- 72.00s–72.00s (×1), actor 9, squad 1 (trace 19194): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 18844. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-19254"></a>
<a id="trace-19256"></a>
- 72.25s–72.25s (×2), actor 5, squad 0 (trace 19254): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 18842. Next observer evidence: None.
<a id="trace-19267"></a>
- 72.30s–72.30s (×1), actor 5, squad 0 (trace 19267): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 72.30s, trace 19267. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.937751048416288, 'next_transition': 19312}.
<a id="trace-19312"></a>
<a id="trace-19348"></a>
<a id="trace-19440"></a>
- 73.25s–75.25s (×3), actor 5, squad 0 (trace 19312): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.30s, trace 19267. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.078689710813055, 'next_transition': 19348}.
<a id="trace-19457"></a>
- 75.65s–75.65s (×1), actor 1, squad 0 (trace 19457): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 19379. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0735389096312917, 'next_transition': 19475}.
<a id="trace-19475"></a>
- 76.25s–76.25s (×1), actor 5, squad 0 (trace 19475): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 19382. Next observer evidence: {'until': 76.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7991552968977309, 'next_transition': 19503}.
<a id="trace-19503"></a>
- 76.90s–76.90s (×1), actor 1, squad 0 (trace 19503): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 75.00s, trace 19379. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.577773563199329, 'next_transition': 19542}.
<a id="trace-19542"></a>
<a id="trace-19569"></a>
<a id="trace-19694"></a>
- 78.25s–81.25s (×3), actor 5, squad 0 (trace 19542): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 19382. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.235195790622827, 'next_transition': 19569}.
<a id="trace-19703"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 19703): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575111135166345, 'next_transition': 20284}.
<a id="trace-20085"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 20085): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575111135166345, 'next_transition': 20284}.
<a id="trace-20086"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 20086): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575111135166345, 'next_transition': 20284}.
<a id="trace-20270"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 20270): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575111135166345, 'next_transition': 20284}.
<a id="trace-20271"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 20271): Assaulting. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575111135166345, 'next_transition': 20284}.
<a id="trace-20284"></a>
- 81.50s–81.50s (×1), actor 1, squad 0 (trace 20284): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11811267353675452, 'next_transition': 20642}.
<a id="trace-20289"></a>
- 81.50s–81.50s (×1), actor 1, squad 0 (trace 20289): MoveTactically. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11811267353675452, 'next_transition': 20642}.
<a id="trace-20290"></a>
- 81.50s–81.50s (×1), actor 1, squad 0 (trace 20290): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11811267353675452, 'next_transition': 20642}.
<a id="trace-20642"></a>
- 81.75s–81.75s (×1), actor 1, squad 0 (trace 20642): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20736}.
<a id="trace-20643"></a>
- 81.75s–81.75s (×1), actor 1, squad 0 (trace 20643): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 19594. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20736}.
<a id="trace-20736"></a>
<a id="trace-20789"></a>
<a id="trace-20831"></a>
<a id="trace-20917"></a>
<a id="trace-20943"></a>
<a id="trace-20967"></a>
<a id="trace-20992"></a>
<a id="trace-21100"></a>
<a id="trace-21124"></a>
<a id="trace-21199"></a>
<a id="trace-21278"></a>
- 82.25s–95.25s (×11), actor 5, squad 0 (trace 20736): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 19597. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20789}.
<a id="trace-21314"></a>
- 96.25s–96.25s (×1), actor 1, squad 0 (trace 21314): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 21220. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937479912964637, 'next_transition': 21444}.
<a id="trace-21315"></a>
- 96.25s–96.25s (×1), actor 1, squad 0 (trace 21315): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 21220. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937479912964637, 'next_transition': 21444}.
<a id="trace-21444"></a>
<a id="trace-21475"></a>
<a id="trace-21513"></a>
<a id="trace-21599"></a>
<a id="trace-21629"></a>
<a id="trace-21678"></a>
<a id="trace-21706"></a>
- 97.25s–103.25s (×7), actor 5, squad 0 (trace 21444): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 21222. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6206363852287318, 'next_transition': 21475}.
<a id="trace-21727"></a>
- 104.05s–104.05s (×1), actor 1, squad 0 (trace 21727): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 21536. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150191143688891, 'next_transition': 21736}.
<a id="trace-21736"></a>
<a id="trace-21835"></a>
<a id="trace-21870"></a>
<a id="trace-21944"></a>
<a id="trace-22060"></a>
<a id="trace-22084"></a>
<a id="trace-22110"></a>
<a id="trace-22134"></a>
<a id="trace-22163"></a>
- 104.25s–114.25s (×9), actor 5, squad 0 (trace 21736): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 21538. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8112382852240614, 'next_transition': 21835}.
<a id="trace-22170"></a>
- 114.45s–114.45s (×1), actor 1, squad 0 (trace 22170): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 22000. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22268}.
<a id="trace-22171"></a>
- 114.45s–114.45s (×1), actor 1, squad 0 (trace 22171): MoveTactically. Knowledge: actor memory at 110.00s, trace 22000. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22268}.
<a id="trace-22172"></a>
- 114.45s–114.45s (×1), actor 1, squad 0 (trace 22172): . Knowledge: actor memory at 110.00s, trace 22000. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22268}.
<a id="trace-22268"></a>
- 115.25s–115.25s (×1), actor 5, squad 0 (trace 22268): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 22196. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22285}.
<a id="trace-22285"></a>
- 115.45s–115.45s (×1), actor 1, squad 0 (trace 22285): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 22194. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22409}.
<a id="trace-22409"></a>
<a id="trace-22452"></a>
<a id="trace-22488"></a>
<a id="trace-22514"></a>
<a id="trace-22601"></a>
<a id="trace-22640"></a>
- 116.25s–121.25s (×6), actor 5, squad 0 (trace 22409): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 22196. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237388932439166, 'next_transition': 22452}.
<a id="trace-1916"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (events line 1916): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450004803265188, 'next_transition': 22679}.
<a id="trace-22657"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 22657): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.547578 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 22657. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450004803265188, 'next_transition': 22679}.
<a id="trace-22658"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 22658): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.547578 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 22658. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450004803265188, 'next_transition': 22679}.
<a id="trace-22679"></a>
<a id="trace-22709"></a>
<a id="trace-22737"></a>
<a id="trace-22822"></a>
<a id="trace-22852"></a>
- 122.25s–126.25s (×5), actor 5, squad 0 (trace 22679): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 22658. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0889888830158228, 'next_transition': 22709}.
<a id="trace-22871"></a>
- 126.85s–126.85s (×1), actor 1, squad 0 (trace 22871): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 22761. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1320725836841244, 'next_transition': 22998}.
<a id="trace-22998"></a>
- 127.25s–127.25s (×1), actor 5, squad 0 (trace 22998): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 22763. Next observer evidence: {'until': 127.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23022}.
<a id="trace-23022"></a>
- 127.85s–127.85s (×1), actor 1, squad 0 (trace 23022): received platoon directive. Knowledge: actor memory at 125.00s, trace 22761. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23131}.
<a id="trace-23131"></a>
<a id="trace-23175"></a>
<a id="trace-23292"></a>
<a id="trace-23324"></a>
- 128.30s–132.30s (×4), actor 5, squad 0 (trace 23131): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 22763. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7454771933725655, 'next_transition': 23175}.
<a id="trace-23384"></a>
- 134.05s–134.05s (×1), actor 1, squad 0 (trace 23384): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 23199. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749508317722113, 'next_transition': 23594}.
<a id="trace-23594"></a>
- 134.30s–134.30s (×1), actor 5, squad 0 (trace 23594): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 23201. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5833363648634213, 'next_transition': 23815}.
<a id="trace-23601"></a>
- 134.30s–134.30s (×1), actor 1, squad 0 (trace 23601): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 23199. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5833363648634213, 'next_transition': 23815}.
<a id="trace-23815"></a>
<a id="trace-23845"></a>
<a id="trace-23871"></a>
<a id="trace-23962"></a>
<a id="trace-23992"></a>
<a id="trace-24054"></a>
- 137.30s–143.30s (×6), actor 5, squad 0 (trace 23815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 23674. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8439895298824784, 'next_transition': 23845}.
<a id="trace-24081"></a>
- 144.25s–144.25s (×1), actor 1, squad 0 (trace 24081): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 140.00s, trace 23889. Next observer evidence: None.
<a id="trace-24167"></a>
<a id="trace-24257"></a>
- 144.30s–145.30s (×2), actor 5, squad 0 (trace 24167): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 23891. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.590628773385143, 'next_transition': 24257}.
<a id="trace-24384"></a>
- 149.05s–149.05s (×1), actor 1, squad 0 (trace 24384): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 24185. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750333577816683, 'next_transition': 24573}.
<a id="trace-24563"></a>
- 149.05s–149.05s (×1), actor 1, squad 0 (trace 24563): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 145.00s, trace 24185. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750333577816683, 'next_transition': 24573}.
<a id="trace-24573"></a>
- 149.30s–149.30s (×1), actor 5, squad 0 (trace 24573): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 24187. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4041725889162327, 'next_transition': 24777}.
<a id="trace-24580"></a>
- 149.30s–149.30s (×1), actor 1, squad 0 (trace 24580): recovering: retry accepted element corridor in column. Knowledge: actor memory at 145.00s, trace 24185. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4041725889162327, 'next_transition': 24777}.
<a id="trace-24759"></a>
- 149.30s–149.30s (×1), actor 1, squad 0 (trace 24759): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 145.00s, trace 24185. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4041725889162327, 'next_transition': 24777}.
<a id="trace-24777"></a>
- 149.80s–149.80s (×1), actor 1, squad 0 (trace 24777): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 145.00s, trace 24185. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24889}.
<a id="trace-24889"></a>
<a id="trace-24925"></a>
<a id="trace-25117"></a>
<a id="trace-25140"></a>
<a id="trace-25164"></a>
<a id="trace-25253"></a>
<a id="trace-25281"></a>
- 151.30s–161.30s (×7), actor 5, squad 0 (trace 24889): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 24784. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24925}.
<a id="trace-2432"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 2432): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25360}.
<a id="trace-25335"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 25335): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.706722 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 25335. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25360}.
<a id="trace-25336"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 25336): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.706722 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 25336. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25360}.
<a id="trace-25360"></a>
<a id="trace-25443"></a>
<a id="trace-25472"></a>
<a id="trace-25499"></a>
<a id="trace-25540"></a>
- 164.30s–168.30s (×5), actor 5, squad 0 (trace 25360): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 25336. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25443}.
<a id="trace-25555"></a>
- 168.90s–168.90s (×1), actor 1, squad 0 (trace 25555): received platoon directive. Knowledge: actor memory at 165.00s, trace 25378. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25746}.
<a id="trace-25736"></a>
- 168.90s–168.90s (×1), actor 1, squad 0 (trace 25736): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 165.00s, trace 25378. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25746}.
<a id="trace-25746"></a>
<a id="trace-25891"></a>
<a id="trace-25961"></a>
<a id="trace-26056"></a>
<a id="trace-26083"></a>
<a id="trace-26148"></a>
- 169.30s–178.30s (×6), actor 5, squad 0 (trace 25746): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 25380. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3150670929848327, 'next_transition': 25891}.
<a id="trace-26156"></a>
- 178.45s–178.45s (×1), actor 1, squad 0 (trace 26156): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 175.00s, trace 25988. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26173}.
<a id="trace-26158"></a>
- 178.45s–178.45s (×1), actor 1, squad 0 (trace 26158): NeedSupport. Knowledge: actor memory at 175.00s, trace 25988. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26173}.
<a id="trace-26173"></a>
- 179.05s–179.05s (×1), actor 1, squad 0 (trace 26173): Reorganise: completed/failed drill. Knowledge: actor memory at 175.00s, trace 25988. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26456}.
<a id="trace-26176"></a>
- 179.05s–179.05s (×1), actor 1, squad 0 (trace 26176): ReactToContact: cover and return fire. Knowledge: actor memory at 175.00s, trace 25988. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26456}.
<a id="trace-26177"></a>
- 179.05s–179.05s (×1), actor 1, squad 0 (trace 26177): Reorganise complete: known contact. Knowledge: actor memory at 175.00s, trace 25988. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26456}.
<a id="trace-26456"></a>
<a id="trace-26545"></a>
<a id="trace-26605"></a>
- 179.30s–182.30s (×3), actor 5, squad 0 (trace 26456): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 25990. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250000000000014, 'next_transition': 26545}.
<a id="trace-26627"></a>
- 183.25s–183.25s (×1), actor 1, squad 0 (trace 26627): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 180.00s, trace 26484. Next observer evidence: None.
<a id="trace-26631"></a>
- 183.30s–183.30s (×1), actor 5, squad 0 (trace 26631): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 26485. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8875769747964896, 'next_transition': 26652}.
<a id="trace-26652"></a>
- 184.25s–184.25s (×1), actor 1, squad 0 (trace 26652): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 180.00s, trace 26484. Next observer evidence: None.
<a id="trace-26654"></a>
<a id="trace-26736"></a>
<a id="trace-26757"></a>
<a id="trace-26783"></a>
<a id="trace-26811"></a>
- 184.30s–188.30s (×5), actor 5, squad 0 (trace 26654): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 26485. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9584433317103311, 'next_transition': 26736}.
<a id="trace-26822"></a>
- 188.50s–188.50s (×1), actor 1, squad 0 (trace 26822): MoveTactically. Knowledge: actor memory at 185.00s, trace 26676. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3646442051481305, 'next_transition': 26892}.
<a id="trace-26823"></a>
- 188.50s–188.50s (×1), actor 1, squad 0 (trace 26823): traveling overwatch. Knowledge: actor memory at 185.00s, trace 26676. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3646442051481305, 'next_transition': 26892}.
<a id="trace-26824"></a>
- 188.50s–188.50s (×1), actor 1, squad 0 (trace 26824): current contact unknown for 10 s. Knowledge: actor memory at 185.00s, trace 26676. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3646442051481305, 'next_transition': 26892}.
<a id="trace-26892"></a>
<a id="trace-26978"></a>
- 189.30s–190.30s (×2), actor 5, squad 0 (trace 26892): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 26677. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8559722412845756, 'next_transition': 26978}.
<a id="trace-2752"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (events line 2752): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27003"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 27003): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 190.85s, trace 27003. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42001426795870817, 'next_transition': 27015}.
<a id="trace-27004"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 27004): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 190.85s, trace 27004. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42001426795870817, 'next_transition': 27015}.
<a id="trace-27015"></a>
<a id="trace-27045"></a>
- 191.30s–192.30s (×2), actor 5, squad 0 (trace 27015): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 27004. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8941920508916287, 'next_transition': 27045}.
<a id="trace-27089"></a>
- 194.05s–194.05s (×1), actor 1, squad 0 (trace 27089): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 26918. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10966790779439528, 'next_transition': 27338}.
<a id="trace-27090"></a>
- 194.05s–194.05s (×1), actor 1, squad 0 (trace 27090): bounding overwatch. Knowledge: actor memory at 190.00s, trace 26918. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10966790779439528, 'next_transition': 27338}.
<a id="trace-27091"></a>
- 194.05s–194.05s (×1), actor 1, squad 0 (trace 27091): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 26918. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10966790779439528, 'next_transition': 27338}.
<a id="trace-27338"></a>
<a id="trace-27421"></a>
<a id="trace-27479"></a>
- 194.30s–197.30s (×3), actor 5, squad 0 (trace 27338): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 27004. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6627979472843352, 'next_transition': 27421}.
<a id="trace-27488"></a>
- 197.65s–197.65s (×1), actor 1, squad 0 (trace 27488): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 195.00s, trace 27362. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889999783439119, 'next_transition': 27554}.
<a id="trace-27489"></a>
- 197.65s–197.65s (×1), actor 1, squad 0 (trace 27489): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 27362. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889999783439119, 'next_transition': 27554}.
<a id="trace-27554"></a>
<a id="trace-27578"></a>
<a id="trace-27661"></a>
- 198.30s–200.30s (×3), actor 5, squad 0 (trace 27554): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 27363. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5199991974337332, 'next_transition': 27578}.
<a id="trace-27670"></a>
- 200.35s–200.35s (×1), actor 5, squad 0 (trace 27670): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 200.35s, trace 27670. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750046514217027, 'next_transition': 27689}.
<a id="trace-27689"></a>
<a id="trace-27733"></a>
<a id="trace-27751"></a>
<a id="trace-27830"></a>
<a id="trace-27851"></a>
<a id="trace-27872"></a>
<a id="trace-27892"></a>
<a id="trace-27990"></a>
<a id="trace-28058"></a>
<a id="trace-28081"></a>
<a id="trace-28159"></a>
<a id="trace-28185"></a>
<a id="trace-28226"></a>
- 201.30s–217.30s (×13), actor 5, squad 0 (trace 27689): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.35s, trace 27670. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149992382927302, 'next_transition': 27733}.
<a id="trace-28234"></a>
- 217.70s–217.70s (×1), actor 1, squad 0 (trace 28234): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 28101. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28249}.
<a id="trace-28249"></a>
<a id="trace-28275"></a>
<a id="trace-28356"></a>
<a id="trace-28376"></a>
<a id="trace-28406"></a>
<a id="trace-28448"></a>
<a id="trace-28545"></a>
<a id="trace-28566"></a>
<a id="trace-28646"></a>
<a id="trace-28733"></a>
<a id="trace-28755"></a>
- 218.30s–231.30s (×11), actor 5, squad 0 (trace 28249): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 28102. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28275}.
<a id="trace-3090"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (events line 3090): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28803}.
<a id="trace-28780"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 28780): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 28677. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28803}.
<a id="trace-28787"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 28787): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.196935 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 28787. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28803}.
<a id="trace-28788"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 28788): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.196935 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 232.30s, trace 28788. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28803}.
<a id="trace-28803"></a>
<a id="trace-28827"></a>
<a id="trace-28911"></a>
<a id="trace-28938"></a>
<a id="trace-28975"></a>
- 233.30s–237.30s (×5), actor 5, squad 0 (trace 28803): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.30s, trace 28788. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28827}.
<a id="trace-28994"></a>
- 238.25s–238.25s (×1), actor 1, squad 0 (trace 28994): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 235.00s, trace 28851. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937486915851282, 'next_transition': 29150}.
<a id="trace-28995"></a>
- 238.25s–238.25s (×1), actor 1, squad 0 (trace 28995): MoveTactically. Knowledge: actor memory at 235.00s, trace 28851. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937486915851282, 'next_transition': 29150}.
<a id="trace-28996"></a>
- 238.25s–238.25s (×1), actor 1, squad 0 (trace 28996): . Knowledge: actor memory at 235.00s, trace 28851. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937486915851282, 'next_transition': 29150}.
<a id="trace-29150"></a>
<a id="trace-29233"></a>
<a id="trace-29265"></a>
- 239.30s–241.30s (×3), actor 5, squad 0 (trace 29150): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 28852. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4974144418463444, 'next_transition': 29233}.
<a id="trace-29276"></a>
- 241.45s–241.45s (×1), actor 1, squad 0 (trace 29276): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 240.00s, trace 29168. Next observer evidence: None.
<a id="trace-29347"></a>
- 241.45s–241.45s (×1), actor 1, squad 0 (trace 29347): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 240.00s, trace 29168. Next observer evidence: None.
<a id="trace-29357"></a>
- 241.50s–241.50s (×1), actor 1, squad 0 (trace 29357): recovering: retry accepted element corridor in column. Knowledge: actor memory at 240.00s, trace 29168. Next observer evidence: None.
<a id="trace-29428"></a>
- 241.50s–241.50s (×1), actor 1, squad 0 (trace 29428): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 240.00s, trace 29168. Next observer evidence: None.
<a id="trace-29435"></a>
- 241.55s–241.55s (×1), actor 1, squad 0 (trace 29435): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 240.00s, trace 29168. Next observer evidence: {'until': 242.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5179659045004797, 'next_transition': 29459}.
<a id="trace-29459"></a>
<a id="trace-29496"></a>
<a id="trace-29583"></a>
- 242.30s–245.30s (×3), actor 5, squad 0 (trace 29459): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 29169. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1894379408989775, 'next_transition': 29496}.
<a id="trace-3235"></a>
- 245.35s–245.35s (×1), actor 5, squad 0 (events line 3235): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29591"></a>
- 245.35s–245.35s (×1), actor 5, squad 0 (trace 29591): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.206529 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 245.35s, trace 29591. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29605}.
<a id="trace-29592"></a>
- 245.35s–245.35s (×1), actor 5, squad 0 (trace 29592): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.206529 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 245.35s, trace 29592. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29605}.
<a id="trace-29605"></a>
<a id="trace-29628"></a>
<a id="trace-29652"></a>
- 246.30s–248.30s (×3), actor 5, squad 0 (trace 29605): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.35s, trace 29592. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29628}.
<a id="trace-29661"></a>
- 248.40s–248.40s (×1), actor 1, squad 0 (trace 29661): ReactToContact: cover and return fire. Knowledge: actor memory at 245.00s, trace 29516. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.933538656137601, 'next_transition': 29890}.
<a id="trace-29662"></a>
- 248.40s–248.40s (×1), actor 1, squad 0 (trace 29662): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 245.00s, trace 29516. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.933538656137601, 'next_transition': 29890}.
<a id="trace-29890"></a>
<a id="trace-29946"></a>
- 250.30s–251.30s (×2), actor 5, squad 0 (trace 29890): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 29828. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7759020631809597, 'next_transition': 29946}.
<a id="trace-29960"></a>
- 251.40s–251.40s (×1), actor 1, squad 0 (trace 29960): Withdraw to received rally. Knowledge: actor memory at 250.00s, trace 29827. Next observer evidence: {'until': 281.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.958737071946481, 'next_transition': None}.
<a id="trace-29961"></a>
- 251.40s–251.40s (×1), actor 1, squad 0 (trace 29961): rearward bound: one stationary suppressing element. Knowledge: actor memory at 250.00s, trace 29827. Next observer evidence: {'until': 281.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 5.958737071946481, 'next_transition': None}.

## Net delivery

242 matched order/radio deliveries; 161 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.634s; maximum 6.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2287: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2291: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2292: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2293: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2294: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2295: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2296: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2297: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2298: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2299: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3450: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3459: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3460: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3461: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3462: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3463: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3464: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3465: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3466: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3467: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3468: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3470: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5678: estimate 15.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5679: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5680: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5689: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5690: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5691: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5692: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5693: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5694: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5695: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5696: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5697: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5698: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5699: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5700: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6730: estimate 15.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6731: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6732: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6733: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6736: estimate 15.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6741: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6742: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6743: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6744: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6745: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6746: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6747: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6748: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6749: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6750: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6751: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6752: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 10903: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10904: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10905: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10906: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10908: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10909: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 10912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 10913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10914: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10915: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10916: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10917: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10918: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10919: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10920: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10921: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10922: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10923: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 10924: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 10925: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 11146: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 11147: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 11148: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 11149: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 11208: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 11209: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 11210: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 11211: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 11212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 11213: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 11214: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 11215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 11216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 11217: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 11218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11219: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11220: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11221: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11222: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 11223: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11224: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11225: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 11226: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11227: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11228: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 11229: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 11230: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 13120: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 13121: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 13122: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 13123: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 13124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 13125: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 13126: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 13127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 13128: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 13129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 13130: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 13131: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 13132: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 13133: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 13134: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 13135: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 13136: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 13137: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 13138: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 13139: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 13140: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 13141: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 14687: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 14688: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 14689: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 14690: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 14691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 14692: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 14693: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 14694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 14695: estimate 16.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 14696: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 14697: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 14698: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 14699: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 14700: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 14701: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 14702: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 14703: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 14704: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 14705: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 14706: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 14707: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 14708: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 16897: estimate 15.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16898: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 16899: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16900: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16902: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16903: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16905: estimate 16.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 16906: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16907: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16908: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16909: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16910: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16911: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16912: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16913: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16914: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16915: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16916: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16917: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 17551: estimate 15.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 17552: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 17553: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 17554: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 17555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 17556: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 17557: estimate 16.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 17558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 17559: estimate 16.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 17560: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 17561: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 17562: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 17563: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 17564: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 17565: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 17566: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 17567: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 17568: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 17569: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 17570: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 17571: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 18526: estimate 15.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 18527: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 18528: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 18529: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 18530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 18531: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 18532: estimate 16.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 18533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 18534: estimate 16.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 18535: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 18536: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 18537: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 18538: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 18539: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 18540: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 18541: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 18542: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 18543: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 18544: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 18545: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 18682: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 18683: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 18684: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 18685: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 18839: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 18840: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 18841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 18842: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 18843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 18844: estimate 16.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 18845: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 18846: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 18847: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 18848: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 18849: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 18850: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 18851: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 18852: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 18853: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 18854: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 18855: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.30s leader 5, trace 19267: estimate 15.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 19379: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 19380: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 19381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 19382: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 19383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 19384: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 19385: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 19386: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 19387: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 19388: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 19389: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 19390: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 19391: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 19392: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 19393: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 19394: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 19594: estimate 15.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 19595: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 19596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 19597: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 19598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 19599: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 19600: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 19601: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 19602: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 19603: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 19604: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 19605: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 19606: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 19607: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 19608: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 19609: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 20857: estimate 15.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 20858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 20859: estimate 15.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 20860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 20861: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 20862: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 20863: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 20864: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 20865: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 20866: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 20867: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 20868: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 20869: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 20870: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 20871: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 21037: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 21038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 21039: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 21040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 21041: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 21042: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 21043: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 21044: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 21045: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 21046: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 21047: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 21048: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 21049: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 21050: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 21051: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 21220: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 21221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 21222: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 21223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 21224: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 21225: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 21226: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 21227: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 21228: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 21229: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 21230: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 21231: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 21232: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 21233: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 21234: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 21536: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 21537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 21538: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 21539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 21540: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 21541: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 21542: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 21543: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 21544: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 21545: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 21546: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 21547: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 21548: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 21549: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 21550: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 21766: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 21767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 21768: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 21769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 21770: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 21771: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 21772: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 21773: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 21774: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 21775: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 21776: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 21777: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 21778: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 21779: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 21780: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 22000: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 22001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 22002: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 22003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 22004: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 22005: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 22006: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 22007: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 22008: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 22009: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 22010: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 22011: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 22012: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 22013: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 22014: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 22194: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 22195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 22196: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 22197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 22198: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 22199: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 22200: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 22201: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 22202: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 22203: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 22204: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 22205: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 22206: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 22207: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 22208: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 22532: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 22533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 22534: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 22535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 22536: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 22537: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 22538: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 22539: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 22540: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 22541: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 22542: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 22543: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 22544: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 22545: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 22546: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 22657: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 22658: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 22761: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 22762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 22763: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 22764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 22765: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 22766: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 22767: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 22768: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 22769: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 22770: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 22771: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 22772: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 22773: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 22774: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 22775: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 23199: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 23200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 23201: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 23202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 23203: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 23204: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 23205: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 23206: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 23207: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 23208: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 23209: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 23210: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 23211: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 23212: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 23213: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 23672: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 23673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 23674: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 23675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 23676: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 23677: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 23678: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 23679: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 23680: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 23681: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 23682: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 23683: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 23684: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 23685: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 23686: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 23889: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 23890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 23891: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 23892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 23893: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 23894: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 23895: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 23896: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 23897: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 23898: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 23899: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 23900: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 23901: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 23902: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 23903: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 24185: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 24186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 24187: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 24188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 24189: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 24190: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 24191: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 24192: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 24193: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 24194: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 24195: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 24196: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 24197: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 24198: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 24199: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24782: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 24783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 24784: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 24785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24786: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24787: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24788: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24789: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24790: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24791: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 24792: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24793: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 24794: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 24795: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 24796: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 25012: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 25013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 25014: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 25015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 25016: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 25017: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 25018: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 25019: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 25020: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 25021: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 25022: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 25023: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 25024: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 25025: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 25026: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 25190: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 25191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 25192: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 25193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 25194: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 25195: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 25196: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 25197: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 25198: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 25199: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 25200: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 25201: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 25202: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 25203: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 25204: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 25335: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 25336: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 25378: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 25379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 25380: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 25381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 25382: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 25383: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 25384: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 25385: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 25386: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 25387: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 25388: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 25389: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 25390: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 25391: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 25392: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 25763: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 25764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 25765: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 25766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25767: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 25768: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25769: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25770: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 25771: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25772: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 25773: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25774: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 25775: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 25776: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 25777: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 25988: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 25989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 25990: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 25991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 25992: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 25993: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 25994: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 25995: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 25996: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 25997: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 25998: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 25999: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 26000: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 26001: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 26002: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 26484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 26485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 26486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 26487: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 26488: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 26489: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 26490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 26491: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 26492: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 26493: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 26494: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 26495: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 26496: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 26497: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 26676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 26677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 26678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 26679: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 26680: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 26681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 26682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 26683: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 26684: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 26685: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 26686: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 26687: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 26688: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 26689: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 26918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 26919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 26920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 26921: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 26922: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 26923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 26924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 26925: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 26926: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 26927: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 26928: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 26929: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 26930: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 26931: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 27003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 27004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 27362: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 27363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 27364: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 27365: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 27366: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 27367: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 27368: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 27369: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 27370: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 27371: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 27372: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 27373: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 27374: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 27602: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 27603: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27604: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 27605: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27606: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27607: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 27608: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27609: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 27610: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27611: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27612: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 27613: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 27614: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.35s leader 5, trace 27670: estimate 14.14; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 27773: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 27774: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 27775: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 27776: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 27777: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 27778: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 27779: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 27780: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 27781: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 27782: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 27783: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 27784: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 27785: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 27931: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 27932: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 27933: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 27934: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 27935: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 27936: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 27937: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 27938: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 27939: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 27940: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 27941: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 27942: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 27943: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 28101: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 28102: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28103: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 28104: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28105: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 28106: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 28107: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28108: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 28109: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28110: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28111: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 28112: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 28113: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 28293: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 28294: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28295: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 28296: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28297: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 28298: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28299: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28300: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 28301: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28302: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28303: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 28304: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 28305: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28483: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 28484: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 28485: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 28486: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 28487: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 28488: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 28489: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 28490: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 28491: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 28492: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 28493: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 28494: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 28495: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 28676: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 28677: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 28678: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 28679: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 28680: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 28681: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 28682: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 28683: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 28684: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 28685: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 28686: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 28687: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 28688: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 28787: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 28788: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 28851: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 28852: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28853: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 28854: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28855: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28856: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28857: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28858: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28859: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28860: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28861: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 28862: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 28863: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 29168: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 29169: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29170: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 29171: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29172: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 29173: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 29174: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29175: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 29176: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29177: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29178: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 29179: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 29180: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 29516: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29517: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29518: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29519: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29520: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 29521: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 29522: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29523: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 29524: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29525: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29526: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 29527: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 29528: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.35s leader 5, trace 29591: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.35s leader 5, trace 29592: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 29827: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 29828: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 29829: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 29830: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 29831: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 29832: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 29833: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 29834: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 29835: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 29836: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 29837: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 29838: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 29839: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 30111: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 30112: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 30113: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 30114: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 30115: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 30116: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 30117: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 30118: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 30119: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 30120: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 30121: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 30122: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 30252: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30253: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 30254: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30255: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 30256: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 30257: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30258: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 30259: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30260: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30261: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 30262: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 30263: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 30390: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 30391: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 30392: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30393: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30394: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 30395: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30396: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 30397: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30398: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30399: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 30400: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 30401: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30555: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30556: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 30557: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30558: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30559: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 30560: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30561: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30562: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30563: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30564: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 30565: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 30566: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30738: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30739: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 30740: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30741: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30742: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 30743: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30744: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30745: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30746: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30747: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 30748: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 30749: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 30904: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 30905: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 30906: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 30907: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 30908: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 30909: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 30910: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 30911: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 30912: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 30913: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 30914: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 30915: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 31071: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 31072: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 31073: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 31074: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 31075: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 31076: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 31077: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 31078: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 31079: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 31080: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 31081: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 31082: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 31250: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 31251: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 31252: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31253: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31254: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 31255: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31256: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 31257: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31258: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31259: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 31260: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 31261: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 31430: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 31431: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 31432: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31433: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31434: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 31435: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31436: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 31437: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31438: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31439: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 31440: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 31441: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 31600: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 31601: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 31602: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 31603: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 31604: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 31605: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 31606: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 31607: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 31608: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 31609: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 31610: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 31611: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 31770: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 31771: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 31772: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 31773: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 31774: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 31775: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 31776: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 31777: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 31778: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 31779: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 31780: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 31781: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 31946: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 31947: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 31948: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 31949: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 31950: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 31951: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 31952: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 31953: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 31954: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 31955: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 31956: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 31957: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 32128: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 32129: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 32130: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 32131: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 32132: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 32133: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 32134: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 32135: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 32136: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 32137: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 32138: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 32139: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 32302: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 32303: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 32304: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32305: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32306: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 32307: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32308: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 32309: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32310: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32311: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 32312: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 32313: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 32463: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 32464: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 32465: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 32466: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 32467: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 32468: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 32469: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 32470: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 32471: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 32472: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 32473: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 32474: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 32642: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 32643: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 32644: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 32645: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 32646: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 32647: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 32648: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 32649: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 32650: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 32651: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 32652: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 32653: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 32826: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 32827: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 32828: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 32829: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 32830: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 32831: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 32832: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 32833: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 32834: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 32835: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 32836: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 32837: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 32998: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 32999: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 33000: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 33001: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 33002: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 33003: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 33004: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 33005: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 33006: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 33007: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 33008: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 33009: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 33159: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 33160: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 33161: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 33162: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 33163: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 33164: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 33165: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 33166: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 33167: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 33168: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 33169: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 33170: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 33337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 33338: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 33339: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33340: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33341: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 33342: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33343: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 33344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33345: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 33347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 33348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 33517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 33518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 33519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 33520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 33521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 33522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 33523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 33524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 33525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 33526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 33527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 33528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 33691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 33692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 33693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 33694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 33695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 33696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 33697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 33698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 33699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 33700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 33701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 33702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Dane killed in action
- 1: Voss incapacitated
- 1: Ellis incapacitated
- 1: Ash killed in action
- 1: Moss killed in action
- 1: Vale incapacitated
- 1: Cole killed in action
- 1: Soren killed in action
- 1: Tern incapacitated
- 1: Reed killed in action
- 1: Rook killed in action

## Outcome attribution

- 149.80s, evidence 24777: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24889}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 241.55s, evidence 29435: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 242.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5179659045004797, 'next_transition': 29459}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.35s, evidence 3235: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.35s, evidence 29591: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.206529 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29605}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.35s, evidence 29592: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.206529 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29605}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
