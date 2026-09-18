# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/21/107/good-azure/battle-107-1789674113717347706`

## Battle summary

**Ember** · 360 s · 548 shots.

### Turning points

- 15.3s, squad 4: contact (events line 214). First recorded contact.
- 26.3s, squad 0: withdrawal ([trace 6438](#trace-6438)). 99.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 34.2s, squad 1: assault ([trace 8188](#trace-8188)). 34.5s, squad 1: advanced tactically.
- 43.0s, squad 0: help call ([trace 9096](#trace-9096)). 44.5s, squad 1: answered a neighbour with support by fire.
- 44.5s, squad 1: help answer ([trace 9214](#trace-9214)). 76.2s, squad 1: took cover and returned fire.
- 56.9s, squad 1: help call ([trace 11777](#trace-11777)). No completion observed before termination.
- 80.0s, squad 1: withdrawal ([trace 13470](#trace-13470)). 137.9s, squad 1: took cover and returned fire.
- 100.3s, squad 0: assault ([trace 16042](#trace-16042)). 117.2s, squad 0: Withdraw to received rally.
- 107.3s, squad 1: help call ([trace 16376](#trace-16376)). No completion observed before termination.
- 117.2s, squad 0: withdrawal ([trace 16939](#trace-16939)). 162.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 6 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose Withdraw to received rally, prepared a base of fire and 4 further drill types; withdrew; 28 shots, 4/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, broke contact and 3 further drill types; no completed objective recorded; 61 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 260 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 199 shots, 1/4 lost.

### Decisions and attribution

At 130.7s, squad 1 chose renewed the existing objective ([trace 18209](#trace-18209)), followed by 1 shots and 1 own casualties; estimate 15.4 against 10 distinct squad-reported contacts; At 80.0s, squad 1 chose broke contact ([trace 13470](#trace-13470)), followed by 11 shots and 0 own casualties; estimate 15.3 against 0 distinct squad-reported contacts; At 70.6s, squad 1 chose FightHere: nearest known group ([trace 12765](#trace-12765)), followed by 6 shots and 0 own casualties; estimate 15.8 against 1 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 795](#trace-795)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 797](#trace-797)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.148669781853549, 'next_transition': 967}.

### Communication

387 matched deliveries (mean 0.42s, max 2.30s); 504 explicit drops; 8 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.30s, squad 4, contact, evidence events line 214: First recorded contact; .
- 26.30s, squad 0, withdrawal, evidence 6438: BreakContact: believed ratio at least two without superiority; 99.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 34.20s, squad 1, assault, evidence 8188: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 34.5s, squad 1: advanced tactically.
- 43.00s, squad 0, help call, evidence 9096: NeedSupport; 44.5s, squad 1: answered a neighbour with support by fire.
- 44.55s, squad 1, help answer, evidence 9214: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 76.2s, squad 1: took cover and returned fire.
- 56.85s, squad 1, help call, evidence 11777: NeedSupport; No completion observed before termination.
- 79.95s, squad 1, withdrawal, evidence 13470: BreakContact: believed ratio at least two without superiority; 137.9s, squad 1: took cover and returned fire.
- 100.30s, squad 0, assault, evidence 16042: radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map; 117.2s, squad 0: Withdraw to received rally.
- 107.35s, squad 1, help call, evidence 16376: NeedSupport; No completion observed before termination.
- 117.20s, squad 0, withdrawal, evidence 16939: Withdraw to received rally; 162.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 141.35s, squad 1, withdrawal, evidence 18830: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 323.15s, squad 0, help call, evidence 32572: NeedSupport; No completion observed before termination.
- 335.65s, squad 0, withdrawal, evidence 34743: BreakContact: believed ratio at least two without superiority; 348.4s, squad 0: took cover and returned fire.
- 347.35s, squad 0, help call, evidence 35749: NeedSupport; No completion observed before termination.
- 351.80s, squad 0, help call, evidence 36160: NeedSupport; No completion observed before termination.
- 352.20s, squad 0, withdrawal, evidence 36173: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915734123713314, 'next_transition': 666}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915734123713314, 'next_transition': 666}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915734123713314, 'next_transition': 666}.
<a id="trace-311"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 311): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.50502187464403, 'next_transition': 105}.
<a id="trace-312"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 312): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.50502187464403, 'next_transition': 105}.
<a id="trace-313"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 313): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.50502187464403, 'next_transition': 105}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599836769625399, 'next_transition': 695}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.148669781853549, 'next_transition': 967}.
<a id="trace-795"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 795): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 795. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
<a id="trace-796"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 796): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 796. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450041483237331, 'next_transition': 814}.
<a id="trace-797"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 797): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 797. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.148669781853549, 'next_transition': 967}.
<a id="trace-798"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 798): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 798. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.148669781853549, 'next_transition': 967}.
<a id="trace-814"></a>
<a id="trace-816"></a>
<a id="trace-845"></a>
<a id="trace-847"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-954"></a>
<a id="trace-956"></a>
<a id="trace-1034"></a>
<a id="trace-1036"></a>
<a id="trace-1079"></a>
<a id="trace-1081"></a>
<a id="trace-1108"></a>
<a id="trace-1110"></a>
<a id="trace-1151"></a>
<a id="trace-1153"></a>
<a id="trace-1188"></a>
<a id="trace-1190"></a>
<a id="trace-1236"></a>
<a id="trace-1238"></a>
<a id="trace-1261"></a>
<a id="trace-1263"></a>
<a id="trace-1281"></a>
<a id="trace-1283"></a>
<a id="trace-1374"></a>
<a id="trace-1376"></a>
<a id="trace-1397"></a>
<a id="trace-1399"></a>
<a id="trace-1419"></a>
<a id="trace-1421"></a>
<a id="trace-1448"></a>
<a id="trace-1450"></a>
<a id="trace-1476"></a>
<a id="trace-1478"></a>
<a id="trace-1496"></a>
<a id="trace-1498"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 798. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449940592413216, 'next_transition': 845}.
<a id="trace-958"></a>
<a id="trace-1038"></a>
<a id="trace-1083"></a>
<a id="trace-1085"></a>
<a id="trace-1192"></a>
<a id="trace-1194"></a>
<a id="trace-1240"></a>
<a id="trace-1242"></a>
<a id="trace-1285"></a>
<a id="trace-1287"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
<a id="trace-1480"></a>
<a id="trace-1482"></a>
<a id="trace-1965"></a>
<a id="trace-1967"></a>
<a id="trace-1996"></a>
<a id="trace-1998"></a>
<a id="trace-2399"></a>
<a id="trace-2401"></a>
<a id="trace-2744"></a>
<a id="trace-2746"></a>
<a id="trace-2764"></a>
<a id="trace-2766"></a>
<a id="trace-2794"></a>
<a id="trace-2796"></a>
<a id="trace-2813"></a>
<a id="trace-2815"></a>
<a id="trace-2861"></a>
<a id="trace-2863"></a>
<a id="trace-2957"></a>
<a id="trace-2959"></a>
<a id="trace-3545"></a>
<a id="trace-3547"></a>
<a id="trace-5308"></a>
<a id="trace-5310"></a>
<a id="trace-5362"></a>
<a id="trace-5364"></a>
<a id="trace-5990"></a>
<a id="trace-5992"></a>
<a id="trace-6053"></a>
<a id="trace-6055"></a>
<a id="trace-6096"></a>
<a id="trace-6098"></a>
<a id="trace-6165"></a>
<a id="trace-6167"></a>
<a id="trace-6230"></a>
<a id="trace-6232"></a>
<a id="trace-6349"></a>
<a id="trace-6351"></a>
<a id="trace-6397"></a>
<a id="trace-6399"></a>
<a id="trace-7054"></a>
<a id="trace-7056"></a>
<a id="trace-7218"></a>
<a id="trace-7220"></a>
<a id="trace-7252"></a>
<a id="trace-7254"></a>
<a id="trace-7404"></a>
<a id="trace-7406"></a>
<a id="trace-7442"></a>
<a id="trace-7444"></a>
<a id="trace-7489"></a>
<a id="trace-7491"></a>
<a id="trace-7593"></a>
<a id="trace-7595"></a>
<a id="trace-7624"></a>
<a id="trace-7626"></a>
<a id="trace-7658"></a>
<a id="trace-7660"></a>
<a id="trace-7678"></a>
<a id="trace-7680"></a>
<a id="trace-7710"></a>
<a id="trace-7712"></a>
<a id="trace-7734"></a>
<a id="trace-7736"></a>
<a id="trace-7764"></a>
<a id="trace-7766"></a>
<a id="trace-7786"></a>
<a id="trace-7788"></a>
<a id="trace-8211"></a>
<a id="trace-8213"></a>
<a id="trace-8453"></a>
<a id="trace-8455"></a>
<a id="trace-8487"></a>
<a id="trace-8489"></a>
<a id="trace-8513"></a>
<a id="trace-8515"></a>
<a id="trace-8541"></a>
<a id="trace-8543"></a>
<a id="trace-8587"></a>
<a id="trace-8589"></a>
<a id="trace-8601"></a>
<a id="trace-8603"></a>
<a id="trace-8629"></a>
<a id="trace-8631"></a>
<a id="trace-8730"></a>
<a id="trace-8732"></a>
<a id="trace-8769"></a>
<a id="trace-8771"></a>
<a id="trace-8788"></a>
<a id="trace-8790"></a>
<a id="trace-9062"></a>
<a id="trace-9064"></a>
<a id="trace-9089"></a>
<a id="trace-9091"></a>
<a id="trace-9137"></a>
<a id="trace-9139"></a>
<a id="trace-9167"></a>
<a id="trace-9169"></a>
<a id="trace-9198"></a>
<a id="trace-9200"></a>
<a id="trace-11063"></a>
<a id="trace-11065"></a>
<a id="trace-11079"></a>
<a id="trace-11081"></a>
<a id="trace-11110"></a>
<a id="trace-11112"></a>
<a id="trace-11123"></a>
<a id="trace-11125"></a>
<a id="trace-11149"></a>
<a id="trace-11151"></a>
<a id="trace-11165"></a>
<a id="trace-11167"></a>
<a id="trace-11212"></a>
<a id="trace-11214"></a>
<a id="trace-11228"></a>
<a id="trace-11230"></a>
<a id="trace-11324"></a>
<a id="trace-11326"></a>
<a id="trace-11337"></a>
<a id="trace-11339"></a>
<a id="trace-11366"></a>
<a id="trace-11368"></a>
<a id="trace-11385"></a>
<a id="trace-11387"></a>
<a id="trace-11423"></a>
<a id="trace-11425"></a>
<a id="trace-11471"></a>
<a id="trace-11473"></a>
<a id="trace-11490"></a>
<a id="trace-11492"></a>
<a id="trace-11516"></a>
<a id="trace-11518"></a>
<a id="trace-11565"></a>
<a id="trace-11567"></a>
<a id="trace-11658"></a>
<a id="trace-11660"></a>
<a id="trace-11693"></a>
<a id="trace-11695"></a>
<a id="trace-11770"></a>
<a id="trace-11772"></a>
<a id="trace-11809"></a>
<a id="trace-11811"></a>
<a id="trace-11837"></a>
<a id="trace-11839"></a>
<a id="trace-11880"></a>
<a id="trace-11882"></a>
<a id="trace-11900"></a>
<a id="trace-11902"></a>
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-12231"></a>
<a id="trace-12233"></a>
<a id="trace-12261"></a>
<a id="trace-12263"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12327"></a>
<a id="trace-12329"></a>
<a id="trace-12358"></a>
<a id="trace-12360"></a>
<a id="trace-12374"></a>
<a id="trace-12376"></a>
<a id="trace-12397"></a>
<a id="trace-12399"></a>
<a id="trace-12497"></a>
<a id="trace-12499"></a>
<a id="trace-12511"></a>
<a id="trace-12513"></a>
<a id="trace-12535"></a>
<a id="trace-12537"></a>
<a id="trace-12556"></a>
<a id="trace-12558"></a>
<a id="trace-12576"></a>
<a id="trace-12578"></a>
<a id="trace-12592"></a>
<a id="trace-12594"></a>
<a id="trace-12633"></a>
<a id="trace-12635"></a>
<a id="trace-12657"></a>
<a id="trace-12659"></a>
<a id="trace-12673"></a>
<a id="trace-12675"></a>
<a id="trace-12759"></a>
<a id="trace-12761"></a>
<a id="trace-12773"></a>
<a id="trace-12775"></a>
<a id="trace-12796"></a>
<a id="trace-12798"></a>
<a id="trace-12810"></a>
<a id="trace-12812"></a>
<a id="trace-12833"></a>
<a id="trace-12835"></a>
<a id="trace-12848"></a>
<a id="trace-12850"></a>
<a id="trace-12885"></a>
<a id="trace-12887"></a>
<a id="trace-13016"></a>
<a id="trace-13018"></a>
<a id="trace-13029"></a>
<a id="trace-13031"></a>
<a id="trace-13124"></a>
<a id="trace-13126"></a>
<a id="trace-13151"></a>
<a id="trace-13153"></a>
<a id="trace-13326"></a>
<a id="trace-13328"></a>
<a id="trace-13365"></a>
<a id="trace-13367"></a>
<a id="trace-13408"></a>
<a id="trace-13410"></a>
<a id="trace-13426"></a>
<a id="trace-13428"></a>
<a id="trace-13462"></a>
<a id="trace-13464"></a>
<a id="trace-13761"></a>
<a id="trace-13763"></a>
<a id="trace-13793"></a>
<a id="trace-13795"></a>
<a id="trace-13808"></a>
<a id="trace-13810"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13845"></a>
<a id="trace-13847"></a>
<a id="trace-13887"></a>
<a id="trace-13889"></a>
<a id="trace-13978"></a>
<a id="trace-13980"></a>
<a id="trace-13994"></a>
<a id="trace-13996"></a>
<a id="trace-14022"></a>
<a id="trace-14024"></a>
<a id="trace-14038"></a>
<a id="trace-14040"></a>
<a id="trace-14061"></a>
<a id="trace-14063"></a>
<a id="trace-14109"></a>
<a id="trace-14111"></a>
<a id="trace-14136"></a>
<a id="trace-14138"></a>
<a id="trace-14397"></a>
<a id="trace-14399"></a>
<a id="trace-14437"></a>
<a id="trace-14439"></a>
<a id="trace-14462"></a>
<a id="trace-14464"></a>
<a id="trace-14481"></a>
<a id="trace-14483"></a>
<a id="trace-14496"></a>
<a id="trace-14498"></a>
<a id="trace-14523"></a>
<a id="trace-14525"></a>
<a id="trace-14535"></a>
<a id="trace-14537"></a>
<a id="trace-14553"></a>
<a id="trace-14555"></a>
<a id="trace-14567"></a>
<a id="trace-14569"></a>
<a id="trace-14657"></a>
<a id="trace-14659"></a>
<a id="trace-14675"></a>
<a id="trace-14677"></a>
<a id="trace-14691"></a>
<a id="trace-14693"></a>
<a id="trace-14707"></a>
<a id="trace-14709"></a>
<a id="trace-14721"></a>
<a id="trace-14723"></a>
<a id="trace-14740"></a>
<a id="trace-14742"></a>
<a id="trace-14753"></a>
<a id="trace-14755"></a>
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14808"></a>
<a id="trace-14810"></a>
<a id="trace-16075"></a>
<a id="trace-16077"></a>
<a id="trace-16166"></a>
<a id="trace-16168"></a>
<a id="trace-16182"></a>
<a id="trace-16184"></a>
<a id="trace-16195"></a>
<a id="trace-16197"></a>
<a id="trace-16216"></a>
<a id="trace-16218"></a>
<a id="trace-16323"></a>
<a id="trace-16325"></a>
<a id="trace-16343"></a>
<a id="trace-16345"></a>
<a id="trace-16354"></a>
<a id="trace-16356"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-16391"></a>
<a id="trace-16393"></a>
<a id="trace-16425"></a>
<a id="trace-16427"></a>
<a id="trace-16459"></a>
<a id="trace-16461"></a>
<a id="trace-16492"></a>
<a id="trace-16494"></a>
<a id="trace-16512"></a>
<a id="trace-16514"></a>
<a id="trace-16665"></a>
<a id="trace-16667"></a>
<a id="trace-16685"></a>
<a id="trace-16687"></a>
<a id="trace-16699"></a>
<a id="trace-16701"></a>
<a id="trace-16714"></a>
<a id="trace-16716"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
<a id="trace-16744"></a>
<a id="trace-16746"></a>
<a id="trace-16838"></a>
<a id="trace-16840"></a>
<a id="trace-16917"></a>
<a id="trace-16919"></a>
<a id="trace-17108"></a>
<a id="trace-17110"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17151"></a>
<a id="trace-17153"></a>
<a id="trace-17189"></a>
<a id="trace-17191"></a>
<a id="trace-17218"></a>
<a id="trace-17220"></a>
<a id="trace-17253"></a>
<a id="trace-17255"></a>
<a id="trace-17369"></a>
<a id="trace-17371"></a>
<a id="trace-17407"></a>
<a id="trace-17409"></a>
<a id="trace-17467"></a>
<a id="trace-17469"></a>
<a id="trace-17522"></a>
<a id="trace-17524"></a>
<a id="trace-17541"></a>
<a id="trace-17543"></a>
<a id="trace-17565"></a>
<a id="trace-17567"></a>
<a id="trace-17594"></a>
<a id="trace-17596"></a>
<a id="trace-17626"></a>
<a id="trace-17628"></a>
<a id="trace-17643"></a>
<a id="trace-17645"></a>
<a id="trace-17727"></a>
<a id="trace-17729"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17778"></a>
<a id="trace-17780"></a>
<a id="trace-17813"></a>
<a id="trace-17815"></a>
<a id="trace-17856"></a>
<a id="trace-17858"></a>
<a id="trace-17912"></a>
<a id="trace-17914"></a>
<a id="trace-18086"></a>
<a id="trace-18088"></a>
<a id="trace-18098"></a>
<a id="trace-18100"></a>
<a id="trace-18192"></a>
<a id="trace-18194"></a>
<a id="trace-18218"></a>
<a id="trace-18220"></a>
<a id="trace-18241"></a>
<a id="trace-18243"></a>
<a id="trace-18257"></a>
<a id="trace-18259"></a>
<a id="trace-18293"></a>
<a id="trace-18295"></a>
<a id="trace-18313"></a>
<a id="trace-18315"></a>
<a id="trace-18350"></a>
<a id="trace-18352"></a>
<a id="trace-18362"></a>
<a id="trace-18364"></a>
<a id="trace-18386"></a>
<a id="trace-18388"></a>
<a id="trace-18478"></a>
<a id="trace-18480"></a>
<a id="trace-18547"></a>
<a id="trace-18549"></a>
<a id="trace-18564"></a>
<a id="trace-18566"></a>
<a id="trace-18688"></a>
<a id="trace-18690"></a>
<a id="trace-18703"></a>
<a id="trace-18705"></a>
<a id="trace-18808"></a>
<a id="trace-18810"></a>
<a id="trace-18926"></a>
<a id="trace-18928"></a>
<a id="trace-18956"></a>
<a id="trace-18958"></a>
<a id="trace-18965"></a>
<a id="trace-18967"></a>
<a id="trace-18983"></a>
<a id="trace-18985"></a>
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19034"></a>
<a id="trace-19036"></a>
<a id="trace-19273"></a>
<a id="trace-19275"></a>
<a id="trace-19284"></a>
<a id="trace-19286"></a>
<a id="trace-19311"></a>
<a id="trace-19313"></a>
<a id="trace-19339"></a>
<a id="trace-19341"></a>
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19405"></a>
<a id="trace-19407"></a>
<a id="trace-19424"></a>
<a id="trace-19426"></a>
<a id="trace-19443"></a>
<a id="trace-19445"></a>
<a id="trace-19459"></a>
<a id="trace-19461"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19581"></a>
<a id="trace-19583"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19622"></a>
<a id="trace-19624"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19679"></a>
<a id="trace-19681"></a>
<a id="trace-19709"></a>
<a id="trace-19711"></a>
<a id="trace-19895"></a>
<a id="trace-19897"></a>
<a id="trace-19911"></a>
<a id="trace-19913"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-19965"></a>
<a id="trace-19967"></a>
<a id="trace-19983"></a>
<a id="trace-19985"></a>
<a id="trace-20005"></a>
<a id="trace-20007"></a>
<a id="trace-20029"></a>
<a id="trace-20031"></a>
<a id="trace-20043"></a>
<a id="trace-20045"></a>
<a id="trace-20056"></a>
<a id="trace-20058"></a>
<a id="trace-20144"></a>
<a id="trace-20146"></a>
<a id="trace-20164"></a>
<a id="trace-20166"></a>
<a id="trace-20179"></a>
<a id="trace-20181"></a>
<a id="trace-20192"></a>
<a id="trace-20194"></a>
<a id="trace-20217"></a>
<a id="trace-20219"></a>
<a id="trace-20234"></a>
<a id="trace-20236"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
<a id="trace-20274"></a>
<a id="trace-20276"></a>
<a id="trace-20295"></a>
<a id="trace-20297"></a>
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20395"></a>
<a id="trace-20397"></a>
<a id="trace-20424"></a>
<a id="trace-20426"></a>
<a id="trace-20433"></a>
<a id="trace-20435"></a>
<a id="trace-20451"></a>
<a id="trace-20453"></a>
<a id="trace-20469"></a>
<a id="trace-20471"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20496"></a>
<a id="trace-20498"></a>
<a id="trace-20504"></a>
<a id="trace-20506"></a>
<a id="trace-20578"></a>
<a id="trace-20580"></a>
<a id="trace-20587"></a>
<a id="trace-20589"></a>
<a id="trace-20601"></a>
<a id="trace-20603"></a>
<a id="trace-20609"></a>
<a id="trace-20611"></a>
<a id="trace-20624"></a>
<a id="trace-20626"></a>
<a id="trace-20639"></a>
<a id="trace-20641"></a>
<a id="trace-20666"></a>
<a id="trace-20668"></a>
<a id="trace-20673"></a>
<a id="trace-20675"></a>
<a id="trace-20686"></a>
<a id="trace-20688"></a>
<a id="trace-20693"></a>
<a id="trace-20695"></a>
<a id="trace-20768"></a>
<a id="trace-20770"></a>
<a id="trace-20781"></a>
<a id="trace-20783"></a>
<a id="trace-20787"></a>
<a id="trace-20789"></a>
<a id="trace-20797"></a>
<a id="trace-20799"></a>
<a id="trace-20807"></a>
<a id="trace-20809"></a>
<a id="trace-20833"></a>
<a id="trace-20835"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20945"></a>
<a id="trace-20947"></a>
<a id="trace-20952"></a>
<a id="trace-20954"></a>
<a id="trace-20964"></a>
<a id="trace-20966"></a>
<a id="trace-20977"></a>
<a id="trace-20979"></a>
<a id="trace-20985"></a>
<a id="trace-20987"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21022"></a>
<a id="trace-21024"></a>
<a id="trace-21035"></a>
<a id="trace-21037"></a>
<a id="trace-21105"></a>
<a id="trace-21107"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21146"></a>
<a id="trace-21148"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21165"></a>
<a id="trace-21167"></a>
<a id="trace-21172"></a>
<a id="trace-21174"></a>
<a id="trace-21185"></a>
<a id="trace-21187"></a>
<a id="trace-21206"></a>
<a id="trace-21208"></a>
<a id="trace-21213"></a>
<a id="trace-21215"></a>
<a id="trace-21282"></a>
<a id="trace-21284"></a>
<a id="trace-21289"></a>
<a id="trace-21291"></a>
<a id="trace-21309"></a>
<a id="trace-21311"></a>
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21332"></a>
<a id="trace-21334"></a>
<a id="trace-21353"></a>
<a id="trace-21355"></a>
<a id="trace-21367"></a>
<a id="trace-21369"></a>
<a id="trace-21377"></a>
<a id="trace-21379"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21400"></a>
<a id="trace-21402"></a>
<a id="trace-21468"></a>
<a id="trace-21470"></a>
<a id="trace-21475"></a>
<a id="trace-21477"></a>
<a id="trace-21488"></a>
<a id="trace-21490"></a>
<a id="trace-21502"></a>
<a id="trace-21504"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21575"></a>
<a id="trace-21577"></a>
<a id="trace-21646"></a>
<a id="trace-21648"></a>
<a id="trace-21654"></a>
<a id="trace-21656"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21675"></a>
<a id="trace-21677"></a>
<a id="trace-21684"></a>
<a id="trace-21686"></a>
<a id="trace-21691"></a>
<a id="trace-21693"></a>
<a id="trace-21704"></a>
<a id="trace-21706"></a>
<a id="trace-21713"></a>
<a id="trace-21715"></a>
<a id="trace-21733"></a>
<a id="trace-21735"></a>
<a id="trace-21815"></a>
<a id="trace-21817"></a>
<a id="trace-21823"></a>
<a id="trace-21825"></a>
<a id="trace-21848"></a>
<a id="trace-21850"></a>
<a id="trace-21859"></a>
<a id="trace-21861"></a>
<a id="trace-21886"></a>
<a id="trace-21888"></a>
<a id="trace-21893"></a>
<a id="trace-21895"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21916"></a>
<a id="trace-21918"></a>
<a id="trace-21985"></a>
<a id="trace-21987"></a>
<a id="trace-21994"></a>
<a id="trace-21996"></a>
<a id="trace-22012"></a>
<a id="trace-22014"></a>
<a id="trace-22019"></a>
<a id="trace-22021"></a>
<a id="trace-22034"></a>
<a id="trace-22036"></a>
<a id="trace-22067"></a>
<a id="trace-22069"></a>
<a id="trace-22075"></a>
<a id="trace-22077"></a>
<a id="trace-22089"></a>
<a id="trace-22091"></a>
<a id="trace-22097"></a>
<a id="trace-22099"></a>
<a id="trace-22166"></a>
<a id="trace-22168"></a>
<a id="trace-22187"></a>
<a id="trace-22189"></a>
<a id="trace-22194"></a>
<a id="trace-22196"></a>
<a id="trace-22205"></a>
<a id="trace-22207"></a>
<a id="trace-22228"></a>
<a id="trace-22230"></a>
<a id="trace-22241"></a>
<a id="trace-22243"></a>
<a id="trace-22267"></a>
<a id="trace-22269"></a>
<a id="trace-22277"></a>
<a id="trace-22279"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22368"></a>
<a id="trace-22370"></a>
<a id="trace-22383"></a>
<a id="trace-22385"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22411"></a>
<a id="trace-22413"></a>
<a id="trace-22440"></a>
<a id="trace-22442"></a>
<a id="trace-22513"></a>
<a id="trace-22515"></a>
<a id="trace-22534"></a>
<a id="trace-22536"></a>
<a id="trace-22582"></a>
<a id="trace-22584"></a>
<a id="trace-22708"></a>
<a id="trace-22710"></a>
<a id="trace-22728"></a>
<a id="trace-22730"></a>
<a id="trace-22748"></a>
<a id="trace-22750"></a>
<a id="trace-22776"></a>
<a id="trace-22778"></a>
<a id="trace-22785"></a>
<a id="trace-22787"></a>
<a id="trace-22881"></a>
<a id="trace-22883"></a>
<a id="trace-22896"></a>
<a id="trace-22898"></a>
<a id="trace-22908"></a>
<a id="trace-22910"></a>
<a id="trace-22938"></a>
<a id="trace-22940"></a>
<a id="trace-22955"></a>
<a id="trace-22957"></a>
<a id="trace-22968"></a>
<a id="trace-22970"></a>
<a id="trace-23002"></a>
<a id="trace-23004"></a>
<a id="trace-23010"></a>
<a id="trace-23012"></a>
<a id="trace-23081"></a>
<a id="trace-23083"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23114"></a>
<a id="trace-23116"></a>
<a id="trace-23131"></a>
<a id="trace-23133"></a>
<a id="trace-23153"></a>
<a id="trace-23155"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23295"></a>
<a id="trace-23297"></a>
<a id="trace-23305"></a>
<a id="trace-23307"></a>
<a id="trace-23336"></a>
<a id="trace-23338"></a>
<a id="trace-23425"></a>
<a id="trace-23427"></a>
<a id="trace-23442"></a>
<a id="trace-23444"></a>
<a id="trace-23460"></a>
<a id="trace-23462"></a>
<a id="trace-23469"></a>
<a id="trace-23471"></a>
<a id="trace-23512"></a>
<a id="trace-23514"></a>
<a id="trace-23523"></a>
<a id="trace-23525"></a>
<a id="trace-23549"></a>
<a id="trace-23551"></a>
<a id="trace-23566"></a>
<a id="trace-23568"></a>
<a id="trace-23643"></a>
<a id="trace-23645"></a>
<a id="trace-23664"></a>
<a id="trace-23666"></a>
<a id="trace-23684"></a>
<a id="trace-23686"></a>
<a id="trace-23695"></a>
<a id="trace-23697"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23740"></a>
<a id="trace-23742"></a>
<a id="trace-23756"></a>
<a id="trace-23758"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23874"></a>
<a id="trace-23876"></a>
<a id="trace-23902"></a>
<a id="trace-23904"></a>
<a id="trace-24194"></a>
<a id="trace-24196"></a>
<a id="trace-24212"></a>
<a id="trace-24214"></a>
<a id="trace-24258"></a>
<a id="trace-24260"></a>
<a id="trace-24275"></a>
<a id="trace-24277"></a>
<a id="trace-24374"></a>
<a id="trace-24376"></a>
<a id="trace-24388"></a>
<a id="trace-24390"></a>
<a id="trace-24407"></a>
<a id="trace-24409"></a>
<a id="trace-24420"></a>
<a id="trace-24422"></a>
<a id="trace-24446"></a>
<a id="trace-24448"></a>
<a id="trace-24516"></a>
<a id="trace-24518"></a>
<a id="trace-24546"></a>
<a id="trace-24548"></a>
<a id="trace-24623"></a>
<a id="trace-24625"></a>
<a id="trace-24637"></a>
<a id="trace-24639"></a>
<a id="trace-24676"></a>
<a id="trace-24678"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24741"></a>
<a id="trace-24743"></a>
<a id="trace-24776"></a>
<a id="trace-24778"></a>
<a id="trace-24864"></a>
<a id="trace-24866"></a>
<a id="trace-24904"></a>
<a id="trace-24906"></a>
<a id="trace-24920"></a>
<a id="trace-24922"></a>
<a id="trace-24967"></a>
<a id="trace-24969"></a>
<a id="trace-24985"></a>
<a id="trace-24987"></a>
<a id="trace-24996"></a>
<a id="trace-24998"></a>
<a id="trace-25078"></a>
<a id="trace-25080"></a>
<a id="trace-25086"></a>
<a id="trace-25088"></a>
<a id="trace-25378"></a>
<a id="trace-25380"></a>
<a id="trace-25411"></a>
<a id="trace-25413"></a>
<a id="trace-25451"></a>
<a id="trace-25453"></a>
<a id="trace-25487"></a>
<a id="trace-25489"></a>
<a id="trace-25573"></a>
<a id="trace-25575"></a>
<a id="trace-25586"></a>
<a id="trace-25588"></a>
<a id="trace-25621"></a>
<a id="trace-25623"></a>
<a id="trace-25646"></a>
<a id="trace-25648"></a>
<a id="trace-25660"></a>
<a id="trace-25662"></a>
<a id="trace-25711"></a>
<a id="trace-25713"></a>
<a id="trace-25740"></a>
<a id="trace-25742"></a>
<a id="trace-25833"></a>
<a id="trace-25835"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25865"></a>
<a id="trace-25867"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25904"></a>
<a id="trace-25906"></a>
<a id="trace-26197"></a>
<a id="trace-26199"></a>
<a id="trace-26221"></a>
<a id="trace-26223"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26351"></a>
<a id="trace-26353"></a>
<a id="trace-26379"></a>
<a id="trace-26381"></a>
<a id="trace-26392"></a>
<a id="trace-26394"></a>
<a id="trace-26414"></a>
<a id="trace-26416"></a>
<a id="trace-26430"></a>
<a id="trace-26432"></a>
<a id="trace-26457"></a>
<a id="trace-26459"></a>
<a id="trace-26470"></a>
<a id="trace-26472"></a>
<a id="trace-26551"></a>
<a id="trace-26553"></a>
<a id="trace-26563"></a>
<a id="trace-26565"></a>
<a id="trace-26582"></a>
<a id="trace-26584"></a>
<a id="trace-26605"></a>
<a id="trace-26607"></a>
<a id="trace-26620"></a>
<a id="trace-26622"></a>
<a id="trace-26630"></a>
<a id="trace-26632"></a>
<a id="trace-26648"></a>
<a id="trace-26650"></a>
<a id="trace-26656"></a>
<a id="trace-26658"></a>
<a id="trace-26679"></a>
<a id="trace-26681"></a>
<a id="trace-26690"></a>
<a id="trace-26692"></a>
<a id="trace-26760"></a>
<a id="trace-26762"></a>
<a id="trace-26785"></a>
<a id="trace-26787"></a>
<a id="trace-26801"></a>
<a id="trace-26803"></a>
<a id="trace-26812"></a>
<a id="trace-26814"></a>
<a id="trace-26823"></a>
<a id="trace-26825"></a>
<a id="trace-26847"></a>
<a id="trace-26849"></a>
<a id="trace-27099"></a>
<a id="trace-27101"></a>
<a id="trace-27120"></a>
<a id="trace-27122"></a>
<a id="trace-27212"></a>
<a id="trace-27214"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27296"></a>
<a id="trace-27298"></a>
<a id="trace-27320"></a>
<a id="trace-27322"></a>
<a id="trace-27357"></a>
<a id="trace-27359"></a>
<a id="trace-27375"></a>
<a id="trace-27377"></a>
<a id="trace-27467"></a>
<a id="trace-27469"></a>
<a id="trace-27498"></a>
<a id="trace-27500"></a>
<a id="trace-27509"></a>
<a id="trace-27511"></a>
<a id="trace-27526"></a>
<a id="trace-27528"></a>
<a id="trace-27536"></a>
<a id="trace-27538"></a>
<a id="trace-27591"></a>
<a id="trace-27593"></a>
<a id="trace-27604"></a>
<a id="trace-27606"></a>
<a id="trace-27698"></a>
<a id="trace-27700"></a>
<a id="trace-27717"></a>
<a id="trace-27719"></a>
<a id="trace-27743"></a>
<a id="trace-27745"></a>
<a id="trace-28192"></a>
<a id="trace-28194"></a>
<a id="trace-28217"></a>
<a id="trace-28219"></a>
<a id="trace-28233"></a>
<a id="trace-28235"></a>
<a id="trace-28255"></a>
<a id="trace-28257"></a>
<a id="trace-28271"></a>
<a id="trace-28273"></a>
<a id="trace-28348"></a>
<a id="trace-28350"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28840"></a>
<a id="trace-28842"></a>
<a id="trace-28875"></a>
<a id="trace-28877"></a>
<a id="trace-28914"></a>
<a id="trace-28916"></a>
<a id="trace-28961"></a>
<a id="trace-28963"></a>
<a id="trace-29017"></a>
<a id="trace-29019"></a>
<a id="trace-29103"></a>
<a id="trace-29115"></a>
<a id="trace-32080"></a>
<a id="trace-32091"></a>
<a id="trace-32093"></a>
<a id="trace-32558"></a>
<a id="trace-32560"></a>
<a id="trace-32590"></a>
<a id="trace-32592"></a>
<a id="trace-32948"></a>
<a id="trace-32950"></a>
<a id="trace-33006"></a>
<a id="trace-33008"></a>
<a id="trace-33092"></a>
<a id="trace-33094"></a>
<a id="trace-33139"></a>
<a id="trace-33141"></a>
<a id="trace-33151"></a>
<a id="trace-33153"></a>
<a id="trace-33172"></a>
<a id="trace-33174"></a>
<a id="trace-33561"></a>
<a id="trace-33563"></a>
<a id="trace-33608"></a>
<a id="trace-33610"></a>
<a id="trace-33687"></a>
<a id="trace-33689"></a>
<a id="trace-33706"></a>
<a id="trace-33708"></a>
<a id="trace-34140"></a>
<a id="trace-34142"></a>
<a id="trace-34557"></a>
<a id="trace-34559"></a>
<a id="trace-34581"></a>
<a id="trace-34583"></a>
<a id="trace-34615"></a>
<a id="trace-34617"></a>
<a id="trace-34632"></a>
<a id="trace-34634"></a>
<a id="trace-34655"></a>
<a id="trace-34657"></a>
<a id="trace-34737"></a>
<a id="trace-34739"></a>
<a id="trace-35110"></a>
<a id="trace-35112"></a>
<a id="trace-35142"></a>
<a id="trace-35144"></a>
<a id="trace-35246"></a>
<a id="trace-35248"></a>
<a id="trace-35274"></a>
<a id="trace-35276"></a>
<a id="trace-35308"></a>
<a id="trace-35310"></a>
<a id="trace-35448"></a>
<a id="trace-35450"></a>
<a id="trace-35471"></a>
<a id="trace-35473"></a>
<a id="trace-35506"></a>
<a id="trace-35508"></a>
<a id="trace-35526"></a>
<a id="trace-35528"></a>
<a id="trace-35552"></a>
<a id="trace-35554"></a>
<a id="trace-35583"></a>
<a id="trace-35585"></a>
<a id="trace-35594"></a>
<a id="trace-35596"></a>
<a id="trace-35611"></a>
<a id="trace-35613"></a>
<a id="trace-35627"></a>
<a id="trace-35629"></a>
<a id="trace-35697"></a>
<a id="trace-35699"></a>
<a id="trace-35717"></a>
<a id="trace-35719"></a>
<a id="trace-35726"></a>
<a id="trace-35728"></a>
<a id="trace-35760"></a>
<a id="trace-35762"></a>
<a id="trace-35778"></a>
<a id="trace-35780"></a>
<a id="trace-36027"></a>
<a id="trace-36029"></a>
<a id="trace-36047"></a>
<a id="trace-36049"></a>
<a id="trace-36115"></a>
<a id="trace-36117"></a>
<a id="trace-36126"></a>
<a id="trace-36128"></a>
<a id="trace-36143"></a>
<a id="trace-36145"></a>
<a id="trace-36157"></a>
<a id="trace-36159"></a>
<a id="trace-36364"></a>
<a id="trace-36366"></a>
<a id="trace-36378"></a>
<a id="trace-36380"></a>
<a id="trace-36408"></a>
<a id="trace-36410"></a>
<a id="trace-36432"></a>
<a id="trace-36434"></a>
<a id="trace-36515"></a>
<a id="trace-36517"></a>
<a id="trace-36528"></a>
<a id="trace-36530"></a>
<a id="trace-36546"></a>
<a id="trace-36548"></a>
<a id="trace-36604"></a>
<a id="trace-36606"></a>
<a id="trace-36621"></a>
<a id="trace-36623"></a>
<a id="trace-36638"></a>
<a id="trace-36640"></a>
<a id="trace-36653"></a>
<a id="trace-36655"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 958): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 872. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624628825126529, 'next_transition': 1038}.
<a id="trace-967"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 967): traveling overwatch. Knowledge: actor memory at 5.00s, trace 863. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.302972036354383, 'next_transition': 2116}.
<a id="trace-968"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 968): received platoon directive. Knowledge: actor memory at 5.00s, trace 863. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.302972036354383, 'next_transition': 2116}.
<a id="trace-1504"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1504): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1292. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724901835785373, 'next_transition': 1896}.
<a id="trace-1505"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1505): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1292. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724901835785373, 'next_transition': 1896}.
<a id="trace-1896"></a>
<a id="trace-1898"></a>
<a id="trace-1923"></a>
<a id="trace-1925"></a>
<a id="trace-1961"></a>
<a id="trace-1963"></a>
<a id="trace-1992"></a>
<a id="trace-1994"></a>
<a id="trace-2081"></a>
<a id="trace-2083"></a>
<a id="trace-2395"></a>
<a id="trace-2397"></a>
<a id="trace-2697"></a>
<a id="trace-2699"></a>
<a id="trace-2718"></a>
<a id="trace-2720"></a>
<a id="trace-2740"></a>
<a id="trace-2742"></a>
<a id="trace-2760"></a>
<a id="trace-2762"></a>
<a id="trace-2790"></a>
<a id="trace-2792"></a>
<a id="trace-2809"></a>
<a id="trace-2811"></a>
<a id="trace-2834"></a>
<a id="trace-2836"></a>
<a id="trace-2857"></a>
<a id="trace-2859"></a>
<a id="trace-2953"></a>
<a id="trace-2955"></a>
- 13.20s–20.25s (×30), actor 5, squad 0 (trace 1896): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1297. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134468906013289, 'next_transition': 1923}.
<a id="trace-2116"></a>
- 15.60s–15.60s (×1), actor 8, squad 1 (trace 2116): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2013. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2412}.
<a id="trace-2117"></a>
- 15.60s–15.60s (×1), actor 8, squad 1 (trace 2117): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2013. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2412}.
<a id="trace-2118"></a>
<a id="trace-2412"></a>
- 15.60s–15.90s (×2), actor 8, squad 1 (trace 2118): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2013. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2412}.
<a id="trace-2839"></a>
- 19.25s–19.25s (×1), actor 9, squad 1 (trace 2839): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 2014. Next observer evidence: {'until': 23.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 470}.
<a id="trace-2966"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 2966): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2869. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874952135767238, 'next_transition': 3541}.
<a id="trace-2967"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 2967): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2869. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874952135767238, 'next_transition': 3541}.
<a id="trace-2968"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 2968): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2869. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874952135767238, 'next_transition': 3541}.
<a id="trace-3541"></a>
<a id="trace-3543"></a>
- 20.75s–20.75s (×2), actor 5, squad 0 (trace 3541): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2874. Next observer evidence: {'until': 21, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4606871013515066, 'next_transition': 3558}.
<a id="trace-3558"></a>
- 21.05s–21.05s (×1), actor 0, squad 0 (trace 3558): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2869. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23009611178313683, 'next_transition': 4135}.
<a id="trace-4135"></a>
<a id="trace-4137"></a>
- 21.25s–21.25s (×2), actor 5, squad 0 (trace 4135): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2874. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23113529751756418, 'next_transition': 4149}.
<a id="trace-4149"></a>
<a id="trace-4725"></a>
- 21.40s–21.65s (×2), actor 0, squad 0 (trace 4149): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2869. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2578881785342504, 'next_transition': 4725}.
<a id="trace-5304"></a>
<a id="trace-5306"></a>
<a id="trace-5358"></a>
<a id="trace-5360"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 5304): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2874. Next observer evidence: {'until': 22.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1867186584729956, 'next_transition': 5358}.
<a id="trace-5407"></a>
- 22.65s–22.65s (×1), actor 0, squad 0 (trace 5407): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2869. Next observer evidence: None.
<a id="trace-5986"></a>
<a id="trace-5988"></a>
<a id="trace-6048"></a>
<a id="trace-6050"></a>
- 22.75s–23.25s (×4), actor 5, squad 0 (trace 5986): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2874. Next observer evidence: {'until': 23.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7305920639242287, 'next_transition': 6048}.
<a id="trace-469"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 469): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-470"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (events line 470): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6070"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 6070): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=6.062866 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 6070. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1428314547985929, 'next_transition': 6091}.
<a id="trace-6071"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 6071): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=6.062866 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 6071. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1428314547985929, 'next_transition': 6091}.
<a id="trace-6072"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 6072): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=6.062866 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 6072. Next observer evidence: {'until': 27.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7057}.
<a id="trace-6073"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 6073): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=6.062866 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 6073. Next observer evidence: {'until': 27.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7057}.
<a id="trace-6091"></a>
<a id="trace-6093"></a>
<a id="trace-6159"></a>
<a id="trace-6161"></a>
<a id="trace-6224"></a>
<a id="trace-6226"></a>
<a id="trace-6343"></a>
<a id="trace-6345"></a>
<a id="trace-6391"></a>
<a id="trace-6393"></a>
<a id="trace-6430"></a>
<a id="trace-6432"></a>
- 23.75s–26.25s (×12), actor 5, squad 0 (trace 6091): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 6073. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3513131609030565, 'next_transition': 6159}.
<a id="trace-6438"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 6438): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 6246. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749666720680167, 'next_transition': 7021}.
<a id="trace-6439"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 6439): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 6246. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749666720680167, 'next_transition': 7021}.
<a id="trace-7021"></a>
<a id="trace-7023"></a>
<a id="trace-7048"></a>
<a id="trace-7050"></a>
<a id="trace-7212"></a>
<a id="trace-7214"></a>
<a id="trace-7246"></a>
<a id="trace-7248"></a>
<a id="trace-7398"></a>
<a id="trace-7400"></a>
<a id="trace-7436"></a>
<a id="trace-7438"></a>
<a id="trace-7483"></a>
<a id="trace-7485"></a>
<a id="trace-7588"></a>
<a id="trace-7590"></a>
<a id="trace-7619"></a>
<a id="trace-7621"></a>
<a id="trace-7652"></a>
<a id="trace-7654"></a>
<a id="trace-7672"></a>
<a id="trace-7674"></a>
<a id="trace-7704"></a>
<a id="trace-7706"></a>
<a id="trace-7728"></a>
<a id="trace-7730"></a>
<a id="trace-7758"></a>
<a id="trace-7760"></a>
<a id="trace-7780"></a>
<a id="trace-7782"></a>
<a id="trace-8205"></a>
<a id="trace-8207"></a>
<a id="trace-8324"></a>
<a id="trace-8326"></a>
<a id="trace-8421"></a>
<a id="trace-8423"></a>
<a id="trace-8449"></a>
<a id="trace-8451"></a>
<a id="trace-8483"></a>
<a id="trace-8485"></a>
<a id="trace-8509"></a>
<a id="trace-8511"></a>
<a id="trace-8537"></a>
<a id="trace-8539"></a>
<a id="trace-8555"></a>
<a id="trace-8557"></a>
<a id="trace-8582"></a>
<a id="trace-8584"></a>
<a id="trace-8596"></a>
<a id="trace-8598"></a>
<a id="trace-8624"></a>
<a id="trace-8626"></a>
<a id="trace-8639"></a>
<a id="trace-8641"></a>
<a id="trace-8725"></a>
<a id="trace-8727"></a>
<a id="trace-8744"></a>
<a id="trace-8746"></a>
<a id="trace-8763"></a>
<a id="trace-8765"></a>
<a id="trace-8782"></a>
<a id="trace-8784"></a>
- 26.75s–41.75s (×62), actor 5, squad 0 (trace 7021): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6251. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362500877513064, 'next_transition': 7048}.
<a id="trace-7057"></a>
<a id="trace-7255"></a>
- 27.25s–28.25s (×2), actor 9, squad 1 (trace 7057): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 6254. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5469515644045236, 'next_transition': 7255}.
<a id="trace-7685"></a>
- 31.95s–31.95s (×1), actor 9, squad 1 (trace 7685): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.379858344778342, 'next_transition': 7806}.
<a id="trace-7806"></a>
- 34.20s–34.20s (×1), actor 9, squad 1 (trace 7806): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8188"></a>
- 34.20s–34.20s (×1), actor 9, squad 1 (trace 8188): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8189"></a>
- 34.20s–34.20s (×1), actor 9, squad 1 (trace 8189): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8190"></a>
- 34.20s–34.20s (×1), actor 9, squad 1 (trace 8190): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8191"></a>
- 34.20s–34.20s (×1), actor 9, squad 1 (trace 8191): Assaulting. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8224}.
<a id="trace-8224"></a>
- 34.55s–34.55s (×1), actor 9, squad 1 (trace 8224): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.6810505145910413, 'next_transition': 8791}.
<a id="trace-8228"></a>
- 34.55s–34.55s (×1), actor 9, squad 1 (trace 8228): MoveTactically. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.6810505145910413, 'next_transition': 8791}.
<a id="trace-8229"></a>
- 34.55s–34.55s (×1), actor 9, squad 1 (trace 8229): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 30.00s, trace 7508. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.6810505145910413, 'next_transition': 8791}.
<a id="trace-8791"></a>
- 41.80s–41.80s (×1), actor 9, squad 1 (trace 8791): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 8654. Next observer evidence: {'until': 44.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.027224266340486535, 'next_transition': 9214}.
<a id="trace-8792"></a>
- 41.80s–41.80s (×1), actor 9, squad 1 (trace 8792): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 8654. Next observer evidence: {'until': 44.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.027224266340486535, 'next_transition': 9214}.
<a id="trace-8883"></a>
- 42.00s–42.00s (×1), actor 0, squad 0 (trace 8883): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 8646. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11812657018275882, 'next_transition': 9056}.
<a id="trace-8884"></a>
- 42.00s–42.00s (×1), actor 0, squad 0 (trace 8884): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 8646. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11812657018275882, 'next_transition': 9056}.
<a id="trace-9056"></a>
<a id="trace-9058"></a>
<a id="trace-9083"></a>
<a id="trace-9085"></a>
- 42.25s–42.75s (×4), actor 5, squad 0 (trace 9056): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8651. Next observer evidence: {'until': 42.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07565480408572824, 'next_transition': 9083}.
<a id="trace-9096"></a>
- 43.00s–43.00s (×1), actor 0, squad 0 (trace 9096): NeedSupport. Knowledge: actor memory at 40.00s, trace 8646. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9131}.
<a id="trace-9131"></a>
<a id="trace-9133"></a>
<a id="trace-9161"></a>
<a id="trace-9163"></a>
<a id="trace-9193"></a>
<a id="trace-9195"></a>
<a id="trace-10974"></a>
<a id="trace-10976"></a>
<a id="trace-11059"></a>
<a id="trace-11061"></a>
<a id="trace-11075"></a>
<a id="trace-11077"></a>
<a id="trace-11105"></a>
<a id="trace-11107"></a>
<a id="trace-11118"></a>
<a id="trace-11120"></a>
<a id="trace-11144"></a>
<a id="trace-11146"></a>
<a id="trace-11159"></a>
<a id="trace-11161"></a>
<a id="trace-11184"></a>
<a id="trace-11186"></a>
<a id="trace-11206"></a>
<a id="trace-11208"></a>
<a id="trace-11224"></a>
<a id="trace-11226"></a>
<a id="trace-11239"></a>
<a id="trace-11241"></a>
<a id="trace-11320"></a>
<a id="trace-11322"></a>
<a id="trace-11333"></a>
<a id="trace-11335"></a>
<a id="trace-11361"></a>
<a id="trace-11363"></a>
<a id="trace-11380"></a>
<a id="trace-11382"></a>
<a id="trace-11419"></a>
<a id="trace-11421"></a>
<a id="trace-11467"></a>
<a id="trace-11469"></a>
<a id="trace-11486"></a>
<a id="trace-11488"></a>
<a id="trace-11512"></a>
<a id="trace-11514"></a>
- 43.25s–53.75s (×44), actor 5, squad 0 (trace 9131): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8651. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2064841775055221, 'next_transition': 9161}.
<a id="trace-9214"></a>
- 44.55s–44.55s (×1), actor 9, squad 1 (trace 9214): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 8654. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.886266659025963, 'next_transition': 797}.
<a id="trace-9215"></a>
- 44.55s–44.55s (×1), actor 9, squad 1 (trace 9215): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 8654. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.886266659025963, 'next_transition': 797}.
<a id="trace-797"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (events line 797): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11132"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (trace 11132): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.565163 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 11132. Next observer evidence: {'until': 56.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 16.1563202393919, 'next_transition': 11777}.
<a id="trace-11133"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (trace 11133): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.565163 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 11133. Next observer evidence: {'until': 56.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 16.1563202393919, 'next_transition': 11777}.
<a id="trace-11529"></a>
- 54.05s–54.05s (×1), actor 5, squad 0 (trace 11529): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 54.05s, trace 11529. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1547984507746692, 'next_transition': 11543}.
<a id="trace-11543"></a>
<a id="trace-11545"></a>
<a id="trace-11560"></a>
<a id="trace-11562"></a>
<a id="trace-11652"></a>
<a id="trace-11654"></a>
<a id="trace-11687"></a>
<a id="trace-11689"></a>
<a id="trace-11728"></a>
<a id="trace-11730"></a>
<a id="trace-11764"></a>
<a id="trace-11766"></a>
<a id="trace-11803"></a>
<a id="trace-11805"></a>
<a id="trace-11831"></a>
<a id="trace-11833"></a>
<a id="trace-11859"></a>
<a id="trace-11861"></a>
<a id="trace-11874"></a>
<a id="trace-11876"></a>
<a id="trace-11894"></a>
<a id="trace-11896"></a>
<a id="trace-11909"></a>
<a id="trace-11911"></a>
<a id="trace-11995"></a>
<a id="trace-11997"></a>
- 54.25s–60.25s (×26), actor 5, squad 0 (trace 11543): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 54.05s, trace 11529. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30960701034805954, 'next_transition': 11560}.
<a id="trace-11777"></a>
- 56.85s–56.85s (×1), actor 9, squad 1 (trace 11777): NeedSupport. Knowledge: actor memory at 55.00s, trace 11579. Next observer evidence: {'until': 70.4, 'shots': 16, 'casualties': 1, 'mean_displacement': 0.17446678907141253, 'next_transition': 1012}.
<a id="trace-12000"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 12000): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 11919. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12227}.
<a id="trace-12063"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 12063): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 11919. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12227}.
<a id="trace-12227"></a>
<a id="trace-12229"></a>
- 60.75s–60.75s (×2), actor 5, squad 0 (trace 12227): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11923. Next observer evidence: {'until': 61, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3374852476046812, 'next_transition': 12245}.
<a id="trace-12245"></a>
- 61.05s–61.05s (×1), actor 5, squad 0 (trace 12245): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 61.05s, trace 12245. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22500107601873712, 'next_transition': 12256}.
<a id="trace-12256"></a>
<a id="trace-12258"></a>
<a id="trace-12278"></a>
<a id="trace-12280"></a>
<a id="trace-12304"></a>
<a id="trace-12306"></a>
<a id="trace-12322"></a>
<a id="trace-12324"></a>
<a id="trace-12352"></a>
<a id="trace-12354"></a>
<a id="trace-12368"></a>
<a id="trace-12370"></a>
<a id="trace-12392"></a>
<a id="trace-12394"></a>
<a id="trace-12409"></a>
<a id="trace-12411"></a>
<a id="trace-12492"></a>
<a id="trace-12494"></a>
<a id="trace-12506"></a>
<a id="trace-12508"></a>
<a id="trace-12530"></a>
<a id="trace-12532"></a>
<a id="trace-12551"></a>
<a id="trace-12553"></a>
<a id="trace-12569"></a>
<a id="trace-12571"></a>
<a id="trace-12585"></a>
<a id="trace-12587"></a>
<a id="trace-12615"></a>
<a id="trace-12617"></a>
<a id="trace-12628"></a>
<a id="trace-12630"></a>
<a id="trace-12652"></a>
<a id="trace-12654"></a>
<a id="trace-12668"></a>
<a id="trace-12670"></a>
- 61.25s–69.75s (×36), actor 5, squad 0 (trace 12256): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 61.05s, trace 12245. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4050037298669702, 'next_transition': 12278}.
<a id="trace-12700"></a>
- 70.05s–70.05s (×1), actor 5, squad 0 (trace 12700): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 70.05s, trace 12700. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2699948937399233, 'next_transition': 12754}.
<a id="trace-12754"></a>
<a id="trace-12756"></a>
<a id="trace-12768"></a>
<a id="trace-12770"></a>
<a id="trace-12791"></a>
<a id="trace-12793"></a>
<a id="trace-12805"></a>
<a id="trace-12807"></a>
<a id="trace-12828"></a>
<a id="trace-12830"></a>
<a id="trace-12843"></a>
<a id="trace-12845"></a>
<a id="trace-12868"></a>
<a id="trace-12870"></a>
<a id="trace-12880"></a>
<a id="trace-12882"></a>
- 70.25s–73.75s (×16), actor 5, squad 0 (trace 12754): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.05s, trace 12700. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5400041969055678, 'next_transition': 12768}.
<a id="trace-1012"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (events line 1012): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12764"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (trace 12764): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.443877 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.55s, trace 12764. Next observer evidence: {'until': 75.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13103}.
<a id="trace-12765"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (trace 12765): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.443877 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.55s, trace 12765. Next observer evidence: {'until': 75.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13103}.
<a id="trace-12898"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 12898): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 12678. Next observer evidence: None.
<a id="trace-12899"></a>
- 74.20s–74.20s (×1), actor 1, squad 0 (trace 12899): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 12678. Next observer evidence: None.
<a id="trace-13011"></a>
<a id="trace-13013"></a>
<a id="trace-13024"></a>
<a id="trace-13026"></a>
<a id="trace-13118"></a>
<a id="trace-13120"></a>
<a id="trace-13145"></a>
<a id="trace-13147"></a>
<a id="trace-13302"></a>
<a id="trace-13304"></a>
<a id="trace-13320"></a>
<a id="trace-13322"></a>
<a id="trace-13359"></a>
<a id="trace-13361"></a>
<a id="trace-13379"></a>
<a id="trace-13381"></a>
<a id="trace-13402"></a>
<a id="trace-13404"></a>
<a id="trace-13420"></a>
<a id="trace-13422"></a>
<a id="trace-13443"></a>
<a id="trace-13445"></a>
<a id="trace-13456"></a>
<a id="trace-13458"></a>
<a id="trace-13696"></a>
<a id="trace-13698"></a>
<a id="trace-13716"></a>
<a id="trace-13718"></a>
<a id="trace-13740"></a>
<a id="trace-13742"></a>
<a id="trace-13755"></a>
<a id="trace-13757"></a>
<a id="trace-13787"></a>
<a id="trace-13789"></a>
<a id="trace-13802"></a>
<a id="trace-13804"></a>
<a id="trace-13823"></a>
<a id="trace-13825"></a>
- 74.25s–83.25s (×38), actor 5, squad 0 (trace 13011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.55s, trace 12765. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13024}.
<a id="trace-13103"></a>
- 75.20s–75.20s (×1), actor 10, squad 1 (trace 13103): support established: element delivered fire on threat area. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 76.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13162}.
<a id="trace-13104"></a>
- 75.20s–75.20s (×1), actor 10, squad 1 (trace 13104): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 76.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13162}.
<a id="trace-13105"></a>
- 75.20s–75.20s (×1), actor 10, squad 1 (trace 13105): Fixing. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 76.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13162}.
<a id="trace-13162"></a>
- 76.20s–76.20s (×1), actor 10, squad 1 (trace 13162): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 77.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5512362526403723, 'next_transition': 13353}.
<a id="trace-13163"></a>
- 76.20s–76.20s (×1), actor 10, squad 1 (trace 13163): received platoon directive. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 77.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5512362526403723, 'next_transition': 13353}.
<a id="trace-13353"></a>
- 77.20s–77.20s (×1), actor 10, squad 1 (trace 13353): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 79.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 4.095006237250713, 'next_transition': 13470}.
<a id="trace-13470"></a>
- 79.95s–79.95s (×1), actor 10, squad 1 (trace 13470): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 107.2, 'shots': 11, 'casualties': 0, 'mean_displacement': 3.9171261899563885, 'next_transition': 16376}.
<a id="trace-13471"></a>
- 79.95s–79.95s (×1), actor 10, squad 1 (trace 13471): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 13049. Next observer evidence: {'until': 107.2, 'shots': 11, 'casualties': 0, 'mean_displacement': 3.9171261899563885, 'next_transition': 16376}.
<a id="trace-1092"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (events line 1092): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 84.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.46439697555124365, 'next_transition': 13866}.
<a id="trace-13839"></a>
<a id="trace-13841"></a>
- 83.75s–83.75s (×2), actor 5, squad 0 (trace 13839): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 13626. Next observer evidence: {'until': 84.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.46439697555124365, 'next_transition': 13866}.
<a id="trace-13848"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 13848): renew committed intent (75 s lifetime). Knowledge: actor memory at 83.75s, trace 13848. Next observer evidence: {'until': 84.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.46439697555124365, 'next_transition': 13866}.
<a id="trace-13866"></a>
<a id="trace-13868"></a>
<a id="trace-13881"></a>
<a id="trace-13883"></a>
<a id="trace-13972"></a>
<a id="trace-13974"></a>
<a id="trace-13988"></a>
<a id="trace-13990"></a>
<a id="trace-14016"></a>
<a id="trace-14018"></a>
<a id="trace-14032"></a>
<a id="trace-14034"></a>
<a id="trace-14055"></a>
<a id="trace-14057"></a>
<a id="trace-14071"></a>
<a id="trace-14073"></a>
<a id="trace-14090"></a>
<a id="trace-14092"></a>
<a id="trace-14103"></a>
<a id="trace-14105"></a>
<a id="trace-14130"></a>
<a id="trace-14132"></a>
<a id="trace-14149"></a>
<a id="trace-14151"></a>
- 84.25s–89.75s (×24), actor 5, squad 0 (trace 13866): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 83.75s, trace 13848. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3095943268709992, 'next_transition': 13881}.
<a id="trace-14226"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 14226): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 14157. Next observer evidence: None.
<a id="trace-14227"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 14227): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 14157. Next observer evidence: None.
<a id="trace-14391"></a>
<a id="trace-14393"></a>
<a id="trace-14406"></a>
<a id="trace-14408"></a>
<a id="trace-14431"></a>
<a id="trace-14433"></a>
<a id="trace-14456"></a>
<a id="trace-14458"></a>
<a id="trace-14475"></a>
<a id="trace-14477"></a>
<a id="trace-14490"></a>
<a id="trace-14492"></a>
<a id="trace-14517"></a>
<a id="trace-14519"></a>
<a id="trace-14529"></a>
<a id="trace-14531"></a>
<a id="trace-14547"></a>
<a id="trace-14549"></a>
<a id="trace-14561"></a>
<a id="trace-14563"></a>
<a id="trace-14651"></a>
<a id="trace-14653"></a>
<a id="trace-14670"></a>
<a id="trace-14672"></a>
<a id="trace-14686"></a>
<a id="trace-14688"></a>
<a id="trace-14701"></a>
<a id="trace-14703"></a>
<a id="trace-14715"></a>
<a id="trace-14717"></a>
<a id="trace-14734"></a>
<a id="trace-14736"></a>
<a id="trace-14747"></a>
<a id="trace-14749"></a>
<a id="trace-14781"></a>
<a id="trace-14783"></a>
- 90.25s–99.25s (×36), actor 5, squad 0 (trace 14391): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14161. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14406}.
<a id="trace-14790"></a>
- 99.30s–99.30s (×1), actor 1, squad 0 (trace 14790): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 14570. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14802}.
<a id="trace-14802"></a>
<a id="trace-14804"></a>
<a id="trace-14890"></a>
<a id="trace-14892"></a>
- 99.75s–100.25s (×4), actor 5, squad 0 (trace 14802): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14574. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14890}.
<a id="trace-16042"></a>
- 100.30s–100.30s (×1), actor 1, squad 0 (trace 16042): radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 14812. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16069}.
<a id="trace-16043"></a>
- 100.30s–100.30s (×1), actor 1, squad 0 (trace 16043): radio assault committed: wait for delivered support evidence. Knowledge: actor memory at 100.00s, trace 14812. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16069}.
<a id="trace-16044"></a>
- 100.30s–100.30s (×1), actor 1, squad 0 (trace 16044): Assaulting. Knowledge: actor memory at 100.00s, trace 14812. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16069}.
<a id="trace-16069"></a>
<a id="trace-16071"></a>
<a id="trace-16097"></a>
<a id="trace-16099"></a>
<a id="trace-16119"></a>
<a id="trace-16121"></a>
<a id="trace-16147"></a>
<a id="trace-16149"></a>
<a id="trace-16160"></a>
<a id="trace-16162"></a>
<a id="trace-16178"></a>
<a id="trace-16180"></a>
<a id="trace-16191"></a>
<a id="trace-16193"></a>
- 100.75s–103.75s (×14), actor 5, squad 0 (trace 16069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14816. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16097}.
<a id="trace-1274"></a>
- 104.15s–104.15s (×1), actor 5, squad 0 (events line 1274): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16212}.
<a id="trace-16199"></a>
- 104.15s–104.15s (×1), actor 5, squad 0 (trace 16199): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446015 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.15s, trace 16199. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16212}.
<a id="trace-16200"></a>
- 104.15s–104.15s (×1), actor 5, squad 0 (trace 16200): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446015 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.15s, trace 16200. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16212}.
<a id="trace-16212"></a>
<a id="trace-16214"></a>
<a id="trace-16226"></a>
<a id="trace-16228"></a>
<a id="trace-16306"></a>
<a id="trace-16308"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16338"></a>
<a id="trace-16340"></a>
<a id="trace-16349"></a>
<a id="trace-16351"></a>
<a id="trace-16366"></a>
<a id="trace-16368"></a>
<a id="trace-16385"></a>
<a id="trace-16387"></a>
<a id="trace-16419"></a>
<a id="trace-16421"></a>
<a id="trace-16453"></a>
<a id="trace-16455"></a>
<a id="trace-16486"></a>
<a id="trace-16488"></a>
<a id="trace-16506"></a>
<a id="trace-16508"></a>
<a id="trace-16600"></a>
<a id="trace-16602"></a>
<a id="trace-16620"></a>
<a id="trace-16622"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16661"></a>
<a id="trace-16663"></a>
<a id="trace-16681"></a>
<a id="trace-16683"></a>
<a id="trace-16695"></a>
<a id="trace-16697"></a>
<a id="trace-16709"></a>
<a id="trace-16711"></a>
<a id="trace-16722"></a>
<a id="trace-16724"></a>
<a id="trace-16739"></a>
<a id="trace-16741"></a>
<a id="trace-16749"></a>
<a id="trace-16751"></a>
- 104.25s–114.75s (×44), actor 5, squad 0 (trace 16212): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 104.15s, trace 16200. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16226}.
<a id="trace-16376"></a>
- 107.35s–107.35s (×1), actor 10, squad 1 (trace 16376): NeedSupport. Knowledge: actor memory at 105.00s, trace 16243. Next observer evidence: {'until': 130.6, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.24875000000000114, 'next_transition': 1592}.
<a id="trace-1370"></a>
- 115.05s–115.05s (×1), actor 5, squad 0 (events line 1370): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16832}.
<a id="trace-16782"></a>
- 115.05s–115.05s (×1), actor 5, squad 0 (trace 16782): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.461651 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.05s, trace 16782. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16832}.
<a id="trace-16783"></a>
- 115.05s–115.05s (×1), actor 5, squad 0 (trace 16783): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.461651 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 115.05s, trace 16783. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16832}.
<a id="trace-16832"></a>
<a id="trace-16834"></a>
<a id="trace-16845"></a>
<a id="trace-16847"></a>
<a id="trace-16878"></a>
<a id="trace-16880"></a>
<a id="trace-16911"></a>
<a id="trace-16913"></a>
- 115.25s–116.75s (×8), actor 5, squad 0 (trace 16832): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.05s, trace 16783. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16845}.
<a id="trace-16939"></a>
- 117.20s–117.20s (×1), actor 1, squad 0 (trace 16939): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 16761. Next observer evidence: None.
<a id="trace-16940"></a>
- 117.20s–117.20s (×1), actor 1, squad 0 (trace 16940): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 16761. Next observer evidence: None.
<a id="trace-17102"></a>
<a id="trace-17104"></a>
<a id="trace-17118"></a>
<a id="trace-17120"></a>
<a id="trace-17145"></a>
<a id="trace-17147"></a>
<a id="trace-17183"></a>
<a id="trace-17185"></a>
<a id="trace-17212"></a>
<a id="trace-17214"></a>
<a id="trace-17247"></a>
<a id="trace-17249"></a>
<a id="trace-17363"></a>
<a id="trace-17365"></a>
<a id="trace-17401"></a>
<a id="trace-17403"></a>
<a id="trace-17438"></a>
<a id="trace-17440"></a>
<a id="trace-17461"></a>
<a id="trace-17463"></a>
<a id="trace-17518"></a>
<a id="trace-17520"></a>
<a id="trace-17537"></a>
<a id="trace-17539"></a>
<a id="trace-17560"></a>
<a id="trace-17562"></a>
<a id="trace-17589"></a>
<a id="trace-17591"></a>
<a id="trace-17620"></a>
<a id="trace-17622"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17721"></a>
<a id="trace-17723"></a>
<a id="trace-17740"></a>
<a id="trace-17742"></a>
<a id="trace-17772"></a>
<a id="trace-17774"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17850"></a>
<a id="trace-17852"></a>
<a id="trace-17875"></a>
<a id="trace-17877"></a>
<a id="trace-17908"></a>
<a id="trace-17910"></a>
<a id="trace-17948"></a>
<a id="trace-17950"></a>
- 117.25s–128.80s (×48), actor 5, squad 0 (trace 17102): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.05s, trace 16783. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17118}.
<a id="trace-17969"></a>
- 129.25s–129.25s (×1), actor 1, squad 0 (trace 17969): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 17654. Next observer evidence: None.
<a id="trace-17970"></a>
- 129.25s–129.25s (×1), actor 1, squad 0 (trace 17970): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 17654. Next observer evidence: None.
<a id="trace-18082"></a>
<a id="trace-18084"></a>
<a id="trace-18094"></a>
<a id="trace-18096"></a>
<a id="trace-18188"></a>
<a id="trace-18190"></a>
<a id="trace-18214"></a>
<a id="trace-18216"></a>
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18288"></a>
<a id="trace-18290"></a>
<a id="trace-18308"></a>
<a id="trace-18310"></a>
<a id="trace-18345"></a>
<a id="trace-18347"></a>
<a id="trace-18357"></a>
<a id="trace-18359"></a>
<a id="trace-18381"></a>
<a id="trace-18383"></a>
<a id="trace-18397"></a>
<a id="trace-18399"></a>
<a id="trace-18473"></a>
<a id="trace-18475"></a>
<a id="trace-18485"></a>
<a id="trace-18487"></a>
<a id="trace-18505"></a>
<a id="trace-18507"></a>
<a id="trace-18520"></a>
<a id="trace-18522"></a>
<a id="trace-18540"></a>
<a id="trace-18542"></a>
<a id="trace-18557"></a>
<a id="trace-18559"></a>
<a id="trace-18656"></a>
<a id="trace-18658"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18684"></a>
<a id="trace-18686"></a>
<a id="trace-18699"></a>
<a id="trace-18701"></a>
<a id="trace-18787"></a>
<a id="trace-18789"></a>
<a id="trace-18804"></a>
<a id="trace-18806"></a>
<a id="trace-18825"></a>
<a id="trace-18827"></a>
<a id="trace-18922"></a>
<a id="trace-18924"></a>
<a id="trace-18952"></a>
<a id="trace-18954"></a>
<a id="trace-18961"></a>
<a id="trace-18963"></a>
<a id="trace-18979"></a>
<a id="trace-18981"></a>
<a id="trace-18994"></a>
<a id="trace-18996"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19030"></a>
<a id="trace-19032"></a>
- 129.30s–144.80s (×64), actor 5, squad 0 (trace 18082): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17658. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.539980791135998, 'next_transition': 18094}.
<a id="trace-1592"></a>
- 130.65s–130.65s (×1), actor 5, squad 1 (events line 1592): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18209"></a>
- 130.65s–130.65s (×1), actor 5, squad 1 (trace 18209): renew committed intent (75 s lifetime). Knowledge: actor memory at 130.65s, trace 18209. Next observer evidence: {'until': 137.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 3.1652954096643886, 'next_transition': 18567}.
<a id="trace-18567"></a>
- 137.80s–137.80s (×1), actor 11, squad 1 (trace 18567): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 135.00s, trace 18413. Next observer evidence: None.
<a id="trace-18569"></a>
- 137.85s–137.85s (×1), actor 11, squad 1 (trace 18569): Reorganise: completed/failed drill. Knowledge: actor memory at 135.00s, trace 18413. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.024499812440862, 'next_transition': 18830}.
<a id="trace-18571"></a>
- 137.85s–137.85s (×1), actor 11, squad 1 (trace 18571): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 18413. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.024499812440862, 'next_transition': 18830}.
<a id="trace-18572"></a>
- 137.85s–137.85s (×1), actor 11, squad 1 (trace 18572): Reorganise complete: known contact. Knowledge: actor memory at 135.00s, trace 18413. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.024499812440862, 'next_transition': 18830}.
<a id="trace-18830"></a>
- 141.35s–141.35s (×1), actor 11, squad 1 (trace 18830): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 18719. Next observer evidence: {'until': 141.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360023159165214, 'next_transition': 1662}.
<a id="trace-18831"></a>
- 141.35s–141.35s (×1), actor 11, squad 1 (trace 18831): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 18719. Next observer evidence: {'until': 141.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360023159165214, 'next_transition': 1662}.
<a id="trace-1662"></a>
- 141.45s–141.45s (×1), actor 5, squad 1 (events line 1662): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288373536988403, 'next_transition': 18970}.
<a id="trace-18915"></a>
- 141.45s–141.45s (×1), actor 5, squad 1 (trace 18915): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.459551 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 141.45s, trace 18915. Next observer evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288373536988403, 'next_transition': 18970}.
<a id="trace-18916"></a>
- 141.45s–141.45s (×1), actor 5, squad 1 (trace 18916): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.459551 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 141.45s, trace 18916. Next observer evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288373536988403, 'next_transition': 18970}.
<a id="trace-18970"></a>
- 143.10s–143.10s (×1), actor 11, squad 1 (trace 18970): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 140.00s, trace 18719. Next observer evidence: {'until': 173, 'shots': 2, 'casualties': 1, 'mean_displacement': 9.134051349187828, 'next_transition': None}.
<a id="trace-19105"></a>
- 145.25s–145.25s (×1), actor 1, squad 0 (trace 19105): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 19039. Next observer evidence: None.
<a id="trace-19106"></a>
- 145.25s–145.25s (×1), actor 1, squad 0 (trace 19106): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 19039. Next observer evidence: None.
<a id="trace-19269"></a>
<a id="trace-19271"></a>
<a id="trace-19280"></a>
<a id="trace-19282"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19335"></a>
<a id="trace-19337"></a>
<a id="trace-19352"></a>
<a id="trace-19354"></a>
<a id="trace-19370"></a>
<a id="trace-19372"></a>
<a id="trace-19401"></a>
<a id="trace-19403"></a>
<a id="trace-19420"></a>
<a id="trace-19422"></a>
<a id="trace-19439"></a>
<a id="trace-19441"></a>
<a id="trace-19455"></a>
<a id="trace-19457"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19577"></a>
<a id="trace-19579"></a>
<a id="trace-19596"></a>
<a id="trace-19598"></a>
<a id="trace-19617"></a>
<a id="trace-19619"></a>
<a id="trace-19637"></a>
<a id="trace-19639"></a>
<a id="trace-19657"></a>
<a id="trace-19659"></a>
<a id="trace-19674"></a>
<a id="trace-19676"></a>
<a id="trace-19694"></a>
<a id="trace-19696"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
- 145.30s–154.80s (×40), actor 5, squad 0 (trace 19269): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 19043. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19280}.
<a id="trace-19739"></a>
- 155.05s–155.05s (×1), actor 1, squad 0 (trace 19739): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 19717. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08971729103243994, 'next_transition': 19891}.
<a id="trace-19740"></a>
- 155.05s–155.05s (×1), actor 1, squad 0 (trace 19740): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 19717. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08971729103243994, 'next_transition': 19891}.
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19907"></a>
<a id="trace-19909"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-19961"></a>
<a id="trace-19963"></a>
<a id="trace-19979"></a>
<a id="trace-19981"></a>
<a id="trace-20001"></a>
<a id="trace-20003"></a>
<a id="trace-20025"></a>
<a id="trace-20027"></a>
<a id="trace-20039"></a>
<a id="trace-20041"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20140"></a>
<a id="trace-20142"></a>
<a id="trace-20160"></a>
<a id="trace-20162"></a>
<a id="trace-20177"></a>
<a id="trace-20190"></a>
- 155.30s–161.80s (×26), actor 5, squad 0 (trace 19891): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 19721. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19907}.
<a id="trace-20200"></a>
- 162.05s–162.05s (×1), actor 1, squad 0 (trace 20200): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 20071. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1547832013974219, 'next_transition': 20215}.
<a id="trace-20215"></a>
<a id="trace-20232"></a>
<a id="trace-20256"></a>
<a id="trace-20272"></a>
<a id="trace-20293"></a>
<a id="trace-20319"></a>
<a id="trace-20393"></a>
<a id="trace-20407"></a>
<a id="trace-20422"></a>
<a id="trace-20431"></a>
<a id="trace-20443"></a>
<a id="trace-20449"></a>
<a id="trace-20467"></a>
<a id="trace-20480"></a>
<a id="trace-20494"></a>
<a id="trace-20502"></a>
<a id="trace-20576"></a>
<a id="trace-20585"></a>
<a id="trace-20599"></a>
<a id="trace-20607"></a>
<a id="trace-20622"></a>
<a id="trace-20637"></a>
<a id="trace-20664"></a>
<a id="trace-20671"></a>
<a id="trace-20684"></a>
<a id="trace-20691"></a>
- 162.30s–174.80s (×26), actor 5, squad 0 (trace 20215): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20075. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4644054106330073, 'next_transition': 20232}.
<a id="trace-1882"></a>
- 175.05s–175.05s (×1), actor 5, squad 0 (events line 1882): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20761}.
<a id="trace-20715"></a>
- 175.05s–175.05s (×1), actor 5, squad 0 (trace 20715): renew committed intent (75 s lifetime). Knowledge: actor memory at 175.05s, trace 20715. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20761}.
<a id="trace-20761"></a>
<a id="trace-20766"></a>
<a id="trace-20779"></a>
<a id="trace-20785"></a>
<a id="trace-20795"></a>
<a id="trace-20805"></a>
<a id="trace-20825"></a>
<a id="trace-20831"></a>
<a id="trace-20854"></a>
<a id="trace-20874"></a>
<a id="trace-20943"></a>
<a id="trace-20950"></a>
<a id="trace-20962"></a>
<a id="trace-20968"></a>
<a id="trace-20975"></a>
<a id="trace-20983"></a>
<a id="trace-20996"></a>
<a id="trace-21004"></a>
<a id="trace-21020"></a>
<a id="trace-21033"></a>
<a id="trace-21103"></a>
<a id="trace-21117"></a>
<a id="trace-21144"></a>
<a id="trace-21153"></a>
<a id="trace-21163"></a>
<a id="trace-21170"></a>
<a id="trace-21183"></a>
<a id="trace-21192"></a>
<a id="trace-21204"></a>
<a id="trace-21211"></a>
<a id="trace-21280"></a>
<a id="trace-21287"></a>
<a id="trace-21307"></a>
<a id="trace-21314"></a>
<a id="trace-21330"></a>
<a id="trace-21351"></a>
<a id="trace-21365"></a>
<a id="trace-21375"></a>
<a id="trace-21390"></a>
<a id="trace-21398"></a>
<a id="trace-21466"></a>
<a id="trace-21473"></a>
<a id="trace-21486"></a>
<a id="trace-21492"></a>
<a id="trace-21500"></a>
<a id="trace-21513"></a>
<a id="trace-21527"></a>
<a id="trace-21539"></a>
<a id="trace-21563"></a>
<a id="trace-21573"></a>
<a id="trace-21644"></a>
<a id="trace-21652"></a>
<a id="trace-21666"></a>
<a id="trace-21673"></a>
<a id="trace-21682"></a>
<a id="trace-21689"></a>
<a id="trace-21702"></a>
<a id="trace-21711"></a>
<a id="trace-21731"></a>
<a id="trace-21741"></a>
<a id="trace-21813"></a>
<a id="trace-21821"></a>
<a id="trace-21846"></a>
<a id="trace-21857"></a>
<a id="trace-21866"></a>
<a id="trace-21871"></a>
<a id="trace-21884"></a>
<a id="trace-21891"></a>
<a id="trace-21906"></a>
<a id="trace-21914"></a>
<a id="trace-21983"></a>
<a id="trace-21992"></a>
<a id="trace-22010"></a>
<a id="trace-22017"></a>
<a id="trace-22032"></a>
<a id="trace-22052"></a>
<a id="trace-22065"></a>
<a id="trace-22073"></a>
<a id="trace-22087"></a>
<a id="trace-22095"></a>
<a id="trace-22164"></a>
<a id="trace-22174"></a>
<a id="trace-22185"></a>
<a id="trace-22192"></a>
<a id="trace-22203"></a>
<a id="trace-22215"></a>
<a id="trace-22226"></a>
<a id="trace-22239"></a>
<a id="trace-22265"></a>
<a id="trace-22275"></a>
<a id="trace-22345"></a>
<a id="trace-22354"></a>
<a id="trace-22366"></a>
<a id="trace-22372"></a>
<a id="trace-22381"></a>
<a id="trace-22389"></a>
<a id="trace-22403"></a>
<a id="trace-22409"></a>
- 175.30s–223.80s (×98), actor 5, squad 0 (trace 20761): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.05s, trace 20715. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20766}.
<a id="trace-2083"></a>
- 223.90s–223.90s (×1), actor 5, squad 0 (events line 2083): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22418"></a>
- 223.90s–223.90s (×1), actor 5, squad 0 (trace 22418): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500070 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 223.90s, trace 22418. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22432}.
<a id="trace-22419"></a>
- 223.90s–223.90s (×1), actor 5, squad 0 (trace 22419): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500070 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 223.90s, trace 22419. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22432}.
<a id="trace-22432"></a>
<a id="trace-22438"></a>
<a id="trace-22511"></a>
<a id="trace-22532"></a>
<a id="trace-22546"></a>
- 224.30s–226.30s (×5), actor 5, squad 0 (trace 22432): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 223.90s, trace 22419. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22438}.
<a id="trace-22549"></a>
- 226.30s–226.30s (×1), actor 1, squad 0 (trace 22549): MoveTactically. Knowledge: actor memory at 225.00s, trace 22443. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22564}.
<a id="trace-22550"></a>
- 226.30s–226.30s (×1), actor 1, squad 0 (trace 22550): traveling overwatch. Knowledge: actor memory at 225.00s, trace 22443. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22564}.
<a id="trace-22551"></a>
- 226.30s–226.30s (×1), actor 1, squad 0 (trace 22551): received platoon directive. Knowledge: actor memory at 225.00s, trace 22443. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22564}.
<a id="trace-22564"></a>
<a id="trace-22580"></a>
- 226.80s–227.30s (×2), actor 5, squad 0 (trace 22564): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 22447. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22580}.
<a id="trace-22585"></a>
- 227.30s–227.30s (×1), actor 1, squad 0 (trace 22585): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 22443. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22706}.
<a id="trace-22706"></a>
<a id="trace-22726"></a>
<a id="trace-22774"></a>
<a id="trace-22783"></a>
<a id="trace-22865"></a>
<a id="trace-22879"></a>
<a id="trace-22894"></a>
<a id="trace-22906"></a>
<a id="trace-22936"></a>
<a id="trace-22953"></a>
<a id="trace-22966"></a>
<a id="trace-22975"></a>
<a id="trace-23000"></a>
<a id="trace-23008"></a>
<a id="trace-23079"></a>
<a id="trace-23091"></a>
- 227.80s–235.80s (×16), actor 5, squad 0 (trace 22706): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 22447. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22726}.
<a id="trace-2168"></a>
- 235.90s–235.90s (×1), actor 5, squad 0 (events line 2168): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23098"></a>
- 235.90s–235.90s (×1), actor 5, squad 0 (trace 23098): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.964330 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 235.90s, trace 23098. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3095996515155547, 'next_transition': 23112}.
<a id="trace-23099"></a>
- 235.90s–235.90s (×1), actor 5, squad 0 (trace 23099): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.964330 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 235.90s, trace 23099. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3095996515155547, 'next_transition': 23112}.
<a id="trace-23112"></a>
<a id="trace-23129"></a>
<a id="trace-23151"></a>
<a id="trace-23162"></a>
- 236.30s–237.80s (×4), actor 5, squad 0 (trace 23112): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.90s, trace 23099. Next observer evidence: {'until': 236.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5543760544343569, 'next_transition': 23129}.
<a id="trace-23173"></a>
- 238.20s–238.20s (×1), actor 1, squad 0 (trace 23173): received platoon directive. Knowledge: actor memory at 235.00s, trace 23014. Next observer evidence: None.
<a id="trace-23293"></a>
<a id="trace-23303"></a>
<a id="trace-23334"></a>
<a id="trace-23351"></a>
<a id="trace-23423"></a>
<a id="trace-23440"></a>
<a id="trace-23458"></a>
<a id="trace-23467"></a>
<a id="trace-23488"></a>
<a id="trace-23497"></a>
<a id="trace-23510"></a>
<a id="trace-23521"></a>
<a id="trace-23547"></a>
<a id="trace-23564"></a>
<a id="trace-23641"></a>
<a id="trace-23662"></a>
<a id="trace-23682"></a>
<a id="trace-23693"></a>
<a id="trace-23705"></a>
<a id="trace-23718"></a>
<a id="trace-23738"></a>
<a id="trace-23754"></a>
<a id="trace-23768"></a>
<a id="trace-23778"></a>
- 238.30s–249.80s (×24), actor 5, squad 0 (trace 23293): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.90s, trace 23099. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46439178712376467, 'next_transition': 23303}.
<a id="trace-2273"></a>
- 250.30s–250.30s (×1), actor 5, squad 0 (events line 2273): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19440066898033107, 'next_transition': 23872}.
<a id="trace-23856"></a>
- 250.30s–250.30s (×1), actor 5, squad 0 (trace 23856): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 23788. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19440066898033107, 'next_transition': 23872}.
<a id="trace-23861"></a>
- 250.30s–250.30s (×1), actor 5, squad 0 (trace 23861): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 250.30s, trace 23861. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19440066898033107, 'next_transition': 23872}.
<a id="trace-23862"></a>
- 250.30s–250.30s (×1), actor 5, squad 0 (trace 23862): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 250.30s, trace 23862. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19440066898033107, 'next_transition': 23872}.
<a id="trace-23872"></a>
<a id="trace-23887"></a>
<a id="trace-23900"></a>
- 250.80s–251.80s (×3), actor 5, squad 0 (trace 23872): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.30s, trace 23862. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12960044224697728, 'next_transition': 23887}.
<a id="trace-23925"></a>
- 252.20s–252.20s (×1), actor 1, squad 0 (trace 23925): traveling. Knowledge: actor memory at 250.00s, trace 23784. Next observer evidence: None.
<a id="trace-23926"></a>
- 252.20s–252.20s (×1), actor 1, squad 0 (trace 23926): received platoon directive. Knowledge: actor memory at 250.00s, trace 23784. Next observer evidence: None.
<a id="trace-24192"></a>
<a id="trace-24210"></a>
<a id="trace-24234"></a>
<a id="trace-24256"></a>
<a id="trace-24273"></a>
<a id="trace-24295"></a>
<a id="trace-24372"></a>
<a id="trace-24386"></a>
<a id="trace-24405"></a>
<a id="trace-24418"></a>
<a id="trace-24444"></a>
<a id="trace-24457"></a>
<a id="trace-24485"></a>
<a id="trace-24514"></a>
<a id="trace-24532"></a>
<a id="trace-24544"></a>
<a id="trace-24621"></a>
<a id="trace-24635"></a>
<a id="trace-24658"></a>
<a id="trace-24674"></a>
<a id="trace-24693"></a>
<a id="trace-24703"></a>
<a id="trace-24720"></a>
<a id="trace-24739"></a>
<a id="trace-24759"></a>
<a id="trace-24774"></a>
<a id="trace-24862"></a>
<a id="trace-24873"></a>
<a id="trace-24892"></a>
<a id="trace-24902"></a>
<a id="trace-24918"></a>
<a id="trace-24928"></a>
<a id="trace-24951"></a>
<a id="trace-24965"></a>
<a id="trace-24983"></a>
<a id="trace-24994"></a>
<a id="trace-25076"></a>
<a id="trace-25084"></a>
<a id="trace-25105"></a>
- 252.30s–271.30s (×39), actor 5, squad 0 (trace 24192): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.30s, trace 23862. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2844009703176938, 'next_transition': 24210}.
<a id="trace-25110"></a>
- 271.50s–271.50s (×1), actor 1, squad 0 (trace 25110): matching received arrivals: traveling stage complete. Knowledge: actor memory at 270.00s, trace 25000. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25376}.
<a id="trace-25376"></a>
<a id="trace-25409"></a>
<a id="trace-25429"></a>
<a id="trace-25449"></a>
<a id="trace-25464"></a>
<a id="trace-25485"></a>
<a id="trace-25498"></a>
<a id="trace-25571"></a>
<a id="trace-25584"></a>
<a id="trace-25606"></a>
<a id="trace-25619"></a>
<a id="trace-25644"></a>
<a id="trace-25658"></a>
<a id="trace-25684"></a>
<a id="trace-25709"></a>
<a id="trace-25725"></a>
<a id="trace-25738"></a>
<a id="trace-25823"></a>
<a id="trace-25831"></a>
<a id="trace-25853"></a>
<a id="trace-25863"></a>
<a id="trace-25877"></a>
<a id="trace-25889"></a>
<a id="trace-25902"></a>
<a id="trace-25917"></a>
- 271.80s–283.80s (×25), actor 5, squad 0 (trace 25376): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 25004. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25409}.
<a id="trace-25925"></a>
- 284.05s–284.05s (×1), actor 1, squad 0 (trace 25925): matching received arrivals: traveling stage complete. Knowledge: actor memory at 280.00s, trace 25743. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18774287737243617, 'next_transition': 26195}.
<a id="trace-26195"></a>
<a id="trace-26219"></a>
<a id="trace-26318"></a>
<a id="trace-26330"></a>
<a id="trace-26349"></a>
<a id="trace-26363"></a>
<a id="trace-26377"></a>
<a id="trace-26390"></a>
<a id="trace-26412"></a>
<a id="trace-26428"></a>
<a id="trace-26455"></a>
<a id="trace-26468"></a>
<a id="trace-26549"></a>
<a id="trace-26561"></a>
<a id="trace-26580"></a>
<a id="trace-26603"></a>
<a id="trace-26618"></a>
- 284.30s–292.30s (×17), actor 5, squad 0 (trace 26195): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 25747. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06750001188208564, 'next_transition': 26219}.
<a id="trace-26624"></a>
- 292.45s–292.45s (×1), actor 1, squad 0 (trace 26624): matching received arrivals: deployment leg complete. Knowledge: actor memory at 290.00s, trace 26475. Next observer evidence: {'until': 292.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04500000367346876, 'next_transition': 26628}.
<a id="trace-26628"></a>
<a id="trace-26646"></a>
<a id="trace-26654"></a>
<a id="trace-26688"></a>
<a id="trace-26758"></a>
<a id="trace-26768"></a>
- 292.80s–295.80s (×6), actor 5, squad 0 (trace 26628): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 26479. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000005476756897, 'next_transition': 26646}.
<a id="trace-2635"></a>
- 296.30s–296.30s (×1), actor 5, squad 0 (events line 2635): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26783"></a>
- 296.30s–296.30s (×1), actor 5, squad 0 (trace 26783): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 26698. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26799}.
<a id="trace-26788"></a>
- 296.30s–296.30s (×1), actor 5, squad 0 (trace 26788): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 296.30s, trace 26788. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26799}.
<a id="trace-26789"></a>
- 296.30s–296.30s (×1), actor 5, squad 0 (trace 26789): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 296.30s, trace 26789. Next observer evidence: {'until': 296.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26799}.
<a id="trace-26799"></a>
<a id="trace-26810"></a>
<a id="trace-26821"></a>
<a id="trace-26845"></a>
- 296.80s–298.30s (×4), actor 5, squad 0 (trace 26799): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 296.30s, trace 26789. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26810}.
<a id="trace-26851"></a>
- 298.55s–298.55s (×1), actor 1, squad 0 (trace 26851): Reorganise: completed/failed drill. Knowledge: actor memory at 295.00s, trace 26694. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27097}.
<a id="trace-26857"></a>
- 298.55s–298.55s (×1), actor 1, squad 0 (trace 26857): MoveTactically. Knowledge: actor memory at 295.00s, trace 26694. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27097}.
<a id="trace-26858"></a>
- 298.55s–298.55s (×1), actor 1, squad 0 (trace 26858): Reorganise complete. Knowledge: actor memory at 295.00s, trace 26694. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27097}.
<a id="trace-27097"></a>
<a id="trace-27118"></a>
<a id="trace-27135"></a>
<a id="trace-27210"></a>
<a id="trace-27226"></a>
<a id="trace-27250"></a>
<a id="trace-27262"></a>
<a id="trace-27280"></a>
<a id="trace-27294"></a>
<a id="trace-27318"></a>
<a id="trace-27332"></a>
<a id="trace-27355"></a>
<a id="trace-27373"></a>
<a id="trace-27465"></a>
<a id="trace-27477"></a>
<a id="trace-27496"></a>
<a id="trace-27507"></a>
<a id="trace-27524"></a>
<a id="trace-27534"></a>
<a id="trace-27554"></a>
<a id="trace-27571"></a>
<a id="trace-27589"></a>
<a id="trace-27602"></a>
<a id="trace-27688"></a>
<a id="trace-27696"></a>
<a id="trace-27715"></a>
<a id="trace-27741"></a>
<a id="trace-27758"></a>
- 298.80s–312.30s (×28), actor 5, squad 0 (trace 27097): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 296.30s, trace 26789. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27118}.
<a id="trace-27762"></a>
- 312.55s–312.55s (×1), actor 1, squad 0 (trace 27762): traveling overwatch. Knowledge: actor memory at 310.00s, trace 27614. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22499731789672986, 'next_transition': 28190}.
<a id="trace-27763"></a>
- 312.55s–312.55s (×1), actor 1, squad 0 (trace 27763): matching received arrivals: traveling stage complete. Knowledge: actor memory at 310.00s, trace 27614. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22499731789672986, 'next_transition': 28190}.
<a id="trace-28190"></a>
<a id="trace-28215"></a>
<a id="trace-28231"></a>
<a id="trace-28253"></a>
<a id="trace-28269"></a>
<a id="trace-28346"></a>
- 312.80s–315.30s (×6), actor 5, squad 0 (trace 28190): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 27618. Next observer evidence: {'until': 313.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5174921591254278, 'next_transition': 28215}.
<a id="trace-28356"></a>
- 315.65s–315.65s (×1), actor 1, squad 0 (trace 28356): ReactToContact: cover and return fire. Knowledge: actor memory at 315.00s, trace 28275. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40619044406078475, 'next_transition': 28807}.
<a id="trace-28357"></a>
- 315.65s–315.65s (×1), actor 1, squad 0 (trace 28357): bounding overwatch. Knowledge: actor memory at 315.00s, trace 28275. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40619044406078475, 'next_transition': 28807}.
<a id="trace-28358"></a>
- 315.65s–315.65s (×1), actor 1, squad 0 (trace 28358): new contact inside 100 m. Knowledge: actor memory at 315.00s, trace 28275. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40619044406078475, 'next_transition': 28807}.
<a id="trace-28807"></a>
<a id="trace-28838"></a>
<a id="trace-28873"></a>
<a id="trace-28912"></a>
<a id="trace-28928"></a>
<a id="trace-28959"></a>
<a id="trace-28981"></a>
<a id="trace-29003"></a>
<a id="trace-29015"></a>
- 315.80s–319.80s (×9), actor 5, squad 0 (trace 28807): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 28279. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8495517462059415, 'next_transition': 28838}.
<a id="trace-29040"></a>
- 320.00s–320.00s (×1), actor 1, squad 0 (trace 29040): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: None.
<a id="trace-2908"></a>
- 320.05s–320.05s (×1), actor 5, squad 0 (events line 2908): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29046"></a>
- 320.05s–320.05s (×1), actor 5, squad 0 (trace 29046): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=3.397724 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 320.05s, trace 29046. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100107292300332, 'next_transition': 29101}.
<a id="trace-29047"></a>
- 320.05s–320.05s (×1), actor 5, squad 0 (trace 29047): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=3.397724 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 320.05s, trace 29047. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100107292300332, 'next_transition': 29101}.
<a id="trace-29101"></a>
<a id="trace-29113"></a>
- 320.30s–320.80s (×2), actor 5, squad 0 (trace 29101): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.05s, trace 29047. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6037785014123941, 'next_transition': 29113}.
<a id="trace-29126"></a>
- 321.25s–321.25s (×1), actor 1, squad 0 (trace 29126): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: None.
<a id="trace-31962"></a>
- 321.25s–321.25s (×1), actor 1, squad 0 (trace 31962): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: None.
<a id="trace-31963"></a>
- 321.25s–321.25s (×1), actor 1, squad 0 (trace 31963): MoveTactically. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: None.
<a id="trace-31964"></a>
- 321.25s–321.25s (×1), actor 1, squad 0 (trace 31964): contact cover complete: assessment resumes closure. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: None.
<a id="trace-32078"></a>
<a id="trace-32089"></a>
- 321.30s–321.80s (×2), actor 5, squad 0 (trace 32078): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.05s, trace 29047. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7357396948720191, 'next_transition': 32089}.
<a id="trace-32099"></a>
- 322.00s–322.00s (×1), actor 1, squad 0 (trace 32099): ReactToContact: cover and return fire. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780013811379678, 'next_transition': 32534}.
<a id="trace-32100"></a>
- 322.00s–322.00s (×1), actor 1, squad 0 (trace 32100): new contact inside 100 m. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780013811379678, 'next_transition': 32534}.
<a id="trace-32534"></a>
<a id="trace-32556"></a>
- 322.30s–322.80s (×2), actor 5, squad 0 (trace 32534): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.05s, trace 29047. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5015181811463558, 'next_transition': 32556}.
<a id="trace-32570"></a>
- 323.15s–323.15s (×1), actor 1, squad 0 (trace 32570): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4045753183497173, 'next_transition': 32588}.
<a id="trace-32572"></a>
- 323.15s–323.15s (×1), actor 1, squad 0 (trace 32572): NeedSupport. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4045753183497173, 'next_transition': 32588}.
<a id="trace-32588"></a>
- 323.30s–323.30s (×1), actor 5, squad 0 (trace 32588): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.05s, trace 29047. Next observer evidence: {'until': 323.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040057005435955, 'next_transition': 32596}.
<a id="trace-32596"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 32596): Reorganise: completed/failed drill. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7626019172932128, 'next_transition': 32946}.
<a id="trace-32600"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 32600): MoveTactically. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7626019172932128, 'next_transition': 32946}.
<a id="trace-32601"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 32601): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 320.00s, trace 29023. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7626019172932128, 'next_transition': 32946}.
<a id="trace-32946"></a>
<a id="trace-32978"></a>
<a id="trace-33004"></a>
- 323.80s–324.80s (×3), actor 5, squad 0 (trace 32946): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.05s, trace 29047. Next observer evidence: {'until': 324.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.141545711873702, 'next_transition': 32978}.
<a id="trace-33029"></a>
- 325.10s–325.10s (×1), actor 5, squad 0 (trace 33029): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 325.10s, trace 33029. Next observer evidence: {'until': 325.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6008798096007724, 'next_transition': 33077}.
<a id="trace-33077"></a>
<a id="trace-33090"></a>
- 325.30s–325.80s (×2), actor 5, squad 0 (trace 33077): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.10s, trace 33029. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8348961773668868, 'next_transition': 33090}.
<a id="trace-2979"></a>
- 326.30s–326.30s (×1), actor 5, squad 0 (events line 2979): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33115"></a>
- 326.30s–326.30s (×1), actor 5, squad 0 (trace 33115): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.10s, trace 33029. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8848179833054601, 'next_transition': 33127}.
<a id="trace-33118"></a>
- 326.30s–326.30s (×1), actor 5, squad 0 (trace 33118): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.219119 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 326.30s, trace 33118. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8848179833054601, 'next_transition': 33127}.
<a id="trace-33119"></a>
- 326.30s–326.30s (×1), actor 5, squad 0 (trace 33119): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.219119 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 326.30s, trace 33119. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8848179833054601, 'next_transition': 33127}.
<a id="trace-33127"></a>
<a id="trace-33137"></a>
<a id="trace-33149"></a>
<a id="trace-33170"></a>
- 326.80s–328.30s (×4), actor 5, squad 0 (trace 33127): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 326.30s, trace 33119. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600020612675633, 'next_transition': 33137}.
<a id="trace-33176"></a>
- 328.35s–328.35s (×1), actor 1, squad 0 (trace 33176): received platoon directive. Knowledge: actor memory at 325.00s, trace 33013. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7846580630823041, 'next_transition': 33559}.
<a id="trace-33559"></a>
<a id="trace-33585"></a>
<a id="trace-33606"></a>
<a id="trace-33685"></a>
<a id="trace-33704"></a>
- 328.80s–330.80s (×5), actor 5, squad 0 (trace 33559): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 326.30s, trace 33119. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599913903470228, 'next_transition': 33585}.
<a id="trace-33716"></a>
- 331.05s–331.05s (×1), actor 1, squad 0 (trace 33716): ReactToContact: cover and return fire. Knowledge: actor memory at 330.00s, trace 33612. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33084727818373205, 'next_transition': 34125}.
<a id="trace-33717"></a>
- 331.05s–331.05s (×1), actor 1, squad 0 (trace 33717): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 33612. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33084727818373205, 'next_transition': 34125}.
<a id="trace-34125"></a>
<a id="trace-34138"></a>
- 331.30s–331.80s (×2), actor 5, squad 0 (trace 34125): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 33614. Next observer evidence: {'until': 331.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.80378198160925, 'next_transition': 34138}.
<a id="trace-34143"></a>
- 331.80s–331.80s (×1), actor 1, squad 0 (trace 34143): new contact inside 100 m. Knowledge: actor memory at 330.00s, trace 33612. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49521800790506115, 'next_transition': 34555}.
<a id="trace-34555"></a>
<a id="trace-34579"></a>
<a id="trace-34613"></a>
<a id="trace-34630"></a>
<a id="trace-34653"></a>
<a id="trace-34665"></a>
<a id="trace-34735"></a>
- 332.30s–335.30s (×7), actor 5, squad 0 (trace 34555): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 33614. Next observer evidence: {'until': 332.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4094981459385695, 'next_transition': 34579}.
<a id="trace-34743"></a>
- 335.65s–335.65s (×1), actor 1, squad 0 (trace 34743): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 335.00s, trace 34671. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600127519989632, 'next_transition': 35093}.
<a id="trace-34744"></a>
- 335.65s–335.65s (×1), actor 1, squad 0 (trace 34744): rearward bound: one stationary suppressing element. Knowledge: actor memory at 335.00s, trace 34671. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600127519989632, 'next_transition': 35093}.
<a id="trace-35093"></a>
<a id="trace-35108"></a>
<a id="trace-35140"></a>
<a id="trace-35180"></a>
<a id="trace-35212"></a>
<a id="trace-35244"></a>
<a id="trace-35272"></a>
<a id="trace-35306"></a>
<a id="trace-35349"></a>
<a id="trace-35446"></a>
<a id="trace-35469"></a>
<a id="trace-35504"></a>
<a id="trace-35524"></a>
<a id="trace-35550"></a>
<a id="trace-35570"></a>
<a id="trace-35581"></a>
<a id="trace-35592"></a>
<a id="trace-35609"></a>
<a id="trace-35625"></a>
<a id="trace-35695"></a>
<a id="trace-35704"></a>
<a id="trace-35715"></a>
<a id="trace-35724"></a>
<a id="trace-35745"></a>
- 335.80s–347.30s (×24), actor 5, squad 0 (trace 35093): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 34673. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09449946186090152, 'next_transition': 35108}.
<a id="trace-35748"></a>
- 347.35s–347.35s (×1), actor 1, squad 0 (trace 35748): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 345.00s, trace 35634. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5875988625466755, 'next_transition': 35758}.
<a id="trace-35749"></a>
- 347.35s–347.35s (×1), actor 1, squad 0 (trace 35749): NeedSupport. Knowledge: actor memory at 345.00s, trace 35634. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5875988625466755, 'next_transition': 35758}.
<a id="trace-35758"></a>
<a id="trace-35776"></a>
- 347.80s–348.30s (×2), actor 5, squad 0 (trace 35758): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 35636. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46640140079053677, 'next_transition': 35776}.
<a id="trace-35781"></a>
- 348.35s–348.35s (×1), actor 1, squad 0 (trace 35781): Reorganise: completed/failed drill. Knowledge: actor memory at 345.00s, trace 35634. Next observer evidence: {'until': 348.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900700224142574, 'next_transition': 36011}.
<a id="trace-35784"></a>
- 348.35s–348.35s (×1), actor 1, squad 0 (trace 35784): ReactToContact: cover and return fire. Knowledge: actor memory at 345.00s, trace 35634. Next observer evidence: {'until': 348.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900700224142574, 'next_transition': 36011}.
<a id="trace-35785"></a>
- 348.35s–348.35s (×1), actor 1, squad 0 (trace 35785): Reorganise complete: known contact. Knowledge: actor memory at 345.00s, trace 35634. Next observer evidence: {'until': 348.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900700224142574, 'next_transition': 36011}.
<a id="trace-36011"></a>
<a id="trace-36025"></a>
<a id="trace-36045"></a>
<a id="trace-36113"></a>
<a id="trace-36124"></a>
<a id="trace-36141"></a>
<a id="trace-36155"></a>
- 348.80s–351.80s (×7), actor 5, squad 0 (trace 36011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 35636. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2707790771552752, 'next_transition': 36025}.
<a id="trace-36160"></a>
- 351.80s–351.80s (×1), actor 1, squad 0 (trace 36160): NeedSupport. Knowledge: actor memory at 350.00s, trace 36055. Next observer evidence: {'until': 352.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7466987330144521, 'next_transition': 36173}.
<a id="trace-36173"></a>
- 352.20s–352.20s (×1), actor 1, squad 0 (trace 36173): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 350.00s, trace 36055. Next observer evidence: None.
<a id="trace-36174"></a>
- 352.20s–352.20s (×1), actor 1, squad 0 (trace 36174): rearward bound: one stationary suppressing element. Knowledge: actor memory at 350.00s, trace 36055. Next observer evidence: None.
<a id="trace-36362"></a>
- 352.30s–352.30s (×1), actor 5, squad 0 (trace 36362): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 36056. Next observer evidence: {'until': 352.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33829243368918865, 'next_transition': 3320}.
<a id="trace-3320"></a>
- 352.55s–352.55s (×1), actor 5, squad 0 (events line 3320): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36370"></a>
- 352.55s–352.55s (×1), actor 5, squad 0 (trace 36370): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.127264 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 352.55s, trace 36370. Next observer evidence: {'until': 352.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5203592256673146, 'next_transition': 36376}.
<a id="trace-36371"></a>
- 352.55s–352.55s (×1), actor 5, squad 0 (trace 36371): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.127264 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 352.55s, trace 36371. Next observer evidence: {'until': 352.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5203592256673146, 'next_transition': 36376}.
<a id="trace-36376"></a>
<a id="trace-36406"></a>
<a id="trace-36420"></a>
<a id="trace-36430"></a>
<a id="trace-36447"></a>
<a id="trace-36513"></a>
<a id="trace-36526"></a>
<a id="trace-36544"></a>
<a id="trace-36552"></a>
<a id="trace-36568"></a>
<a id="trace-36585"></a>
<a id="trace-36602"></a>
<a id="trace-36619"></a>
<a id="trace-36636"></a>
<a id="trace-36651"></a>
- 352.80s–359.80s (×15), actor 5, squad 0 (trace 36376): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 352.55s, trace 36371. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4558655730253828, 'next_transition': 36406}.

## Net delivery

387 matched order/radio deliveries; 504 explicitly recorded losses; 8 unmatched orders (not classified as lost).
Matched delay: mean 0.419s; maximum 2.300s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2871: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2877: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2880: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2881: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2882: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2883: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2884: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2885: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2886: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2887: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2888: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2889: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2890: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2891: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 6070: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 6071: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 6072: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 6073: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6246: estimate 16.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6247: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6248: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6251: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6252: estimate 16.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6254: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 6255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 6256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6257: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6258: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6259: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6260: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6261: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6262: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6263: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6264: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6265: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6266: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 6267: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 6268: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7500: estimate 16.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7501: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7502: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7503: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7505: estimate 16.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7506: estimate 16.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7508: estimate 16.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 7509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7511: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7512: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7513: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7514: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7515: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7516: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7517: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7518: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7519: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7520: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7521: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7522: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 8346: estimate 16.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8347: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8348: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8349: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8351: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8352: estimate 15.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8354: estimate 16.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 8355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 8356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8357: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8358: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8359: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8360: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8361: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8362: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8363: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8364: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8365: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8366: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 8367: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 8368: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 8646: estimate 15.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8647: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8648: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8649: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8651: estimate 16.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8652: estimate 16.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8654: estimate 16.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 8655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 8656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8657: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8658: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8659: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8660: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8661: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8662: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8663: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8664: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8665: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8666: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 8667: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 8668: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10985: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10986: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10987: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10989: estimate 16.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10990: estimate 16.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10992: estimate 16.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 10993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 10994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10995: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10996: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10997: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10998: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10999: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11000: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11001: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11002: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11003: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11004: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 11005: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 11006: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 11132: estimate 15.92; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 11133: estimate 15.92; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11246: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11247: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11248: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11250: estimate 15.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11251: estimate 15.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11253: estimate 16.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 11254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 11255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11256: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11257: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11258: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11259: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11260: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11261: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11262: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11263: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11264: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11265: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 11266: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 11267: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.05s leader 5, trace 11529: estimate 16.19; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 11572: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 11573: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 11574: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11576: estimate 16.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11577: estimate 16.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11579: estimate 16.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 11580: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 11581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11582: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11583: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11584: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11585: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11586: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11587: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11588: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11589: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11590: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11591: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 11592: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 11593: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11919: estimate 15.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 11920: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11921: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11923: estimate 15.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11924: estimate 16.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11926: estimate 16.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 11927: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 11928: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11929: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11930: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11931: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11932: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11933: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11934: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11935: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11936: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11937: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11938: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 11939: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 11940: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 61.05s leader 5, trace 12245: estimate 16.15; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 12421: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 12422: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 12423: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 12424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 12425: estimate 16.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 12426: estimate 16.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 12427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 12428: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 12429: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 12430: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 12431: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 12432: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 12433: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 12434: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 12435: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 12436: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 12437: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 12438: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 12439: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 12440: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 12441: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12678: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 12679: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12680: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12682: estimate 15.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12683: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 12685: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 12686: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12687: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12688: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12689: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12690: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12691: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12692: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12693: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12694: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12695: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12696: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 12697: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 12698: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.05s leader 5, trace 12700: estimate 15.80; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.55s leader 5, trace 12764: estimate 15.77; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.55s leader 5, trace 12765: estimate 15.77; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13042: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 13043: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 13044: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13046: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13047: estimate 15.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 13049: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 13050: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13051: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13052: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13053: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13054: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13055: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13056: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13057: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13058: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13059: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13060: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 13061: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 13062: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13622: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 13623: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 13624: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13626: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13627: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 13629: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 13630: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13631: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13632: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13633: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13634: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13635: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13636: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13637: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13638: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13639: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13640: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13641: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13642: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 13848: estimate 15.16; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13899: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 13900: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13901: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13903: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13904: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13906: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13907: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13908: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13909: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13910: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13911: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13912: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13913: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13914: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13915: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13916: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13917: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13918: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13919: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14157: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 14158: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 14159: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14161: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14162: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 14164: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 14165: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14166: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14167: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14168: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14169: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14170: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14171: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14172: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14173: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14174: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14175: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 14176: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 14177: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14570: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 14571: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14572: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14574: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14575: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 14577: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 14578: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14579: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14580: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14581: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14582: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14583: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14584: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14585: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14586: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14587: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14588: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14589: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14590: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14812: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 14813: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 14814: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14816: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14817: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 14819: estimate 15.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 14820: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14821: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14822: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14823: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14824: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14825: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14826: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14827: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14828: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14829: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14830: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 14831: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 14832: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.15s leader 5, trace 16199: estimate 15.69; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.15s leader 5, trace 16200: estimate 15.69; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 16236: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 16237: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 16238: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 16239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 16240: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 16241: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 16242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 16243: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 16244: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16245: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16246: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16247: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16248: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16249: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16250: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16251: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16252: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16253: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16254: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 16255: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 16256: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16522: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 16523: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 16524: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16526: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 16527: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 16528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 16529: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 16530: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16531: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16532: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16533: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16534: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16535: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16536: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16537: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16538: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16539: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16540: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 16541: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 16542: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16761: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 16762: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16763: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16765: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16766: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 16768: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 16769: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16770: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16771: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16772: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16773: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16774: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16775: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16776: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16777: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16778: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16779: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 16780: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 16781: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.05s leader 5, trace 16782: estimate 15.16; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.05s leader 5, trace 16783: estimate 15.16; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 17279: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 17280: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17281: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17283: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17284: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 17285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 17286: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 17287: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17288: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17289: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17290: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17291: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17292: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17293: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17294: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17295: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17296: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17297: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 17298: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 17299: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17654: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 17655: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 17656: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17658: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17659: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 17661: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 17662: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17663: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17664: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17665: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17666: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17667: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17668: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17669: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17670: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17671: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17672: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17673: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17674: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18103: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 18104: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18105: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18107: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18108: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 18110: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 18111: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18112: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18113: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18114: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18115: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18116: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18117: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18118: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18119: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18120: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18121: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18122: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18123: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.65s leader 5, trace 18209: estimate 15.42; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18406: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 18407: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18408: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18410: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18411: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 18413: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18414: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18415: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18416: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18417: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18418: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18419: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18420: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18421: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18422: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18423: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18424: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18425: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 18712: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 18713: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 18714: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18716: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18717: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 18718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 18719: estimate 14.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18720: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18721: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18722: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18723: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18724: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18725: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18726: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18727: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18728: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18729: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 18730: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 18731: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 141.45s leader 5, trace 18915: estimate 13.06; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 141.45s leader 5, trace 18916: estimate 13.06; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 19039: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 19040: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 19041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 19042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19043: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 19044: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 19045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 19046: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19047: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19048: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19049: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19050: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19051: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19052: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19053: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19054: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19055: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19056: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 19057: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 19058: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19466: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 19467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 19468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19470: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19471: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 19472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 19473: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19474: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19475: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19476: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19477: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19478: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19479: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19480: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19481: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19482: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19483: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 19484: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 19485: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 19717: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 19718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 19719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 19720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 19721: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 19722: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 19723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19724: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19725: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19726: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19727: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19728: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19729: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19730: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19731: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19732: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19733: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 19734: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 19735: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 20071: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 20072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 20073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 20074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20075: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20076: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 20077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20078: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20079: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20080: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20081: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20082: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20083: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20084: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20085: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20086: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20087: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 20088: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 20089: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 20325: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 20326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 20328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20329: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 20330: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 20331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20332: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20333: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20334: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20335: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20336: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20337: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20338: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20339: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20340: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20341: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 20342: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 20343: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 20508: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 20509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 20510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 20511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 20512: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 20513: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 20514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20515: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20516: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20517: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20518: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 20519: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 20520: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20521: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20522: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20523: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20524: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 20525: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 20526: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 20696: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 20697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 20698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 20699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 20700: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 20701: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 20702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 20703: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 20704: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 20705: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 20706: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 20707: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 20708: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 20709: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 20710: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 20711: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 20712: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 20713: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 20714: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.05s leader 5, trace 20715: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 20879: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 20880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 20881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 20882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 20883: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 20884: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 20885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20886: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20887: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20888: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20889: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 20890: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20891: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20892: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20893: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20894: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20895: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 20896: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 20897: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 21038: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 21039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 21040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 21041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 21042: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 21043: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 21044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21045: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21046: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21047: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21048: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21049: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21050: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21051: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21052: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21053: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21054: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 21055: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 21056: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 21216: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 21217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 21218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 21219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21220: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 21221: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 21222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 21223: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21224: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21225: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21226: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21227: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21228: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21229: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21230: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21231: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21232: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 21233: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 21234: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 21403: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 21404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 21405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 21406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21407: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21408: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 21409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21410: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21411: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21412: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21413: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21414: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21415: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21416: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21417: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21418: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21419: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 21420: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 21421: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 21580: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 21581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 21582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 21583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21584: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21585: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 21586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21587: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21588: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21589: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21590: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21591: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21592: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21593: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21594: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21595: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21596: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 21597: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 21598: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 21744: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 21745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 21746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 21747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 21748: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21749: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 21750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 21751: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21752: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 21753: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21754: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21755: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21756: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21757: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21758: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21759: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21760: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 21761: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 21762: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 21919: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 21920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 21921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 21922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 21923: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 21924: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 21925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 21926: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 21927: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 21928: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 21929: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 21930: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 21931: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 21932: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 21933: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 21934: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 21935: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 21936: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 21937: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 22100: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 22101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 22102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 22103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22104: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22105: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 22106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22107: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22108: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22109: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22110: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22111: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22112: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22113: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22114: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22115: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22116: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 22117: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22118: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 22280: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 22281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 22282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 22283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 22284: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 22285: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 22286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 22287: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22288: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 22289: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22290: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22291: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22292: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22293: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22294: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22295: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 22296: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 22297: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 22298: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 223.90s leader 5, trace 22418: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 223.90s leader 5, trace 22419: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 22443: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 22444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 22445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 22446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22447: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22448: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22450: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22451: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22452: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22453: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22454: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22455: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22456: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22457: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22458: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22459: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 22460: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 22461: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 22792: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 22793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 22794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 22795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 22796: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22797: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 22798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 22799: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22800: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 22801: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22802: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22803: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22804: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22805: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22806: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22807: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 22808: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 22809: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 22810: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 23014: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 23015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 23016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 23017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23018: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23019: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 23020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23021: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23022: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23023: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23024: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23025: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23026: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23027: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23028: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23029: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23030: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 23031: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 23032: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.90s leader 5, trace 23098: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.90s leader 5, trace 23099: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 23354: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 23355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 23356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 23357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23358: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 23359: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 23360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23361: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23362: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23363: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23364: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23365: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23366: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23367: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23368: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23369: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23370: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 23371: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23372: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 23576: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 23577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 23578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 23579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23580: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23581: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 23582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23583: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23584: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23585: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23586: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23587: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23588: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23589: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23590: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23591: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23592: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 23593: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 23594: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 23784: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 23785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 23786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 23787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23788: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23789: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 23790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23791: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23792: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23793: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23794: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23795: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23796: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23797: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23798: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23799: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23800: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 23801: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 23802: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.30s leader 5, trace 23861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.30s leader 5, trace 23862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 24304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 24305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 24306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 24320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 24321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 24553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 24554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 24555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 24556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 24558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 24559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 24570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 24571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 24786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 24787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 24788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 24789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 24791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 24792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 24803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 24804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 25000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 25001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 25002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 25003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 25004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 25005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 25006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 25007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 25017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 25018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 25502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 25503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 25504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 25505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 25506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 25507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 25508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 25509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 25511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 25513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 25518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 25519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 25520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 25743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 25744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 25745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 25746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 25748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 25749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 25750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 25760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 25761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 26231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 26232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 26233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 26234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 26236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 26237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 26238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 26248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 26249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 26475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 26476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 26477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 26478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 26479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 26480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 26481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 26482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 26483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 26484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 26486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 26488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 26492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 26493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 26694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 26695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 26696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 26697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 26698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 26699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 26700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 26701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 26702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 26703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 26705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 26707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 26711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 26712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.30s leader 5, trace 26788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.30s leader 5, trace 26789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 27140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 27141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 27142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 27143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 27145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 27146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 27147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 27157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 27158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 27396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 27397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 27398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 27399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 27401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 27402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 27403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 27407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 27413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 27414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 27614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 27615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 27616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 27617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 27619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 27620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 27621: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 27625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 27631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 27632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 28275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 28276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 28277: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 28278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 28279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 28280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 28281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 28282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 28283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 28284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 28285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 28286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 28287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 28288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 28289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 28290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 28291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 28292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 29023: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 29024: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 29025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29026: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 29027: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 29028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29029: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29030: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29031: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29032: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29033: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29034: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29035: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29036: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29037: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 29038: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29039: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.05s leader 5, trace 29046: estimate 1.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.05s leader 5, trace 29047: estimate 1.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 33013: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 33014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 33015: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 33016: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 33017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 33018: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 33019: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 33020: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 33021: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 33022: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 33023: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 33024: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 33025: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 33026: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 33027: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 33028: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.10s leader 5, trace 33029: estimate 13.74; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 326.30s leader 5, trace 33118: estimate 13.69; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 326.30s leader 5, trace 33119: estimate 13.69; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 33612: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 33613: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 33614: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 33615: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 33616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 33617: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 33618: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 33619: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 33620: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 33621: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 33622: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 33623: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 33624: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 33625: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 33626: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 33627: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 34671: estimate 15.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 34672: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 34673: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 34674: estimate 16.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 34675: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34676: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34677: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34678: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 34679: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34680: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 34681: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 34682: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 34683: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 34684: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 34685: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 34686: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 35361: estimate 15.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 35362: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 35363: estimate 16.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 35364: estimate 16.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 35365: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 35366: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 35367: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 35368: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 35369: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 35370: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 35371: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 35372: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 35373: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 35374: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 35375: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 35634: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 35635: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 35636: estimate 15.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 35637: estimate 16.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 35638: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 35639: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 35640: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 35641: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 35642: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 35643: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 35644: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 35645: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 35646: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 35647: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 35648: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 36055: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 36056: estimate 15.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 36057: estimate 16.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 36058: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 36059: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 36060: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 36061: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 36062: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 36063: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 36064: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 36065: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 36066: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 36067: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 36068: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.55s leader 5, trace 36370: estimate 15.72; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.55s leader 5, trace 36371: estimate 15.72; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 36453: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 36454: estimate 16.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 36455: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 36456: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 36457: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 36458: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 36459: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 36460: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 36461: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 36462: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 36463: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 36464: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 36465: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 36466: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 36658: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 36659: estimate 16.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 36660: estimate 15.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 36661: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 36662: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 36663: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 36664: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 36665: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 36666: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 36667: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 36668: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 36669: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 36670: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 36671: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Cole incapacitated
- 1: Dane incapacitated
- 1: Ellis killed in action
- 1: Voss killed in action
- 1: Soren incapacitated
- 1: Ash killed in action
- 1: Renn incapacitated
- 1: Tern killed in action

## Outcome attribution

- 115.05s, evidence 1370: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16832}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.05s, evidence 16782: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.461651 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16832}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.05s, evidence 16783: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.461651 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16832}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 141.45s, evidence 1662: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288373536988403, 'next_transition': 18970}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 141.45s, evidence 18915: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.459551 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288373536988403, 'next_transition': 18970}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 141.45s, evidence 18916: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.459551 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6288373536988403, 'next_transition': 18970}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.05s, evidence 1882: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20761}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
