# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/19/109/good-azure/battle-109-1789674078367922700`

## Battle summary

**Ember** · 360 s · 138 shots.

### Turning points

- 18.5s, squad 4: contact (events line 241). First recorded contact.
- 35.7s, squad 1: help call ([trace 7717](#trace-7717)). No completion observed before termination.
- 38.0s, squad 0: help answer ([trace 8023](#trace-8023)). 62.2s, squad 0: prepared a base of fire.
- 41.9s, squad 1: withdrawal ([trace 10010](#trace-10010)). 68.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 61.2s, squad 0: help call ([trace 10928](#trace-10928)). 68.2s, squad 1: answered a neighbour with support by fire.
- 68.2s, squad 1: help answer ([trace 12868](#trace-12868)). 70.4s, squad 1: answered a neighbour with support by fire.
- 69.2s, squad 0: help call ([trace 12897](#trace-12897)). 70.4s, squad 1: answered a neighbour with support by fire.
- 70.4s, squad 1: help answer ([trace 13020](#trace-13020)). 74.2s, squad 1: advanced tactically.
- 90.2s, squad 1: withdrawal ([trace 14760](#trace-14760)). No completion observed before termination.
- 90.8s, squad 0: withdrawal ([trace 14827](#trace-14827)). 135.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 5 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 4 further drill types; withdrew; 22 shots, 3/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 9 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 72 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 35 shots, 1/4 lost.

### Decisions and attribution

At 35.9s, squad 1 chose took cover and returned fire ([trace 7741](#trace-7741)), followed by 1 shots and 0 own casualties; estimate 3.1 against 0 distinct squad-reported contacts; At 41.9s, squad 1 chose broke contact ([trace 10010](#trace-10010)), followed by 1 shots and 0 own casualties; estimate 13.9 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 815](#trace-815)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450140208720392, 'next_transition': 834}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 817](#trace-817)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 988}.

### Communication

282 matched deliveries (mean 0.40s, max 1.50s); 488 explicit drops; 8 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.50s, squad 4, contact, evidence events line 241: First recorded contact; .
- 35.65s, squad 1, help call, evidence 7717: NeedSupport; No completion observed before termination.
- 38.05s, squad 0, help answer, evidence 8023: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 62.2s, squad 0: prepared a base of fire.
- 41.85s, squad 1, withdrawal, evidence 10010: BreakContact: believed ratio at least two without superiority; 68.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 61.15s, squad 0, help call, evidence 10928: NeedSupport; 68.2s, squad 1: answered a neighbour with support by fire.
- 68.25s, squad 1, help answer, evidence 12868: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 70.4s, squad 1: answered a neighbour with support by fire.
- 69.20s, squad 0, help call, evidence 12897: NeedSupport; 70.4s, squad 1: answered a neighbour with support by fire.
- 70.40s, squad 1, help answer, evidence 13020: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 74.2s, squad 1: advanced tactically.
- 90.25s, squad 1, withdrawal, evidence 14760: Withdraw to received rally; No completion observed before termination.
- 90.85s, squad 0, withdrawal, evidence 14827: Withdraw to received rally; 135.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 113.25s, squad 0, help call, evidence 16251: NeedSupport; No completion observed before termination.
- 192.05s, squad 0, withdrawal, evidence 21181: BreakContact: believed ratio at least two without superiority; 197.9s, squad 0: took cover and returned fire.
- 197.00s, squad 0, help call, evidence 21568: NeedSupport; No completion observed before termination.
- 201.90s, squad 0, withdrawal, evidence 21833: BreakContact: believed ratio at least two without superiority; 222.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 238.20s, squad 0, withdrawal, evidence 23318: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703255186194516, 'next_transition': 686}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703255186194516, 'next_transition': 686}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703255186194516, 'next_transition': 686}.
<a id="trace-319"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 319): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54439192948231, 'next_transition': 105}.
<a id="trace-320"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 320): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54439192948231, 'next_transition': 105}.
<a id="trace-321"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 321): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54439192948231, 'next_transition': 105}.
<a id="trace-686"></a>
<a id="trace-688"></a>
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-755"></a>
<a id="trace-757"></a>
<a id="trace-779"></a>
<a id="trace-781"></a>
<a id="trace-805"></a>
<a id="trace-807"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600042882246703, 'next_transition': 713}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450140208720392, 'next_transition': 834}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 988}.
<a id="trace-815"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 815): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 815. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450140208720392, 'next_transition': 834}.
<a id="trace-816"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 816): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 816. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450140208720392, 'next_transition': 834}.
<a id="trace-817"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 817): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 817. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 988}.
<a id="trace-818"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 818): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 818. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 988}.
<a id="trace-834"></a>
<a id="trace-836"></a>
<a id="trace-867"></a>
<a id="trace-869"></a>
<a id="trace-948"></a>
<a id="trace-950"></a>
<a id="trace-977"></a>
<a id="trace-979"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 818. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449869181843236, 'next_transition': 867}.
<a id="trace-981"></a>
<a id="trace-1129"></a>
<a id="trace-1183"></a>
<a id="trace-1185"></a>
<a id="trace-1226"></a>
<a id="trace-1228"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1431"></a>
<a id="trace-1433"></a>
<a id="trace-1524"></a>
<a id="trace-1526"></a>
<a id="trace-1557"></a>
<a id="trace-1559"></a>
<a id="trace-1579"></a>
<a id="trace-1581"></a>
<a id="trace-1607"></a>
<a id="trace-1609"></a>
<a id="trace-1643"></a>
<a id="trace-1645"></a>
<a id="trace-1671"></a>
<a id="trace-1673"></a>
<a id="trace-1690"></a>
<a id="trace-1692"></a>
<a id="trace-1890"></a>
<a id="trace-1892"></a>
<a id="trace-2138"></a>
<a id="trace-2140"></a>
<a id="trace-2165"></a>
<a id="trace-2167"></a>
<a id="trace-2193"></a>
<a id="trace-2195"></a>
<a id="trace-2236"></a>
<a id="trace-2238"></a>
<a id="trace-2262"></a>
<a id="trace-2264"></a>
<a id="trace-2320"></a>
<a id="trace-2322"></a>
<a id="trace-2344"></a>
<a id="trace-2346"></a>
<a id="trace-2388"></a>
<a id="trace-2390"></a>
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-2817"></a>
<a id="trace-2819"></a>
<a id="trace-2862"></a>
<a id="trace-2864"></a>
<a id="trace-2900"></a>
<a id="trace-2902"></a>
<a id="trace-3280"></a>
<a id="trace-3282"></a>
<a id="trace-3689"></a>
<a id="trace-3691"></a>
<a id="trace-3735"></a>
<a id="trace-3737"></a>
<a id="trace-3786"></a>
<a id="trace-3788"></a>
<a id="trace-4281"></a>
<a id="trace-4283"></a>
<a id="trace-4394"></a>
<a id="trace-4396"></a>
<a id="trace-4827"></a>
<a id="trace-4829"></a>
<a id="trace-4856"></a>
<a id="trace-4858"></a>
<a id="trace-5218"></a>
<a id="trace-5220"></a>
<a id="trace-5265"></a>
<a id="trace-5267"></a>
<a id="trace-5312"></a>
<a id="trace-5314"></a>
<a id="trace-5370"></a>
<a id="trace-5372"></a>
<a id="trace-6922"></a>
<a id="trace-6924"></a>
<a id="trace-6961"></a>
<a id="trace-6963"></a>
<a id="trace-7062"></a>
<a id="trace-7064"></a>
<a id="trace-7094"></a>
<a id="trace-7096"></a>
<a id="trace-7125"></a>
<a id="trace-7127"></a>
<a id="trace-7147"></a>
<a id="trace-7149"></a>
<a id="trace-7169"></a>
<a id="trace-7171"></a>
<a id="trace-7190"></a>
<a id="trace-7192"></a>
<a id="trace-7531"></a>
<a id="trace-7533"></a>
<a id="trace-7561"></a>
<a id="trace-7563"></a>
<a id="trace-7587"></a>
<a id="trace-7589"></a>
<a id="trace-7622"></a>
<a id="trace-7624"></a>
<a id="trace-7704"></a>
<a id="trace-7706"></a>
<a id="trace-7732"></a>
<a id="trace-7734"></a>
<a id="trace-7981"></a>
<a id="trace-7983"></a>
<a id="trace-8002"></a>
<a id="trace-8004"></a>
<a id="trace-8020"></a>
<a id="trace-8022"></a>
<a id="trace-9778"></a>
<a id="trace-9780"></a>
<a id="trace-9798"></a>
<a id="trace-9800"></a>
<a id="trace-9823"></a>
<a id="trace-9825"></a>
<a id="trace-9851"></a>
<a id="trace-9853"></a>
<a id="trace-9936"></a>
<a id="trace-9938"></a>
<a id="trace-9964"></a>
<a id="trace-9966"></a>
<a id="trace-9986"></a>
<a id="trace-9988"></a>
<a id="trace-10005"></a>
<a id="trace-10007"></a>
<a id="trace-10099"></a>
<a id="trace-10101"></a>
<a id="trace-10115"></a>
<a id="trace-10117"></a>
<a id="trace-10131"></a>
<a id="trace-10133"></a>
<a id="trace-10155"></a>
<a id="trace-10157"></a>
<a id="trace-10177"></a>
<a id="trace-10179"></a>
<a id="trace-10253"></a>
<a id="trace-10255"></a>
<a id="trace-10267"></a>
<a id="trace-10269"></a>
<a id="trace-10292"></a>
<a id="trace-10294"></a>
<a id="trace-10307"></a>
<a id="trace-10309"></a>
<a id="trace-10326"></a>
<a id="trace-10328"></a>
<a id="trace-10341"></a>
<a id="trace-10343"></a>
<a id="trace-10362"></a>
<a id="trace-10364"></a>
<a id="trace-10478"></a>
<a id="trace-10480"></a>
<a id="trace-10492"></a>
<a id="trace-10494"></a>
<a id="trace-10510"></a>
<a id="trace-10512"></a>
<a id="trace-10526"></a>
<a id="trace-10528"></a>
<a id="trace-10546"></a>
<a id="trace-10548"></a>
<a id="trace-10582"></a>
<a id="trace-10584"></a>
<a id="trace-10595"></a>
<a id="trace-10597"></a>
<a id="trace-10628"></a>
<a id="trace-10630"></a>
<a id="trace-10706"></a>
<a id="trace-10708"></a>
<a id="trace-10717"></a>
<a id="trace-10719"></a>
<a id="trace-10732"></a>
<a id="trace-10734"></a>
<a id="trace-10755"></a>
<a id="trace-10757"></a>
<a id="trace-10765"></a>
<a id="trace-10767"></a>
<a id="trace-10786"></a>
<a id="trace-10788"></a>
<a id="trace-10797"></a>
<a id="trace-10799"></a>
<a id="trace-10812"></a>
<a id="trace-10814"></a>
<a id="trace-10828"></a>
<a id="trace-10830"></a>
<a id="trace-10906"></a>
<a id="trace-10908"></a>
<a id="trace-10946"></a>
<a id="trace-10948"></a>
<a id="trace-10957"></a>
<a id="trace-10959"></a>
<a id="trace-11792"></a>
<a id="trace-11794"></a>
<a id="trace-11809"></a>
<a id="trace-11811"></a>
<a id="trace-11829"></a>
<a id="trace-11831"></a>
<a id="trace-11842"></a>
<a id="trace-11844"></a>
<a id="trace-11956"></a>
<a id="trace-11958"></a>
<a id="trace-11968"></a>
<a id="trace-11970"></a>
<a id="trace-11989"></a>
<a id="trace-11991"></a>
<a id="trace-11999"></a>
<a id="trace-12001"></a>
<a id="trace-12027"></a>
<a id="trace-12029"></a>
<a id="trace-12885"></a>
<a id="trace-12887"></a>
<a id="trace-12912"></a>
<a id="trace-12914"></a>
<a id="trace-12939"></a>
<a id="trace-12941"></a>
<a id="trace-13049"></a>
<a id="trace-13051"></a>
<a id="trace-13058"></a>
<a id="trace-13060"></a>
<a id="trace-13078"></a>
<a id="trace-13080"></a>
<a id="trace-13090"></a>
<a id="trace-13092"></a>
<a id="trace-13116"></a>
<a id="trace-13118"></a>
<a id="trace-13127"></a>
<a id="trace-13129"></a>
<a id="trace-13152"></a>
<a id="trace-13154"></a>
<a id="trace-13172"></a>
<a id="trace-13174"></a>
<a id="trace-13245"></a>
<a id="trace-13247"></a>
<a id="trace-13254"></a>
<a id="trace-13256"></a>
<a id="trace-13272"></a>
<a id="trace-13274"></a>
<a id="trace-13314"></a>
<a id="trace-13316"></a>
<a id="trace-13333"></a>
<a id="trace-13335"></a>
<a id="trace-13359"></a>
<a id="trace-13361"></a>
<a id="trace-13373"></a>
<a id="trace-13375"></a>
<a id="trace-13448"></a>
<a id="trace-13450"></a>
<a id="trace-13457"></a>
<a id="trace-13459"></a>
<a id="trace-13506"></a>
<a id="trace-13508"></a>
<a id="trace-14340"></a>
<a id="trace-14342"></a>
<a id="trace-14356"></a>
<a id="trace-14358"></a>
<a id="trace-14375"></a>
<a id="trace-14377"></a>
<a id="trace-14385"></a>
<a id="trace-14387"></a>
<a id="trace-14504"></a>
<a id="trace-14506"></a>
<a id="trace-14536"></a>
<a id="trace-14538"></a>
<a id="trace-14566"></a>
<a id="trace-14568"></a>
<a id="trace-14587"></a>
<a id="trace-14589"></a>
<a id="trace-14616"></a>
<a id="trace-14618"></a>
<a id="trace-14638"></a>
<a id="trace-14640"></a>
<a id="trace-14665"></a>
<a id="trace-14667"></a>
<a id="trace-14678"></a>
<a id="trace-14680"></a>
<a id="trace-14757"></a>
<a id="trace-14759"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15182"></a>
<a id="trace-15184"></a>
<a id="trace-15212"></a>
<a id="trace-15214"></a>
<a id="trace-15243"></a>
<a id="trace-15245"></a>
<a id="trace-15263"></a>
<a id="trace-15265"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15394"></a>
<a id="trace-15396"></a>
<a id="trace-15419"></a>
<a id="trace-15421"></a>
<a id="trace-15433"></a>
<a id="trace-15435"></a>
<a id="trace-15454"></a>
<a id="trace-15456"></a>
<a id="trace-15484"></a>
<a id="trace-15486"></a>
<a id="trace-15583"></a>
<a id="trace-15585"></a>
<a id="trace-15598"></a>
<a id="trace-15600"></a>
<a id="trace-15625"></a>
<a id="trace-15627"></a>
<a id="trace-15653"></a>
<a id="trace-15655"></a>
<a id="trace-15677"></a>
<a id="trace-15679"></a>
<a id="trace-15695"></a>
<a id="trace-15697"></a>
<a id="trace-15710"></a>
<a id="trace-15712"></a>
<a id="trace-15719"></a>
<a id="trace-15721"></a>
<a id="trace-15798"></a>
<a id="trace-15800"></a>
<a id="trace-15811"></a>
<a id="trace-15813"></a>
<a id="trace-15919"></a>
<a id="trace-15921"></a>
<a id="trace-15943"></a>
<a id="trace-15945"></a>
<a id="trace-15965"></a>
<a id="trace-15967"></a>
<a id="trace-16001"></a>
<a id="trace-16003"></a>
<a id="trace-16027"></a>
<a id="trace-16029"></a>
<a id="trace-16038"></a>
<a id="trace-16040"></a>
<a id="trace-16058"></a>
<a id="trace-16060"></a>
<a id="trace-16071"></a>
<a id="trace-16073"></a>
<a id="trace-16154"></a>
<a id="trace-16156"></a>
<a id="trace-16164"></a>
<a id="trace-16166"></a>
<a id="trace-16181"></a>
<a id="trace-16183"></a>
<a id="trace-16191"></a>
<a id="trace-16193"></a>
<a id="trace-16211"></a>
<a id="trace-16213"></a>
<a id="trace-16224"></a>
<a id="trace-16226"></a>
<a id="trace-16248"></a>
<a id="trace-16250"></a>
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16293"></a>
<a id="trace-16295"></a>
<a id="trace-16393"></a>
<a id="trace-16395"></a>
<a id="trace-16404"></a>
<a id="trace-16406"></a>
<a id="trace-16588"></a>
<a id="trace-16590"></a>
<a id="trace-16599"></a>
<a id="trace-16601"></a>
<a id="trace-16632"></a>
<a id="trace-16634"></a>
<a id="trace-16688"></a>
<a id="trace-16690"></a>
<a id="trace-16702"></a>
<a id="trace-16704"></a>
<a id="trace-16722"></a>
<a id="trace-16724"></a>
<a id="trace-16798"></a>
<a id="trace-16800"></a>
<a id="trace-16859"></a>
<a id="trace-16861"></a>
<a id="trace-16915"></a>
<a id="trace-16917"></a>
<a id="trace-16928"></a>
<a id="trace-16930"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-17086"></a>
<a id="trace-17088"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
<a id="trace-17122"></a>
<a id="trace-17124"></a>
<a id="trace-17155"></a>
<a id="trace-17157"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17206"></a>
<a id="trace-17208"></a>
<a id="trace-17346"></a>
<a id="trace-17348"></a>
<a id="trace-17358"></a>
<a id="trace-17360"></a>
<a id="trace-17378"></a>
<a id="trace-17380"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17421"></a>
<a id="trace-17423"></a>
<a id="trace-17450"></a>
<a id="trace-17452"></a>
<a id="trace-17470"></a>
<a id="trace-17472"></a>
<a id="trace-17481"></a>
<a id="trace-17483"></a>
<a id="trace-17507"></a>
<a id="trace-17509"></a>
<a id="trace-17530"></a>
<a id="trace-17532"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
<a id="trace-17623"></a>
<a id="trace-17625"></a>
<a id="trace-17641"></a>
<a id="trace-17643"></a>
<a id="trace-17675"></a>
<a id="trace-17677"></a>
<a id="trace-17699"></a>
<a id="trace-17701"></a>
<a id="trace-17740"></a>
<a id="trace-17742"></a>
<a id="trace-17750"></a>
<a id="trace-17752"></a>
<a id="trace-17766"></a>
<a id="trace-17768"></a>
<a id="trace-17782"></a>
<a id="trace-17784"></a>
<a id="trace-17859"></a>
<a id="trace-17861"></a>
<a id="trace-17882"></a>
<a id="trace-17884"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17935"></a>
<a id="trace-17937"></a>
<a id="trace-17944"></a>
<a id="trace-17946"></a>
<a id="trace-17957"></a>
<a id="trace-17959"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-17990"></a>
<a id="trace-17992"></a>
<a id="trace-18000"></a>
<a id="trace-18002"></a>
<a id="trace-18097"></a>
<a id="trace-18099"></a>
<a id="trace-18116"></a>
<a id="trace-18118"></a>
<a id="trace-18148"></a>
<a id="trace-18150"></a>
<a id="trace-18230"></a>
<a id="trace-18232"></a>
<a id="trace-18248"></a>
<a id="trace-18250"></a>
<a id="trace-18270"></a>
<a id="trace-18272"></a>
<a id="trace-18295"></a>
<a id="trace-18297"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18391"></a>
<a id="trace-18393"></a>
<a id="trace-18403"></a>
<a id="trace-18405"></a>
<a id="trace-18426"></a>
<a id="trace-18428"></a>
<a id="trace-18467"></a>
<a id="trace-18469"></a>
<a id="trace-18501"></a>
<a id="trace-18503"></a>
<a id="trace-18529"></a>
<a id="trace-18531"></a>
<a id="trace-18617"></a>
<a id="trace-18619"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18853"></a>
<a id="trace-18855"></a>
<a id="trace-18866"></a>
<a id="trace-18868"></a>
<a id="trace-18891"></a>
<a id="trace-18893"></a>
<a id="trace-18906"></a>
<a id="trace-18908"></a>
<a id="trace-19026"></a>
<a id="trace-19028"></a>
<a id="trace-19045"></a>
<a id="trace-19047"></a>
<a id="trace-19241"></a>
<a id="trace-19243"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19319"></a>
<a id="trace-19321"></a>
<a id="trace-19350"></a>
<a id="trace-19352"></a>
<a id="trace-19371"></a>
<a id="trace-19373"></a>
<a id="trace-19448"></a>
<a id="trace-19450"></a>
<a id="trace-19486"></a>
<a id="trace-19488"></a>
<a id="trace-19522"></a>
<a id="trace-19524"></a>
<a id="trace-19545"></a>
<a id="trace-19547"></a>
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19604"></a>
<a id="trace-19606"></a>
<a id="trace-19616"></a>
<a id="trace-19618"></a>
<a id="trace-19696"></a>
<a id="trace-19698"></a>
<a id="trace-19728"></a>
<a id="trace-19730"></a>
<a id="trace-19741"></a>
<a id="trace-19743"></a>
<a id="trace-19788"></a>
<a id="trace-19790"></a>
<a id="trace-19811"></a>
<a id="trace-19813"></a>
<a id="trace-19831"></a>
<a id="trace-19833"></a>
<a id="trace-19860"></a>
<a id="trace-19862"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19950"></a>
<a id="trace-19952"></a>
<a id="trace-19959"></a>
<a id="trace-19961"></a>
<a id="trace-20018"></a>
<a id="trace-20020"></a>
<a id="trace-20033"></a>
<a id="trace-20035"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20117"></a>
<a id="trace-20119"></a>
<a id="trace-20139"></a>
<a id="trace-20141"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20259"></a>
<a id="trace-20261"></a>
<a id="trace-20277"></a>
<a id="trace-20279"></a>
<a id="trace-20286"></a>
<a id="trace-20288"></a>
<a id="trace-20313"></a>
<a id="trace-20315"></a>
<a id="trace-20325"></a>
<a id="trace-20327"></a>
<a id="trace-20340"></a>
<a id="trace-20342"></a>
<a id="trace-20348"></a>
<a id="trace-20350"></a>
<a id="trace-20369"></a>
<a id="trace-20371"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20628"></a>
<a id="trace-20630"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20797"></a>
<a id="trace-20799"></a>
<a id="trace-20821"></a>
<a id="trace-20823"></a>
<a id="trace-20954"></a>
<a id="trace-20956"></a>
<a id="trace-21012"></a>
<a id="trace-21014"></a>
<a id="trace-21092"></a>
<a id="trace-21094"></a>
<a id="trace-21154"></a>
<a id="trace-21156"></a>
<a id="trace-21357"></a>
<a id="trace-21359"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21426"></a>
<a id="trace-21428"></a>
<a id="trace-21441"></a>
<a id="trace-21443"></a>
<a id="trace-21522"></a>
<a id="trace-21524"></a>
<a id="trace-21586"></a>
<a id="trace-21588"></a>
<a id="trace-21630"></a>
<a id="trace-21632"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21673"></a>
<a id="trace-21675"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21777"></a>
<a id="trace-21779"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21822"></a>
<a id="trace-21824"></a>
<a id="trace-21852"></a>
<a id="trace-21854"></a>
<a id="trace-21895"></a>
<a id="trace-21897"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22035"></a>
<a id="trace-22037"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22076"></a>
<a id="trace-22078"></a>
<a id="trace-22091"></a>
<a id="trace-22093"></a>
<a id="trace-22099"></a>
<a id="trace-22101"></a>
<a id="trace-22113"></a>
<a id="trace-22115"></a>
<a id="trace-22126"></a>
<a id="trace-22128"></a>
<a id="trace-22198"></a>
<a id="trace-22200"></a>
<a id="trace-22221"></a>
<a id="trace-22223"></a>
<a id="trace-22231"></a>
<a id="trace-22233"></a>
<a id="trace-22248"></a>
<a id="trace-22250"></a>
<a id="trace-22261"></a>
<a id="trace-22263"></a>
<a id="trace-22283"></a>
<a id="trace-22285"></a>
<a id="trace-22295"></a>
<a id="trace-22297"></a>
<a id="trace-22311"></a>
<a id="trace-22313"></a>
<a id="trace-22326"></a>
<a id="trace-22328"></a>
<a id="trace-22404"></a>
<a id="trace-22406"></a>
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22428"></a>
<a id="trace-22430"></a>
<a id="trace-22437"></a>
<a id="trace-22439"></a>
<a id="trace-22450"></a>
<a id="trace-22452"></a>
<a id="trace-22460"></a>
<a id="trace-22462"></a>
<a id="trace-22476"></a>
<a id="trace-22478"></a>
<a id="trace-22486"></a>
<a id="trace-22488"></a>
<a id="trace-22595"></a>
<a id="trace-22597"></a>
<a id="trace-22606"></a>
<a id="trace-22608"></a>
<a id="trace-22636"></a>
<a id="trace-22638"></a>
<a id="trace-22650"></a>
<a id="trace-22652"></a>
<a id="trace-22662"></a>
<a id="trace-22664"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22695"></a>
<a id="trace-22697"></a>
<a id="trace-22732"></a>
<a id="trace-22734"></a>
<a id="trace-22756"></a>
<a id="trace-22758"></a>
<a id="trace-22844"></a>
<a id="trace-22846"></a>
<a id="trace-22886"></a>
<a id="trace-22888"></a>
<a id="trace-22900"></a>
<a id="trace-22902"></a>
<a id="trace-22917"></a>
<a id="trace-22919"></a>
<a id="trace-22930"></a>
<a id="trace-22932"></a>
<a id="trace-22980"></a>
<a id="trace-22982"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23065"></a>
<a id="trace-23067"></a>
<a id="trace-23078"></a>
<a id="trace-23080"></a>
<a id="trace-23089"></a>
<a id="trace-23091"></a>
<a id="trace-23104"></a>
<a id="trace-23106"></a>
<a id="trace-23115"></a>
<a id="trace-23117"></a>
<a id="trace-23138"></a>
<a id="trace-23140"></a>
<a id="trace-23150"></a>
<a id="trace-23152"></a>
<a id="trace-23166"></a>
<a id="trace-23168"></a>
<a id="trace-23185"></a>
<a id="trace-23187"></a>
<a id="trace-23280"></a>
<a id="trace-23282"></a>
<a id="trace-23291"></a>
<a id="trace-23293"></a>
<a id="trace-23305"></a>
<a id="trace-23307"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23334"></a>
<a id="trace-23336"></a>
<a id="trace-23348"></a>
<a id="trace-23350"></a>
<a id="trace-23364"></a>
<a id="trace-23366"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23477"></a>
<a id="trace-23479"></a>
<a id="trace-23503"></a>
<a id="trace-23505"></a>
<a id="trace-23522"></a>
<a id="trace-23524"></a>
<a id="trace-23531"></a>
<a id="trace-23533"></a>
<a id="trace-23556"></a>
<a id="trace-23558"></a>
<a id="trace-23569"></a>
<a id="trace-23571"></a>
<a id="trace-23579"></a>
<a id="trace-23581"></a>
<a id="trace-23593"></a>
<a id="trace-23595"></a>
<a id="trace-23607"></a>
<a id="trace-23609"></a>
<a id="trace-23691"></a>
<a id="trace-23693"></a>
<a id="trace-23715"></a>
<a id="trace-23717"></a>
<a id="trace-23728"></a>
<a id="trace-23730"></a>
<a id="trace-23747"></a>
<a id="trace-23749"></a>
<a id="trace-23757"></a>
<a id="trace-23759"></a>
<a id="trace-23775"></a>
<a id="trace-23777"></a>
<a id="trace-23784"></a>
<a id="trace-23786"></a>
<a id="trace-23797"></a>
<a id="trace-23799"></a>
<a id="trace-23810"></a>
<a id="trace-23812"></a>
<a id="trace-23880"></a>
<a id="trace-23882"></a>
<a id="trace-23893"></a>
<a id="trace-23895"></a>
<a id="trace-23910"></a>
<a id="trace-23912"></a>
<a id="trace-23922"></a>
<a id="trace-23924"></a>
<a id="trace-23948"></a>
<a id="trace-23950"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
<a id="trace-24013"></a>
<a id="trace-24015"></a>
<a id="trace-24083"></a>
<a id="trace-24085"></a>
<a id="trace-24095"></a>
<a id="trace-24097"></a>
<a id="trace-24117"></a>
<a id="trace-24119"></a>
<a id="trace-24130"></a>
<a id="trace-24132"></a>
<a id="trace-24154"></a>
<a id="trace-24156"></a>
<a id="trace-24165"></a>
<a id="trace-24167"></a>
<a id="trace-24184"></a>
<a id="trace-24186"></a>
<a id="trace-24200"></a>
<a id="trace-24202"></a>
<a id="trace-24275"></a>
<a id="trace-24277"></a>
<a id="trace-24311"></a>
<a id="trace-24313"></a>
<a id="trace-24320"></a>
<a id="trace-24322"></a>
<a id="trace-24335"></a>
<a id="trace-24337"></a>
<a id="trace-24344"></a>
<a id="trace-24346"></a>
<a id="trace-24356"></a>
<a id="trace-24358"></a>
<a id="trace-24366"></a>
<a id="trace-24368"></a>
<a id="trace-24391"></a>
<a id="trace-24393"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24499"></a>
<a id="trace-24501"></a>
<a id="trace-24512"></a>
<a id="trace-24514"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24557"></a>
<a id="trace-24559"></a>
<a id="trace-24567"></a>
<a id="trace-24569"></a>
<a id="trace-24668"></a>
<a id="trace-24670"></a>
<a id="trace-24694"></a>
<a id="trace-24696"></a>
<a id="trace-24710"></a>
<a id="trace-24712"></a>
<a id="trace-24729"></a>
<a id="trace-24731"></a>
<a id="trace-24757"></a>
<a id="trace-24759"></a>
<a id="trace-24776"></a>
<a id="trace-24778"></a>
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-24890"></a>
<a id="trace-24892"></a>
<a id="trace-24904"></a>
<a id="trace-24906"></a>
<a id="trace-24914"></a>
<a id="trace-24916"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-24940"></a>
<a id="trace-24942"></a>
<a id="trace-25051"></a>
<a id="trace-25053"></a>
<a id="trace-25064"></a>
<a id="trace-25066"></a>
<a id="trace-25083"></a>
<a id="trace-25085"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25116"></a>
<a id="trace-25118"></a>
<a id="trace-25136"></a>
<a id="trace-25138"></a>
<a id="trace-25150"></a>
<a id="trace-25152"></a>
<a id="trace-25164"></a>
<a id="trace-25166"></a>
<a id="trace-25250"></a>
<a id="trace-25252"></a>
<a id="trace-25271"></a>
<a id="trace-25273"></a>
<a id="trace-25282"></a>
<a id="trace-25284"></a>
<a id="trace-25300"></a>
<a id="trace-25302"></a>
<a id="trace-25330"></a>
<a id="trace-25332"></a>
<a id="trace-25340"></a>
<a id="trace-25342"></a>
<a id="trace-25353"></a>
<a id="trace-25355"></a>
<a id="trace-25433"></a>
<a id="trace-25435"></a>
<a id="trace-25445"></a>
<a id="trace-25447"></a>
<a id="trace-25461"></a>
<a id="trace-25463"></a>
<a id="trace-25470"></a>
<a id="trace-25472"></a>
<a id="trace-25500"></a>
<a id="trace-25502"></a>
<a id="trace-25517"></a>
<a id="trace-25519"></a>
<a id="trace-25531"></a>
<a id="trace-25533"></a>
<a id="trace-25553"></a>
<a id="trace-25555"></a>
<a id="trace-25568"></a>
<a id="trace-25570"></a>
<a id="trace-25640"></a>
<a id="trace-25642"></a>
<a id="trace-25652"></a>
<a id="trace-25654"></a>
<a id="trace-25666"></a>
<a id="trace-25668"></a>
<a id="trace-25675"></a>
<a id="trace-25677"></a>
<a id="trace-25690"></a>
<a id="trace-25692"></a>
<a id="trace-25700"></a>
<a id="trace-25702"></a>
<a id="trace-25714"></a>
<a id="trace-25716"></a>
<a id="trace-25724"></a>
<a id="trace-25726"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25763"></a>
<a id="trace-25765"></a>
<a id="trace-25836"></a>
<a id="trace-25838"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25870"></a>
<a id="trace-25872"></a>
<a id="trace-25880"></a>
<a id="trace-25882"></a>
<a id="trace-25895"></a>
<a id="trace-25897"></a>
<a id="trace-25907"></a>
<a id="trace-25909"></a>
<a id="trace-25926"></a>
<a id="trace-25928"></a>
<a id="trace-25953"></a>
<a id="trace-25955"></a>
<a id="trace-26042"></a>
<a id="trace-26044"></a>
<a id="trace-26059"></a>
<a id="trace-26061"></a>
<a id="trace-26089"></a>
<a id="trace-26091"></a>
<a id="trace-26099"></a>
<a id="trace-26101"></a>
<a id="trace-26112"></a>
<a id="trace-26114"></a>
<a id="trace-26140"></a>
<a id="trace-26142"></a>
<a id="trace-26152"></a>
<a id="trace-26154"></a>
<a id="trace-26248"></a>
<a id="trace-26250"></a>
<a id="trace-26277"></a>
<a id="trace-26279"></a>
<a id="trace-26290"></a>
<a id="trace-26292"></a>
<a id="trace-26305"></a>
<a id="trace-26307"></a>
<a id="trace-26314"></a>
<a id="trace-26316"></a>
<a id="trace-26345"></a>
<a id="trace-26347"></a>
<a id="trace-26417"></a>
<a id="trace-26419"></a>
<a id="trace-26433"></a>
<a id="trace-26435"></a>
<a id="trace-26448"></a>
<a id="trace-26450"></a>
<a id="trace-26470"></a>
<a id="trace-26472"></a>
<a id="trace-26481"></a>
<a id="trace-26483"></a>
<a id="trace-26493"></a>
<a id="trace-26495"></a>
<a id="trace-26507"></a>
<a id="trace-26509"></a>
<a id="trace-26538"></a>
<a id="trace-26540"></a>
<a id="trace-26612"></a>
<a id="trace-26614"></a>
<a id="trace-26630"></a>
<a id="trace-26632"></a>
<a id="trace-26644"></a>
<a id="trace-26646"></a>
<a id="trace-26674"></a>
<a id="trace-26676"></a>
<a id="trace-26690"></a>
<a id="trace-26692"></a>
<a id="trace-26701"></a>
<a id="trace-26703"></a>
<a id="trace-26727"></a>
<a id="trace-26729"></a>
<a id="trace-26803"></a>
<a id="trace-26805"></a>
<a id="trace-26846"></a>
<a id="trace-26848"></a>
<a id="trace-26865"></a>
<a id="trace-26867"></a>
<a id="trace-26884"></a>
<a id="trace-26886"></a>
<a id="trace-26895"></a>
<a id="trace-26897"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26921"></a>
<a id="trace-26923"></a>
<a id="trace-27009"></a>
<a id="trace-27011"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
<a id="trace-27037"></a>
<a id="trace-27039"></a>
<a id="trace-27058"></a>
<a id="trace-27060"></a>
<a id="trace-27071"></a>
<a id="trace-27073"></a>
<a id="trace-27086"></a>
<a id="trace-27088"></a>
<a id="trace-27112"></a>
<a id="trace-27114"></a>
<a id="trace-27124"></a>
<a id="trace-27126"></a>
<a id="trace-27218"></a>
<a id="trace-27220"></a>
<a id="trace-27232"></a>
<a id="trace-27234"></a>
<a id="trace-27247"></a>
<a id="trace-27249"></a>
<a id="trace-27259"></a>
<a id="trace-27261"></a>
<a id="trace-27273"></a>
<a id="trace-27275"></a>
<a id="trace-27290"></a>
<a id="trace-27292"></a>
<a id="trace-27307"></a>
<a id="trace-27309"></a>
<a id="trace-27396"></a>
<a id="trace-27398"></a>
<a id="trace-27408"></a>
<a id="trace-27410"></a>
<a id="trace-27422"></a>
<a id="trace-27424"></a>
<a id="trace-27452"></a>
<a id="trace-27454"></a>
<a id="trace-27468"></a>
<a id="trace-27470"></a>
<a id="trace-27479"></a>
<a id="trace-27481"></a>
<a id="trace-27495"></a>
<a id="trace-27497"></a>
<a id="trace-27509"></a>
<a id="trace-27511"></a>
<a id="trace-27589"></a>
<a id="trace-27591"></a>
<a id="trace-27605"></a>
<a id="trace-27607"></a>
<a id="trace-27621"></a>
<a id="trace-27623"></a>
<a id="trace-27630"></a>
<a id="trace-27632"></a>
<a id="trace-27657"></a>
<a id="trace-27659"></a>
<a id="trace-27677"></a>
<a id="trace-27679"></a>
<a id="trace-27700"></a>
<a id="trace-27702"></a>
<a id="trace-27773"></a>
<a id="trace-27775"></a>
<a id="trace-27789"></a>
<a id="trace-27791"></a>
<a id="trace-27804"></a>
<a id="trace-27806"></a>
<a id="trace-27819"></a>
<a id="trace-27821"></a>
<a id="trace-27842"></a>
<a id="trace-27844"></a>
<a id="trace-27852"></a>
<a id="trace-27854"></a>
<a id="trace-27867"></a>
<a id="trace-27869"></a>
<a id="trace-27882"></a>
<a id="trace-27884"></a>
<a id="trace-27895"></a>
<a id="trace-27897"></a>
<a id="trace-27907"></a>
<a id="trace-27909"></a>
<a id="trace-27977"></a>
<a id="trace-27979"></a>
<a id="trace-27989"></a>
<a id="trace-27991"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28029"></a>
<a id="trace-28031"></a>
<a id="trace-28042"></a>
<a id="trace-28044"></a>
<a id="trace-28062"></a>
<a id="trace-28064"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
<a id="trace-28095"></a>
<a id="trace-28097"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 981): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 892. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624898124449623, 'next_transition': 1129}.
<a id="trace-988"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 988): traveling overwatch. Knowledge: actor memory at 5.00s, trace 883. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.152134051431477, 'next_transition': 1969}.
<a id="trace-989"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 989): received platoon directive. Knowledge: actor memory at 5.00s, trace 883. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.152134051431477, 'next_transition': 1969}.
<a id="trace-1050"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1050): traveling overwatch. Knowledge: actor memory at 5.00s, trace 875. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300052021334607, 'next_transition': 1125}.
<a id="trace-1051"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1051): received platoon directive. Knowledge: actor memory at 5.00s, trace 875. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300052021334607, 'next_transition': 1125}.
<a id="trace-1125"></a>
<a id="trace-1127"></a>
<a id="trace-1179"></a>
<a id="trace-1181"></a>
<a id="trace-1222"></a>
<a id="trace-1224"></a>
<a id="trace-1270"></a>
<a id="trace-1272"></a>
<a id="trace-1308"></a>
<a id="trace-1310"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
<a id="trace-1397"></a>
<a id="trace-1399"></a>
<a id="trace-1427"></a>
<a id="trace-1429"></a>
<a id="trace-1520"></a>
<a id="trace-1522"></a>
<a id="trace-1553"></a>
<a id="trace-1555"></a>
<a id="trace-1575"></a>
<a id="trace-1577"></a>
<a id="trace-1603"></a>
<a id="trace-1605"></a>
<a id="trace-1627"></a>
<a id="trace-1629"></a>
<a id="trace-1639"></a>
<a id="trace-1641"></a>
<a id="trace-1667"></a>
<a id="trace-1669"></a>
<a id="trace-1686"></a>
<a id="trace-1688"></a>
<a id="trace-1713"></a>
<a id="trace-1715"></a>
- 6.20s–14.20s (×34), actor 5, squad 0 (trace 1125): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 880. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.212611166229505, 'next_transition': 1179}.
<a id="trace-1726"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 1726): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1439. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1886}.
<a id="trace-1886"></a>
<a id="trace-1888"></a>
<a id="trace-2134"></a>
<a id="trace-2136"></a>
<a id="trace-2161"></a>
<a id="trace-2163"></a>
<a id="trace-2189"></a>
<a id="trace-2191"></a>
<a id="trace-2232"></a>
<a id="trace-2234"></a>
<a id="trace-2258"></a>
<a id="trace-2260"></a>
<a id="trace-2290"></a>
<a id="trace-2292"></a>
<a id="trace-2316"></a>
<a id="trace-2318"></a>
<a id="trace-2340"></a>
<a id="trace-2342"></a>
<a id="trace-2364"></a>
<a id="trace-2366"></a>
<a id="trace-2384"></a>
<a id="trace-2386"></a>
- 14.70s–19.75s (×22), actor 5, squad 0 (trace 1886): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1444. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01968699800947317, 'next_transition': 2134}.
<a id="trace-1969"></a>
- 15.10s–15.10s (×1), actor 8, squad 1 (trace 1969): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1907. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.272941261224352, 'next_transition': 337}.
<a id="trace-2391"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2391): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1899. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.708738367444324, 'next_transition': 2769}.
<a id="trace-2392"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2392): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1899. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.708738367444324, 'next_transition': 2769}.
<a id="trace-2393"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2393): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1899. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.708738367444324, 'next_transition': 2769}.
<a id="trace-2769"></a>
<a id="trace-2771"></a>
<a id="trace-2813"></a>
<a id="trace-2815"></a>
<a id="trace-2858"></a>
<a id="trace-2860"></a>
<a id="trace-2896"></a>
<a id="trace-2898"></a>
- 20.25s–21.75s (×8), actor 5, squad 0 (trace 2769): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2688. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.354498973546508, 'next_transition': 2813}.
<a id="trace-2903"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2903): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2683. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3593442246062626, 'next_transition': 3276}.
<a id="trace-3276"></a>
<a id="trace-3278"></a>
- 22.25s–22.25s (×2), actor 5, squad 0 (trace 3276): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2688. Next observer evidence: None.
<a id="trace-3283"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 3283): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2683. Next observer evidence: None.
<a id="trace-336"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (events line 336): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-337"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (events line 337): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3637"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 3637): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 3637. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41750942165586835, 'next_transition': 3685}.
<a id="trace-3638"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 3638): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 3638. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41750942165586835, 'next_transition': 3685}.
<a id="trace-3639"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (trace 3639): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 3639. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7799809758668443, 'next_transition': 3798}.
<a id="trace-3640"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (trace 3640): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 3640. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7799809758668443, 'next_transition': 3798}.
<a id="trace-3685"></a>
<a id="trace-3687"></a>
<a id="trace-3731"></a>
<a id="trace-3733"></a>
<a id="trace-3782"></a>
<a id="trace-3784"></a>
<a id="trace-4207"></a>
<a id="trace-4209"></a>
<a id="trace-4277"></a>
<a id="trace-4279"></a>
<a id="trace-4390"></a>
<a id="trace-4392"></a>
<a id="trace-4823"></a>
<a id="trace-4825"></a>
<a id="trace-4852"></a>
<a id="trace-4854"></a>
- 22.75s–26.25s (×16), actor 5, squad 0 (trace 3685): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 22.30s, trace 3640. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29690664436208025, 'next_transition': 3731}.
<a id="trace-3798"></a>
- 23.90s–23.90s (×1), actor 8, squad 1 (trace 3798): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2691. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7703025971937016, 'next_transition': 4417}.
<a id="trace-3799"></a>
- 23.90s–23.90s (×1), actor 8, squad 1 (trace 3799): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2691. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7703025971937016, 'next_transition': 4417}.
<a id="trace-3800"></a>
<a id="trace-4417"></a>
<a id="trace-5373"></a>
<a id="trace-5773"></a>
<a id="trace-6198"></a>
- 23.90s–28.95s (×5), actor 8, squad 1 (trace 3800): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2691. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7703025971937016, 'next_transition': 4417}.
<a id="trace-4867"></a>
- 26.30s–26.30s (×1), actor 0, squad 0 (trace 4867): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 4304. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.287517182172911, 'next_transition': 5212}.
<a id="trace-5212"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 5212): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 4304. Next observer evidence: None.
<a id="trace-5214"></a>
<a id="trace-5216"></a>
<a id="trace-5261"></a>
<a id="trace-5263"></a>
<a id="trace-5308"></a>
<a id="trace-5310"></a>
<a id="trace-5366"></a>
<a id="trace-5368"></a>
<a id="trace-6174"></a>
<a id="trace-6176"></a>
- 26.75s–28.75s (×10), actor 5, squad 0 (trace 5214): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4309. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3204434428623423, 'next_transition': 5261}.
<a id="trace-6597"></a>
- 29.20s–29.20s (×1), actor 0, squad 0 (trace 6597): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 4304. Next observer evidence: None.
<a id="trace-6918"></a>
<a id="trace-6920"></a>
<a id="trace-6957"></a>
<a id="trace-6959"></a>
<a id="trace-7058"></a>
<a id="trace-7060"></a>
<a id="trace-7090"></a>
<a id="trace-7092"></a>
<a id="trace-7121"></a>
<a id="trace-7123"></a>
<a id="trace-7143"></a>
<a id="trace-7145"></a>
<a id="trace-7165"></a>
<a id="trace-7167"></a>
<a id="trace-7186"></a>
<a id="trace-7188"></a>
<a id="trace-7527"></a>
<a id="trace-7529"></a>
- 29.25s–33.25s (×18), actor 5, squad 0 (trace 6918): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4309. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26853959344873574, 'next_transition': 6957}.
<a id="trace-7201"></a>
- 32.95s–32.95s (×1), actor 9, squad 1 (trace 7201): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6988. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30552692284059757, 'next_transition': 7214}.
<a id="trace-7214"></a>
- 33.20s–33.20s (×1), actor 9, squad 1 (trace 7214): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 6988. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 3.0971370371605134, 'next_transition': 7715}.
<a id="trace-7534"></a>
- 33.25s–33.25s (×1), actor 1, squad 0 (trace 7534): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6981. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000152947520897, 'next_transition': 7557}.
<a id="trace-7557"></a>
<a id="trace-7559"></a>
<a id="trace-7583"></a>
<a id="trace-7585"></a>
<a id="trace-7618"></a>
<a id="trace-7620"></a>
<a id="trace-7700"></a>
<a id="trace-7702"></a>
<a id="trace-7728"></a>
<a id="trace-7730"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-7977"></a>
<a id="trace-7979"></a>
<a id="trace-7998"></a>
<a id="trace-8000"></a>
<a id="trace-8016"></a>
<a id="trace-8018"></a>
- 33.75s–37.75s (×18), actor 5, squad 0 (trace 7557): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6985. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.37573234285776863, 'next_transition': 7583}.
<a id="trace-7715"></a>
- 35.65s–35.65s (×1), actor 9, squad 1 (trace 7715): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 7637. Next observer evidence: {'until': 35.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300053497377336, 'next_transition': 7738}.
<a id="trace-7717"></a>
- 35.65s–35.65s (×1), actor 9, squad 1 (trace 7717): NeedSupport. Knowledge: actor memory at 35.00s, trace 7637. Next observer evidence: {'until': 35.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300053497377336, 'next_transition': 7738}.
<a id="trace-7738"></a>
- 35.90s–35.90s (×1), actor 9, squad 1 (trace 7738): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 7637. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 8.618710470056298, 'next_transition': 9833}.
<a id="trace-7741"></a>
- 35.90s–35.90s (×1), actor 9, squad 1 (trace 7741): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 7637. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 8.618710470056298, 'next_transition': 9833}.
<a id="trace-7742"></a>
- 35.90s–35.90s (×1), actor 9, squad 1 (trace 7742): Reorganise complete: known contact. Knowledge: actor memory at 35.00s, trace 7637. Next observer evidence: {'until': 39.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 8.618710470056298, 'next_transition': 9833}.
<a id="trace-8023"></a>
- 38.05s–38.05s (×1), actor 1, squad 0 (trace 8023): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7630. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9772}.
<a id="trace-8024"></a>
- 38.05s–38.05s (×1), actor 1, squad 0 (trace 8024): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 35.00s, trace 7630. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9772}.
<a id="trace-9772"></a>
<a id="trace-9774"></a>
<a id="trace-9792"></a>
<a id="trace-9794"></a>
<a id="trace-9817"></a>
<a id="trace-9819"></a>
- 38.25s–39.25s (×6), actor 5, squad 0 (trace 9772): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7634. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9792}.
<a id="trace-9833"></a>
- 39.35s–39.35s (×1), actor 9, squad 1 (trace 9833): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 7637. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6664051836363212, 'next_transition': 9970}.
<a id="trace-735"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 735): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9838"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 9838): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517504 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 9838. Next observer evidence: None.
<a id="trace-9839"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 9839): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517504 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 9839. Next observer evidence: None.
<a id="trace-9845"></a>
<a id="trace-9847"></a>
<a id="trace-9930"></a>
<a id="trace-9932"></a>
<a id="trace-9958"></a>
<a id="trace-9960"></a>
<a id="trace-9980"></a>
<a id="trace-9982"></a>
<a id="trace-9999"></a>
<a id="trace-10001"></a>
<a id="trace-10083"></a>
<a id="trace-10085"></a>
<a id="trace-10093"></a>
<a id="trace-10095"></a>
<a id="trace-10110"></a>
<a id="trace-10112"></a>
<a id="trace-10126"></a>
<a id="trace-10128"></a>
- 39.75s–43.75s (×18), actor 5, squad 0 (trace 9845): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 9839. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399900728134986, 'next_transition': 9930}.
<a id="trace-9970"></a>
- 40.80s–40.80s (×1), actor 9, squad 1 (trace 9970): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 40.00s, trace 9864. Next observer evidence: {'until': 41.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 10010}.
<a id="trace-10010"></a>
- 41.85s–41.85s (×1), actor 9, squad 1 (trace 10010): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 9864. Next observer evidence: {'until': 43.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.30750059681083, 'next_transition': 813}.
<a id="trace-10011"></a>
- 41.85s–41.85s (×1), actor 9, squad 1 (trace 10011): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 9864. Next observer evidence: {'until': 43.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.30750059681083, 'next_transition': 813}.
<a id="trace-813"></a>
- 43.35s–43.35s (×1), actor 5, squad 1 (events line 813): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10121"></a>
- 43.35s–43.35s (×1), actor 5, squad 1 (trace 10121): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.521446 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 10121. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 26.692513223467735, 'next_transition': 10552}.
<a id="trace-10122"></a>
- 43.35s–43.35s (×1), actor 5, squad 1 (trace 10122): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.521446 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 10122. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 26.692513223467735, 'next_transition': 10552}.
<a id="trace-10134"></a>
- 44.05s–44.05s (×1), actor 5, squad 0 (trace 10134): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 44.05s, trace 10134. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1800020983109937, 'next_transition': 10149}.
<a id="trace-10149"></a>
<a id="trace-10151"></a>
<a id="trace-10171"></a>
<a id="trace-10173"></a>
<a id="trace-10247"></a>
<a id="trace-10249"></a>
<a id="trace-10261"></a>
<a id="trace-10263"></a>
<a id="trace-10286"></a>
<a id="trace-10288"></a>
<a id="trace-10301"></a>
<a id="trace-10303"></a>
<a id="trace-10320"></a>
<a id="trace-10322"></a>
<a id="trace-10335"></a>
<a id="trace-10337"></a>
<a id="trace-10356"></a>
<a id="trace-10358"></a>
<a id="trace-10369"></a>
<a id="trace-10371"></a>
<a id="trace-10385"></a>
<a id="trace-10387"></a>
<a id="trace-10398"></a>
<a id="trace-10400"></a>
<a id="trace-10472"></a>
<a id="trace-10474"></a>
<a id="trace-10486"></a>
<a id="trace-10488"></a>
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-10520"></a>
<a id="trace-10522"></a>
<a id="trace-10540"></a>
<a id="trace-10542"></a>
<a id="trace-10557"></a>
<a id="trace-10559"></a>
<a id="trace-10576"></a>
<a id="trace-10578"></a>
<a id="trace-10589"></a>
<a id="trace-10591"></a>
<a id="trace-10608"></a>
<a id="trace-10610"></a>
<a id="trace-10622"></a>
<a id="trace-10624"></a>
<a id="trace-10700"></a>
<a id="trace-10702"></a>
<a id="trace-10711"></a>
<a id="trace-10713"></a>
<a id="trace-10728"></a>
<a id="trace-10730"></a>
<a id="trace-10736"></a>
<a id="trace-10738"></a>
<a id="trace-10751"></a>
<a id="trace-10753"></a>
<a id="trace-10761"></a>
<a id="trace-10763"></a>
<a id="trace-10782"></a>
<a id="trace-10784"></a>
<a id="trace-10793"></a>
<a id="trace-10795"></a>
<a id="trace-10808"></a>
<a id="trace-10810"></a>
<a id="trace-10824"></a>
<a id="trace-10826"></a>
<a id="trace-10902"></a>
<a id="trace-10904"></a>
<a id="trace-10918"></a>
<a id="trace-10920"></a>
- 44.25s–60.75s (×68), actor 5, squad 0 (trace 10149): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.05s, trace 10134. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3498965410592979, 'next_transition': 10171}.
<a id="trace-10552"></a>
- 52.70s–52.70s (×1), actor 9, squad 1 (trace 10552): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 10413. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12855}.
<a id="trace-10553"></a>
- 52.70s–52.70s (×1), actor 9, squad 1 (trace 10553): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 10413. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12855}.
<a id="trace-10927"></a>
- 61.15s–61.15s (×1), actor 1, squad 0 (trace 10927): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 10833. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999000505312682, 'next_transition': 10942}.
<a id="trace-10928"></a>
- 61.15s–61.15s (×1), actor 1, squad 0 (trace 10928): NeedSupport. Knowledge: actor memory at 60.00s, trace 10833. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999000505312682, 'next_transition': 10942}.
<a id="trace-10942"></a>
<a id="trace-10944"></a>
<a id="trace-10953"></a>
<a id="trace-10955"></a>
- 61.25s–61.75s (×4), actor 5, squad 0 (trace 10942): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10836. Next observer evidence: {'until': 61.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4199908959860134, 'next_transition': 10953}.
<a id="trace-10966"></a>
- 62.15s–62.15s (×1), actor 1, squad 0 (trace 10966): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 10833. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999471714030996, 'next_transition': 11788}.
<a id="trace-10967"></a>
- 62.15s–62.15s (×1), actor 1, squad 0 (trace 10967): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 60.00s, trace 10833. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999471714030996, 'next_transition': 11788}.
<a id="trace-11779"></a>
- 62.15s–62.15s (×1), actor 1, squad 0 (trace 11779): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 60.00s, trace 10833. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999471714030996, 'next_transition': 11788}.
<a id="trace-11788"></a>
<a id="trace-11790"></a>
<a id="trace-11805"></a>
<a id="trace-11807"></a>
<a id="trace-11825"></a>
<a id="trace-11827"></a>
<a id="trace-11838"></a>
<a id="trace-11840"></a>
<a id="trace-11860"></a>
<a id="trace-11862"></a>
<a id="trace-11876"></a>
<a id="trace-11878"></a>
<a id="trace-11952"></a>
<a id="trace-11954"></a>
- 62.25s–65.25s (×14), actor 5, squad 0 (trace 11788): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10836. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750709348877218, 'next_transition': 11805}.
<a id="trace-953"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (events line 953): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150039578278693, 'next_transition': 11985}.
<a id="trace-11964"></a>
<a id="trace-11966"></a>
- 65.75s–65.75s (×2), actor 5, squad 0 (trace 11964): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11891. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150039578278693, 'next_transition': 11985}.
<a id="trace-11971"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 11971): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.357920 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 11971. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150039578278693, 'next_transition': 11985}.
<a id="trace-11972"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 11972): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.357920 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 11972. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150039578278693, 'next_transition': 11985}.
<a id="trace-11985"></a>
<a id="trace-11987"></a>
<a id="trace-11995"></a>
<a id="trace-11997"></a>
- 66.25s–66.75s (×4), actor 5, squad 0 (trace 11985): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.75s, trace 11972. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999836308885858, 'next_transition': 11995}.
<a id="trace-955"></a>
- 66.95s–66.95s (×1), actor 5, squad 0 (events line 955): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12003"></a>
- 66.95s–66.95s (×1), actor 5, squad 0 (trace 12003): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359329 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 12003. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000967305764218, 'next_transition': 12014}.
<a id="trace-12004"></a>
- 66.95s–66.95s (×1), actor 5, squad 0 (trace 12004): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359329 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 12004. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000967305764218, 'next_transition': 12014}.
<a id="trace-12014"></a>
<a id="trace-12016"></a>
<a id="trace-12023"></a>
<a id="trace-12025"></a>
- 67.25s–67.75s (×4), actor 5, squad 0 (trace 12014): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.95s, trace 12004. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999836308885836, 'next_transition': 12023}.
<a id="trace-12041"></a>
- 68.20s–68.20s (×1), actor 1, squad 0 (trace 12041): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 11888. Next observer evidence: None.
<a id="trace-12042"></a>
- 68.20s–68.20s (×1), actor 1, squad 0 (trace 12042): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 65.00s, trace 11888. Next observer evidence: None.
<a id="trace-12853"></a>
- 68.20s–68.20s (×1), actor 1, squad 0 (trace 12853): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 65.00s, trace 11888. Next observer evidence: None.
<a id="trace-12855"></a>
- 68.20s–68.20s (×1), actor 9, squad 1 (trace 12855): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 11894. Next observer evidence: None.
<a id="trace-12863"></a>
<a id="trace-12865"></a>
<a id="trace-12881"></a>
<a id="trace-12883"></a>
- 68.25s–68.75s (×4), actor 5, squad 0 (trace 12863): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.95s, trace 12004. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000967305764198, 'next_transition': 12881}.
<a id="trace-12868"></a>
- 68.25s–68.25s (×1), actor 9, squad 1 (trace 12868): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 11894. Next observer evidence: None.
<a id="trace-12869"></a>
- 68.25s–68.25s (×1), actor 9, squad 1 (trace 12869): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 11894. Next observer evidence: None.
<a id="trace-12872"></a>
- 68.30s–68.30s (×1), actor 9, squad 1 (trace 12872): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 65.00s, trace 11894. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13020}.
<a id="trace-12897"></a>
- 69.20s–69.20s (×1), actor 1, squad 0 (trace 12897): NeedSupport. Knowledge: actor memory at 65.00s, trace 11888. Next observer evidence: None.
<a id="trace-12908"></a>
<a id="trace-12910"></a>
<a id="trace-12935"></a>
<a id="trace-12937"></a>
<a id="trace-13013"></a>
<a id="trace-13015"></a>
<a id="trace-13027"></a>
<a id="trace-13029"></a>
<a id="trace-13045"></a>
<a id="trace-13047"></a>
<a id="trace-13054"></a>
<a id="trace-13056"></a>
<a id="trace-13074"></a>
<a id="trace-13076"></a>
<a id="trace-13086"></a>
<a id="trace-13088"></a>
<a id="trace-13112"></a>
<a id="trace-13114"></a>
<a id="trace-13123"></a>
<a id="trace-13125"></a>
- 69.25s–73.75s (×20), actor 5, squad 0 (trace 12908): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.95s, trace 12004. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4999157680182536, 'next_transition': 12935}.
<a id="trace-13020"></a>
- 70.40s–70.40s (×1), actor 9, squad 1 (trace 13020): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 12949. Next observer evidence: None.
<a id="trace-13021"></a>
- 70.40s–70.40s (×1), actor 9, squad 1 (trace 13021): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 70.00s, trace 12949. Next observer evidence: None.
<a id="trace-13023"></a>
- 70.45s–70.45s (×1), actor 9, squad 1 (trace 13023): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 70.00s, trace 12949. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 982}.
<a id="trace-982"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (events line 982): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13097"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 13097): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.366540 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 13097. Next observer evidence: {'until': 74, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13133}.
<a id="trace-13098"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 13098): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.366540 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 13098. Next observer evidence: {'until': 74, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13133}.
<a id="trace-987"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (events line 987): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13131"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 13131): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368017 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 13131. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499792040268663, 'next_transition': 13148}.
<a id="trace-13132"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 13132): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368017 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 13132. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499792040268663, 'next_transition': 13148}.
<a id="trace-13133"></a>
- 74.15s–74.15s (×1), actor 9, squad 1 (trace 13133): MoveTactically. Knowledge: actor memory at 70.00s, trace 12949. Next observer evidence: {'until': 89, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1102}.
<a id="trace-13134"></a>
- 74.15s–74.15s (×1), actor 9, squad 1 (trace 13134): received platoon directive. Knowledge: actor memory at 70.00s, trace 12949. Next observer evidence: {'until': 89, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1102}.
<a id="trace-13148"></a>
<a id="trace-13150"></a>
<a id="trace-13168"></a>
<a id="trace-13170"></a>
<a id="trace-13241"></a>
<a id="trace-13243"></a>
<a id="trace-13250"></a>
<a id="trace-13252"></a>
<a id="trace-13268"></a>
<a id="trace-13270"></a>
<a id="trace-13280"></a>
<a id="trace-13282"></a>
<a id="trace-13298"></a>
<a id="trace-13300"></a>
<a id="trace-13310"></a>
<a id="trace-13312"></a>
<a id="trace-13329"></a>
<a id="trace-13331"></a>
<a id="trace-13340"></a>
<a id="trace-13342"></a>
<a id="trace-13355"></a>
<a id="trace-13357"></a>
<a id="trace-13369"></a>
<a id="trace-13371"></a>
- 74.25s–79.75s (×24), actor 5, squad 0 (trace 13148): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.15s, trace 13132. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999584080537292, 'next_transition': 13168}.
<a id="trace-1004"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1004): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13395"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 13395): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.375585 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 13395. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13444}.
<a id="trace-13396"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 13396): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.375585 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 13396. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13444}.
<a id="trace-13444"></a>
<a id="trace-13446"></a>
<a id="trace-13453"></a>
<a id="trace-13455"></a>
<a id="trace-13474"></a>
<a id="trace-13476"></a>
- 80.25s–81.25s (×6), actor 5, squad 0 (trace 13444): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 13396. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13453}.
<a id="trace-13480"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 13480): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.377136 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 13480. Next observer evidence: None.
<a id="trace-13481"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 13481): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.377136 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 13481. Next observer evidence: None.
<a id="trace-1013"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (events line 1013): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13502}.
<a id="trace-13502"></a>
<a id="trace-13504"></a>
- 81.75s–81.75s (×2), actor 5, squad 0 (trace 13502): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.35s, trace 13481. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13511}.
<a id="trace-13511"></a>
- 81.85s–81.85s (×1), actor 1, squad 0 (trace 13511): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 13377. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14336}.
<a id="trace-13512"></a>
- 81.85s–81.85s (×1), actor 1, squad 0 (trace 13512): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 80.00s, trace 13377. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14336}.
<a id="trace-14325"></a>
- 81.85s–81.85s (×1), actor 1, squad 0 (trace 14325): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 80.00s, trace 13377. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14336}.
<a id="trace-14336"></a>
<a id="trace-14338"></a>
- 82.25s–82.25s (×2), actor 5, squad 0 (trace 14336): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.35s, trace 13481. Next observer evidence: {'until': 82.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1038}.
<a id="trace-1038"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (events line 1038): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14347"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 14347): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.378701 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 82.55s, trace 14347. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14352}.
<a id="trace-14348"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 14348): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.378701 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 82.55s, trace 14348. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14352}.
<a id="trace-14352"></a>
<a id="trace-14354"></a>
<a id="trace-14371"></a>
<a id="trace-14373"></a>
- 82.75s–83.25s (×4), actor 5, squad 0 (trace 14352): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 14348. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13125825422722096, 'next_transition': 14371}.
<a id="trace-1046"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (events line 1046): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150064292818305, 'next_transition': 14407}.
<a id="trace-14381"></a>
<a id="trace-14383"></a>
- 83.75s–83.75s (×2), actor 5, squad 0 (trace 14381): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 14348. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150064292818305, 'next_transition': 14407}.
<a id="trace-14388"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 14388): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.380278 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 14388. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150064292818305, 'next_transition': 14407}.
<a id="trace-14389"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 14389): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.380278 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 14389. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150064292818305, 'next_transition': 14407}.
<a id="trace-14407"></a>
<a id="trace-14409"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
- 84.25s–84.75s (×4), actor 5, squad 0 (trace 14407): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 83.75s, trace 14389. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999321285989744, 'next_transition': 14421}.
<a id="trace-1056"></a>
- 84.95s–84.95s (×1), actor 5, squad 0 (events line 1056): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14431"></a>
- 84.95s–84.95s (×1), actor 5, squad 0 (trace 14431): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.381868 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 14431. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4068720764761704, 'next_transition': 14500}.
<a id="trace-14432"></a>
- 84.95s–84.95s (×1), actor 5, squad 0 (trace 14432): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.381868 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 14432. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4068720764761704, 'next_transition': 14500}.
<a id="trace-14500"></a>
<a id="trace-14502"></a>
<a id="trace-14512"></a>
<a id="trace-14514"></a>
- 85.25s–85.75s (×4), actor 5, squad 0 (trace 14500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 14436. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100014598163545, 'next_transition': 14512}.
<a id="trace-1061"></a>
- 86.15s–86.15s (×1), actor 5, squad 0 (events line 1061): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14518"></a>
- 86.15s–86.15s (×1), actor 5, squad 0 (trace 14518): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.383471 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 86.15s, trace 14518. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499989747349504, 'next_transition': 14532}.
<a id="trace-14519"></a>
- 86.15s–86.15s (×1), actor 5, squad 0 (trace 14519): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.383471 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 86.15s, trace 14519. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499989747349504, 'next_transition': 14532}.
<a id="trace-14532"></a>
<a id="trace-14534"></a>
<a id="trace-14546"></a>
<a id="trace-14548"></a>
<a id="trace-14562"></a>
<a id="trace-14564"></a>
- 86.25s–87.25s (×6), actor 5, squad 0 (trace 14532): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 86.15s, trace 14519. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999987233461725, 'next_transition': 14546}.
<a id="trace-14569"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 14569): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.385088 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 14569. Next observer evidence: None.
<a id="trace-14570"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 14570): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.385088 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 14570. Next observer evidence: None.
<a id="trace-1064"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 1064): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999987233461725, 'next_transition': 14583}.
<a id="trace-14583"></a>
<a id="trace-14585"></a>
<a id="trace-14612"></a>
<a id="trace-14614"></a>
- 87.75s–88.25s (×4), actor 5, squad 0 (trace 14583): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 14570. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997698059124, 'next_transition': 14612}.
<a id="trace-1092"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (events line 1092): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14626"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (trace 14626): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.386719 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 14626. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500006396043027, 'next_transition': 14634}.
<a id="trace-14627"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (trace 14627): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.386719 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 14627. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500006396043027, 'next_transition': 14634}.
<a id="trace-14634"></a>
<a id="trace-14636"></a>
- 88.75s–88.75s (×2), actor 5, squad 0 (trace 14634): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 88.55s, trace 14627. Next observer evidence: {'until': 89, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249733255547178, 'next_transition': 1101}.
<a id="trace-1101"></a>
- 89.05s–89.05s (×1), actor 5, squad 0 (events line 1101): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1102"></a>
- 89.05s–89.05s (×1), actor 5, squad 1 (events line 1102): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14647"></a>
- 89.05s–89.05s (×1), actor 5, squad 0 (trace 14647): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 89.05s, trace 14647. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315026609755354, 'next_transition': 14661}.
<a id="trace-14648"></a>
- 89.05s–89.05s (×1), actor 5, squad 0 (trace 14648): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 89.05s, trace 14648. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315026609755354, 'next_transition': 14661}.
<a id="trace-14649"></a>
- 89.05s–89.05s (×1), actor 5, squad 1 (trace 14649): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 89.05s, trace 14649. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14760}.
<a id="trace-14650"></a>
- 89.05s–89.05s (×1), actor 5, squad 1 (trace 14650): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 89.05s, trace 14650. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14760}.
<a id="trace-14661"></a>
<a id="trace-14663"></a>
<a id="trace-14674"></a>
<a id="trace-14676"></a>
<a id="trace-14753"></a>
<a id="trace-14755"></a>
<a id="trace-14819"></a>
<a id="trace-14821"></a>
- 89.25s–90.75s (×8), actor 5, squad 0 (trace 14661): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 89.05s, trace 14650. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6260546942262999, 'next_transition': 14674}.
<a id="trace-14760"></a>
- 90.25s–90.25s (×1), actor 9, squad 1 (trace 14760): Withdraw to received rally. Knowledge: actor memory at 90.00s, trace 14688. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 15629}.
<a id="trace-14761"></a>
- 90.25s–90.25s (×1), actor 9, squad 1 (trace 14761): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 14688. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 15629}.
<a id="trace-14827"></a>
- 90.85s–90.85s (×1), actor 1, squad 0 (trace 14827): Withdraw to received rally. Knowledge: actor memory at 90.00s, trace 14682. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19451786871647558, 'next_transition': 15092}.
<a id="trace-14828"></a>
- 90.85s–90.85s (×1), actor 1, squad 0 (trace 14828): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 14682. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19451786871647558, 'next_transition': 15092}.
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15111"></a>
<a id="trace-15113"></a>
<a id="trace-15140"></a>
<a id="trace-15142"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15178"></a>
<a id="trace-15180"></a>
<a id="trace-15208"></a>
<a id="trace-15210"></a>
<a id="trace-15239"></a>
<a id="trace-15241"></a>
<a id="trace-15259"></a>
<a id="trace-15261"></a>
<a id="trace-15344"></a>
<a id="trace-15346"></a>
<a id="trace-15374"></a>
<a id="trace-15376"></a>
<a id="trace-15390"></a>
<a id="trace-15392"></a>
<a id="trace-15415"></a>
<a id="trace-15417"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15450"></a>
<a id="trace-15452"></a>
<a id="trace-15463"></a>
<a id="trace-15465"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15497"></a>
<a id="trace-15499"></a>
<a id="trace-15579"></a>
<a id="trace-15581"></a>
<a id="trace-15594"></a>
<a id="trace-15596"></a>
<a id="trace-15621"></a>
<a id="trace-15623"></a>
<a id="trace-15649"></a>
<a id="trace-15651"></a>
<a id="trace-15673"></a>
<a id="trace-15675"></a>
<a id="trace-15691"></a>
<a id="trace-15693"></a>
<a id="trace-15706"></a>
<a id="trace-15708"></a>
<a id="trace-15715"></a>
<a id="trace-15717"></a>
- 91.25s–103.75s (×50), actor 5, squad 0 (trace 15092): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14685. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2239039522137181, 'next_transition': 15111}.
<a id="trace-15629"></a>
- 101.30s–101.30s (×1), actor 9, squad 1 (trace 15629): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 15513. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1541}.
<a id="trace-15630"></a>
- 101.30s–101.30s (×1), actor 9, squad 1 (trace 15630): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 15513. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1541}.
<a id="trace-15726"></a>
- 104.05s–104.05s (×1), actor 1, squad 0 (trace 15726): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 15507. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500738123526711, 'next_transition': 15794}.
<a id="trace-15727"></a>
- 104.05s–104.05s (×1), actor 1, squad 0 (trace 15727): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 15507. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500738123526711, 'next_transition': 15794}.
<a id="trace-15794"></a>
<a id="trace-15796"></a>
<a id="trace-15807"></a>
<a id="trace-15809"></a>
<a id="trace-15902"></a>
<a id="trace-15904"></a>
<a id="trace-15915"></a>
<a id="trace-15917"></a>
<a id="trace-15939"></a>
<a id="trace-15941"></a>
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-15981"></a>
<a id="trace-15983"></a>
<a id="trace-15997"></a>
<a id="trace-15999"></a>
<a id="trace-16023"></a>
<a id="trace-16025"></a>
<a id="trace-16034"></a>
<a id="trace-16036"></a>
<a id="trace-16054"></a>
<a id="trace-16056"></a>
<a id="trace-16067"></a>
<a id="trace-16069"></a>
<a id="trace-16150"></a>
<a id="trace-16152"></a>
<a id="trace-16160"></a>
<a id="trace-16162"></a>
<a id="trace-16177"></a>
<a id="trace-16179"></a>
<a id="trace-16187"></a>
<a id="trace-16189"></a>
<a id="trace-16207"></a>
<a id="trace-16209"></a>
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16244"></a>
<a id="trace-16246"></a>
- 104.25s–113.25s (×38), actor 5, squad 0 (trace 15794): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 15510. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100003237365232, 'next_transition': 15807}.
<a id="trace-16251"></a>
- 113.25s–113.25s (×1), actor 1, squad 0 (trace 16251): NeedSupport. Knowledge: actor memory at 110.00s, trace 16079. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299900471481038, 'next_transition': 16262}.
<a id="trace-16262"></a>
<a id="trace-16264"></a>
<a id="trace-16289"></a>
<a id="trace-16291"></a>
<a id="trace-16314"></a>
<a id="trace-16316"></a>
<a id="trace-16389"></a>
<a id="trace-16391"></a>
<a id="trace-16400"></a>
<a id="trace-16402"></a>
- 113.75s–115.75s (×10), actor 5, squad 0 (trace 16262): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 16082. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41367670713205035, 'next_transition': 16289}.
<a id="trace-16413"></a>
- 116.10s–116.10s (×1), actor 1, squad 0 (trace 16413): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 16323. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16584}.
<a id="trace-16419"></a>
- 116.10s–116.10s (×1), actor 1, squad 0 (trace 16419): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 16323. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16584}.
<a id="trace-16584"></a>
<a id="trace-16586"></a>
<a id="trace-16595"></a>
<a id="trace-16597"></a>
<a id="trace-16628"></a>
<a id="trace-16630"></a>
<a id="trace-16645"></a>
<a id="trace-16647"></a>
<a id="trace-16662"></a>
<a id="trace-16664"></a>
<a id="trace-16684"></a>
<a id="trace-16686"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16718"></a>
<a id="trace-16720"></a>
<a id="trace-16794"></a>
<a id="trace-16796"></a>
<a id="trace-16816"></a>
<a id="trace-16818"></a>
<a id="trace-16839"></a>
<a id="trace-16841"></a>
<a id="trace-16855"></a>
<a id="trace-16857"></a>
<a id="trace-16876"></a>
<a id="trace-16878"></a>
<a id="trace-16893"></a>
<a id="trace-16895"></a>
<a id="trace-16911"></a>
<a id="trace-16913"></a>
<a id="trace-16924"></a>
<a id="trace-16926"></a>
<a id="trace-16942"></a>
<a id="trace-16944"></a>
<a id="trace-16961"></a>
<a id="trace-16963"></a>
<a id="trace-17037"></a>
<a id="trace-17039"></a>
<a id="trace-17050"></a>
<a id="trace-17052"></a>
<a id="trace-17069"></a>
<a id="trace-17071"></a>
<a id="trace-17082"></a>
<a id="trace-17084"></a>
<a id="trace-17105"></a>
<a id="trace-17107"></a>
<a id="trace-17118"></a>
<a id="trace-17120"></a>
<a id="trace-17151"></a>
<a id="trace-17153"></a>
<a id="trace-17167"></a>
<a id="trace-17169"></a>
<a id="trace-17190"></a>
<a id="trace-17192"></a>
<a id="trace-17202"></a>
<a id="trace-17204"></a>
- 116.25s–129.80s (×56), actor 5, squad 0 (trace 16584): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 16326. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16595}.
<a id="trace-17273"></a>
- 130.20s–130.20s (×1), actor 1, squad 0 (trace 17273): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 17211. Next observer evidence: None.
<a id="trace-17274"></a>
- 130.20s–130.20s (×1), actor 1, squad 0 (trace 17274): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 17211. Next observer evidence: None.
<a id="trace-17342"></a>
<a id="trace-17344"></a>
<a id="trace-17354"></a>
<a id="trace-17356"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17398"></a>
<a id="trace-17400"></a>
<a id="trace-17417"></a>
<a id="trace-17419"></a>
<a id="trace-17446"></a>
<a id="trace-17448"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17477"></a>
<a id="trace-17479"></a>
<a id="trace-17503"></a>
<a id="trace-17505"></a>
<a id="trace-17526"></a>
<a id="trace-17528"></a>
<a id="trace-17598"></a>
<a id="trace-17600"></a>
- 130.30s–135.30s (×22), actor 5, squad 0 (trace 17342): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 17214. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17354}.
<a id="trace-17608"></a>
- 135.65s–135.65s (×1), actor 1, squad 0 (trace 17608): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 17534. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500435805770698, 'next_transition': 17619}.
<a id="trace-17619"></a>
<a id="trace-17621"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17671"></a>
<a id="trace-17673"></a>
<a id="trace-17695"></a>
<a id="trace-17697"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17736"></a>
<a id="trace-17738"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17762"></a>
<a id="trace-17764"></a>
<a id="trace-17778"></a>
<a id="trace-17780"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17878"></a>
<a id="trace-17880"></a>
<a id="trace-17898"></a>
<a id="trace-17900"></a>
<a id="trace-17907"></a>
<a id="trace-17909"></a>
<a id="trace-17931"></a>
<a id="trace-17933"></a>
<a id="trace-17940"></a>
<a id="trace-17942"></a>
<a id="trace-17953"></a>
<a id="trace-17955"></a>
<a id="trace-17968"></a>
<a id="trace-17970"></a>
- 135.80s–143.80s (×34), actor 5, squad 0 (trace 17619): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 17537. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099920686597481, 'next_transition': 17637}.
<a id="trace-1496"></a>
- 144.20s–144.20s (×1), actor 5, squad 0 (events line 1496): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17976"></a>
- 144.20s–144.20s (×1), actor 5, squad 0 (trace 17976): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.516258 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.20s, trace 17976. Next observer evidence: None.
<a id="trace-17977"></a>
- 144.20s–144.20s (×1), actor 5, squad 0 (trace 17977): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.516258 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.20s, trace 17977. Next observer evidence: None.
<a id="trace-17986"></a>
<a id="trace-17988"></a>
<a id="trace-17996"></a>
<a id="trace-17998"></a>
<a id="trace-18069"></a>
<a id="trace-18071"></a>
<a id="trace-18079"></a>
<a id="trace-18081"></a>
<a id="trace-18093"></a>
<a id="trace-18095"></a>
- 144.30s–146.30s (×10), actor 5, squad 0 (trace 17986): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 144.20s, trace 17977. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17996}.
<a id="trace-18100"></a>
- 146.30s–146.30s (×1), actor 1, squad 0 (trace 18100): MoveTactically. Knowledge: actor memory at 145.00s, trace 18004. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18144}.
<a id="trace-18101"></a>
- 146.30s–146.30s (×1), actor 1, squad 0 (trace 18101): received platoon directive. Knowledge: actor memory at 145.00s, trace 18004. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18144}.
<a id="trace-18144"></a>
<a id="trace-18146"></a>
- 147.30s–147.30s (×2), actor 5, squad 0 (trace 18144): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 18007. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18226}.
<a id="trace-18151"></a>
- 147.30s–147.30s (×1), actor 1, squad 0 (trace 18151): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 18004. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18226}.
<a id="trace-18226"></a>
<a id="trace-18228"></a>
<a id="trace-18244"></a>
<a id="trace-18246"></a>
<a id="trace-18266"></a>
<a id="trace-18268"></a>
<a id="trace-18291"></a>
<a id="trace-18293"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18387"></a>
<a id="trace-18389"></a>
<a id="trace-18399"></a>
<a id="trace-18401"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18422"></a>
<a id="trace-18424"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18478"></a>
<a id="trace-18480"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18525"></a>
<a id="trace-18527"></a>
<a id="trace-18537"></a>
<a id="trace-18539"></a>
- 147.80s–154.80s (×30), actor 5, squad 0 (trace 18226): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 18007. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18244}.
<a id="trace-1541"></a>
- 150.20s–150.20s (×1), actor 5, squad 1 (events line 1541): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2009}.
<a id="trace-18379"></a>
- 150.20s–150.20s (×1), actor 5, squad 1 (trace 18379): renew committed intent (75 s lifetime). Knowledge: actor memory at 150.20s, trace 18379. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2009}.
<a id="trace-18564"></a>
- 155.05s–155.05s (×1), actor 1, squad 0 (trace 18564): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 18545. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18613}.
<a id="trace-18613"></a>
<a id="trace-18615"></a>
<a id="trace-18626"></a>
<a id="trace-18628"></a>
- 155.30s–155.80s (×4), actor 5, squad 0 (trace 18613): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 18548. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18626}.
<a id="trace-18631"></a>
- 156.05s–156.05s (×1), actor 1, squad 0 (trace 18631): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 18545. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18802}.
<a id="trace-18802"></a>
<a id="trace-18804"></a>
<a id="trace-18823"></a>
<a id="trace-18825"></a>
<a id="trace-18849"></a>
<a id="trace-18851"></a>
<a id="trace-18862"></a>
<a id="trace-18864"></a>
<a id="trace-18887"></a>
<a id="trace-18889"></a>
<a id="trace-18902"></a>
<a id="trace-18904"></a>
<a id="trace-18924"></a>
<a id="trace-18926"></a>
- 156.30s–159.30s (×14), actor 5, squad 0 (trace 18802): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 18548. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026258596475989326, 'next_transition': 18823}.
<a id="trace-1604"></a>
- 159.80s–159.80s (×1), actor 5, squad 0 (events line 1604): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300215617748476, 'next_transition': 19022}.
<a id="trace-18934"></a>
<a id="trace-18936"></a>
- 159.80s–159.80s (×2), actor 5, squad 0 (trace 18934): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 18548. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300215617748476, 'next_transition': 19022}.
<a id="trace-18939"></a>
- 159.80s–159.80s (×1), actor 5, squad 0 (trace 18939): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.576522 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 159.80s, trace 18939. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300215617748476, 'next_transition': 19022}.
<a id="trace-18940"></a>
- 159.80s–159.80s (×1), actor 5, squad 0 (trace 18940): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.576522 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 159.80s, trace 18940. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300215617748476, 'next_transition': 19022}.
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19041"></a>
<a id="trace-19043"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
- 160.30s–161.30s (×6), actor 5, squad 0 (trace 19022): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 18947. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500029132180808, 'next_transition': 19041}.
<a id="trace-19077"></a>
- 161.70s–161.70s (×1), actor 1, squad 0 (trace 19077): traveling overwatch. Knowledge: actor memory at 160.00s, trace 18944. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.525010231679651, 'next_transition': 19237}.
<a id="trace-19078"></a>
- 161.70s–161.70s (×1), actor 1, squad 0 (trace 19078): received platoon directive. Knowledge: actor memory at 160.00s, trace 18944. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.525010231679651, 'next_transition': 19237}.
<a id="trace-19237"></a>
<a id="trace-19239"></a>
<a id="trace-19264"></a>
<a id="trace-19266"></a>
<a id="trace-19283"></a>
<a id="trace-19285"></a>
<a id="trace-19303"></a>
<a id="trace-19305"></a>
<a id="trace-19315"></a>
<a id="trace-19317"></a>
<a id="trace-19346"></a>
<a id="trace-19348"></a>
<a id="trace-19367"></a>
<a id="trace-19369"></a>
<a id="trace-19444"></a>
<a id="trace-19446"></a>
<a id="trace-19457"></a>
<a id="trace-19459"></a>
<a id="trace-19482"></a>
<a id="trace-19484"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
<a id="trace-19518"></a>
<a id="trace-19520"></a>
<a id="trace-19541"></a>
<a id="trace-19543"></a>
<a id="trace-19565"></a>
<a id="trace-19567"></a>
<a id="trace-19582"></a>
<a id="trace-19584"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19612"></a>
<a id="trace-19614"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19737"></a>
<a id="trace-19739"></a>
<a id="trace-19764"></a>
<a id="trace-19766"></a>
<a id="trace-19784"></a>
<a id="trace-19786"></a>
<a id="trace-19807"></a>
<a id="trace-19809"></a>
<a id="trace-19827"></a>
<a id="trace-19829"></a>
<a id="trace-19856"></a>
<a id="trace-19858"></a>
<a id="trace-19870"></a>
<a id="trace-19872"></a>
<a id="trace-19946"></a>
<a id="trace-19948"></a>
<a id="trace-19955"></a>
<a id="trace-19957"></a>
- 161.80s–175.80s (×58), actor 5, squad 0 (trace 19237): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 18947. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500054128496177, 'next_transition': 19264}.
<a id="trace-19968"></a>
- 176.10s–176.10s (×1), actor 1, squad 0 (trace 19968): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 175.00s, trace 19881. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20014}.
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20029"></a>
<a id="trace-20031"></a>
<a id="trace-20061"></a>
<a id="trace-20063"></a>
<a id="trace-20076"></a>
<a id="trace-20078"></a>
<a id="trace-20098"></a>
<a id="trace-20100"></a>
<a id="trace-20113"></a>
<a id="trace-20115"></a>
<a id="trace-20135"></a>
<a id="trace-20137"></a>
<a id="trace-20147"></a>
<a id="trace-20149"></a>
<a id="trace-20232"></a>
<a id="trace-20234"></a>
<a id="trace-20255"></a>
<a id="trace-20257"></a>
<a id="trace-20273"></a>
<a id="trace-20275"></a>
<a id="trace-20282"></a>
<a id="trace-20284"></a>
<a id="trace-20309"></a>
<a id="trace-20311"></a>
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20336"></a>
<a id="trace-20338"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20365"></a>
<a id="trace-20367"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20462"></a>
<a id="trace-20464"></a>
- 176.30s–185.30s (×38), actor 5, squad 0 (trace 20014): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 19884. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10497995599626715, 'next_transition': 20029}.
<a id="trace-20471"></a>
- 185.65s–185.65s (×1), actor 1, squad 0 (trace 20471): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 20394. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500688337226116, 'next_transition': 20530}.
<a id="trace-20530"></a>
<a id="trace-20532"></a>
- 185.80s–185.80s (×2), actor 5, squad 0 (trace 20530): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 20397. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20545}.
<a id="trace-20545"></a>
- 186.25s–186.25s (×1), actor 1, squad 0 (trace 20545): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 20394. Next observer evidence: None.
<a id="trace-20546"></a>
- 186.25s–186.25s (×1), actor 1, squad 0 (trace 20546): bounding overwatch. Knowledge: actor memory at 185.00s, trace 20394. Next observer evidence: None.
<a id="trace-20547"></a>
- 186.25s–186.25s (×1), actor 1, squad 0 (trace 20547): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 20394. Next observer evidence: None.
<a id="trace-20624"></a>
<a id="trace-20626"></a>
- 186.30s–186.30s (×2), actor 5, squad 0 (trace 20624): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 20397. Next observer evidence: {'until': 186.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20634}.
<a id="trace-20634"></a>
- 186.50s–186.50s (×1), actor 1, squad 0 (trace 20634): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 20394. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026244064090761576, 'next_transition': 20716}.
<a id="trace-20716"></a>
<a id="trace-20718"></a>
<a id="trace-20756"></a>
<a id="trace-20758"></a>
<a id="trace-20793"></a>
<a id="trace-20795"></a>
<a id="trace-20817"></a>
<a id="trace-20819"></a>
- 186.80s–188.30s (×8), actor 5, squad 0 (trace 20716): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 20397. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000247451584383, 'next_transition': 20756}.
<a id="trace-20824"></a>
- 188.30s–188.30s (×1), actor 1, squad 0 (trace 20824): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 20394. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2654423314698662, 'next_transition': 20903}.
<a id="trace-20903"></a>
<a id="trace-20905"></a>
<a id="trace-20950"></a>
<a id="trace-20952"></a>
<a id="trace-21008"></a>
<a id="trace-21010"></a>
<a id="trace-21087"></a>
<a id="trace-21089"></a>
<a id="trace-21111"></a>
<a id="trace-21113"></a>
- 188.80s–190.80s (×10), actor 5, squad 0 (trace 20903): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 20397. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08394470327025916, 'next_transition': 20950}.
<a id="trace-21134"></a>
- 191.10s–191.10s (×1), actor 5, squad 0 (trace 21134): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 191.10s, trace 21134. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06996666668651776, 'next_transition': 21148}.
<a id="trace-21148"></a>
<a id="trace-21150"></a>
<a id="trace-21168"></a>
<a id="trace-21170"></a>
- 191.30s–191.80s (×4), actor 5, squad 0 (trace 21148): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.10s, trace 21134. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07138333350844425, 'next_transition': 21168}.
<a id="trace-21181"></a>
- 192.05s–192.05s (×1), actor 1, squad 0 (trace 21181): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 190.00s, trace 21022. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21351}.
<a id="trace-21182"></a>
- 192.05s–192.05s (×1), actor 1, squad 0 (trace 21182): rearward bound: one stationary suppressing element. Knowledge: actor memory at 190.00s, trace 21022. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21351}.
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21393"></a>
<a id="trace-21395"></a>
<a id="trace-21404"></a>
<a id="trace-21406"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21436"></a>
<a id="trace-21438"></a>
<a id="trace-21506"></a>
<a id="trace-21508"></a>
<a id="trace-21515"></a>
<a id="trace-21517"></a>
<a id="trace-21534"></a>
<a id="trace-21536"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
- 192.30s–196.80s (×20), actor 5, squad 0 (trace 21351): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.10s, trace 21134. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.028450000000000013, 'next_transition': 21375}.
<a id="trace-21567"></a>
- 197.00s–197.00s (×1), actor 2, squad 0 (trace 21567): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 195.00s, trace 21445. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200437767431866, 'next_transition': 21582}.
<a id="trace-21568"></a>
- 197.00s–197.00s (×1), actor 2, squad 0 (trace 21568): NeedSupport. Knowledge: actor memory at 195.00s, trace 21445. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200437767431866, 'next_transition': 21582}.
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21593"></a>
<a id="trace-21595"></a>
- 197.30s–197.80s (×4), actor 5, squad 0 (trace 21582): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 21447. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755988628450889, 'next_transition': 21593}.
<a id="trace-21602"></a>
- 197.90s–197.90s (×1), actor 2, squad 0 (trace 21602): Reorganise: completed/failed drill. Knowledge: actor memory at 195.00s, trace 21445. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040005857030369, 'next_transition': 21626}.
<a id="trace-21606"></a>
- 197.90s–197.90s (×1), actor 2, squad 0 (trace 21606): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 21445. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040005857030369, 'next_transition': 21626}.
<a id="trace-21607"></a>
- 197.90s–197.90s (×1), actor 2, squad 0 (trace 21607): Reorganise complete: known contact. Knowledge: actor memory at 195.00s, trace 21445. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040005857030369, 'next_transition': 21626}.
<a id="trace-21626"></a>
<a id="trace-21628"></a>
<a id="trace-21645"></a>
<a id="trace-21647"></a>
<a id="trace-21669"></a>
<a id="trace-21671"></a>
<a id="trace-21684"></a>
<a id="trace-21686"></a>
<a id="trace-21773"></a>
<a id="trace-21775"></a>
- 198.30s–200.30s (×10), actor 5, squad 0 (trace 21626): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 21447. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559976140755975, 'next_transition': 21645}.
<a id="trace-1979"></a>
- 200.60s–200.60s (×1), actor 5, squad 0 (events line 1979): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21784"></a>
- 200.60s–200.60s (×1), actor 5, squad 0 (trace 21784): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.379977 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 200.60s, trace 21784. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21796}.
<a id="trace-21785"></a>
- 200.60s–200.60s (×1), actor 5, squad 0 (trace 21785): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.379977 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 200.60s, trace 21785. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21796}.
<a id="trace-21796"></a>
<a id="trace-21798"></a>
<a id="trace-21811"></a>
<a id="trace-21813"></a>
<a id="trace-21818"></a>
<a id="trace-21820"></a>
- 200.80s–201.80s (×6), actor 5, squad 0 (trace 21796): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.60s, trace 21785. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21811}.
<a id="trace-21830"></a>
- 201.90s–201.90s (×1), actor 2, squad 0 (trace 21830): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 200.00s, trace 21700. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21848}.
<a id="trace-21833"></a>
- 201.90s–201.90s (×1), actor 2, squad 0 (trace 21833): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 21700. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21848}.
<a id="trace-21834"></a>
- 201.90s–201.90s (×1), actor 2, squad 0 (trace 21834): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 21700. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21848}.
<a id="trace-21848"></a>
<a id="trace-21850"></a>
<a id="trace-21862"></a>
<a id="trace-21864"></a>
<a id="trace-21881"></a>
<a id="trace-21883"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21915"></a>
<a id="trace-21917"></a>
<a id="trace-21930"></a>
<a id="trace-21932"></a>
<a id="trace-22002"></a>
<a id="trace-22004"></a>
<a id="trace-22013"></a>
<a id="trace-22015"></a>
<a id="trace-22031"></a>
<a id="trace-22033"></a>
<a id="trace-22045"></a>
<a id="trace-22047"></a>
<a id="trace-22063"></a>
<a id="trace-22065"></a>
<a id="trace-22072"></a>
<a id="trace-22074"></a>
<a id="trace-22087"></a>
<a id="trace-22089"></a>
<a id="trace-22095"></a>
<a id="trace-22097"></a>
<a id="trace-22109"></a>
<a id="trace-22111"></a>
<a id="trace-22122"></a>
<a id="trace-22124"></a>
<a id="trace-22194"></a>
<a id="trace-22196"></a>
<a id="trace-22205"></a>
<a id="trace-22207"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
<a id="trace-22227"></a>
<a id="trace-22229"></a>
<a id="trace-22244"></a>
<a id="trace-22246"></a>
<a id="trace-22257"></a>
<a id="trace-22259"></a>
<a id="trace-22279"></a>
<a id="trace-22281"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22307"></a>
<a id="trace-22309"></a>
<a id="trace-22322"></a>
<a id="trace-22324"></a>
<a id="trace-22400"></a>
<a id="trace-22402"></a>
<a id="trace-22411"></a>
<a id="trace-22413"></a>
<a id="trace-22424"></a>
<a id="trace-22426"></a>
<a id="trace-22433"></a>
<a id="trace-22435"></a>
<a id="trace-22446"></a>
<a id="trace-22448"></a>
<a id="trace-22456"></a>
<a id="trace-22458"></a>
<a id="trace-22472"></a>
<a id="trace-22474"></a>
<a id="trace-22482"></a>
<a id="trace-22484"></a>
<a id="trace-22496"></a>
<a id="trace-22498"></a>
<a id="trace-22514"></a>
<a id="trace-22516"></a>
<a id="trace-22591"></a>
<a id="trace-22593"></a>
<a id="trace-22602"></a>
<a id="trace-22604"></a>
<a id="trace-22618"></a>
<a id="trace-22620"></a>
<a id="trace-22632"></a>
<a id="trace-22634"></a>
<a id="trace-22646"></a>
<a id="trace-22648"></a>
<a id="trace-22658"></a>
<a id="trace-22660"></a>
- 202.30s–222.80s (×84), actor 5, squad 0 (trace 21848): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.60s, trace 21785. Next observer evidence: {'until': 202.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21862}.
<a id="trace-2009"></a>
- 210.20s–210.20s (×1), actor 5, squad 1 (events line 2009): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2285}.
<a id="trace-22187"></a>
- 210.20s–210.20s (×1), actor 5, squad 1 (trace 22187): renew committed intent (75 s lifetime). Knowledge: actor memory at 210.20s, trace 22187. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2285}.
<a id="trace-22665"></a>
- 222.90s–222.90s (×1), actor 2, squad 0 (trace 22665): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 22525. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22679}.
<a id="trace-22679"></a>
<a id="trace-22681"></a>
<a id="trace-22691"></a>
<a id="trace-22693"></a>
- 223.30s–223.80s (×4), actor 5, squad 0 (trace 22679): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 22527. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22691}.
<a id="trace-22698"></a>
- 223.90s–223.90s (×1), actor 2, squad 0 (trace 22698): MoveTactically. Knowledge: actor memory at 220.00s, trace 22525. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22728}.
<a id="trace-22699"></a>
- 223.90s–223.90s (×1), actor 2, squad 0 (trace 22699): received platoon directive. Knowledge: actor memory at 220.00s, trace 22525. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22728}.
<a id="trace-22728"></a>
<a id="trace-22730"></a>
- 224.30s–224.30s (×2), actor 5, squad 0 (trace 22728): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 22527. Next observer evidence: {'until': 224.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22740}.
<a id="trace-22740"></a>
- 224.45s–224.45s (×1), actor 2, squad 0 (trace 22740): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.00s, trace 22525. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22752}.
<a id="trace-22752"></a>
<a id="trace-22754"></a>
<a id="trace-22840"></a>
<a id="trace-22842"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22882"></a>
<a id="trace-22884"></a>
<a id="trace-22896"></a>
<a id="trace-22898"></a>
<a id="trace-22913"></a>
<a id="trace-22915"></a>
<a id="trace-22926"></a>
<a id="trace-22928"></a>
<a id="trace-22944"></a>
<a id="trace-22946"></a>
<a id="trace-22951"></a>
<a id="trace-22953"></a>
<a id="trace-22964"></a>
<a id="trace-22966"></a>
<a id="trace-22976"></a>
<a id="trace-22978"></a>
<a id="trace-23051"></a>
<a id="trace-23053"></a>
<a id="trace-23061"></a>
<a id="trace-23063"></a>
<a id="trace-23074"></a>
<a id="trace-23076"></a>
<a id="trace-23085"></a>
<a id="trace-23087"></a>
<a id="trace-23100"></a>
<a id="trace-23102"></a>
<a id="trace-23111"></a>
<a id="trace-23113"></a>
<a id="trace-23134"></a>
<a id="trace-23136"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23162"></a>
<a id="trace-23164"></a>
<a id="trace-23181"></a>
<a id="trace-23183"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
- 224.80s–235.30s (×44), actor 5, squad 0 (trace 22752): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 22527. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22840}.
<a id="trace-2137"></a>
- 236.10s–236.10s (×1), actor 5, squad 0 (events line 2137): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23267"></a>
- 236.10s–236.10s (×1), actor 5, squad 0 (trace 23267): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.434703 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 236.10s, trace 23267. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23276}.
<a id="trace-23268"></a>
- 236.10s–236.10s (×1), actor 5, squad 0 (trace 23268): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.434703 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 236.10s, trace 23268. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23276}.
<a id="trace-23276"></a>
<a id="trace-23278"></a>
<a id="trace-23287"></a>
<a id="trace-23289"></a>
<a id="trace-23301"></a>
<a id="trace-23303"></a>
<a id="trace-23310"></a>
<a id="trace-23312"></a>
- 236.30s–237.80s (×8), actor 5, squad 0 (trace 23276): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 236.10s, trace 23268. Next observer evidence: {'until': 236.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23287}.
<a id="trace-23318"></a>
- 238.20s–238.20s (×1), actor 2, squad 0 (trace 23318): Withdraw to received rally. Knowledge: actor memory at 235.00s, trace 23190. Next observer evidence: None.
<a id="trace-23319"></a>
- 238.20s–238.20s (×1), actor 2, squad 0 (trace 23319): rearward bound: one stationary suppressing element. Knowledge: actor memory at 235.00s, trace 23190. Next observer evidence: None.
<a id="trace-23330"></a>
<a id="trace-23332"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23360"></a>
<a id="trace-23362"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23473"></a>
<a id="trace-23475"></a>
<a id="trace-23499"></a>
<a id="trace-23501"></a>
<a id="trace-23518"></a>
<a id="trace-23520"></a>
<a id="trace-23527"></a>
<a id="trace-23529"></a>
<a id="trace-23545"></a>
<a id="trace-23547"></a>
<a id="trace-23552"></a>
<a id="trace-23554"></a>
<a id="trace-23565"></a>
<a id="trace-23567"></a>
<a id="trace-23575"></a>
<a id="trace-23577"></a>
<a id="trace-23589"></a>
<a id="trace-23591"></a>
<a id="trace-23603"></a>
<a id="trace-23605"></a>
<a id="trace-23676"></a>
<a id="trace-23678"></a>
<a id="trace-23687"></a>
<a id="trace-23689"></a>
<a id="trace-23711"></a>
<a id="trace-23713"></a>
<a id="trace-23724"></a>
<a id="trace-23726"></a>
<a id="trace-23743"></a>
<a id="trace-23745"></a>
<a id="trace-23753"></a>
<a id="trace-23755"></a>
<a id="trace-23771"></a>
<a id="trace-23773"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23793"></a>
<a id="trace-23795"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-23876"></a>
<a id="trace-23878"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
<a id="trace-23918"></a>
<a id="trace-23920"></a>
<a id="trace-23931"></a>
<a id="trace-23933"></a>
<a id="trace-23944"></a>
<a id="trace-23946"></a>
<a id="trace-23964"></a>
<a id="trace-23966"></a>
<a id="trace-23972"></a>
<a id="trace-23974"></a>
<a id="trace-23991"></a>
<a id="trace-23993"></a>
<a id="trace-24009"></a>
<a id="trace-24011"></a>
<a id="trace-24079"></a>
<a id="trace-24081"></a>
<a id="trace-24091"></a>
<a id="trace-24093"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24113"></a>
<a id="trace-24115"></a>
<a id="trace-24126"></a>
<a id="trace-24128"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24150"></a>
<a id="trace-24152"></a>
<a id="trace-24161"></a>
<a id="trace-24163"></a>
<a id="trace-24180"></a>
<a id="trace-24182"></a>
<a id="trace-24196"></a>
<a id="trace-24198"></a>
<a id="trace-24271"></a>
<a id="trace-24273"></a>
<a id="trace-24288"></a>
<a id="trace-24290"></a>
<a id="trace-24307"></a>
<a id="trace-24309"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24340"></a>
<a id="trace-24342"></a>
<a id="trace-24352"></a>
<a id="trace-24354"></a>
<a id="trace-24362"></a>
<a id="trace-24364"></a>
<a id="trace-24375"></a>
<a id="trace-24377"></a>
<a id="trace-24387"></a>
<a id="trace-24389"></a>
<a id="trace-24460"></a>
<a id="trace-24462"></a>
<a id="trace-24474"></a>
<a id="trace-24476"></a>
<a id="trace-24495"></a>
<a id="trace-24497"></a>
<a id="trace-24508"></a>
<a id="trace-24510"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24553"></a>
<a id="trace-24555"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24576"></a>
<a id="trace-24578"></a>
<a id="trace-24586"></a>
<a id="trace-24588"></a>
<a id="trace-24654"></a>
<a id="trace-24656"></a>
<a id="trace-24664"></a>
<a id="trace-24666"></a>
<a id="trace-24681"></a>
<a id="trace-24683"></a>
<a id="trace-24690"></a>
<a id="trace-24692"></a>
<a id="trace-24706"></a>
<a id="trace-24708"></a>
<a id="trace-24725"></a>
<a id="trace-24727"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24753"></a>
<a id="trace-24755"></a>
<a id="trace-24772"></a>
<a id="trace-24774"></a>
<a id="trace-24785"></a>
<a id="trace-24787"></a>
<a id="trace-24856"></a>
<a id="trace-24858"></a>
<a id="trace-24866"></a>
<a id="trace-24868"></a>
<a id="trace-24877"></a>
<a id="trace-24879"></a>
<a id="trace-24886"></a>
<a id="trace-24888"></a>
<a id="trace-24900"></a>
<a id="trace-24902"></a>
<a id="trace-24910"></a>
<a id="trace-24912"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24936"></a>
<a id="trace-24938"></a>
<a id="trace-24959"></a>
<a id="trace-24961"></a>
<a id="trace-24974"></a>
<a id="trace-24976"></a>
<a id="trace-25047"></a>
<a id="trace-25049"></a>
<a id="trace-25060"></a>
<a id="trace-25062"></a>
<a id="trace-25079"></a>
<a id="trace-25081"></a>
<a id="trace-25092"></a>
<a id="trace-25094"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25112"></a>
<a id="trace-25114"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25132"></a>
<a id="trace-25134"></a>
<a id="trace-25146"></a>
<a id="trace-25148"></a>
<a id="trace-25160"></a>
<a id="trace-25162"></a>
<a id="trace-25230"></a>
<a id="trace-25232"></a>
<a id="trace-25246"></a>
<a id="trace-25248"></a>
<a id="trace-25267"></a>
<a id="trace-25269"></a>
<a id="trace-25278"></a>
<a id="trace-25280"></a>
<a id="trace-25296"></a>
<a id="trace-25298"></a>
<a id="trace-25313"></a>
<a id="trace-25315"></a>
<a id="trace-25326"></a>
<a id="trace-25328"></a>
<a id="trace-25336"></a>
<a id="trace-25338"></a>
<a id="trace-25349"></a>
<a id="trace-25351"></a>
<a id="trace-25361"></a>
<a id="trace-25363"></a>
<a id="trace-25429"></a>
<a id="trace-25431"></a>
<a id="trace-25441"></a>
<a id="trace-25443"></a>
<a id="trace-25457"></a>
<a id="trace-25459"></a>
<a id="trace-25466"></a>
<a id="trace-25468"></a>
<a id="trace-25484"></a>
<a id="trace-25486"></a>
<a id="trace-25496"></a>
<a id="trace-25498"></a>
<a id="trace-25513"></a>
<a id="trace-25515"></a>
<a id="trace-25527"></a>
<a id="trace-25529"></a>
<a id="trace-25549"></a>
<a id="trace-25551"></a>
<a id="trace-25564"></a>
<a id="trace-25566"></a>
<a id="trace-25636"></a>
<a id="trace-25638"></a>
<a id="trace-25648"></a>
<a id="trace-25650"></a>
<a id="trace-25662"></a>
<a id="trace-25664"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
- 238.30s–296.80s (×236), actor 5, squad 0 (trace 23330): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 236.10s, trace 23268. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23344}.
<a id="trace-2285"></a>
- 270.80s–270.80s (×1), actor 5, squad 1 (events line 2285): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24671"></a>
- 270.80s–270.80s (×1), actor 5, squad 1 (trace 24671): renew committed intent (75 s lifetime). Knowledge: actor memory at 270.80s, trace 24671. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2533}.
<a id="trace-2396"></a>
- 297.05s–297.05s (×1), actor 5, squad 0 (events line 2396): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25678"></a>
- 297.05s–297.05s (×1), actor 5, squad 0 (trace 25678): renew committed intent (75 s lifetime). Knowledge: actor memory at 297.05s, trace 25678. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25686}.
<a id="trace-25686"></a>
<a id="trace-25688"></a>
<a id="trace-25696"></a>
<a id="trace-25698"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25720"></a>
<a id="trace-25722"></a>
<a id="trace-25742"></a>
<a id="trace-25744"></a>
<a id="trace-25759"></a>
<a id="trace-25761"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25851"></a>
<a id="trace-25853"></a>
<a id="trace-25866"></a>
<a id="trace-25868"></a>
<a id="trace-25876"></a>
<a id="trace-25878"></a>
<a id="trace-25891"></a>
<a id="trace-25893"></a>
<a id="trace-25903"></a>
<a id="trace-25905"></a>
<a id="trace-25915"></a>
<a id="trace-25917"></a>
<a id="trace-25922"></a>
<a id="trace-25924"></a>
<a id="trace-25937"></a>
<a id="trace-25939"></a>
<a id="trace-25949"></a>
<a id="trace-25951"></a>
<a id="trace-26020"></a>
<a id="trace-26022"></a>
<a id="trace-26038"></a>
<a id="trace-26040"></a>
<a id="trace-26055"></a>
<a id="trace-26057"></a>
<a id="trace-26067"></a>
<a id="trace-26069"></a>
<a id="trace-26085"></a>
<a id="trace-26087"></a>
<a id="trace-26095"></a>
<a id="trace-26097"></a>
<a id="trace-26108"></a>
<a id="trace-26110"></a>
<a id="trace-26119"></a>
<a id="trace-26121"></a>
<a id="trace-26136"></a>
<a id="trace-26138"></a>
<a id="trace-26148"></a>
<a id="trace-26150"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26231"></a>
<a id="trace-26233"></a>
<a id="trace-26244"></a>
<a id="trace-26246"></a>
<a id="trace-26253"></a>
<a id="trace-26255"></a>
<a id="trace-26273"></a>
<a id="trace-26275"></a>
<a id="trace-26286"></a>
<a id="trace-26288"></a>
<a id="trace-26301"></a>
<a id="trace-26303"></a>
<a id="trace-26310"></a>
<a id="trace-26312"></a>
<a id="trace-26331"></a>
<a id="trace-26333"></a>
<a id="trace-26341"></a>
<a id="trace-26343"></a>
<a id="trace-26413"></a>
<a id="trace-26415"></a>
<a id="trace-26429"></a>
<a id="trace-26431"></a>
<a id="trace-26444"></a>
<a id="trace-26446"></a>
<a id="trace-26454"></a>
<a id="trace-26456"></a>
<a id="trace-26466"></a>
<a id="trace-26468"></a>
<a id="trace-26477"></a>
<a id="trace-26479"></a>
<a id="trace-26489"></a>
<a id="trace-26491"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26524"></a>
<a id="trace-26526"></a>
<a id="trace-26534"></a>
<a id="trace-26536"></a>
<a id="trace-26608"></a>
<a id="trace-26610"></a>
<a id="trace-26626"></a>
<a id="trace-26628"></a>
<a id="trace-26640"></a>
<a id="trace-26642"></a>
<a id="trace-26650"></a>
<a id="trace-26652"></a>
<a id="trace-26661"></a>
<a id="trace-26663"></a>
<a id="trace-26670"></a>
<a id="trace-26672"></a>
<a id="trace-26686"></a>
<a id="trace-26688"></a>
<a id="trace-26697"></a>
<a id="trace-26699"></a>
<a id="trace-26713"></a>
<a id="trace-26715"></a>
<a id="trace-26723"></a>
<a id="trace-26725"></a>
<a id="trace-26799"></a>
<a id="trace-26801"></a>
<a id="trace-26815"></a>
<a id="trace-26817"></a>
<a id="trace-26832"></a>
<a id="trace-26834"></a>
<a id="trace-26842"></a>
<a id="trace-26844"></a>
<a id="trace-26861"></a>
<a id="trace-26863"></a>
<a id="trace-26870"></a>
<a id="trace-26872"></a>
<a id="trace-26880"></a>
<a id="trace-26882"></a>
<a id="trace-26891"></a>
<a id="trace-26893"></a>
<a id="trace-26904"></a>
<a id="trace-26906"></a>
<a id="trace-26917"></a>
<a id="trace-26919"></a>
<a id="trace-26991"></a>
<a id="trace-26993"></a>
<a id="trace-27005"></a>
<a id="trace-27007"></a>
<a id="trace-27023"></a>
<a id="trace-27025"></a>
<a id="trace-27033"></a>
<a id="trace-27035"></a>
<a id="trace-27054"></a>
<a id="trace-27056"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27082"></a>
<a id="trace-27084"></a>
<a id="trace-27097"></a>
<a id="trace-27099"></a>
<a id="trace-27108"></a>
<a id="trace-27110"></a>
<a id="trace-27120"></a>
<a id="trace-27122"></a>
<a id="trace-27190"></a>
<a id="trace-27192"></a>
<a id="trace-27202"></a>
<a id="trace-27204"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27228"></a>
<a id="trace-27230"></a>
<a id="trace-27243"></a>
<a id="trace-27245"></a>
<a id="trace-27255"></a>
<a id="trace-27257"></a>
<a id="trace-27269"></a>
<a id="trace-27271"></a>
<a id="trace-27286"></a>
<a id="trace-27288"></a>
<a id="trace-27303"></a>
<a id="trace-27305"></a>
<a id="trace-27318"></a>
<a id="trace-27320"></a>
<a id="trace-27392"></a>
<a id="trace-27394"></a>
<a id="trace-27404"></a>
<a id="trace-27406"></a>
<a id="trace-27418"></a>
<a id="trace-27420"></a>
<a id="trace-27428"></a>
<a id="trace-27430"></a>
<a id="trace-27441"></a>
<a id="trace-27443"></a>
<a id="trace-27448"></a>
<a id="trace-27450"></a>
<a id="trace-27464"></a>
<a id="trace-27466"></a>
<a id="trace-27475"></a>
<a id="trace-27477"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27505"></a>
<a id="trace-27507"></a>
<a id="trace-27585"></a>
<a id="trace-27587"></a>
<a id="trace-27601"></a>
<a id="trace-27603"></a>
<a id="trace-27617"></a>
<a id="trace-27619"></a>
<a id="trace-27626"></a>
<a id="trace-27628"></a>
<a id="trace-27646"></a>
<a id="trace-27648"></a>
<a id="trace-27653"></a>
<a id="trace-27655"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27673"></a>
<a id="trace-27675"></a>
<a id="trace-27686"></a>
<a id="trace-27688"></a>
<a id="trace-27696"></a>
<a id="trace-27698"></a>
<a id="trace-27769"></a>
<a id="trace-27771"></a>
<a id="trace-27785"></a>
<a id="trace-27787"></a>
<a id="trace-27800"></a>
<a id="trace-27802"></a>
<a id="trace-27815"></a>
<a id="trace-27817"></a>
<a id="trace-27838"></a>
<a id="trace-27840"></a>
<a id="trace-27848"></a>
<a id="trace-27850"></a>
<a id="trace-27863"></a>
<a id="trace-27865"></a>
<a id="trace-27878"></a>
<a id="trace-27880"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27903"></a>
<a id="trace-27905"></a>
<a id="trace-27973"></a>
<a id="trace-27975"></a>
<a id="trace-27985"></a>
<a id="trace-27987"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28008"></a>
<a id="trace-28010"></a>
- 297.30s–356.80s (×240), actor 5, squad 0 (trace 25686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 297.05s, trace 25678. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25696}.
<a id="trace-2533"></a>
- 330.80s–330.80s (×1), actor 5, squad 1 (events line 2533): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27012"></a>
- 330.80s–330.80s (×1), actor 5, squad 1 (trace 27012): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.80s, trace 27012. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2634"></a>
- 357.05s–357.05s (×1), actor 5, squad 0 (events line 2634): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28014"></a>
- 357.05s–357.05s (×1), actor 5, squad 0 (trace 28014): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.05s, trace 28014. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28025}.
<a id="trace-28025"></a>
<a id="trace-28027"></a>
<a id="trace-28038"></a>
<a id="trace-28040"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28072"></a>
<a id="trace-28074"></a>
<a id="trace-28091"></a>
<a id="trace-28093"></a>
<a id="trace-28107"></a>
<a id="trace-28109"></a>
- 357.30s–359.80s (×12), actor 5, squad 0 (trace 28025): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 357.05s, trace 28014. Next observer evidence: {'until': 357.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28038}.

## Net delivery

282 matched order/radio deliveries; 488 explicitly recorded losses; 8 unmatched orders (not classified as lost).
Matched delay: mean 0.405s; maximum 1.500s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 1909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 1910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 1921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 1922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2683: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2695: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2696: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2705: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2706: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 3637: estimate 4.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 3638: estimate 4.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 3639: estimate 4.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 3640: estimate 4.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4304: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4309: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4310: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4312: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 4314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 4315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4316: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4317: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4320: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4321: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4322: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4324: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4325: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 4326: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 4327: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6981: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6985: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6986: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6990: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6991: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6992: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6993: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6994: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6995: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6996: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6997: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6999: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7000: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7001: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7002: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7630: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7631: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7634: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7635: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7637: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 7638: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7639: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7640: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7641: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7642: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7643: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7644: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7645: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7647: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7648: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 7649: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 7650: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 9838: estimate 13.53; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 9839: estimate 13.53; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9857: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9858: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9861: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9862: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9864: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 9865: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9866: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9867: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9868: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9869: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9870: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9871: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9872: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9874: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9875: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 9876: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 9877: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 10121: estimate 13.42; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 10122: estimate 13.42; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.05s leader 5, trace 10134: estimate 13.40; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10181: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10182: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10183: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10184: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10185: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10186: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10188: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10189: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10190: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10191: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10192: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10193: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10194: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10195: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10197: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10198: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 10199: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 10406: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 10407: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 10408: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 10409: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10410: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10411: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 10412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10413: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10414: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 10415: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 10416: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 10417: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 10418: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 10419: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 10420: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 10421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 10422: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 10423: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 10424: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10635: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 10636: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10637: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10638: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10639: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10640: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 10642: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10643: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10644: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10645: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10646: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10647: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10648: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10649: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10651: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 10652: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 10653: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10833: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 10834: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10835: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10836: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10837: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10839: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10840: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10841: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10842: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10843: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10844: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10845: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10846: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10848: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10849: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 10850: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11888: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 11889: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11890: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11891: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11892: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11894: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11895: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11896: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11897: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11898: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11899: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11900: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11901: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11903: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11904: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 11905: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 11971: estimate 13.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 11972: estimate 13.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 12003: estimate 13.91; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 12004: estimate 13.91; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12943: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 12944: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12945: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12946: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12947: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12949: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12950: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12951: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12952: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12953: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12954: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12955: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12956: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12958: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12959: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 12960: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 13097: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 13098: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 13131: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 13132: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13176: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 13177: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13178: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13179: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13180: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13182: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13183: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13184: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13185: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13186: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13187: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13188: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13189: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13191: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13192: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 13193: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13377: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 13378: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13379: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13380: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13381: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13383: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13384: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13385: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13386: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13387: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13388: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13389: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13390: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13392: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13393: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13394: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 13395: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 13396: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 13480: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 13481: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 14347: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 14348: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 14388: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 14389: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 14431: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 14432: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14433: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 14434: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14435: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14436: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14437: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14439: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14440: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14441: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14442: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14443: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14444: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14445: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14446: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14448: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14449: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 14450: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.15s leader 5, trace 14518: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.15s leader 5, trace 14519: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 14569: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 14570: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 14626: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 14627: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.05s leader 5, trace 14647: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.05s leader 5, trace 14648: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.05s leader 5, trace 14649: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.05s leader 5, trace 14650: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14682: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 14683: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14684: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14685: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14686: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14688: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14689: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14690: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14691: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14692: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14693: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14694: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14695: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14697: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14698: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 14699: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 15277: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 15278: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15279: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 15280: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 15281: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 15282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 15283: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 15284: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15285: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 15286: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15287: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15288: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15289: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15290: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 15291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 15292: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 15293: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 15294: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 15507: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 15508: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15509: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15510: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 15511: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 15512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15513: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15514: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15515: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15516: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15517: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15518: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15519: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15520: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15522: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15523: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 15524: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15826: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 15827: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15828: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15829: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15830: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15832: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15833: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15834: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15835: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15836: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15837: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15838: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15839: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15841: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15842: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 15843: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16079: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 16080: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16081: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16082: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 16083: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 16084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 16085: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16086: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16087: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16088: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16089: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16090: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16091: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16092: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16094: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16095: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 16096: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16323: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 16324: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16325: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16326: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16327: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16329: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16330: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16331: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16332: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16333: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16334: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16335: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16336: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16338: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16339: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 16340: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16727: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 16728: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16729: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16730: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16731: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16733: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16734: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16735: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16736: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16737: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16738: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16739: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16740: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16742: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16743: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 16744: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16974: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 16975: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16976: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16977: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16978: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16980: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16981: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16982: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16983: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16984: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16985: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16986: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16987: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16989: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16990: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 16991: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 17211: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 17212: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 17213: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 17214: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 17215: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 17216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 17217: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17218: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17219: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17220: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17221: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 17222: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17223: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17224: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 17226: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 17227: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 17228: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 17534: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 17535: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 17536: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17537: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 17538: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 17539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17540: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17541: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17542: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17543: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17544: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17545: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17546: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17547: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17549: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17550: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 17551: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17786: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 17787: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17788: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17789: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 17790: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 17791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17792: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17793: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17794: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17795: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17796: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17797: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17798: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17799: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17801: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17802: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 17803: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.20s leader 5, trace 17976: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.20s leader 5, trace 17977: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 18004: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 18005: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 18006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 18007: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 18008: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 18009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 18010: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 18011: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 18012: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 18013: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 18014: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 18015: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 18016: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 18017: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 18018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 18019: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 18020: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 18021: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 18314: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 18315: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 18316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 18317: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 18318: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 18319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 18320: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18321: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 18322: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 18323: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 18324: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 18325: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18326: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18327: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 18328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 18329: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18330: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 18331: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.20s leader 5, trace 18379: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 18545: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 18546: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 18547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 18548: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 18549: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 18550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 18551: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 18552: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18553: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 18554: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18555: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 18556: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18557: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18558: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18560: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18561: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 18562: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 159.80s leader 5, trace 18939: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 159.80s leader 5, trace 18940: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 18944: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 18945: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 18946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 18947: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 18948: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 18949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 18950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18951: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18952: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18953: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18954: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18955: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18956: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18957: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18959: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18960: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 18961: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 19378: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 19379: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 19380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 19381: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 19382: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 19383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 19384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 19385: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 19386: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 19387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 19388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 19389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 19390: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 19391: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 19392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 19393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 19394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 19395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 19623: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 19624: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 19625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 19626: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 19627: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 19628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 19629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 19630: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 19631: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 19632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 19633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 19634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 19635: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 19636: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 19637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 19638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 19639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 19640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 19881: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 19882: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 19883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 19884: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 19885: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 19886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 19887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19888: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 19889: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 19890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 19891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 19892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 19893: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 19894: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 19895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 19896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 19898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 20155: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 20156: estimate 1.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 20157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 20158: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 20159: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 20160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 20161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20162: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20163: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 20166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20167: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20168: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 20172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 20394: estimate 1.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 20395: estimate 1.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 20396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 20397: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 20398: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 20399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 20400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 20401: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 20402: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 20403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 20404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 20405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 20406: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 20407: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 20408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 20409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 20410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 20411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 21022: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 21023: estimate 1.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 21024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21025: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 21026: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 21027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 21029: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21030: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21031: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21034: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21035: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21037: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 21039: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.10s leader 5, trace 21134: estimate 10.46; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 21445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 21446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21447: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21448: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 21449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 21450: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21451: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21452: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21453: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21456: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21457: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21459: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 21461: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 21700: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 21701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21702: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21703: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 21704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 21705: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21706: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21707: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21708: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21711: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21712: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21714: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 21716: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.60s leader 5, trace 21784: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.60s leader 5, trace 21785: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 21937: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 21938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 21939: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21940: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 21941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 21942: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 21943: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21944: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 21945: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21948: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21949: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21951: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 21953: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 22130: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 22131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22132: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22133: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 22134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22135: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22136: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22137: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22138: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22141: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22142: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22144: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 22146: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.20s leader 5, trace 22187: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 22337: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 22338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22339: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22340: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 22341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 22342: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22343: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22344: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22345: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22348: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22349: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22351: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22353: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 22525: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 22526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 22527: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 22528: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 22529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 22530: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 22531: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22532: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 22533: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22536: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22537: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22539: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 22540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 22541: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 22762: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 22763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22764: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22765: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 22766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 22767: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22768: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22769: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22770: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22773: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22774: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22776: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 22778: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 22985: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 22986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 22987: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22988: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 22989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 22990: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 22991: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22992: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 22993: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22996: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22997: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22999: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 23001: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 23190: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 23191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23192: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23193: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 23194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 23195: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23196: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23197: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23198: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23201: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23202: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23204: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 23206: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.10s leader 5, trace 23267: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 236.10s leader 5, trace 23268: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 23400: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 23401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23402: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 23403: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 23404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 23405: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23406: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23407: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23408: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23411: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23412: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23414: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23416: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 23611: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 23612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23613: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23614: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 23615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 23616: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23617: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23618: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23619: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23622: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23623: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23625: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 23627: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 23814: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 23815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23816: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23817: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 23818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 23819: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23820: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23821: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23822: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23825: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23826: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23828: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 23830: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 24017: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 24018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24019: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24020: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24022: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24023: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24024: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24025: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24028: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24029: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24031: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 24033: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 24208: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 24209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24210: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 24211: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 24212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 24213: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24214: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24215: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24216: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24219: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24220: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24222: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 24224: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 24397: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 24398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24399: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 24400: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 24401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 24402: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24403: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24404: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24405: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24408: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24409: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24411: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 24413: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 24592: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 24593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24594: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 24595: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 24596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 24597: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24598: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24599: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24600: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24603: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24604: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24606: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 24608: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.80s leader 5, trace 24671: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 24793: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 24794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24795: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 24796: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 24797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 24798: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24799: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24800: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24801: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24804: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24805: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24807: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 24809: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 24981: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 24982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 24983: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 24984: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 24985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 24986: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 24987: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24988: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24989: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24992: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24993: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24995: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 24997: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 25168: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 25169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25170: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 25171: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 25172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 25173: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25174: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25175: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25176: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25179: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25180: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25182: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 25184: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 25367: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 25368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25369: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 25370: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 25371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 25372: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25373: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25374: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25375: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25378: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25379: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25381: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 25383: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 25572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 25573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 25576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 25577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 25588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.05s leader 5, trace 25678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 25767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 25768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 25770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 25771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 25783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 25957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 25958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 25960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 25961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 25962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 25973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 26156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 26157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 26159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 26160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 26161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 26162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 26172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 26349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 26350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 26352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 26353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 26354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 26365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 26545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 26546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 26548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 26549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 26550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 26561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 26731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 26732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 26734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 26735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 26747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 26926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 26927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 26929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 26930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 26931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 26942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.80s leader 5, trace 27012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 27128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 27129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 27130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 27131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 27132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 27133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 27134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 27135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 27136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 27137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 27138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 27139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 27140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 27141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 27142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 27143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 27144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 27324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 27325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 27327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 27328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 27329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 27340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 27514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 27515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 27518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 27519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 27530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 27705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 27706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 27708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 27709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 27710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 27721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 27911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 27912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 27914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 27915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 27916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 27927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.05s leader 5, trace 28014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 28113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 28114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 28115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 28116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 28117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 28118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 28119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 28120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 28121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 28122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 28123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 28124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 28125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 28126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 28127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 28128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 28129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Dane killed in action
- 1: Ellis killed in action
- 1: Seth incapacitated
- 1: Ash incapacitated
- 1: Rook killed in action

## Outcome attribution

- 89.05s, evidence 1101: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 89.05s, evidence 1102: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 89.05s, evidence 14647: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315026609755354, 'next_transition': 14661}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 89.05s, evidence 14648: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315026609755354, 'next_transition': 14661}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 89.05s, evidence 14649: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14760}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 89.05s, evidence 14650: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387403 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14760}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 150.20s, evidence 1541: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2009}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 210.20s, evidence 2009: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2285}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 236.10s, evidence 2137: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 236.10s, evidence 23267: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.434703 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23276}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 236.10s, evidence 23268: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.434703 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23276}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 270.80s, evidence 2285: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 297.05s, evidence 2396: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 330.80s, evidence 2533: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 357.05s, evidence 2634: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
