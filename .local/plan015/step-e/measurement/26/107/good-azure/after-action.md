# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/26/107/good-azure/battle-107-1789674239592142734`

## Battle summary

**Ember** · 360 s · 288 shots.

### Turning points

- 15.7s, squad 4: contact (events line 177). First recorded contact.
- 32.3s, squad 0: help call ([trace 5702](#trace-5702)). No completion observed before termination.
- 33.7s, squad 1: help answer ([trace 6046](#trace-6046)). 40.6s, squad 1: answered a neighbour with support by fire.
- 36.2s, squad 0: assault ([trace 7447](#trace-7447)). 37.2s, squad 0: advanced tactically.
- 39.4s, squad 0: help call ([trace 8165](#trace-8165)). 40.6s, squad 1: answered a neighbour with support by fire.
- 40.6s, squad 1: help answer ([trace 8287](#trace-8287)). 95.7s, squad 1: answered a neighbour with support by fire.
- 60.5s, squad 0: assault ([trace 10403](#trace-10403)). 62.5s, squad 0: took cover and returned fire.
- 72.8s, squad 0: withdrawal ([trace 13848](#trace-13848)). 94.5s, squad 0: took cover and returned fire.
- 94.5s, squad 0: help call ([trace 14877](#trace-14877)). No completion observed before termination.
- 95.7s, squad 1: help answer ([trace 14997](#trace-14997)). 98.2s, squad 1: advanced tactically.
- 2 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; no completed objective recorded; 46 shots, 7/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 7 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 184 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 51 shots, 0/2 lost.

### Decisions and attribution

At 35.9s, squad 1 chose FightHere: nearest known group ([trace 7052](#trace-7052)), followed by 2 shots and 0 own casualties; estimate 10.6 against 3 distinct squad-reported contacts; At 19.8s, squad 0 chose FightHere: nearest known group ([trace 3824](#trace-3824)), followed by 1 shots and 0 own casualties; estimate 10.0 against 9 distinct squad-reported contacts; At 32.5s, squad 0 chose took cover and returned fire ([trace 5720](#trace-5720)), followed by 1 shots and 0 own casualties; estimate 11.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 693](#trace-693)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 695](#trace-695)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.

### Communication

182 matched deliveries (mean 0.42s, max 2.40s); 521 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.65s, squad 4, contact, evidence events line 177: First recorded contact; .
- 32.30s, squad 0, help call, evidence 5702: NeedSupport; No completion observed before termination.
- 33.70s, squad 1, help answer, evidence 6046: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 40.6s, squad 1: answered a neighbour with support by fire.
- 36.20s, squad 0, assault, evidence 7447: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 37.2s, squad 0: advanced tactically.
- 39.40s, squad 0, help call, evidence 8165: NeedSupport; 40.6s, squad 1: answered a neighbour with support by fire.
- 40.60s, squad 1, help answer, evidence 8287: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 95.7s, squad 1: answered a neighbour with support by fire.
- 60.55s, squad 0, assault, evidence 10403: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 62.5s, squad 0: took cover and returned fire.
- 72.75s, squad 0, withdrawal, evidence 13848: BreakContact: believed ratio at least two without superiority; 94.5s, squad 0: took cover and returned fire.
- 94.45s, squad 0, help call, evidence 14877: NeedSupport; No completion observed before termination.
- 95.65s, squad 1, help answer, evidence 14997: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 98.2s, squad 1: advanced tactically.
- 102.25s, squad 1, withdrawal, evidence 15260: Withdraw to received rally; No completion observed before termination.
- 102.30s, squad 0, withdrawal, evidence 15314: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915965610539515, 'next_transition': 579}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915965610539515, 'next_transition': 579}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915965610539515, 'next_transition': 579}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528798766795727, 'next_transition': 87}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-638"></a>
<a id="trace-640"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-682"></a>
<a id="trace-684"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259979488374422, 'next_transition': 607}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.
<a id="trace-693"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 693): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 693. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450075726038188, 'next_transition': 712}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409974953178192, 'next_transition': 826}.
<a id="trace-712"></a>
<a id="trace-714"></a>
<a id="trace-738"></a>
<a id="trace-740"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-943"></a>
<a id="trace-945"></a>
<a id="trace-981"></a>
<a id="trace-983"></a>
<a id="trace-1014"></a>
<a id="trace-1016"></a>
<a id="trace-1050"></a>
<a id="trace-1052"></a>
<a id="trace-1079"></a>
<a id="trace-1081"></a>
<a id="trace-1110"></a>
<a id="trace-1112"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1170"></a>
<a id="trace-1172"></a>
<a id="trace-1186"></a>
<a id="trace-1188"></a>
<a id="trace-1281"></a>
<a id="trace-1283"></a>
<a id="trace-1293"></a>
<a id="trace-1295"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
<a id="trace-1336"></a>
<a id="trace-1338"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
<a id="trace-1383"></a>
<a id="trace-1385"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449949742082975, 'next_transition': 738}.
<a id="trace-826"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 826): traveling overwatch. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-873"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 873): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.104610185676037, 'next_transition': 1894}.
<a id="trace-947"></a>
<a id="trace-985"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1114"></a>
<a id="trace-1116"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1190"></a>
<a id="trace-1192"></a>
<a id="trace-1285"></a>
<a id="trace-1287"></a>
<a id="trace-1297"></a>
<a id="trace-1299"></a>
<a id="trace-1320"></a>
<a id="trace-1322"></a>
<a id="trace-1371"></a>
<a id="trace-1373"></a>
<a id="trace-1752"></a>
<a id="trace-1754"></a>
<a id="trace-1772"></a>
<a id="trace-1774"></a>
<a id="trace-1891"></a>
<a id="trace-1893"></a>
<a id="trace-2605"></a>
<a id="trace-2607"></a>
<a id="trace-2649"></a>
<a id="trace-2651"></a>
<a id="trace-2702"></a>
<a id="trace-2704"></a>
<a id="trace-2732"></a>
<a id="trace-2734"></a>
<a id="trace-3482"></a>
<a id="trace-3484"></a>
<a id="trace-3934"></a>
<a id="trace-3936"></a>
<a id="trace-3995"></a>
<a id="trace-3997"></a>
<a id="trace-4074"></a>
<a id="trace-4076"></a>
<a id="trace-4145"></a>
<a id="trace-4147"></a>
<a id="trace-4194"></a>
<a id="trace-4196"></a>
<a id="trace-4334"></a>
<a id="trace-4336"></a>
<a id="trace-4350"></a>
<a id="trace-4352"></a>
<a id="trace-4382"></a>
<a id="trace-4384"></a>
<a id="trace-4761"></a>
<a id="trace-4763"></a>
<a id="trace-4858"></a>
<a id="trace-4860"></a>
<a id="trace-4890"></a>
<a id="trace-4892"></a>
<a id="trace-4998"></a>
<a id="trace-5000"></a>
<a id="trace-5373"></a>
<a id="trace-5375"></a>
<a id="trace-5408"></a>
<a id="trace-5410"></a>
<a id="trace-5435"></a>
<a id="trace-5437"></a>
<a id="trace-5460"></a>
<a id="trace-5462"></a>
<a id="trace-5483"></a>
<a id="trace-5485"></a>
<a id="trace-5587"></a>
<a id="trace-5589"></a>
<a id="trace-5620"></a>
<a id="trace-5622"></a>
<a id="trace-5649"></a>
<a id="trace-5651"></a>
<a id="trace-5667"></a>
<a id="trace-5669"></a>
<a id="trace-5696"></a>
<a id="trace-5698"></a>
<a id="trace-5991"></a>
<a id="trace-5993"></a>
<a id="trace-6017"></a>
<a id="trace-6019"></a>
<a id="trace-6891"></a>
<a id="trace-6893"></a>
<a id="trace-6929"></a>
<a id="trace-6931"></a>
<a id="trace-7048"></a>
<a id="trace-7050"></a>
<a id="trace-7709"></a>
<a id="trace-7711"></a>
<a id="trace-7731"></a>
<a id="trace-7733"></a>
<a id="trace-8024"></a>
<a id="trace-8026"></a>
<a id="trace-8088"></a>
<a id="trace-8090"></a>
<a id="trace-8118"></a>
<a id="trace-8120"></a>
<a id="trace-8154"></a>
<a id="trace-8156"></a>
<a id="trace-8281"></a>
<a id="trace-8283"></a>
<a id="trace-8323"></a>
<a id="trace-8325"></a>
<a id="trace-8341"></a>
<a id="trace-8343"></a>
<a id="trace-8370"></a>
<a id="trace-8372"></a>
<a id="trace-8386"></a>
<a id="trace-8388"></a>
<a id="trace-8406"></a>
<a id="trace-8408"></a>
<a id="trace-8423"></a>
<a id="trace-8425"></a>
<a id="trace-8449"></a>
<a id="trace-8451"></a>
<a id="trace-8550"></a>
<a id="trace-8552"></a>
<a id="trace-8570"></a>
<a id="trace-8572"></a>
<a id="trace-8596"></a>
<a id="trace-8598"></a>
<a id="trace-8615"></a>
<a id="trace-8617"></a>
<a id="trace-8657"></a>
<a id="trace-8659"></a>
<a id="trace-8875"></a>
<a id="trace-8877"></a>
<a id="trace-8930"></a>
<a id="trace-8932"></a>
<a id="trace-8961"></a>
<a id="trace-8963"></a>
<a id="trace-9057"></a>
<a id="trace-9059"></a>
<a id="trace-9085"></a>
<a id="trace-9087"></a>
<a id="trace-9105"></a>
<a id="trace-9107"></a>
<a id="trace-9123"></a>
<a id="trace-9125"></a>
<a id="trace-9433"></a>
<a id="trace-9435"></a>
<a id="trace-9456"></a>
<a id="trace-9458"></a>
<a id="trace-9485"></a>
<a id="trace-9487"></a>
<a id="trace-9503"></a>
<a id="trace-9505"></a>
<a id="trace-9557"></a>
<a id="trace-9559"></a>
<a id="trace-9668"></a>
<a id="trace-9670"></a>
<a id="trace-9701"></a>
<a id="trace-9703"></a>
<a id="trace-9785"></a>
<a id="trace-9787"></a>
<a id="trace-9815"></a>
<a id="trace-9817"></a>
<a id="trace-9842"></a>
<a id="trace-9844"></a>
<a id="trace-9878"></a>
<a id="trace-9880"></a>
<a id="trace-9906"></a>
<a id="trace-9908"></a>
<a id="trace-9924"></a>
<a id="trace-9926"></a>
<a id="trace-10633"></a>
<a id="trace-10635"></a>
<a id="trace-10650"></a>
<a id="trace-10652"></a>
<a id="trace-10665"></a>
<a id="trace-10667"></a>
<a id="trace-10896"></a>
<a id="trace-10898"></a>
<a id="trace-10925"></a>
<a id="trace-10927"></a>
<a id="trace-10958"></a>
<a id="trace-10960"></a>
<a id="trace-10988"></a>
<a id="trace-10990"></a>
<a id="trace-11085"></a>
<a id="trace-11087"></a>
<a id="trace-11102"></a>
<a id="trace-11104"></a>
<a id="trace-11128"></a>
<a id="trace-11130"></a>
<a id="trace-11148"></a>
<a id="trace-11150"></a>
<a id="trace-11172"></a>
<a id="trace-11174"></a>
<a id="trace-11183"></a>
<a id="trace-11185"></a>
<a id="trace-11224"></a>
<a id="trace-11226"></a>
<a id="trace-11246"></a>
<a id="trace-11248"></a>
<a id="trace-11258"></a>
<a id="trace-11260"></a>
<a id="trace-11331"></a>
<a id="trace-11333"></a>
<a id="trace-11340"></a>
<a id="trace-11342"></a>
<a id="trace-11355"></a>
<a id="trace-11357"></a>
<a id="trace-13797"></a>
<a id="trace-13799"></a>
<a id="trace-13824"></a>
<a id="trace-13826"></a>
<a id="trace-13845"></a>
<a id="trace-13847"></a>
<a id="trace-13975"></a>
<a id="trace-13977"></a>
<a id="trace-13996"></a>
<a id="trace-13998"></a>
<a id="trace-14020"></a>
<a id="trace-14022"></a>
<a id="trace-14097"></a>
<a id="trace-14099"></a>
<a id="trace-14111"></a>
<a id="trace-14113"></a>
<a id="trace-14139"></a>
<a id="trace-14141"></a>
<a id="trace-14166"></a>
<a id="trace-14168"></a>
<a id="trace-14194"></a>
<a id="trace-14196"></a>
<a id="trace-14212"></a>
<a id="trace-14214"></a>
<a id="trace-14237"></a>
<a id="trace-14239"></a>
<a id="trace-14354"></a>
<a id="trace-14356"></a>
<a id="trace-14378"></a>
<a id="trace-14380"></a>
<a id="trace-14389"></a>
<a id="trace-14391"></a>
<a id="trace-14406"></a>
<a id="trace-14408"></a>
<a id="trace-14417"></a>
<a id="trace-14419"></a>
<a id="trace-14447"></a>
<a id="trace-14449"></a>
<a id="trace-14526"></a>
<a id="trace-14528"></a>
<a id="trace-14539"></a>
<a id="trace-14541"></a>
<a id="trace-14560"></a>
<a id="trace-14562"></a>
<a id="trace-14575"></a>
<a id="trace-14577"></a>
<a id="trace-14593"></a>
<a id="trace-14595"></a>
<a id="trace-14633"></a>
<a id="trace-14635"></a>
<a id="trace-14656"></a>
<a id="trace-14658"></a>
<a id="trace-14744"></a>
<a id="trace-14746"></a>
<a id="trace-14770"></a>
<a id="trace-14772"></a>
<a id="trace-14778"></a>
<a id="trace-14780"></a>
<a id="trace-14802"></a>
<a id="trace-14804"></a>
<a id="trace-14814"></a>
<a id="trace-14816"></a>
<a id="trace-14831"></a>
<a id="trace-14833"></a>
<a id="trace-14846"></a>
<a id="trace-14848"></a>
<a id="trace-14870"></a>
<a id="trace-14872"></a>
<a id="trace-14911"></a>
<a id="trace-14913"></a>
<a id="trace-15007"></a>
<a id="trace-15009"></a>
<a id="trace-15028"></a>
<a id="trace-15030"></a>
<a id="trace-15038"></a>
<a id="trace-15040"></a>
<a id="trace-15057"></a>
<a id="trace-15059"></a>
<a id="trace-15072"></a>
<a id="trace-15074"></a>
<a id="trace-15101"></a>
<a id="trace-15103"></a>
<a id="trace-15120"></a>
<a id="trace-15122"></a>
<a id="trace-15137"></a>
<a id="trace-15139"></a>
<a id="trace-15147"></a>
<a id="trace-15149"></a>
<a id="trace-15221"></a>
<a id="trace-15223"></a>
<a id="trace-15345"></a>
<a id="trace-15347"></a>
<a id="trace-15362"></a>
<a id="trace-15364"></a>
<a id="trace-15379"></a>
<a id="trace-15381"></a>
<a id="trace-15402"></a>
<a id="trace-15404"></a>
<a id="trace-15496"></a>
<a id="trace-15498"></a>
<a id="trace-15508"></a>
<a id="trace-15510"></a>
<a id="trace-15518"></a>
<a id="trace-15520"></a>
<a id="trace-15533"></a>
<a id="trace-15535"></a>
<a id="trace-15544"></a>
<a id="trace-15546"></a>
<a id="trace-15556"></a>
<a id="trace-15558"></a>
<a id="trace-15567"></a>
<a id="trace-15569"></a>
<a id="trace-15578"></a>
<a id="trace-15580"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15688"></a>
<a id="trace-15690"></a>
<a id="trace-15709"></a>
<a id="trace-15711"></a>
<a id="trace-15717"></a>
<a id="trace-15719"></a>
<a id="trace-15730"></a>
<a id="trace-15732"></a>
<a id="trace-15747"></a>
<a id="trace-15749"></a>
<a id="trace-15761"></a>
<a id="trace-15763"></a>
<a id="trace-15847"></a>
<a id="trace-15849"></a>
<a id="trace-15876"></a>
<a id="trace-15878"></a>
<a id="trace-15893"></a>
<a id="trace-15895"></a>
<a id="trace-15901"></a>
<a id="trace-15903"></a>
<a id="trace-15913"></a>
<a id="trace-15915"></a>
<a id="trace-15925"></a>
<a id="trace-15927"></a>
<a id="trace-15936"></a>
<a id="trace-15938"></a>
<a id="trace-15943"></a>
<a id="trace-15945"></a>
<a id="trace-16010"></a>
<a id="trace-16012"></a>
<a id="trace-16016"></a>
<a id="trace-16018"></a>
<a id="trace-16038"></a>
<a id="trace-16040"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16068"></a>
<a id="trace-16070"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16100"></a>
<a id="trace-16102"></a>
<a id="trace-16116"></a>
<a id="trace-16118"></a>
<a id="trace-16126"></a>
<a id="trace-16128"></a>
<a id="trace-16195"></a>
<a id="trace-16197"></a>
<a id="trace-16203"></a>
<a id="trace-16205"></a>
<a id="trace-16209"></a>
<a id="trace-16211"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16226"></a>
<a id="trace-16228"></a>
<a id="trace-16242"></a>
<a id="trace-16244"></a>
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16271"></a>
<a id="trace-16273"></a>
<a id="trace-16337"></a>
<a id="trace-16339"></a>
<a id="trace-16343"></a>
<a id="trace-16345"></a>
<a id="trace-16353"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16359"></a>
<a id="trace-16371"></a>
<a id="trace-16373"></a>
<a id="trace-16377"></a>
<a id="trace-16379"></a>
<a id="trace-16389"></a>
<a id="trace-16391"></a>
<a id="trace-16400"></a>
<a id="trace-16402"></a>
<a id="trace-16412"></a>
<a id="trace-16414"></a>
<a id="trace-16482"></a>
<a id="trace-16484"></a>
<a id="trace-16514"></a>
<a id="trace-16516"></a>
<a id="trace-16522"></a>
<a id="trace-16524"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16636"></a>
<a id="trace-16638"></a>
<a id="trace-16650"></a>
<a id="trace-16652"></a>
<a id="trace-16665"></a>
<a id="trace-16667"></a>
<a id="trace-16672"></a>
<a id="trace-16674"></a>
<a id="trace-16686"></a>
<a id="trace-16688"></a>
<a id="trace-16709"></a>
<a id="trace-16711"></a>
<a id="trace-16716"></a>
<a id="trace-16718"></a>
<a id="trace-16784"></a>
<a id="trace-16786"></a>
<a id="trace-16795"></a>
<a id="trace-16797"></a>
<a id="trace-16817"></a>
<a id="trace-16819"></a>
<a id="trace-16828"></a>
<a id="trace-16830"></a>
<a id="trace-16841"></a>
<a id="trace-16843"></a>
<a id="trace-16859"></a>
<a id="trace-16861"></a>
<a id="trace-16868"></a>
<a id="trace-16870"></a>
<a id="trace-16882"></a>
<a id="trace-16884"></a>
<a id="trace-16888"></a>
<a id="trace-16890"></a>
<a id="trace-16957"></a>
<a id="trace-16959"></a>
<a id="trace-16974"></a>
<a id="trace-16976"></a>
<a id="trace-16983"></a>
<a id="trace-16985"></a>
<a id="trace-16998"></a>
<a id="trace-17000"></a>
<a id="trace-17011"></a>
<a id="trace-17013"></a>
<a id="trace-17041"></a>
<a id="trace-17043"></a>
<a id="trace-17061"></a>
<a id="trace-17063"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17135"></a>
<a id="trace-17137"></a>
<a id="trace-17148"></a>
<a id="trace-17150"></a>
<a id="trace-17153"></a>
<a id="trace-17155"></a>
<a id="trace-17167"></a>
<a id="trace-17169"></a>
<a id="trace-17175"></a>
<a id="trace-17177"></a>
<a id="trace-17188"></a>
<a id="trace-17190"></a>
<a id="trace-17200"></a>
<a id="trace-17202"></a>
<a id="trace-17217"></a>
<a id="trace-17219"></a>
<a id="trace-17303"></a>
<a id="trace-17305"></a>
<a id="trace-17310"></a>
<a id="trace-17312"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17328"></a>
<a id="trace-17330"></a>
<a id="trace-17341"></a>
<a id="trace-17343"></a>
<a id="trace-17349"></a>
<a id="trace-17351"></a>
<a id="trace-17361"></a>
<a id="trace-17363"></a>
<a id="trace-17370"></a>
<a id="trace-17372"></a>
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17393"></a>
<a id="trace-17395"></a>
<a id="trace-17463"></a>
<a id="trace-17465"></a>
<a id="trace-17489"></a>
<a id="trace-17491"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17521"></a>
<a id="trace-17523"></a>
<a id="trace-17533"></a>
<a id="trace-17535"></a>
<a id="trace-17544"></a>
<a id="trace-17546"></a>
<a id="trace-17558"></a>
<a id="trace-17560"></a>
<a id="trace-17564"></a>
<a id="trace-17566"></a>
<a id="trace-17632"></a>
<a id="trace-17634"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17652"></a>
<a id="trace-17654"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17676"></a>
<a id="trace-17678"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17699"></a>
<a id="trace-17701"></a>
<a id="trace-17715"></a>
<a id="trace-17717"></a>
<a id="trace-17729"></a>
<a id="trace-17731"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17814"></a>
<a id="trace-17816"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17833"></a>
<a id="trace-17835"></a>
<a id="trace-17847"></a>
<a id="trace-17849"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17877"></a>
<a id="trace-17879"></a>
<a id="trace-17898"></a>
<a id="trace-17900"></a>
<a id="trace-17975"></a>
<a id="trace-17977"></a>
<a id="trace-17981"></a>
<a id="trace-17983"></a>
<a id="trace-18000"></a>
<a id="trace-18002"></a>
<a id="trace-18019"></a>
<a id="trace-18021"></a>
<a id="trace-18027"></a>
<a id="trace-18029"></a>
<a id="trace-18039"></a>
<a id="trace-18041"></a>
<a id="trace-18048"></a>
<a id="trace-18050"></a>
<a id="trace-18063"></a>
<a id="trace-18065"></a>
<a id="trace-18069"></a>
<a id="trace-18071"></a>
<a id="trace-18139"></a>
<a id="trace-18141"></a>
<a id="trace-18148"></a>
<a id="trace-18150"></a>
<a id="trace-18161"></a>
<a id="trace-18163"></a>
<a id="trace-18175"></a>
<a id="trace-18177"></a>
<a id="trace-18189"></a>
<a id="trace-18191"></a>
<a id="trace-18198"></a>
<a id="trace-18200"></a>
<a id="trace-18216"></a>
<a id="trace-18218"></a>
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18244"></a>
<a id="trace-18246"></a>
<a id="trace-18312"></a>
<a id="trace-18314"></a>
<a id="trace-18318"></a>
<a id="trace-18320"></a>
<a id="trace-18335"></a>
<a id="trace-18337"></a>
<a id="trace-18343"></a>
<a id="trace-18345"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18367"></a>
<a id="trace-18369"></a>
<a id="trace-18384"></a>
<a id="trace-18386"></a>
<a id="trace-18395"></a>
<a id="trace-18397"></a>
<a id="trace-18412"></a>
<a id="trace-18414"></a>
<a id="trace-18427"></a>
<a id="trace-18429"></a>
<a id="trace-18495"></a>
<a id="trace-18497"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18513"></a>
<a id="trace-18515"></a>
<a id="trace-18531"></a>
<a id="trace-18533"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18574"></a>
<a id="trace-18576"></a>
<a id="trace-18583"></a>
<a id="trace-18585"></a>
<a id="trace-18652"></a>
<a id="trace-18654"></a>
<a id="trace-18662"></a>
<a id="trace-18664"></a>
<a id="trace-18684"></a>
<a id="trace-18686"></a>
<a id="trace-18691"></a>
<a id="trace-18693"></a>
<a id="trace-18705"></a>
<a id="trace-18707"></a>
<a id="trace-18712"></a>
<a id="trace-18714"></a>
<a id="trace-18724"></a>
<a id="trace-18726"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18749"></a>
<a id="trace-18751"></a>
<a id="trace-18824"></a>
<a id="trace-18826"></a>
<a id="trace-18829"></a>
<a id="trace-18831"></a>
<a id="trace-18844"></a>
<a id="trace-18846"></a>
<a id="trace-18852"></a>
<a id="trace-18854"></a>
<a id="trace-18896"></a>
<a id="trace-18898"></a>
<a id="trace-18905"></a>
<a id="trace-18907"></a>
<a id="trace-18920"></a>
<a id="trace-18922"></a>
<a id="trace-18927"></a>
<a id="trace-18929"></a>
<a id="trace-18996"></a>
<a id="trace-18998"></a>
<a id="trace-19001"></a>
<a id="trace-19003"></a>
<a id="trace-19015"></a>
<a id="trace-19017"></a>
<a id="trace-19020"></a>
<a id="trace-19022"></a>
<a id="trace-19036"></a>
<a id="trace-19038"></a>
<a id="trace-19057"></a>
<a id="trace-19059"></a>
<a id="trace-19066"></a>
<a id="trace-19068"></a>
<a id="trace-19086"></a>
<a id="trace-19088"></a>
<a id="trace-19095"></a>
<a id="trace-19097"></a>
<a id="trace-19166"></a>
<a id="trace-19168"></a>
<a id="trace-19187"></a>
<a id="trace-19189"></a>
<a id="trace-19192"></a>
<a id="trace-19194"></a>
<a id="trace-19207"></a>
<a id="trace-19209"></a>
<a id="trace-19224"></a>
<a id="trace-19226"></a>
<a id="trace-19236"></a>
<a id="trace-19238"></a>
<a id="trace-19249"></a>
<a id="trace-19251"></a>
<a id="trace-19258"></a>
<a id="trace-19260"></a>
<a id="trace-19326"></a>
<a id="trace-19328"></a>
<a id="trace-19349"></a>
<a id="trace-19351"></a>
<a id="trace-19377"></a>
<a id="trace-19379"></a>
<a id="trace-19385"></a>
<a id="trace-19387"></a>
<a id="trace-19405"></a>
<a id="trace-19407"></a>
<a id="trace-19424"></a>
<a id="trace-19426"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
<a id="trace-19499"></a>
<a id="trace-19501"></a>
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19543"></a>
<a id="trace-19545"></a>
<a id="trace-19555"></a>
<a id="trace-19557"></a>
<a id="trace-19574"></a>
<a id="trace-19576"></a>
<a id="trace-19590"></a>
<a id="trace-19592"></a>
<a id="trace-19596"></a>
<a id="trace-19598"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-19683"></a>
<a id="trace-19685"></a>
<a id="trace-19690"></a>
<a id="trace-19692"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19712"></a>
<a id="trace-19714"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19753"></a>
<a id="trace-19755"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19833"></a>
<a id="trace-19835"></a>
<a id="trace-19841"></a>
<a id="trace-19843"></a>
<a id="trace-19856"></a>
<a id="trace-19858"></a>
<a id="trace-19864"></a>
<a id="trace-19866"></a>
<a id="trace-19877"></a>
<a id="trace-19879"></a>
<a id="trace-19886"></a>
<a id="trace-19888"></a>
<a id="trace-19900"></a>
<a id="trace-19902"></a>
<a id="trace-19909"></a>
<a id="trace-19911"></a>
<a id="trace-19924"></a>
<a id="trace-19926"></a>
<a id="trace-19996"></a>
<a id="trace-19998"></a>
<a id="trace-20007"></a>
<a id="trace-20009"></a>
<a id="trace-20021"></a>
<a id="trace-20023"></a>
<a id="trace-20028"></a>
<a id="trace-20030"></a>
<a id="trace-20070"></a>
<a id="trace-20072"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
<a id="trace-20094"></a>
<a id="trace-20096"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20170"></a>
<a id="trace-20172"></a>
<a id="trace-20176"></a>
<a id="trace-20178"></a>
<a id="trace-20190"></a>
<a id="trace-20192"></a>
<a id="trace-20195"></a>
<a id="trace-20197"></a>
<a id="trace-20212"></a>
<a id="trace-20214"></a>
<a id="trace-20221"></a>
<a id="trace-20223"></a>
<a id="trace-20235"></a>
<a id="trace-20237"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20273"></a>
<a id="trace-20275"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20349"></a>
<a id="trace-20351"></a>
<a id="trace-20369"></a>
<a id="trace-20371"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20391"></a>
<a id="trace-20393"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20506"></a>
<a id="trace-20508"></a>
<a id="trace-20512"></a>
<a id="trace-20514"></a>
<a id="trace-20531"></a>
<a id="trace-20533"></a>
<a id="trace-20540"></a>
<a id="trace-20542"></a>
<a id="trace-20556"></a>
<a id="trace-20558"></a>
<a id="trace-20585"></a>
<a id="trace-20587"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20673"></a>
<a id="trace-20675"></a>
<a id="trace-20682"></a>
<a id="trace-20684"></a>
<a id="trace-20700"></a>
<a id="trace-20702"></a>
<a id="trace-20721"></a>
<a id="trace-20723"></a>
<a id="trace-20738"></a>
<a id="trace-20740"></a>
<a id="trace-20750"></a>
<a id="trace-20752"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20866"></a>
<a id="trace-20868"></a>
<a id="trace-20881"></a>
<a id="trace-20883"></a>
<a id="trace-20908"></a>
<a id="trace-20910"></a>
<a id="trace-20925"></a>
<a id="trace-20927"></a>
<a id="trace-20935"></a>
<a id="trace-20937"></a>
<a id="trace-21004"></a>
<a id="trace-21006"></a>
<a id="trace-21017"></a>
<a id="trace-21019"></a>
<a id="trace-21036"></a>
<a id="trace-21038"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21067"></a>
<a id="trace-21069"></a>
<a id="trace-21093"></a>
<a id="trace-21095"></a>
<a id="trace-21166"></a>
<a id="trace-21168"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21195"></a>
<a id="trace-21197"></a>
<a id="trace-21213"></a>
<a id="trace-21215"></a>
<a id="trace-21222"></a>
<a id="trace-21224"></a>
<a id="trace-21247"></a>
<a id="trace-21249"></a>
<a id="trace-21266"></a>
<a id="trace-21268"></a>
<a id="trace-21341"></a>
<a id="trace-21343"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21422"></a>
<a id="trace-21424"></a>
<a id="trace-21433"></a>
<a id="trace-21435"></a>
<a id="trace-21503"></a>
<a id="trace-21505"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21541"></a>
<a id="trace-21543"></a>
<a id="trace-21549"></a>
<a id="trace-21551"></a>
<a id="trace-21562"></a>
<a id="trace-21564"></a>
<a id="trace-21571"></a>
<a id="trace-21573"></a>
<a id="trace-21586"></a>
<a id="trace-21588"></a>
<a id="trace-21593"></a>
<a id="trace-21595"></a>
<a id="trace-21665"></a>
<a id="trace-21667"></a>
<a id="trace-21673"></a>
<a id="trace-21675"></a>
<a id="trace-21687"></a>
<a id="trace-21689"></a>
<a id="trace-21700"></a>
<a id="trace-21702"></a>
<a id="trace-21716"></a>
<a id="trace-21718"></a>
<a id="trace-21723"></a>
<a id="trace-21725"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21749"></a>
<a id="trace-21751"></a>
<a id="trace-21763"></a>
<a id="trace-21765"></a>
<a id="trace-21769"></a>
<a id="trace-21771"></a>
<a id="trace-21837"></a>
<a id="trace-21839"></a>
<a id="trace-21855"></a>
<a id="trace-21857"></a>
<a id="trace-21863"></a>
<a id="trace-21865"></a>
<a id="trace-21880"></a>
<a id="trace-21882"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21906"></a>
<a id="trace-21908"></a>
<a id="trace-21918"></a>
<a id="trace-21920"></a>
<a id="trace-21933"></a>
<a id="trace-21935"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22042"></a>
<a id="trace-22044"></a>
<a id="trace-22052"></a>
<a id="trace-22054"></a>
<a id="trace-22063"></a>
<a id="trace-22065"></a>
<a id="trace-22093"></a>
<a id="trace-22095"></a>
<a id="trace-22100"></a>
<a id="trace-22102"></a>
<a id="trace-22170"></a>
<a id="trace-22172"></a>
<a id="trace-22194"></a>
<a id="trace-22196"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
<a id="trace-22224"></a>
<a id="trace-22226"></a>
<a id="trace-22257"></a>
<a id="trace-22259"></a>
<a id="trace-22264"></a>
<a id="trace-22266"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
<a id="trace-22363"></a>
<a id="trace-22365"></a>
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22406"></a>
<a id="trace-22408"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22430"></a>
<a id="trace-22432"></a>
<a id="trace-22441"></a>
<a id="trace-22443"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22515"></a>
<a id="trace-22517"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22535"></a>
<a id="trace-22537"></a>
<a id="trace-22553"></a>
<a id="trace-22555"></a>
<a id="trace-22575"></a>
<a id="trace-22577"></a>
<a id="trace-22607"></a>
<a id="trace-22609"></a>
<a id="trace-22680"></a>
<a id="trace-22682"></a>
<a id="trace-22687"></a>
<a id="trace-22689"></a>
<a id="trace-22699"></a>
<a id="trace-22701"></a>
<a id="trace-22705"></a>
<a id="trace-22707"></a>
<a id="trace-22726"></a>
<a id="trace-22728"></a>
<a id="trace-22739"></a>
<a id="trace-22741"></a>
<a id="trace-22752"></a>
<a id="trace-22754"></a>
<a id="trace-22773"></a>
<a id="trace-22775"></a>
<a id="trace-22846"></a>
<a id="trace-22848"></a>
<a id="trace-22886"></a>
<a id="trace-22888"></a>
<a id="trace-22894"></a>
<a id="trace-22896"></a>
<a id="trace-22906"></a>
<a id="trace-22908"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-22936"></a>
<a id="trace-22938"></a>
<a id="trace-23006"></a>
<a id="trace-23008"></a>
<a id="trace-23015"></a>
<a id="trace-23017"></a>
<a id="trace-23033"></a>
<a id="trace-23035"></a>
<a id="trace-23049"></a>
<a id="trace-23051"></a>
<a id="trace-23058"></a>
<a id="trace-23060"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23089"></a>
<a id="trace-23091"></a>
<a id="trace-23104"></a>
<a id="trace-23106"></a>
<a id="trace-23176"></a>
<a id="trace-23178"></a>
<a id="trace-23194"></a>
<a id="trace-23196"></a>
<a id="trace-23201"></a>
<a id="trace-23203"></a>
<a id="trace-23236"></a>
<a id="trace-23238"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23262"></a>
<a id="trace-23264"></a>
<a id="trace-23342"></a>
<a id="trace-23344"></a>
<a id="trace-23349"></a>
<a id="trace-23351"></a>
<a id="trace-23364"></a>
<a id="trace-23366"></a>
<a id="trace-23371"></a>
<a id="trace-23373"></a>
<a id="trace-23386"></a>
<a id="trace-23388"></a>
<a id="trace-23405"></a>
<a id="trace-23407"></a>
<a id="trace-23414"></a>
<a id="trace-23416"></a>
<a id="trace-23431"></a>
<a id="trace-23433"></a>
<a id="trace-23441"></a>
<a id="trace-23443"></a>
<a id="trace-23509"></a>
<a id="trace-23511"></a>
<a id="trace-23530"></a>
<a id="trace-23532"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23560"></a>
<a id="trace-23562"></a>
<a id="trace-23576"></a>
<a id="trace-23578"></a>
<a id="trace-23598"></a>
<a id="trace-23600"></a>
<a id="trace-23605"></a>
<a id="trace-23607"></a>
<a id="trace-23673"></a>
<a id="trace-23675"></a>
<a id="trace-23682"></a>
<a id="trace-23684"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23704"></a>
<a id="trace-23706"></a>
<a id="trace-23718"></a>
<a id="trace-23720"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23743"></a>
<a id="trace-23745"></a>
<a id="trace-23765"></a>
<a id="trace-23767"></a>
<a id="trace-23845"></a>
<a id="trace-23847"></a>
<a id="trace-23851"></a>
<a id="trace-23853"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
<a id="trace-23915"></a>
<a id="trace-23917"></a>
<a id="trace-23930"></a>
<a id="trace-23932"></a>
<a id="trace-23941"></a>
<a id="trace-23943"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 947): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 762. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625372285426513, 'next_transition': 985}.
<a id="trace-1389"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1389): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725134541047533, 'next_transition': 1690}.
<a id="trace-1390"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1390): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725134541047533, 'next_transition': 1690}.
<a id="trace-1690"></a>
<a id="trace-1692"></a>
<a id="trace-1712"></a>
<a id="trace-1714"></a>
<a id="trace-1748"></a>
<a id="trace-1750"></a>
<a id="trace-1768"></a>
<a id="trace-1770"></a>
<a id="trace-1852"></a>
<a id="trace-1854"></a>
<a id="trace-1887"></a>
<a id="trace-1889"></a>
<a id="trace-2519"></a>
<a id="trace-2521"></a>
<a id="trace-2556"></a>
<a id="trace-2558"></a>
<a id="trace-2601"></a>
<a id="trace-2603"></a>
<a id="trace-2645"></a>
<a id="trace-2647"></a>
<a id="trace-2698"></a>
<a id="trace-2700"></a>
<a id="trace-2728"></a>
<a id="trace-2730"></a>
- 13.20s–18.75s (×24), actor 5, squad 0 (trace 1690): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1205. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134256994147975, 'next_transition': 1712}.
<a id="trace-1894"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1894): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1790. Next observer evidence: None.
<a id="trace-1895"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1895): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1790. Next observer evidence: None.
<a id="trace-1896"></a>
<a id="trace-2017"></a>
<a id="trace-2140"></a>
<a id="trace-2258"></a>
<a id="trace-2382"></a>
- 15.70s–16.10s (×5), actor 8, squad 1 (trace 1896): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1790. Next observer evidence: None.
<a id="trace-2749"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 2749): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1782. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.115805194658156, 'next_transition': 3113}.
<a id="trace-2750"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 2750): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1782. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.115805194658156, 'next_transition': 3113}.
<a id="trace-2751"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 2751): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1782. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.115805194658156, 'next_transition': 3113}.
<a id="trace-3113"></a>
<a id="trace-3115"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 3113): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1787. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26057635573873505, 'next_transition': 3478}.
<a id="trace-3118"></a>
- 19.25s–19.25s (×1), actor 0, squad 0 (trace 3118): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1782. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26057635573873505, 'next_transition': 3478}.
<a id="trace-3462"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 3462): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1790. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 327}.
<a id="trace-3478"></a>
<a id="trace-3480"></a>
- 19.75s–19.75s (×2), actor 5, squad 0 (trace 3478): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1787. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12883932175455018, 'next_transition': 326}.
<a id="trace-3485"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 3485): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1782. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12883932175455018, 'next_transition': 326}.
<a id="trace-326"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 326): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-327"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 327): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3823"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 3823): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3823. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2608701952001559, 'next_transition': 3930}.
<a id="trace-3824"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 3824): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3824. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2608701952001559, 'next_transition': 3930}.
<a id="trace-3825"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 3825): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3825. Next observer evidence: {'until': 21.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6990252988626374, 'next_transition': 4089}.
<a id="trace-3826"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 3826): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802863 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3826. Next observer evidence: {'until': 21.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6990252988626374, 'next_transition': 4089}.
<a id="trace-3930"></a>
<a id="trace-3932"></a>
<a id="trace-3991"></a>
<a id="trace-3993"></a>
<a id="trace-4037"></a>
<a id="trace-4039"></a>
<a id="trace-4070"></a>
<a id="trace-4072"></a>
<a id="trace-4141"></a>
<a id="trace-4143"></a>
<a id="trace-4190"></a>
<a id="trace-4192"></a>
<a id="trace-4330"></a>
<a id="trace-4332"></a>
- 20.25s–23.25s (×14), actor 5, squad 0 (trace 3930): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3836. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39482850778027123, 'next_transition': 3991}.
<a id="trace-4089"></a>
- 21.90s–21.90s (×1), actor 8, squad 1 (trace 4089): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3839. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6914440775832853, 'next_transition': 4201}.
<a id="trace-4201"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 4201): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3839. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0583682786020248, 'next_transition': 4917}.
<a id="trace-4339"></a>
- 23.30s–23.30s (×1), actor 0, squad 0 (trace 4339): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3831. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4346}.
<a id="trace-4346"></a>
<a id="trace-4348"></a>
<a id="trace-4378"></a>
<a id="trace-4380"></a>
- 23.75s–24.25s (×4), actor 5, squad 0 (trace 4346): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3836. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4378}.
<a id="trace-4386"></a>
- 24.30s–24.30s (×1), actor 0, squad 0 (trace 4386): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3831. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4757}.
<a id="trace-4757"></a>
<a id="trace-4759"></a>
<a id="trace-4854"></a>
<a id="trace-4856"></a>
<a id="trace-4886"></a>
<a id="trace-4888"></a>
<a id="trace-4925"></a>
<a id="trace-4927"></a>
<a id="trace-4943"></a>
<a id="trace-4945"></a>
<a id="trace-4993"></a>
<a id="trace-4995"></a>
- 24.75s–27.25s (×12), actor 5, squad 0 (trace 4757): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3836. Next observer evidence: {'until': 25.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4854}.
<a id="trace-4917"></a>
- 26.15s–26.15s (×1), actor 8, squad 1 (trace 4917): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4773. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1809675299965784, 'next_transition': 527}.
<a id="trace-5001"></a>
- 27.35s–27.35s (×1), actor 0, squad 0 (trace 5001): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 4765. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1536357502242353, 'next_transition': 5368}.
<a id="trace-5368"></a>
<a id="trace-5370"></a>
<a id="trace-5403"></a>
<a id="trace-5405"></a>
<a id="trace-5430"></a>
<a id="trace-5432"></a>
<a id="trace-5455"></a>
<a id="trace-5457"></a>
<a id="trace-5478"></a>
<a id="trace-5480"></a>
<a id="trace-5582"></a>
<a id="trace-5584"></a>
<a id="trace-5615"></a>
<a id="trace-5617"></a>
- 27.75s–30.75s (×14), actor 5, squad 0 (trace 5368): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4770. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1752028511672256, 'next_transition': 5403}.
<a id="trace-527"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (events line 527): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5486"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 5486): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.781178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 5486. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2493178425113642, 'next_transition': 5652}.
<a id="trace-5487"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 5487): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.781178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 5487. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2493178425113642, 'next_transition': 5652}.
<a id="trace-5628"></a>
- 31.00s–31.00s (×1), actor 0, squad 0 (trace 5628): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5490. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06107900021494013, 'next_transition': 5643}.
<a id="trace-5643"></a>
<a id="trace-5645"></a>
<a id="trace-5661"></a>
<a id="trace-5663"></a>
<a id="trace-5690"></a>
<a id="trace-5692"></a>
- 31.25s–32.25s (×6), actor 5, squad 0 (trace 5643): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5495. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5661}.
<a id="trace-5652"></a>
- 31.25s–31.25s (×1), actor 8, squad 1 (trace 5652): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 5498. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5205730427672592, 'next_transition': 6046}.
<a id="trace-5700"></a>
- 32.30s–32.30s (×1), actor 0, squad 0 (trace 5700): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 5490. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5714}.
<a id="trace-5702"></a>
- 32.30s–32.30s (×1), actor 0, squad 0 (trace 5702): NeedSupport. Knowledge: actor memory at 30.00s, trace 5490. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5714}.
<a id="trace-5714"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 5714): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 5490. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5985}.
<a id="trace-5720"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 5720): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 5490. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5985}.
<a id="trace-5721"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 5721): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 5490. Next observer evidence: {'until': 32.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5985}.
<a id="trace-5985"></a>
<a id="trace-5987"></a>
<a id="trace-6011"></a>
<a id="trace-6013"></a>
<a id="trace-6885"></a>
<a id="trace-6887"></a>
<a id="trace-6924"></a>
<a id="trace-6926"></a>
<a id="trace-6941"></a>
<a id="trace-6943"></a>
<a id="trace-7030"></a>
<a id="trace-7032"></a>
<a id="trace-7043"></a>
<a id="trace-7045"></a>
- 32.75s–35.75s (×14), actor 5, squad 0 (trace 5985): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5495. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49501025132965687, 'next_transition': 6011}.
<a id="trace-6046"></a>
- 33.70s–33.70s (×1), actor 8, squad 1 (trace 6046): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 5498. Next observer evidence: None.
<a id="trace-6047"></a>
- 33.70s–33.70s (×1), actor 8, squad 1 (trace 6047): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 30.00s, trace 5498. Next observer evidence: None.
<a id="trace-6895"></a>
- 33.75s–33.75s (×1), actor 8, squad 1 (trace 6895): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 30.00s, trace 5498. Next observer evidence: {'until': 35.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2835030393576056, 'next_transition': 621}.
<a id="trace-621"></a>
- 35.85s–35.85s (×1), actor 5, squad 1 (events line 621): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7051"></a>
- 35.85s–35.85s (×1), actor 5, squad 1 (trace 7051): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.657315 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 35.85s, trace 7051. Next observer evidence: {'until': 40.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8287}.
<a id="trace-7052"></a>
- 35.85s–35.85s (×1), actor 5, squad 1 (trace 7052): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.657315 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 35.85s, trace 7052. Next observer evidence: {'until': 40.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8287}.
<a id="trace-7062"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 7062): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7064"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 7064): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7447"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 7447): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7448"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 7448): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7692"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 7692): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7693"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 7693): Assaulting. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7704"></a>
<a id="trace-7706"></a>
<a id="trace-7726"></a>
<a id="trace-7728"></a>
- 36.25s–36.75s (×4), actor 5, squad 0 (trace 7704): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.85s, trace 7052. Next observer evidence: {'until': 36.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7726}.
<a id="trace-7748"></a>
- 37.20s–37.20s (×1), actor 0, squad 0 (trace 7748): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7754"></a>
- 37.20s–37.20s (×1), actor 0, squad 0 (trace 7754): MoveTactically. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-7755"></a>
- 37.20s–37.20s (×1), actor 0, squad 0 (trace 7755): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: None.
<a id="trace-8017"></a>
<a id="trace-8019"></a>
<a id="trace-8034"></a>
<a id="trace-8036"></a>
<a id="trace-8083"></a>
<a id="trace-8085"></a>
<a id="trace-8113"></a>
<a id="trace-8115"></a>
<a id="trace-8149"></a>
<a id="trace-8151"></a>
- 37.25s–39.25s (×10), actor 5, squad 0 (trace 8017): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.85s, trace 7052. Next observer evidence: {'until': 37.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11042857142857139, 'next_transition': 8034}.
<a id="trace-8165"></a>
- 39.40s–39.40s (×1), actor 0, squad 0 (trace 8165): NeedSupport. Knowledge: actor memory at 35.00s, trace 6952. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15440176345258197, 'next_transition': 8186}.
<a id="trace-8186"></a>
<a id="trace-8188"></a>
<a id="trace-8276"></a>
<a id="trace-8278"></a>
<a id="trace-8300"></a>
<a id="trace-8302"></a>
<a id="trace-8318"></a>
<a id="trace-8320"></a>
<a id="trace-8336"></a>
<a id="trace-8338"></a>
<a id="trace-8364"></a>
<a id="trace-8366"></a>
<a id="trace-8380"></a>
<a id="trace-8382"></a>
<a id="trace-8400"></a>
<a id="trace-8402"></a>
<a id="trace-8417"></a>
<a id="trace-8419"></a>
<a id="trace-8443"></a>
<a id="trace-8445"></a>
<a id="trace-8464"></a>
<a id="trace-8466"></a>
<a id="trace-8544"></a>
<a id="trace-8546"></a>
<a id="trace-8564"></a>
<a id="trace-8566"></a>
<a id="trace-8590"></a>
<a id="trace-8592"></a>
<a id="trace-8609"></a>
<a id="trace-8611"></a>
<a id="trace-8651"></a>
<a id="trace-8653"></a>
- 39.75s–47.25s (×32), actor 5, squad 0 (trace 8186): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.85s, trace 7052. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4474579052443695, 'next_transition': 8276}.
<a id="trace-8287"></a>
- 40.60s–40.60s (×1), actor 9, squad 1 (trace 8287): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 8203. Next observer evidence: None.
<a id="trace-8288"></a>
- 40.60s–40.60s (×1), actor 9, squad 1 (trace 8288): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 8203. Next observer evidence: None.
<a id="trace-8290"></a>
- 40.65s–40.65s (×1), actor 9, squad 1 (trace 8290): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 8203. Next observer evidence: {'until': 70.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14997}.
<a id="trace-8670"></a>
- 47.55s–47.55s (×1), actor 0, squad 0 (trace 8670): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 8474. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8869}.
<a id="trace-8869"></a>
<a id="trace-8871"></a>
<a id="trace-8893"></a>
<a id="trace-8895"></a>
<a id="trace-8924"></a>
<a id="trace-8926"></a>
<a id="trace-8955"></a>
<a id="trace-8957"></a>
<a id="trace-8973"></a>
<a id="trace-8975"></a>
<a id="trace-9051"></a>
<a id="trace-9053"></a>
<a id="trace-9079"></a>
<a id="trace-9081"></a>
<a id="trace-9099"></a>
<a id="trace-9101"></a>
<a id="trace-9117"></a>
<a id="trace-9119"></a>
- 47.75s–51.75s (×18), actor 5, squad 0 (trace 8869): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8478. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8893}.
<a id="trace-9128"></a>
- 52.05s–52.05s (×1), actor 0, squad 0 (trace 9128): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 8983. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21903662567570253, 'next_transition': 9427}.
<a id="trace-9129"></a>
- 52.05s–52.05s (×1), actor 0, squad 0 (trace 9129): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 8983. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21903662567570253, 'next_transition': 9427}.
<a id="trace-9427"></a>
<a id="trace-9429"></a>
<a id="trace-9450"></a>
<a id="trace-9452"></a>
<a id="trace-9479"></a>
<a id="trace-9481"></a>
<a id="trace-9497"></a>
<a id="trace-9499"></a>
<a id="trace-9523"></a>
<a id="trace-9525"></a>
<a id="trace-9551"></a>
<a id="trace-9553"></a>
<a id="trace-9662"></a>
<a id="trace-9664"></a>
<a id="trace-9695"></a>
<a id="trace-9697"></a>
- 52.25s–55.75s (×16), actor 5, squad 0 (trace 9427): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8987. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.44067476922943855, 'next_transition': 9450}.
<a id="trace-9719"></a>
- 56.05s–56.05s (×1), actor 5, squad 0 (trace 9719): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 56.05s, trace 9719. Next observer evidence: None.
<a id="trace-9731"></a>
- 56.10s–56.10s (×1), actor 0, squad 0 (trace 9731): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 9571. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47596486110988256, 'next_transition': 9744}.
<a id="trace-9744"></a>
<a id="trace-9746"></a>
<a id="trace-9779"></a>
<a id="trace-9781"></a>
<a id="trace-9809"></a>
<a id="trace-9811"></a>
<a id="trace-9836"></a>
<a id="trace-9838"></a>
<a id="trace-9864"></a>
<a id="trace-9866"></a>
<a id="trace-9874"></a>
<a id="trace-9876"></a>
<a id="trace-9902"></a>
<a id="trace-9904"></a>
<a id="trace-9920"></a>
<a id="trace-9922"></a>
<a id="trace-10010"></a>
<a id="trace-10012"></a>
- 56.25s–60.25s (×18), actor 5, squad 0 (trace 9744): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 56.05s, trace 9719. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9154275689725803, 'next_transition': 9779}.
<a id="trace-10020"></a>
- 60.55s–60.55s (×1), actor 0, squad 0 (trace 10020): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21082268873171933, 'next_transition': 10629}.
<a id="trace-10403"></a>
- 60.55s–60.55s (×1), actor 0, squad 0 (trace 10403): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21082268873171933, 'next_transition': 10629}.
<a id="trace-10404"></a>
- 60.55s–60.55s (×1), actor 0, squad 0 (trace 10404): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21082268873171933, 'next_transition': 10629}.
<a id="trace-10607"></a>
- 60.55s–60.55s (×1), actor 0, squad 0 (trace 10607): Assaulting. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21082268873171933, 'next_transition': 10629}.
<a id="trace-10629"></a>
<a id="trace-10631"></a>
<a id="trace-10646"></a>
<a id="trace-10648"></a>
<a id="trace-10661"></a>
<a id="trace-10663"></a>
- 60.75s–61.75s (×6), actor 5, squad 0 (trace 10629): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9937. Next observer evidence: {'until': 61.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.6426702331906038, 'next_transition': 10646}.
<a id="trace-10672"></a>
- 61.80s–61.80s (×1), actor 0, squad 0 (trace 10672): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4592615269016783, 'next_transition': 10700}.
<a id="trace-10700"></a>
<a id="trace-10702"></a>
- 62.25s–62.25s (×2), actor 5, squad 0 (trace 10700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9937. Next observer evidence: {'until': 62.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1275805089672259, 'next_transition': 10716}.
<a id="trace-10716"></a>
- 62.55s–62.55s (×1), actor 0, squad 0 (trace 10716): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.112798975174631, 'next_transition': 10892}.
<a id="trace-10720"></a>
- 62.55s–62.55s (×1), actor 0, squad 0 (trace 10720): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.112798975174631, 'next_transition': 10892}.
<a id="trace-10721"></a>
- 62.55s–62.55s (×1), actor 0, squad 0 (trace 10721): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 9935. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.112798975174631, 'next_transition': 10892}.
<a id="trace-10892"></a>
<a id="trace-10894"></a>
<a id="trace-10921"></a>
<a id="trace-10923"></a>
<a id="trace-10954"></a>
<a id="trace-10956"></a>
<a id="trace-10984"></a>
<a id="trace-10986"></a>
<a id="trace-10997"></a>
<a id="trace-10999"></a>
<a id="trace-11081"></a>
<a id="trace-11083"></a>
- 62.75s–65.25s (×12), actor 5, squad 0 (trace 10892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9937. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49619381535714197, 'next_transition': 10921}.
<a id="trace-1111"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (events line 1111): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 66, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30763948909967676, 'next_transition': 11116}.
<a id="trace-11098"></a>
<a id="trace-11100"></a>
- 65.75s–65.75s (×2), actor 5, squad 0 (trace 11098): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11009. Next observer evidence: {'until': 66, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30763948909967676, 'next_transition': 11116}.
<a id="trace-11105"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 11105): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.326229 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 11105. Next observer evidence: {'until': 66, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30763948909967676, 'next_transition': 11116}.
<a id="trace-11106"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 11106): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.326229 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 11106. Next observer evidence: {'until': 66, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30763948909967676, 'next_transition': 11116}.
<a id="trace-11116"></a>
- 66.10s–66.10s (×1), actor 0, squad 0 (trace 11116): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 11007. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19809462073082693, 'next_transition': 11124}.
<a id="trace-11124"></a>
<a id="trace-11126"></a>
<a id="trace-11143"></a>
<a id="trace-11145"></a>
<a id="trace-11167"></a>
<a id="trace-11169"></a>
<a id="trace-11178"></a>
<a id="trace-11180"></a>
<a id="trace-11201"></a>
<a id="trace-11203"></a>
<a id="trace-11219"></a>
<a id="trace-11221"></a>
<a id="trace-11241"></a>
<a id="trace-11243"></a>
<a id="trace-11253"></a>
<a id="trace-11255"></a>
<a id="trace-11326"></a>
<a id="trace-11328"></a>
<a id="trace-11336"></a>
<a id="trace-11338"></a>
<a id="trace-11351"></a>
<a id="trace-11353"></a>
- 66.25s–71.25s (×22), actor 5, squad 0 (trace 11124): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.75s, trace 11106. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5406983135369233, 'next_transition': 11143}.
<a id="trace-11359"></a>
- 71.50s–71.50s (×1), actor 4, squad 0 (trace 11359): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 11262. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11593680878500195, 'next_transition': 13793}.
<a id="trace-13786"></a>
- 71.50s–71.50s (×1), actor 4, squad 0 (trace 13786): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 70.00s, trace 11262. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11593680878500195, 'next_transition': 13793}.
<a id="trace-13787"></a>
- 71.50s–71.50s (×1), actor 4, squad 0 (trace 13787): MoveTactically. Knowledge: actor memory at 70.00s, trace 11262. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11593680878500195, 'next_transition': 13793}.
<a id="trace-13788"></a>
- 71.50s–71.50s (×1), actor 4, squad 0 (trace 13788): contact cover complete: assessment resumes closure. Knowledge: actor memory at 70.00s, trace 11262. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11593680878500195, 'next_transition': 13793}.
<a id="trace-13793"></a>
<a id="trace-13795"></a>
<a id="trace-13820"></a>
<a id="trace-13822"></a>
<a id="trace-13840"></a>
<a id="trace-13842"></a>
- 71.75s–72.75s (×6), actor 5, squad 0 (trace 13793): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11263. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5873315836062787, 'next_transition': 13820}.
<a id="trace-13848"></a>
- 72.75s–72.75s (×1), actor 4, squad 0 (trace 13848): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 11262. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6111579493931991, 'next_transition': 13955}.
<a id="trace-13849"></a>
- 72.75s–72.75s (×1), actor 4, squad 0 (trace 13849): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 11262. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6111579493931991, 'next_transition': 13955}.
<a id="trace-13955"></a>
<a id="trace-13957"></a>
<a id="trace-13970"></a>
<a id="trace-13972"></a>
<a id="trace-13991"></a>
<a id="trace-13993"></a>
<a id="trace-14015"></a>
<a id="trace-14017"></a>
<a id="trace-14092"></a>
<a id="trace-14094"></a>
<a id="trace-14106"></a>
<a id="trace-14108"></a>
<a id="trace-14126"></a>
<a id="trace-14128"></a>
<a id="trace-14135"></a>
<a id="trace-14137"></a>
<a id="trace-14162"></a>
<a id="trace-14164"></a>
<a id="trace-14172"></a>
<a id="trace-14174"></a>
<a id="trace-14190"></a>
<a id="trace-14192"></a>
<a id="trace-14208"></a>
<a id="trace-14210"></a>
<a id="trace-14225"></a>
<a id="trace-14227"></a>
<a id="trace-14233"></a>
<a id="trace-14235"></a>
<a id="trace-14312"></a>
<a id="trace-14314"></a>
<a id="trace-14322"></a>
<a id="trace-14324"></a>
<a id="trace-14341"></a>
<a id="trace-14343"></a>
<a id="trace-14350"></a>
<a id="trace-14352"></a>
<a id="trace-14374"></a>
<a id="trace-14376"></a>
<a id="trace-14385"></a>
<a id="trace-14387"></a>
<a id="trace-14402"></a>
<a id="trace-14404"></a>
<a id="trace-14413"></a>
<a id="trace-14415"></a>
<a id="trace-14433"></a>
<a id="trace-14435"></a>
<a id="trace-14443"></a>
<a id="trace-14445"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14535"></a>
<a id="trace-14537"></a>
<a id="trace-14556"></a>
<a id="trace-14558"></a>
<a id="trace-14571"></a>
<a id="trace-14573"></a>
<a id="trace-14589"></a>
<a id="trace-14591"></a>
<a id="trace-14600"></a>
<a id="trace-14602"></a>
<a id="trace-14619"></a>
<a id="trace-14621"></a>
<a id="trace-14629"></a>
<a id="trace-14631"></a>
<a id="trace-14652"></a>
<a id="trace-14654"></a>
<a id="trace-14663"></a>
<a id="trace-14665"></a>
<a id="trace-14740"></a>
<a id="trace-14742"></a>
<a id="trace-14751"></a>
<a id="trace-14753"></a>
<a id="trace-14766"></a>
<a id="trace-14768"></a>
<a id="trace-14774"></a>
<a id="trace-14776"></a>
<a id="trace-14798"></a>
<a id="trace-14800"></a>
<a id="trace-14810"></a>
<a id="trace-14812"></a>
<a id="trace-14827"></a>
<a id="trace-14829"></a>
<a id="trace-14842"></a>
<a id="trace-14844"></a>
<a id="trace-14866"></a>
<a id="trace-14868"></a>
- 73.25s–94.25s (×86), actor 5, squad 0 (trace 13955): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11263. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6639476594427027, 'next_transition': 13970}.
<a id="trace-14876"></a>
- 94.45s–94.45s (×1), actor 4, squad 0 (trace 14876): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: None.
<a id="trace-14877"></a>
- 94.45s–94.45s (×1), actor 4, squad 0 (trace 14877): NeedSupport. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: None.
<a id="trace-14884"></a>
- 94.50s–94.50s (×1), actor 4, squad 0 (trace 14884): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14907}.
<a id="trace-14886"></a>
- 94.50s–94.50s (×1), actor 4, squad 0 (trace 14886): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14907}.
<a id="trace-14887"></a>
- 94.50s–94.50s (×1), actor 4, squad 0 (trace 14887): Reorganise complete: known contact. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14907}.
<a id="trace-14907"></a>
<a id="trace-14909"></a>
- 94.75s–94.75s (×2), actor 5, squad 0 (trace 14907): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14674. Next observer evidence: {'until': 94.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14914}.
<a id="trace-14914"></a>
- 94.80s–94.80s (×1), actor 4, squad 0 (trace 14914): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21340000000000003, 'next_transition': 15003}.
<a id="trace-14915"></a>
- 94.80s–94.80s (×1), actor 4, squad 0 (trace 14915): ; retain contact cover stage. Knowledge: actor memory at 90.00s, trace 14673. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21340000000000003, 'next_transition': 15003}.
<a id="trace-14997"></a>
- 95.65s–95.65s (×1), actor 9, squad 1 (trace 14997): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 14925. Next observer evidence: None.
<a id="trace-14998"></a>
- 95.65s–95.65s (×1), actor 9, squad 1 (trace 14998): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 95.00s, trace 14925. Next observer evidence: None.
<a id="trace-15001"></a>
- 95.70s–95.70s (×1), actor 9, squad 1 (trace 15001): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 95.00s, trace 14925. Next observer evidence: {'until': 96.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1312}.
<a id="trace-15003"></a>
<a id="trace-15005"></a>
<a id="trace-15024"></a>
<a id="trace-15026"></a>
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15053"></a>
<a id="trace-15055"></a>
<a id="trace-15068"></a>
<a id="trace-15070"></a>
- 95.75s–97.75s (×10), actor 5, squad 0 (trace 15003): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14923. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26560000000000034, 'next_transition': 15024}.
<a id="trace-1312"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (events line 1312): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15042"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (trace 15042): renew committed intent (75 s lifetime). Knowledge: actor memory at 96.95s, trace 15042. Next observer evidence: {'until': 98, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15083}.
<a id="trace-15075"></a>
- 97.85s–97.85s (×1), actor 4, squad 0 (trace 15075): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 95.00s, trace 14922. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13699666666666666, 'next_transition': 15097}.
<a id="trace-15077"></a>
- 97.85s–97.85s (×1), actor 4, squad 0 (trace 15077): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 95.00s, trace 14922. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13699666666666666, 'next_transition': 15097}.
<a id="trace-15083"></a>
- 98.15s–98.15s (×1), actor 9, squad 1 (trace 15083): MoveTactically. Knowledge: actor memory at 95.00s, trace 14925. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15089}.
<a id="trace-15084"></a>
- 98.15s–98.15s (×1), actor 9, squad 1 (trace 15084): received platoon directive. Knowledge: actor memory at 95.00s, trace 14925. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15089}.
<a id="trace-15089"></a>
- 98.20s–98.20s (×1), actor 9, squad 1 (trace 15089): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 14925. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1391}.
<a id="trace-15097"></a>
<a id="trace-15099"></a>
<a id="trace-15116"></a>
<a id="trace-15118"></a>
<a id="trace-15133"></a>
<a id="trace-15135"></a>
<a id="trace-15210"></a>
<a id="trace-15212"></a>
- 98.25s–100.25s (×8), actor 5, squad 0 (trace 15097): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 96.95s, trace 15042. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15116}.
<a id="trace-1390"></a>
- 101.05s–101.05s (×1), actor 5, squad 0 (events line 1390): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550000000000068, 'next_transition': 15237}.
<a id="trace-1391"></a>
- 101.05s–101.05s (×1), actor 5, squad 1 (events line 1391): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15260}.
<a id="trace-15229"></a>
- 101.05s–101.05s (×1), actor 5, squad 0 (trace 15229): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 15229. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550000000000068, 'next_transition': 15237}.
<a id="trace-15230"></a>
- 101.05s–101.05s (×1), actor 5, squad 0 (trace 15230): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 15230. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550000000000068, 'next_transition': 15237}.
<a id="trace-15231"></a>
- 101.05s–101.05s (×1), actor 5, squad 1 (trace 15231): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 15231. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15260}.
<a id="trace-15232"></a>
- 101.05s–101.05s (×1), actor 5, squad 1 (trace 15232): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 15232. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15260}.
<a id="trace-15237"></a>
<a id="trace-15239"></a>
<a id="trace-15253"></a>
<a id="trace-15255"></a>
- 101.25s–102.25s (×4), actor 5, squad 0 (trace 15237): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 101.05s, trace 15232. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.527099999999999, 'next_transition': 15253}.
<a id="trace-15260"></a>
- 102.25s–102.25s (×1), actor 9, squad 1 (trace 15260): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 15154. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 15734}.
<a id="trace-15261"></a>
- 102.25s–102.25s (×1), actor 9, squad 1 (trace 15261): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 15154. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 15734}.
<a id="trace-15314"></a>
- 102.30s–102.30s (×1), actor 4, squad 0 (trace 15314): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 15152. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15356}.
<a id="trace-15315"></a>
- 102.30s–102.30s (×1), actor 4, squad 0 (trace 15315): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 15152. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15356}.
<a id="trace-15356"></a>
<a id="trace-15358"></a>
<a id="trace-15396"></a>
<a id="trace-15398"></a>
<a id="trace-15481"></a>
<a id="trace-15483"></a>
<a id="trace-15502"></a>
<a id="trace-15504"></a>
<a id="trace-15527"></a>
<a id="trace-15529"></a>
<a id="trace-15550"></a>
<a id="trace-15552"></a>
<a id="trace-15572"></a>
<a id="trace-15574"></a>
<a id="trace-15652"></a>
<a id="trace-15654"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15703"></a>
<a id="trace-15705"></a>
<a id="trace-15724"></a>
<a id="trace-15726"></a>
<a id="trace-15755"></a>
<a id="trace-15757"></a>
<a id="trace-15841"></a>
<a id="trace-15843"></a>
<a id="trace-15861"></a>
<a id="trace-15863"></a>
<a id="trace-15887"></a>
<a id="trace-15889"></a>
<a id="trace-15907"></a>
<a id="trace-15909"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16025"></a>
<a id="trace-16027"></a>
<a id="trace-16050"></a>
<a id="trace-16052"></a>
<a id="trace-16079"></a>
<a id="trace-16081"></a>
- 103.25s–123.25s (×42), actor 5, squad 0 (trace 15356): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 101.05s, trace 15232. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15396}.
<a id="trace-15734"></a>
- 113.30s–113.30s (×1), actor 9, squad 1 (trace 15734): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 15595. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1547}.
<a id="trace-15735"></a>
- 113.30s–113.30s (×1), actor 9, squad 1 (trace 15735): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 15595. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1547}.
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16236"></a>
<a id="trace-16238"></a>
- 127.25s–128.30s (×4), actor 4, squad 0 (trace 16220): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 125.00s, trace 16133. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16236}.
<a id="trace-1546"></a>
- 128.85s–128.85s (×1), actor 4, squad 0 (events line 1546): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1547"></a>
- 128.85s–128.85s (×1), actor 4, squad 1 (events line 1547): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16253"></a>
- 128.85s–128.85s (×1), actor 4, squad 0 (trace 16253): renew committed intent (75 s lifetime). Knowledge: actor memory at 128.85s, trace 16253. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16260}.
<a id="trace-16254"></a>
- 128.85s–128.85s (×1), actor 4, squad 1 (trace 16254): renew committed intent (75 s lifetime). Knowledge: actor memory at 128.85s, trace 16254. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1849}.
<a id="trace-16260"></a>
<a id="trace-16262"></a>
<a id="trace-16331"></a>
<a id="trace-16333"></a>
<a id="trace-16347"></a>
<a id="trace-16349"></a>
<a id="trace-16365"></a>
<a id="trace-16367"></a>
<a id="trace-16383"></a>
<a id="trace-16385"></a>
<a id="trace-16406"></a>
<a id="trace-16408"></a>
<a id="trace-16476"></a>
<a id="trace-16478"></a>
<a id="trace-16493"></a>
<a id="trace-16495"></a>
<a id="trace-16509"></a>
<a id="trace-16530"></a>
<a id="trace-16532"></a>
<a id="trace-16551"></a>
<a id="trace-16553"></a>
<a id="trace-16625"></a>
<a id="trace-16627"></a>
<a id="trace-16643"></a>
<a id="trace-16659"></a>
<a id="trace-16661"></a>
<a id="trace-16680"></a>
<a id="trace-16682"></a>
<a id="trace-16703"></a>
<a id="trace-16705"></a>
<a id="trace-16778"></a>
<a id="trace-16780"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16835"></a>
<a id="trace-16837"></a>
<a id="trace-16853"></a>
<a id="trace-16855"></a>
<a id="trace-16876"></a>
<a id="trace-16878"></a>
<a id="trace-16951"></a>
<a id="trace-16953"></a>
<a id="trace-16968"></a>
<a id="trace-16970"></a>
<a id="trace-16992"></a>
<a id="trace-16994"></a>
<a id="trace-17027"></a>
<a id="trace-17029"></a>
<a id="trace-17051"></a>
<a id="trace-17053"></a>
<a id="trace-17123"></a>
<a id="trace-17125"></a>
<a id="trace-17142"></a>
<a id="trace-17144"></a>
<a id="trace-17161"></a>
<a id="trace-17163"></a>
<a id="trace-17182"></a>
<a id="trace-17184"></a>
<a id="trace-17211"></a>
<a id="trace-17213"></a>
<a id="trace-17297"></a>
<a id="trace-17299"></a>
<a id="trace-17317"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17355"></a>
<a id="trace-17357"></a>
<a id="trace-17379"></a>
<a id="trace-17381"></a>
<a id="trace-17457"></a>
<a id="trace-17459"></a>
<a id="trace-17483"></a>
<a id="trace-17485"></a>
<a id="trace-17505"></a>
<a id="trace-17507"></a>
<a id="trace-17527"></a>
<a id="trace-17529"></a>
<a id="trace-17552"></a>
<a id="trace-17554"></a>
<a id="trace-17626"></a>
<a id="trace-17628"></a>
<a id="trace-17646"></a>
<a id="trace-17648"></a>
<a id="trace-17670"></a>
<a id="trace-17672"></a>
<a id="trace-17693"></a>
<a id="trace-17695"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17805"></a>
<a id="trace-17807"></a>
<a id="trace-17821"></a>
<a id="trace-17823"></a>
<a id="trace-17841"></a>
<a id="trace-17843"></a>
<a id="trace-17862"></a>
<a id="trace-17864"></a>
<a id="trace-17887"></a>
<a id="trace-17889"></a>
<a id="trace-17969"></a>
<a id="trace-17971"></a>
<a id="trace-17994"></a>
<a id="trace-17996"></a>
<a id="trace-18013"></a>
<a id="trace-18015"></a>
<a id="trace-18033"></a>
<a id="trace-18035"></a>
<a id="trace-18057"></a>
<a id="trace-18059"></a>
<a id="trace-18133"></a>
<a id="trace-18135"></a>
<a id="trace-18155"></a>
<a id="trace-18157"></a>
<a id="trace-18185"></a>
<a id="trace-18210"></a>
<a id="trace-18212"></a>
<a id="trace-18231"></a>
<a id="trace-18233"></a>
<a id="trace-18306"></a>
<a id="trace-18308"></a>
- 129.30s–190.30s (×120), actor 4, squad 0 (trace 16260): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 128.85s, trace 16254. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16331}.
<a id="trace-1848"></a>
- 191.05s–191.05s (×1), actor 4, squad 0 (events line 1848): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18329}.
<a id="trace-1849"></a>
- 191.05s–191.05s (×1), actor 4, squad 1 (events line 1849): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 221, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2199}.
<a id="trace-18323"></a>
- 191.05s–191.05s (×1), actor 4, squad 0 (trace 18323): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.05s, trace 18323. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18329}.
<a id="trace-18324"></a>
- 191.05s–191.05s (×1), actor 4, squad 1 (trace 18324): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.05s, trace 18324. Next observer evidence: {'until': 221, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2199}.
<a id="trace-18329"></a>
<a id="trace-18331"></a>
<a id="trace-18353"></a>
<a id="trace-18355"></a>
<a id="trace-18378"></a>
<a id="trace-18380"></a>
<a id="trace-18406"></a>
<a id="trace-18408"></a>
<a id="trace-18489"></a>
<a id="trace-18491"></a>
<a id="trace-18507"></a>
<a id="trace-18509"></a>
<a id="trace-18525"></a>
<a id="trace-18527"></a>
<a id="trace-18546"></a>
<a id="trace-18548"></a>
<a id="trace-18568"></a>
<a id="trace-18570"></a>
<a id="trace-18646"></a>
<a id="trace-18648"></a>
<a id="trace-18678"></a>
<a id="trace-18680"></a>
<a id="trace-18699"></a>
<a id="trace-18701"></a>
<a id="trace-18718"></a>
<a id="trace-18720"></a>
<a id="trace-18743"></a>
<a id="trace-18745"></a>
<a id="trace-18818"></a>
<a id="trace-18820"></a>
<a id="trace-18838"></a>
<a id="trace-18840"></a>
<a id="trace-18859"></a>
<a id="trace-18861"></a>
<a id="trace-18890"></a>
<a id="trace-18892"></a>
<a id="trace-18914"></a>
<a id="trace-18916"></a>
<a id="trace-18990"></a>
<a id="trace-18992"></a>
<a id="trace-19009"></a>
<a id="trace-19011"></a>
<a id="trace-19030"></a>
<a id="trace-19032"></a>
<a id="trace-19051"></a>
<a id="trace-19053"></a>
<a id="trace-19081"></a>
<a id="trace-19160"></a>
<a id="trace-19162"></a>
<a id="trace-19181"></a>
<a id="trace-19183"></a>
<a id="trace-19201"></a>
<a id="trace-19203"></a>
<a id="trace-19220"></a>
<a id="trace-19243"></a>
<a id="trace-19245"></a>
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19343"></a>
<a id="trace-19345"></a>
<a id="trace-19371"></a>
<a id="trace-19373"></a>
<a id="trace-19391"></a>
<a id="trace-19393"></a>
<a id="trace-19414"></a>
<a id="trace-19487"></a>
<a id="trace-19489"></a>
<a id="trace-19507"></a>
<a id="trace-19509"></a>
<a id="trace-19526"></a>
<a id="trace-19528"></a>
<a id="trace-19549"></a>
<a id="trace-19551"></a>
<a id="trace-19584"></a>
<a id="trace-19586"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19677"></a>
<a id="trace-19679"></a>
<a id="trace-19698"></a>
<a id="trace-19700"></a>
<a id="trace-19718"></a>
<a id="trace-19720"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19827"></a>
<a id="trace-19829"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19871"></a>
<a id="trace-19873"></a>
<a id="trace-19894"></a>
<a id="trace-19896"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19990"></a>
<a id="trace-19992"></a>
<a id="trace-20015"></a>
<a id="trace-20017"></a>
<a id="trace-20039"></a>
<a id="trace-20041"></a>
<a id="trace-20064"></a>
<a id="trace-20066"></a>
<a id="trace-20088"></a>
<a id="trace-20090"></a>
<a id="trace-20164"></a>
<a id="trace-20166"></a>
<a id="trace-20184"></a>
<a id="trace-20186"></a>
<a id="trace-20206"></a>
<a id="trace-20208"></a>
<a id="trace-20229"></a>
<a id="trace-20231"></a>
<a id="trace-20256"></a>
<a id="trace-20258"></a>
<a id="trace-20338"></a>
<a id="trace-20340"></a>
<a id="trace-20357"></a>
<a id="trace-20359"></a>
<a id="trace-20377"></a>
<a id="trace-20379"></a>
- 191.30s–252.30s (×121), actor 4, squad 0 (trace 18329): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 191.05s, trace 18324. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18353}.
<a id="trace-2198"></a>
- 252.90s–252.90s (×1), actor 4, squad 0 (events line 2198): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2199"></a>
- 252.90s–252.90s (×1), actor 4, squad 1 (events line 2199): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20394"></a>
- 252.90s–252.90s (×1), actor 4, squad 0 (trace 20394): renew committed intent (75 s lifetime). Knowledge: actor memory at 252.90s, trace 20394. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20401}.
<a id="trace-20395"></a>
- 252.90s–252.90s (×1), actor 4, squad 1 (trace 20395): renew committed intent (75 s lifetime). Knowledge: actor memory at 252.90s, trace 20395. Next observer evidence: {'until': 282.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2549}.
<a id="trace-20401"></a>
<a id="trace-20403"></a>
<a id="trace-20426"></a>
<a id="trace-20428"></a>
<a id="trace-20501"></a>
<a id="trace-20525"></a>
<a id="trace-20527"></a>
<a id="trace-20550"></a>
<a id="trace-20552"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20594"></a>
<a id="trace-20596"></a>
<a id="trace-20667"></a>
<a id="trace-20669"></a>
<a id="trace-20688"></a>
<a id="trace-20690"></a>
<a id="trace-20708"></a>
<a id="trace-20710"></a>
<a id="trace-20732"></a>
<a id="trace-20734"></a>
<a id="trace-20764"></a>
<a id="trace-20766"></a>
<a id="trace-20838"></a>
<a id="trace-20840"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20875"></a>
<a id="trace-20877"></a>
<a id="trace-20895"></a>
<a id="trace-20897"></a>
<a id="trace-20919"></a>
<a id="trace-20921"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21045"></a>
<a id="trace-21061"></a>
<a id="trace-21063"></a>
<a id="trace-21087"></a>
<a id="trace-21089"></a>
<a id="trace-21160"></a>
<a id="trace-21162"></a>
<a id="trace-21186"></a>
<a id="trace-21188"></a>
<a id="trace-21207"></a>
<a id="trace-21209"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
<a id="trace-21255"></a>
<a id="trace-21257"></a>
<a id="trace-21331"></a>
<a id="trace-21333"></a>
<a id="trace-21349"></a>
<a id="trace-21351"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21416"></a>
<a id="trace-21418"></a>
<a id="trace-21516"></a>
<a id="trace-21535"></a>
<a id="trace-21537"></a>
<a id="trace-21556"></a>
<a id="trace-21558"></a>
<a id="trace-21580"></a>
<a id="trace-21582"></a>
<a id="trace-21659"></a>
<a id="trace-21661"></a>
<a id="trace-21681"></a>
<a id="trace-21683"></a>
<a id="trace-21710"></a>
<a id="trace-21712"></a>
<a id="trace-21730"></a>
<a id="trace-21732"></a>
<a id="trace-21757"></a>
<a id="trace-21759"></a>
<a id="trace-21831"></a>
<a id="trace-21833"></a>
<a id="trace-21849"></a>
<a id="trace-21851"></a>
<a id="trace-21874"></a>
<a id="trace-21876"></a>
<a id="trace-21900"></a>
<a id="trace-21902"></a>
<a id="trace-21929"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22036"></a>
<a id="trace-22038"></a>
<a id="trace-22057"></a>
<a id="trace-22059"></a>
<a id="trace-22087"></a>
<a id="trace-22089"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22188"></a>
<a id="trace-22190"></a>
<a id="trace-22211"></a>
<a id="trace-22213"></a>
<a id="trace-22230"></a>
<a id="trace-22232"></a>
<a id="trace-22251"></a>
<a id="trace-22253"></a>
<a id="trace-22330"></a>
<a id="trace-22332"></a>
<a id="trace-22351"></a>
<a id="trace-22353"></a>
<a id="trace-22372"></a>
<a id="trace-22374"></a>
<a id="trace-22400"></a>
<a id="trace-22402"></a>
<a id="trace-22424"></a>
<a id="trace-22426"></a>
- 253.30s–314.30s (×118), actor 4, squad 0 (trace 20401): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 252.90s, trace 20395. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20426}.
<a id="trace-2548"></a>
- 314.55s–314.55s (×1), actor 4, squad 0 (events line 2548): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2549"></a>
- 314.55s–314.55s (×1), actor 4, squad 1 (events line 2549): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22434"></a>
- 314.55s–314.55s (×1), actor 4, squad 0 (trace 22434): renew committed intent (75 s lifetime). Knowledge: actor memory at 314.55s, trace 22434. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22502}.
<a id="trace-22435"></a>
- 314.55s–314.55s (×1), actor 4, squad 1 (trace 22435): renew committed intent (75 s lifetime). Knowledge: actor memory at 314.55s, trace 22435. Next observer evidence: {'until': 344.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-22502"></a>
<a id="trace-22504"></a>
<a id="trace-22523"></a>
<a id="trace-22525"></a>
<a id="trace-22547"></a>
<a id="trace-22549"></a>
<a id="trace-22569"></a>
<a id="trace-22571"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22674"></a>
<a id="trace-22676"></a>
<a id="trace-22693"></a>
<a id="trace-22695"></a>
<a id="trace-22714"></a>
<a id="trace-22716"></a>
<a id="trace-22733"></a>
<a id="trace-22735"></a>
<a id="trace-22764"></a>
<a id="trace-22836"></a>
<a id="trace-22838"></a>
<a id="trace-22855"></a>
<a id="trace-22857"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22900"></a>
<a id="trace-22902"></a>
<a id="trace-22925"></a>
<a id="trace-22927"></a>
<a id="trace-23000"></a>
<a id="trace-23002"></a>
<a id="trace-23022"></a>
<a id="trace-23024"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23065"></a>
<a id="trace-23067"></a>
<a id="trace-23098"></a>
<a id="trace-23100"></a>
<a id="trace-23170"></a>
<a id="trace-23172"></a>
<a id="trace-23188"></a>
<a id="trace-23190"></a>
<a id="trace-23211"></a>
<a id="trace-23213"></a>
<a id="trace-23230"></a>
<a id="trace-23232"></a>
<a id="trace-23256"></a>
<a id="trace-23258"></a>
<a id="trace-23336"></a>
<a id="trace-23338"></a>
<a id="trace-23358"></a>
<a id="trace-23360"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23425"></a>
<a id="trace-23427"></a>
<a id="trace-23503"></a>
<a id="trace-23505"></a>
<a id="trace-23524"></a>
<a id="trace-23526"></a>
<a id="trace-23546"></a>
<a id="trace-23548"></a>
<a id="trace-23572"></a>
<a id="trace-23592"></a>
<a id="trace-23594"></a>
<a id="trace-23668"></a>
<a id="trace-23690"></a>
<a id="trace-23692"></a>
<a id="trace-23712"></a>
<a id="trace-23714"></a>
<a id="trace-23737"></a>
<a id="trace-23739"></a>
<a id="trace-23759"></a>
<a id="trace-23761"></a>
<a id="trace-23839"></a>
<a id="trace-23841"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23879"></a>
<a id="trace-23881"></a>
<a id="trace-23900"></a>
<a id="trace-23902"></a>
<a id="trace-23924"></a>
<a id="trace-23926"></a>
- 315.30s–359.30s (×87), actor 4, squad 0 (trace 22502): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 315.00s, trace 22445. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22523}.

## Net delivery

182 matched order/radio deliveries; 521 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.415s; maximum 2.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3823: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3824: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3825: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3826: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3831: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3834: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3836: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3837: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3839: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3841: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3842: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3843: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3844: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3846: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3847: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3848: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3849: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3850: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4765: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4766: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4768: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4770: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4771: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4773: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4775: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4776: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4777: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4778: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4780: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4781: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4782: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4783: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4784: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 5486: estimate 10.24; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 5487: estimate 10.24; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5490: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5491: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5493: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5495: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5496: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5498: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5500: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5501: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5502: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5503: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5505: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5506: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5507: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5508: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5509: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6952: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6954: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6956: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6957: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6960: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6961: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6962: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6963: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6965: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6966: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6967: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6968: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6969: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.85s leader 5, trace 7051: estimate 10.65; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.85s leader 5, trace 7052: estimate 10.65; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 8196: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8198: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8200: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8201: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8203: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8204: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8205: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8206: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8207: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8209: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8210: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8211: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8212: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8213: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8474: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8476: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8478: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8479: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8481: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8482: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8483: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8484: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8485: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8487: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8488: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8489: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8490: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8491: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8983: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8984: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8985: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8987: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8988: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8990: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8991: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8992: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8993: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8994: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8995: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8996: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8997: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8998: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8999: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9000: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 9571: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9572: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9574: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9575: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9577: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9578: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9579: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9580: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9581: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9582: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9583: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9584: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9585: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9586: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9587: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 56.05s leader 5, trace 9719: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9935: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9937: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9938: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9939: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 9940: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9941: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9942: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9943: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9944: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9945: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9946: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9947: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9948: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9949: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9950: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 11007: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11009: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11010: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11011: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11012: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11013: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11014: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11015: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11016: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11017: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11018: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11019: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11020: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11021: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 11105: estimate 12.26; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 11106: estimate 12.26; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11263: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11264: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11265: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11266: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11267: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11268: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11269: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11270: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11271: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11272: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11273: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11274: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11275: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 14026: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 14027: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 14028: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 14029: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 14030: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 14031: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 14032: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14033: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14034: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14035: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14036: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14037: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 14038: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14039: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14243: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14244: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 14245: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14246: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 14247: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14248: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14249: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14250: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14251: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14252: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14253: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14254: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14255: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14256: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14454: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14455: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14456: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14457: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14458: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14459: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14460: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14461: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14462: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14463: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14464: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14465: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14466: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14467: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14673: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14674: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14675: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14676: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14677: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14678: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14679: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14680: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14681: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14682: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14683: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14684: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14685: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14686: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14922: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14923: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14924: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14925: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14926: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14927: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14928: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14929: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14930: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14931: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14932: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14933: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14934: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 15042: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15152: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15153: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 15154: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15155: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15156: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15157: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15158: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15159: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15160: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15161: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15162: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15163: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 15229: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 15230: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 15231: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 15232: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15421: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15422: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15423: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15424: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15425: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15426: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15427: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15428: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15429: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15430: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15431: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15432: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15593: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15594: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15595: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15596: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15597: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15598: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15599: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15600: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15601: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15602: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15603: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15604: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 15781: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15782: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15783: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15784: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15785: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15786: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15787: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15788: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15789: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15790: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15791: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 15947: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15948: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 15949: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15950: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 15951: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15952: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15953: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15954: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15955: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 15956: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 15957: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16133: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16134: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16135: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16136: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16137: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16138: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16139: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16140: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16141: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16142: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.85s leader 4, trace 16253: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.85s leader 4, trace 16254: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16275: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16276: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16277: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16278: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16279: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16280: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16281: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16282: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16283: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16284: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16419: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 16420: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 16421: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16422: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16423: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16424: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16425: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16426: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16427: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 16428: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16568: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 16569: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 16570: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 16571: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16572: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16573: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16574: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16575: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16576: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16577: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16721: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 16722: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 16723: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 16724: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 16725: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 16726: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16727: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 16728: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 16729: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 16730: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16893: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 16894: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16895: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 16896: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16897: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16898: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16899: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16900: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 16901: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 16902: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17066: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17067: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17068: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17069: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17070: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17071: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17072: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17073: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17074: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17075: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17236: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17237: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17238: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17239: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17240: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17241: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17242: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17243: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17244: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17245: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 17398: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 17399: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 17400: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 17401: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 17402: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 17403: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 17404: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 17405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 17406: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 17407: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17569: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17570: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17571: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17572: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17573: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17574: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17575: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17577: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 17578: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17748: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17749: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17750: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17751: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17752: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17753: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17754: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17756: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17757: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17906: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17907: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17908: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17909: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17910: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17911: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17912: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17914: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17915: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18075: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18076: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18077: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18078: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18079: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18080: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18081: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18083: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18084: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18249: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18250: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18251: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18252: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18253: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18254: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18255: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18257: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18258: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.05s leader 4, trace 18323: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.05s leader 4, trace 18324: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18431: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 18432: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 18433: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 18434: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18435: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18436: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18437: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18439: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 18440: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 18589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 18590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 18591: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 18592: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 18593: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 18594: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 18595: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 18596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 18597: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 18598: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 18759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 18760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 18761: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 18762: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 18763: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 18764: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 18765: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 18766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 18767: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 18768: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 18931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 18932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 18933: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 18934: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 18935: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 18936: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 18937: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 18938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 18939: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 18940: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 19103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19104: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19105: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19106: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19107: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19108: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19110: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19111: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 19263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 19264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 19265: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19266: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19267: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19268: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19269: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19271: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 19272: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 19428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 19429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 19430: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 19431: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 19432: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 19433: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 19434: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 19435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 19436: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 19437: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 19601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 19602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 19603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 19604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 19610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 19766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 19767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 19768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 19773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 19774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 19934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 19935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 19936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 19939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 19940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 19941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 19942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 252.90s leader 4, trace 20394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 252.90s leader 4, trace 20395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 20444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 20452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 20610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 20611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 20612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 20615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 20617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 20618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 20782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 20783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 20784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 20787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 20789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 20790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 20940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 20941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 20942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 20943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 20944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 20945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 20946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 20947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 20948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 20949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 21273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 21439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 21444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 21447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 21600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 21601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 21602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 21603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 21606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 21608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 21609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 21774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 21775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 21776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 21777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 21780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 21781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 21782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 21783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 21944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 21945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 21946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 21947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 21948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 21949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 21950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 21951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 21952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 21953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 314.55s leader 4, trace 22434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 314.55s leader 4, trace 22435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 22445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 22446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 22447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 22448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 22450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 22451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 22452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 22453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 22454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 22616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 22617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 22618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 22619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 22620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 22621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 22622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 22623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 22624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 22625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 22778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 22779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 22780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 22781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 22782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 22783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 22784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 22785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 22786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 22787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 22940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 22941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 22942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 22943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 22944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 22945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 22946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 22947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 22948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 22949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 23277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 23278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 23280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 23281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 23282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 23283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 23284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 23285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 23286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 23446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 23447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 23448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 23449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 23450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 23451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 23452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 23453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 23454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 23455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 23611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 23612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 23613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 23614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 23615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 23616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 23617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 23618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 23619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 23620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 23781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 23782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 23783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 23784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 23785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 23786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 23787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 23788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 23789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 23790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 23945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 23946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 23947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 23948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 23949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 23950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 23951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 23952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 23953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 23954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Rook incapacitated
- 1: Bren incapacitated
- 1: Ash killed in action
- 1: Soren incapacitated
- 1: Kest killed in action
- 1: Vale killed in action
- 1: Reed incapacitated
- 1: Moss killed in action
- 1: Bram incapacitated
- 1: Iven killed in action

## Outcome attribution

- 101.05s, evidence 1390: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550000000000068, 'next_transition': 15237}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 1391: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15260}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 15229: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550000000000068, 'next_transition': 15237}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 15230: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20550000000000068, 'next_transition': 15237}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 15231: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15260}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 15232: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177350 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15260}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 128.85s, evidence 1546: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 128.85s, evidence 1547: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 191.05s, evidence 1848: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18329}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 191.05s, evidence 1849: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 221, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2199}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 252.90s, evidence 2198: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 252.90s, evidence 2199: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.55s, evidence 2548: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.55s, evidence 2549: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
