# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/19/107/good-azure/battle-107-1789674064323198754`

## Battle summary

**Ember** · 360 s · 265 shots.

### Turning points

- 18.4s, squad 4: contact (events line 240). First recorded contact.
- 26.5s, squad 0: withdrawal ([trace 6752](#trace-6752)). 46.5s, squad 0: took cover and returned fire.
- 46.3s, squad 0: help call ([trace 13313](#trace-13313)). 48.0s, squad 1: answered a neighbour with support by fire.
- 48.0s, squad 1: help answer ([trace 13503](#trace-13503)). 73.3s, squad 1: took cover and returned fire.
- 50.2s, squad 0: withdrawal ([trace 16473](#trace-16473)). 102.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 75.8s, squad 1: help call ([trace 18467](#trace-18467)). No completion observed before termination.
- 77.6s, squad 1: withdrawal ([trace 18555](#trace-18555)). 88.2s, squad 1: took cover and returned fire.
- 91.6s, squad 1: withdrawal ([trace 19675](#trace-19675)). 111.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 103.0s, squad 0: help answer ([trace 20612](#trace-20612)). 112.8s, squad 0: Withdraw to received rally.
- 112.8s, squad 0: withdrawal ([trace 22786](#trace-22786)). No completion observed before termination.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 31 shots, 4/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 24 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 140 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 70 shots, 1/4 lost.

### Decisions and attribution

At 50.9s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 16640](#trace-16640)), followed by 1 shots and 1 own casualties; estimate 13.6 against 2 distinct squad-reported contacts; At 77.6s, squad 1 chose broke contact ([trace 18555](#trace-18555)), followed by 0 shots and 1 own casualties; estimate 13.7 against 0 distinct squad-reported contacts; At 40.2s, squad 1 chose prepared a base of fire ([trace 9628](#trace-9628)), followed by 4 shots and 0 own casualties; estimate 13.1 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 815](#trace-815)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 817](#trace-817)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977327388840673, 'next_transition': 988}.

### Communication

215 matched deliveries (mean 0.48s, max 1.80s); 510 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.45s, squad 4, contact, evidence events line 240: First recorded contact; .
- 26.50s, squad 0, withdrawal, evidence 6752: BreakContact: believed ratio at least two without superiority; 46.5s, squad 0: took cover and returned fire.
- 46.30s, squad 0, help call, evidence 13313: NeedSupport; 48.0s, squad 1: answered a neighbour with support by fire.
- 48.00s, squad 1, help answer, evidence 13503: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 73.3s, squad 1: took cover and returned fire.
- 50.15s, squad 0, withdrawal, evidence 16473: BreakContact: believed ratio at least two without superiority; 102.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 75.75s, squad 1, help call, evidence 18467: NeedSupport; No completion observed before termination.
- 77.60s, squad 1, withdrawal, evidence 18555: BreakContact: believed ratio at least two without superiority; 88.2s, squad 1: took cover and returned fire.
- 91.55s, squad 1, withdrawal, evidence 19675: BreakContact: believed ratio at least two without superiority; 111.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 102.95s, squad 0, help answer, evidence 20612: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 112.8s, squad 0: Withdraw to received rally.
- 112.80s, squad 0, withdrawal, evidence 22786: Withdraw to received rally; No completion observed before termination.
- 117.55s, squad 1, withdrawal, evidence 22980: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915741010535207, 'next_transition': 686}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915741010535207, 'next_transition': 686}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915741010535207, 'next_transition': 686}.
<a id="trace-319"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 319): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505016902866537, 'next_transition': 105}.
<a id="trace-320"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 320): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505016902866537, 'next_transition': 105}.
<a id="trace-321"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 321): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.505016902866537, 'next_transition': 105}.
<a id="trace-686"></a>
<a id="trace-688"></a>
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-751"></a>
<a id="trace-753"></a>
<a id="trace-779"></a>
<a id="trace-781"></a>
<a id="trace-803"></a>
<a id="trace-805"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600042882246691, 'next_transition': 713}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977327388840673, 'next_transition': 988}.
<a id="trace-815"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 815): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 815. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
<a id="trace-816"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 816): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 816. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
<a id="trace-817"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 817): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 817. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977327388840673, 'next_transition': 988}.
<a id="trace-818"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 818): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 818. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977327388840673, 'next_transition': 988}.
<a id="trace-834"></a>
<a id="trace-836"></a>
<a id="trace-865"></a>
<a id="trace-867"></a>
<a id="trace-948"></a>
<a id="trace-950"></a>
<a id="trace-975"></a>
<a id="trace-977"></a>
<a id="trace-1063"></a>
<a id="trace-1065"></a>
<a id="trace-1111"></a>
<a id="trace-1113"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1220"></a>
<a id="trace-1222"></a>
<a id="trace-1265"></a>
<a id="trace-1267"></a>
<a id="trace-1287"></a>
<a id="trace-1289"></a>
<a id="trace-1306"></a>
<a id="trace-1308"></a>
<a id="trace-1400"></a>
<a id="trace-1402"></a>
<a id="trace-1419"></a>
<a id="trace-1421"></a>
<a id="trace-1442"></a>
<a id="trace-1444"></a>
<a id="trace-1465"></a>
<a id="trace-1467"></a>
<a id="trace-1497"></a>
<a id="trace-1499"></a>
<a id="trace-1515"></a>
<a id="trace-1517"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 818. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449803163100912, 'next_transition': 865}.
<a id="trace-979"></a>
<a id="trace-1067"></a>
<a id="trace-1115"></a>
<a id="trace-1117"></a>
<a id="trace-1224"></a>
<a id="trace-1226"></a>
<a id="trace-1269"></a>
<a id="trace-1271"></a>
<a id="trace-1310"></a>
<a id="trace-1312"></a>
<a id="trace-1404"></a>
<a id="trace-1406"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
<a id="trace-1446"></a>
<a id="trace-1448"></a>
<a id="trace-1501"></a>
<a id="trace-1503"></a>
<a id="trace-1934"></a>
<a id="trace-1936"></a>
<a id="trace-1956"></a>
<a id="trace-1958"></a>
<a id="trace-2245"></a>
<a id="trace-2247"></a>
<a id="trace-2330"></a>
<a id="trace-2332"></a>
<a id="trace-2368"></a>
<a id="trace-2370"></a>
<a id="trace-2397"></a>
<a id="trace-2399"></a>
<a id="trace-2426"></a>
<a id="trace-2428"></a>
<a id="trace-3742"></a>
<a id="trace-3744"></a>
<a id="trace-3872"></a>
<a id="trace-3874"></a>
<a id="trace-3934"></a>
<a id="trace-3936"></a>
<a id="trace-4937"></a>
<a id="trace-4939"></a>
<a id="trace-4999"></a>
<a id="trace-5001"></a>
<a id="trace-5488"></a>
<a id="trace-5490"></a>
<a id="trace-5543"></a>
<a id="trace-5545"></a>
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-6063"></a>
<a id="trace-6065"></a>
<a id="trace-6124"></a>
<a id="trace-6126"></a>
<a id="trace-6237"></a>
<a id="trace-6239"></a>
<a id="trace-6684"></a>
<a id="trace-6686"></a>
<a id="trace-7640"></a>
<a id="trace-7642"></a>
<a id="trace-7692"></a>
<a id="trace-7694"></a>
<a id="trace-7763"></a>
<a id="trace-7765"></a>
<a id="trace-7804"></a>
<a id="trace-7806"></a>
<a id="trace-7847"></a>
<a id="trace-7849"></a>
<a id="trace-7907"></a>
<a id="trace-7909"></a>
<a id="trace-8003"></a>
<a id="trace-8005"></a>
<a id="trace-8038"></a>
<a id="trace-8040"></a>
<a id="trace-8489"></a>
<a id="trace-8491"></a>
<a id="trace-8518"></a>
<a id="trace-8520"></a>
<a id="trace-8991"></a>
<a id="trace-8993"></a>
<a id="trace-9044"></a>
<a id="trace-9046"></a>
<a id="trace-9082"></a>
<a id="trace-9084"></a>
<a id="trace-9138"></a>
<a id="trace-9140"></a>
<a id="trace-9176"></a>
<a id="trace-9178"></a>
<a id="trace-9334"></a>
<a id="trace-9336"></a>
<a id="trace-9359"></a>
<a id="trace-9361"></a>
<a id="trace-9390"></a>
<a id="trace-9392"></a>
<a id="trace-9414"></a>
<a id="trace-9416"></a>
<a id="trace-9475"></a>
<a id="trace-9477"></a>
<a id="trace-9501"></a>
<a id="trace-9503"></a>
<a id="trace-9523"></a>
<a id="trace-9525"></a>
<a id="trace-12889"></a>
<a id="trace-12891"></a>
<a id="trace-12941"></a>
<a id="trace-12943"></a>
<a id="trace-12978"></a>
<a id="trace-12980"></a>
<a id="trace-13005"></a>
<a id="trace-13007"></a>
<a id="trace-13046"></a>
<a id="trace-13048"></a>
<a id="trace-13072"></a>
<a id="trace-13074"></a>
<a id="trace-13092"></a>
<a id="trace-13094"></a>
<a id="trace-13113"></a>
<a id="trace-13115"></a>
<a id="trace-13217"></a>
<a id="trace-13219"></a>
<a id="trace-13236"></a>
<a id="trace-13238"></a>
<a id="trace-13255"></a>
<a id="trace-13257"></a>
<a id="trace-13433"></a>
<a id="trace-13435"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13489"></a>
<a id="trace-13491"></a>
<a id="trace-16357"></a>
<a id="trace-16359"></a>
<a id="trace-16387"></a>
<a id="trace-16389"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16635"></a>
<a id="trace-16637"></a>
<a id="trace-16663"></a>
<a id="trace-16665"></a>
<a id="trace-16692"></a>
<a id="trace-16694"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16740"></a>
<a id="trace-16742"></a>
<a id="trace-16767"></a>
<a id="trace-16769"></a>
<a id="trace-16783"></a>
<a id="trace-16785"></a>
<a id="trace-16832"></a>
<a id="trace-16834"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16927"></a>
<a id="trace-16929"></a>
<a id="trace-16968"></a>
<a id="trace-16970"></a>
<a id="trace-16991"></a>
<a id="trace-16993"></a>
<a id="trace-17004"></a>
<a id="trace-17006"></a>
<a id="trace-17047"></a>
<a id="trace-17049"></a>
<a id="trace-17065"></a>
<a id="trace-17067"></a>
<a id="trace-17081"></a>
<a id="trace-17083"></a>
<a id="trace-17184"></a>
<a id="trace-17186"></a>
<a id="trace-17204"></a>
<a id="trace-17206"></a>
<a id="trace-17224"></a>
<a id="trace-17226"></a>
<a id="trace-17425"></a>
<a id="trace-17427"></a>
<a id="trace-17456"></a>
<a id="trace-17458"></a>
<a id="trace-17473"></a>
<a id="trace-17475"></a>
<a id="trace-17499"></a>
<a id="trace-17501"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
<a id="trace-17614"></a>
<a id="trace-17616"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17653"></a>
<a id="trace-17655"></a>
<a id="trace-17673"></a>
<a id="trace-17675"></a>
<a id="trace-17689"></a>
<a id="trace-17691"></a>
<a id="trace-17735"></a>
<a id="trace-17737"></a>
<a id="trace-17757"></a>
<a id="trace-17759"></a>
<a id="trace-17779"></a>
<a id="trace-17781"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17874"></a>
<a id="trace-17876"></a>
<a id="trace-17900"></a>
<a id="trace-17902"></a>
<a id="trace-17912"></a>
<a id="trace-17914"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17953"></a>
<a id="trace-17955"></a>
<a id="trace-18242"></a>
<a id="trace-18244"></a>
<a id="trace-18264"></a>
<a id="trace-18266"></a>
<a id="trace-18351"></a>
<a id="trace-18353"></a>
<a id="trace-18440"></a>
<a id="trace-18442"></a>
<a id="trace-18464"></a>
<a id="trace-18466"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18547"></a>
<a id="trace-18549"></a>
<a id="trace-18814"></a>
<a id="trace-18816"></a>
<a id="trace-18832"></a>
<a id="trace-18834"></a>
<a id="trace-18859"></a>
<a id="trace-18861"></a>
<a id="trace-18986"></a>
<a id="trace-18988"></a>
<a id="trace-19004"></a>
<a id="trace-19006"></a>
<a id="trace-19015"></a>
<a id="trace-19017"></a>
<a id="trace-19035"></a>
<a id="trace-19037"></a>
<a id="trace-19045"></a>
<a id="trace-19047"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19144"></a>
<a id="trace-19146"></a>
<a id="trace-19152"></a>
<a id="trace-19154"></a>
<a id="trace-19326"></a>
<a id="trace-19328"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19369"></a>
<a id="trace-19371"></a>
<a id="trace-19539"></a>
<a id="trace-19541"></a>
<a id="trace-19556"></a>
<a id="trace-19558"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-19795"></a>
<a id="trace-19797"></a>
<a id="trace-19820"></a>
<a id="trace-19822"></a>
<a id="trace-19831"></a>
<a id="trace-19833"></a>
<a id="trace-19855"></a>
<a id="trace-19857"></a>
<a id="trace-19865"></a>
<a id="trace-19867"></a>
<a id="trace-19879"></a>
<a id="trace-19881"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19977"></a>
<a id="trace-19979"></a>
<a id="trace-19995"></a>
<a id="trace-19997"></a>
<a id="trace-20002"></a>
<a id="trace-20004"></a>
<a id="trace-20018"></a>
<a id="trace-20020"></a>
<a id="trace-20032"></a>
<a id="trace-20034"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
<a id="trace-20057"></a>
<a id="trace-20059"></a>
<a id="trace-20071"></a>
<a id="trace-20073"></a>
<a id="trace-20080"></a>
<a id="trace-20082"></a>
<a id="trace-20213"></a>
<a id="trace-20215"></a>
<a id="trace-20600"></a>
<a id="trace-20602"></a>
<a id="trace-22325"></a>
<a id="trace-22327"></a>
<a id="trace-22348"></a>
<a id="trace-22350"></a>
<a id="trace-22374"></a>
<a id="trace-22376"></a>
<a id="trace-22471"></a>
<a id="trace-22473"></a>
<a id="trace-22478"></a>
<a id="trace-22480"></a>
<a id="trace-22483"></a>
<a id="trace-22485"></a>
<a id="trace-22494"></a>
<a id="trace-22496"></a>
<a id="trace-22499"></a>
<a id="trace-22501"></a>
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-22527"></a>
<a id="trace-22529"></a>
<a id="trace-22540"></a>
<a id="trace-22542"></a>
<a id="trace-22549"></a>
<a id="trace-22551"></a>
<a id="trace-22756"></a>
<a id="trace-22758"></a>
<a id="trace-22778"></a>
<a id="trace-22780"></a>
<a id="trace-22783"></a>
<a id="trace-22785"></a>
<a id="trace-22809"></a>
<a id="trace-22811"></a>
<a id="trace-22827"></a>
<a id="trace-22829"></a>
<a id="trace-22850"></a>
<a id="trace-22852"></a>
<a id="trace-22927"></a>
<a id="trace-22929"></a>
<a id="trace-22960"></a>
<a id="trace-22962"></a>
<a id="trace-22976"></a>
<a id="trace-22978"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23117"></a>
<a id="trace-23119"></a>
<a id="trace-23125"></a>
<a id="trace-23127"></a>
<a id="trace-23141"></a>
<a id="trace-23143"></a>
<a id="trace-23148"></a>
<a id="trace-23150"></a>
<a id="trace-23215"></a>
<a id="trace-23217"></a>
<a id="trace-23219"></a>
<a id="trace-23221"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23247"></a>
<a id="trace-23249"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23273"></a>
<a id="trace-23275"></a>
<a id="trace-23284"></a>
<a id="trace-23286"></a>
<a id="trace-23298"></a>
<a id="trace-23300"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23376"></a>
<a id="trace-23378"></a>
<a id="trace-23382"></a>
<a id="trace-23384"></a>
<a id="trace-23405"></a>
<a id="trace-23407"></a>
<a id="trace-23410"></a>
<a id="trace-23412"></a>
<a id="trace-23421"></a>
<a id="trace-23423"></a>
<a id="trace-23439"></a>
<a id="trace-23441"></a>
<a id="trace-23461"></a>
<a id="trace-23463"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23538"></a>
<a id="trace-23540"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23560"></a>
<a id="trace-23562"></a>
<a id="trace-23568"></a>
<a id="trace-23570"></a>
<a id="trace-23582"></a>
<a id="trace-23584"></a>
<a id="trace-23595"></a>
<a id="trace-23597"></a>
<a id="trace-23608"></a>
<a id="trace-23610"></a>
<a id="trace-23614"></a>
<a id="trace-23616"></a>
<a id="trace-23628"></a>
<a id="trace-23630"></a>
<a id="trace-23699"></a>
<a id="trace-23701"></a>
<a id="trace-23732"></a>
<a id="trace-23734"></a>
<a id="trace-23744"></a>
<a id="trace-23746"></a>
<a id="trace-23789"></a>
<a id="trace-23791"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23866"></a>
<a id="trace-23868"></a>
<a id="trace-23881"></a>
<a id="trace-23883"></a>
<a id="trace-23892"></a>
<a id="trace-23894"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23914"></a>
<a id="trace-23916"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
<a id="trace-23949"></a>
<a id="trace-23951"></a>
<a id="trace-24021"></a>
<a id="trace-24023"></a>
<a id="trace-24027"></a>
<a id="trace-24029"></a>
<a id="trace-24046"></a>
<a id="trace-24048"></a>
<a id="trace-24052"></a>
<a id="trace-24054"></a>
<a id="trace-24062"></a>
<a id="trace-24064"></a>
<a id="trace-24079"></a>
<a id="trace-24081"></a>
<a id="trace-24086"></a>
<a id="trace-24088"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24177"></a>
<a id="trace-24179"></a>
<a id="trace-24202"></a>
<a id="trace-24204"></a>
<a id="trace-24209"></a>
<a id="trace-24211"></a>
<a id="trace-24223"></a>
<a id="trace-24225"></a>
<a id="trace-24236"></a>
<a id="trace-24238"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24338"></a>
<a id="trace-24340"></a>
<a id="trace-24344"></a>
<a id="trace-24346"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24368"></a>
<a id="trace-24370"></a>
<a id="trace-24380"></a>
<a id="trace-24382"></a>
<a id="trace-24390"></a>
<a id="trace-24392"></a>
<a id="trace-24409"></a>
<a id="trace-24411"></a>
<a id="trace-24419"></a>
<a id="trace-24421"></a>
<a id="trace-24440"></a>
<a id="trace-24442"></a>
<a id="trace-24510"></a>
<a id="trace-24512"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24533"></a>
<a id="trace-24535"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24565"></a>
<a id="trace-24567"></a>
<a id="trace-24572"></a>
<a id="trace-24574"></a>
<a id="trace-24592"></a>
<a id="trace-24594"></a>
<a id="trace-24601"></a>
<a id="trace-24603"></a>
<a id="trace-24674"></a>
<a id="trace-24676"></a>
<a id="trace-24697"></a>
<a id="trace-24699"></a>
<a id="trace-24704"></a>
<a id="trace-24706"></a>
<a id="trace-24717"></a>
<a id="trace-24719"></a>
<a id="trace-24731"></a>
<a id="trace-24733"></a>
<a id="trace-24737"></a>
<a id="trace-24739"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24757"></a>
<a id="trace-24759"></a>
<a id="trace-24824"></a>
<a id="trace-24826"></a>
<a id="trace-24835"></a>
<a id="trace-24837"></a>
<a id="trace-24851"></a>
<a id="trace-24853"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24887"></a>
<a id="trace-24889"></a>
<a id="trace-24894"></a>
<a id="trace-24896"></a>
<a id="trace-24908"></a>
<a id="trace-24910"></a>
<a id="trace-24914"></a>
<a id="trace-24916"></a>
<a id="trace-24926"></a>
<a id="trace-24928"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-25001"></a>
<a id="trace-25003"></a>
<a id="trace-25013"></a>
<a id="trace-25015"></a>
<a id="trace-25020"></a>
<a id="trace-25022"></a>
<a id="trace-25035"></a>
<a id="trace-25037"></a>
<a id="trace-25050"></a>
<a id="trace-25052"></a>
<a id="trace-25073"></a>
<a id="trace-25075"></a>
<a id="trace-25100"></a>
<a id="trace-25102"></a>
<a id="trace-25167"></a>
<a id="trace-25169"></a>
<a id="trace-25172"></a>
<a id="trace-25174"></a>
<a id="trace-25183"></a>
<a id="trace-25185"></a>
<a id="trace-25197"></a>
<a id="trace-25199"></a>
<a id="trace-25205"></a>
<a id="trace-25207"></a>
<a id="trace-25219"></a>
<a id="trace-25221"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
<a id="trace-25255"></a>
<a id="trace-25257"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
<a id="trace-25354"></a>
<a id="trace-25356"></a>
<a id="trace-25360"></a>
<a id="trace-25362"></a>
<a id="trace-25370"></a>
<a id="trace-25372"></a>
<a id="trace-25376"></a>
<a id="trace-25378"></a>
<a id="trace-25391"></a>
<a id="trace-25393"></a>
<a id="trace-25410"></a>
<a id="trace-25412"></a>
<a id="trace-25416"></a>
<a id="trace-25418"></a>
<a id="trace-25484"></a>
<a id="trace-25486"></a>
<a id="trace-25493"></a>
<a id="trace-25495"></a>
<a id="trace-25508"></a>
<a id="trace-25510"></a>
<a id="trace-25520"></a>
<a id="trace-25522"></a>
<a id="trace-25540"></a>
<a id="trace-25542"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25561"></a>
<a id="trace-25563"></a>
<a id="trace-25569"></a>
<a id="trace-25571"></a>
<a id="trace-25582"></a>
<a id="trace-25584"></a>
<a id="trace-25587"></a>
<a id="trace-25589"></a>
<a id="trace-25654"></a>
<a id="trace-25656"></a>
<a id="trace-25659"></a>
<a id="trace-25661"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25691"></a>
<a id="trace-25693"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25745"></a>
<a id="trace-25747"></a>
<a id="trace-25751"></a>
<a id="trace-25753"></a>
<a id="trace-25821"></a>
<a id="trace-25823"></a>
<a id="trace-25826"></a>
<a id="trace-25828"></a>
<a id="trace-25837"></a>
<a id="trace-25839"></a>
<a id="trace-25843"></a>
<a id="trace-25845"></a>
<a id="trace-25853"></a>
<a id="trace-25855"></a>
<a id="trace-25859"></a>
<a id="trace-25861"></a>
<a id="trace-25873"></a>
<a id="trace-25875"></a>
<a id="trace-25885"></a>
<a id="trace-25887"></a>
<a id="trace-25902"></a>
<a id="trace-25904"></a>
<a id="trace-25989"></a>
<a id="trace-25991"></a>
<a id="trace-25995"></a>
<a id="trace-25997"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26016"></a>
<a id="trace-26018"></a>
<a id="trace-26041"></a>
<a id="trace-26043"></a>
<a id="trace-26047"></a>
<a id="trace-26049"></a>
<a id="trace-26061"></a>
<a id="trace-26063"></a>
<a id="trace-26067"></a>
<a id="trace-26069"></a>
<a id="trace-26139"></a>
<a id="trace-26141"></a>
<a id="trace-26147"></a>
<a id="trace-26149"></a>
<a id="trace-26162"></a>
<a id="trace-26164"></a>
<a id="trace-26170"></a>
<a id="trace-26172"></a>
<a id="trace-26191"></a>
<a id="trace-26193"></a>
<a id="trace-26211"></a>
<a id="trace-26213"></a>
<a id="trace-26218"></a>
<a id="trace-26220"></a>
<a id="trace-26231"></a>
<a id="trace-26233"></a>
<a id="trace-26237"></a>
<a id="trace-26239"></a>
<a id="trace-26304"></a>
<a id="trace-26306"></a>
<a id="trace-26319"></a>
<a id="trace-26321"></a>
<a id="trace-26326"></a>
<a id="trace-26328"></a>
<a id="trace-26343"></a>
<a id="trace-26345"></a>
<a id="trace-26364"></a>
<a id="trace-26366"></a>
<a id="trace-26380"></a>
<a id="trace-26382"></a>
<a id="trace-26395"></a>
<a id="trace-26397"></a>
<a id="trace-26403"></a>
<a id="trace-26405"></a>
<a id="trace-26473"></a>
<a id="trace-26475"></a>
<a id="trace-26489"></a>
<a id="trace-26491"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26508"></a>
<a id="trace-26510"></a>
<a id="trace-26531"></a>
<a id="trace-26533"></a>
<a id="trace-26554"></a>
<a id="trace-26556"></a>
<a id="trace-26629"></a>
<a id="trace-26631"></a>
<a id="trace-26635"></a>
<a id="trace-26637"></a>
<a id="trace-26664"></a>
<a id="trace-26666"></a>
<a id="trace-26672"></a>
<a id="trace-26674"></a>
<a id="trace-26686"></a>
<a id="trace-26688"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26706"></a>
<a id="trace-26708"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26789"></a>
<a id="trace-26791"></a>
<a id="trace-26804"></a>
<a id="trace-26806"></a>
<a id="trace-26819"></a>
<a id="trace-26821"></a>
<a id="trace-26829"></a>
<a id="trace-26831"></a>
<a id="trace-26836"></a>
<a id="trace-26838"></a>
<a id="trace-26853"></a>
<a id="trace-26855"></a>
<a id="trace-26876"></a>
<a id="trace-26878"></a>
<a id="trace-26881"></a>
<a id="trace-26883"></a>
<a id="trace-26948"></a>
<a id="trace-26950"></a>
<a id="trace-26955"></a>
<a id="trace-26957"></a>
<a id="trace-26967"></a>
<a id="trace-26969"></a>
<a id="trace-26979"></a>
<a id="trace-26981"></a>
<a id="trace-26991"></a>
<a id="trace-26993"></a>
<a id="trace-27000"></a>
<a id="trace-27002"></a>
<a id="trace-27023"></a>
<a id="trace-27025"></a>
<a id="trace-27029"></a>
<a id="trace-27031"></a>
<a id="trace-27044"></a>
<a id="trace-27046"></a>
<a id="trace-27119"></a>
<a id="trace-27121"></a>
<a id="trace-27127"></a>
<a id="trace-27129"></a>
<a id="trace-27138"></a>
<a id="trace-27140"></a>
<a id="trace-27145"></a>
<a id="trace-27147"></a>
<a id="trace-27176"></a>
<a id="trace-27178"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
<a id="trace-27201"></a>
<a id="trace-27203"></a>
<a id="trace-27206"></a>
<a id="trace-27208"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27287"></a>
<a id="trace-27289"></a>
<a id="trace-27300"></a>
<a id="trace-27302"></a>
<a id="trace-27309"></a>
<a id="trace-27311"></a>
<a id="trace-27319"></a>
<a id="trace-27321"></a>
<a id="trace-27326"></a>
<a id="trace-27328"></a>
<a id="trace-27342"></a>
<a id="trace-27344"></a>
<a id="trace-27350"></a>
<a id="trace-27352"></a>
<a id="trace-27367"></a>
<a id="trace-27369"></a>
<a id="trace-27440"></a>
<a id="trace-27442"></a>
<a id="trace-27445"></a>
<a id="trace-27447"></a>
<a id="trace-27473"></a>
<a id="trace-27475"></a>
<a id="trace-27484"></a>
<a id="trace-27486"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27527"></a>
<a id="trace-27529"></a>
<a id="trace-27601"></a>
<a id="trace-27603"></a>
<a id="trace-27607"></a>
<a id="trace-27609"></a>
<a id="trace-27619"></a>
<a id="trace-27621"></a>
<a id="trace-27629"></a>
<a id="trace-27631"></a>
<a id="trace-27641"></a>
<a id="trace-27643"></a>
<a id="trace-27675"></a>
<a id="trace-27677"></a>
<a id="trace-27692"></a>
<a id="trace-27694"></a>
<a id="trace-27759"></a>
<a id="trace-27761"></a>
<a id="trace-27769"></a>
<a id="trace-27771"></a>
<a id="trace-27788"></a>
<a id="trace-27790"></a>
<a id="trace-27803"></a>
<a id="trace-27805"></a>
<a id="trace-27822"></a>
<a id="trace-27824"></a>
<a id="trace-27830"></a>
<a id="trace-27832"></a>
<a id="trace-27858"></a>
<a id="trace-27860"></a>
<a id="trace-27925"></a>
<a id="trace-27927"></a>
<a id="trace-27946"></a>
<a id="trace-27948"></a>
<a id="trace-27958"></a>
<a id="trace-27960"></a>
<a id="trace-27988"></a>
<a id="trace-27990"></a>
<a id="trace-28001"></a>
<a id="trace-28003"></a>
<a id="trace-28011"></a>
<a id="trace-28013"></a>
<a id="trace-28080"></a>
<a id="trace-28082"></a>
<a id="trace-28089"></a>
<a id="trace-28091"></a>
<a id="trace-28112"></a>
<a id="trace-28114"></a>
<a id="trace-28122"></a>
<a id="trace-28124"></a>
<a id="trace-28140"></a>
<a id="trace-28142"></a>
<a id="trace-28162"></a>
<a id="trace-28164"></a>
<a id="trace-28234"></a>
<a id="trace-28236"></a>
<a id="trace-28241"></a>
<a id="trace-28243"></a>
<a id="trace-28264"></a>
<a id="trace-28266"></a>
<a id="trace-28278"></a>
<a id="trace-28280"></a>
<a id="trace-28283"></a>
<a id="trace-28285"></a>
<a id="trace-28310"></a>
<a id="trace-28312"></a>
<a id="trace-28326"></a>
<a id="trace-28328"></a>
<a id="trace-28397"></a>
<a id="trace-28399"></a>
<a id="trace-28410"></a>
<a id="trace-28412"></a>
<a id="trace-28420"></a>
<a id="trace-28422"></a>
<a id="trace-28430"></a>
<a id="trace-28432"></a>
<a id="trace-28458"></a>
<a id="trace-28460"></a>
<a id="trace-28481"></a>
<a id="trace-28483"></a>
<a id="trace-28495"></a>
<a id="trace-28497"></a>
<a id="trace-28562"></a>
<a id="trace-28564"></a>
<a id="trace-28576"></a>
<a id="trace-28578"></a>
<a id="trace-28591"></a>
<a id="trace-28593"></a>
<a id="trace-28596"></a>
<a id="trace-28598"></a>
<a id="trace-28616"></a>
<a id="trace-28618"></a>
<a id="trace-28622"></a>
<a id="trace-28624"></a>
<a id="trace-28639"></a>
<a id="trace-28641"></a>
<a id="trace-28650"></a>
<a id="trace-28652"></a>
<a id="trace-28719"></a>
<a id="trace-28721"></a>
<a id="trace-28728"></a>
<a id="trace-28730"></a>
<a id="trace-28747"></a>
<a id="trace-28749"></a>
<a id="trace-28753"></a>
<a id="trace-28755"></a>
<a id="trace-28763"></a>
<a id="trace-28765"></a>
<a id="trace-28768"></a>
<a id="trace-28770"></a>
<a id="trace-28783"></a>
<a id="trace-28785"></a>
<a id="trace-28789"></a>
<a id="trace-28791"></a>
<a id="trace-28802"></a>
<a id="trace-28804"></a>
<a id="trace-28812"></a>
<a id="trace-28814"></a>
<a id="trace-28881"></a>
<a id="trace-28883"></a>
<a id="trace-28906"></a>
<a id="trace-28908"></a>
<a id="trace-28914"></a>
<a id="trace-28916"></a>
<a id="trace-28928"></a>
<a id="trace-28930"></a>
<a id="trace-28941"></a>
<a id="trace-28943"></a>
<a id="trace-28955"></a>
<a id="trace-28957"></a>
<a id="trace-28961"></a>
<a id="trace-28963"></a>
<a id="trace-28974"></a>
<a id="trace-28976"></a>
<a id="trace-29047"></a>
<a id="trace-29049"></a>
<a id="trace-29081"></a>
<a id="trace-29083"></a>
<a id="trace-29093"></a>
<a id="trace-29095"></a>
<a id="trace-29111"></a>
<a id="trace-29113"></a>
<a id="trace-29141"></a>
<a id="trace-29143"></a>
<a id="trace-29146"></a>
<a id="trace-29148"></a>
<a id="trace-29213"></a>
<a id="trace-29215"></a>
<a id="trace-29228"></a>
<a id="trace-29230"></a>
<a id="trace-29234"></a>
<a id="trace-29236"></a>
<a id="trace-29244"></a>
<a id="trace-29246"></a>
<a id="trace-29250"></a>
<a id="trace-29252"></a>
<a id="trace-29289"></a>
<a id="trace-29291"></a>
<a id="trace-29297"></a>
<a id="trace-29299"></a>
<a id="trace-29376"></a>
<a id="trace-29378"></a>
<a id="trace-29395"></a>
<a id="trace-29397"></a>
<a id="trace-29401"></a>
<a id="trace-29403"></a>
<a id="trace-29414"></a>
<a id="trace-29416"></a>
<a id="trace-29428"></a>
<a id="trace-29430"></a>
<a id="trace-29434"></a>
<a id="trace-29436"></a>
<a id="trace-29447"></a>
<a id="trace-29449"></a>
<a id="trace-29454"></a>
<a id="trace-29456"></a>
<a id="trace-29521"></a>
<a id="trace-29523"></a>
<a id="trace-29533"></a>
<a id="trace-29535"></a>
<a id="trace-29551"></a>
<a id="trace-29553"></a>
<a id="trace-29559"></a>
<a id="trace-29561"></a>
<a id="trace-29576"></a>
<a id="trace-29578"></a>
<a id="trace-29601"></a>
<a id="trace-29603"></a>
<a id="trace-29621"></a>
<a id="trace-29623"></a>
<a id="trace-29688"></a>
<a id="trace-29690"></a>
<a id="trace-29694"></a>
<a id="trace-29696"></a>
<a id="trace-29706"></a>
<a id="trace-29708"></a>
<a id="trace-29713"></a>
<a id="trace-29715"></a>
<a id="trace-29736"></a>
<a id="trace-29738"></a>
<a id="trace-29753"></a>
<a id="trace-29755"></a>
<a id="trace-29765"></a>
<a id="trace-29767"></a>
<a id="trace-29790"></a>
<a id="trace-29792"></a>
<a id="trace-29860"></a>
<a id="trace-29862"></a>
<a id="trace-29884"></a>
<a id="trace-29886"></a>
<a id="trace-29890"></a>
<a id="trace-29892"></a>
<a id="trace-29905"></a>
<a id="trace-29907"></a>
<a id="trace-29911"></a>
<a id="trace-29913"></a>
<a id="trace-29938"></a>
<a id="trace-29940"></a>
<a id="trace-30010"></a>
<a id="trace-30012"></a>
<a id="trace-30025"></a>
<a id="trace-30027"></a>
<a id="trace-30042"></a>
<a id="trace-30044"></a>
<a id="trace-30053"></a>
<a id="trace-30055"></a>
<a id="trace-30059"></a>
<a id="trace-30061"></a>
<a id="trace-30073"></a>
<a id="trace-30075"></a>
<a id="trace-30079"></a>
<a id="trace-30081"></a>
<a id="trace-30092"></a>
<a id="trace-30094"></a>
<a id="trace-30164"></a>
<a id="trace-30166"></a>
<a id="trace-30185"></a>
<a id="trace-30187"></a>
<a id="trace-30199"></a>
<a id="trace-30201"></a>
<a id="trace-30238"></a>
<a id="trace-30240"></a>
<a id="trace-30244"></a>
<a id="trace-30246"></a>
<a id="trace-30257"></a>
<a id="trace-30259"></a>
<a id="trace-30327"></a>
<a id="trace-30329"></a>
<a id="trace-30332"></a>
<a id="trace-30334"></a>
<a id="trace-30344"></a>
<a id="trace-30346"></a>
<a id="trace-30350"></a>
<a id="trace-30352"></a>
<a id="trace-30366"></a>
<a id="trace-30368"></a>
<a id="trace-30394"></a>
<a id="trace-30396"></a>
<a id="trace-30401"></a>
<a id="trace-30403"></a>
<a id="trace-30422"></a>
<a id="trace-30424"></a>
<a id="trace-30431"></a>
<a id="trace-30433"></a>
<a id="trace-30498"></a>
<a id="trace-30500"></a>
<a id="trace-30512"></a>
<a id="trace-30514"></a>
<a id="trace-30518"></a>
<a id="trace-30520"></a>
<a id="trace-30533"></a>
<a id="trace-30535"></a>
<a id="trace-30548"></a>
<a id="trace-30550"></a>
<a id="trace-30574"></a>
<a id="trace-30576"></a>
<a id="trace-30581"></a>
<a id="trace-30583"></a>
<a id="trace-30655"></a>
<a id="trace-30657"></a>
<a id="trace-30669"></a>
<a id="trace-30671"></a>
<a id="trace-30682"></a>
<a id="trace-30684"></a>
<a id="trace-30689"></a>
<a id="trace-30691"></a>
<a id="trace-30699"></a>
<a id="trace-30701"></a>
<a id="trace-30704"></a>
<a id="trace-30706"></a>
<a id="trace-30718"></a>
<a id="trace-30720"></a>
<a id="trace-30737"></a>
<a id="trace-30739"></a>
<a id="trace-30809"></a>
<a id="trace-30811"></a>
<a id="trace-30818"></a>
<a id="trace-30820"></a>
<a id="trace-30831"></a>
<a id="trace-30833"></a>
<a id="trace-30882"></a>
<a id="trace-30884"></a>
<a id="trace-30889"></a>
<a id="trace-30891"></a>
<a id="trace-30903"></a>
<a id="trace-30905"></a>
<a id="trace-30908"></a>
<a id="trace-30910"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 979): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 892. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624898124449623, 'next_transition': 1067}.
<a id="trace-988"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 988): traveling overwatch. Knowledge: actor memory at 5.00s, trace 883. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.105452230892979, 'next_transition': 1993}.
<a id="trace-989"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 989): received platoon directive. Knowledge: actor memory at 5.00s, trace 883. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.105452230892979, 'next_transition': 1993}.
<a id="trace-1521"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1521): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1318. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250579557341044, 'next_transition': 1865}.
<a id="trace-1522"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1522): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1318. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250579557341044, 'next_transition': 1865}.
<a id="trace-1865"></a>
<a id="trace-1867"></a>
<a id="trace-1890"></a>
<a id="trace-1892"></a>
<a id="trace-1930"></a>
<a id="trace-1932"></a>
<a id="trace-1952"></a>
<a id="trace-1954"></a>
<a id="trace-2203"></a>
<a id="trace-2205"></a>
<a id="trace-2241"></a>
<a id="trace-2243"></a>
<a id="trace-2272"></a>
<a id="trace-2274"></a>
<a id="trace-2312"></a>
<a id="trace-2314"></a>
<a id="trace-2326"></a>
<a id="trace-2328"></a>
<a id="trace-2364"></a>
<a id="trace-2366"></a>
<a id="trace-2393"></a>
<a id="trace-2395"></a>
<a id="trace-2422"></a>
<a id="trace-2424"></a>
- 13.20s–18.75s (×24), actor 5, squad 0 (trace 1865): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1323. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41342321830299067, 'next_transition': 1890}.
<a id="trace-1993"></a>
- 15.00s–15.00s (×1), actor 8, squad 1 (trace 1993): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1976. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.472830597401273, 'next_transition': 397}.
<a id="trace-2429"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 2429): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1968. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249076205899876, 'next_transition': 2849}.
<a id="trace-2430"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 2430): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1968. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249076205899876, 'next_transition': 2849}.
<a id="trace-2431"></a>
<a id="trace-2849"></a>
- 18.75s–19.00s (×2), actor 0, squad 0 (trace 2431): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1968. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249076205899876, 'next_transition': 2849}.
<a id="trace-3270"></a>
<a id="trace-3272"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 3270): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1973. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624600535319795, 'next_transition': 3295}.
<a id="trace-3295"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 3295): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1968. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624600535319754, 'next_transition': 3738}.
<a id="trace-3738"></a>
<a id="trace-3740"></a>
<a id="trace-3868"></a>
<a id="trace-3870"></a>
<a id="trace-3930"></a>
<a id="trace-3932"></a>
- 19.75s–20.75s (×6), actor 5, squad 0 (trace 3738): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1973. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6694256353333228, 'next_transition': 3868}.
<a id="trace-3955"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3955): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3759. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149966316410997, 'next_transition': 4417}.
<a id="trace-4417"></a>
<a id="trace-4419"></a>
- 21.25s–21.25s (×2), actor 5, squad 0 (trace 4417): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3764. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499679494973554, 'next_transition': 4458}.
<a id="trace-4458"></a>
- 21.50s–21.50s (×1), actor 0, squad 0 (trace 4458): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3759. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3143918303364056, 'next_transition': 4933}.
<a id="trace-4933"></a>
<a id="trace-4935"></a>
<a id="trace-4994"></a>
<a id="trace-4996"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 4933): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3764. Next observer evidence: {'until': 22.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8801926235413807, 'next_transition': 4994}.
<a id="trace-5002"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 5002): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3759. Next observer evidence: None.
<a id="trace-396"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (events line 396): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-397"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (events line 397): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5432"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 5432): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.449023 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 5432. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4858230488856848, 'next_transition': 5483}.
<a id="trace-5433"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 5433): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.449023 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 5433. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4858230488856848, 'next_transition': 5483}.
<a id="trace-5434"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (trace 5434): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.449023 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 5434. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7616341525530155, 'next_transition': 5618}.
<a id="trace-5435"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (trace 5435): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.449023 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 5435. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7616341525530155, 'next_transition': 5618}.
<a id="trace-5483"></a>
<a id="trace-5485"></a>
<a id="trace-5538"></a>
<a id="trace-5540"></a>
<a id="trace-5605"></a>
<a id="trace-5607"></a>
<a id="trace-6057"></a>
<a id="trace-6059"></a>
<a id="trace-6118"></a>
<a id="trace-6120"></a>
<a id="trace-6231"></a>
<a id="trace-6233"></a>
<a id="trace-6678"></a>
<a id="trace-6680"></a>
- 22.75s–25.75s (×14), actor 5, squad 0 (trace 5483): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 22.30s, trace 5435. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31753351909519567, 'next_transition': 5538}.
<a id="trace-5618"></a>
- 23.80s–23.80s (×1), actor 8, squad 1 (trace 5618): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3767. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.153801618766243, 'next_transition': 6263}.
<a id="trace-5619"></a>
- 23.80s–23.80s (×1), actor 8, squad 1 (trace 5619): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3767. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.153801618766243, 'next_transition': 6263}.
<a id="trace-5620"></a>
<a id="trace-6263"></a>
<a id="trace-7181"></a>
- 23.80s–26.85s (×3), actor 8, squad 1 (trace 5620): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3767. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.153801618766243, 'next_transition': 6263}.
<a id="trace-6691"></a>
- 25.80s–25.80s (×1), actor 0, squad 0 (trace 6691): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 6143. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4015456734263524, 'next_transition': 6717}.
<a id="trace-6717"></a>
<a id="trace-6719"></a>
- 26.25s–26.25s (×2), actor 5, squad 0 (trace 6717): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6148. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2019183287983349, 'next_transition': 6752}.
<a id="trace-6752"></a>
- 26.50s–26.50s (×1), actor 0, squad 0 (trace 6752): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 6143. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20269018614190787, 'next_transition': 7170}.
<a id="trace-6753"></a>
- 26.50s–26.50s (×1), actor 0, squad 0 (trace 6753): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 6143. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20269018614190787, 'next_transition': 7170}.
<a id="trace-7170"></a>
<a id="trace-7172"></a>
<a id="trace-7634"></a>
<a id="trace-7636"></a>
<a id="trace-7686"></a>
<a id="trace-7688"></a>
<a id="trace-7757"></a>
<a id="trace-7759"></a>
<a id="trace-7798"></a>
<a id="trace-7800"></a>
<a id="trace-7841"></a>
<a id="trace-7843"></a>
<a id="trace-7901"></a>
<a id="trace-7903"></a>
<a id="trace-7997"></a>
<a id="trace-7999"></a>
<a id="trace-8032"></a>
<a id="trace-8034"></a>
<a id="trace-8485"></a>
<a id="trace-8487"></a>
<a id="trace-8514"></a>
<a id="trace-8516"></a>
<a id="trace-8987"></a>
<a id="trace-8989"></a>
<a id="trace-9040"></a>
<a id="trace-9042"></a>
<a id="trace-9078"></a>
<a id="trace-9080"></a>
<a id="trace-9134"></a>
<a id="trace-9136"></a>
<a id="trace-9172"></a>
<a id="trace-9174"></a>
<a id="trace-9212"></a>
<a id="trace-9214"></a>
<a id="trace-9301"></a>
<a id="trace-9303"></a>
<a id="trace-9329"></a>
<a id="trace-9331"></a>
<a id="trace-9354"></a>
<a id="trace-9356"></a>
<a id="trace-9385"></a>
<a id="trace-9387"></a>
<a id="trace-9408"></a>
<a id="trace-9410"></a>
<a id="trace-9432"></a>
<a id="trace-9434"></a>
<a id="trace-9469"></a>
<a id="trace-9471"></a>
<a id="trace-9495"></a>
<a id="trace-9497"></a>
<a id="trace-9517"></a>
<a id="trace-9519"></a>
<a id="trace-9540"></a>
<a id="trace-9542"></a>
<a id="trace-12883"></a>
<a id="trace-12885"></a>
<a id="trace-12908"></a>
<a id="trace-12910"></a>
<a id="trace-12936"></a>
<a id="trace-12938"></a>
<a id="trace-12972"></a>
<a id="trace-12974"></a>
<a id="trace-12999"></a>
<a id="trace-13001"></a>
<a id="trace-13040"></a>
<a id="trace-13042"></a>
<a id="trace-13066"></a>
<a id="trace-13068"></a>
<a id="trace-13087"></a>
<a id="trace-13089"></a>
<a id="trace-13108"></a>
<a id="trace-13110"></a>
<a id="trace-13131"></a>
<a id="trace-13133"></a>
<a id="trace-13212"></a>
<a id="trace-13214"></a>
<a id="trace-13231"></a>
<a id="trace-13233"></a>
<a id="trace-13250"></a>
<a id="trace-13252"></a>
- 26.75s–46.25s (×80), actor 5, squad 0 (trace 7170): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6148. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5527059820009166, 'next_transition': 7634}.
<a id="trace-8044"></a>
- 31.00s–31.00s (×1), actor 8, squad 1 (trace 8044): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 7929. Next observer evidence: {'until': 31.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2693398464399972, 'next_transition': 8527}.
<a id="trace-8527"></a>
- 31.95s–31.95s (×1), actor 8, squad 1 (trace 8527): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 7929. Next observer evidence: {'until': 35.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 4.3440157443164065, 'next_transition': 9317}.
<a id="trace-9317"></a>
- 35.45s–35.45s (×1), actor 8, squad 1 (trace 9317): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 9236. Next observer evidence: {'until': 40.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 4.349895248673274, 'next_transition': 9628}.
<a id="trace-9628"></a>
- 40.20s–40.20s (×1), actor 8, squad 1 (trace 9628): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 9558. Next observer evidence: {'until': 46.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 4.669907241533836, 'next_transition': 13258}.
<a id="trace-12715"></a>
- 40.20s–40.20s (×1), actor 8, squad 1 (trace 12715): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 9558. Next observer evidence: {'until': 46.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 4.669907241533836, 'next_transition': 13258}.
<a id="trace-12716"></a>
- 40.20s–40.20s (×1), actor 8, squad 1 (trace 12716): MoveTactically. Knowledge: actor memory at 40.00s, trace 9558. Next observer evidence: {'until': 46.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 4.669907241533836, 'next_transition': 13258}.
<a id="trace-12717"></a>
- 40.20s–40.20s (×1), actor 8, squad 1 (trace 12717): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 9558. Next observer evidence: {'until': 46.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 4.669907241533836, 'next_transition': 13258}.
<a id="trace-13258"></a>
- 46.25s–46.25s (×1), actor 8, squad 1 (trace 13258): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 13145. Next observer evidence: {'until': 48, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3927718254995513, 'next_transition': 13503}.
<a id="trace-13312"></a>
- 46.30s–46.30s (×1), actor 1, squad 0 (trace 13312): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 45.00s, trace 13139. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13328}.
<a id="trace-13313"></a>
- 46.30s–46.30s (×1), actor 1, squad 0 (trace 13313): NeedSupport. Knowledge: actor memory at 45.00s, trace 13139. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13328}.
<a id="trace-13328"></a>
- 46.55s–46.55s (×1), actor 1, squad 0 (trace 13328): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 13139. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13426}.
<a id="trace-13333"></a>
- 46.55s–46.55s (×1), actor 1, squad 0 (trace 13333): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 13139. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13426}.
<a id="trace-13334"></a>
- 46.55s–46.55s (×1), actor 1, squad 0 (trace 13334): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 13139. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13426}.
<a id="trace-13426"></a>
<a id="trace-13428"></a>
<a id="trace-13445"></a>
<a id="trace-13447"></a>
<a id="trace-13482"></a>
<a id="trace-13484"></a>
<a id="trace-16321"></a>
<a id="trace-16323"></a>
<a id="trace-16352"></a>
<a id="trace-16354"></a>
<a id="trace-16382"></a>
<a id="trace-16384"></a>
<a id="trace-16403"></a>
<a id="trace-16405"></a>
- 46.75s–49.75s (×14), actor 5, squad 0 (trace 13426): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 13142. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13445}.
<a id="trace-13503"></a>
- 48.00s–48.00s (×1), actor 8, squad 1 (trace 13503): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 13145. Next observer evidence: {'until': 50.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.770452369679336, 'next_transition': 963}.
<a id="trace-13504"></a>
- 48.00s–48.00s (×1), actor 8, squad 1 (trace 13504): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 13145. Next observer evidence: {'until': 50.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.770452369679336, 'next_transition': 963}.
<a id="trace-16473"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 16473): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 16410. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17753322433856744, 'next_transition': 16613}.
<a id="trace-16474"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 16474): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 16410. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17753322433856744, 'next_transition': 16613}.
<a id="trace-16613"></a>
<a id="trace-16615"></a>
<a id="trace-16630"></a>
<a id="trace-16632"></a>
<a id="trace-16657"></a>
<a id="trace-16659"></a>
<a id="trace-16686"></a>
<a id="trace-16688"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16734"></a>
<a id="trace-16736"></a>
<a id="trace-16761"></a>
<a id="trace-16763"></a>
<a id="trace-16777"></a>
<a id="trace-16779"></a>
- 50.25s–53.75s (×16), actor 5, squad 0 (trace 16613): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 16413. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000052529696203, 'next_transition': 16630}.
<a id="trace-963"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 963): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16639"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 16639): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.590254 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 16639. Next observer evidence: {'until': 66.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 7.579730806826149, 'next_transition': 1206}.
<a id="trace-16640"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 16640): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.590254 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 16640. Next observer evidence: {'until': 66.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 7.579730806826149, 'next_transition': 1206}.
<a id="trace-16786"></a>
- 53.75s–53.75s (×1), actor 5, squad 0 (trace 16786): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 53.75s, trace 16786. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6192008619153442, 'next_transition': 16803}.
<a id="trace-16803"></a>
<a id="trace-16805"></a>
<a id="trace-16826"></a>
<a id="trace-16828"></a>
<a id="trace-16908"></a>
<a id="trace-16910"></a>
<a id="trace-16921"></a>
<a id="trace-16923"></a>
<a id="trace-16945"></a>
<a id="trace-16947"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16985"></a>
<a id="trace-16987"></a>
<a id="trace-16998"></a>
<a id="trace-17000"></a>
<a id="trace-17021"></a>
<a id="trace-17023"></a>
<a id="trace-17041"></a>
<a id="trace-17043"></a>
<a id="trace-17059"></a>
<a id="trace-17061"></a>
<a id="trace-17075"></a>
<a id="trace-17077"></a>
<a id="trace-17158"></a>
<a id="trace-17160"></a>
<a id="trace-17178"></a>
<a id="trace-17180"></a>
<a id="trace-17198"></a>
<a id="trace-17200"></a>
<a id="trace-17218"></a>
<a id="trace-17220"></a>
- 54.25s–61.75s (×32), actor 5, squad 0 (trace 16803): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.75s, trace 16786. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5503325026311904, 'next_transition': 16826}.
<a id="trace-17230"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 17230): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 17087. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17400}.
<a id="trace-17231"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 17231): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 17087. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17400}.
<a id="trace-17400"></a>
<a id="trace-17402"></a>
<a id="trace-17419"></a>
<a id="trace-17421"></a>
<a id="trace-17452"></a>
<a id="trace-17454"></a>
<a id="trace-17469"></a>
<a id="trace-17471"></a>
<a id="trace-17495"></a>
<a id="trace-17497"></a>
<a id="trace-17518"></a>
<a id="trace-17520"></a>
<a id="trace-17598"></a>
<a id="trace-17600"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17633"></a>
<a id="trace-17635"></a>
<a id="trace-17649"></a>
<a id="trace-17651"></a>
<a id="trace-17669"></a>
<a id="trace-17671"></a>
<a id="trace-17685"></a>
<a id="trace-17687"></a>
<a id="trace-17717"></a>
<a id="trace-17719"></a>
<a id="trace-17731"></a>
<a id="trace-17733"></a>
<a id="trace-17753"></a>
<a id="trace-17755"></a>
<a id="trace-17775"></a>
<a id="trace-17777"></a>
<a id="trace-17851"></a>
<a id="trace-17853"></a>
<a id="trace-17870"></a>
<a id="trace-17872"></a>
<a id="trace-17896"></a>
<a id="trace-17898"></a>
<a id="trace-17908"></a>
<a id="trace-17910"></a>
<a id="trace-17935"></a>
<a id="trace-17937"></a>
<a id="trace-17948"></a>
<a id="trace-17950"></a>
<a id="trace-17985"></a>
<a id="trace-17987"></a>
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18258"></a>
<a id="trace-18260"></a>
- 62.25s–74.25s (×50), actor 5, squad 0 (trace 17400): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 17090. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17419}.
<a id="trace-1206"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (events line 1206): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17658"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 17658): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.426297 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 17658. Next observer evidence: {'until': 73, 'shots': 4, 'casualties': 0, 'mean_displacement': 7.148660309798138, 'next_transition': 17968}.
<a id="trace-17659"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 17659): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.426297 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 17659. Next observer evidence: {'until': 73, 'shots': 4, 'casualties': 0, 'mean_displacement': 7.148660309798138, 'next_transition': 17968}.
<a id="trace-17968"></a>
- 73.05s–73.05s (×1), actor 8, squad 1 (trace 17968): support established: element delivered fire on threat area. Knowledge: actor memory at 70.00s, trace 17792. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22197242334353134, 'next_transition': 17994}.
<a id="trace-17969"></a>
- 73.05s–73.05s (×1), actor 8, squad 1 (trace 17969): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 70.00s, trace 17792. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22197242334353134, 'next_transition': 17994}.
<a id="trace-17970"></a>
- 73.05s–73.05s (×1), actor 8, squad 1 (trace 17970): Fixing. Knowledge: actor memory at 70.00s, trace 17792. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22197242334353134, 'next_transition': 17994}.
<a id="trace-17994"></a>
- 73.35s–73.35s (×1), actor 8, squad 1 (trace 17994): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 17792. Next observer evidence: {'until': 75.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.016985084058602, 'next_transition': 18467}.
<a id="trace-17995"></a>
- 73.35s–73.35s (×1), actor 8, squad 1 (trace 17995): received platoon directive. Knowledge: actor memory at 70.00s, trace 17792. Next observer evidence: {'until': 75.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.016985084058602, 'next_transition': 18467}.
<a id="trace-18270"></a>
- 74.30s–74.30s (×1), actor 1, squad 0 (trace 18270): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 17786. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099978941693358, 'next_transition': 18345}.
<a id="trace-18271"></a>
- 74.30s–74.30s (×1), actor 1, squad 0 (trace 18271): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 17786. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099978941693358, 'next_transition': 18345}.
<a id="trace-18345"></a>
<a id="trace-18347"></a>
<a id="trace-18434"></a>
<a id="trace-18436"></a>
<a id="trace-18458"></a>
<a id="trace-18460"></a>
<a id="trace-18486"></a>
<a id="trace-18488"></a>
<a id="trace-18504"></a>
<a id="trace-18506"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18785"></a>
<a id="trace-18787"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18843"></a>
<a id="trace-18845"></a>
<a id="trace-18932"></a>
<a id="trace-18934"></a>
<a id="trace-18966"></a>
<a id="trace-18968"></a>
<a id="trace-18996"></a>
<a id="trace-18998"></a>
- 74.75s–82.25s (×24), actor 5, squad 0 (trace 18345): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 17789. Next observer evidence: {'until': 75.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4199895995184913, 'next_transition': 18434}.
<a id="trace-18467"></a>
- 75.75s–75.75s (×1), actor 8, squad 1 (trace 18467): NeedSupport. Knowledge: actor memory at 75.00s, trace 18363. Next observer evidence: {'until': 77.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.537342538786733, 'next_transition': 18555}.
<a id="trace-18555"></a>
- 77.60s–77.60s (×1), actor 8, squad 1 (trace 18555): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 75.00s, trace 18363. Next observer evidence: {'until': 88, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.384423093756024, 'next_transition': 19389}.
<a id="trace-18556"></a>
- 77.60s–77.60s (×1), actor 8, squad 1 (trace 18556): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 18363. Next observer evidence: {'until': 88, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.384423093756024, 'next_transition': 19389}.
<a id="trace-1359"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (events line 1359): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19008"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 19008): renew committed intent (75 s lifetime). Knowledge: actor memory at 82.55s, trace 19008. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7360670670139459, 'next_transition': 19029}.
<a id="trace-19029"></a>
<a id="trace-19031"></a>
<a id="trace-19052"></a>
<a id="trace-19054"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
- 83.25s–85.25s (×6), actor 5, squad 0 (trace 19029): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 19008. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7809043252018274, 'next_transition': 19052}.
<a id="trace-19162"></a>
- 86.05s–86.05s (×1), actor 1, squad 0 (trace 19162): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 19075. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06384000000000042, 'next_transition': 19320}.
<a id="trace-19163"></a>
- 86.05s–86.05s (×1), actor 1, squad 0 (trace 19163): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 19075. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06384000000000042, 'next_transition': 19320}.
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19363"></a>
<a id="trace-19365"></a>
<a id="trace-19518"></a>
<a id="trace-19520"></a>
<a id="trace-19550"></a>
<a id="trace-19552"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
<a id="trace-19663"></a>
<a id="trace-19665"></a>
<a id="trace-19814"></a>
<a id="trace-19816"></a>
<a id="trace-19849"></a>
<a id="trace-19851"></a>
<a id="trace-19873"></a>
<a id="trace-19875"></a>
<a id="trace-19959"></a>
<a id="trace-19961"></a>
<a id="trace-19989"></a>
<a id="trace-19991"></a>
<a id="trace-20012"></a>
<a id="trace-20014"></a>
<a id="trace-20042"></a>
<a id="trace-20044"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
- 86.25s–99.25s (×28), actor 5, squad 0 (trace 19320): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 19078. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2803919353773558, 'next_transition': 19363}.
<a id="trace-19389"></a>
- 88.15s–88.15s (×1), actor 8, squad 1 (trace 19389): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 19080. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19391}.
<a id="trace-19391"></a>
- 88.20s–88.20s (×1), actor 8, squad 1 (trace 19391): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 19080. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1421}.
<a id="trace-19393"></a>
- 88.20s–88.20s (×1), actor 8, squad 1 (trace 19393): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 19080. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1421}.
<a id="trace-19394"></a>
- 88.20s–88.20s (×1), actor 8, squad 1 (trace 19394): Reorganise complete: known contact. Knowledge: actor memory at 85.00s, trace 19080. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1421}.
<a id="trace-1421"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (events line 1421): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19653"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 19653): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340282 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 19653. Next observer evidence: {'until': 91.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19675}.
<a id="trace-19654"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 19654): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340282 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 19654. Next observer evidence: {'until': 91.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19675}.
<a id="trace-19675"></a>
- 91.55s–91.55s (×1), actor 8, squad 1 (trace 19675): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 19578. Next observer evidence: {'until': 110, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1520}.
<a id="trace-19676"></a>
- 91.55s–91.55s (×1), actor 8, squad 1 (trace 19676): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 19578. Next observer evidence: {'until': 110, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1520}.
<a id="trace-20102"></a>
- 100.10s–100.10s (×1), actor 1, squad 0 (trace 20102): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598763907622085, 'next_transition': 20202}.
<a id="trace-20103"></a>
- 100.10s–100.10s (×1), actor 1, squad 0 (trace 20103): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598763907622085, 'next_transition': 20202}.
<a id="trace-20202"></a>
<a id="trace-20204"></a>
<a id="trace-20231"></a>
<a id="trace-20233"></a>
<a id="trace-20266"></a>
<a id="trace-20268"></a>
- 100.25s–102.25s (×6), actor 5, squad 0 (trace 20202): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 20088. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28146127619976313, 'next_transition': 20231}.
<a id="trace-20276"></a>
- 102.35s–102.35s (×1), actor 1, squad 0 (trace 20276): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38714859756481235, 'next_transition': 20597}.
<a id="trace-20597"></a>
- 102.70s–102.70s (×1), actor 1, squad 0 (trace 20597): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 102.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06878000000000029, 'next_transition': 20612}.
<a id="trace-20598"></a>
- 102.70s–102.70s (×1), actor 1, squad 0 (trace 20598): answered caller: no covered flank; Reorganise then supported fire and movement. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 102.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06878000000000029, 'next_transition': 20612}.
<a id="trace-20612"></a>
- 102.95s–102.95s (×1), actor 1, squad 0 (trace 20612): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22319}.
<a id="trace-20613"></a>
- 102.95s–102.95s (×1), actor 1, squad 0 (trace 20613): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22319}.
<a id="trace-22319"></a>
<a id="trace-22321"></a>
- 103.25s–103.25s (×2), actor 5, squad 0 (trace 22319): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 20088. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3506915003247161, 'next_transition': 22368}.
<a id="trace-22329"></a>
- 103.25s–103.25s (×1), actor 1, squad 0 (trace 22329): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 100.00s, trace 20085. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3506915003247161, 'next_transition': 22368}.
<a id="trace-22368"></a>
<a id="trace-22370"></a>
- 104.25s–104.25s (×2), actor 5, squad 0 (trace 22368): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 20088. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.520036789096539, 'next_transition': 22512}.
<a id="trace-22512"></a>
<a id="trace-22514"></a>
<a id="trace-22535"></a>
- 108.25s–109.25s (×3), actor 1, squad 0 (trace 22512): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 22395. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875024960277914, 'next_transition': 22535}.
<a id="trace-1519"></a>
- 110.15s–110.15s (×1), actor 1, squad 0 (events line 1519): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968670323315, 'next_transition': 22617}.
<a id="trace-1520"></a>
- 110.15s–110.15s (×1), actor 1, squad 1 (events line 1520): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22636}.
<a id="trace-22570"></a>
- 110.15s–110.15s (×1), actor 1, squad 0 (trace 22570): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.378390 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 110.15s, trace 22570. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968670323315, 'next_transition': 22617}.
<a id="trace-22571"></a>
- 110.15s–110.15s (×1), actor 1, squad 0 (trace 22571): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.378390 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 110.15s, trace 22571. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968670323315, 'next_transition': 22617}.
<a id="trace-22572"></a>
- 110.15s–110.15s (×1), actor 1, squad 1 (trace 22572): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.15s, trace 22572. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22636}.
<a id="trace-22617"></a>
<a id="trace-22619"></a>
<a id="trace-22629"></a>
<a id="trace-22631"></a>
<a id="trace-22772"></a>
<a id="trace-22774"></a>
- 110.25s–112.25s (×6), actor 1, squad 0 (trace 22617): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.15s, trace 22572. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874849812059915, 'next_transition': 22629}.
<a id="trace-22636"></a>
- 111.60s–111.60s (×1), actor 8, squad 1 (trace 22636): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 22557. Next observer evidence: None.
<a id="trace-22639"></a>
- 111.65s–111.65s (×1), actor 8, squad 1 (trace 22639): MoveTactically. Knowledge: actor memory at 110.00s, trace 22557. Next observer evidence: None.
<a id="trace-22640"></a>
- 111.65s–111.65s (×1), actor 8, squad 1 (trace 22640): received platoon directive. Knowledge: actor memory at 110.00s, trace 22557. Next observer evidence: None.
<a id="trace-22754"></a>
- 111.70s–111.70s (×1), actor 8, squad 1 (trace 22754): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 22557. Next observer evidence: {'until': 115.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1543}.
<a id="trace-22786"></a>
- 112.80s–112.80s (×1), actor 1, squad 0 (trace 22786): Withdraw to received rally. Knowledge: actor memory at 110.15s, trace 22572. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499373406466363, 'next_transition': 22803}.
<a id="trace-22787"></a>
- 112.80s–112.80s (×1), actor 1, squad 0 (trace 22787): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.15s, trace 22572. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499373406466363, 'next_transition': 22803}.
<a id="trace-22803"></a>
<a id="trace-22805"></a>
<a id="trace-22844"></a>
<a id="trace-22846"></a>
<a id="trace-22921"></a>
<a id="trace-22923"></a>
<a id="trace-22950"></a>
<a id="trace-22952"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-23111"></a>
<a id="trace-23113"></a>
<a id="trace-23135"></a>
<a id="trace-23137"></a>
<a id="trace-23209"></a>
<a id="trace-23211"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23241"></a>
<a id="trace-23243"></a>
<a id="trace-23267"></a>
<a id="trace-23269"></a>
<a id="trace-23292"></a>
<a id="trace-23294"></a>
<a id="trace-23370"></a>
<a id="trace-23372"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23415"></a>
<a id="trace-23417"></a>
<a id="trace-23433"></a>
<a id="trace-23435"></a>
<a id="trace-23455"></a>
<a id="trace-23457"></a>
<a id="trace-23532"></a>
<a id="trace-23534"></a>
<a id="trace-23554"></a>
<a id="trace-23556"></a>
<a id="trace-23576"></a>
<a id="trace-23578"></a>
<a id="trace-23604"></a>
<a id="trace-23622"></a>
<a id="trace-23624"></a>
<a id="trace-23693"></a>
<a id="trace-23695"></a>
<a id="trace-23711"></a>
<a id="trace-23713"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23755"></a>
<a id="trace-23757"></a>
<a id="trace-23783"></a>
<a id="trace-23785"></a>
<a id="trace-23856"></a>
<a id="trace-23858"></a>
<a id="trace-23871"></a>
<a id="trace-23873"></a>
<a id="trace-23886"></a>
<a id="trace-23888"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23933"></a>
<a id="trace-23935"></a>
<a id="trace-24015"></a>
<a id="trace-24017"></a>
<a id="trace-24040"></a>
<a id="trace-24042"></a>
<a id="trace-24056"></a>
<a id="trace-24058"></a>
<a id="trace-24073"></a>
<a id="trace-24075"></a>
<a id="trace-24093"></a>
<a id="trace-24095"></a>
<a id="trace-24171"></a>
<a id="trace-24173"></a>
<a id="trace-24196"></a>
<a id="trace-24198"></a>
<a id="trace-24217"></a>
<a id="trace-24219"></a>
<a id="trace-24244"></a>
<a id="trace-24246"></a>
<a id="trace-24261"></a>
<a id="trace-24263"></a>
<a id="trace-24332"></a>
<a id="trace-24334"></a>
<a id="trace-24351"></a>
<a id="trace-24353"></a>
<a id="trace-24374"></a>
<a id="trace-24376"></a>
<a id="trace-24403"></a>
<a id="trace-24405"></a>
<a id="trace-24434"></a>
<a id="trace-24436"></a>
<a id="trace-24504"></a>
<a id="trace-24506"></a>
<a id="trace-24520"></a>
<a id="trace-24522"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24559"></a>
<a id="trace-24561"></a>
<a id="trace-24586"></a>
<a id="trace-24588"></a>
<a id="trace-24668"></a>
<a id="trace-24670"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24708"></a>
<a id="trace-24710"></a>
<a id="trace-24725"></a>
<a id="trace-24727"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24818"></a>
<a id="trace-24820"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
- 113.25s–171.30s (×117), actor 1, squad 0 (trace 22803): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.15s, trace 22572. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250843907807594, 'next_transition': 22844}.
<a id="trace-1543"></a>
- 115.80s–115.80s (×1), actor 1, squad 1 (events line 1543): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22980}.
<a id="trace-22942"></a>
- 115.80s–115.80s (×1), actor 1, squad 1 (trace 22942): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387244 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.80s, trace 22942. Next observer evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22980}.
<a id="trace-22943"></a>
- 115.80s–115.80s (×1), actor 1, squad 1 (trace 22943): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387244 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.80s, trace 22943. Next observer evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22980}.
<a id="trace-22980"></a>
- 117.55s–117.55s (×1), actor 8, squad 1 (trace 22980): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 22864. Next observer evidence: {'until': 147.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1740}.
<a id="trace-22981"></a>
- 117.55s–117.55s (×1), actor 8, squad 1 (trace 22981): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 22864. Next observer evidence: {'until': 147.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1740}.
<a id="trace-1721"></a>
- 172.05s–172.05s (×1), actor 1, squad 0 (events line 1721): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24881}.
<a id="trace-24867"></a>
- 172.05s–172.05s (×1), actor 1, squad 0 (trace 24867): renew committed intent (75 s lifetime). Knowledge: actor memory at 172.05s, trace 24867. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24881}.
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-24902"></a>
<a id="trace-24904"></a>
<a id="trace-24922"></a>
<a id="trace-24992"></a>
<a id="trace-24994"></a>
<a id="trace-25007"></a>
<a id="trace-25009"></a>
<a id="trace-25029"></a>
<a id="trace-25031"></a>
<a id="trace-25062"></a>
<a id="trace-25064"></a>
<a id="trace-25091"></a>
<a id="trace-25093"></a>
<a id="trace-25161"></a>
<a id="trace-25163"></a>
<a id="trace-25177"></a>
<a id="trace-25179"></a>
<a id="trace-25191"></a>
<a id="trace-25193"></a>
<a id="trace-25213"></a>
<a id="trace-25215"></a>
<a id="trace-25243"></a>
<a id="trace-25245"></a>
<a id="trace-25321"></a>
<a id="trace-25323"></a>
<a id="trace-25348"></a>
<a id="trace-25350"></a>
<a id="trace-25364"></a>
<a id="trace-25366"></a>
<a id="trace-25385"></a>
<a id="trace-25387"></a>
<a id="trace-25404"></a>
<a id="trace-25406"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25502"></a>
<a id="trace-25504"></a>
<a id="trace-25534"></a>
<a id="trace-25536"></a>
<a id="trace-25555"></a>
<a id="trace-25557"></a>
<a id="trace-25576"></a>
<a id="trace-25578"></a>
<a id="trace-25648"></a>
<a id="trace-25650"></a>
<a id="trace-25665"></a>
<a id="trace-25667"></a>
<a id="trace-25685"></a>
<a id="trace-25687"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25739"></a>
<a id="trace-25741"></a>
<a id="trace-25815"></a>
<a id="trace-25817"></a>
<a id="trace-25831"></a>
<a id="trace-25833"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25983"></a>
<a id="trace-25985"></a>
<a id="trace-26000"></a>
<a id="trace-26002"></a>
<a id="trace-26020"></a>
<a id="trace-26022"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26133"></a>
<a id="trace-26135"></a>
<a id="trace-26156"></a>
<a id="trace-26158"></a>
<a id="trace-26185"></a>
<a id="trace-26187"></a>
<a id="trace-26205"></a>
<a id="trace-26207"></a>
<a id="trace-26225"></a>
<a id="trace-26227"></a>
<a id="trace-26298"></a>
<a id="trace-26300"></a>
<a id="trace-26313"></a>
<a id="trace-26315"></a>
<a id="trace-26337"></a>
<a id="trace-26339"></a>
<a id="trace-26358"></a>
<a id="trace-26360"></a>
<a id="trace-26389"></a>
<a id="trace-26391"></a>
<a id="trace-26467"></a>
<a id="trace-26469"></a>
<a id="trace-26483"></a>
<a id="trace-26485"></a>
<a id="trace-26499"></a>
<a id="trace-26517"></a>
<a id="trace-26519"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26623"></a>
<a id="trace-26625"></a>
<a id="trace-26644"></a>
<a id="trace-26646"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26680"></a>
<a id="trace-26682"></a>
<a id="trace-26700"></a>
<a id="trace-26702"></a>
<a id="trace-26777"></a>
<a id="trace-26779"></a>
<a id="trace-26798"></a>
<a id="trace-26800"></a>
<a id="trace-26823"></a>
<a id="trace-26825"></a>
<a id="trace-26847"></a>
<a id="trace-26849"></a>
- 172.30s–233.30s (×122), actor 1, squad 0 (trace 24881): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 172.05s, trace 24867. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24902}.
<a id="trace-1740"></a>
- 177.65s–177.65s (×1), actor 1, squad 1 (events line 1740): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25044"></a>
- 177.65s–177.65s (×1), actor 1, squad 1 (trace 25044): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.65s, trace 25044. Next observer evidence: {'until': 207.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1956}.
<a id="trace-1931"></a>
- 233.90s–233.90s (×1), actor 1, squad 0 (events line 1931): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26860"></a>
- 233.90s–233.90s (×1), actor 1, squad 0 (trace 26860): renew committed intent (75 s lifetime). Knowledge: actor memory at 233.90s, trace 26860. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26870}.
<a id="trace-26870"></a>
<a id="trace-26872"></a>
<a id="trace-26942"></a>
<a id="trace-26944"></a>
<a id="trace-26961"></a>
<a id="trace-26963"></a>
<a id="trace-26985"></a>
<a id="trace-26987"></a>
<a id="trace-27017"></a>
<a id="trace-27019"></a>
<a id="trace-27038"></a>
<a id="trace-27040"></a>
<a id="trace-27113"></a>
<a id="trace-27115"></a>
<a id="trace-27134"></a>
<a id="trace-27150"></a>
<a id="trace-27152"></a>
<a id="trace-27170"></a>
<a id="trace-27172"></a>
<a id="trace-27195"></a>
<a id="trace-27197"></a>
<a id="trace-27276"></a>
<a id="trace-27278"></a>
<a id="trace-27294"></a>
<a id="trace-27296"></a>
<a id="trace-27313"></a>
<a id="trace-27315"></a>
<a id="trace-27336"></a>
<a id="trace-27338"></a>
<a id="trace-27357"></a>
<a id="trace-27359"></a>
<a id="trace-27434"></a>
<a id="trace-27436"></a>
<a id="trace-27454"></a>
<a id="trace-27456"></a>
<a id="trace-27478"></a>
<a id="trace-27480"></a>
<a id="trace-27499"></a>
<a id="trace-27501"></a>
<a id="trace-27521"></a>
<a id="trace-27523"></a>
<a id="trace-27595"></a>
<a id="trace-27597"></a>
<a id="trace-27613"></a>
<a id="trace-27615"></a>
<a id="trace-27635"></a>
<a id="trace-27637"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27683"></a>
<a id="trace-27685"></a>
<a id="trace-27753"></a>
<a id="trace-27755"></a>
<a id="trace-27774"></a>
<a id="trace-27776"></a>
<a id="trace-27793"></a>
<a id="trace-27795"></a>
<a id="trace-27816"></a>
<a id="trace-27818"></a>
<a id="trace-27841"></a>
<a id="trace-27843"></a>
<a id="trace-27919"></a>
<a id="trace-27921"></a>
<a id="trace-27934"></a>
<a id="trace-27936"></a>
<a id="trace-27952"></a>
<a id="trace-27954"></a>
<a id="trace-27975"></a>
<a id="trace-27977"></a>
<a id="trace-27995"></a>
<a id="trace-27997"></a>
<a id="trace-28074"></a>
<a id="trace-28076"></a>
<a id="trace-28102"></a>
<a id="trace-28104"></a>
<a id="trace-28116"></a>
<a id="trace-28118"></a>
<a id="trace-28134"></a>
<a id="trace-28136"></a>
<a id="trace-28156"></a>
<a id="trace-28158"></a>
<a id="trace-28230"></a>
<a id="trace-28252"></a>
<a id="trace-28254"></a>
<a id="trace-28272"></a>
<a id="trace-28274"></a>
<a id="trace-28299"></a>
<a id="trace-28301"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28388"></a>
<a id="trace-28390"></a>
<a id="trace-28404"></a>
<a id="trace-28406"></a>
<a id="trace-28424"></a>
<a id="trace-28426"></a>
<a id="trace-28452"></a>
<a id="trace-28454"></a>
<a id="trace-28475"></a>
<a id="trace-28477"></a>
<a id="trace-28556"></a>
<a id="trace-28558"></a>
<a id="trace-28570"></a>
<a id="trace-28572"></a>
<a id="trace-28585"></a>
<a id="trace-28587"></a>
<a id="trace-28610"></a>
<a id="trace-28612"></a>
<a id="trace-28633"></a>
<a id="trace-28635"></a>
<a id="trace-28713"></a>
<a id="trace-28715"></a>
<a id="trace-28741"></a>
<a id="trace-28743"></a>
<a id="trace-28757"></a>
<a id="trace-28759"></a>
<a id="trace-28777"></a>
<a id="trace-28779"></a>
<a id="trace-28796"></a>
<a id="trace-28798"></a>
<a id="trace-28875"></a>
<a id="trace-28877"></a>
- 234.30s–295.30s (×122), actor 1, squad 0 (trace 26870): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 233.90s, trace 26860. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26942}.
<a id="trace-1956"></a>
- 239.55s–239.55s (×1), actor 1, squad 1 (events line 1956): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 269.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2157}.
<a id="trace-27049"></a>
- 239.55s–239.55s (×1), actor 1, squad 1 (trace 27049): renew committed intent (75 s lifetime). Knowledge: actor memory at 239.55s, trace 27049. Next observer evidence: {'until': 269.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2157}.
<a id="trace-2135"></a>
- 295.60s–295.60s (×1), actor 1, squad 0 (events line 2135): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28886"></a>
- 295.60s–295.60s (×1), actor 1, squad 0 (trace 28886): renew committed intent (75 s lifetime). Knowledge: actor memory at 295.60s, trace 28886. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28900}.
<a id="trace-28900"></a>
<a id="trace-28902"></a>
<a id="trace-28922"></a>
<a id="trace-28924"></a>
<a id="trace-28949"></a>
<a id="trace-28951"></a>
<a id="trace-28968"></a>
<a id="trace-28970"></a>
<a id="trace-29041"></a>
<a id="trace-29043"></a>
<a id="trace-29059"></a>
<a id="trace-29061"></a>
<a id="trace-29075"></a>
<a id="trace-29077"></a>
<a id="trace-29105"></a>
<a id="trace-29107"></a>
<a id="trace-29135"></a>
<a id="trace-29137"></a>
<a id="trace-29207"></a>
<a id="trace-29209"></a>
<a id="trace-29222"></a>
<a id="trace-29224"></a>
<a id="trace-29238"></a>
<a id="trace-29240"></a>
<a id="trace-29259"></a>
<a id="trace-29261"></a>
<a id="trace-29283"></a>
<a id="trace-29285"></a>
<a id="trace-29365"></a>
<a id="trace-29367"></a>
<a id="trace-29389"></a>
<a id="trace-29391"></a>
<a id="trace-29405"></a>
<a id="trace-29407"></a>
<a id="trace-29422"></a>
<a id="trace-29424"></a>
<a id="trace-29441"></a>
<a id="trace-29443"></a>
<a id="trace-29515"></a>
<a id="trace-29517"></a>
<a id="trace-29545"></a>
<a id="trace-29547"></a>
<a id="trace-29570"></a>
<a id="trace-29572"></a>
<a id="trace-29595"></a>
<a id="trace-29597"></a>
<a id="trace-29612"></a>
<a id="trace-29614"></a>
<a id="trace-29682"></a>
<a id="trace-29684"></a>
<a id="trace-29700"></a>
<a id="trace-29702"></a>
<a id="trace-29722"></a>
<a id="trace-29724"></a>
<a id="trace-29747"></a>
<a id="trace-29749"></a>
<a id="trace-29781"></a>
<a id="trace-29783"></a>
<a id="trace-29851"></a>
<a id="trace-29853"></a>
<a id="trace-29865"></a>
<a id="trace-29867"></a>
<a id="trace-29878"></a>
<a id="trace-29880"></a>
<a id="trace-29899"></a>
<a id="trace-29901"></a>
<a id="trace-29925"></a>
<a id="trace-29927"></a>
<a id="trace-30005"></a>
<a id="trace-30030"></a>
<a id="trace-30032"></a>
<a id="trace-30047"></a>
<a id="trace-30049"></a>
<a id="trace-30067"></a>
<a id="trace-30069"></a>
<a id="trace-30086"></a>
<a id="trace-30088"></a>
<a id="trace-30158"></a>
<a id="trace-30160"></a>
<a id="trace-30179"></a>
<a id="trace-30181"></a>
<a id="trace-30212"></a>
<a id="trace-30214"></a>
<a id="trace-30232"></a>
<a id="trace-30234"></a>
<a id="trace-30251"></a>
<a id="trace-30253"></a>
<a id="trace-30321"></a>
<a id="trace-30323"></a>
<a id="trace-30338"></a>
<a id="trace-30340"></a>
<a id="trace-30360"></a>
<a id="trace-30362"></a>
<a id="trace-30388"></a>
<a id="trace-30390"></a>
<a id="trace-30416"></a>
<a id="trace-30418"></a>
<a id="trace-30492"></a>
<a id="trace-30494"></a>
<a id="trace-30506"></a>
<a id="trace-30508"></a>
<a id="trace-30522"></a>
<a id="trace-30524"></a>
<a id="trace-30542"></a>
<a id="trace-30544"></a>
<a id="trace-30568"></a>
<a id="trace-30570"></a>
<a id="trace-30649"></a>
<a id="trace-30651"></a>
<a id="trace-30676"></a>
<a id="trace-30678"></a>
<a id="trace-30693"></a>
<a id="trace-30695"></a>
<a id="trace-30712"></a>
<a id="trace-30714"></a>
<a id="trace-30731"></a>
<a id="trace-30733"></a>
<a id="trace-30803"></a>
<a id="trace-30805"></a>
<a id="trace-30825"></a>
<a id="trace-30827"></a>
- 296.30s–356.30s (×121), actor 1, squad 0 (trace 28900): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.60s, trace 28886. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28922}.
<a id="trace-2157"></a>
- 301.20s–301.20s (×1), actor 1, squad 1 (events line 2157): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29054"></a>
- 301.20s–301.20s (×1), actor 1, squad 1 (trace 29054): renew committed intent (75 s lifetime). Knowledge: actor memory at 301.20s, trace 29054. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2351"></a>
- 357.20s–357.20s (×1), actor 1, squad 0 (events line 2351): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30854"></a>
- 357.20s–357.20s (×1), actor 1, squad 0 (trace 30854): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.20s, trace 30854. Next observer evidence: None.
<a id="trace-30857"></a>
<a id="trace-30859"></a>
<a id="trace-30876"></a>
<a id="trace-30878"></a>
<a id="trace-30897"></a>
<a id="trace-30899"></a>
- 357.30s–359.30s (×6), actor 1, squad 0 (trace 30857): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 357.20s, trace 30854. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30876}.

## Net delivery

215 matched order/radio deliveries; 510 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.477s; maximum 1.800s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 1978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 1979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 1990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 1991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3759: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3771: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3772: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3781: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3782: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 5432: estimate 6.90; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 5433: estimate 6.90; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 5434: estimate 6.90; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 5435: estimate 6.90; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6143: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6148: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6149: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6151: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 6153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 6154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6155: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6156: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6159: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6160: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6161: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6163: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6164: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 6165: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 6166: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7921: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7922: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7925: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7926: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7927: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7929: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7930: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 7931: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7932: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7933: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7934: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7936: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7937: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7938: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7939: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7941: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7942: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7943: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7944: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 9228: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 9229: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 9230: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 9231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 9232: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 9233: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 9234: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 9235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 9236: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 9237: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 9238: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 9239: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 9240: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 9241: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 9242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 9243: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 9244: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 9245: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 9246: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 9247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 9248: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 9249: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 9250: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 9251: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 9550: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9551: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9552: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9554: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9555: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9556: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 9558: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9559: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 9560: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 9561: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9562: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9563: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9565: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9566: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9567: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9568: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9570: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9571: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 9572: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 13139: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 13140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 13141: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 13142: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 13143: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 13144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 13145: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 13146: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 13147: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 13148: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 13149: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 13150: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 13151: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 13152: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 13153: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 13154: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 13155: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 13156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 13157: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 13158: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 13159: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16410: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 16411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16412: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16413: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16414: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 16415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 16416: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 16417: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 16418: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16419: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16420: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16421: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16422: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 16423: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16424: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16425: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 16426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16427: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16428: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16429: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 16639: estimate 13.55; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 16640: estimate 13.55; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.75s leader 5, trace 16786: estimate 14.13; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16838: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16840: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16841: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16842: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 16844: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 16845: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 16846: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 16847: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16848: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16849: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16850: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16851: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16852: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16853: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16855: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16856: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16857: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 17087: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 17088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 17089: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 17090: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 17091: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 17092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 17093: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 17094: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 17095: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 17096: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 17097: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 17098: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 17099: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 17100: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 17101: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 17102: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 17103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 17104: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 17105: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 17106: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 17532: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 17533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 17534: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 17535: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 17536: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 17537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 17538: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 17539: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 17540: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 17541: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 17542: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 17543: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 17544: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 17545: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 17546: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 17547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 17548: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 17549: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 17550: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 17658: estimate 14.07; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 17659: estimate 14.07; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 17786: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 17787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 17788: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 17789: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 17790: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 17791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 17792: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 17793: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 17794: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 17795: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 17796: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 17797: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 17798: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 17799: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 17800: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 17801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 17802: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 17803: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 17804: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 18357: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 18358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 18359: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 18360: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 18361: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 18362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 18363: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 18364: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 18365: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 18366: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 18367: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 18368: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 18369: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 18370: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 18371: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 18372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 18373: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 18374: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 18375: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 18869: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 18870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 18871: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 18872: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 18873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 18874: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 18875: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 18876: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 18877: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 18878: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 18879: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 18880: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 18881: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 18882: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 18883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 18884: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 18885: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 18886: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 19008: estimate 15.00; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 19075: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 19076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 19077: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 19078: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 19079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 19080: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 19081: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 19082: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 19083: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 19084: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 19085: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 19086: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 19087: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 19088: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 19089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 19090: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 19091: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 19092: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 19573: estimate 14.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 19574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 19575: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 19576: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 19577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 19578: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 19579: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 19580: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 19581: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 19582: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 19583: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 19584: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 19585: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 19586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 19587: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 19588: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 19589: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 19653: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 19654: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 19900: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 19901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 19902: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 19903: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 19904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 19905: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 19906: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19907: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19908: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19909: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 19910: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 19911: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19912: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19914: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19915: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 19916: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 20085: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 20086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 20087: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 20088: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 20089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 20090: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 20091: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 20092: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 20093: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 20094: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 20095: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 20096: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 20097: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 20098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 20099: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 20100: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 20101: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 22395: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 22396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 22397: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 22398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 22399: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 22400: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 22401: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 22402: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 22403: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 22404: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 22405: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 22406: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 22407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 22408: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 22409: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 22410: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 22553: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 22554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 22555: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 22556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 22557: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 22558: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 22559: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 22560: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 22561: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 22562: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 22563: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 22564: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 22565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 22566: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 22567: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 22568: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.15s leader 1, trace 22570: estimate 13.21; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.15s leader 1, trace 22571: estimate 13.21; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.15s leader 1, trace 22572: estimate 13.21; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 22860: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 22861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 22862: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 22863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 22864: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 22865: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 22866: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 22867: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 22868: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 22869: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 22870: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 22871: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 22872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 22873: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 22874: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 22875: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.80s leader 1, trace 22942: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.80s leader 1, trace 22943: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 23151: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 23152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 23153: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 23154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 23155: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 23156: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 23157: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 23158: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 23159: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 23160: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 23161: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 23162: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 23163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 23164: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 23165: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 23166: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 23312: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 23313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 23314: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 23315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 23316: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 23317: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 23318: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 23319: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 23320: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 23321: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 23322: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 23323: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 23324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 23325: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 23326: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 23327: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 23472: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 23473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 23474: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 23475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 23476: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 23477: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 23478: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 23479: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 23480: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 23481: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 23482: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 23483: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 23484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 23485: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 23486: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 23487: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 23635: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 23636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 23637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 23638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 23639: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 23640: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 23641: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 23642: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 23643: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 23644: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 23645: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 23646: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 23647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 23648: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 23649: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 23650: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 23797: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 23798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 23799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 23800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 23801: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 23802: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 23803: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 23804: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 23805: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 23806: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 23807: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 23808: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 23809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 23810: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 23811: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 23812: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 23953: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 23954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 23955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 23956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 23957: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 23958: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 23959: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 23960: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 23961: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 23962: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 23963: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 23964: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 23965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 23966: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 23967: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 23968: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24110: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 24111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 24112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 24113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 24114: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 24115: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24116: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24117: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24118: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24119: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24120: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24121: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 24122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24123: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 24124: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 24125: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 24273: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 24274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 24275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 24276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 24277: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 24278: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 24279: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 24280: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 24281: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 24282: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 24283: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 24284: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 24285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 24286: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 24287: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 24288: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 24446: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 24447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 24448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 24449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 24450: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 24451: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 24452: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 24453: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 24454: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 24455: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 24456: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 24457: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 24458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 24459: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 24460: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 24461: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 24604: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 24605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 24606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 24607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 24608: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 24609: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 24610: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 24611: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 24612: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 24613: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 24614: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 24615: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 24616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 24617: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 24618: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 24619: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 24760: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 24761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 24763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 24764: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 24765: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 24766: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 24767: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 24768: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 24769: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 24770: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 24771: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 24772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 24773: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 24774: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 24775: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 172.05s leader 1, trace 24867: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 24934: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 24935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 24936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 24937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 24938: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 24939: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 24940: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 24941: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 24942: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 24943: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 24944: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 24945: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 24946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 24947: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 24948: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 24949: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.65s leader 1, trace 25044: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 25103: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 25104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 25105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 25106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 25107: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 25108: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 25109: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 25110: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 25111: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 25112: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 25113: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 25114: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 25115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 25116: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 25117: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 25118: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 25262: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 25263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 25264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 25265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 25266: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 25267: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 25268: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 25269: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 25270: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 25271: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 25272: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 25273: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 25274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 25275: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 25276: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 25277: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 25419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 25420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 25421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 25422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 25423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 25424: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 25425: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 25426: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 25427: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 25428: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 25429: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 25430: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 25431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 25432: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 25433: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 25434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 25590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 25591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 25592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 25593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 25594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 25595: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 25596: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 25597: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 25598: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 25599: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 25600: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 25601: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 25602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 25603: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 25604: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 25605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 25756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 25760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 25761: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25762: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25763: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25764: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 25765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25766: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25767: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 25768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 25769: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25770: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 25771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 25913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 25914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 25915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 25916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 25917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 25918: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 25919: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 25920: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 25921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 25922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 25923: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 25924: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 25925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 25926: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 25927: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 25928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 26070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 26071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 26072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 26073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 26074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 26075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 26076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 26077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 26078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 26079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 26080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 26081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 26082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 26083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 26084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 26085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 26240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 26241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 26242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 26243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 26244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 26245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 26246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 26247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 26248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 26249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 26250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 26251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 26252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 26253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 26254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 26255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 26406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 26407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 26408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 26409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 26410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 26411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 26412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 26413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 26414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 26415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 26416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 26417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 26418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 26419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 26420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 26421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 26557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 26558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 26559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 26561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 26562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 26563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 26564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 26565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 26566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 26567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 26568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 26569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 26570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 26571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 26572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 26715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 26716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 26717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 26718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 26719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 26720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 26721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 26722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 26723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 26724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 26725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 26726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 26727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 26728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 26729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 26730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.90s leader 1, trace 26860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 26884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 26885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 26886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 26887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 26888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 26889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 26890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 26891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 26892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 26893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 26894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 26895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 26896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 26897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 26898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 26899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 239.55s leader 1, trace 27049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 27055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 27056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 27057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 27058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 27059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 27060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 27061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 27062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 27063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 27064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 27065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 27066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 27067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 27068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 27069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 27070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 27218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 27219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 27220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 27221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 27222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 27223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 27224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 27225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 27226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 27227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 27228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 27229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 27230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 27231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 27232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 27233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 27374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 27375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 27376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 27377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 27378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 27379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 27380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 27381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 27382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 27383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 27384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 27385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 27386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 27387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 27388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 27389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 27534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 27535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 27536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 27537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 27538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 27539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 27540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 27541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 27542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 27543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 27544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 27545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 27546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 27547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 27548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 27549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 27695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 27696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 27697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 27698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 27699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 27700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 27701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 27702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 27703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 27704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 27705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 27706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 27707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 27708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 27709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 27710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 27861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 27862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 27863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 27864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 27865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 27866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 27867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 27868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 27869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 27870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 27871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 27872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 27873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 27874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 27875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 27876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 28014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 28015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 28016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 28017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 28018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 28019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 28020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 28021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 28022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 28023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 28024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 28025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 28026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 28027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 28028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 28029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 28170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 28171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 28172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 28173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 28174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 28175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 28176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 28177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 28178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 28179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 28180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 28181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 28182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 28183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 28184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 28185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 28330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 28331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 28332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 28333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 28334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 28335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 28336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 28337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 28338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 28339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 28340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 28341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 28342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 28343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 28344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 28345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 28498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 28499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 28500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 28501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 28502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 28503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 28504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 28505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 28506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 28507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 28508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 28509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 28510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 28511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 28512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 28513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 28655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 28656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 28657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 28658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 28659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 28660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 28661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 28662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 28663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 28664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 28665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 28666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 28667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 28668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 28669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 28670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 28816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 28817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 28818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 28819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 8, trace 28820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 28821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 28825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 28831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.60s leader 1, trace 28886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 28981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 28982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 28983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 28984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 8, trace 28985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 28986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 28996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.20s leader 1, trace 29054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 29149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 29150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 29151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 29152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 8, trace 29153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 29154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 29155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 29156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 29157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 29158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 29159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 29160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 29161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 29162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 29163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 29164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 29300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 29301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 29302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 29303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 8, trace 29304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 29305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 29307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 29308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 29310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 29312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 29315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 29457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 29458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 29459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 29460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 8, trace 29461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 29462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 29472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 29624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 29625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 29626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 29627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 8, trace 29628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 29629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 29793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 29794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 29795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 29796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 8, trace 29797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 29798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 29800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 29801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 29802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 29804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 29806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 29808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 29941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 29942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 29943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 29944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 8, trace 29945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 29946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 29950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 29956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 30099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 30100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 30101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 30102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 8, trace 30103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 30104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 30106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 30107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 30108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 30109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 30111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 30114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 30263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 30264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 30265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 30266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 8, trace 30267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 30268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 30270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 30278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 30434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 30435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 30436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 30437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 8, trace 30438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 30439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 30449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 30591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 30592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 30593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 8, trace 30594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 30595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 30605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 30743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 30744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 30745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 30746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 8, trace 30747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 30748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 30750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 30751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 30752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 30754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 30756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 30758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.20s leader 1, trace 30854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 30911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 30912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 30913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 30914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 8, trace 30915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 30916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 30918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 30919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 30920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 30922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 30926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Seth incapacitated
- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Cole killed in action
- 1: Dane incapacitated
- 1: Moss killed in action
- 1: Ellis killed in action
- 1: Iven incapacitated

## Outcome attribution

- 110.15s, evidence 1519: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968670323315, 'next_transition': 22617}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 110.15s, evidence 22570: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.378390 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968670323315, 'next_transition': 22617}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 110.15s, evidence 22571: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.378390 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968670323315, 'next_transition': 22617}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.80s, evidence 1543: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22980}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.80s, evidence 22942: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387244 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22980}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.80s, evidence 22943: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387244 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22980}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 172.05s, evidence 1721: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24881}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.65s, evidence 1740: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 233.90s, evidence 1931: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 239.55s, evidence 1956: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 269.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2157}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 295.60s, evidence 2135: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 301.20s, evidence 2157: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 357.20s, evidence 2351: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
