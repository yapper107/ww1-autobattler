# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/21/108/good-ember/battle-108-1789674131042529190`

## Battle summary

**Ember** · 360 s · 462 shots.

### Turning points

- 14.0s, squad 4: contact (events line 177). First recorded contact.
- 19.1s, squad 1: withdrawal ([trace 2922](#trace-2922)). 57.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 25.3s, squad 0: withdrawal ([trace 6309](#trace-6309)). 70.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 37.0s, squad 1: help call ([trace 7832](#trace-7832)). No completion observed before termination.
- 42.9s, squad 0: help call ([trace 8274](#trace-8274)). 73.5s, squad 1: answered a neighbour with support by fire.
- 73.5s, squad 1: help answer ([trace 10283](#trace-10283)). 115.5s, squad 1: advanced tactically.
- 105.3s, squad 0: assault ([trace 15478](#trace-15478)). 106.2s, squad 0: advanced tactically.
- 139.7s, squad 1: assault ([trace 19792](#trace-19792)). 140.2s, squad 1: advanced tactically.
- 151.2s, squad 1: assault ([trace 22177](#trace-22177)). 152.2s, squad 1: advanced tactically.
- 152.2s, squad 1: help call ([trace 22625](#trace-22625)). No completion observed before termination.
- 7 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 73 shots, 7/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, prepared a base of fire and 3 further drill types; withdrew; 51 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 228 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 110 shots, 0/4 lost.

### Decisions and attribution

At 115.5s, squad 1 chose advanced tactically ([trace 16216](#trace-16216)), followed by 10 shots and 1 own casualties; estimate 8.5 against 0 distinct squad-reported contacts; At 165.3s, squad 1 chose took cover and returned fire ([trace 24741](#trace-24741)), followed by 1 shots and 1 own casualties; estimate 16.6 against 0 distinct squad-reported contacts; At 159.2s, squad 1 chose broke contact ([trace 24065](#trace-24065)), followed by 0 shots and 1 own casualties; estimate 16.5 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1403](#trace-1403)). Following evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.268296226047468, 'next_transition': 1903}.
- 26.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.916842 retreat threshold=0.220000 initiative=requires intent ([trace 6934](#trace-6934)). Following evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.036139481226214, 'next_transition': 6980}.

### Communication

325 matched deliveries (mean 0.64s, max 5.25s); 375 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.00s, squad 4, contact, evidence events line 177: First recorded contact; .
- 19.05s, squad 1, withdrawal, evidence 2922: BreakContact: believed ratio at least two without superiority; 57.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 25.30s, squad 0, withdrawal, evidence 6309: BreakContact: believed ratio at least two without superiority; 70.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 37.00s, squad 1, help call, evidence 7832: NeedSupport; No completion observed before termination.
- 42.85s, squad 0, help call, evidence 8274: NeedSupport; 73.5s, squad 1: answered a neighbour with support by fire.
- 73.50s, squad 1, help answer, evidence 10283: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 115.5s, squad 1: advanced tactically.
- 105.30s, squad 0, assault, evidence 15478: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 106.2s, squad 0: advanced tactically.
- 139.65s, squad 1, assault, evidence 19792: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 140.2s, squad 1: advanced tactically.
- 151.15s, squad 1, assault, evidence 22177: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 152.2s, squad 1: advanced tactically.
- 152.15s, squad 1, help call, evidence 22625: NeedSupport; No completion observed before termination.
- 156.30s, squad 0, assault, evidence 23490: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 156.7s, squad 0: advanced tactically.
- 159.25s, squad 1, withdrawal, evidence 24065: BreakContact: believed ratio at least two without superiority; 165.3s, squad 1: took cover and returned fire.
- 168.60s, squad 1, withdrawal, evidence 27092: BreakContact: believed ratio at least two without superiority; 188.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 177.85s, squad 0, withdrawal, evidence 27805: BreakContact: believed ratio at least two without superiority; 197.6s, squad 0: took cover and returned fire.
- 189.45s, squad 0, help call, evidence 28492: NeedSupport; No completion observed before termination.
- 200.95s, squad 0, withdrawal, evidence 29072: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 232.45s, squad 0, help call, evidence 30419: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.47215091673374, 'next_transition': 1067}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.47215091673374, 'next_transition': 1067}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.47215091673374, 'next_transition': 1067}.
<a id="trace-311"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 311): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.216132546021278, 'next_transition': 154}.
<a id="trace-312"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 312): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.216132546021278, 'next_transition': 154}.
<a id="trace-313"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 313): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.216132546021278, 'next_transition': 154}.
<a id="trace-666"></a>
<a id="trace-668"></a>
<a id="trace-695"></a>
<a id="trace-697"></a>
<a id="trace-732"></a>
<a id="trace-734"></a>
<a id="trace-759"></a>
<a id="trace-761"></a>
<a id="trace-783"></a>
<a id="trace-785"></a>
<a id="trace-808"></a>
<a id="trace-810"></a>
<a id="trace-839"></a>
<a id="trace-841"></a>
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-948"></a>
<a id="trace-950"></a>
<a id="trace-978"></a>
<a id="trace-980"></a>
<a id="trace-1015"></a>
<a id="trace-1017"></a>
<a id="trace-1037"></a>
<a id="trace-1039"></a>
<a id="trace-1069"></a>
<a id="trace-1071"></a>
<a id="trace-1102"></a>
<a id="trace-1104"></a>
<a id="trace-1140"></a>
<a id="trace-1142"></a>
<a id="trace-1164"></a>
<a id="trace-1166"></a>
<a id="trace-1184"></a>
<a id="trace-1186"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1296"></a>
<a id="trace-1298"></a>
<a id="trace-1318"></a>
<a id="trace-1320"></a>
<a id="trace-1346"></a>
<a id="trace-1348"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
<a id="trace-1398"></a>
<a id="trace-1400"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-1832"></a>
<a id="trace-1834"></a>
<a id="trace-1870"></a>
<a id="trace-1872"></a>
<a id="trace-1897"></a>
<a id="trace-1899"></a>
<a id="trace-2328"></a>
<a id="trace-2330"></a>
<a id="trace-2711"></a>
<a id="trace-2713"></a>
<a id="trace-2745"></a>
<a id="trace-2747"></a>
<a id="trace-2777"></a>
<a id="trace-2779"></a>
<a id="trace-2817"></a>
<a id="trace-2819"></a>
<a id="trace-2838"></a>
<a id="trace-2840"></a>
<a id="trace-2884"></a>
<a id="trace-2886"></a>
<a id="trace-2909"></a>
<a id="trace-2911"></a>
<a id="trace-3324"></a>
<a id="trace-3326"></a>
<a id="trace-3344"></a>
<a id="trace-3346"></a>
<a id="trace-3443"></a>
<a id="trace-3445"></a>
<a id="trace-4041"></a>
<a id="trace-4043"></a>
<a id="trace-4632"></a>
<a id="trace-4634"></a>
<a id="trace-5828"></a>
<a id="trace-5830"></a>
<a id="trace-5896"></a>
<a id="trace-5898"></a>
<a id="trace-5945"></a>
<a id="trace-5947"></a>
<a id="trace-6019"></a>
<a id="trace-6021"></a>
<a id="trace-6066"></a>
<a id="trace-6068"></a>
<a id="trace-6137"></a>
<a id="trace-6139"></a>
<a id="trace-6193"></a>
<a id="trace-6195"></a>
<a id="trace-6301"></a>
<a id="trace-6303"></a>
<a id="trace-6883"></a>
<a id="trace-6885"></a>
<a id="trace-6914"></a>
<a id="trace-6916"></a>
<a id="trace-6951"></a>
<a id="trace-6953"></a>
<a id="trace-6984"></a>
<a id="trace-6986"></a>
<a id="trace-7004"></a>
<a id="trace-7006"></a>
<a id="trace-7046"></a>
<a id="trace-7048"></a>
<a id="trace-7081"></a>
<a id="trace-7083"></a>
<a id="trace-7111"></a>
<a id="trace-7113"></a>
<a id="trace-7145"></a>
<a id="trace-7147"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7265"></a>
<a id="trace-7267"></a>
<a id="trace-7292"></a>
<a id="trace-7294"></a>
<a id="trace-7310"></a>
<a id="trace-7312"></a>
<a id="trace-7343"></a>
<a id="trace-7345"></a>
<a id="trace-7368"></a>
<a id="trace-7370"></a>
<a id="trace-7395"></a>
<a id="trace-7397"></a>
<a id="trace-7409"></a>
<a id="trace-7411"></a>
<a id="trace-7445"></a>
<a id="trace-7447"></a>
<a id="trace-7617"></a>
<a id="trace-7619"></a>
<a id="trace-7720"></a>
<a id="trace-7722"></a>
<a id="trace-7748"></a>
<a id="trace-7750"></a>
<a id="trace-7782"></a>
<a id="trace-7784"></a>
<a id="trace-7810"></a>
<a id="trace-7812"></a>
<a id="trace-7857"></a>
<a id="trace-7859"></a>
<a id="trace-7869"></a>
<a id="trace-7871"></a>
<a id="trace-7902"></a>
<a id="trace-7904"></a>
<a id="trace-7919"></a>
<a id="trace-7921"></a>
<a id="trace-7944"></a>
<a id="trace-7946"></a>
<a id="trace-7956"></a>
<a id="trace-7958"></a>
<a id="trace-8054"></a>
<a id="trace-8056"></a>
<a id="trace-8076"></a>
<a id="trace-8078"></a>
<a id="trace-8100"></a>
<a id="trace-8102"></a>
<a id="trace-8115"></a>
<a id="trace-8117"></a>
<a id="trace-8147"></a>
<a id="trace-8149"></a>
<a id="trace-8163"></a>
<a id="trace-8165"></a>
<a id="trace-8305"></a>
<a id="trace-8307"></a>
<a id="trace-8328"></a>
<a id="trace-8330"></a>
<a id="trace-8364"></a>
<a id="trace-8366"></a>
<a id="trace-8380"></a>
<a id="trace-8382"></a>
<a id="trace-8469"></a>
<a id="trace-8471"></a>
<a id="trace-8495"></a>
<a id="trace-8497"></a>
<a id="trace-8516"></a>
<a id="trace-8518"></a>
<a id="trace-8528"></a>
<a id="trace-8530"></a>
<a id="trace-8548"></a>
<a id="trace-8550"></a>
<a id="trace-8561"></a>
<a id="trace-8563"></a>
<a id="trace-8588"></a>
<a id="trace-8590"></a>
<a id="trace-8609"></a>
<a id="trace-8611"></a>
<a id="trace-8637"></a>
<a id="trace-8639"></a>
<a id="trace-8652"></a>
<a id="trace-8654"></a>
<a id="trace-8743"></a>
<a id="trace-8745"></a>
<a id="trace-8835"></a>
<a id="trace-8837"></a>
<a id="trace-8862"></a>
<a id="trace-8864"></a>
<a id="trace-8886"></a>
<a id="trace-8888"></a>
<a id="trace-8913"></a>
<a id="trace-8915"></a>
<a id="trace-8943"></a>
<a id="trace-8945"></a>
<a id="trace-8970"></a>
<a id="trace-8972"></a>
<a id="trace-8989"></a>
<a id="trace-8991"></a>
<a id="trace-9016"></a>
<a id="trace-9018"></a>
<a id="trace-9034"></a>
<a id="trace-9036"></a>
<a id="trace-9113"></a>
<a id="trace-9115"></a>
<a id="trace-9130"></a>
<a id="trace-9132"></a>
<a id="trace-9152"></a>
<a id="trace-9154"></a>
<a id="trace-9175"></a>
<a id="trace-9177"></a>
<a id="trace-9196"></a>
<a id="trace-9198"></a>
<a id="trace-9216"></a>
<a id="trace-9218"></a>
<a id="trace-9246"></a>
<a id="trace-9248"></a>
<a id="trace-9270"></a>
<a id="trace-9272"></a>
<a id="trace-9297"></a>
<a id="trace-9299"></a>
<a id="trace-9323"></a>
<a id="trace-9325"></a>
<a id="trace-9414"></a>
<a id="trace-9416"></a>
<a id="trace-9616"></a>
<a id="trace-9618"></a>
<a id="trace-9645"></a>
<a id="trace-9647"></a>
<a id="trace-9668"></a>
<a id="trace-9670"></a>
<a id="trace-9691"></a>
<a id="trace-9693"></a>
<a id="trace-9711"></a>
<a id="trace-9713"></a>
<a id="trace-9740"></a>
<a id="trace-9742"></a>
<a id="trace-9753"></a>
<a id="trace-9755"></a>
<a id="trace-9772"></a>
<a id="trace-9774"></a>
<a id="trace-9785"></a>
<a id="trace-9787"></a>
<a id="trace-9867"></a>
<a id="trace-9869"></a>
<a id="trace-9906"></a>
<a id="trace-9908"></a>
<a id="trace-9925"></a>
<a id="trace-9927"></a>
<a id="trace-9941"></a>
<a id="trace-9943"></a>
<a id="trace-9958"></a>
<a id="trace-9960"></a>
<a id="trace-9985"></a>
<a id="trace-9987"></a>
<a id="trace-10001"></a>
<a id="trace-10003"></a>
<a id="trace-10023"></a>
<a id="trace-10025"></a>
<a id="trace-10033"></a>
<a id="trace-10035"></a>
<a id="trace-10123"></a>
<a id="trace-10125"></a>
<a id="trace-10134"></a>
<a id="trace-10136"></a>
<a id="trace-10163"></a>
<a id="trace-10165"></a>
<a id="trace-10193"></a>
<a id="trace-10195"></a>
<a id="trace-10215"></a>
<a id="trace-10217"></a>
<a id="trace-10233"></a>
<a id="trace-10235"></a>
<a id="trace-10274"></a>
<a id="trace-10276"></a>
<a id="trace-12814"></a>
<a id="trace-12816"></a>
<a id="trace-12843"></a>
<a id="trace-12845"></a>
<a id="trace-12856"></a>
<a id="trace-12858"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
<a id="trace-12967"></a>
<a id="trace-12969"></a>
<a id="trace-12996"></a>
<a id="trace-12998"></a>
<a id="trace-13010"></a>
<a id="trace-13012"></a>
<a id="trace-13027"></a>
<a id="trace-13029"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
<a id="trace-13052"></a>
<a id="trace-13054"></a>
<a id="trace-13065"></a>
<a id="trace-13067"></a>
<a id="trace-13082"></a>
<a id="trace-13084"></a>
<a id="trace-13089"></a>
<a id="trace-13091"></a>
<a id="trace-13173"></a>
<a id="trace-13175"></a>
<a id="trace-13185"></a>
<a id="trace-13187"></a>
<a id="trace-13198"></a>
<a id="trace-13200"></a>
<a id="trace-13210"></a>
<a id="trace-13212"></a>
<a id="trace-13232"></a>
<a id="trace-13234"></a>
<a id="trace-13246"></a>
<a id="trace-13248"></a>
<a id="trace-13263"></a>
<a id="trace-13265"></a>
<a id="trace-13278"></a>
<a id="trace-13280"></a>
<a id="trace-13295"></a>
<a id="trace-13297"></a>
<a id="trace-13304"></a>
<a id="trace-13306"></a>
<a id="trace-13383"></a>
<a id="trace-13385"></a>
<a id="trace-13390"></a>
<a id="trace-13392"></a>
<a id="trace-13406"></a>
<a id="trace-13408"></a>
<a id="trace-13425"></a>
<a id="trace-13427"></a>
<a id="trace-13442"></a>
<a id="trace-13444"></a>
<a id="trace-13456"></a>
<a id="trace-13458"></a>
<a id="trace-13472"></a>
<a id="trace-13474"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13502"></a>
<a id="trace-13504"></a>
<a id="trace-13513"></a>
<a id="trace-13515"></a>
<a id="trace-13589"></a>
<a id="trace-13591"></a>
<a id="trace-13597"></a>
<a id="trace-13599"></a>
<a id="trace-13611"></a>
<a id="trace-13613"></a>
<a id="trace-13625"></a>
<a id="trace-13627"></a>
<a id="trace-13646"></a>
<a id="trace-13648"></a>
<a id="trace-13659"></a>
<a id="trace-13661"></a>
<a id="trace-13678"></a>
<a id="trace-13680"></a>
<a id="trace-13689"></a>
<a id="trace-13691"></a>
<a id="trace-13703"></a>
<a id="trace-13705"></a>
<a id="trace-13711"></a>
<a id="trace-13713"></a>
<a id="trace-13788"></a>
<a id="trace-13790"></a>
<a id="trace-13804"></a>
<a id="trace-13806"></a>
<a id="trace-13818"></a>
<a id="trace-13820"></a>
<a id="trace-13833"></a>
<a id="trace-13835"></a>
<a id="trace-13852"></a>
<a id="trace-13854"></a>
<a id="trace-13862"></a>
<a id="trace-13864"></a>
<a id="trace-13878"></a>
<a id="trace-13880"></a>
<a id="trace-13889"></a>
<a id="trace-13891"></a>
<a id="trace-13906"></a>
<a id="trace-13908"></a>
<a id="trace-13917"></a>
<a id="trace-13919"></a>
<a id="trace-13991"></a>
<a id="trace-13993"></a>
<a id="trace-14000"></a>
<a id="trace-14002"></a>
<a id="trace-14047"></a>
<a id="trace-14049"></a>
<a id="trace-14061"></a>
<a id="trace-14063"></a>
<a id="trace-14093"></a>
<a id="trace-14095"></a>
<a id="trace-14118"></a>
<a id="trace-14120"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14180"></a>
<a id="trace-14182"></a>
<a id="trace-14190"></a>
<a id="trace-14192"></a>
<a id="trace-14268"></a>
<a id="trace-14270"></a>
<a id="trace-15520"></a>
<a id="trace-15522"></a>
<a id="trace-15582"></a>
<a id="trace-15584"></a>
<a id="trace-15595"></a>
<a id="trace-15597"></a>
<a id="trace-15732"></a>
<a id="trace-15734"></a>
<a id="trace-15754"></a>
<a id="trace-15756"></a>
<a id="trace-15785"></a>
<a id="trace-15787"></a>
<a id="trace-15813"></a>
<a id="trace-15815"></a>
<a id="trace-15843"></a>
<a id="trace-15845"></a>
<a id="trace-15861"></a>
<a id="trace-15863"></a>
<a id="trace-15947"></a>
<a id="trace-15949"></a>
<a id="trace-15962"></a>
<a id="trace-15964"></a>
<a id="trace-15979"></a>
<a id="trace-15981"></a>
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16021"></a>
<a id="trace-16023"></a>
<a id="trace-16035"></a>
<a id="trace-16037"></a>
<a id="trace-16062"></a>
<a id="trace-16064"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16107"></a>
<a id="trace-16109"></a>
<a id="trace-16127"></a>
<a id="trace-16129"></a>
<a id="trace-16208"></a>
<a id="trace-16210"></a>
<a id="trace-16455"></a>
<a id="trace-16457"></a>
<a id="trace-16486"></a>
<a id="trace-16488"></a>
<a id="trace-16510"></a>
<a id="trace-16512"></a>
<a id="trace-16647"></a>
<a id="trace-16649"></a>
<a id="trace-16673"></a>
<a id="trace-16675"></a>
<a id="trace-16718"></a>
<a id="trace-16720"></a>
<a id="trace-16732"></a>
<a id="trace-16734"></a>
<a id="trace-16753"></a>
<a id="trace-16755"></a>
<a id="trace-16777"></a>
<a id="trace-16779"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17662"></a>
<a id="trace-17664"></a>
<a id="trace-17676"></a>
<a id="trace-17678"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17717"></a>
<a id="trace-17719"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17759"></a>
<a id="trace-17761"></a>
<a id="trace-17778"></a>
<a id="trace-17780"></a>
<a id="trace-17858"></a>
<a id="trace-17860"></a>
<a id="trace-17937"></a>
<a id="trace-17939"></a>
<a id="trace-18064"></a>
<a id="trace-18066"></a>
<a id="trace-18092"></a>
<a id="trace-18094"></a>
<a id="trace-18106"></a>
<a id="trace-18108"></a>
<a id="trace-18241"></a>
<a id="trace-18243"></a>
<a id="trace-18255"></a>
<a id="trace-18257"></a>
<a id="trace-18290"></a>
<a id="trace-18292"></a>
<a id="trace-18319"></a>
<a id="trace-18321"></a>
<a id="trace-18504"></a>
<a id="trace-18506"></a>
<a id="trace-18529"></a>
<a id="trace-18531"></a>
<a id="trace-18617"></a>
<a id="trace-18619"></a>
<a id="trace-18641"></a>
<a id="trace-18643"></a>
<a id="trace-18659"></a>
<a id="trace-18661"></a>
<a id="trace-18677"></a>
<a id="trace-18679"></a>
<a id="trace-18699"></a>
<a id="trace-18701"></a>
<a id="trace-18719"></a>
<a id="trace-18721"></a>
<a id="trace-18737"></a>
<a id="trace-18739"></a>
<a id="trace-18757"></a>
<a id="trace-18759"></a>
<a id="trace-18784"></a>
<a id="trace-18786"></a>
<a id="trace-18802"></a>
<a id="trace-18804"></a>
<a id="trace-18891"></a>
<a id="trace-18893"></a>
<a id="trace-18903"></a>
<a id="trace-18905"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19264"></a>
<a id="trace-19266"></a>
<a id="trace-19295"></a>
<a id="trace-19297"></a>
<a id="trace-19330"></a>
<a id="trace-19332"></a>
<a id="trace-19348"></a>
<a id="trace-19350"></a>
<a id="trace-19379"></a>
<a id="trace-19381"></a>
<a id="trace-20004"></a>
<a id="trace-20006"></a>
<a id="trace-20288"></a>
<a id="trace-20290"></a>
<a id="trace-20313"></a>
<a id="trace-20315"></a>
<a id="trace-20515"></a>
<a id="trace-20517"></a>
<a id="trace-20546"></a>
<a id="trace-20548"></a>
<a id="trace-20579"></a>
<a id="trace-20581"></a>
<a id="trace-20601"></a>
<a id="trace-20603"></a>
<a id="trace-20631"></a>
<a id="trace-20633"></a>
<a id="trace-20653"></a>
<a id="trace-20655"></a>
<a id="trace-20677"></a>
<a id="trace-20679"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20800"></a>
<a id="trace-20802"></a>
<a id="trace-20822"></a>
<a id="trace-20824"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20857"></a>
<a id="trace-20859"></a>
<a id="trace-20870"></a>
<a id="trace-20872"></a>
<a id="trace-20895"></a>
<a id="trace-20897"></a>
<a id="trace-21616"></a>
<a id="trace-21618"></a>
<a id="trace-21634"></a>
<a id="trace-21636"></a>
<a id="trace-21672"></a>
<a id="trace-21674"></a>
<a id="trace-21769"></a>
<a id="trace-21771"></a>
<a id="trace-21780"></a>
<a id="trace-21782"></a>
<a id="trace-22396"></a>
<a id="trace-22398"></a>
<a id="trace-22410"></a>
<a id="trace-22412"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22668"></a>
<a id="trace-22670"></a>
<a id="trace-22687"></a>
<a id="trace-22689"></a>
<a id="trace-22712"></a>
<a id="trace-22714"></a>
<a id="trace-22734"></a>
<a id="trace-22736"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-23103"></a>
<a id="trace-23105"></a>
<a id="trace-23750"></a>
<a id="trace-23752"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-24009"></a>
<a id="trace-24011"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24335"></a>
<a id="trace-24337"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24440"></a>
<a id="trace-24442"></a>
<a id="trace-24468"></a>
<a id="trace-24470"></a>
<a id="trace-24488"></a>
<a id="trace-24490"></a>
<a id="trace-24508"></a>
<a id="trace-24510"></a>
<a id="trace-24534"></a>
<a id="trace-24536"></a>
<a id="trace-24554"></a>
<a id="trace-24556"></a>
<a id="trace-24574"></a>
<a id="trace-24576"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24651"></a>
<a id="trace-24653"></a>
<a id="trace-24733"></a>
<a id="trace-24735"></a>
<a id="trace-24852"></a>
<a id="trace-24854"></a>
<a id="trace-24879"></a>
<a id="trace-24881"></a>
<a id="trace-24901"></a>
<a id="trace-24903"></a>
<a id="trace-24920"></a>
<a id="trace-24922"></a>
<a id="trace-26907"></a>
<a id="trace-26909"></a>
<a id="trace-26939"></a>
<a id="trace-26941"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27296"></a>
<a id="trace-27298"></a>
<a id="trace-27324"></a>
<a id="trace-27326"></a>
<a id="trace-27345"></a>
<a id="trace-27347"></a>
<a id="trace-27364"></a>
<a id="trace-27366"></a>
<a id="trace-27388"></a>
<a id="trace-27390"></a>
<a id="trace-27405"></a>
<a id="trace-27407"></a>
<a id="trace-27428"></a>
<a id="trace-27430"></a>
<a id="trace-27443"></a>
<a id="trace-27445"></a>
<a id="trace-27464"></a>
<a id="trace-27466"></a>
<a id="trace-27620"></a>
<a id="trace-27622"></a>
<a id="trace-27695"></a>
<a id="trace-27697"></a>
<a id="trace-27715"></a>
<a id="trace-27717"></a>
<a id="trace-27736"></a>
<a id="trace-27738"></a>
<a id="trace-27762"></a>
<a id="trace-27764"></a>
<a id="trace-27781"></a>
<a id="trace-27783"></a>
<a id="trace-27798"></a>
<a id="trace-27800"></a>
<a id="trace-27965"></a>
<a id="trace-27967"></a>
<a id="trace-27983"></a>
<a id="trace-27985"></a>
<a id="trace-28013"></a>
<a id="trace-28015"></a>
<a id="trace-28026"></a>
<a id="trace-28028"></a>
<a id="trace-28118"></a>
<a id="trace-28120"></a>
<a id="trace-28137"></a>
<a id="trace-28139"></a>
<a id="trace-28155"></a>
<a id="trace-28157"></a>
<a id="trace-28175"></a>
<a id="trace-28177"></a>
<a id="trace-28195"></a>
<a id="trace-28197"></a>
<a id="trace-28210"></a>
<a id="trace-28212"></a>
<a id="trace-28233"></a>
<a id="trace-28235"></a>
<a id="trace-28248"></a>
<a id="trace-28250"></a>
<a id="trace-28266"></a>
<a id="trace-28268"></a>
<a id="trace-28277"></a>
<a id="trace-28279"></a>
<a id="trace-28355"></a>
<a id="trace-28357"></a>
<a id="trace-28369"></a>
<a id="trace-28371"></a>
<a id="trace-28386"></a>
<a id="trace-28388"></a>
<a id="trace-28402"></a>
<a id="trace-28404"></a>
<a id="trace-28420"></a>
<a id="trace-28422"></a>
<a id="trace-28432"></a>
<a id="trace-28434"></a>
<a id="trace-28451"></a>
<a id="trace-28453"></a>
<a id="trace-28466"></a>
<a id="trace-28468"></a>
<a id="trace-28487"></a>
<a id="trace-28489"></a>
<a id="trace-28505"></a>
<a id="trace-28507"></a>
<a id="trace-28583"></a>
<a id="trace-28585"></a>
<a id="trace-28595"></a>
<a id="trace-28597"></a>
<a id="trace-28611"></a>
<a id="trace-28613"></a>
<a id="trace-28626"></a>
<a id="trace-28628"></a>
<a id="trace-28644"></a>
<a id="trace-28646"></a>
<a id="trace-28656"></a>
<a id="trace-28658"></a>
<a id="trace-28674"></a>
<a id="trace-28676"></a>
<a id="trace-28689"></a>
<a id="trace-28691"></a>
<a id="trace-28708"></a>
<a id="trace-28710"></a>
<a id="trace-28719"></a>
<a id="trace-28721"></a>
<a id="trace-28792"></a>
<a id="trace-28794"></a>
<a id="trace-28804"></a>
<a id="trace-28806"></a>
<a id="trace-28824"></a>
<a id="trace-28826"></a>
<a id="trace-28841"></a>
<a id="trace-28843"></a>
<a id="trace-28860"></a>
<a id="trace-28862"></a>
<a id="trace-28891"></a>
<a id="trace-28893"></a>
<a id="trace-28920"></a>
<a id="trace-28922"></a>
<a id="trace-28937"></a>
<a id="trace-28939"></a>
<a id="trace-28958"></a>
<a id="trace-28960"></a>
<a id="trace-28969"></a>
<a id="trace-28971"></a>
<a id="trace-29044"></a>
<a id="trace-29046"></a>
<a id="trace-29059"></a>
<a id="trace-29061"></a>
<a id="trace-29085"></a>
<a id="trace-29087"></a>
<a id="trace-29103"></a>
<a id="trace-29105"></a>
<a id="trace-29125"></a>
<a id="trace-29127"></a>
<a id="trace-29140"></a>
<a id="trace-29142"></a>
<a id="trace-29162"></a>
<a id="trace-29164"></a>
<a id="trace-29176"></a>
<a id="trace-29178"></a>
<a id="trace-29196"></a>
<a id="trace-29198"></a>
<a id="trace-29210"></a>
<a id="trace-29212"></a>
<a id="trace-29290"></a>
<a id="trace-29292"></a>
<a id="trace-29302"></a>
<a id="trace-29304"></a>
<a id="trace-29327"></a>
<a id="trace-29329"></a>
<a id="trace-29344"></a>
<a id="trace-29346"></a>
<a id="trace-29360"></a>
<a id="trace-29362"></a>
<a id="trace-29371"></a>
<a id="trace-29373"></a>
<a id="trace-29391"></a>
<a id="trace-29393"></a>
<a id="trace-29403"></a>
<a id="trace-29405"></a>
<a id="trace-29422"></a>
<a id="trace-29424"></a>
<a id="trace-29439"></a>
<a id="trace-29441"></a>
<a id="trace-29510"></a>
<a id="trace-29512"></a>
<a id="trace-29521"></a>
<a id="trace-29523"></a>
<a id="trace-29538"></a>
<a id="trace-29540"></a>
<a id="trace-29550"></a>
<a id="trace-29552"></a>
<a id="trace-29567"></a>
<a id="trace-29569"></a>
<a id="trace-29580"></a>
<a id="trace-29582"></a>
<a id="trace-29596"></a>
<a id="trace-29598"></a>
<a id="trace-29616"></a>
<a id="trace-29618"></a>
<a id="trace-29637"></a>
<a id="trace-29639"></a>
<a id="trace-29651"></a>
<a id="trace-29653"></a>
<a id="trace-29728"></a>
<a id="trace-29730"></a>
<a id="trace-29745"></a>
<a id="trace-29747"></a>
<a id="trace-29766"></a>
<a id="trace-29768"></a>
<a id="trace-29780"></a>
<a id="trace-29782"></a>
<a id="trace-29796"></a>
<a id="trace-29798"></a>
<a id="trace-29807"></a>
<a id="trace-29809"></a>
<a id="trace-29822"></a>
<a id="trace-29824"></a>
<a id="trace-29835"></a>
<a id="trace-29837"></a>
<a id="trace-29852"></a>
<a id="trace-29854"></a>
<a id="trace-29864"></a>
<a id="trace-29866"></a>
<a id="trace-29944"></a>
<a id="trace-29946"></a>
<a id="trace-29953"></a>
<a id="trace-29955"></a>
<a id="trace-29970"></a>
<a id="trace-29972"></a>
<a id="trace-29985"></a>
<a id="trace-29987"></a>
<a id="trace-30005"></a>
<a id="trace-30007"></a>
<a id="trace-30023"></a>
<a id="trace-30025"></a>
<a id="trace-30039"></a>
<a id="trace-30041"></a>
<a id="trace-30050"></a>
<a id="trace-30052"></a>
<a id="trace-30068"></a>
<a id="trace-30070"></a>
<a id="trace-30078"></a>
<a id="trace-30080"></a>
<a id="trace-30147"></a>
<a id="trace-30149"></a>
<a id="trace-30156"></a>
<a id="trace-30158"></a>
<a id="trace-30181"></a>
<a id="trace-30183"></a>
<a id="trace-30195"></a>
<a id="trace-30197"></a>
<a id="trace-30214"></a>
<a id="trace-30216"></a>
<a id="trace-30229"></a>
<a id="trace-30231"></a>
<a id="trace-30245"></a>
<a id="trace-30247"></a>
<a id="trace-30264"></a>
<a id="trace-30266"></a>
<a id="trace-30287"></a>
<a id="trace-30289"></a>
<a id="trace-30295"></a>
<a id="trace-30297"></a>
<a id="trace-30364"></a>
<a id="trace-30366"></a>
<a id="trace-30373"></a>
<a id="trace-30375"></a>
<a id="trace-30385"></a>
<a id="trace-30387"></a>
<a id="trace-30397"></a>
<a id="trace-30399"></a>
<a id="trace-30414"></a>
<a id="trace-30416"></a>
<a id="trace-30428"></a>
<a id="trace-30430"></a>
<a id="trace-30442"></a>
<a id="trace-30444"></a>
<a id="trace-30461"></a>
<a id="trace-30463"></a>
<a id="trace-30478"></a>
<a id="trace-30480"></a>
<a id="trace-30488"></a>
<a id="trace-30490"></a>
<a id="trace-30563"></a>
<a id="trace-30565"></a>
<a id="trace-30571"></a>
<a id="trace-30573"></a>
<a id="trace-30590"></a>
<a id="trace-30592"></a>
<a id="trace-30603"></a>
<a id="trace-30605"></a>
<a id="trace-30620"></a>
<a id="trace-30622"></a>
<a id="trace-30634"></a>
<a id="trace-30636"></a>
<a id="trace-30648"></a>
<a id="trace-30650"></a>
<a id="trace-30663"></a>
<a id="trace-30665"></a>
<a id="trace-30676"></a>
<a id="trace-30678"></a>
<a id="trace-30686"></a>
<a id="trace-30688"></a>
<a id="trace-30763"></a>
<a id="trace-30765"></a>
<a id="trace-30771"></a>
<a id="trace-30773"></a>
<a id="trace-30790"></a>
<a id="trace-30792"></a>
<a id="trace-30800"></a>
<a id="trace-30802"></a>
<a id="trace-30821"></a>
<a id="trace-30823"></a>
<a id="trace-30838"></a>
<a id="trace-30840"></a>
<a id="trace-30853"></a>
<a id="trace-30855"></a>
<a id="trace-30870"></a>
<a id="trace-30872"></a>
<a id="trace-30884"></a>
<a id="trace-30886"></a>
<a id="trace-30893"></a>
<a id="trace-30895"></a>
<a id="trace-30962"></a>
<a id="trace-30964"></a>
<a id="trace-30973"></a>
<a id="trace-30975"></a>
<a id="trace-30986"></a>
<a id="trace-30988"></a>
<a id="trace-31005"></a>
<a id="trace-31007"></a>
<a id="trace-31020"></a>
<a id="trace-31022"></a>
<a id="trace-31033"></a>
<a id="trace-31035"></a>
<a id="trace-31050"></a>
<a id="trace-31052"></a>
<a id="trace-31073"></a>
<a id="trace-31075"></a>
<a id="trace-31091"></a>
<a id="trace-31093"></a>
<a id="trace-31101"></a>
<a id="trace-31103"></a>
<a id="trace-31172"></a>
<a id="trace-31174"></a>
<a id="trace-31181"></a>
<a id="trace-31183"></a>
<a id="trace-31195"></a>
<a id="trace-31197"></a>
<a id="trace-31208"></a>
<a id="trace-31210"></a>
<a id="trace-31221"></a>
<a id="trace-31223"></a>
<a id="trace-31232"></a>
<a id="trace-31234"></a>
<a id="trace-31252"></a>
<a id="trace-31254"></a>
<a id="trace-31268"></a>
<a id="trace-31270"></a>
<a id="trace-31284"></a>
<a id="trace-31286"></a>
<a id="trace-31296"></a>
<a id="trace-31298"></a>
<a id="trace-31370"></a>
<a id="trace-31372"></a>
<a id="trace-31389"></a>
<a id="trace-31391"></a>
<a id="trace-31406"></a>
<a id="trace-31408"></a>
<a id="trace-31420"></a>
<a id="trace-31422"></a>
<a id="trace-31434"></a>
<a id="trace-31436"></a>
<a id="trace-31445"></a>
<a id="trace-31447"></a>
<a id="trace-31461"></a>
<a id="trace-31463"></a>
<a id="trace-31473"></a>
<a id="trace-31475"></a>
<a id="trace-31489"></a>
<a id="trace-31491"></a>
<a id="trace-31497"></a>
<a id="trace-31499"></a>
<a id="trace-31572"></a>
<a id="trace-31574"></a>
<a id="trace-31584"></a>
<a id="trace-31586"></a>
<a id="trace-31599"></a>
<a id="trace-31601"></a>
<a id="trace-31618"></a>
<a id="trace-31620"></a>
<a id="trace-31637"></a>
<a id="trace-31639"></a>
<a id="trace-31646"></a>
<a id="trace-31648"></a>
<a id="trace-31662"></a>
<a id="trace-31664"></a>
<a id="trace-31674"></a>
<a id="trace-31676"></a>
<a id="trace-31691"></a>
<a id="trace-31693"></a>
<a id="trace-31702"></a>
<a id="trace-31704"></a>
<a id="trace-31773"></a>
<a id="trace-31775"></a>
<a id="trace-31780"></a>
<a id="trace-31782"></a>
<a id="trace-31794"></a>
<a id="trace-31796"></a>
<a id="trace-31814"></a>
<a id="trace-31816"></a>
<a id="trace-31831"></a>
<a id="trace-31833"></a>
<a id="trace-31842"></a>
<a id="trace-31844"></a>
<a id="trace-31865"></a>
<a id="trace-31867"></a>
<a id="trace-31877"></a>
<a id="trace-31879"></a>
<a id="trace-31898"></a>
<a id="trace-31900"></a>
<a id="trace-31910"></a>
<a id="trace-31912"></a>
<a id="trace-31981"></a>
<a id="trace-31983"></a>
<a id="trace-31988"></a>
<a id="trace-31990"></a>
<a id="trace-32004"></a>
<a id="trace-32006"></a>
<a id="trace-32019"></a>
<a id="trace-32021"></a>
<a id="trace-32031"></a>
<a id="trace-32033"></a>
<a id="trace-32042"></a>
<a id="trace-32044"></a>
<a id="trace-32063"></a>
<a id="trace-32065"></a>
<a id="trace-32077"></a>
<a id="trace-32079"></a>
<a id="trace-32096"></a>
<a id="trace-32098"></a>
<a id="trace-32105"></a>
<a id="trace-32107"></a>
<a id="trace-32181"></a>
<a id="trace-32183"></a>
<a id="trace-32197"></a>
<a id="trace-32199"></a>
<a id="trace-32210"></a>
<a id="trace-32212"></a>
<a id="trace-32223"></a>
<a id="trace-32225"></a>
<a id="trace-32235"></a>
<a id="trace-32237"></a>
<a id="trace-32245"></a>
<a id="trace-32247"></a>
<a id="trace-32262"></a>
<a id="trace-32264"></a>
<a id="trace-32275"></a>
<a id="trace-32277"></a>
<a id="trace-32288"></a>
<a id="trace-32290"></a>
<a id="trace-32300"></a>
<a id="trace-32302"></a>
<a id="trace-32369"></a>
<a id="trace-32371"></a>
<a id="trace-32380"></a>
<a id="trace-32382"></a>
<a id="trace-32396"></a>
<a id="trace-32398"></a>
<a id="trace-32415"></a>
<a id="trace-32417"></a>
<a id="trace-32435"></a>
<a id="trace-32437"></a>
<a id="trace-32444"></a>
<a id="trace-32446"></a>
<a id="trace-32461"></a>
<a id="trace-32463"></a>
<a id="trace-32473"></a>
<a id="trace-32475"></a>
<a id="trace-32485"></a>
<a id="trace-32487"></a>
<a id="trace-32493"></a>
<a id="trace-32495"></a>
<a id="trace-32561"></a>
<a id="trace-32563"></a>
<a id="trace-32570"></a>
<a id="trace-32572"></a>
<a id="trace-32588"></a>
<a id="trace-32590"></a>
<a id="trace-32603"></a>
<a id="trace-32605"></a>
<a id="trace-32629"></a>
<a id="trace-32631"></a>
<a id="trace-32650"></a>
<a id="trace-32652"></a>
<a id="trace-32670"></a>
<a id="trace-32672"></a>
<a id="trace-32688"></a>
<a id="trace-32690"></a>
<a id="trace-32696"></a>
<a id="trace-32698"></a>
<a id="trace-32763"></a>
<a id="trace-32765"></a>
<a id="trace-32771"></a>
<a id="trace-32773"></a>
<a id="trace-32786"></a>
<a id="trace-32788"></a>
<a id="trace-32800"></a>
<a id="trace-32802"></a>
<a id="trace-32818"></a>
<a id="trace-32820"></a>
<a id="trace-32830"></a>
<a id="trace-32832"></a>
<a id="trace-32852"></a>
<a id="trace-32854"></a>
<a id="trace-32868"></a>
<a id="trace-32870"></a>
<a id="trace-32884"></a>
<a id="trace-32886"></a>
<a id="trace-32898"></a>
<a id="trace-32900"></a>
<a id="trace-32970"></a>
<a id="trace-32972"></a>
<a id="trace-32979"></a>
<a id="trace-32981"></a>
<a id="trace-32991"></a>
<a id="trace-32993"></a>
<a id="trace-33004"></a>
<a id="trace-33006"></a>
<a id="trace-33018"></a>
<a id="trace-33020"></a>
<a id="trace-33028"></a>
<a id="trace-33030"></a>
<a id="trace-33043"></a>
<a id="trace-33045"></a>
<a id="trace-33055"></a>
<a id="trace-33057"></a>
<a id="trace-33071"></a>
<a id="trace-33073"></a>
<a id="trace-33084"></a>
<a id="trace-33086"></a>
<a id="trace-33151"></a>
<a id="trace-33153"></a>
<a id="trace-33159"></a>
<a id="trace-33161"></a>
<a id="trace-33179"></a>
<a id="trace-33181"></a>
<a id="trace-33190"></a>
<a id="trace-33192"></a>
<a id="trace-33206"></a>
<a id="trace-33208"></a>
<a id="trace-33212"></a>
<a id="trace-33214"></a>
<a id="trace-33223"></a>
<a id="trace-33225"></a>
<a id="trace-33233"></a>
<a id="trace-33235"></a>
<a id="trace-33245"></a>
<a id="trace-33247"></a>
<a id="trace-33253"></a>
<a id="trace-33255"></a>
<a id="trace-33318"></a>
<a id="trace-33320"></a>
<a id="trace-33327"></a>
<a id="trace-33329"></a>
<a id="trace-33346"></a>
<a id="trace-33348"></a>
<a id="trace-33358"></a>
<a id="trace-33360"></a>
<a id="trace-33374"></a>
<a id="trace-33376"></a>
<a id="trace-33382"></a>
<a id="trace-33384"></a>
<a id="trace-33401"></a>
<a id="trace-33403"></a>
<a id="trace-33417"></a>
<a id="trace-33419"></a>
<a id="trace-33428"></a>
<a id="trace-33430"></a>
<a id="trace-33432"></a>
<a id="trace-33434"></a>
<a id="trace-33493"></a>
<a id="trace-33495"></a>
<a id="trace-33497"></a>
<a id="trace-33499"></a>
<a id="trace-33508"></a>
<a id="trace-33510"></a>
<a id="trace-33518"></a>
<a id="trace-33520"></a>
<a id="trace-33529"></a>
<a id="trace-33531"></a>
<a id="trace-33541"></a>
<a id="trace-33543"></a>
<a id="trace-33555"></a>
<a id="trace-33557"></a>
<a id="trace-33567"></a>
<a id="trace-33569"></a>
<a id="trace-33577"></a>
<a id="trace-33579"></a>
<a id="trace-33588"></a>
<a id="trace-33590"></a>
<a id="trace-33656"></a>
<a id="trace-33658"></a>
<a id="trace-33660"></a>
<a id="trace-33662"></a>
<a id="trace-33668"></a>
<a id="trace-33670"></a>
<a id="trace-33677"></a>
<a id="trace-33679"></a>
<a id="trace-33685"></a>
<a id="trace-33687"></a>
<a id="trace-33691"></a>
<a id="trace-33693"></a>
<a id="trace-33702"></a>
<a id="trace-33704"></a>
<a id="trace-33712"></a>
<a id="trace-33714"></a>
<a id="trace-33725"></a>
<a id="trace-33727"></a>
<a id="trace-33735"></a>
<a id="trace-33737"></a>
<a id="trace-33805"></a>
<a id="trace-33807"></a>
<a id="trace-33812"></a>
<a id="trace-33814"></a>
<a id="trace-33829"></a>
<a id="trace-33831"></a>
<a id="trace-33842"></a>
<a id="trace-33844"></a>
<a id="trace-33850"></a>
<a id="trace-33852"></a>
<a id="trace-33855"></a>
<a id="trace-33857"></a>
<a id="trace-33866"></a>
<a id="trace-33868"></a>
<a id="trace-33874"></a>
<a id="trace-33876"></a>
<a id="trace-33884"></a>
<a id="trace-33886"></a>
<a id="trace-33889"></a>
<a id="trace-33891"></a>
<a id="trace-33953"></a>
<a id="trace-33955"></a>
<a id="trace-33958"></a>
<a id="trace-33960"></a>
<a id="trace-33975"></a>
<a id="trace-33977"></a>
<a id="trace-33991"></a>
<a id="trace-33993"></a>
<a id="trace-34001"></a>
<a id="trace-34003"></a>
<a id="trace-34015"></a>
<a id="trace-34017"></a>
<a id="trace-34035"></a>
<a id="trace-34037"></a>
<a id="trace-34045"></a>
<a id="trace-34047"></a>
<a id="trace-34053"></a>
<a id="trace-34055"></a>
<a id="trace-34057"></a>
<a id="trace-34059"></a>
<a id="trace-34119"></a>
<a id="trace-34121"></a>
<a id="trace-34123"></a>
<a id="trace-34125"></a>
<a id="trace-34134"></a>
<a id="trace-34136"></a>
<a id="trace-34143"></a>
<a id="trace-34145"></a>
<a id="trace-34153"></a>
<a id="trace-34155"></a>
<a id="trace-34167"></a>
<a id="trace-34169"></a>
<a id="trace-34185"></a>
<a id="trace-34187"></a>
<a id="trace-34197"></a>
<a id="trace-34199"></a>
<a id="trace-34213"></a>
<a id="trace-34215"></a>
<a id="trace-34218"></a>
<a id="trace-34220"></a>
<a id="trace-34286"></a>
<a id="trace-34288"></a>
<a id="trace-34290"></a>
<a id="trace-34292"></a>
<a id="trace-34299"></a>
<a id="trace-34301"></a>
<a id="trace-34306"></a>
<a id="trace-34308"></a>
<a id="trace-34315"></a>
<a id="trace-34317"></a>
<a id="trace-34322"></a>
<a id="trace-34324"></a>
<a id="trace-34334"></a>
<a id="trace-34336"></a>
<a id="trace-34344"></a>
<a id="trace-34346"></a>
<a id="trace-34361"></a>
<a id="trace-34363"></a>
<a id="trace-34369"></a>
<a id="trace-34371"></a>
<a id="trace-34439"></a>
<a id="trace-34441"></a>
<a id="trace-34443"></a>
<a id="trace-34445"></a>
<a id="trace-34460"></a>
<a id="trace-34462"></a>
<a id="trace-34473"></a>
<a id="trace-34475"></a>
<a id="trace-34482"></a>
<a id="trace-34484"></a>
<a id="trace-34487"></a>
<a id="trace-34489"></a>
<a id="trace-34498"></a>
<a id="trace-34500"></a>
<a id="trace-34506"></a>
<a id="trace-34508"></a>
<a id="trace-34516"></a>
<a id="trace-34518"></a>
<a id="trace-34522"></a>
<a id="trace-34524"></a>
<a id="trace-34585"></a>
<a id="trace-34587"></a>
<a id="trace-34595"></a>
<a id="trace-34597"></a>
<a id="trace-34610"></a>
<a id="trace-34612"></a>
<a id="trace-34620"></a>
<a id="trace-34622"></a>
<a id="trace-34631"></a>
<a id="trace-34633"></a>
<a id="trace-34646"></a>
<a id="trace-34648"></a>
<a id="trace-34663"></a>
<a id="trace-34665"></a>
<a id="trace-34671"></a>
<a id="trace-34673"></a>
<a id="trace-34680"></a>
<a id="trace-34682"></a>
<a id="trace-34684"></a>
<a id="trace-34686"></a>
<a id="trace-34747"></a>
<a id="trace-34749"></a>
<a id="trace-34752"></a>
<a id="trace-34754"></a>
<a id="trace-34763"></a>
<a id="trace-34765"></a>
<a id="trace-34771"></a>
<a id="trace-34773"></a>
<a id="trace-34786"></a>
<a id="trace-34788"></a>
<a id="trace-34795"></a>
<a id="trace-34797"></a>
<a id="trace-34810"></a>
<a id="trace-34812"></a>
<a id="trace-34820"></a>
<a id="trace-34822"></a>
<a id="trace-34840"></a>
<a id="trace-34842"></a>
<a id="trace-34850"></a>
<a id="trace-34852"></a>
<a id="trace-34912"></a>
<a id="trace-34914"></a>
<a id="trace-34916"></a>
<a id="trace-34918"></a>
<a id="trace-34925"></a>
<a id="trace-34927"></a>
<a id="trace-34932"></a>
<a id="trace-34934"></a>
<a id="trace-34942"></a>
<a id="trace-34944"></a>
<a id="trace-34948"></a>
<a id="trace-34950"></a>
<a id="trace-34963"></a>
<a id="trace-34965"></a>
<a id="trace-34972"></a>
<a id="trace-34974"></a>
<a id="trace-34989"></a>
<a id="trace-34991"></a>
<a id="trace-34998"></a>
<a id="trace-35000"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46582008112411666, 'next_transition': 695}.
<a id="trace-1067"></a>
<a id="trace-1100"></a>
<a id="trace-1136"></a>
<a id="trace-1138"></a>
<a id="trace-1160"></a>
<a id="trace-1162"></a>
<a id="trace-1180"></a>
<a id="trace-1182"></a>
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1292"></a>
<a id="trace-1294"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 1067): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 854. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.52103570828951, 'next_transition': 1100}.
<a id="trace-154"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 154): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.268296226047468, 'next_transition': 1903}.
<a id="trace-1403"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1403): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1403. Next observer evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.268296226047468, 'next_transition': 1903}.
<a id="trace-1404"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1404): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1404. Next observer evidence: {'until': 14.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.268296226047468, 'next_transition': 1903}.
<a id="trace-1405"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1405): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1193. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724901835785373, 'next_transition': 1800}.
<a id="trace-1406"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1406): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1193. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724901835785373, 'next_transition': 1800}.
<a id="trace-1800"></a>
<a id="trace-1802"></a>
<a id="trace-1866"></a>
<a id="trace-1868"></a>
<a id="trace-1893"></a>
<a id="trace-1895"></a>
<a id="trace-2324"></a>
<a id="trace-2326"></a>
<a id="trace-2707"></a>
<a id="trace-2709"></a>
<a id="trace-2741"></a>
<a id="trace-2743"></a>
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-2813"></a>
<a id="trace-2815"></a>
<a id="trace-2834"></a>
<a id="trace-2836"></a>
<a id="trace-2905"></a>
<a id="trace-2907"></a>
<a id="trace-3320"></a>
<a id="trace-3322"></a>
<a id="trace-3340"></a>
<a id="trace-3342"></a>
<a id="trace-3439"></a>
<a id="trace-3441"></a>
- 13.20s–20.25s (×26), actor 5, squad 0 (trace 1800): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1404. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.181248790475354, 'next_transition': 1866}.
<a id="trace-1903"></a>
- 14.80s–14.80s (×1), actor 8, squad 1 (trace 1903): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1201. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12971598005353857, 'next_transition': 2360}.
<a id="trace-1904"></a>
- 14.80s–14.80s (×1), actor 8, squad 1 (trace 1904): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1201. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12971598005353857, 'next_transition': 2360}.
<a id="trace-1905"></a>
<a id="trace-2360"></a>
- 14.80s–15.65s (×2), actor 8, squad 1 (trace 1905): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1201. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12971598005353857, 'next_transition': 2360}.
<a id="trace-2922"></a>
- 19.05s–19.05s (×1), actor 8, squad 1 (trace 2922): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 2259. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.987150483807179, 'next_transition': 487}.
<a id="trace-2923"></a>
- 19.05s–19.05s (×1), actor 8, squad 1 (trace 2923): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 2259. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.987150483807179, 'next_transition': 487}.
<a id="trace-3463"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 3463): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3355. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07578309018384315, 'next_transition': 4037}.
<a id="trace-3464"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 3464): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3355. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07578309018384315, 'next_transition': 4037}.
<a id="trace-3465"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 3465): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3355. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07578309018384315, 'next_transition': 4037}.
<a id="trace-4037"></a>
<a id="trace-4039"></a>
- 20.75s–20.75s (×2), actor 5, squad 0 (trace 4037): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3360. Next observer evidence: {'until': 20.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23434761968051004, 'next_transition': 4048}.
<a id="trace-4048"></a>
<a id="trace-4651"></a>
<a id="trace-5242"></a>
- 20.80s–21.65s (×3), actor 0, squad 0 (trace 4048): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3355. Next observer evidence: {'until': 21.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7603468255051955, 'next_transition': 4651}.
<a id="trace-5824"></a>
<a id="trace-5826"></a>
<a id="trace-6015"></a>
<a id="trace-6017"></a>
<a id="trace-6133"></a>
<a id="trace-6135"></a>
<a id="trace-6189"></a>
<a id="trace-6191"></a>
<a id="trace-6297"></a>
<a id="trace-6299"></a>
- 21.75s–25.25s (×10), actor 5, squad 0 (trace 5824): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3360. Next observer evidence: {'until': 23.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.8359732779583666, 'next_transition': 6015}.
<a id="trace-6309"></a>
- 25.30s–25.30s (×1), actor 0, squad 0 (trace 6309): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 6215. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29417711482964426, 'next_transition': 6879}.
<a id="trace-6310"></a>
- 25.30s–25.30s (×1), actor 0, squad 0 (trace 6310): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 6215. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29417711482964426, 'next_transition': 6879}.
<a id="trace-6879"></a>
<a id="trace-6881"></a>
- 25.75s–25.75s (×2), actor 5, squad 0 (trace 6879): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6220. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6011305286553891, 'next_transition': 486}.
<a id="trace-486"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 486): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-487"></a>
- 26.55s–26.55s (×1), actor 5, squad 1 (events line 487): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6934"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 6934): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.916842 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6934. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.036139481226214, 'next_transition': 6980}.
<a id="trace-6935"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 6935): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.916842 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6935. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.036139481226214, 'next_transition': 6980}.
<a id="trace-6936"></a>
- 26.55s–26.55s (×1), actor 5, squad 1 (trace 6936): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.916842 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6936. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.06588085517184, 'next_transition': 7451}.
<a id="trace-6937"></a>
- 26.55s–26.55s (×1), actor 5, squad 1 (trace 6937): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.916842 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 6937. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.06588085517184, 'next_transition': 7451}.
<a id="trace-6980"></a>
<a id="trace-6982"></a>
<a id="trace-7042"></a>
<a id="trace-7044"></a>
<a id="trace-7141"></a>
<a id="trace-7143"></a>
<a id="trace-7241"></a>
<a id="trace-7243"></a>
<a id="trace-7261"></a>
<a id="trace-7263"></a>
<a id="trace-7306"></a>
<a id="trace-7308"></a>
<a id="trace-7339"></a>
<a id="trace-7341"></a>
<a id="trace-7391"></a>
<a id="trace-7393"></a>
<a id="trace-7405"></a>
<a id="trace-7407"></a>
<a id="trace-7441"></a>
<a id="trace-7443"></a>
<a id="trace-7613"></a>
<a id="trace-7615"></a>
<a id="trace-7716"></a>
<a id="trace-7718"></a>
<a id="trace-7744"></a>
<a id="trace-7746"></a>
<a id="trace-7806"></a>
<a id="trace-7808"></a>
<a id="trace-7853"></a>
<a id="trace-7855"></a>
<a id="trace-7898"></a>
<a id="trace-7900"></a>
<a id="trace-7915"></a>
<a id="trace-7917"></a>
<a id="trace-7952"></a>
<a id="trace-7954"></a>
<a id="trace-8050"></a>
<a id="trace-8052"></a>
<a id="trace-8072"></a>
<a id="trace-8074"></a>
<a id="trace-8096"></a>
<a id="trace-8098"></a>
<a id="trace-8111"></a>
<a id="trace-8113"></a>
<a id="trace-8143"></a>
<a id="trace-8145"></a>
<a id="trace-8159"></a>
<a id="trace-8161"></a>
- 27.25s–42.75s (×48), actor 5, squad 0 (trace 6980): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 6937. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9363228699939241, 'next_transition': 7042}.
<a id="trace-7451"></a>
- 34.35s–34.35s (×1), actor 8, squad 1 (trace 7451): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 30.00s, trace 7166. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8829981957701296, 'next_transition': 7832}.
<a id="trace-7452"></a>
- 34.35s–34.35s (×1), actor 8, squad 1 (trace 7452): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 30.00s, trace 7166. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8829981957701296, 'next_transition': 7832}.
<a id="trace-7832"></a>
- 37.00s–37.00s (×1), actor 8, squad 1 (trace 7832): NeedSupport. Knowledge: actor memory at 35.00s, trace 7649. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.911014046523107, 'next_transition': 8748}.
<a id="trace-8172"></a>
- 42.85s–42.85s (×1), actor 1, squad 0 (trace 8172): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 7972. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29622653113113, 'next_transition': 8301}.
<a id="trace-8173"></a>
- 42.85s–42.85s (×1), actor 1, squad 0 (trace 8173): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 7972. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29622653113113, 'next_transition': 8301}.
<a id="trace-8274"></a>
- 42.85s–42.85s (×1), actor 1, squad 0 (trace 8274): NeedSupport. Knowledge: actor memory at 40.00s, trace 7972. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29622653113113, 'next_transition': 8301}.
<a id="trace-8301"></a>
<a id="trace-8303"></a>
<a id="trace-8324"></a>
<a id="trace-8326"></a>
<a id="trace-8493"></a>
<a id="trace-8514"></a>
<a id="trace-8526"></a>
<a id="trace-8546"></a>
<a id="trace-8557"></a>
<a id="trace-8559"></a>
<a id="trace-8605"></a>
<a id="trace-8607"></a>
<a id="trace-8633"></a>
<a id="trace-8635"></a>
<a id="trace-8648"></a>
<a id="trace-8650"></a>
<a id="trace-8739"></a>
<a id="trace-8741"></a>
<a id="trace-8831"></a>
<a id="trace-8833"></a>
<a id="trace-8858"></a>
<a id="trace-8860"></a>
<a id="trace-8909"></a>
<a id="trace-8911"></a>
<a id="trace-8939"></a>
<a id="trace-8941"></a>
<a id="trace-8966"></a>
<a id="trace-8968"></a>
<a id="trace-8985"></a>
<a id="trace-8987"></a>
<a id="trace-9012"></a>
<a id="trace-9014"></a>
<a id="trace-9030"></a>
<a id="trace-9032"></a>
<a id="trace-9126"></a>
<a id="trace-9128"></a>
<a id="trace-9148"></a>
<a id="trace-9150"></a>
<a id="trace-9171"></a>
<a id="trace-9173"></a>
<a id="trace-9192"></a>
<a id="trace-9194"></a>
<a id="trace-9212"></a>
<a id="trace-9214"></a>
<a id="trace-9242"></a>
<a id="trace-9244"></a>
<a id="trace-9266"></a>
<a id="trace-9268"></a>
<a id="trace-9293"></a>
<a id="trace-9295"></a>
<a id="trace-9319"></a>
<a id="trace-9321"></a>
<a id="trace-9410"></a>
<a id="trace-9412"></a>
- 43.25s–60.25s (×54), actor 5, squad 0 (trace 8301): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7976. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04499999999999993, 'next_transition': 8324}.
<a id="trace-8748"></a>
- 50.25s–50.25s (×1), actor 8, squad 1 (trace 8748): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 8670. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.488780903283347, 'next_transition': 9181}.
<a id="trace-8765"></a>
- 50.25s–50.25s (×1), actor 8, squad 1 (trace 8765): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 8670. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.488780903283347, 'next_transition': 9181}.
<a id="trace-9181"></a>
- 57.15s–57.15s (×1), actor 8, squad 1 (trace 9181): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 9047. Next observer evidence: {'until': 67.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2993819637259307, 'next_transition': 795}.
<a id="trace-9417"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 9417): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 9333. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9612}.
<a id="trace-9439"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 9439): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 9333. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9612}.
<a id="trace-9612"></a>
<a id="trace-9614"></a>
<a id="trace-9641"></a>
<a id="trace-9643"></a>
<a id="trace-9664"></a>
<a id="trace-9666"></a>
<a id="trace-9687"></a>
<a id="trace-9689"></a>
<a id="trace-9707"></a>
<a id="trace-9709"></a>
<a id="trace-9736"></a>
<a id="trace-9738"></a>
<a id="trace-9749"></a>
<a id="trace-9751"></a>
<a id="trace-9768"></a>
<a id="trace-9770"></a>
<a id="trace-9781"></a>
<a id="trace-9783"></a>
<a id="trace-9863"></a>
<a id="trace-9865"></a>
<a id="trace-9876"></a>
<a id="trace-9878"></a>
<a id="trace-9937"></a>
<a id="trace-9939"></a>
<a id="trace-9954"></a>
<a id="trace-9956"></a>
<a id="trace-10019"></a>
<a id="trace-10021"></a>
<a id="trace-10029"></a>
<a id="trace-10031"></a>
- 60.75s–69.75s (×30), actor 5, squad 0 (trace 9612): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9337. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5624811255275751, 'next_transition': 9641}.
<a id="trace-795"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (events line 795): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9967"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 9967): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.612470 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 9967. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10283}.
<a id="trace-9968"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 9968): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.612470 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 9968. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10283}.
<a id="trace-10105"></a>
- 70.20s–70.20s (×1), actor 1, squad 0 (trace 10105): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 10037. Next observer evidence: None.
<a id="trace-10119"></a>
<a id="trace-10121"></a>
<a id="trace-10130"></a>
<a id="trace-10132"></a>
<a id="trace-10159"></a>
<a id="trace-10161"></a>
<a id="trace-10211"></a>
<a id="trace-10213"></a>
<a id="trace-10270"></a>
<a id="trace-10272"></a>
<a id="trace-12810"></a>
<a id="trace-12812"></a>
<a id="trace-12839"></a>
<a id="trace-12841"></a>
<a id="trace-12852"></a>
<a id="trace-12854"></a>
<a id="trace-12946"></a>
<a id="trace-12948"></a>
<a id="trace-12963"></a>
<a id="trace-12965"></a>
<a id="trace-12992"></a>
<a id="trace-12994"></a>
<a id="trace-13006"></a>
<a id="trace-13008"></a>
<a id="trace-13023"></a>
<a id="trace-13025"></a>
<a id="trace-13032"></a>
<a id="trace-13034"></a>
<a id="trace-13061"></a>
<a id="trace-13063"></a>
<a id="trace-13169"></a>
<a id="trace-13171"></a>
<a id="trace-13194"></a>
<a id="trace-13196"></a>
<a id="trace-13228"></a>
<a id="trace-13230"></a>
<a id="trace-13242"></a>
<a id="trace-13244"></a>
<a id="trace-13259"></a>
<a id="trace-13261"></a>
<a id="trace-13274"></a>
<a id="trace-13276"></a>
<a id="trace-13291"></a>
<a id="trace-13293"></a>
<a id="trace-13300"></a>
<a id="trace-13302"></a>
<a id="trace-13379"></a>
<a id="trace-13381"></a>
<a id="trace-13421"></a>
<a id="trace-13423"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13468"></a>
<a id="trace-13470"></a>
<a id="trace-13498"></a>
<a id="trace-13500"></a>
<a id="trace-13509"></a>
<a id="trace-13511"></a>
<a id="trace-13585"></a>
<a id="trace-13587"></a>
<a id="trace-13593"></a>
<a id="trace-13595"></a>
<a id="trace-13607"></a>
<a id="trace-13609"></a>
<a id="trace-13621"></a>
<a id="trace-13623"></a>
<a id="trace-13642"></a>
<a id="trace-13644"></a>
<a id="trace-13655"></a>
<a id="trace-13657"></a>
<a id="trace-13674"></a>
<a id="trace-13676"></a>
<a id="trace-13685"></a>
<a id="trace-13687"></a>
<a id="trace-13707"></a>
<a id="trace-13709"></a>
- 70.25s–94.75s (×76), actor 5, squad 0 (trace 10119): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 10041. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6140332028766812, 'next_transition': 10130}.
<a id="trace-10283"></a>
- 73.50s–73.50s (×1), actor 8, squad 1 (trace 10283): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 10044. Next observer evidence: {'until': 103.4, 'shots': 12, 'casualties': 0, 'mean_displacement': 18.68265192717485, 'next_transition': 1080}.
<a id="trace-10284"></a>
- 73.50s–73.50s (×1), actor 8, squad 1 (trace 10284): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 70.00s, trace 10044. Next observer evidence: {'until': 103.4, 'shots': 12, 'casualties': 0, 'mean_displacement': 18.68265192717485, 'next_transition': 1080}.
<a id="trace-975"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 975): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13797"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 13797): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.65s, trace 13797. Next observer evidence: None.
<a id="trace-13800"></a>
<a id="trace-13802"></a>
<a id="trace-13814"></a>
<a id="trace-13816"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13848"></a>
<a id="trace-13850"></a>
<a id="trace-13858"></a>
<a id="trace-13860"></a>
<a id="trace-13874"></a>
<a id="trace-13876"></a>
<a id="trace-13885"></a>
<a id="trace-13887"></a>
<a id="trace-13902"></a>
<a id="trace-13904"></a>
- 95.75s–99.25s (×16), actor 5, squad 0 (trace 13800): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 13797. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13814}.
<a id="trace-14004"></a>
- 101.20s–101.20s (×1), actor 1, squad 0 (trace 14004): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 13920. Next observer evidence: None.
<a id="trace-14005"></a>
- 101.20s–101.20s (×1), actor 1, squad 0 (trace 14005): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 13920. Next observer evidence: None.
<a id="trace-14043"></a>
<a id="trace-14045"></a>
<a id="trace-14057"></a>
<a id="trace-14059"></a>
<a id="trace-14089"></a>
<a id="trace-14091"></a>
<a id="trace-14114"></a>
<a id="trace-14116"></a>
<a id="trace-14147"></a>
<a id="trace-14149"></a>
<a id="trace-14176"></a>
<a id="trace-14178"></a>
- 101.25s–104.25s (×12), actor 5, squad 0 (trace 14043): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 13924. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14057}.
<a id="trace-14272"></a>
- 105.30s–105.30s (×1), actor 1, squad 0 (trace 14272): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15530}.
<a id="trace-14274"></a>
- 105.30s–105.30s (×1), actor 1, squad 0 (trace 14274): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15530}.
<a id="trace-15478"></a>
- 105.30s–105.30s (×1), actor 1, squad 0 (trace 15478): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15530}.
<a id="trace-15479"></a>
- 105.30s–105.30s (×1), actor 1, squad 0 (trace 15479): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15530}.
<a id="trace-15500"></a>
- 105.30s–105.30s (×1), actor 1, squad 0 (trace 15500): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15530}.
<a id="trace-15501"></a>
- 105.30s–105.30s (×1), actor 1, squad 0 (trace 15501): Assaulting. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15530}.
<a id="trace-15530"></a>
- 106.20s–106.20s (×1), actor 1, squad 0 (trace 15530): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: None.
<a id="trace-15536"></a>
- 106.20s–106.20s (×1), actor 1, squad 0 (trace 15536): MoveTactically. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: None.
<a id="trace-15537"></a>
- 106.20s–106.20s (×1), actor 1, squad 0 (trace 15537): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: None.
<a id="trace-15578"></a>
<a id="trace-15580"></a>
- 106.25s–106.25s (×2), actor 5, squad 0 (trace 15578): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 14201. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15617}.
<a id="trace-15617"></a>
- 107.20s–107.20s (×1), actor 1, squad 0 (trace 15617): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 14197. Next observer evidence: None.
<a id="trace-15728"></a>
<a id="trace-15730"></a>
<a id="trace-15750"></a>
<a id="trace-15752"></a>
<a id="trace-15781"></a>
<a id="trace-15783"></a>
<a id="trace-15839"></a>
<a id="trace-15841"></a>
<a id="trace-15857"></a>
<a id="trace-15859"></a>
<a id="trace-15958"></a>
<a id="trace-15960"></a>
<a id="trace-15975"></a>
<a id="trace-15977"></a>
<a id="trace-15991"></a>
<a id="trace-15993"></a>
<a id="trace-16031"></a>
<a id="trace-16033"></a>
<a id="trace-16058"></a>
<a id="trace-16060"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16103"></a>
<a id="trace-16105"></a>
<a id="trace-16204"></a>
<a id="trace-16206"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
- 107.25s–115.75s (×28), actor 5, squad 0 (trace 15728): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 14201. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15750}.
<a id="trace-1080"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (events line 1080): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114.4, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16112}.
<a id="trace-15851"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 15851): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.854049 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 15851. Next observer evidence: {'until': 114.4, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16112}.
<a id="trace-15852"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 15852): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.854049 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 15852. Next observer evidence: {'until': 114.4, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16112}.
<a id="trace-16112"></a>
- 114.50s–114.50s (×1), actor 8, squad 1 (trace 16112): support established: element delivered fire on threat area. Knowledge: actor memory at 110.00s, trace 15879. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16216}.
<a id="trace-16113"></a>
- 114.50s–114.50s (×1), actor 8, squad 1 (trace 16113): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 110.00s, trace 15879. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16216}.
<a id="trace-16114"></a>
- 114.50s–114.50s (×1), actor 8, squad 1 (trace 16114): Fixing. Knowledge: actor memory at 110.00s, trace 15879. Next observer evidence: {'until': 115.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16216}.
<a id="trace-16216"></a>
- 115.50s–115.50s (×1), actor 8, squad 1 (trace 16216): MoveTactically. Knowledge: actor memory at 115.00s, trace 16139. Next observer evidence: {'until': 128.8, 'shots': 10, 'casualties': 1, 'mean_displacement': 4.7112814870539115, 'next_transition': 18326}.
<a id="trace-16217"></a>
- 115.50s–115.50s (×1), actor 8, squad 1 (trace 16217): received platoon directive. Knowledge: actor memory at 115.00s, trace 16139. Next observer evidence: {'until': 128.8, 'shots': 10, 'casualties': 1, 'mean_displacement': 4.7112814870539115, 'next_transition': 18326}.
<a id="trace-16458"></a>
- 115.85s–115.85s (×1), actor 1, squad 0 (trace 16458): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 16133. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000238311478503, 'next_transition': 16482}.
<a id="trace-16482"></a>
<a id="trace-16484"></a>
- 116.25s–116.25s (×2), actor 5, squad 0 (trace 16482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16136. Next observer evidence: {'until': 116.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15752143751389225, 'next_transition': 16518}.
<a id="trace-16518"></a>
- 116.85s–116.85s (×1), actor 1, squad 0 (trace 16518): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 16133. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299832057191828, 'next_transition': 16643}.
<a id="trace-16643"></a>
<a id="trace-16645"></a>
<a id="trace-16669"></a>
<a id="trace-16671"></a>
<a id="trace-16714"></a>
<a id="trace-16716"></a>
<a id="trace-16773"></a>
<a id="trace-16775"></a>
<a id="trace-16858"></a>
<a id="trace-16860"></a>
- 117.25s–120.25s (×10), actor 5, squad 0 (trace 16643): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16136. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000422135746995, 'next_transition': 16669}.
<a id="trace-17632"></a>
- 120.70s–120.70s (×1), actor 1, squad 0 (trace 17632): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 120.00s, trace 16781. Next observer evidence: None.
<a id="trace-17636"></a>
<a id="trace-17638"></a>
<a id="trace-17658"></a>
<a id="trace-17660"></a>
<a id="trace-17672"></a>
<a id="trace-17674"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17737"></a>
<a id="trace-17739"></a>
<a id="trace-17755"></a>
<a id="trace-17757"></a>
<a id="trace-17774"></a>
<a id="trace-17776"></a>
- 120.75s–124.25s (×14), actor 5, squad 0 (trace 17636): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 16784. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.840013973451999, 'next_transition': 17658}.
<a id="trace-17784"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 17784): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 16781. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500186903098434, 'next_transition': 17854}.
<a id="trace-17854"></a>
<a id="trace-17856"></a>
- 124.75s–124.75s (×2), actor 5, squad 0 (trace 17854): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 16784. Next observer evidence: {'until': 125.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.155013663025309, 'next_transition': 17944}.
<a id="trace-17944"></a>
- 125.45s–125.45s (×1), actor 1, squad 0 (trace 17944): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 17865. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2626939417260322, 'next_transition': 18060}.
<a id="trace-18060"></a>
<a id="trace-18062"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18102"></a>
<a id="trace-18104"></a>
- 125.75s–126.75s (×6), actor 5, squad 0 (trace 18060): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17868. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39309026114849727, 'next_transition': 18088}.
<a id="trace-18117"></a>
- 127.10s–127.10s (×1), actor 1, squad 0 (trace 18117): current contact unknown for 10 s. Knowledge: actor memory at 125.00s, trace 17865. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499142816771863, 'next_transition': 18237}.
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18251"></a>
<a id="trace-18253"></a>
<a id="trace-18315"></a>
<a id="trace-18317"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18525"></a>
<a id="trace-18527"></a>
<a id="trace-18615"></a>
<a id="trace-18657"></a>
<a id="trace-18675"></a>
<a id="trace-18697"></a>
<a id="trace-18735"></a>
<a id="trace-18753"></a>
<a id="trace-18755"></a>
<a id="trace-18798"></a>
<a id="trace-18800"></a>
<a id="trace-18899"></a>
<a id="trace-18901"></a>
<a id="trace-18926"></a>
<a id="trace-18928"></a>
<a id="trace-19128"></a>
<a id="trace-19130"></a>
- 127.25s–136.80s (×25), actor 5, squad 0 (trace 18237): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17868. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300202141208389, 'next_transition': 18251}.
<a id="trace-18326"></a>
- 128.90s–128.90s (×1), actor 9, squad 1 (trace 18326): current contact unknown for 10 s. Knowledge: actor memory at 125.00s, trace 17871. Next observer evidence: {'until': 136.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 6.644977684295359, 'next_transition': 18935}.
<a id="trace-18935"></a>
- 136.30s–136.30s (×1), actor 9, squad 1 (trace 18935): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 139.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.459463508393208, 'next_transition': 19394}.
<a id="trace-18936"></a>
- 136.30s–136.30s (×1), actor 9, squad 1 (trace 18936): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 139.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.459463508393208, 'next_transition': 19394}.
<a id="trace-19137"></a>
- 136.85s–136.85s (×1), actor 1, squad 0 (trace 19137): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 18811. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149743000203245, 'next_transition': 1359}.
<a id="trace-1359"></a>
- 137.10s–137.10s (×1), actor 5, squad 0 (events line 1359): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19249"></a>
- 137.10s–137.10s (×1), actor 5, squad 0 (trace 19249): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.946145 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 19249. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9128655507103197, 'next_transition': 19291}.
<a id="trace-19250"></a>
- 137.10s–137.10s (×1), actor 5, squad 0 (trace 19250): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=3.946145 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 19250. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9128655507103197, 'next_transition': 19291}.
<a id="trace-19291"></a>
<a id="trace-19293"></a>
<a id="trace-19326"></a>
<a id="trace-19328"></a>
<a id="trace-19344"></a>
<a id="trace-19346"></a>
<a id="trace-19375"></a>
<a id="trace-19377"></a>
<a id="trace-20000"></a>
<a id="trace-20002"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20309"></a>
<a id="trace-20311"></a>
<a id="trace-20511"></a>
<a id="trace-20513"></a>
<a id="trace-20542"></a>
<a id="trace-20544"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20627"></a>
<a id="trace-20629"></a>
<a id="trace-20649"></a>
<a id="trace-20651"></a>
<a id="trace-20698"></a>
<a id="trace-20700"></a>
<a id="trace-20783"></a>
<a id="trace-20785"></a>
<a id="trace-20818"></a>
<a id="trace-20820"></a>
<a id="trace-20836"></a>
<a id="trace-20838"></a>
<a id="trace-20853"></a>
<a id="trace-20855"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
- 137.80s–148.30s (×36), actor 5, squad 0 (trace 19291): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.10s, trace 19250. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34125738749861134, 'next_transition': 19326}.
<a id="trace-19394"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 19394): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.533653818931111, 'next_transition': 20084}.
<a id="trace-19396"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 19396): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.533653818931111, 'next_transition': 20084}.
<a id="trace-19792"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 19792): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.533653818931111, 'next_transition': 20084}.
<a id="trace-19793"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 19793): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.533653818931111, 'next_transition': 20084}.
<a id="trace-19986"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 19986): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.533653818931111, 'next_transition': 20084}.
<a id="trace-19987"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 19987): Assaulting. Knowledge: actor memory at 135.00s, trace 18817. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.533653818931111, 'next_transition': 20084}.
<a id="trace-20084"></a>
- 140.20s–140.20s (×1), actor 9, squad 1 (trace 20084): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 20016. Next observer evidence: {'until': 141.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4723359915556695, 'next_transition': 20324}.
<a id="trace-20088"></a>
- 140.20s–140.20s (×1), actor 9, squad 1 (trace 20088): MoveTactically. Knowledge: actor memory at 140.00s, trace 20016. Next observer evidence: {'until': 141.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4723359915556695, 'next_transition': 20324}.
<a id="trace-20089"></a>
- 140.20s–140.20s (×1), actor 9, squad 1 (trace 20089): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 140.00s, trace 20016. Next observer evidence: {'until': 141.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4723359915556695, 'next_transition': 20324}.
<a id="trace-20324"></a>
- 141.20s–141.20s (×1), actor 9, squad 1 (trace 20324): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 20016. Next observer evidence: {'until': 145, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1595708727367926, 'next_transition': 20736}.
<a id="trace-20325"></a>
- 141.20s–141.20s (×1), actor 9, squad 1 (trace 20325): new contact inside 100 m. Knowledge: actor memory at 140.00s, trace 20016. Next observer evidence: {'until': 145, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1595708727367926, 'next_transition': 20736}.
<a id="trace-20736"></a>
- 145.10s–145.10s (×1), actor 9, squad 1 (trace 20736): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 20715. Next observer evidence: {'until': 150.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.765653629996191, 'next_transition': 1545}.
<a id="trace-20904"></a>
- 148.45s–148.45s (×1), actor 1, squad 0 (trace 20904): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 20709. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21260}.
<a id="trace-20905"></a>
<a id="trace-21260"></a>
- 148.45s–148.75s (×2), actor 1, squad 0 (trace 20905): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 20709. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21260}.
<a id="trace-21612"></a>
<a id="trace-21614"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21765"></a>
<a id="trace-21767"></a>
<a id="trace-21776"></a>
<a id="trace-21778"></a>
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22708"></a>
<a id="trace-22710"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
- 148.80s–154.30s (×18), actor 5, squad 0 (trace 21612): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 20712. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0677295095373924, 'next_transition': 21668}.
<a id="trace-1545"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (events line 1545): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21785"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 21785): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=12.084519 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 21785. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21795}.
<a id="trace-21786"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 21786): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=12.084519 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 21786. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21795}.
<a id="trace-21795"></a>
- 151.15s–151.15s (×1), actor 9, squad 1 (trace 21795): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 152, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22424}.
<a id="trace-22177"></a>
- 151.15s–151.15s (×1), actor 9, squad 1 (trace 22177): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 152, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22424}.
<a id="trace-22178"></a>
- 151.15s–151.15s (×1), actor 9, squad 1 (trace 22178): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 152, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22424}.
<a id="trace-22371"></a>
- 151.15s–151.15s (×1), actor 9, squad 1 (trace 22371): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 152, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22424}.
<a id="trace-22372"></a>
- 151.15s–151.15s (×1), actor 9, squad 1 (trace 22372): Assaulting. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 152, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22424}.
<a id="trace-22424"></a>
- 152.15s–152.15s (×1), actor 9, squad 1 (trace 22424): Reorganise: completed/failed drill. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 155.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.100612518769475, 'next_transition': 22878}.
<a id="trace-22428"></a>
- 152.15s–152.15s (×1), actor 9, squad 1 (trace 22428): MoveTactically. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 155.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.100612518769475, 'next_transition': 22878}.
<a id="trace-22429"></a>
- 152.15s–152.15s (×1), actor 9, squad 1 (trace 22429): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 155.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.100612518769475, 'next_transition': 22878}.
<a id="trace-22625"></a>
- 152.15s–152.15s (×1), actor 9, squad 1 (trace 22625): NeedSupport. Knowledge: actor memory at 150.00s, trace 21695. Next observer evidence: {'until': 155.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.100612518769475, 'next_transition': 22878}.
<a id="trace-22739"></a>
- 154.40s–154.40s (×1), actor 3, squad 0 (trace 22739): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 150.00s, trace 21690. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7498837843873066, 'next_transition': 22749}.
<a id="trace-22749"></a>
<a id="trace-22751"></a>
<a id="trace-22838"></a>
<a id="trace-22840"></a>
<a id="trace-22867"></a>
<a id="trace-22869"></a>
<a id="trace-23099"></a>
<a id="trace-23101"></a>
- 154.80s–156.30s (×8), actor 5, squad 0 (trace 22749): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 21786. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7051595803854636, 'next_transition': 22838}.
<a id="trace-22878"></a>
- 155.90s–155.90s (×1), actor 9, squad 1 (trace 22878): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 22775. Next observer evidence: {'until': 159.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.553339908894927, 'next_transition': 24065}.
<a id="trace-22879"></a>
- 155.90s–155.90s (×1), actor 9, squad 1 (trace 22879): received platoon directive. Knowledge: actor memory at 155.00s, trace 22775. Next observer evidence: {'until': 159.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.553339908894927, 'next_transition': 24065}.
<a id="trace-23108"></a>
- 156.30s–156.30s (×1), actor 3, squad 0 (trace 23108): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23490"></a>
- 156.30s–156.30s (×1), actor 3, squad 0 (trace 23490): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23491"></a>
- 156.30s–156.30s (×1), actor 3, squad 0 (trace 23491): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23553"></a>
- 156.30s–156.30s (×1), actor 3, squad 0 (trace 23553): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23554"></a>
- 156.30s–156.30s (×1), actor 3, squad 0 (trace 23554): Assaulting. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23571}.
<a id="trace-23571"></a>
- 156.65s–156.65s (×1), actor 3, squad 0 (trace 23571): Reorganise: completed/failed drill. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599338270093555, 'next_transition': 23746}.
<a id="trace-23575"></a>
- 156.65s–156.65s (×1), actor 3, squad 0 (trace 23575): MoveTactically. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599338270093555, 'next_transition': 23746}.
<a id="trace-23576"></a>
- 156.65s–156.65s (×1), actor 3, squad 0 (trace 23576): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599338270093555, 'next_transition': 23746}.
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23778"></a>
- 156.80s–157.30s (×3), actor 5, squad 0 (trace 23746): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 22772. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670317287159006, 'next_transition': 23778}.
<a id="trace-23820"></a>
- 158.00s–158.00s (×1), actor 3, squad 0 (trace 23820): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20519371953403936, 'next_transition': 24007}.
<a id="trace-23821"></a>
- 158.00s–158.00s (×1), actor 3, squad 0 (trace 23821): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 22770. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20519371953403936, 'next_transition': 24007}.
<a id="trace-24007"></a>
<a id="trace-24041"></a>
<a id="trace-24333"></a>
<a id="trace-24355"></a>
<a id="trace-24438"></a>
<a id="trace-24466"></a>
<a id="trace-24486"></a>
- 158.30s–161.30s (×7), actor 5, squad 0 (trace 24007): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 22772. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5310233735449794, 'next_transition': 24041}.
<a id="trace-24065"></a>
- 159.25s–159.25s (×1), actor 9, squad 1 (trace 24065): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 155.00s, trace 22775. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 7.024224221327034, 'next_transition': 24629}.
<a id="trace-24066"></a>
- 159.25s–159.25s (×1), actor 9, squad 1 (trace 24066): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 22775. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 7.024224221327034, 'next_transition': 24629}.
<a id="trace-24496"></a>
- 161.50s–161.50s (×1), actor 3, squad 0 (trace 24496): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 160.00s, trace 24366. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900121888607084, 'next_transition': 24530}.
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24570"></a>
<a id="trace-24572"></a>
<a id="trace-24620"></a>
<a id="trace-24622"></a>
<a id="trace-24729"></a>
<a id="trace-24731"></a>
<a id="trace-24848"></a>
<a id="trace-24850"></a>
<a id="trace-24916"></a>
<a id="trace-24918"></a>
- 162.30s–167.30s (×14), actor 5, squad 0 (trace 24530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 24368. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175076667093178, 'next_transition': 24550}.
<a id="trace-24629"></a>
- 164.30s–164.30s (×1), actor 9, squad 1 (trace 24629): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 160.00s, trace 24370. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2895899936190043, 'next_transition': 24738}.
<a id="trace-24738"></a>
- 165.30s–165.30s (×1), actor 9, squad 1 (trace 24738): Reorganise: completed/failed drill. Knowledge: actor memory at 165.00s, trace 24661. Next observer evidence: {'until': 168.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0787515872855897, 'next_transition': 27092}.
<a id="trace-24741"></a>
- 165.30s–165.30s (×1), actor 9, squad 1 (trace 24741): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 24661. Next observer evidence: {'until': 168.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0787515872855897, 'next_transition': 27092}.
<a id="trace-24742"></a>
- 165.30s–165.30s (×1), actor 9, squad 1 (trace 24742): Reorganise complete: known contact. Knowledge: actor memory at 165.00s, trace 24661. Next observer evidence: {'until': 168.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0787515872855897, 'next_transition': 27092}.
<a id="trace-24930"></a>
- 167.45s–167.45s (×1), actor 3, squad 0 (trace 24930): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09029835615890248, 'next_transition': 26759}.
<a id="trace-26746"></a>
- 167.45s–167.45s (×1), actor 3, squad 0 (trace 26746): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09029835615890248, 'next_transition': 26759}.
<a id="trace-26747"></a>
- 167.45s–167.45s (×1), actor 3, squad 0 (trace 26747): MoveTactically. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09029835615890248, 'next_transition': 26759}.
<a id="trace-26748"></a>
- 167.45s–167.45s (×1), actor 3, squad 0 (trace 26748): contact cover complete: assessment resumes closure. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 167.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09029835615890248, 'next_transition': 26759}.
<a id="trace-26759"></a>
- 167.75s–167.75s (×1), actor 3, squad 0 (trace 26759): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09157978338585407, 'next_transition': 26903}.
<a id="trace-26760"></a>
- 167.75s–167.75s (×1), actor 3, squad 0 (trace 26760): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09157978338585407, 'next_transition': 26903}.
<a id="trace-26903"></a>
<a id="trace-26905"></a>
<a id="trace-26935"></a>
<a id="trace-26937"></a>
- 167.80s–168.30s (×4), actor 5, squad 0 (trace 26903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 24659. Next observer evidence: {'until': 168.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.2756508851700876, 'next_transition': 26935}.
<a id="trace-26946"></a>
- 168.40s–168.40s (×1), actor 3, squad 0 (trace 26946): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 24657. Next observer evidence: {'until': 168.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5092599969258209, 'next_transition': 27159}.
<a id="trace-27092"></a>
- 168.60s–168.60s (×1), actor 9, squad 1 (trace 27092): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 165.00s, trace 24661. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999656768203213, 'next_transition': 28032}.
<a id="trace-27093"></a>
- 168.60s–168.60s (×1), actor 9, squad 1 (trace 27093): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 24661. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999656768203213, 'next_transition': 28032}.
<a id="trace-27159"></a>
<a id="trace-27161"></a>
<a id="trace-27210"></a>
<a id="trace-27212"></a>
<a id="trace-27292"></a>
<a id="trace-27294"></a>
- 168.80s–170.30s (×6), actor 5, squad 0 (trace 27159): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 24659. Next observer evidence: {'until': 169.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.9144159474301086, 'next_transition': 27210}.
<a id="trace-27317"></a>
- 170.75s–170.75s (×1), actor 3, squad 0 (trace 27317): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 27222. Next observer evidence: {'until': 170.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08902525273763585, 'next_transition': 27320}.
<a id="trace-27318"></a>
- 170.75s–170.75s (×1), actor 3, squad 0 (trace 27318): ; retain contact cover stage. Knowledge: actor memory at 170.00s, trace 27222. Next observer evidence: {'until': 170.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08902525273763585, 'next_transition': 27320}.
<a id="trace-27320"></a>
<a id="trace-27322"></a>
<a id="trace-27360"></a>
<a id="trace-27362"></a>
<a id="trace-27384"></a>
<a id="trace-27386"></a>
- 170.80s–172.30s (×6), actor 5, squad 0 (trace 27320): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 27224. Next observer evidence: {'until': 171.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.454359018976184, 'next_transition': 27360}.
<a id="trace-27393"></a>
- 172.30s–172.30s (×1), actor 3, squad 0 (trace 27393): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 170.00s, trace 27222. Next observer evidence: {'until': 172.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3506002908311847, 'next_transition': 27401}.
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27424"></a>
<a id="trace-27426"></a>
<a id="trace-27460"></a>
<a id="trace-27462"></a>
- 172.80s–174.30s (×6), actor 5, squad 0 (trace 27401): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 27224. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4545064607501237, 'next_transition': 27424}.
<a id="trace-27471"></a>
- 174.45s–174.45s (×1), actor 3, squad 0 (trace 27471): ReactToContact: cover and return fire. Knowledge: actor memory at 170.00s, trace 27222. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500369243867604, 'next_transition': 27616}.
<a id="trace-27472"></a>
- 174.45s–174.45s (×1), actor 3, squad 0 (trace 27472): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 170.00s, trace 27222. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500369243867604, 'next_transition': 27616}.
<a id="trace-27616"></a>
<a id="trace-27618"></a>
<a id="trace-27691"></a>
<a id="trace-27693"></a>
<a id="trace-27711"></a>
<a id="trace-27713"></a>
<a id="trace-27732"></a>
<a id="trace-27734"></a>
<a id="trace-27758"></a>
<a id="trace-27760"></a>
<a id="trace-27794"></a>
<a id="trace-27796"></a>
- 174.80s–177.80s (×12), actor 5, squad 0 (trace 27616): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 27224. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500369243867604, 'next_transition': 27691}.
<a id="trace-27805"></a>
- 177.85s–177.85s (×1), actor 3, squad 0 (trace 27805): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 175.00s, trace 27626. Next observer evidence: {'until': 178.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4494183403184322, 'next_transition': 27961}.
<a id="trace-27806"></a>
- 177.85s–177.85s (×1), actor 3, squad 0 (trace 27806): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 27626. Next observer evidence: {'until': 178.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4494183403184322, 'next_transition': 27961}.
<a id="trace-27961"></a>
<a id="trace-27963"></a>
<a id="trace-28009"></a>
<a id="trace-28011"></a>
<a id="trace-28022"></a>
<a id="trace-28024"></a>
<a id="trace-28114"></a>
<a id="trace-28116"></a>
<a id="trace-28133"></a>
<a id="trace-28135"></a>
<a id="trace-28151"></a>
<a id="trace-28153"></a>
<a id="trace-28171"></a>
<a id="trace-28173"></a>
<a id="trace-28191"></a>
<a id="trace-28193"></a>
<a id="trace-28206"></a>
<a id="trace-28208"></a>
<a id="trace-28229"></a>
<a id="trace-28231"></a>
<a id="trace-28244"></a>
<a id="trace-28246"></a>
<a id="trace-28262"></a>
<a id="trace-28264"></a>
<a id="trace-28273"></a>
<a id="trace-28275"></a>
<a id="trace-28351"></a>
<a id="trace-28353"></a>
<a id="trace-28365"></a>
<a id="trace-28367"></a>
<a id="trace-28382"></a>
<a id="trace-28384"></a>
<a id="trace-28398"></a>
<a id="trace-28400"></a>
<a id="trace-28416"></a>
<a id="trace-28418"></a>
<a id="trace-28447"></a>
<a id="trace-28449"></a>
<a id="trace-28462"></a>
<a id="trace-28464"></a>
<a id="trace-28483"></a>
<a id="trace-28485"></a>
- 178.30s–189.30s (×42), actor 5, squad 0 (trace 27961): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 27628. Next observer evidence: {'until': 179.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0281827729363968, 'next_transition': 28009}.
<a id="trace-28032"></a>
- 179.90s–179.90s (×1), actor 9, squad 1 (trace 28032): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 27630. Next observer evidence: {'until': 188.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28458}.
<a id="trace-28033"></a>
- 179.90s–179.90s (×1), actor 9, squad 1 (trace 28033): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 27630. Next observer evidence: {'until': 188.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28458}.
<a id="trace-28458"></a>
- 188.65s–188.65s (×1), actor 9, squad 1 (trace 28458): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 185.00s, trace 28287. Next observer evidence: {'until': 218.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2124}.
<a id="trace-28492"></a>
- 189.45s–189.45s (×1), actor 3, squad 0 (trace 28492): NeedSupport. Knowledge: actor memory at 185.00s, trace 28283. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680552930870154, 'next_transition': 28501}.
<a id="trace-28501"></a>
<a id="trace-28503"></a>
<a id="trace-28579"></a>
<a id="trace-28581"></a>
<a id="trace-28591"></a>
<a id="trace-28593"></a>
<a id="trace-28607"></a>
<a id="trace-28609"></a>
<a id="trace-28622"></a>
<a id="trace-28624"></a>
<a id="trace-28640"></a>
<a id="trace-28642"></a>
<a id="trace-28652"></a>
<a id="trace-28654"></a>
<a id="trace-28670"></a>
<a id="trace-28672"></a>
<a id="trace-28685"></a>
<a id="trace-28687"></a>
<a id="trace-28704"></a>
<a id="trace-28706"></a>
<a id="trace-28715"></a>
<a id="trace-28717"></a>
<a id="trace-28788"></a>
<a id="trace-28790"></a>
<a id="trace-28800"></a>
<a id="trace-28802"></a>
<a id="trace-28820"></a>
<a id="trace-28822"></a>
<a id="trace-28837"></a>
<a id="trace-28839"></a>
- 189.80s–196.80s (×30), actor 5, squad 0 (trace 28501): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 28285. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22678556226091565, 'next_transition': 28579}.
<a id="trace-28878"></a>
- 197.55s–197.55s (×1), actor 4, squad 0 (trace 28878): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 195.00s, trace 28724. Next observer evidence: {'until': 197.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21049845206355702, 'next_transition': 28880}.
<a id="trace-28880"></a>
- 197.60s–197.60s (×1), actor 4, squad 0 (trace 28880): Reorganise: completed/failed drill. Knowledge: actor memory at 195.00s, trace 28724. Next observer evidence: {'until': 198.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6218707863869071, 'next_transition': 28916}.
<a id="trace-28882"></a>
- 197.60s–197.60s (×1), actor 4, squad 0 (trace 28882): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 28724. Next observer evidence: {'until': 198.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6218707863869071, 'next_transition': 28916}.
<a id="trace-28883"></a>
- 197.60s–197.60s (×1), actor 4, squad 0 (trace 28883): Reorganise complete: known contact. Knowledge: actor memory at 195.00s, trace 28724. Next observer evidence: {'until': 198.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6218707863869071, 'next_transition': 28916}.
<a id="trace-28916"></a>
<a id="trace-28918"></a>
<a id="trace-28933"></a>
<a id="trace-28935"></a>
<a id="trace-28954"></a>
<a id="trace-28956"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-29057"></a>
- 198.30s–200.80s (×9), actor 5, squad 0 (trace 28916): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 28725. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6371784215241227, 'next_transition': 28933}.
<a id="trace-29069"></a>
- 200.95s–200.95s (×1), actor 4, squad 0 (trace 29069): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 200.00s, trace 28976. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4334449651753336, 'next_transition': 29083}.
<a id="trace-29072"></a>
- 200.95s–200.95s (×1), actor 4, squad 0 (trace 29072): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 28976. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4334449651753336, 'next_transition': 29083}.
<a id="trace-29073"></a>
- 200.95s–200.95s (×1), actor 4, squad 0 (trace 29073): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 28976. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4334449651753336, 'next_transition': 29083}.
<a id="trace-29083"></a>
<a id="trace-29101"></a>
<a id="trace-29123"></a>
<a id="trace-29138"></a>
- 201.30s–202.80s (×4), actor 5, squad 0 (trace 29083): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 28977. Next observer evidence: {'until': 201.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501432307461865, 'next_transition': 29101}.
<a id="trace-29154"></a>
- 203.25s–203.25s (×1), actor 5, squad 0 (trace 29154): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 203.25s, trace 29154. Next observer evidence: None.
<a id="trace-29160"></a>
<a id="trace-29174"></a>
<a id="trace-29206"></a>
<a id="trace-29208"></a>
<a id="trace-29286"></a>
<a id="trace-29288"></a>
<a id="trace-29298"></a>
<a id="trace-29300"></a>
<a id="trace-29323"></a>
<a id="trace-29325"></a>
<a id="trace-29340"></a>
<a id="trace-29342"></a>
<a id="trace-29356"></a>
<a id="trace-29358"></a>
<a id="trace-29367"></a>
<a id="trace-29369"></a>
<a id="trace-29387"></a>
<a id="trace-29389"></a>
<a id="trace-29418"></a>
<a id="trace-29420"></a>
<a id="trace-29506"></a>
<a id="trace-29508"></a>
<a id="trace-29517"></a>
<a id="trace-29519"></a>
<a id="trace-29534"></a>
<a id="trace-29536"></a>
<a id="trace-29546"></a>
<a id="trace-29548"></a>
<a id="trace-29563"></a>
<a id="trace-29565"></a>
<a id="trace-29576"></a>
<a id="trace-29578"></a>
<a id="trace-29612"></a>
<a id="trace-29614"></a>
<a id="trace-29633"></a>
<a id="trace-29635"></a>
<a id="trace-29647"></a>
<a id="trace-29649"></a>
- 203.30s–214.80s (×38), actor 5, squad 0 (trace 29160): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 203.25s, trace 29154. Next observer evidence: {'until': 203.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5110857106828973, 'next_transition': 29174}.
<a id="trace-29718"></a>
- 215.25s–215.25s (×1), actor 5, squad 0 (trace 29718): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 215.25s, trace 29718. Next observer evidence: None.
<a id="trace-29724"></a>
<a id="trace-29726"></a>
<a id="trace-29776"></a>
<a id="trace-29778"></a>
<a id="trace-29792"></a>
<a id="trace-29794"></a>
<a id="trace-29803"></a>
<a id="trace-29805"></a>
<a id="trace-29818"></a>
<a id="trace-29820"></a>
<a id="trace-29846"></a>
<a id="trace-29848"></a>
- 215.30s–219.30s (×12), actor 5, squad 0 (trace 29724): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.25s, trace 29718. Next observer evidence: {'until': 216.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29776}.
<a id="trace-2123"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (events line 2123): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29938}.
<a id="trace-2124"></a>
- 220.00s–220.00s (×1), actor 5, squad 1 (events line 2124): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30161}.
<a id="trace-29884"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (trace 29884): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.00s, trace 29884. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29938}.
<a id="trace-29885"></a>
- 220.00s–220.00s (×1), actor 5, squad 1 (trace 29885): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.00s, trace 29885. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30161}.
<a id="trace-29938"></a>
<a id="trace-29940"></a>
<a id="trace-29964"></a>
<a id="trace-29966"></a>
<a id="trace-29999"></a>
<a id="trace-30001"></a>
<a id="trace-30033"></a>
<a id="trace-30035"></a>
<a id="trace-30062"></a>
<a id="trace-30064"></a>
<a id="trace-30143"></a>
<a id="trace-30175"></a>
<a id="trace-30177"></a>
<a id="trace-30239"></a>
<a id="trace-30241"></a>
<a id="trace-30281"></a>
<a id="trace-30283"></a>
<a id="trace-30359"></a>
<a id="trace-30380"></a>
<a id="trace-30410"></a>
- 220.30s–232.30s (×20), actor 5, squad 0 (trace 29938): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 29885. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29964}.
<a id="trace-30161"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 30161): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 225.00s, trace 30086. Next observer evidence: None.
<a id="trace-30162"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 30162): MoveTactically. Knowledge: actor memory at 225.00s, trace 30086. Next observer evidence: None.
<a id="trace-30163"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 30163): traveling overwatch. Knowledge: actor memory at 225.00s, trace 30086. Next observer evidence: None.
<a id="trace-30164"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 30164): . Knowledge: actor memory at 225.00s, trace 30086. Next observer evidence: None.
<a id="trace-30168"></a>
- 225.95s–225.95s (×1), actor 9, squad 1 (trace 30168): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 30086. Next observer evidence: {'until': 255.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2460}.
<a id="trace-30419"></a>
- 232.45s–232.45s (×1), actor 4, squad 0 (trace 30419): NeedSupport. Knowledge: actor memory at 230.00s, trace 30302. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30436}.
<a id="trace-30436"></a>
<a id="trace-30438"></a>
<a id="trace-30472"></a>
<a id="trace-30474"></a>
<a id="trace-30557"></a>
<a id="trace-30559"></a>
<a id="trace-30584"></a>
<a id="trace-30586"></a>
<a id="trace-30615"></a>
<a id="trace-30642"></a>
<a id="trace-30644"></a>
<a id="trace-30670"></a>
<a id="trace-30672"></a>
<a id="trace-30757"></a>
<a id="trace-30759"></a>
<a id="trace-30786"></a>
<a id="trace-30815"></a>
<a id="trace-30817"></a>
<a id="trace-30847"></a>
<a id="trace-30849"></a>
<a id="trace-30878"></a>
<a id="trace-30880"></a>
<a id="trace-30956"></a>
<a id="trace-30958"></a>
<a id="trace-30982"></a>
<a id="trace-31015"></a>
<a id="trace-31045"></a>
<a id="trace-31085"></a>
<a id="trace-31087"></a>
<a id="trace-31166"></a>
<a id="trace-31168"></a>
<a id="trace-31189"></a>
<a id="trace-31191"></a>
<a id="trace-31216"></a>
<a id="trace-31246"></a>
<a id="trace-31248"></a>
<a id="trace-31278"></a>
<a id="trace-31280"></a>
<a id="trace-31364"></a>
<a id="trace-31366"></a>
<a id="trace-31400"></a>
<a id="trace-31402"></a>
<a id="trace-31428"></a>
<a id="trace-31430"></a>
<a id="trace-31455"></a>
<a id="trace-31457"></a>
<a id="trace-31485"></a>
<a id="trace-31566"></a>
<a id="trace-31568"></a>
<a id="trace-31593"></a>
<a id="trace-31595"></a>
<a id="trace-31631"></a>
<a id="trace-31633"></a>
<a id="trace-31656"></a>
<a id="trace-31658"></a>
<a id="trace-31685"></a>
<a id="trace-31687"></a>
<a id="trace-31769"></a>
<a id="trace-31788"></a>
<a id="trace-31790"></a>
<a id="trace-31826"></a>
<a id="trace-31860"></a>
<a id="trace-31892"></a>
<a id="trace-31894"></a>
<a id="trace-31975"></a>
<a id="trace-31977"></a>
<a id="trace-31998"></a>
<a id="trace-32000"></a>
<a id="trace-32027"></a>
<a id="trace-32057"></a>
<a id="trace-32059"></a>
<a id="trace-32090"></a>
<a id="trace-32092"></a>
<a id="trace-32175"></a>
<a id="trace-32177"></a>
<a id="trace-32204"></a>
<a id="trace-32206"></a>
<a id="trace-32231"></a>
<a id="trace-32257"></a>
<a id="trace-32283"></a>
<a id="trace-32364"></a>
<a id="trace-32390"></a>
<a id="trace-32392"></a>
<a id="trace-32429"></a>
<a id="trace-32431"></a>
<a id="trace-32455"></a>
<a id="trace-32457"></a>
<a id="trace-32479"></a>
<a id="trace-32481"></a>
<a id="trace-32557"></a>
<a id="trace-32582"></a>
<a id="trace-32584"></a>
<a id="trace-32613"></a>
<a id="trace-32615"></a>
<a id="trace-32644"></a>
<a id="trace-32646"></a>
- 233.30s–288.30s (×96), actor 5, squad 0 (trace 30436): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 30303. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30472}.
<a id="trace-2459"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (events line 2459): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32682}.
<a id="trace-2460"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (events line 2460): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32873}.
<a id="trace-32676"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 32676): renew committed intent (75 s lifetime). Knowledge: actor memory at 289.00s, trace 32676. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32682}.
<a id="trace-32677"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (trace 32677): renew committed intent (75 s lifetime). Knowledge: actor memory at 289.00s, trace 32677. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32873}.
<a id="trace-32682"></a>
<a id="trace-32684"></a>
<a id="trace-32757"></a>
<a id="trace-32759"></a>
<a id="trace-32780"></a>
<a id="trace-32782"></a>
<a id="trace-32812"></a>
<a id="trace-32814"></a>
<a id="trace-32847"></a>
<a id="trace-32878"></a>
<a id="trace-32880"></a>
<a id="trace-32965"></a>
<a id="trace-32987"></a>
<a id="trace-33012"></a>
<a id="trace-33014"></a>
<a id="trace-33067"></a>
<a id="trace-33147"></a>
<a id="trace-33175"></a>
<a id="trace-33202"></a>
<a id="trace-33241"></a>
<a id="trace-33314"></a>
<a id="trace-33342"></a>
<a id="trace-33370"></a>
<a id="trace-33424"></a>
<a id="trace-33504"></a>
<a id="trace-33525"></a>
<a id="trace-33551"></a>
<a id="trace-33652"></a>
<a id="trace-33825"></a>
<a id="trace-33862"></a>
<a id="trace-33880"></a>
<a id="trace-34031"></a>
<a id="trace-34115"></a>
<a id="trace-34130"></a>
<a id="trace-34181"></a>
<a id="trace-34209"></a>
<a id="trace-34295"></a>
<a id="trace-34311"></a>
<a id="trace-34330"></a>
<a id="trace-34357"></a>
<a id="trace-34435"></a>
<a id="trace-34456"></a>
<a id="trace-34478"></a>
<a id="trace-34494"></a>
<a id="trace-34512"></a>
<a id="trace-34606"></a>
<a id="trace-34659"></a>
<a id="trace-34676"></a>
<a id="trace-34743"></a>
<a id="trace-34759"></a>
<a id="trace-34782"></a>
<a id="trace-34836"></a>
<a id="trace-34921"></a>
<a id="trace-34938"></a>
<a id="trace-34959"></a>
- 289.30s–358.30s (×55), actor 5, squad 0 (trace 32682): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 289.00s, trace 32677. Next observer evidence: {'until': 290.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32757}.
<a id="trace-32873"></a>
- 293.95s–293.95s (×1), actor 9, squad 1 (trace 32873): received platoon directive. Knowledge: actor memory at 290.00s, trace 32703. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2754}.
<a id="trace-2754"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (events line 2754): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-34953"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 34953): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.00s, trace 34953. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

325 matched order/radio deliveries; 375 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.640s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2259: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2263: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2264: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2265: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2266: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2267: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2268: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2269: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2270: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2271: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3357: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3361: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3363: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3367: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3368: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3369: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3370: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3371: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3372: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3373: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3374: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3375: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3376: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3378: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6215: estimate 15.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6216: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6217: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6220: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6221: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 6223: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 6225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 6226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6227: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6228: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6229: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6230: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6231: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6232: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6233: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6234: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6235: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6236: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 6237: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 6238: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6934: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6935: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6936: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 6937: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7158: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7159: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7160: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7161: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7163: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7164: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7166: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 7168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7170: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7171: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7172: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7173: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7174: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7175: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7176: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7177: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7178: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7179: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7180: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7181: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 7641: estimate 15.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7642: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7643: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7644: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7646: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7647: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 7649: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 7651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 7652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7653: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7654: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7655: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7656: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7657: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7658: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7659: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7660: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7661: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7662: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 7663: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 7664: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7972: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7973: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7974: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7976: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7977: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7979: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 7981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 7982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7983: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7984: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7985: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7986: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7987: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7988: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7989: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7990: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7991: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7992: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 7993: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 7994: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8391: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8392: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8393: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8395: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8396: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8398: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 8400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 8401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8402: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8403: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8404: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8405: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8406: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8407: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8408: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8409: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8410: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8411: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 8412: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 8413: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8663: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8664: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8665: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8667: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8668: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 8670: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 8672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 8673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8674: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8675: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8676: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8677: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8678: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8679: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8680: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8681: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8682: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8683: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 8684: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 8685: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9040: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9041: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9042: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9044: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9045: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 9047: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 9049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 9050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9051: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9052: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9053: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9054: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9055: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9056: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9057: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9058: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9059: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9060: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 9061: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 9062: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9333: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9334: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9335: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9337: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9338: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 9340: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 9341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 9342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 9343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9344: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9345: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9346: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9347: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9348: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9349: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9350: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9351: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9352: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9353: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 9354: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 9355: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9793: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9794: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9795: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9797: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9798: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 9800: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 9801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 9802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 9803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9804: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9805: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9806: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9807: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9808: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9809: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9810: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9811: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9812: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9813: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 9814: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 9815: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 9967: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 9968: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10037: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 10038: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 10039: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10041: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 10042: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 10043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 10044: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 10045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 10046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 10047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10048: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10049: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10050: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10051: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10052: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10053: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10054: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10055: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 10056: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 10057: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 10058: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 10059: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12868: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 12869: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 12870: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12872: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12873: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 12875: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 12877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 12878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12879: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12880: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12881: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12882: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12883: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12884: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12885: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12886: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12887: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12888: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 12889: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 12890: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13101: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 13102: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 13103: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13105: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13106: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 13108: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 13110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 13111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13112: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13113: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13114: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13115: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13116: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13117: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13118: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13119: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13120: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13121: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13122: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13123: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13310: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 13311: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13312: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13314: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13315: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 13317: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13321: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13322: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13323: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13324: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13325: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13326: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13327: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13328: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13329: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13330: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13331: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13332: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 13516: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 13517: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 13518: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13520: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13521: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 13523: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 13524: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 13525: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 13526: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13527: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13528: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 13529: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13530: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13531: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13532: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13533: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13534: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 13535: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13536: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 13537: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 13538: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 13716: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 13717: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 13718: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13720: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13721: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 13722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 13723: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 13724: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 13725: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 13726: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 13727: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13728: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 13729: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 13730: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13731: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13732: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13733: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 13734: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 13735: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 13736: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 13737: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 13738: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 13797: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 13920: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 13921: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 13922: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13924: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13925: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 13926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 13927: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 13928: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 13929: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 13930: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 13931: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13932: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 13933: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 13934: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13935: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13936: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13937: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 13938: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 13939: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 13940: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 13941: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 13942: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 14197: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 14198: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 14199: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14201: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14202: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 14203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 14204: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 14205: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 14206: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 14207: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14208: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14209: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 14210: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14211: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14212: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14213: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14214: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14215: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 14216: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 14217: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 14218: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 14219: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15851: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15852: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15872: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 15873: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15874: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15876: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15877: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 15879: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15880: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 15881: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 15882: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15883: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15884: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15885: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15886: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15887: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15888: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15889: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15890: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15891: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15892: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 15893: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 15894: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16133: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16134: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16136: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16137: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 16139: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16140: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 16141: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 16142: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16143: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16144: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16145: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16146: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16147: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16148: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16149: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16150: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16151: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16152: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 16153: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 16154: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16781: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16782: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16784: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16785: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 16787: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16788: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 16789: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 16790: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16791: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16792: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16793: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16794: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16795: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16796: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16797: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16798: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16799: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16800: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 16801: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 16802: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17865: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 17866: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17868: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17869: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 17871: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 17872: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 17873: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17874: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17875: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17876: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17877: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17878: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17879: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17880: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17881: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17882: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17883: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17884: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17885: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18535: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18536: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18538: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18539: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 18541: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 18542: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 18543: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18544: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18545: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18547: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18548: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18549: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18550: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18551: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18552: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18553: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18554: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18555: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18811: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18812: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18814: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18815: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18817: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 18818: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 18819: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18820: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18821: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18823: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18824: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18825: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18826: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18827: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18828: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18829: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18830: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18831: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 19249: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 19250: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20010: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 20011: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 20012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20013: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 20014: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20016: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 20017: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 20018: estimate 15.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20019: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20020: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20021: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20022: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20023: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20024: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20025: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20026: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20027: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20028: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 20029: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 20030: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 20709: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 20710: estimate 1.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 20711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20712: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 20713: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 20714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20715: estimate 16.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 20716: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 20717: estimate 15.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20718: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20719: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20720: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20721: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20722: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20723: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20724: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20725: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20726: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20727: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 20728: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 20729: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 21689: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 21690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 21691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 21692: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 21693: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 21694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21695: estimate 15.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 21696: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 21697: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 21698: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21699: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21700: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21701: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21702: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21703: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21704: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21705: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21706: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21707: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 21708: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 21709: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 21785: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 21786: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 22770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 22771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 22772: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 22773: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 22774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 22775: estimate 16.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 22776: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 22777: estimate 16.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 22778: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 22779: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 22780: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 22781: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 22782: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 22783: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 22784: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 22785: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 22786: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 22787: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 22788: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 22789: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 24366: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 24367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 24368: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 24369: estimate 15.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 24370: estimate 16.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 24371: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 24372: estimate 15.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 24373: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 24374: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 24375: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 24376: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 24377: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 24378: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 24379: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 24380: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 24381: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 24382: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 24383: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 24384: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 24657: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 24658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 24659: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 24660: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 24661: estimate 16.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 24662: estimate 15.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 24663: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 24664: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 24665: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 24666: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 24667: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 24668: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 24669: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 24670: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 24671: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 24672: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 24673: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 24674: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 27222: estimate 16.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 27223: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 27224: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 27225: estimate 16.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 27226: estimate 16.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 27227: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 27228: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 27229: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 27230: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 27231: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 27232: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 27233: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 27234: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 27235: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 27236: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 27237: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 27238: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 27626: estimate 15.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 27627: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 27628: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 27629: estimate 16.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 27630: estimate 16.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 27631: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 27632: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 27633: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 27634: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 27635: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 27636: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 27637: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 27638: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 27639: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 27640: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 27641: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 27642: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 28037: estimate 16.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 28038: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 28039: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 28040: estimate 16.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 28041: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 28042: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 28043: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 28044: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 28045: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 28046: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 28047: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 28048: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 28049: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 28050: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 28051: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 28052: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 28053: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 28283: estimate 15.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 28284: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 28285: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 28286: estimate 15.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 28287: estimate 15.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 28288: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 28289: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 28290: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 28291: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 28292: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 28293: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 28294: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 28295: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 28296: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 28297: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 28298: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 28299: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 28510: estimate 15.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 28511: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 28512: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 28513: estimate 16.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 28514: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 28515: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 28516: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 28517: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 28518: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 28519: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 28520: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 28521: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 28522: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 28523: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 28524: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 28525: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 28526: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 28724: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 28725: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 28726: estimate 15.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 28727: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 28728: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 28729: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 28730: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 28731: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 28732: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 28733: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 28734: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 28735: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 28736: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 28737: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 28738: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 28739: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 28976: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 28977: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 28978: estimate 15.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 28979: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 28980: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 28981: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 28982: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 28983: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 28984: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 28985: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 28986: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 28987: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 28988: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 28989: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 28990: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 28991: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 203.25s leader 5, trace 29154: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 29219: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 29220: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 29221: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 29222: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 29223: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 29224: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 29225: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 29226: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 29227: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 29228: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 29229: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 29230: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 29231: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 29232: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 29233: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 29234: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 29444: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 29445: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 29446: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 29447: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 29448: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 29449: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 29450: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 29451: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 29452: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 29453: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 29454: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 29455: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 29456: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 29457: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 29458: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 29459: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 29659: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 29660: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 29661: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 29662: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 29663: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 29664: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 29665: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 29666: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 29667: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 29668: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 29669: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 29670: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 29671: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 29672: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 29673: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 29674: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.25s leader 5, trace 29718: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 29869: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 29870: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 29871: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 29872: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 29873: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 29874: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 29875: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 29876: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 29877: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 29878: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 29879: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 29880: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 29881: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 29882: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 29883: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 29884: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 29885: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 30084: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 30085: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 30086: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 30087: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 30088: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 30089: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 30090: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 30091: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 30092: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 30093: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 30094: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 30095: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 30096: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 30097: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 30098: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 30302: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 30303: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 30304: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 30305: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 30306: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 30307: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 30308: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 30309: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 30310: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 30311: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 30312: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 30313: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 30314: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 30315: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 30316: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 30493: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 30494: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 30495: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 30496: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 30497: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 30498: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 30499: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 30500: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 30501: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 30502: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 30503: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 30504: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 30505: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 30506: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 30507: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 30692: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 30693: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 30694: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 30695: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 30696: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 30697: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 30698: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 30699: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 30700: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 30701: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 30702: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 30703: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 30704: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 30705: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 30706: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 30898: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 30899: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 30900: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 30901: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 30902: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 30903: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 30904: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 30905: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 30906: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 30907: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 30908: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 30909: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 30910: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 30911: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 30912: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 31106: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 31107: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 31108: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 31109: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 31110: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 31111: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 31112: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 31113: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 31114: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 31115: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 31116: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 31117: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 31118: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 31119: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 31120: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 31301: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 31302: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 31303: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 31304: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 31305: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 31306: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 31307: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 31308: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 31309: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 31310: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 31311: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 31312: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 31313: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 31314: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 31315: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 31507: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 31508: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 31509: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 31510: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 31511: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 31512: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 31513: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 31514: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 31515: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 31516: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 31517: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 31518: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 31519: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 31520: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 31521: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 31709: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 31710: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 31711: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 31712: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 31713: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 31714: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 31715: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 31716: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 31717: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 31718: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 31719: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 31720: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 31721: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 31722: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 31723: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 31916: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 31917: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 31918: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 31919: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 31920: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 31921: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 31922: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 31923: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 31924: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 31925: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 31926: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 31927: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 31928: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 31929: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 31930: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 32117: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 32118: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 32119: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 32120: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 32121: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 32122: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 32123: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 32124: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 32125: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 32126: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 32127: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 32128: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 32129: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 32130: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 32131: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 32308: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 32309: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 32310: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 32311: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 32312: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 32313: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 32314: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 32315: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 32316: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 32317: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 32318: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 32319: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 32320: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 32321: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 32322: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 32498: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 32499: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 32500: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 32501: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 32502: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 32503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 32504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 32505: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 32506: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 32507: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 32508: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 32509: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 32510: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 32511: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 32512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 32676: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 32677: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 32701: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 32702: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 32703: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 32704: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 32705: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 32706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 32707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 32708: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 32709: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 32710: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 32711: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 32712: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 32713: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 32714: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 32715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 32903: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 32904: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 32905: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 32906: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 32907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 32908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 32909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 32910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 32911: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 32912: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 32913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 32914: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 32915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 32916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 32917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 33089: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 33090: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 33091: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 33092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 33093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 33094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 33095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 33096: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 33097: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 33098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 33099: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 33100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 33101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 33102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 33258: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 33259: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 33260: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 33261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 33262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 33263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 33264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 33265: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 33266: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 33267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 33268: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 33269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 33270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 33271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 33435: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 33436: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 33437: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 33438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 33439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 33440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 33441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 33442: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 33443: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 33444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 33445: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 33446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 33447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 33448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 33591: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 33592: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 33593: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 33594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 33595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 33596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 33597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 33598: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 33599: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 33600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 33601: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 33602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 33603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 33604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 33743: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 33744: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 33745: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 33746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 33747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 33748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 33749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 33750: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 33751: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 33752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 33753: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 33754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 33755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 33756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 33893: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 33894: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 33895: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 33896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 33897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 33898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 33899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 33900: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 33901: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 33902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 33903: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 33904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 33905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 33906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 34060: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 34061: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 34062: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 34063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 34064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 34065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 34066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 34067: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 34068: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 34069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 34070: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 34071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 34072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 34073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 34228: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 34229: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 34230: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 34234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34235: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 34236: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 34237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 34238: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 34239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 34240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 34241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 34376: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 34377: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 34378: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 34379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 34380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 34381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 34382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 34383: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 34384: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 34385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 34386: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 34387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 34388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 34389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 34526: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 34527: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 34528: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 34529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 34530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 34531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 34532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 34533: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 34534: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 34535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 34536: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 34537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 34538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 34539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 34688: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 34689: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 34690: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 34691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 34692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 34693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 34694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 34695: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 34696: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 34697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 34698: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 34699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 34700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 34701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 34854: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 34855: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 34856: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 34857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 34858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 34859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 34860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 34861: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 34862: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 34863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 34864: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 34865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 34866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 34867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 34953: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 35002: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 35003: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 35004: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 35005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 35006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 35007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 35008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 35009: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 35010: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 35011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 35012: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 35013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 35014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 35015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Bren killed in action
- 1: Rook killed in action
- 1: Reed killed in action
- 1: Dane incapacitated
- 1: Ellis incapacitated
- 1: Ash killed in action
- 1: Moss incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
