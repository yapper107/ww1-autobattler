# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/17/108/good-ember/battle-108-1789674022652947344`

## Battle summary

**Ember** · 360 s · 532 shots.

### Turning points

- 18.8s, squad 4: contact (events line 225). First recorded contact.
- 24.0s, squad 0: withdrawal ([trace 4372](#trace-4372)). 63.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 24.0s, squad 1: withdrawal ([trace 4779](#trace-4779)). 69.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 42.0s, squad 0: help call ([trace 6828](#trace-6828)). No completion observed before termination.
- 42.0s, squad 1: help call ([trace 6829](#trace-6829)). No completion observed before termination.
- 137.6s, squad 1: help answer ([trace 14351](#trace-14351)). 172.4s, squad 1: took cover and returned fire.
- 155.4s, squad 0: assault ([trace 18635](#trace-18635)). 156.4s, squad 0: advanced tactically.
- 161.3s, squad 0: help call ([trace 19939](#trace-19939)). No completion observed before termination.
- 171.4s, squad 1: help call ([trace 23286](#trace-23286)). No completion observed before termination.
- 173.7s, squad 0: withdrawal ([trace 23527](#trace-23527)). 222.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 5 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, answered a neighbour with support by fire and 3 further drill types; withdrew; 63 shots, 4/8 lost.
- **1** — FightHere; chose broke contact, HelpSquad arrived within support range and 2 further drill types; withdrew; 22 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 301 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 146 shots, 1/4 lost.

### Decisions and attribution

At 150.9s, squad 1 chose FightHere: nearest known group ([trace 17112](#trace-17112)), followed by 6 shots and 1 own casualties; estimate 10.1 against 0 distinct squad-reported contacts; At 172.4s, squad 1 chose took cover and returned fire ([trace 23347](#trace-23347)), followed by 2 shots and 0 own casualties; estimate 13.2 against 0 distinct squad-reported contacts; At 19.4s, squad 0 chose took cover and returned fire ([trace 2387](#trace-2387)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1439](#trace-1439)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1741}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 5442](#trace-5442)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.187523498148857, 'next_transition': 5500}.

### Communication

412 matched deliveries (mean 0.54s, max 6.15s); 389 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.75s, squad 4, contact, evidence events line 225: First recorded contact; .
- 23.95s, squad 0, withdrawal, evidence 4372: BreakContact: believed ratio at least two without superiority; 63.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 23.95s, squad 1, withdrawal, evidence 4779: BreakContact: believed ratio at least two without superiority; 69.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 42.05s, squad 0, help call, evidence 6828: NeedSupport; No completion observed before termination.
- 42.05s, squad 1, help call, evidence 6829: NeedSupport; No completion observed before termination.
- 137.60s, squad 1, help answer, evidence 14351: HelpSquad arrived within support range; area = deployment lane UNION objective disc radius 60 m, clipped to map; 172.4s, squad 1: took cover and returned fire.
- 155.45s, squad 0, assault, evidence 18635: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 156.4s, squad 0: advanced tactically.
- 161.30s, squad 0, help call, evidence 19939: NeedSupport; No completion observed before termination.
- 171.45s, squad 1, help call, evidence 23286: NeedSupport; No completion observed before termination.
- 173.70s, squad 0, withdrawal, evidence 23527: BreakContact: believed ratio at least two without superiority; 222.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 180.75s, squad 1, help call, evidence 24243: NeedSupport; No completion observed before termination.
- 184.25s, squad 0, help call, evidence 24386: NeedSupport; No completion observed before termination.
- 239.85s, squad 0, help answer, evidence 27815: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 302.8s, squad 0: took cover and returned fire.
- 280.60s, squad 0, help call, evidence 31899: NeedSupport; No completion observed before termination.
- 306.60s, squad 0, withdrawal, evidence 32932: BreakContact: believed ratio at least two without superiority; 330.6s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.439571754114752, 'next_transition': 1103}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.439571754114752, 'next_transition': 1103}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.439571754114752, 'next_transition': 1103}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.3292109493221, 'next_transition': 156}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.3292109493221, 'next_transition': 156}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.3292109493221, 'next_transition': 156}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-768"></a>
<a id="trace-770"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-985"></a>
<a id="trace-987"></a>
<a id="trace-1014"></a>
<a id="trace-1016"></a>
<a id="trace-1053"></a>
<a id="trace-1055"></a>
<a id="trace-1073"></a>
<a id="trace-1075"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1176"></a>
<a id="trace-1178"></a>
<a id="trace-1200"></a>
<a id="trace-1202"></a>
<a id="trace-1220"></a>
<a id="trace-1222"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
<a id="trace-1380"></a>
<a id="trace-1382"></a>
<a id="trace-1414"></a>
<a id="trace-1416"></a>
<a id="trace-1435"></a>
<a id="trace-1437"></a>
<a id="trace-1711"></a>
<a id="trace-1713"></a>
<a id="trace-1737"></a>
<a id="trace-1739"></a>
<a id="trace-2063"></a>
<a id="trace-2065"></a>
<a id="trace-2091"></a>
<a id="trace-2093"></a>
<a id="trace-2182"></a>
<a id="trace-2184"></a>
<a id="trace-2224"></a>
<a id="trace-2226"></a>
<a id="trace-2253"></a>
<a id="trace-2255"></a>
<a id="trace-2282"></a>
<a id="trace-2284"></a>
<a id="trace-2295"></a>
<a id="trace-2297"></a>
<a id="trace-2313"></a>
<a id="trace-2315"></a>
<a id="trace-2336"></a>
<a id="trace-2338"></a>
<a id="trace-2354"></a>
<a id="trace-2356"></a>
<a id="trace-2378"></a>
<a id="trace-2380"></a>
<a id="trace-2657"></a>
<a id="trace-2659"></a>
<a id="trace-3353"></a>
<a id="trace-3355"></a>
<a id="trace-3994"></a>
<a id="trace-3996"></a>
<a id="trace-4058"></a>
<a id="trace-4060"></a>
<a id="trace-4121"></a>
<a id="trace-4123"></a>
<a id="trace-4179"></a>
<a id="trace-4181"></a>
<a id="trace-4263"></a>
<a id="trace-4265"></a>
<a id="trace-4326"></a>
<a id="trace-4328"></a>
<a id="trace-4361"></a>
<a id="trace-4363"></a>
<a id="trace-5208"></a>
<a id="trace-5210"></a>
<a id="trace-5248"></a>
<a id="trace-5250"></a>
<a id="trace-5350"></a>
<a id="trace-5352"></a>
<a id="trace-5382"></a>
<a id="trace-5384"></a>
<a id="trace-5415"></a>
<a id="trace-5417"></a>
<a id="trace-5461"></a>
<a id="trace-5463"></a>
<a id="trace-5504"></a>
<a id="trace-5506"></a>
<a id="trace-5522"></a>
<a id="trace-5524"></a>
<a id="trace-5557"></a>
<a id="trace-5559"></a>
<a id="trace-5576"></a>
<a id="trace-5578"></a>
<a id="trace-5603"></a>
<a id="trace-5605"></a>
<a id="trace-5621"></a>
<a id="trace-5623"></a>
<a id="trace-5724"></a>
<a id="trace-5726"></a>
<a id="trace-5754"></a>
<a id="trace-5756"></a>
<a id="trace-5777"></a>
<a id="trace-5779"></a>
<a id="trace-5805"></a>
<a id="trace-5807"></a>
<a id="trace-5830"></a>
<a id="trace-5832"></a>
<a id="trace-5855"></a>
<a id="trace-5857"></a>
<a id="trace-5879"></a>
<a id="trace-5881"></a>
<a id="trace-5895"></a>
<a id="trace-5897"></a>
<a id="trace-5932"></a>
<a id="trace-5934"></a>
<a id="trace-5948"></a>
<a id="trace-5950"></a>
<a id="trace-6045"></a>
<a id="trace-6047"></a>
<a id="trace-6069"></a>
<a id="trace-6071"></a>
<a id="trace-6096"></a>
<a id="trace-6098"></a>
<a id="trace-6285"></a>
<a id="trace-6287"></a>
<a id="trace-6304"></a>
<a id="trace-6306"></a>
<a id="trace-6324"></a>
<a id="trace-6326"></a>
<a id="trace-6356"></a>
<a id="trace-6358"></a>
<a id="trace-6542"></a>
<a id="trace-6544"></a>
<a id="trace-6578"></a>
<a id="trace-6580"></a>
<a id="trace-6621"></a>
<a id="trace-6623"></a>
<a id="trace-6713"></a>
<a id="trace-6715"></a>
<a id="trace-6741"></a>
<a id="trace-6743"></a>
<a id="trace-6789"></a>
<a id="trace-6791"></a>
<a id="trace-6813"></a>
<a id="trace-6815"></a>
<a id="trace-6857"></a>
<a id="trace-6859"></a>
<a id="trace-6877"></a>
<a id="trace-6879"></a>
<a id="trace-6908"></a>
<a id="trace-6910"></a>
<a id="trace-6927"></a>
<a id="trace-6929"></a>
<a id="trace-6955"></a>
<a id="trace-6957"></a>
<a id="trace-6987"></a>
<a id="trace-6989"></a>
<a id="trace-7074"></a>
<a id="trace-7076"></a>
<a id="trace-7095"></a>
<a id="trace-7097"></a>
<a id="trace-7127"></a>
<a id="trace-7129"></a>
<a id="trace-7150"></a>
<a id="trace-7152"></a>
<a id="trace-7174"></a>
<a id="trace-7176"></a>
<a id="trace-7198"></a>
<a id="trace-7200"></a>
<a id="trace-7222"></a>
<a id="trace-7224"></a>
<a id="trace-7246"></a>
<a id="trace-7248"></a>
<a id="trace-7266"></a>
<a id="trace-7268"></a>
<a id="trace-7286"></a>
<a id="trace-7288"></a>
<a id="trace-7375"></a>
<a id="trace-7377"></a>
<a id="trace-7396"></a>
<a id="trace-7398"></a>
<a id="trace-7414"></a>
<a id="trace-7416"></a>
<a id="trace-7429"></a>
<a id="trace-7431"></a>
<a id="trace-7509"></a>
<a id="trace-7511"></a>
<a id="trace-7532"></a>
<a id="trace-7534"></a>
<a id="trace-7551"></a>
<a id="trace-7553"></a>
<a id="trace-7737"></a>
<a id="trace-7739"></a>
<a id="trace-7762"></a>
<a id="trace-7764"></a>
<a id="trace-7798"></a>
<a id="trace-7800"></a>
<a id="trace-7887"></a>
<a id="trace-7889"></a>
<a id="trace-7908"></a>
<a id="trace-7910"></a>
<a id="trace-7949"></a>
<a id="trace-7951"></a>
<a id="trace-7981"></a>
<a id="trace-7983"></a>
<a id="trace-8001"></a>
<a id="trace-8003"></a>
<a id="trace-8025"></a>
<a id="trace-8027"></a>
<a id="trace-8052"></a>
<a id="trace-8054"></a>
<a id="trace-8069"></a>
<a id="trace-8071"></a>
<a id="trace-8091"></a>
<a id="trace-8093"></a>
<a id="trace-8109"></a>
<a id="trace-8111"></a>
<a id="trace-8198"></a>
<a id="trace-8200"></a>
<a id="trace-8221"></a>
<a id="trace-8223"></a>
<a id="trace-8241"></a>
<a id="trace-8243"></a>
<a id="trace-8259"></a>
<a id="trace-8261"></a>
<a id="trace-8289"></a>
<a id="trace-8291"></a>
<a id="trace-8310"></a>
<a id="trace-8312"></a>
<a id="trace-8438"></a>
<a id="trace-8440"></a>
<a id="trace-8462"></a>
<a id="trace-8464"></a>
<a id="trace-8505"></a>
<a id="trace-8507"></a>
<a id="trace-8542"></a>
<a id="trace-8544"></a>
<a id="trace-8651"></a>
<a id="trace-8653"></a>
<a id="trace-8712"></a>
<a id="trace-8714"></a>
<a id="trace-8753"></a>
<a id="trace-8755"></a>
<a id="trace-8776"></a>
<a id="trace-8778"></a>
<a id="trace-8795"></a>
<a id="trace-8797"></a>
<a id="trace-8826"></a>
<a id="trace-8828"></a>
<a id="trace-8854"></a>
<a id="trace-8856"></a>
<a id="trace-8875"></a>
<a id="trace-8877"></a>
<a id="trace-8901"></a>
<a id="trace-8903"></a>
<a id="trace-9003"></a>
<a id="trace-9005"></a>
<a id="trace-9021"></a>
<a id="trace-9023"></a>
<a id="trace-9055"></a>
<a id="trace-9057"></a>
<a id="trace-9069"></a>
<a id="trace-9071"></a>
<a id="trace-9087"></a>
<a id="trace-9089"></a>
<a id="trace-9098"></a>
<a id="trace-9100"></a>
<a id="trace-9121"></a>
<a id="trace-9123"></a>
<a id="trace-9131"></a>
<a id="trace-9133"></a>
<a id="trace-9152"></a>
<a id="trace-9154"></a>
<a id="trace-9169"></a>
<a id="trace-9171"></a>
<a id="trace-9249"></a>
<a id="trace-9251"></a>
<a id="trace-9268"></a>
<a id="trace-9270"></a>
<a id="trace-9288"></a>
<a id="trace-9290"></a>
<a id="trace-9301"></a>
<a id="trace-9303"></a>
<a id="trace-9323"></a>
<a id="trace-9325"></a>
<a id="trace-9338"></a>
<a id="trace-9340"></a>
<a id="trace-9355"></a>
<a id="trace-9357"></a>
<a id="trace-9365"></a>
<a id="trace-9367"></a>
<a id="trace-9379"></a>
<a id="trace-9381"></a>
<a id="trace-9390"></a>
<a id="trace-9392"></a>
<a id="trace-9470"></a>
<a id="trace-9472"></a>
<a id="trace-9479"></a>
<a id="trace-9481"></a>
<a id="trace-9496"></a>
<a id="trace-9498"></a>
<a id="trace-9506"></a>
<a id="trace-9508"></a>
<a id="trace-9531"></a>
<a id="trace-9533"></a>
<a id="trace-9542"></a>
<a id="trace-9544"></a>
<a id="trace-9568"></a>
<a id="trace-9570"></a>
<a id="trace-9588"></a>
<a id="trace-9590"></a>
<a id="trace-9608"></a>
<a id="trace-9610"></a>
<a id="trace-9623"></a>
<a id="trace-9625"></a>
<a id="trace-9703"></a>
<a id="trace-9705"></a>
<a id="trace-9710"></a>
<a id="trace-9712"></a>
<a id="trace-9723"></a>
<a id="trace-9725"></a>
<a id="trace-9735"></a>
<a id="trace-9737"></a>
<a id="trace-9759"></a>
<a id="trace-9761"></a>
<a id="trace-9775"></a>
<a id="trace-9777"></a>
<a id="trace-9919"></a>
<a id="trace-9921"></a>
<a id="trace-9953"></a>
<a id="trace-9955"></a>
<a id="trace-10144"></a>
<a id="trace-10146"></a>
<a id="trace-10181"></a>
<a id="trace-10183"></a>
<a id="trace-10293"></a>
<a id="trace-10295"></a>
<a id="trace-10346"></a>
<a id="trace-10348"></a>
<a id="trace-10369"></a>
<a id="trace-10371"></a>
<a id="trace-10398"></a>
<a id="trace-10400"></a>
<a id="trace-10424"></a>
<a id="trace-10426"></a>
<a id="trace-10447"></a>
<a id="trace-10449"></a>
<a id="trace-10469"></a>
<a id="trace-10471"></a>
<a id="trace-10492"></a>
<a id="trace-10494"></a>
<a id="trace-10520"></a>
<a id="trace-10522"></a>
<a id="trace-10542"></a>
<a id="trace-10544"></a>
<a id="trace-10630"></a>
<a id="trace-10632"></a>
<a id="trace-10654"></a>
<a id="trace-10656"></a>
<a id="trace-10678"></a>
<a id="trace-10680"></a>
<a id="trace-10717"></a>
<a id="trace-10719"></a>
<a id="trace-10746"></a>
<a id="trace-10748"></a>
<a id="trace-10767"></a>
<a id="trace-10769"></a>
<a id="trace-10796"></a>
<a id="trace-10798"></a>
<a id="trace-10822"></a>
<a id="trace-10824"></a>
<a id="trace-10838"></a>
<a id="trace-10840"></a>
<a id="trace-10860"></a>
<a id="trace-10862"></a>
<a id="trace-10946"></a>
<a id="trace-10948"></a>
<a id="trace-10962"></a>
<a id="trace-10964"></a>
<a id="trace-10993"></a>
<a id="trace-10995"></a>
<a id="trace-11064"></a>
<a id="trace-11066"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11296"></a>
<a id="trace-11298"></a>
<a id="trace-11332"></a>
<a id="trace-11334"></a>
<a id="trace-11373"></a>
<a id="trace-11375"></a>
<a id="trace-11406"></a>
<a id="trace-11408"></a>
<a id="trace-11428"></a>
<a id="trace-11430"></a>
<a id="trace-11509"></a>
<a id="trace-11511"></a>
<a id="trace-11523"></a>
<a id="trace-11525"></a>
<a id="trace-11545"></a>
<a id="trace-11547"></a>
<a id="trace-11558"></a>
<a id="trace-11560"></a>
<a id="trace-11588"></a>
<a id="trace-11590"></a>
<a id="trace-11607"></a>
<a id="trace-11609"></a>
<a id="trace-11638"></a>
<a id="trace-11640"></a>
<a id="trace-11653"></a>
<a id="trace-11655"></a>
<a id="trace-11845"></a>
<a id="trace-11847"></a>
<a id="trace-11866"></a>
<a id="trace-11868"></a>
<a id="trace-11971"></a>
<a id="trace-11973"></a>
<a id="trace-12009"></a>
<a id="trace-12011"></a>
<a id="trace-12042"></a>
<a id="trace-12044"></a>
<a id="trace-12071"></a>
<a id="trace-12073"></a>
<a id="trace-12097"></a>
<a id="trace-12099"></a>
<a id="trace-12137"></a>
<a id="trace-12139"></a>
<a id="trace-12160"></a>
<a id="trace-12162"></a>
<a id="trace-12242"></a>
<a id="trace-12244"></a>
<a id="trace-12277"></a>
<a id="trace-12279"></a>
<a id="trace-12297"></a>
<a id="trace-12299"></a>
<a id="trace-12448"></a>
<a id="trace-12450"></a>
<a id="trace-12469"></a>
<a id="trace-12471"></a>
<a id="trace-12500"></a>
<a id="trace-12502"></a>
<a id="trace-12527"></a>
<a id="trace-12529"></a>
<a id="trace-12553"></a>
<a id="trace-12555"></a>
<a id="trace-12581"></a>
<a id="trace-12583"></a>
<a id="trace-12611"></a>
<a id="trace-12613"></a>
<a id="trace-12624"></a>
<a id="trace-12626"></a>
<a id="trace-12653"></a>
<a id="trace-12655"></a>
<a id="trace-12665"></a>
<a id="trace-12667"></a>
<a id="trace-12764"></a>
<a id="trace-12766"></a>
<a id="trace-12778"></a>
<a id="trace-12780"></a>
<a id="trace-12961"></a>
<a id="trace-12963"></a>
<a id="trace-12987"></a>
<a id="trace-12989"></a>
<a id="trace-13021"></a>
<a id="trace-13023"></a>
<a id="trace-13051"></a>
<a id="trace-13053"></a>
<a id="trace-13093"></a>
<a id="trace-13095"></a>
<a id="trace-13114"></a>
<a id="trace-13116"></a>
<a id="trace-13154"></a>
<a id="trace-13156"></a>
<a id="trace-13173"></a>
<a id="trace-13175"></a>
<a id="trace-13261"></a>
<a id="trace-13263"></a>
<a id="trace-13279"></a>
<a id="trace-13281"></a>
<a id="trace-13308"></a>
<a id="trace-13310"></a>
<a id="trace-13329"></a>
<a id="trace-13331"></a>
<a id="trace-13355"></a>
<a id="trace-13357"></a>
<a id="trace-13370"></a>
<a id="trace-13372"></a>
<a id="trace-13400"></a>
<a id="trace-13402"></a>
<a id="trace-13422"></a>
<a id="trace-13424"></a>
<a id="trace-13456"></a>
<a id="trace-13458"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13684"></a>
<a id="trace-13686"></a>
<a id="trace-13701"></a>
<a id="trace-13703"></a>
<a id="trace-13735"></a>
<a id="trace-13737"></a>
<a id="trace-14002"></a>
<a id="trace-14004"></a>
<a id="trace-14031"></a>
<a id="trace-14033"></a>
<a id="trace-14054"></a>
<a id="trace-14056"></a>
<a id="trace-14080"></a>
<a id="trace-14082"></a>
<a id="trace-14098"></a>
<a id="trace-14100"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14159"></a>
<a id="trace-14161"></a>
<a id="trace-14237"></a>
<a id="trace-14239"></a>
<a id="trace-14255"></a>
<a id="trace-14257"></a>
<a id="trace-14288"></a>
<a id="trace-14290"></a>
<a id="trace-14313"></a>
<a id="trace-14315"></a>
<a id="trace-14333"></a>
<a id="trace-14335"></a>
<a id="trace-15772"></a>
<a id="trace-15774"></a>
<a id="trace-15802"></a>
<a id="trace-15804"></a>
<a id="trace-15982"></a>
<a id="trace-15984"></a>
<a id="trace-16011"></a>
<a id="trace-16013"></a>
<a id="trace-16032"></a>
<a id="trace-16034"></a>
<a id="trace-16132"></a>
<a id="trace-16134"></a>
<a id="trace-16148"></a>
<a id="trace-16150"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16189"></a>
<a id="trace-16191"></a>
<a id="trace-16217"></a>
<a id="trace-16219"></a>
<a id="trace-16232"></a>
<a id="trace-16234"></a>
<a id="trace-16257"></a>
<a id="trace-16259"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16298"></a>
<a id="trace-16300"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16408"></a>
<a id="trace-16410"></a>
<a id="trace-16422"></a>
<a id="trace-16424"></a>
<a id="trace-16761"></a>
<a id="trace-16763"></a>
<a id="trace-16788"></a>
<a id="trace-16790"></a>
<a id="trace-16832"></a>
<a id="trace-16834"></a>
<a id="trace-16852"></a>
<a id="trace-16854"></a>
<a id="trace-16876"></a>
<a id="trace-16878"></a>
<a id="trace-16940"></a>
<a id="trace-16942"></a>
<a id="trace-16959"></a>
<a id="trace-16961"></a>
<a id="trace-16982"></a>
<a id="trace-16984"></a>
<a id="trace-17076"></a>
<a id="trace-17078"></a>
<a id="trace-17102"></a>
<a id="trace-17104"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17152"></a>
<a id="trace-17154"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17204"></a>
<a id="trace-17206"></a>
<a id="trace-17222"></a>
<a id="trace-17224"></a>
<a id="trace-17237"></a>
<a id="trace-17239"></a>
<a id="trace-17261"></a>
<a id="trace-17263"></a>
<a id="trace-17272"></a>
<a id="trace-17274"></a>
<a id="trace-17350"></a>
<a id="trace-17352"></a>
<a id="trace-18787"></a>
<a id="trace-18789"></a>
<a id="trace-18814"></a>
<a id="trace-18816"></a>
<a id="trace-19237"></a>
<a id="trace-19239"></a>
<a id="trace-19267"></a>
<a id="trace-19269"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19778"></a>
<a id="trace-19780"></a>
<a id="trace-19796"></a>
<a id="trace-19798"></a>
<a id="trace-19889"></a>
<a id="trace-19891"></a>
<a id="trace-19913"></a>
<a id="trace-19915"></a>
<a id="trace-19934"></a>
<a id="trace-19936"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-20421"></a>
<a id="trace-20423"></a>
<a id="trace-20438"></a>
<a id="trace-20440"></a>
<a id="trace-20466"></a>
<a id="trace-20468"></a>
<a id="trace-20494"></a>
<a id="trace-20496"></a>
<a id="trace-20954"></a>
<a id="trace-20956"></a>
<a id="trace-21840"></a>
<a id="trace-21842"></a>
<a id="trace-21952"></a>
<a id="trace-21954"></a>
<a id="trace-22431"></a>
<a id="trace-22433"></a>
<a id="trace-22465"></a>
<a id="trace-22467"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22558"></a>
<a id="trace-22560"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22639"></a>
<a id="trace-22641"></a>
<a id="trace-22676"></a>
<a id="trace-22678"></a>
<a id="trace-23116"></a>
<a id="trace-23118"></a>
<a id="trace-23131"></a>
<a id="trace-23133"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23254"></a>
<a id="trace-23256"></a>
<a id="trace-23274"></a>
<a id="trace-23276"></a>
<a id="trace-23305"></a>
<a id="trace-23307"></a>
<a id="trace-23338"></a>
<a id="trace-23340"></a>
<a id="trace-23492"></a>
<a id="trace-23494"></a>
<a id="trace-23517"></a>
<a id="trace-23519"></a>
<a id="trace-23795"></a>
<a id="trace-23797"></a>
<a id="trace-23821"></a>
<a id="trace-23823"></a>
<a id="trace-23850"></a>
<a id="trace-23852"></a>
<a id="trace-23945"></a>
<a id="trace-23947"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-23988"></a>
<a id="trace-23990"></a>
<a id="trace-24015"></a>
<a id="trace-24017"></a>
<a id="trace-24038"></a>
<a id="trace-24040"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24086"></a>
<a id="trace-24088"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24126"></a>
<a id="trace-24128"></a>
<a id="trace-24142"></a>
<a id="trace-24144"></a>
<a id="trace-24231"></a>
<a id="trace-24233"></a>
<a id="trace-24256"></a>
<a id="trace-24258"></a>
<a id="trace-24282"></a>
<a id="trace-24284"></a>
<a id="trace-24295"></a>
<a id="trace-24297"></a>
<a id="trace-24314"></a>
<a id="trace-24316"></a>
<a id="trace-24335"></a>
<a id="trace-24337"></a>
<a id="trace-24355"></a>
<a id="trace-24357"></a>
<a id="trace-24368"></a>
<a id="trace-24370"></a>
<a id="trace-24399"></a>
<a id="trace-24401"></a>
<a id="trace-24419"></a>
<a id="trace-24421"></a>
<a id="trace-24506"></a>
<a id="trace-24508"></a>
<a id="trace-24523"></a>
<a id="trace-24525"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24564"></a>
<a id="trace-24566"></a>
<a id="trace-24590"></a>
<a id="trace-24592"></a>
<a id="trace-24603"></a>
<a id="trace-24605"></a>
<a id="trace-24629"></a>
<a id="trace-24631"></a>
<a id="trace-24644"></a>
<a id="trace-24646"></a>
<a id="trace-24672"></a>
<a id="trace-24674"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24771"></a>
<a id="trace-24773"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24808"></a>
<a id="trace-24810"></a>
<a id="trace-24822"></a>
<a id="trace-24824"></a>
<a id="trace-25070"></a>
<a id="trace-25072"></a>
<a id="trace-25092"></a>
<a id="trace-25094"></a>
<a id="trace-25133"></a>
<a id="trace-25135"></a>
<a id="trace-25147"></a>
<a id="trace-25149"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25211"></a>
<a id="trace-25213"></a>
<a id="trace-25318"></a>
<a id="trace-25320"></a>
<a id="trace-25358"></a>
<a id="trace-25360"></a>
<a id="trace-25397"></a>
<a id="trace-25399"></a>
<a id="trace-25421"></a>
<a id="trace-25423"></a>
<a id="trace-25448"></a>
<a id="trace-25450"></a>
<a id="trace-25475"></a>
<a id="trace-25477"></a>
<a id="trace-25515"></a>
<a id="trace-25517"></a>
<a id="trace-25533"></a>
<a id="trace-25535"></a>
<a id="trace-25570"></a>
<a id="trace-25572"></a>
<a id="trace-25585"></a>
<a id="trace-25587"></a>
<a id="trace-25670"></a>
<a id="trace-25672"></a>
<a id="trace-25685"></a>
<a id="trace-25687"></a>
<a id="trace-25714"></a>
<a id="trace-25716"></a>
<a id="trace-25730"></a>
<a id="trace-25732"></a>
<a id="trace-25749"></a>
<a id="trace-25751"></a>
<a id="trace-25770"></a>
<a id="trace-25772"></a>
<a id="trace-25795"></a>
<a id="trace-25797"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25935"></a>
<a id="trace-25937"></a>
<a id="trace-25948"></a>
<a id="trace-25950"></a>
<a id="trace-25967"></a>
<a id="trace-25969"></a>
<a id="trace-25986"></a>
<a id="trace-25988"></a>
<a id="trace-26005"></a>
<a id="trace-26007"></a>
<a id="trace-26020"></a>
<a id="trace-26022"></a>
<a id="trace-26154"></a>
<a id="trace-26156"></a>
<a id="trace-26174"></a>
<a id="trace-26176"></a>
<a id="trace-26213"></a>
<a id="trace-26215"></a>
<a id="trace-26224"></a>
<a id="trace-26226"></a>
<a id="trace-26305"></a>
<a id="trace-26307"></a>
<a id="trace-26343"></a>
<a id="trace-26345"></a>
<a id="trace-26369"></a>
<a id="trace-26371"></a>
<a id="trace-26387"></a>
<a id="trace-26389"></a>
<a id="trace-26414"></a>
<a id="trace-26416"></a>
<a id="trace-26433"></a>
<a id="trace-26435"></a>
<a id="trace-26462"></a>
<a id="trace-26464"></a>
<a id="trace-26481"></a>
<a id="trace-26483"></a>
<a id="trace-26504"></a>
<a id="trace-26506"></a>
<a id="trace-26524"></a>
<a id="trace-26526"></a>
<a id="trace-26602"></a>
<a id="trace-26604"></a>
<a id="trace-26615"></a>
<a id="trace-26617"></a>
<a id="trace-26636"></a>
<a id="trace-26638"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26675"></a>
<a id="trace-26677"></a>
<a id="trace-26694"></a>
<a id="trace-26696"></a>
<a id="trace-26715"></a>
<a id="trace-26717"></a>
<a id="trace-26735"></a>
<a id="trace-26737"></a>
<a id="trace-26753"></a>
<a id="trace-26755"></a>
<a id="trace-26765"></a>
<a id="trace-26767"></a>
<a id="trace-26848"></a>
<a id="trace-26850"></a>
<a id="trace-26859"></a>
<a id="trace-26861"></a>
<a id="trace-26878"></a>
<a id="trace-26880"></a>
<a id="trace-26891"></a>
<a id="trace-26893"></a>
<a id="trace-26906"></a>
<a id="trace-26908"></a>
<a id="trace-26932"></a>
<a id="trace-26934"></a>
<a id="trace-26955"></a>
<a id="trace-26957"></a>
<a id="trace-26983"></a>
<a id="trace-26985"></a>
<a id="trace-27001"></a>
<a id="trace-27003"></a>
<a id="trace-27014"></a>
<a id="trace-27016"></a>
<a id="trace-27101"></a>
<a id="trace-27103"></a>
<a id="trace-27119"></a>
<a id="trace-27121"></a>
<a id="trace-27253"></a>
<a id="trace-27255"></a>
<a id="trace-27269"></a>
<a id="trace-27271"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27319"></a>
<a id="trace-27321"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27355"></a>
<a id="trace-27357"></a>
<a id="trace-27388"></a>
<a id="trace-27390"></a>
<a id="trace-27393"></a>
<a id="trace-27395"></a>
<a id="trace-27467"></a>
<a id="trace-27469"></a>
<a id="trace-27480"></a>
<a id="trace-27482"></a>
<a id="trace-27496"></a>
<a id="trace-27498"></a>
<a id="trace-27507"></a>
<a id="trace-27509"></a>
<a id="trace-27528"></a>
<a id="trace-27530"></a>
<a id="trace-27539"></a>
<a id="trace-27541"></a>
<a id="trace-27559"></a>
<a id="trace-27561"></a>
<a id="trace-27567"></a>
<a id="trace-27569"></a>
<a id="trace-27587"></a>
<a id="trace-27589"></a>
<a id="trace-27600"></a>
<a id="trace-27602"></a>
<a id="trace-27681"></a>
<a id="trace-27683"></a>
<a id="trace-27689"></a>
<a id="trace-27691"></a>
<a id="trace-27709"></a>
<a id="trace-27711"></a>
<a id="trace-27721"></a>
<a id="trace-27723"></a>
<a id="trace-27742"></a>
<a id="trace-27744"></a>
<a id="trace-27756"></a>
<a id="trace-27758"></a>
<a id="trace-27776"></a>
<a id="trace-27778"></a>
<a id="trace-27786"></a>
<a id="trace-27788"></a>
<a id="trace-27803"></a>
<a id="trace-27805"></a>
<a id="trace-27809"></a>
<a id="trace-27811"></a>
<a id="trace-30336"></a>
<a id="trace-30338"></a>
<a id="trace-30356"></a>
<a id="trace-30358"></a>
<a id="trace-30389"></a>
<a id="trace-30391"></a>
<a id="trace-30396"></a>
<a id="trace-30398"></a>
<a id="trace-30412"></a>
<a id="trace-30414"></a>
<a id="trace-30431"></a>
<a id="trace-30433"></a>
<a id="trace-30450"></a>
<a id="trace-30452"></a>
<a id="trace-30461"></a>
<a id="trace-30463"></a>
<a id="trace-30475"></a>
<a id="trace-30477"></a>
<a id="trace-30481"></a>
<a id="trace-30483"></a>
<a id="trace-30559"></a>
<a id="trace-30561"></a>
<a id="trace-30571"></a>
<a id="trace-30573"></a>
<a id="trace-30590"></a>
<a id="trace-30592"></a>
<a id="trace-30602"></a>
<a id="trace-30604"></a>
<a id="trace-30624"></a>
<a id="trace-30626"></a>
<a id="trace-30634"></a>
<a id="trace-30636"></a>
<a id="trace-30652"></a>
<a id="trace-30654"></a>
<a id="trace-30663"></a>
<a id="trace-30665"></a>
<a id="trace-30680"></a>
<a id="trace-30682"></a>
<a id="trace-30691"></a>
<a id="trace-30693"></a>
<a id="trace-30761"></a>
<a id="trace-30763"></a>
<a id="trace-30772"></a>
<a id="trace-30774"></a>
<a id="trace-30787"></a>
<a id="trace-30789"></a>
<a id="trace-30799"></a>
<a id="trace-30801"></a>
<a id="trace-30820"></a>
<a id="trace-30822"></a>
<a id="trace-30826"></a>
<a id="trace-30828"></a>
<a id="trace-30848"></a>
<a id="trace-30850"></a>
<a id="trace-30856"></a>
<a id="trace-30858"></a>
<a id="trace-30876"></a>
<a id="trace-30878"></a>
<a id="trace-30891"></a>
<a id="trace-30893"></a>
<a id="trace-30965"></a>
<a id="trace-30967"></a>
<a id="trace-30979"></a>
<a id="trace-30981"></a>
<a id="trace-30996"></a>
<a id="trace-30998"></a>
<a id="trace-31004"></a>
<a id="trace-31006"></a>
<a id="trace-31019"></a>
<a id="trace-31021"></a>
<a id="trace-31028"></a>
<a id="trace-31030"></a>
<a id="trace-31044"></a>
<a id="trace-31046"></a>
<a id="trace-31054"></a>
<a id="trace-31056"></a>
<a id="trace-31066"></a>
<a id="trace-31068"></a>
<a id="trace-31082"></a>
<a id="trace-31084"></a>
<a id="trace-31155"></a>
<a id="trace-31157"></a>
<a id="trace-31164"></a>
<a id="trace-31166"></a>
<a id="trace-31182"></a>
<a id="trace-31184"></a>
<a id="trace-31192"></a>
<a id="trace-31194"></a>
<a id="trace-31204"></a>
<a id="trace-31206"></a>
<a id="trace-31214"></a>
<a id="trace-31216"></a>
<a id="trace-31229"></a>
<a id="trace-31231"></a>
<a id="trace-31239"></a>
<a id="trace-31241"></a>
<a id="trace-31255"></a>
<a id="trace-31257"></a>
<a id="trace-31269"></a>
<a id="trace-31271"></a>
<a id="trace-31342"></a>
<a id="trace-31344"></a>
<a id="trace-31351"></a>
<a id="trace-31353"></a>
<a id="trace-31368"></a>
<a id="trace-31370"></a>
<a id="trace-31378"></a>
<a id="trace-31380"></a>
<a id="trace-31389"></a>
<a id="trace-31391"></a>
<a id="trace-31399"></a>
<a id="trace-31401"></a>
<a id="trace-31416"></a>
<a id="trace-31418"></a>
<a id="trace-31423"></a>
<a id="trace-31425"></a>
<a id="trace-31439"></a>
<a id="trace-31441"></a>
<a id="trace-31453"></a>
<a id="trace-31455"></a>
<a id="trace-31523"></a>
<a id="trace-31525"></a>
<a id="trace-31535"></a>
<a id="trace-31537"></a>
<a id="trace-31552"></a>
<a id="trace-31554"></a>
<a id="trace-31559"></a>
<a id="trace-31561"></a>
<a id="trace-31579"></a>
<a id="trace-31581"></a>
<a id="trace-31589"></a>
<a id="trace-31591"></a>
<a id="trace-31605"></a>
<a id="trace-31607"></a>
<a id="trace-31615"></a>
<a id="trace-31617"></a>
<a id="trace-31629"></a>
<a id="trace-31631"></a>
<a id="trace-31643"></a>
<a id="trace-31645"></a>
<a id="trace-31714"></a>
<a id="trace-31716"></a>
<a id="trace-31723"></a>
<a id="trace-31725"></a>
<a id="trace-31741"></a>
<a id="trace-31743"></a>
<a id="trace-31750"></a>
<a id="trace-31752"></a>
<a id="trace-31766"></a>
<a id="trace-31768"></a>
<a id="trace-31776"></a>
<a id="trace-31778"></a>
<a id="trace-31790"></a>
<a id="trace-31792"></a>
<a id="trace-31799"></a>
<a id="trace-31801"></a>
<a id="trace-31811"></a>
<a id="trace-31813"></a>
<a id="trace-31823"></a>
<a id="trace-31825"></a>
<a id="trace-31893"></a>
<a id="trace-31895"></a>
<a id="trace-31909"></a>
<a id="trace-31911"></a>
<a id="trace-31928"></a>
<a id="trace-31930"></a>
<a id="trace-31940"></a>
<a id="trace-31942"></a>
<a id="trace-31955"></a>
<a id="trace-31957"></a>
<a id="trace-31969"></a>
<a id="trace-31971"></a>
<a id="trace-31984"></a>
<a id="trace-31986"></a>
<a id="trace-31991"></a>
<a id="trace-31993"></a>
<a id="trace-32006"></a>
<a id="trace-32008"></a>
<a id="trace-32019"></a>
<a id="trace-32021"></a>
<a id="trace-32093"></a>
<a id="trace-32095"></a>
<a id="trace-32105"></a>
<a id="trace-32107"></a>
<a id="trace-32123"></a>
<a id="trace-32125"></a>
<a id="trace-32133"></a>
<a id="trace-32135"></a>
<a id="trace-32151"></a>
<a id="trace-32153"></a>
<a id="trace-32167"></a>
<a id="trace-32169"></a>
<a id="trace-32173"></a>
<a id="trace-32175"></a>
<a id="trace-32190"></a>
<a id="trace-32192"></a>
<a id="trace-32199"></a>
<a id="trace-32201"></a>
<a id="trace-32271"></a>
<a id="trace-32273"></a>
<a id="trace-32281"></a>
<a id="trace-32283"></a>
<a id="trace-32295"></a>
<a id="trace-32297"></a>
<a id="trace-32305"></a>
<a id="trace-32307"></a>
<a id="trace-32319"></a>
<a id="trace-32321"></a>
<a id="trace-32328"></a>
<a id="trace-32330"></a>
<a id="trace-32345"></a>
<a id="trace-32347"></a>
<a id="trace-32355"></a>
<a id="trace-32357"></a>
<a id="trace-32369"></a>
<a id="trace-32371"></a>
<a id="trace-32383"></a>
<a id="trace-32385"></a>
<a id="trace-32453"></a>
<a id="trace-32455"></a>
<a id="trace-32461"></a>
<a id="trace-32463"></a>
<a id="trace-32476"></a>
<a id="trace-32478"></a>
<a id="trace-32486"></a>
<a id="trace-32488"></a>
<a id="trace-32498"></a>
<a id="trace-32500"></a>
<a id="trace-32509"></a>
<a id="trace-32511"></a>
<a id="trace-32522"></a>
<a id="trace-32524"></a>
<a id="trace-32533"></a>
<a id="trace-32535"></a>
<a id="trace-32549"></a>
<a id="trace-32551"></a>
<a id="trace-32563"></a>
<a id="trace-32565"></a>
<a id="trace-32638"></a>
<a id="trace-32640"></a>
<a id="trace-32645"></a>
<a id="trace-32647"></a>
<a id="trace-32663"></a>
<a id="trace-32665"></a>
<a id="trace-32674"></a>
<a id="trace-32676"></a>
<a id="trace-32685"></a>
<a id="trace-32687"></a>
<a id="trace-32751"></a>
<a id="trace-32753"></a>
<a id="trace-32763"></a>
<a id="trace-32765"></a>
<a id="trace-32777"></a>
<a id="trace-32779"></a>
<a id="trace-32801"></a>
<a id="trace-32803"></a>
<a id="trace-32813"></a>
<a id="trace-32815"></a>
<a id="trace-32886"></a>
<a id="trace-32888"></a>
<a id="trace-32904"></a>
<a id="trace-32906"></a>
<a id="trace-32922"></a>
<a id="trace-32924"></a>
<a id="trace-32991"></a>
<a id="trace-32993"></a>
<a id="trace-33005"></a>
<a id="trace-33007"></a>
<a id="trace-33020"></a>
<a id="trace-33022"></a>
<a id="trace-33044"></a>
<a id="trace-33046"></a>
<a id="trace-33053"></a>
<a id="trace-33055"></a>
<a id="trace-33076"></a>
<a id="trace-33078"></a>
<a id="trace-33094"></a>
<a id="trace-33096"></a>
<a id="trace-33163"></a>
<a id="trace-33165"></a>
<a id="trace-33176"></a>
<a id="trace-33178"></a>
<a id="trace-33194"></a>
<a id="trace-33196"></a>
<a id="trace-33201"></a>
<a id="trace-33203"></a>
<a id="trace-33214"></a>
<a id="trace-33216"></a>
<a id="trace-33224"></a>
<a id="trace-33226"></a>
<a id="trace-33242"></a>
<a id="trace-33244"></a>
<a id="trace-33249"></a>
<a id="trace-33251"></a>
<a id="trace-33265"></a>
<a id="trace-33267"></a>
<a id="trace-33279"></a>
<a id="trace-33281"></a>
<a id="trace-33348"></a>
<a id="trace-33350"></a>
<a id="trace-33362"></a>
<a id="trace-33364"></a>
<a id="trace-33379"></a>
<a id="trace-33381"></a>
<a id="trace-33389"></a>
<a id="trace-33391"></a>
<a id="trace-33403"></a>
<a id="trace-33405"></a>
<a id="trace-33413"></a>
<a id="trace-33415"></a>
<a id="trace-33430"></a>
<a id="trace-33432"></a>
<a id="trace-33440"></a>
<a id="trace-33442"></a>
<a id="trace-33453"></a>
<a id="trace-33455"></a>
<a id="trace-33463"></a>
<a id="trace-33465"></a>
<a id="trace-33535"></a>
<a id="trace-33537"></a>
<a id="trace-33548"></a>
<a id="trace-33550"></a>
<a id="trace-33566"></a>
<a id="trace-33568"></a>
<a id="trace-33578"></a>
<a id="trace-33580"></a>
<a id="trace-33592"></a>
<a id="trace-33594"></a>
<a id="trace-33605"></a>
<a id="trace-33607"></a>
<a id="trace-33635"></a>
<a id="trace-33637"></a>
<a id="trace-33751"></a>
<a id="trace-33753"></a>
<a id="trace-33769"></a>
<a id="trace-33771"></a>
<a id="trace-33783"></a>
<a id="trace-33785"></a>
<a id="trace-33859"></a>
<a id="trace-33861"></a>
<a id="trace-33868"></a>
<a id="trace-33870"></a>
<a id="trace-33884"></a>
<a id="trace-33886"></a>
<a id="trace-33902"></a>
<a id="trace-33904"></a>
<a id="trace-33915"></a>
<a id="trace-33917"></a>
<a id="trace-33927"></a>
<a id="trace-33929"></a>
<a id="trace-33946"></a>
<a id="trace-33948"></a>
<a id="trace-33957"></a>
<a id="trace-33959"></a>
<a id="trace-33975"></a>
<a id="trace-33977"></a>
<a id="trace-34000"></a>
<a id="trace-34002"></a>
<a id="trace-34076"></a>
<a id="trace-34078"></a>
<a id="trace-34093"></a>
<a id="trace-34095"></a>
<a id="trace-34111"></a>
<a id="trace-34113"></a>
<a id="trace-34240"></a>
<a id="trace-34242"></a>
<a id="trace-34262"></a>
<a id="trace-34264"></a>
<a id="trace-34283"></a>
<a id="trace-34285"></a>
<a id="trace-34314"></a>
<a id="trace-34316"></a>
<a id="trace-34328"></a>
<a id="trace-34330"></a>
<a id="trace-34349"></a>
<a id="trace-34351"></a>
<a id="trace-34371"></a>
<a id="trace-34373"></a>
<a id="trace-34447"></a>
<a id="trace-34449"></a>
<a id="trace-34462"></a>
<a id="trace-34464"></a>
<a id="trace-34495"></a>
<a id="trace-34497"></a>
<a id="trace-34507"></a>
<a id="trace-34509"></a>
<a id="trace-34526"></a>
<a id="trace-34528"></a>
<a id="trace-34534"></a>
<a id="trace-34536"></a>
<a id="trace-34551"></a>
<a id="trace-34553"></a>
<a id="trace-34562"></a>
<a id="trace-34564"></a>
<a id="trace-34578"></a>
<a id="trace-34580"></a>
<a id="trace-34587"></a>
<a id="trace-34589"></a>
<a id="trace-34663"></a>
<a id="trace-34665"></a>
<a id="trace-34672"></a>
<a id="trace-34674"></a>
<a id="trace-34696"></a>
<a id="trace-34698"></a>
<a id="trace-34709"></a>
<a id="trace-34711"></a>
<a id="trace-34729"></a>
<a id="trace-34731"></a>
<a id="trace-34749"></a>
<a id="trace-34751"></a>
<a id="trace-34772"></a>
<a id="trace-34774"></a>
<a id="trace-34778"></a>
<a id="trace-34780"></a>
<a id="trace-34794"></a>
<a id="trace-34796"></a>
<a id="trace-34804"></a>
<a id="trace-34806"></a>
<a id="trace-34927"></a>
<a id="trace-34929"></a>
<a id="trace-34938"></a>
<a id="trace-34940"></a>
<a id="trace-35013"></a>
<a id="trace-35015"></a>
<a id="trace-35028"></a>
<a id="trace-35030"></a>
<a id="trace-35043"></a>
<a id="trace-35045"></a>
<a id="trace-35056"></a>
<a id="trace-35058"></a>
<a id="trace-35083"></a>
<a id="trace-35085"></a>
<a id="trace-35097"></a>
<a id="trace-35099"></a>
<a id="trace-35124"></a>
<a id="trace-35126"></a>
<a id="trace-35131"></a>
<a id="trace-35133"></a>
<a id="trace-35204"></a>
<a id="trace-35206"></a>
<a id="trace-35219"></a>
<a id="trace-35221"></a>
<a id="trace-35235"></a>
<a id="trace-35237"></a>
<a id="trace-35244"></a>
<a id="trace-35246"></a>
<a id="trace-35259"></a>
<a id="trace-35261"></a>
<a id="trace-35266"></a>
<a id="trace-35268"></a>
<a id="trace-35283"></a>
<a id="trace-35285"></a>
<a id="trace-35290"></a>
<a id="trace-35292"></a>
<a id="trace-35308"></a>
<a id="trace-35310"></a>
<a id="trace-35321"></a>
<a id="trace-35323"></a>
<a id="trace-35396"></a>
<a id="trace-35398"></a>
<a id="trace-35406"></a>
<a id="trace-35408"></a>
<a id="trace-35434"></a>
<a id="trace-35436"></a>
<a id="trace-35447"></a>
<a id="trace-35449"></a>
<a id="trace-35468"></a>
<a id="trace-35470"></a>
<a id="trace-35479"></a>
<a id="trace-35481"></a>
<a id="trace-35495"></a>
<a id="trace-35497"></a>
<a id="trace-35504"></a>
<a id="trace-35506"></a>
<a id="trace-35561"></a>
<a id="trace-35563"></a>
<a id="trace-35567"></a>
<a id="trace-35569"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46576843548638347, 'next_transition': 731}.
<a id="trace-1103"></a>
<a id="trace-1136"></a>
<a id="trace-1172"></a>
<a id="trace-1174"></a>
<a id="trace-1196"></a>
<a id="trace-1198"></a>
<a id="trace-1216"></a>
<a id="trace-1218"></a>
<a id="trace-1308"></a>
<a id="trace-1310"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 1103): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5142730318892302, 'next_transition': 1136}.
<a id="trace-156"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 156): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1741}.
<a id="trace-1439"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1439): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1439. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1741}.
<a id="trace-1440"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1440): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1440. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1741}.
<a id="trace-1441"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1441): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1229. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250286428251076, 'next_transition': 1707}.
<a id="trace-1442"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1442): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1229. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250286428251076, 'next_transition': 1707}.
<a id="trace-1707"></a>
<a id="trace-1709"></a>
<a id="trace-2059"></a>
<a id="trace-2061"></a>
<a id="trace-2087"></a>
<a id="trace-2089"></a>
<a id="trace-2178"></a>
<a id="trace-2180"></a>
<a id="trace-2220"></a>
<a id="trace-2222"></a>
<a id="trace-2249"></a>
<a id="trace-2251"></a>
<a id="trace-2278"></a>
<a id="trace-2280"></a>
<a id="trace-2291"></a>
<a id="trace-2293"></a>
<a id="trace-2309"></a>
<a id="trace-2311"></a>
<a id="trace-2350"></a>
<a id="trace-2352"></a>
<a id="trace-2374"></a>
<a id="trace-2376"></a>
- 13.20s–19.25s (×22), actor 5, squad 0 (trace 1707): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1440. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1221864430747104, 'next_transition': 2059}.
<a id="trace-1741"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1741): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1237. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.753191358521778, 'next_transition': 3001}.
<a id="trace-1742"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1742): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1237. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.753191358521778, 'next_transition': 3001}.
<a id="trace-2387"></a>
- 19.40s–19.40s (×1), actor 0, squad 0 (trace 2387): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2102. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2653}.
<a id="trace-2388"></a>
- 19.40s–19.40s (×1), actor 0, squad 0 (trace 2388): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2102. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2653}.
<a id="trace-2389"></a>
- 19.40s–19.40s (×1), actor 0, squad 0 (trace 2389): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2102. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2653}.
<a id="trace-2653"></a>
<a id="trace-2655"></a>
- 19.75s–19.75s (×2), actor 5, squad 0 (trace 2653): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2107. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2662}.
<a id="trace-2662"></a>
- 19.80s–19.80s (×1), actor 0, squad 0 (trace 2662): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2102. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00014450346016613982, 'next_transition': 3349}.
<a id="trace-3001"></a>
- 20.10s–20.10s (×1), actor 8, squad 1 (trace 3001): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2932. Next observer evidence: {'until': 20.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4249218846687688, 'next_transition': 3633}.
<a id="trace-3002"></a>
- 20.10s–20.10s (×1), actor 8, squad 1 (trace 3002): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2932. Next observer evidence: {'until': 20.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4249218846687688, 'next_transition': 3633}.
<a id="trace-3003"></a>
<a id="trace-3633"></a>
- 20.10s–20.55s (×2), actor 8, squad 1 (trace 3003): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2932. Next observer evidence: {'until': 20.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4249218846687688, 'next_transition': 3633}.
<a id="trace-3349"></a>
<a id="trace-3351"></a>
- 20.25s–20.25s (×2), actor 5, squad 0 (trace 3349): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2929. Next observer evidence: None.
<a id="trace-3362"></a>
- 20.35s–20.35s (×1), actor 0, squad 0 (trace 3362): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2924. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06901250195843132, 'next_transition': 3990}.
<a id="trace-3990"></a>
<a id="trace-3992"></a>
<a id="trace-4117"></a>
<a id="trace-4119"></a>
<a id="trace-4322"></a>
<a id="trace-4324"></a>
- 20.75s–23.25s (×6), actor 5, squad 0 (trace 3990): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2929. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8152914799721507, 'next_transition': 4117}.
<a id="trace-4372"></a>
- 23.95s–23.95s (×1), actor 0, squad 0 (trace 4372): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2924. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033822374366866935, 'next_transition': 5204}.
<a id="trace-4373"></a>
- 23.95s–23.95s (×1), actor 0, squad 0 (trace 4373): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2924. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033822374366866935, 'next_transition': 5204}.
<a id="trace-4779"></a>
- 23.95s–23.95s (×1), actor 8, squad 1 (trace 4779): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2932. Next observer evidence: {'until': 36.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 10.082106801322478, 'next_transition': 6110}.
<a id="trace-4780"></a>
- 23.95s–23.95s (×1), actor 8, squad 1 (trace 4780): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2932. Next observer evidence: {'until': 36.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 10.082106801322478, 'next_transition': 6110}.
<a id="trace-5204"></a>
<a id="trace-5206"></a>
<a id="trace-5244"></a>
<a id="trace-5246"></a>
<a id="trace-5346"></a>
<a id="trace-5348"></a>
<a id="trace-5378"></a>
<a id="trace-5380"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 5204): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2929. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5244}.
<a id="trace-473"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 473): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5442"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5442): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5442. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.187523498148857, 'next_transition': 5500}.
<a id="trace-5443"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5443): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5443. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.187523498148857, 'next_transition': 5500}.
<a id="trace-5500"></a>
<a id="trace-5502"></a>
<a id="trace-5553"></a>
<a id="trace-5555"></a>
<a id="trace-5617"></a>
<a id="trace-5619"></a>
<a id="trace-5720"></a>
<a id="trace-5722"></a>
<a id="trace-5750"></a>
<a id="trace-5752"></a>
<a id="trace-5801"></a>
<a id="trace-5803"></a>
<a id="trace-5826"></a>
<a id="trace-5828"></a>
<a id="trace-5875"></a>
<a id="trace-5877"></a>
<a id="trace-5891"></a>
<a id="trace-5893"></a>
<a id="trace-5928"></a>
<a id="trace-5930"></a>
<a id="trace-5944"></a>
<a id="trace-5946"></a>
<a id="trace-6041"></a>
<a id="trace-6043"></a>
<a id="trace-6065"></a>
<a id="trace-6067"></a>
<a id="trace-6281"></a>
<a id="trace-6283"></a>
<a id="trace-6300"></a>
<a id="trace-6302"></a>
<a id="trace-6352"></a>
<a id="trace-6354"></a>
- 27.25s–38.25s (×32), actor 5, squad 0 (trace 5500): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5443. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3727537293262615, 'next_transition': 5553}.
<a id="trace-6110"></a>
- 36.50s–36.50s (×1), actor 8, squad 1 (trace 6110): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 5977. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.4948583500596735, 'next_transition': 6829}.
<a id="trace-6111"></a>
- 36.50s–36.50s (×1), actor 8, squad 1 (trace 6111): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 5977. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.4948583500596735, 'next_transition': 6829}.
<a id="trace-6362"></a>
- 38.30s–38.30s (×1), actor 0, squad 0 (trace 6362): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 5969. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12549452936283717, 'next_transition': 6538}.
<a id="trace-6363"></a>
- 38.30s–38.30s (×1), actor 0, squad 0 (trace 6363): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 5969. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12549452936283717, 'next_transition': 6538}.
<a id="trace-6538"></a>
<a id="trace-6540"></a>
<a id="trace-6617"></a>
<a id="trace-6619"></a>
<a id="trace-6709"></a>
<a id="trace-6711"></a>
<a id="trace-6737"></a>
<a id="trace-6739"></a>
<a id="trace-6785"></a>
<a id="trace-6787"></a>
<a id="trace-6809"></a>
<a id="trace-6811"></a>
- 38.75s–41.75s (×12), actor 5, squad 0 (trace 6538): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5974. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2083819469714652, 'next_transition': 6617}.
<a id="trace-6828"></a>
- 42.05s–42.05s (×1), actor 0, squad 0 (trace 6828): NeedSupport. Knowledge: actor memory at 40.00s, trace 6632. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625417484755165, 'next_transition': 6853}.
<a id="trace-6829"></a>
- 42.05s–42.05s (×1), actor 8, squad 1 (trace 6829): NeedSupport. Knowledge: actor memory at 40.00s, trace 6640. Next observer evidence: {'until': 52, 'shots': 4, 'casualties': 1, 'mean_displacement': 9.686512253807464, 'next_transition': 7442}.
<a id="trace-6853"></a>
<a id="trace-6855"></a>
<a id="trace-6873"></a>
<a id="trace-6875"></a>
<a id="trace-6904"></a>
<a id="trace-6906"></a>
<a id="trace-6923"></a>
<a id="trace-6925"></a>
<a id="trace-7091"></a>
<a id="trace-7093"></a>
<a id="trace-7123"></a>
<a id="trace-7125"></a>
<a id="trace-7146"></a>
<a id="trace-7148"></a>
<a id="trace-7170"></a>
<a id="trace-7172"></a>
<a id="trace-7194"></a>
<a id="trace-7196"></a>
<a id="trace-7242"></a>
<a id="trace-7244"></a>
<a id="trace-7262"></a>
<a id="trace-7264"></a>
<a id="trace-7282"></a>
<a id="trace-7284"></a>
<a id="trace-7371"></a>
<a id="trace-7373"></a>
<a id="trace-7392"></a>
<a id="trace-7394"></a>
<a id="trace-7410"></a>
<a id="trace-7412"></a>
<a id="trace-7505"></a>
<a id="trace-7507"></a>
<a id="trace-7528"></a>
<a id="trace-7530"></a>
<a id="trace-7549"></a>
- 42.25s–53.25s (×35), actor 5, squad 0 (trace 6853): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6637. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47090016433359466, 'next_transition': 6873}.
<a id="trace-7442"></a>
- 52.10s–52.10s (×1), actor 9, squad 1 (trace 7442): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 7301. Next observer evidence: {'until': 63, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.778756273203209, 'next_transition': 8318}.
<a id="trace-7443"></a>
- 52.10s–52.10s (×1), actor 9, squad 1 (trace 7443): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 7301. Next observer evidence: {'until': 63, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.778756273203209, 'next_transition': 8318}.
<a id="trace-7571"></a>
- 53.55s–53.55s (×1), actor 0, squad 0 (trace 7571): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 7293. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7735}.
<a id="trace-7572"></a>
- 53.55s–53.55s (×1), actor 0, squad 0 (trace 7572): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 7293. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7735}.
<a id="trace-7735"></a>
<a id="trace-7760"></a>
<a id="trace-7796"></a>
<a id="trace-7904"></a>
<a id="trace-7906"></a>
<a id="trace-7945"></a>
<a id="trace-7947"></a>
<a id="trace-7977"></a>
<a id="trace-7979"></a>
<a id="trace-7997"></a>
<a id="trace-7999"></a>
<a id="trace-8021"></a>
<a id="trace-8023"></a>
<a id="trace-8048"></a>
<a id="trace-8050"></a>
<a id="trace-8065"></a>
<a id="trace-8067"></a>
<a id="trace-8087"></a>
<a id="trace-8089"></a>
<a id="trace-8105"></a>
<a id="trace-8107"></a>
<a id="trace-8194"></a>
<a id="trace-8196"></a>
<a id="trace-8217"></a>
<a id="trace-8219"></a>
<a id="trace-8237"></a>
<a id="trace-8239"></a>
<a id="trace-8255"></a>
<a id="trace-8257"></a>
<a id="trace-8285"></a>
<a id="trace-8287"></a>
<a id="trace-8306"></a>
<a id="trace-8308"></a>
<a id="trace-8434"></a>
<a id="trace-8436"></a>
<a id="trace-8458"></a>
<a id="trace-8460"></a>
- 53.75s–63.75s (×37), actor 5, squad 0 (trace 7735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7298. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7760}.
<a id="trace-8318"></a>
- 63.05s–63.05s (×1), actor 9, squad 1 (trace 8318): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 8122. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.920053473163938, 'next_transition': 8904}.
<a id="trace-8319"></a>
- 63.05s–63.05s (×1), actor 9, squad 1 (trace 8319): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 8122. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.920053473163938, 'next_transition': 8904}.
<a id="trace-8465"></a>
- 63.75s–63.75s (×1), actor 0, squad 0 (trace 8465): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 60.00s, trace 8114. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6693522862632043, 'next_transition': 8501}.
<a id="trace-8501"></a>
<a id="trace-8503"></a>
<a id="trace-8538"></a>
<a id="trace-8540"></a>
<a id="trace-8647"></a>
<a id="trace-8649"></a>
<a id="trace-8677"></a>
<a id="trace-8679"></a>
<a id="trace-8772"></a>
<a id="trace-8774"></a>
<a id="trace-8791"></a>
<a id="trace-8793"></a>
<a id="trace-8871"></a>
<a id="trace-8873"></a>
<a id="trace-8897"></a>
<a id="trace-8899"></a>
<a id="trace-8999"></a>
<a id="trace-9001"></a>
<a id="trace-9017"></a>
<a id="trace-9019"></a>
<a id="trace-9051"></a>
<a id="trace-9053"></a>
<a id="trace-9083"></a>
<a id="trace-9085"></a>
<a id="trace-9117"></a>
<a id="trace-9119"></a>
<a id="trace-9127"></a>
<a id="trace-9129"></a>
<a id="trace-9148"></a>
<a id="trace-9150"></a>
<a id="trace-9165"></a>
<a id="trace-9167"></a>
<a id="trace-9245"></a>
<a id="trace-9247"></a>
<a id="trace-9264"></a>
<a id="trace-9266"></a>
<a id="trace-9284"></a>
<a id="trace-9286"></a>
<a id="trace-9297"></a>
<a id="trace-9299"></a>
<a id="trace-9319"></a>
<a id="trace-9321"></a>
<a id="trace-9334"></a>
<a id="trace-9336"></a>
<a id="trace-9361"></a>
<a id="trace-9363"></a>
<a id="trace-9466"></a>
<a id="trace-9468"></a>
<a id="trace-9492"></a>
<a id="trace-9494"></a>
- 64.25s–81.25s (×50), actor 5, squad 0 (trace 8501): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8119. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12812447316964967, 'next_transition': 8538}.
<a id="trace-8904"></a>
- 69.75s–69.75s (×1), actor 9, squad 1 (trace 8904): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 8572. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7850123048558733, 'next_transition': 1001}.
<a id="trace-1000"></a>
- 81.80s–81.80s (×1), actor 5, squad 0 (events line 1000): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1001"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 1001): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9509"></a>
- 81.80s–81.80s (×1), actor 5, squad 0 (trace 9509): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.688874 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 9509. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9527}.
<a id="trace-9510"></a>
- 81.80s–81.80s (×1), actor 5, squad 0 (trace 9510): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.688874 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 9510. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9527}.
<a id="trace-9511"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 9511): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.688874 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 9511. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9738}.
<a id="trace-9512"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 9512): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.688874 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 9512. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9738}.
<a id="trace-9527"></a>
<a id="trace-9529"></a>
<a id="trace-9538"></a>
<a id="trace-9540"></a>
<a id="trace-9564"></a>
<a id="trace-9566"></a>
<a id="trace-9584"></a>
<a id="trace-9586"></a>
<a id="trace-9604"></a>
<a id="trace-9606"></a>
<a id="trace-9619"></a>
<a id="trace-9621"></a>
<a id="trace-9699"></a>
<a id="trace-9701"></a>
<a id="trace-9731"></a>
<a id="trace-9733"></a>
<a id="trace-9771"></a>
<a id="trace-9773"></a>
- 82.25s–87.75s (×18), actor 5, squad 0 (trace 9527): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.80s, trace 9512. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9538}.
<a id="trace-9738"></a>
- 86.90s–86.90s (×1), actor 9, squad 1 (trace 9738): HelpSquad outside weapon range: approach neighbour before allocating firing slots. Knowledge: actor memory at 85.00s, trace 9635. Next observer evidence: {'until': 87.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9781}.
<a id="trace-9739"></a>
- 86.90s–86.90s (×1), actor 9, squad 1 (trace 9739): MoveTactically. Knowledge: actor memory at 85.00s, trace 9635. Next observer evidence: {'until': 87.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9781}.
<a id="trace-9740"></a>
- 86.90s–86.90s (×1), actor 9, squad 1 (trace 9740): received platoon directive. Knowledge: actor memory at 85.00s, trace 9635. Next observer evidence: {'until': 87.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9781}.
<a id="trace-9781"></a>
- 87.90s–87.90s (×1), actor 9, squad 1 (trace 9781): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 9635. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.196816409952948, 'next_transition': 10952}.
<a id="trace-9887"></a>
- 87.95s–87.95s (×1), actor 0, squad 0 (trace 9887): MoveTactically. Knowledge: actor memory at 85.00s, trace 9627. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9915}.
<a id="trace-9888"></a>
- 87.95s–87.95s (×1), actor 0, squad 0 (trace 9888): received platoon directive. Knowledge: actor memory at 85.00s, trace 9627. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9915}.
<a id="trace-9915"></a>
<a id="trace-9917"></a>
- 88.25s–88.25s (×2), actor 5, squad 0 (trace 9915): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9632. Next observer evidence: {'until': 88.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9961}.
<a id="trace-9961"></a>
- 88.95s–88.95s (×1), actor 0, squad 0 (trace 9961): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 9627. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10140}.
<a id="trace-10140"></a>
<a id="trace-10142"></a>
<a id="trace-10177"></a>
<a id="trace-10179"></a>
<a id="trace-10289"></a>
<a id="trace-10291"></a>
<a id="trace-10342"></a>
<a id="trace-10344"></a>
<a id="trace-10365"></a>
<a id="trace-10367"></a>
<a id="trace-10394"></a>
<a id="trace-10396"></a>
<a id="trace-10420"></a>
<a id="trace-10422"></a>
<a id="trace-10443"></a>
<a id="trace-10445"></a>
<a id="trace-10465"></a>
<a id="trace-10467"></a>
<a id="trace-10488"></a>
<a id="trace-10490"></a>
<a id="trace-10538"></a>
<a id="trace-10540"></a>
<a id="trace-10650"></a>
<a id="trace-10652"></a>
<a id="trace-10674"></a>
<a id="trace-10676"></a>
<a id="trace-10713"></a>
<a id="trace-10715"></a>
<a id="trace-10742"></a>
<a id="trace-10744"></a>
<a id="trace-10763"></a>
<a id="trace-10765"></a>
<a id="trace-10792"></a>
<a id="trace-10794"></a>
<a id="trace-10818"></a>
<a id="trace-10820"></a>
<a id="trace-10834"></a>
<a id="trace-10836"></a>
- 89.25s–99.25s (×38), actor 5, squad 0 (trace 10140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9632. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10177}.
<a id="trace-10952"></a>
- 100.70s–100.70s (×1), actor 9, squad 1 (trace 10952): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 10877. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11004}.
<a id="trace-10976"></a>
- 101.05s–101.05s (×1), actor 0, squad 0 (trace 10976): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 10869. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575151818079775, 'next_transition': 10989}.
<a id="trace-10989"></a>
<a id="trace-10991"></a>
<a id="trace-11060"></a>
<a id="trace-11062"></a>
- 101.25s–101.75s (×4), actor 5, squad 0 (trace 10989): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 10874. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499408426984843, 'next_transition': 11060}.
<a id="trace-11004"></a>
- 101.70s–101.70s (×1), actor 9, squad 1 (trace 11004): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 10877. Next observer evidence: {'until': 109.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.7700817661427735, 'next_transition': 1348}.
<a id="trace-11081"></a>
- 102.05s–102.05s (×1), actor 0, squad 0 (trace 11081): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 10869. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019692991297667117, 'next_transition': 11268}.
<a id="trace-11268"></a>
<a id="trace-11270"></a>
<a id="trace-11292"></a>
<a id="trace-11294"></a>
<a id="trace-11369"></a>
<a id="trace-11371"></a>
<a id="trace-11402"></a>
<a id="trace-11404"></a>
<a id="trace-11541"></a>
<a id="trace-11543"></a>
<a id="trace-11584"></a>
<a id="trace-11586"></a>
<a id="trace-11603"></a>
<a id="trace-11605"></a>
- 102.25s–107.75s (×14), actor 5, squad 0 (trace 11268): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 10874. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09065129209099568, 'next_transition': 11292}.
<a id="trace-11619"></a>
- 108.15s–108.15s (×1), actor 0, squad 0 (trace 11619): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 105.00s, trace 11434. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11634}.
<a id="trace-11634"></a>
<a id="trace-11636"></a>
- 108.25s–108.25s (×2), actor 5, squad 0 (trace 11634): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 11439. Next observer evidence: {'until': 109, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625886226764087, 'next_transition': 11671}.
<a id="trace-11671"></a>
- 109.15s–109.15s (×1), actor 0, squad 0 (trace 11671): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 11434. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11811156008198319, 'next_transition': 11841}.
<a id="trace-11841"></a>
<a id="trace-11843"></a>
<a id="trace-11862"></a>
<a id="trace-11864"></a>
<a id="trace-12005"></a>
<a id="trace-12007"></a>
<a id="trace-12038"></a>
<a id="trace-12040"></a>
<a id="trace-12067"></a>
<a id="trace-12069"></a>
<a id="trace-12133"></a>
<a id="trace-12135"></a>
<a id="trace-12156"></a>
<a id="trace-12158"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12273"></a>
<a id="trace-12275"></a>
<a id="trace-12444"></a>
<a id="trace-12446"></a>
<a id="trace-12465"></a>
<a id="trace-12467"></a>
<a id="trace-12496"></a>
<a id="trace-12498"></a>
<a id="trace-12549"></a>
<a id="trace-12551"></a>
<a id="trace-12577"></a>
<a id="trace-12579"></a>
<a id="trace-12607"></a>
<a id="trace-12609"></a>
<a id="trace-12661"></a>
<a id="trace-12663"></a>
- 109.25s–119.75s (×32), actor 5, squad 0 (trace 11841): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 11439. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11862}.
<a id="trace-1348"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (events line 1348): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22992469540168156, 'next_transition': 12019}.
<a id="trace-11852"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 11852): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.881740 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 11852. Next observer evidence: {'until': 110.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22992469540168156, 'next_transition': 12019}.
<a id="trace-11853"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 11853): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.881740 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 11853. Next observer evidence: {'until': 110.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22992469540168156, 'next_transition': 12019}.
<a id="trace-12019"></a>
- 110.90s–110.90s (×1), actor 9, squad 1 (trace 12019): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 111.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12074}.
<a id="trace-12074"></a>
- 111.90s–111.90s (×1), actor 9, squad 1 (trace 12074): matching received arrivals: deployment leg complete. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12105}.
<a id="trace-12105"></a>
- 112.35s–112.35s (×1), actor 9, squad 1 (trace 12105): Reorganise: completed/failed drill. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12165}.
<a id="trace-12109"></a>
- 112.35s–112.35s (×1), actor 9, squad 1 (trace 12109): MoveTactically. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12165}.
<a id="trace-12110"></a>
- 112.35s–112.35s (×1), actor 9, squad 1 (trace 12110): traveling overwatch. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12165}.
<a id="trace-12111"></a>
- 112.35s–112.35s (×1), actor 9, squad 1 (trace 12111): Reorganise complete. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12165}.
<a id="trace-12165"></a>
- 113.35s–113.35s (×1), actor 9, squad 1 (trace 12165): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2074781622133888, 'next_transition': 12306}.
<a id="trace-12306"></a>
- 114.80s–114.80s (×1), actor 9, squad 1 (trace 12306): received platoon directive. Knowledge: actor memory at 110.00s, trace 11893. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.280896840662615, 'next_transition': 13430}.
<a id="trace-12744"></a>
- 120.20s–120.20s (×1), actor 0, squad 0 (trace 12744): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 12668. Next observer evidence: None.
<a id="trace-12760"></a>
<a id="trace-12762"></a>
<a id="trace-12774"></a>
<a id="trace-12776"></a>
- 120.25s–120.75s (×4), actor 5, squad 0 (trace 12760): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 12673. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12774}.
<a id="trace-12790"></a>
- 121.20s–121.20s (×1), actor 0, squad 0 (trace 12790): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 12668. Next observer evidence: None.
<a id="trace-12957"></a>
<a id="trace-12959"></a>
<a id="trace-12983"></a>
<a id="trace-12985"></a>
<a id="trace-13017"></a>
<a id="trace-13019"></a>
<a id="trace-13089"></a>
<a id="trace-13091"></a>
<a id="trace-13110"></a>
<a id="trace-13112"></a>
<a id="trace-13150"></a>
<a id="trace-13152"></a>
<a id="trace-13169"></a>
<a id="trace-13171"></a>
<a id="trace-13275"></a>
<a id="trace-13277"></a>
<a id="trace-13304"></a>
<a id="trace-13306"></a>
<a id="trace-13325"></a>
<a id="trace-13327"></a>
<a id="trace-13351"></a>
<a id="trace-13353"></a>
<a id="trace-13366"></a>
<a id="trace-13368"></a>
<a id="trace-13418"></a>
<a id="trace-13420"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13477"></a>
<a id="trace-13479"></a>
<a id="trace-13680"></a>
<a id="trace-13682"></a>
<a id="trace-13731"></a>
<a id="trace-13733"></a>
- 121.25s–131.30s (×34), actor 5, squad 0 (trace 12957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 12673. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.267845478358253, 'next_transition': 12983}.
<a id="trace-13430"></a>
- 128.90s–128.90s (×1), actor 9, squad 1 (trace 13430): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 13193. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13486}.
<a id="trace-13486"></a>
- 129.90s–129.90s (×1), actor 9, squad 1 (trace 13486): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 13193. Next observer evidence: {'until': 137.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.335028738574687, 'next_transition': 14351}.
<a id="trace-13749"></a>
- 131.55s–131.55s (×1), actor 0, squad 0 (trace 13749): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 13592. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13998}.
<a id="trace-13998"></a>
<a id="trace-14000"></a>
<a id="trace-14027"></a>
<a id="trace-14029"></a>
<a id="trace-14076"></a>
<a id="trace-14078"></a>
<a id="trace-14094"></a>
<a id="trace-14096"></a>
<a id="trace-14155"></a>
<a id="trace-14157"></a>
<a id="trace-14251"></a>
<a id="trace-14253"></a>
<a id="trace-14284"></a>
<a id="trace-14286"></a>
<a id="trace-14309"></a>
<a id="trace-14311"></a>
<a id="trace-15768"></a>
<a id="trace-15770"></a>
<a id="trace-15798"></a>
<a id="trace-15800"></a>
- 131.80s–138.30s (×20), actor 5, squad 0 (trace 13998): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 13597. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019688384662663427, 'next_transition': 14027}.
<a id="trace-14351"></a>
- 137.60s–137.60s (×1), actor 9, squad 1 (trace 14351): HelpSquad arrived within support range; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 135.00s, trace 14170. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.158200128212176, 'next_transition': 1826}.
<a id="trace-14352"></a>
- 137.60s–137.60s (×1), actor 9, squad 1 (trace 14352): help approach complete: allocate protected slots with a line. Knowledge: actor memory at 135.00s, trace 14170. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.158200128212176, 'next_transition': 1826}.
<a id="trace-15820"></a>
- 138.75s–138.75s (×1), actor 0, squad 0 (trace 15820): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 14162. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15978}.
<a id="trace-15978"></a>
<a id="trace-15980"></a>
<a id="trace-16007"></a>
<a id="trace-16009"></a>
<a id="trace-16028"></a>
<a id="trace-16030"></a>
<a id="trace-16128"></a>
<a id="trace-16130"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
<a id="trace-16166"></a>
<a id="trace-16168"></a>
<a id="trace-16185"></a>
<a id="trace-16187"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16253"></a>
<a id="trace-16255"></a>
<a id="trace-16268"></a>
<a id="trace-16270"></a>
<a id="trace-16315"></a>
<a id="trace-16317"></a>
<a id="trace-16404"></a>
<a id="trace-16406"></a>
- 138.80s–145.30s (×24), actor 5, squad 0 (trace 15978): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 14167. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16007}.
<a id="trace-16427"></a>
- 145.85s–145.85s (×1), actor 0, squad 0 (trace 16427): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 16330. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7189553829320485, 'next_transition': 16757}.
<a id="trace-16428"></a>
- 145.85s–145.85s (×1), actor 0, squad 0 (trace 16428): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 145.00s, trace 16330. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7189553829320485, 'next_transition': 16757}.
<a id="trace-16757"></a>
<a id="trace-16759"></a>
<a id="trace-16784"></a>
<a id="trace-16786"></a>
<a id="trace-16828"></a>
<a id="trace-16830"></a>
<a id="trace-16872"></a>
<a id="trace-16874"></a>
<a id="trace-16936"></a>
<a id="trace-16938"></a>
<a id="trace-16978"></a>
<a id="trace-16980"></a>
- 146.30s–149.80s (×12), actor 5, squad 0 (trace 16757): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 16335. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0006509621449733, 'next_transition': 16784}.
<a id="trace-16987"></a>
- 149.90s–149.90s (×1), actor 0, squad 0 (trace 16987): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 16330. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7406267898566503, 'next_transition': 17072}.
<a id="trace-17072"></a>
<a id="trace-17074"></a>
<a id="trace-17098"></a>
<a id="trace-17100"></a>
- 150.30s–150.80s (×4), actor 5, squad 0 (trace 17072): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 16994. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7004780235532093, 'next_transition': 17098}.
<a id="trace-1825"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (events line 1825): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1826"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (events line 1826): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17109"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 17109): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.224929 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 17109. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749974581328696, 'next_transition': 17126}.
<a id="trace-17110"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 17110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.224929 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 17110. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749974581328696, 'next_transition': 17126}.
<a id="trace-17111"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 17111): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.224929 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 17111. Next observer evidence: {'until': 171.4, 'shots': 6, 'casualties': 1, 'mean_displacement': 8.153498107956908, 'next_transition': 23285}.
<a id="trace-17112"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 17112): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.224929 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 17112. Next observer evidence: {'until': 171.4, 'shots': 6, 'casualties': 1, 'mean_displacement': 8.153498107956908, 'next_transition': 23285}.
<a id="trace-17126"></a>
<a id="trace-17128"></a>
<a id="trace-17200"></a>
<a id="trace-17202"></a>
<a id="trace-17218"></a>
<a id="trace-17220"></a>
<a id="trace-17233"></a>
<a id="trace-17235"></a>
<a id="trace-17257"></a>
<a id="trace-17259"></a>
<a id="trace-17268"></a>
<a id="trace-17270"></a>
<a id="trace-17346"></a>
<a id="trace-17348"></a>
- 151.30s–155.30s (×14), actor 5, squad 0 (trace 17126): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 17112. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6114620727873886, 'next_transition': 17200}.
<a id="trace-17356"></a>
- 155.45s–155.45s (×1), actor 1, squad 0 (trace 17356): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18783}.
<a id="trace-18635"></a>
- 155.45s–155.45s (×1), actor 1, squad 0 (trace 18635): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18783}.
<a id="trace-18636"></a>
- 155.45s–155.45s (×1), actor 1, squad 0 (trace 18636): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18783}.
<a id="trace-18769"></a>
- 155.45s–155.45s (×1), actor 1, squad 0 (trace 18769): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18783}.
<a id="trace-18770"></a>
- 155.45s–155.45s (×1), actor 1, squad 0 (trace 18770): Assaulting. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18783}.
<a id="trace-18783"></a>
<a id="trace-18785"></a>
<a id="trace-18810"></a>
<a id="trace-18812"></a>
- 155.80s–156.30s (×4), actor 5, squad 0 (trace 18783): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 17280. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18810}.
<a id="trace-18820"></a>
- 156.45s–156.45s (×1), actor 1, squad 0 (trace 18820): Reorganise: completed/failed drill. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748425077889738, 'next_transition': 19233}.
<a id="trace-18826"></a>
- 156.45s–156.45s (×1), actor 1, squad 0 (trace 18826): MoveTactically. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748425077889738, 'next_transition': 19233}.
<a id="trace-18827"></a>
- 156.45s–156.45s (×1), actor 1, squad 0 (trace 18827): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748425077889738, 'next_transition': 19233}.
<a id="trace-19233"></a>
<a id="trace-19235"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
- 156.80s–157.30s (×4), actor 5, squad 0 (trace 19233): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 17280. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5625172873728318, 'next_transition': 19263}.
<a id="trace-19273"></a>
- 157.45s–157.45s (×1), actor 1, squad 0 (trace 19273): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1590580166549684, 'next_transition': 19713}.
<a id="trace-19274"></a>
- 157.45s–157.45s (×1), actor 1, squad 0 (trace 19274): MoveTactically. Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1590580166549684, 'next_transition': 19713}.
<a id="trace-19275"></a>
- 157.45s–157.45s (×1), actor 1, squad 0 (trace 19275): . Knowledge: actor memory at 155.00s, trace 17276. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1590580166549684, 'next_transition': 19713}.
<a id="trace-19713"></a>
<a id="trace-19715"></a>
<a id="trace-19743"></a>
<a id="trace-19745"></a>
<a id="trace-19776"></a>
<a id="trace-19794"></a>
<a id="trace-19887"></a>
<a id="trace-19911"></a>
<a id="trace-19932"></a>
- 158.30s–161.30s (×9), actor 5, squad 0 (trace 19713): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 17280. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7353394944916148, 'next_transition': 19743}.
<a id="trace-19939"></a>
- 161.30s–161.30s (×1), actor 1, squad 0 (trace 19939): NeedSupport. Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.970671598512673, 'next_transition': 19981}.
<a id="trace-19981"></a>
- 162.20s–162.20s (×1), actor 1, squad 0 (trace 19981): traveling overwatch. Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: None.
<a id="trace-19982"></a>
- 162.20s–162.20s (×1), actor 1, squad 0 (trace 19982): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: None.
<a id="trace-20417"></a>
<a id="trace-20419"></a>
<a id="trace-20434"></a>
<a id="trace-20436"></a>
<a id="trace-20462"></a>
<a id="trace-20464"></a>
- 162.30s–163.30s (×6), actor 5, squad 0 (trace 20417): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 19806. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7677604313885501, 'next_transition': 20434}.
<a id="trace-20502"></a>
- 164.00s–164.00s (×1), actor 1, squad 0 (trace 20502): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15040636949552316, 'next_transition': 20950}.
<a id="trace-20503"></a>
- 164.00s–164.00s (×1), actor 1, squad 0 (trace 20503): bounding overwatch. Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15040636949552316, 'next_transition': 20950}.
<a id="trace-20504"></a>
- 164.00s–164.00s (×1), actor 1, squad 0 (trace 20504): new contact inside 100 m. Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15040636949552316, 'next_transition': 20950}.
<a id="trace-20950"></a>
<a id="trace-20952"></a>
- 164.30s–164.30s (×2), actor 5, squad 0 (trace 20950): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 19806. Next observer evidence: {'until': 164.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2337328458742614, 'next_transition': 20963}.
<a id="trace-20963"></a>
<a id="trace-21390"></a>
- 164.40s–164.70s (×2), actor 1, squad 0 (trace 20963): new contact inside 100 m. Knowledge: actor memory at 160.00s, trace 19802. Next observer evidence: {'until': 164.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28719599242474203, 'next_transition': 21390}.
<a id="trace-21948"></a>
<a id="trace-21950"></a>
- 165.30s–165.30s (×2), actor 5, squad 0 (trace 21948): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 21854. Next observer evidence: {'until': 165.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49534755214298853, 'next_transition': 21986}.
<a id="trace-21986"></a>
- 165.70s–165.70s (×1), actor 1, squad 0 (trace 21986): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 21850. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2767825715168164, 'next_transition': 22427}.
<a id="trace-22427"></a>
<a id="trace-22429"></a>
<a id="trace-22554"></a>
<a id="trace-22556"></a>
<a id="trace-22590"></a>
<a id="trace-22592"></a>
<a id="trace-22635"></a>
<a id="trace-22637"></a>
<a id="trace-22672"></a>
<a id="trace-22674"></a>
- 165.80s–168.80s (×10), actor 5, squad 0 (trace 22427): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 21854. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9637845195674004, 'next_transition': 22554}.
<a id="trace-22691"></a>
- 169.25s–169.25s (×1), actor 1, squad 0 (trace 22691): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 21850. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0302657620806124, 'next_transition': 23127}.
<a id="trace-23127"></a>
<a id="trace-23129"></a>
<a id="trace-23220"></a>
<a id="trace-23222"></a>
<a id="trace-23250"></a>
<a id="trace-23252"></a>
<a id="trace-23301"></a>
<a id="trace-23303"></a>
<a id="trace-23334"></a>
<a id="trace-23336"></a>
<a id="trace-23488"></a>
<a id="trace-23490"></a>
<a id="trace-23513"></a>
<a id="trace-23515"></a>
- 169.80s–173.30s (×14), actor 5, squad 0 (trace 23127): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 21854. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.480822647946703, 'next_transition': 23220}.
<a id="trace-23285"></a>
- 171.45s–171.45s (×1), actor 9, squad 1 (trace 23285): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 170.00s, trace 23147. Next observer evidence: {'until': 172.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23344}.
<a id="trace-23286"></a>
- 171.45s–171.45s (×1), actor 9, squad 1 (trace 23286): NeedSupport. Knowledge: actor memory at 170.00s, trace 23147. Next observer evidence: {'until': 172.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23344}.
<a id="trace-23344"></a>
- 172.45s–172.45s (×1), actor 9, squad 1 (trace 23344): Reorganise: completed/failed drill. Knowledge: actor memory at 170.00s, trace 23147. Next observer evidence: {'until': 175.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.08848499999999948, 'next_transition': 23958}.
<a id="trace-23347"></a>
- 172.45s–172.45s (×1), actor 9, squad 1 (trace 23347): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 23147. Next observer evidence: {'until': 175.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.08848499999999948, 'next_transition': 23958}.
<a id="trace-23348"></a>
- 172.45s–172.45s (×1), actor 9, squad 1 (trace 23348): bounding overwatch. Knowledge: actor memory at 170.00s, trace 23147. Next observer evidence: {'until': 175.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.08848499999999948, 'next_transition': 23958}.
<a id="trace-23349"></a>
- 172.45s–172.45s (×1), actor 9, squad 1 (trace 23349): Reorganise complete: known contact. Knowledge: actor memory at 170.00s, trace 23147. Next observer evidence: {'until': 175.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.08848499999999948, 'next_transition': 23958}.
<a id="trace-23527"></a>
- 173.70s–173.70s (×1), actor 1, squad 0 (trace 23527): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 170.00s, trace 23140. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4767084023952824, 'next_transition': 23817}.
<a id="trace-23528"></a>
- 173.70s–173.70s (×1), actor 1, squad 0 (trace 23528): rearward bound: one stationary suppressing element. Knowledge: actor memory at 170.00s, trace 23140. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4767084023952824, 'next_transition': 23817}.
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23846"></a>
<a id="trace-23848"></a>
<a id="trace-23941"></a>
<a id="trace-23943"></a>
<a id="trace-23962"></a>
<a id="trace-23964"></a>
<a id="trace-23984"></a>
<a id="trace-23986"></a>
<a id="trace-24011"></a>
<a id="trace-24013"></a>
<a id="trace-24061"></a>
<a id="trace-24063"></a>
<a id="trace-24082"></a>
<a id="trace-24084"></a>
<a id="trace-24122"></a>
<a id="trace-24124"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24227"></a>
<a id="trace-24229"></a>
<a id="trace-24252"></a>
<a id="trace-24254"></a>
<a id="trace-24278"></a>
<a id="trace-24280"></a>
<a id="trace-24291"></a>
<a id="trace-24293"></a>
<a id="trace-24310"></a>
<a id="trace-24312"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24351"></a>
<a id="trace-24353"></a>
<a id="trace-24364"></a>
<a id="trace-24366"></a>
- 174.30s–183.80s (×36), actor 5, squad 0 (trace 23817): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 23144. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31131747379042685, 'next_transition': 23846}.
<a id="trace-23958"></a>
- 175.75s–175.75s (×1), actor 9, squad 1 (trace 23958): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 175.00s, trace 23873. Next observer evidence: {'until': 180.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24243}.
<a id="trace-24243"></a>
- 180.75s–180.75s (×1), actor 9, squad 1 (trace 24243): NeedSupport. Knowledge: actor memory at 180.00s, trace 24157. Next observer evidence: {'until': 184.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24412}.
<a id="trace-24386"></a>
- 184.25s–184.25s (×1), actor 1, squad 0 (trace 24386): NeedSupport. Knowledge: actor memory at 180.00s, trace 24150. Next observer evidence: None.
<a id="trace-24395"></a>
<a id="trace-24397"></a>
<a id="trace-24415"></a>
<a id="trace-24417"></a>
<a id="trace-24502"></a>
<a id="trace-24504"></a>
<a id="trace-24519"></a>
<a id="trace-24521"></a>
<a id="trace-24540"></a>
<a id="trace-24542"></a>
<a id="trace-24560"></a>
<a id="trace-24562"></a>
<a id="trace-24586"></a>
<a id="trace-24588"></a>
<a id="trace-24625"></a>
<a id="trace-24627"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24668"></a>
<a id="trace-24670"></a>
<a id="trace-24685"></a>
<a id="trace-24687"></a>
<a id="trace-24767"></a>
<a id="trace-24769"></a>
<a id="trace-24787"></a>
<a id="trace-24789"></a>
<a id="trace-24804"></a>
<a id="trace-24806"></a>
<a id="trace-24818"></a>
<a id="trace-24820"></a>
- 184.30s–191.80s (×30), actor 5, squad 0 (trace 24395): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 24154. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3887996871883338, 'next_transition': 24415}.
<a id="trace-24412"></a>
- 184.75s–184.75s (×1), actor 9, squad 1 (trace 24412): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 24157. Next observer evidence: {'until': 188, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0610249999999999, 'next_transition': 24610}.
<a id="trace-24413"></a>
- 184.75s–184.75s (×1), actor 9, squad 1 (trace 24413): ; retain contact cover stage. Knowledge: actor memory at 180.00s, trace 24157. Next observer evidence: {'until': 188, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0610249999999999, 'next_transition': 24610}.
<a id="trace-24610"></a>
- 188.00s–188.00s (×1), actor 9, squad 1 (trace 24610): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 185.00s, trace 24436. Next observer evidence: {'until': 218, 'shots': 6, 'casualties': 1, 'mean_displacement': 0.22075000000000067, 'next_transition': 3317}.
<a id="trace-24828"></a>
- 191.85s–191.85s (×1), actor 1, squad 0 (trace 24828): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 190.00s, trace 24696. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1307300918122923, 'next_transition': 25066}.
<a id="trace-24896"></a>
- 191.85s–191.85s (×1), actor 1, squad 0 (trace 24896): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 190.00s, trace 24696. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1307300918122923, 'next_transition': 25066}.
<a id="trace-25066"></a>
<a id="trace-25068"></a>
<a id="trace-25088"></a>
<a id="trace-25090"></a>
<a id="trace-25129"></a>
<a id="trace-25131"></a>
<a id="trace-25143"></a>
<a id="trace-25145"></a>
<a id="trace-25167"></a>
<a id="trace-25169"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25314"></a>
<a id="trace-25316"></a>
<a id="trace-25354"></a>
<a id="trace-25356"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25417"></a>
<a id="trace-25419"></a>
<a id="trace-25511"></a>
<a id="trace-25513"></a>
<a id="trace-25529"></a>
<a id="trace-25531"></a>
<a id="trace-25566"></a>
<a id="trace-25568"></a>
<a id="trace-25581"></a>
<a id="trace-25583"></a>
<a id="trace-25681"></a>
<a id="trace-25683"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
<a id="trace-25745"></a>
<a id="trace-25747"></a>
<a id="trace-25766"></a>
<a id="trace-25768"></a>
<a id="trace-25791"></a>
<a id="trace-25793"></a>
<a id="trace-25805"></a>
<a id="trace-25807"></a>
<a id="trace-25843"></a>
<a id="trace-25845"></a>
<a id="trace-25931"></a>
<a id="trace-25933"></a>
<a id="trace-25944"></a>
<a id="trace-25946"></a>
<a id="trace-25963"></a>
<a id="trace-25965"></a>
<a id="trace-25982"></a>
<a id="trace-25984"></a>
<a id="trace-26001"></a>
<a id="trace-26003"></a>
<a id="trace-26016"></a>
<a id="trace-26018"></a>
- 192.30s–207.80s (×56), actor 5, squad 0 (trace 25066): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 24700. Next observer evidence: {'until': 192.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2846299549953519, 'next_transition': 25088}.
<a id="trace-26025"></a>
- 207.80s–207.80s (×1), actor 1, squad 0 (trace 26025): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 205.00s, trace 25856. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799922050466383, 'next_transition': 26150}.
<a id="trace-26026"></a>
- 207.80s–207.80s (×1), actor 1, squad 0 (trace 26026): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 205.00s, trace 25856. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799922050466383, 'next_transition': 26150}.
<a id="trace-26150"></a>
<a id="trace-26152"></a>
<a id="trace-26209"></a>
<a id="trace-26211"></a>
<a id="trace-26301"></a>
<a id="trace-26303"></a>
<a id="trace-26339"></a>
<a id="trace-26341"></a>
<a id="trace-26365"></a>
<a id="trace-26367"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26410"></a>
<a id="trace-26412"></a>
<a id="trace-26429"></a>
<a id="trace-26431"></a>
<a id="trace-26477"></a>
<a id="trace-26479"></a>
<a id="trace-26500"></a>
<a id="trace-26502"></a>
<a id="trace-26520"></a>
<a id="trace-26522"></a>
<a id="trace-26598"></a>
<a id="trace-26600"></a>
<a id="trace-26647"></a>
<a id="trace-26649"></a>
<a id="trace-26671"></a>
<a id="trace-26673"></a>
<a id="trace-26690"></a>
<a id="trace-26692"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26747"></a>
<a id="trace-26749"></a>
- 208.30s–219.30s (×34), actor 5, squad 0 (trace 26150): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 25860. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6814334025926365, 'next_transition': 26209}.
<a id="trace-3316"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (events line 3316): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15118032976816057, 'next_transition': 26842}.
<a id="trace-3317"></a>
- 220.00s–220.00s (×1), actor 5, squad 1 (events line 3317): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26898}.
<a id="trace-26789"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (trace 26789): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.00s, trace 26789. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15118032976816057, 'next_transition': 26842}.
<a id="trace-26790"></a>
- 220.00s–220.00s (×1), actor 5, squad 1 (trace 26790): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.00s, trace 26790. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26898}.
<a id="trace-26842"></a>
<a id="trace-26844"></a>
<a id="trace-26874"></a>
<a id="trace-26902"></a>
- 220.30s–222.30s (×4), actor 5, squad 0 (trace 26842): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 26790. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6275044460533327, 'next_transition': 26874}.
<a id="trace-26898"></a>
- 222.25s–222.25s (×1), actor 9, squad 1 (trace 26898): MoveTactically. Knowledge: actor memory at 220.00s, trace 26776. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27022}.
<a id="trace-26899"></a>
- 222.25s–222.25s (×1), actor 9, squad 1 (trace 26899): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 220.00s, trace 26776. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27022}.
<a id="trace-26912"></a>
- 222.40s–222.40s (×1), actor 1, squad 0 (trace 26912): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 26770. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3591225293236077, 'next_transition': 26949}.
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-26995"></a>
<a id="trace-26997"></a>
<a id="trace-27095"></a>
<a id="trace-27097"></a>
- 223.30s–225.30s (×6), actor 5, squad 0 (trace 26949): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 26790. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4574203840974169, 'next_transition': 26995}.
<a id="trace-27022"></a>
- 224.95s–224.95s (×1), actor 9, squad 1 (trace 27022): received platoon directive. Knowledge: actor memory at 220.00s, trace 26776. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3876}.
<a id="trace-27125"></a>
- 226.00s–226.00s (×1), actor 1, squad 0 (trace 27125): MoveTactically. Knowledge: actor memory at 225.00s, trace 27023. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27139}.
<a id="trace-27126"></a>
- 226.00s–226.00s (×1), actor 1, squad 0 (trace 27126): received platoon directive. Knowledge: actor memory at 225.00s, trace 27023. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27139}.
<a id="trace-27139"></a>
- 226.25s–226.25s (×1), actor 1, squad 0 (trace 27139): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 27023. Next observer evidence: None.
<a id="trace-27247"></a>
<a id="trace-27249"></a>
<a id="trace-27294"></a>
<a id="trace-27333"></a>
<a id="trace-27335"></a>
<a id="trace-27384"></a>
<a id="trace-27491"></a>
<a id="trace-27522"></a>
<a id="trace-27524"></a>
<a id="trace-27553"></a>
<a id="trace-27555"></a>
- 226.30s–233.30s (×11), actor 5, squad 0 (trace 27247): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 27027. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0188910325580974, 'next_transition': 27294}.
<a id="trace-3461"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (events line 3461): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536178599208464, 'next_transition': 27583}.
<a id="trace-27570"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 27570): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.182763 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 27570. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536178599208464, 'next_transition': 27583}.
<a id="trace-27571"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 27571): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.182763 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 27571. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536178599208464, 'next_transition': 27583}.
<a id="trace-27583"></a>
<a id="trace-27675"></a>
<a id="trace-27677"></a>
<a id="trace-27705"></a>
<a id="trace-27737"></a>
<a id="trace-27770"></a>
<a id="trace-27772"></a>
<a id="trace-27797"></a>
<a id="trace-27799"></a>
- 234.30s–239.30s (×9), actor 5, squad 0 (trace 27583): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 233.80s, trace 27571. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.713543029856717, 'next_transition': 27675}.
<a id="trace-27815"></a>
- 239.85s–239.85s (×1), actor 1, squad 0 (trace 27815): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 235.00s, trace 27606. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30330}.
<a id="trace-27816"></a>
- 239.85s–239.85s (×1), actor 1, squad 0 (trace 27816): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 235.00s, trace 27606. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30330}.
<a id="trace-30330"></a>
<a id="trace-30332"></a>
<a id="trace-30383"></a>
<a id="trace-30385"></a>
<a id="trace-30406"></a>
<a id="trace-30408"></a>
<a id="trace-30444"></a>
<a id="trace-30446"></a>
<a id="trace-30471"></a>
<a id="trace-30553"></a>
<a id="trace-30555"></a>
<a id="trace-30584"></a>
<a id="trace-30586"></a>
<a id="trace-30619"></a>
- 240.30s–247.30s (×14), actor 5, squad 0 (trace 30330): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 30268. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3685385169315554, 'next_transition': 30383}.
<a id="trace-3596"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (events line 3596): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30629"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 30629): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.244043 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.60s, trace 30629. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8123069844086157, 'next_transition': 30676}.
<a id="trace-30630"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 30630): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.244043 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.60s, trace 30630. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8123069844086157, 'next_transition': 30676}.
<a id="trace-30676"></a>
<a id="trace-30757"></a>
<a id="trace-30781"></a>
<a id="trace-30783"></a>
<a id="trace-30815"></a>
<a id="trace-30842"></a>
<a id="trace-30844"></a>
<a id="trace-30870"></a>
<a id="trace-30872"></a>
<a id="trace-30959"></a>
<a id="trace-30961"></a>
<a id="trace-30990"></a>
<a id="trace-30992"></a>
<a id="trace-31015"></a>
<a id="trace-31038"></a>
<a id="trace-31040"></a>
<a id="trace-31060"></a>
<a id="trace-31062"></a>
<a id="trace-31149"></a>
<a id="trace-31151"></a>
<a id="trace-31176"></a>
<a id="trace-31178"></a>
<a id="trace-31200"></a>
<a id="trace-31225"></a>
<a id="trace-31249"></a>
<a id="trace-31251"></a>
<a id="trace-31336"></a>
<a id="trace-31338"></a>
<a id="trace-31362"></a>
<a id="trace-31364"></a>
<a id="trace-31384"></a>
<a id="trace-31411"></a>
<a id="trace-31435"></a>
<a id="trace-31517"></a>
<a id="trace-31519"></a>
<a id="trace-31546"></a>
<a id="trace-31548"></a>
<a id="trace-31573"></a>
<a id="trace-31575"></a>
<a id="trace-31599"></a>
<a id="trace-31601"></a>
<a id="trace-31623"></a>
<a id="trace-31625"></a>
<a id="trace-31708"></a>
<a id="trace-31710"></a>
<a id="trace-31735"></a>
<a id="trace-31737"></a>
<a id="trace-31762"></a>
<a id="trace-31785"></a>
<a id="trace-31806"></a>
- 249.30s–279.30s (×50), actor 5, squad 0 (trace 30676): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.60s, trace 30630. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4279884771925164, 'next_transition': 30757}.
<a id="trace-31899"></a>
- 280.60s–280.60s (×1), actor 1, squad 0 (trace 31899): NeedSupport. Knowledge: actor memory at 280.00s, trace 31828. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13999825771530072, 'next_transition': 31922}.
<a id="trace-31922"></a>
<a id="trace-31924"></a>
<a id="trace-31949"></a>
<a id="trace-31951"></a>
<a id="trace-31978"></a>
<a id="trace-31980"></a>
<a id="trace-32000"></a>
<a id="trace-32002"></a>
<a id="trace-32087"></a>
<a id="trace-32089"></a>
<a id="trace-32117"></a>
<a id="trace-32119"></a>
<a id="trace-32139"></a>
<a id="trace-32141"></a>
<a id="trace-32161"></a>
<a id="trace-32163"></a>
<a id="trace-32184"></a>
<a id="trace-32186"></a>
<a id="trace-32265"></a>
<a id="trace-32267"></a>
<a id="trace-32291"></a>
<a id="trace-32313"></a>
<a id="trace-32315"></a>
<a id="trace-32340"></a>
<a id="trace-32363"></a>
<a id="trace-32365"></a>
<a id="trace-32448"></a>
<a id="trace-32470"></a>
<a id="trace-32472"></a>
<a id="trace-32492"></a>
<a id="trace-32494"></a>
<a id="trace-32517"></a>
<a id="trace-32543"></a>
<a id="trace-32545"></a>
<a id="trace-32632"></a>
<a id="trace-32634"></a>
<a id="trace-32657"></a>
<a id="trace-32659"></a>
<a id="trace-32679"></a>
<a id="trace-32681"></a>
- 281.30s–302.30s (×40), actor 5, squad 0 (trace 31922): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 31831. Next observer evidence: {'until': 282.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.9013589272973673, 'next_transition': 31949}.
<a id="trace-3876"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (events line 3876): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 319, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4373}.
<a id="trace-32180"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (trace 32180): renew committed intent (75 s lifetime). Knowledge: actor memory at 289.00s, trace 32180. Next observer evidence: {'until': 319, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4373}.
<a id="trace-32691"></a>
- 302.50s–302.50s (×1), actor 1, squad 0 (trace 32691): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 300.00s, trace 32568. Next observer evidence: {'until': 302.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32695}.
<a id="trace-32695"></a>
- 302.75s–302.75s (×1), actor 1, squad 0 (trace 32695): Reorganise: completed/failed drill. Knowledge: actor memory at 300.00s, trace 32568. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32758}.
<a id="trace-32699"></a>
- 302.75s–302.75s (×1), actor 1, squad 0 (trace 32699): ReactToContact: cover and return fire. Knowledge: actor memory at 300.00s, trace 32568. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32758}.
<a id="trace-32700"></a>
- 302.75s–302.75s (×1), actor 1, squad 0 (trace 32700): Reorganise complete: known contact. Knowledge: actor memory at 300.00s, trace 32568. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32758}.
<a id="trace-32758"></a>
<a id="trace-32795"></a>
<a id="trace-32797"></a>
<a id="trace-32880"></a>
<a id="trace-32882"></a>
<a id="trace-32916"></a>
<a id="trace-32918"></a>
- 303.30s–306.30s (×7), actor 5, squad 0 (trace 32758): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 32571. Next observer evidence: {'until': 304.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.02836852348995327, 'next_transition': 32795}.
<a id="trace-32932"></a>
- 306.60s–306.60s (×1), actor 1, squad 0 (trace 32932): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 305.00s, trace 32822. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6804022155822373, 'next_transition': 32999}.
<a id="trace-32933"></a>
- 306.60s–306.60s (×1), actor 1, squad 0 (trace 32933): rearward bound: one stationary suppressing element. Knowledge: actor memory at 305.00s, trace 32822. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6804022155822373, 'next_transition': 32999}.
<a id="trace-32999"></a>
<a id="trace-33001"></a>
<a id="trace-33039"></a>
- 307.30s–308.30s (×3), actor 5, squad 0 (trace 32999): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 32824. Next observer evidence: {'until': 308.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7937979783885007, 'next_transition': 33039}.
<a id="trace-33059"></a>
- 308.85s–308.85s (×1), actor 1, squad 0 (trace 33059): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 305.00s, trace 32822. Next observer evidence: {'until': 309.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3969225995614757, 'next_transition': 33070}.
<a id="trace-33070"></a>
<a id="trace-33072"></a>
<a id="trace-33158"></a>
<a id="trace-33188"></a>
<a id="trace-33190"></a>
<a id="trace-33208"></a>
<a id="trace-33210"></a>
<a id="trace-33236"></a>
<a id="trace-33238"></a>
<a id="trace-33260"></a>
<a id="trace-33342"></a>
<a id="trace-33344"></a>
<a id="trace-33374"></a>
- 309.30s–316.30s (×13), actor 5, squad 0 (trace 33070): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 32824. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7654491960297141, 'next_transition': 33158}.
<a id="trace-3994"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (events line 3994): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33385"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (trace 33385): renew committed intent (75 s lifetime). Knowledge: actor memory at 316.60s, trace 33385. Next observer evidence: {'until': 318.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6443019717269756, 'next_transition': 33425}.
<a id="trace-33425"></a>
<a id="trace-33530"></a>
<a id="trace-33560"></a>
<a id="trace-33562"></a>
<a id="trace-33587"></a>
<a id="trace-33629"></a>
<a id="trace-33631"></a>
- 318.30s–323.30s (×7), actor 5, squad 0 (trace 33425): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.60s, trace 33385. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2948194071604358, 'next_transition': 33530}.
<a id="trace-33641"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 33641): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 320.00s, trace 33470. Next observer evidence: {'until': 324.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33763}.
<a id="trace-33642"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 33642): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 320.00s, trace 33470. Next observer evidence: {'until': 324.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33763}.
<a id="trace-33763"></a>
<a id="trace-33765"></a>
<a id="trace-33854"></a>
<a id="trace-33910"></a>
<a id="trace-33942"></a>
<a id="trace-34070"></a>
<a id="trace-34072"></a>
- 324.30s–330.30s (×7), actor 5, squad 0 (trace 33763): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 33472. Next observer evidence: {'until': 325.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5669970820081784, 'next_transition': 33854}.
<a id="trace-34086"></a>
- 330.65s–330.65s (×1), actor 1, squad 0 (trace 34086): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 330.00s, trace 34005. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9922597519819775, 'next_transition': 34105}.
<a id="trace-34105"></a>
<a id="trace-34107"></a>
- 331.30s–331.30s (×2), actor 5, squad 0 (trace 34105): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 34007. Next observer evidence: None.
<a id="trace-34118"></a>
- 331.40s–331.40s (×1), actor 1, squad 0 (trace 34118): MoveTactically. Knowledge: actor memory at 330.00s, trace 34005. Next observer evidence: {'until': 331.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361174689616723, 'next_transition': 34133}.
<a id="trace-34119"></a>
- 331.40s–331.40s (×1), actor 1, squad 0 (trace 34119): received platoon directive. Knowledge: actor memory at 330.00s, trace 34005. Next observer evidence: {'until': 331.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361174689616723, 'next_transition': 34133}.
<a id="trace-34133"></a>
- 331.65s–331.65s (×1), actor 1, squad 0 (trace 34133): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 330.00s, trace 34005. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0144107818474044, 'next_transition': 34308}.
<a id="trace-34308"></a>
<a id="trace-34310"></a>
<a id="trace-34343"></a>
<a id="trace-34345"></a>
<a id="trace-34442"></a>
<a id="trace-34489"></a>
<a id="trace-34491"></a>
<a id="trace-34520"></a>
<a id="trace-34522"></a>
<a id="trace-34545"></a>
<a id="trace-34547"></a>
<a id="trace-34572"></a>
<a id="trace-34574"></a>
<a id="trace-34657"></a>
<a id="trace-34659"></a>
<a id="trace-34692"></a>
<a id="trace-34723"></a>
<a id="trace-34725"></a>
<a id="trace-34766"></a>
<a id="trace-34768"></a>
<a id="trace-34790"></a>
- 333.30s–344.30s (×21), actor 5, squad 0 (trace 34308): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 34007. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7009667126071317, 'next_transition': 34343}.
<a id="trace-34810"></a>
- 344.85s–344.85s (×1), actor 1, squad 0 (trace 34810): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 340.00s, trace 34594. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1701049914758545, 'next_transition': 34922}.
<a id="trace-34922"></a>
- 345.30s–345.30s (×1), actor 5, squad 0 (trace 34922): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 34865. Next observer evidence: {'until': 345.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3401856276358529, 'next_transition': 34942}.
<a id="trace-34942"></a>
- 345.85s–345.85s (×1), actor 1, squad 0 (trace 34942): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 345.00s, trace 34863. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19843990589092753, 'next_transition': 35009}.
<a id="trace-35009"></a>
<a id="trace-35038"></a>
<a id="trace-35077"></a>
<a id="trace-35079"></a>
<a id="trace-35120"></a>
<a id="trace-35200"></a>
<a id="trace-35229"></a>
<a id="trace-35231"></a>
<a id="trace-35255"></a>
<a id="trace-35278"></a>
<a id="trace-35304"></a>
<a id="trace-35428"></a>
<a id="trace-35430"></a>
<a id="trace-35462"></a>
<a id="trace-35464"></a>
<a id="trace-35489"></a>
<a id="trace-35491"></a>
- 346.30s–358.30s (×17), actor 5, squad 0 (trace 35009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 34865. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4784102383202369, 'next_transition': 35038}.
<a id="trace-4373"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (events line 4373): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-35482"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 35482): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.00s, trace 35482. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-35510"></a>
- 359.25s–359.25s (×1), actor 1, squad 0 (trace 35510): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 355.00s, trace 35328. Next observer evidence: None.
<a id="trace-35556"></a>
- 359.30s–359.30s (×1), actor 5, squad 0 (trace 35556): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.00s, trace 35482. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

412 matched order/radio deliveries; 389 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.538s; maximum 6.150s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2924: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2932: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2936: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2937: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2938: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2939: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2944: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2945: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2946: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5253: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5259: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5261: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5263: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5265: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5266: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5267: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5268: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5269: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5270: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5271: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5272: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5273: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5274: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5275: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5276: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5633: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5638: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5639: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5641: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5642: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 5643: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 5644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5645: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5646: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5647: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5648: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5649: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5650: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5651: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5652: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5653: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5654: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 5655: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 5656: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5969: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5974: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5975: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5977: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5978: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 5979: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 5980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5981: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5982: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5983: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5984: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5985: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5986: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5987: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5988: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5989: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5990: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 5991: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 5992: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6632: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6637: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6638: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6640: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6641: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 6642: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 6643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6644: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6645: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6646: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6647: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6648: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6649: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6650: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6651: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6652: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6653: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 6654: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 6655: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6997: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7002: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7003: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7005: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7006: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 7007: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 7008: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7009: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7010: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7011: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7012: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7013: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7014: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7015: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7016: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7017: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7018: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 7019: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 7020: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 7293: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7298: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7299: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7301: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 7302: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 7303: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7304: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7305: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7306: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7307: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7308: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7309: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7310: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7311: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7312: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7313: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 7314: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 7315: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7814: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7819: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7820: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7822: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 7823: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 7824: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7825: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7826: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7827: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7828: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7829: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7830: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7831: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7832: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7833: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7834: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 7835: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 7836: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 8114: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8119: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8120: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8122: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8123: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8124: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8125: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8126: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8127: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8128: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8129: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8130: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8131: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8132: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8133: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8134: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8135: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8136: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 8564: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8569: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8570: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8572: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 8573: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 8574: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8575: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8576: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8577: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8578: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8579: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8580: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8581: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8582: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8583: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8584: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 8585: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 8586: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 8911: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8916: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8917: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8919: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 8920: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 8921: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8922: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8923: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8924: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8925: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8926: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8927: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8928: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8929: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8930: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8931: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 8932: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 8933: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 9173: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9178: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9179: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9181: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9182: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9183: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9184: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9185: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9186: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9187: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9188: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9189: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9190: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9191: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9192: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9193: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9194: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9195: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 9394: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 9396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 9397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9399: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9400: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 9402: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 9403: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 9404: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9405: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9406: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9407: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9408: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9409: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9410: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9411: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9412: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 9413: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 9414: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 9415: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 9416: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 9509: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 9510: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 9511: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 9512: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 9627: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9632: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9633: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 9635: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 9636: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 9637: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9638: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9639: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9640: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9641: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9642: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9643: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9644: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9645: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 9646: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 9647: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 9648: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 9649: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 10189: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 10192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10194: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10195: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 10197: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 10198: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 10199: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10200: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10201: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10202: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10203: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10204: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10205: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10206: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10207: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10208: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10209: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 10210: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 10211: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 10550: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 10551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 10552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 10553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10555: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10556: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 10558: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 10559: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 10560: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10561: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10562: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10563: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10564: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10565: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10566: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10567: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10568: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 10569: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 10570: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 10571: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 10572: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 10869: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 10871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 10872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10874: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10875: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 10877: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 10878: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 10879: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10880: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10881: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10882: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10883: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10884: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10885: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10886: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10887: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 10888: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 10889: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 10890: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 10891: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 11434: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 11436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 11437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11439: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11440: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 11442: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 11443: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 11444: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11445: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11446: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11447: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11448: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11449: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11450: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11451: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11452: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 11453: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 11454: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 11455: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 11456: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 11852: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 11853: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 11885: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 11886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 11887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 11888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11890: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11891: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 11893: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 11894: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 11895: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11896: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11897: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11898: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11899: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11900: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11901: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11902: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11903: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 11904: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 11905: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 11906: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 11907: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 12369: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 12371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 12372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12374: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12375: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 12377: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 12378: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 12379: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12380: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12381: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12382: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12383: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12384: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12385: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12386: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12387: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 12388: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 12389: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 12390: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 12391: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 12668: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 12670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 12671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12673: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12674: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 12676: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 12677: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 12678: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12679: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12680: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12681: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12682: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12683: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12684: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12685: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12686: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 12687: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 12688: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 12689: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 12690: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 13185: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 13187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 13188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13190: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13191: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13193: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 13194: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 13195: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13196: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13197: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13198: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13199: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13200: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13201: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13202: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13203: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13204: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13205: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 13206: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 13207: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 13592: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 13594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 13595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13597: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13598: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 13599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13600: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 13601: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 13602: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13603: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13604: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13605: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13606: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13607: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13608: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13609: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13610: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13611: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 13612: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 13613: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 13614: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 14162: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 14164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 14165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14167: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14168: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 14169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14170: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 14171: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 14172: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14173: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14174: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14175: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14176: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14177: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14178: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14179: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14180: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14181: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14182: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 14183: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 14184: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 16045: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 16046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 16047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 16048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 16050: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 16051: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 16052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 16053: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 16054: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 16055: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 16056: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 16057: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 16058: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16059: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16060: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16061: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16062: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16063: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16064: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16065: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 16066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 16067: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 16330: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 16331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 16332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 16333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 16335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 16336: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 16337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 16338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 16339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 16340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 16341: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 16342: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 16343: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 16344: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 16345: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 16346: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16347: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 16348: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 16349: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 16350: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 16351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 16352: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 16989: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 16990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 16991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 16992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16994: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 16995: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 16996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 16997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 16998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 16999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17000: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17001: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17002: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17003: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17004: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17005: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17006: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17008: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17009: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 17010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 17011: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 17109: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 17110: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 17111: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 17112: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 17276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 17277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 17278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17280: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 17281: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 17282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 17284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 17285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17286: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17287: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17288: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17289: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17290: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17291: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17292: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17293: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17294: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17295: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 17296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 17297: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 19802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 19803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 19804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 19805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 19806: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 19807: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 19808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 19809: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 19810: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 19811: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19812: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 19813: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 19814: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 19815: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 19816: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 19817: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19818: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 19819: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 19820: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19821: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 19822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 19823: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 21850: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 21851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 21852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 21853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 21854: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 21855: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 21856: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21857: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 21858: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 21859: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 21860: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21861: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21862: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21863: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21864: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21865: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21866: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21867: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21868: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21869: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 21870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 21871: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 23140: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 23141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 23142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 23143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 23144: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 23145: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 23146: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 23147: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 23148: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 23149: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 23150: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23151: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23152: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23153: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 23154: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23155: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23156: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23157: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23158: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23159: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 23160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 23161: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 23866: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 23868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 23869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 23870: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 23871: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 23872: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 23873: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 23874: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 23875: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23876: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23877: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 23878: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 23879: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 23880: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23881: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 23882: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23883: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23884: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 23885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 23886: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 24150: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 24151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 24152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 24153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 24154: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 24155: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 24156: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 24157: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 24158: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 24159: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 24160: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 24161: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 24162: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 24163: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 24164: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 24165: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 24166: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 24167: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 24168: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 24169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 24170: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 24429: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 24430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 24431: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 24432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 24433: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 24434: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 24435: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 24436: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 24437: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 24438: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 24439: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 24440: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 24441: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 24442: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 24443: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 24444: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 24445: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 24446: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 24447: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 24448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 24449: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 24696: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 24697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 24698: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 24699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 24700: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 24701: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 24702: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 24703: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 24704: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 24705: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 24706: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 24707: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 24708: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 24709: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 24710: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 24711: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 24712: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 24713: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 24714: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 24715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 24716: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 25229: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 25230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 25231: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 25232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 25233: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 25234: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 25235: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 25236: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 25237: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 25238: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 25239: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 25240: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 25241: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 25242: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 25243: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 25244: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 25245: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 25246: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 25247: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 25248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 25249: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 25592: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 25593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 25594: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 25595: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 25596: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 25597: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 25598: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 25599: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 25600: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 25601: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25602: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25603: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25604: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 25605: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25606: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25607: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 25608: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 25609: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25610: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 25611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 25612: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 25856: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 25857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 25858: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 25859: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 25860: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 25861: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 25862: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 25863: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 25864: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 25865: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 25866: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 25867: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 25868: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 25869: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 25870: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 25871: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 25872: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 25873: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 25874: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 25875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 25876: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 26230: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 26231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 26232: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 26233: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 26234: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 26235: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 26236: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 26237: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 26238: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 26239: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 26240: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 26241: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 26242: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 26243: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 26244: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 26245: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 26246: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 26247: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 26248: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 26249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 26250: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 26529: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 26530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 26531: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 26532: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 26533: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 26534: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 26535: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 26536: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 26537: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 26538: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 26539: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 26540: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 26541: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 26542: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 26543: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 26544: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 26545: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 26546: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 26547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 26548: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 26770: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 26771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 26772: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 26773: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 26774: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 26775: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 26776: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 26777: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 26778: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 26779: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 26780: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 26781: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 26782: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 26783: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 26784: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 26785: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 26786: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 26787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 26788: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 26789: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 26790: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 27023: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 27024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 27025: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 27026: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 27027: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 27028: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 27029: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 27030: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 27031: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 27032: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 27033: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 27034: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 27035: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 27036: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 27037: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 27038: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 27039: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 27040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 27041: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 27399: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 27400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 27401: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 27402: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 27403: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 27404: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 27405: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 27406: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 27407: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 27408: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 27409: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 27410: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 27411: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 27412: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 27413: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 27414: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 27415: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 27416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 27417: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 27570: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 27571: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 27606: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 27607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 27608: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 27609: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 27610: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 27611: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 27612: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 27613: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 27614: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 27615: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 27616: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 27617: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 27618: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 27619: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 27620: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 27621: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 27622: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 27623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 27624: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 30264: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 30265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 30266: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 30267: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 30268: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 30269: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 30270: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 30271: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 30272: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 30273: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 30274: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 30275: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 30276: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 30277: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 30278: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 30279: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 30280: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 30281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 30282: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 30492: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 30493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 30494: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 30495: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 30496: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 30497: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 30498: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 30499: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 30500: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 30501: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 30502: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 30503: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 30504: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 30505: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 30506: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 30507: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 30508: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 30509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 30510: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 30629: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 30630: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 30694: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 30695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 30696: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 30697: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 30698: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 30699: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 30700: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 30701: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 30702: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 30703: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 30704: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 30705: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 30706: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 30707: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 30708: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 30709: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 30710: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 30711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 30712: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 30894: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 30895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 30896: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 30897: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 30898: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 30899: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 30900: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 30901: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 30902: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 30903: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 30904: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 30905: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 30906: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 30907: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 30908: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 30909: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 30910: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 30911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 30912: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 31088: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 31089: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 31090: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 31091: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 31092: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 31093: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 31094: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 31095: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 31096: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 31097: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 31098: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 31099: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 31100: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 31101: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 31102: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 31103: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 31104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 31105: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 31277: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 31278: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 31279: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 31280: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 31281: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 31282: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 31283: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 31284: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 31285: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 31286: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 31287: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 31288: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 31289: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 31290: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 31291: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 31292: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 31293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 31294: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 31458: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 31459: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 31460: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 31461: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 31462: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 31463: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 31464: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 31465: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 31466: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 31467: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 31468: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 31469: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 31470: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 31471: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 31472: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 31473: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 31474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 31475: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 31648: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 31649: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 31650: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 31651: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 31652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 31653: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 31654: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 31655: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 31656: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 31657: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 31658: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 31659: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 31660: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 31661: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 31662: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 31663: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 31664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 31665: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 31828: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 31829: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 31830: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 31831: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 31832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 31833: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 31834: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 31835: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 31836: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 31837: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 31838: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 31839: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 31840: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 31841: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 31842: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 31843: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 31844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 31845: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 32027: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 32028: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 32029: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 32030: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 32031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 32032: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 32033: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 32034: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 32035: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 32036: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 32037: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 32038: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 32039: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 32040: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 32041: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 32042: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 32043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 32044: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 32180: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 32204: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 32205: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 32206: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 32207: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 32208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 32209: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 32210: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 32211: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 32212: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 32213: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 32214: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 32215: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 32216: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 32217: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 32218: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 32219: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 32220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 32221: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 32388: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 32389: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 32390: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 32391: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 32392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 32393: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 32394: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 32395: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 32396: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 32397: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 32398: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 32399: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 32400: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 32401: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 32402: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 32403: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 32404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 32405: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 32568: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 32569: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 32570: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 32571: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 32572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 32573: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 32574: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 32575: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 32576: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 32577: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 32578: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 32579: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 32580: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 32581: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 32582: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 32583: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 32584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 32585: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 32822: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 32823: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 32824: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 32825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 32826: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 32827: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 32828: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 32829: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 32830: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 32831: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 32832: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 32833: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 32834: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 32835: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 32836: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 32837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 33100: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 33101: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 33102: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 33103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 33104: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 33105: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 33106: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 33107: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 33108: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 33109: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 33110: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 33111: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 33112: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 33113: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 33114: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 33115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 33283: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 33284: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 33285: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 33286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 33287: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 33288: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 33289: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 33290: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 33291: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 33292: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 33293: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 33294: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 33295: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 33296: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 33297: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 33298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 33385: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 33470: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 33471: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 33472: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 33473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 33474: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 33475: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 33476: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 33477: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 33478: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 33479: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 33480: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 33481: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 33482: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 33483: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 33484: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 33485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 33790: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 33791: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 33792: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 33793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 33794: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 33795: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 33796: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 33797: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 33798: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 33799: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 33800: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 33801: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 33802: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 33803: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 33804: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 33805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 34005: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 34006: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 34007: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 34008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 34009: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 34010: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 34011: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 34012: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 34013: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 34014: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 34015: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 34016: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 34017: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 34018: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 34019: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 34020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 34382: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 34383: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 34384: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 34385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 34386: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 34387: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34388: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34389: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34390: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 34391: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34392: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 34393: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 34394: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 34395: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 34396: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 34397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 34594: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 34595: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 34596: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 34597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 34598: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 34599: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 34600: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 34601: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 34602: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 34603: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 34604: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 34605: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 34606: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 34607: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 34608: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 34609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 34863: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 34864: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 34865: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 34866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 34867: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 34868: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 34869: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 34870: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 34871: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 34872: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 34873: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 34874: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 34875: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 34876: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 34877: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 34878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 35141: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 35142: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 35143: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 35144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 35145: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 35146: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 35147: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 35148: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 35149: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 35150: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 35151: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 35152: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 35153: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 35154: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 35155: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 35156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 35328: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 35329: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 35330: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 35331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 35332: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 35333: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 35334: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 35335: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 35336: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 35337: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 35338: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 35339: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 35340: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 35341: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 35342: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 35343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 35482: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 35573: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 35574: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 35575: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 35576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 35577: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 35578: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 35579: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 35580: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 35581: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 35582: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 35583: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 35584: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 35585: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 35586: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 35587: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 35588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Dane incapacitated
- 1: Ellis incapacitated
- 1: Moss killed in action
- 1: Ash killed in action
- 1: Tern killed in action
- 1: Toll killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
