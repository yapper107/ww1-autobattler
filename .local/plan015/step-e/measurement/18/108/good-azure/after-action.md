# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/18/108/good-azure/battle-108-1789674046604822476`

## Battle summary

**Ember** · 360 s · 571 shots.

### Turning points

- 15.2s, squad 4: contact (events line 211). First recorded contact.
- 28.8s, squad 1: help call ([trace 6618](#trace-6618)). No completion observed before termination.
- 30.6s, squad 0: help answer ([trace 7471](#trace-7471)). 40.9s, squad 0: took cover and returned fire.
- 40.4s, squad 0: help call ([trace 11199](#trace-11199)). 41.7s, squad 1: answered a neighbour with support by fire.
- 40.7s, squad 1: help call ([trace 11214](#trace-11214)). No completion observed before termination.
- 41.7s, squad 1: help answer ([trace 11681](#trace-11681)). 79.0s, squad 1: advanced tactically.
- 42.4s, squad 0: help answer ([trace 12704](#trace-12704)). 54.2s, squad 0: broke contact.
- 54.2s, squad 0: withdrawal ([trace 16508](#trace-16508)). 98.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 79.2s, squad 1: withdrawal ([trace 18215](#trace-18215)). No completion observed before termination.
- 105.0s, squad 0: withdrawal ([trace 19619](#trace-19619)). 158.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 34 shots, 4/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 19 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 431 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 87 shots, 0/4 lost.

### Decisions and attribution

At 19.8s, squad 1 chose FightHere: nearest known group ([trace 4042](#trace-4042)), followed by 6 shots and 1 own casualties; estimate 10.0 against 9 distinct squad-reported contacts; At 29.5s, squad 1 chose took cover and returned fire ([trace 6673](#trace-6673)), followed by 1 shots and 0 own casualties; estimate 15.2 against 0 distinct squad-reported contacts; At 40.9s, squad 0 chose took cover and returned fire ([trace 11245](#trace-11245)), followed by 1 shots and 0 own casualties; estimate 13.1 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 829](#trace-829)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1006}.

### Communication

228 matched deliveries (mean 0.36s, max 1.60s); 475 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.20s, squad 4, contact, evidence events line 211: First recorded contact; .
- 28.80s, squad 1, help call, evidence 6618: NeedSupport; No completion observed before termination.
- 30.60s, squad 0, help answer, evidence 7471: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 40.9s, squad 0: took cover and returned fire.
- 40.40s, squad 0, help call, evidence 11199: NeedSupport; 41.7s, squad 1: answered a neighbour with support by fire.
- 40.65s, squad 1, help call, evidence 11214: NeedSupport; No completion observed before termination.
- 41.65s, squad 1, help answer, evidence 11681: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 79.0s, squad 1: advanced tactically.
- 42.35s, squad 0, help answer, evidence 12704: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 54.2s, squad 0: broke contact.
- 54.25s, squad 0, withdrawal, evidence 16508: BreakContact: believed ratio at least two without superiority; 98.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 79.25s, squad 1, withdrawal, evidence 18215: Withdraw to received rally; No completion observed before termination.
- 105.05s, squad 0, withdrawal, evidence 19619: Withdraw to received rally; 158.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 165.90s, squad 0, withdrawal, evidence 22759: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757809970807271, 'next_transition': 701}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757809970807271, 'next_transition': 701}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757809970807271, 'next_transition': 701}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544319269111105, 'next_transition': 104}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544319269111105, 'next_transition': 104}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544319269111105, 'next_transition': 104}.
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-766"></a>
<a id="trace-768"></a>
<a id="trace-793"></a>
<a id="trace-795"></a>
<a id="trace-817"></a>
<a id="trace-819"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 701): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299956177593285, 'next_transition': 729}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1006}.
<a id="trace-829"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 829): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 829. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1006}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1006}.
<a id="trace-848"></a>
<a id="trace-850"></a>
<a id="trace-879"></a>
<a id="trace-881"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 848): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149922781749492, 'next_transition': 879}.
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1365"></a>
<a id="trace-1367"></a>
<a id="trace-1563"></a>
<a id="trace-1565"></a>
<a id="trace-1608"></a>
<a id="trace-1610"></a>
<a id="trace-1658"></a>
<a id="trace-1660"></a>
<a id="trace-1712"></a>
<a id="trace-1714"></a>
<a id="trace-1771"></a>
<a id="trace-1773"></a>
<a id="trace-1811"></a>
<a id="trace-1813"></a>
<a id="trace-1934"></a>
<a id="trace-1936"></a>
<a id="trace-1957"></a>
<a id="trace-1959"></a>
<a id="trace-1984"></a>
<a id="trace-1986"></a>
<a id="trace-2015"></a>
<a id="trace-2017"></a>
<a id="trace-2046"></a>
<a id="trace-2048"></a>
<a id="trace-2071"></a>
<a id="trace-2073"></a>
<a id="trace-2108"></a>
<a id="trace-2110"></a>
<a id="trace-2159"></a>
<a id="trace-2161"></a>
<a id="trace-2180"></a>
<a id="trace-2182"></a>
<a id="trace-2269"></a>
<a id="trace-2271"></a>
<a id="trace-2295"></a>
<a id="trace-2297"></a>
<a id="trace-2706"></a>
<a id="trace-2708"></a>
<a id="trace-2776"></a>
<a id="trace-2778"></a>
<a id="trace-3149"></a>
<a id="trace-3151"></a>
<a id="trace-3193"></a>
<a id="trace-3195"></a>
<a id="trace-3615"></a>
<a id="trace-3617"></a>
<a id="trace-4031"></a>
<a id="trace-4033"></a>
<a id="trace-4170"></a>
<a id="trace-4172"></a>
<a id="trace-4223"></a>
<a id="trace-4225"></a>
<a id="trace-4272"></a>
<a id="trace-4274"></a>
<a id="trace-4299"></a>
<a id="trace-4301"></a>
<a id="trace-4345"></a>
<a id="trace-4347"></a>
<a id="trace-4412"></a>
<a id="trace-4414"></a>
<a id="trace-4506"></a>
<a id="trace-4508"></a>
<a id="trace-5341"></a>
<a id="trace-5343"></a>
<a id="trace-5761"></a>
<a id="trace-5763"></a>
<a id="trace-5806"></a>
<a id="trace-5808"></a>
<a id="trace-5868"></a>
<a id="trace-5870"></a>
<a id="trace-5926"></a>
<a id="trace-5928"></a>
<a id="trace-5966"></a>
<a id="trace-5968"></a>
<a id="trace-6017"></a>
<a id="trace-6019"></a>
<a id="trace-6047"></a>
<a id="trace-6049"></a>
<a id="trace-6613"></a>
<a id="trace-6615"></a>
<a id="trace-7451"></a>
<a id="trace-7453"></a>
<a id="trace-10371"></a>
<a id="trace-10373"></a>
<a id="trace-10411"></a>
<a id="trace-10413"></a>
<a id="trace-10469"></a>
<a id="trace-10471"></a>
<a id="trace-10642"></a>
<a id="trace-10644"></a>
<a id="trace-10806"></a>
<a id="trace-10808"></a>
<a id="trace-10905"></a>
<a id="trace-10907"></a>
<a id="trace-10927"></a>
<a id="trace-10929"></a>
<a id="trace-10954"></a>
<a id="trace-10956"></a>
<a id="trace-10979"></a>
<a id="trace-10981"></a>
<a id="trace-11013"></a>
<a id="trace-11015"></a>
<a id="trace-11052"></a>
<a id="trace-11054"></a>
<a id="trace-11078"></a>
<a id="trace-11080"></a>
<a id="trace-11095"></a>
<a id="trace-11097"></a>
<a id="trace-11112"></a>
<a id="trace-11114"></a>
<a id="trace-11194"></a>
<a id="trace-11196"></a>
<a id="trace-11235"></a>
<a id="trace-11237"></a>
<a id="trace-11664"></a>
<a id="trace-11666"></a>
<a id="trace-15649"></a>
<a id="trace-15651"></a>
<a id="trace-15679"></a>
<a id="trace-15681"></a>
<a id="trace-15706"></a>
<a id="trace-15708"></a>
<a id="trace-15734"></a>
<a id="trace-15736"></a>
<a id="trace-15817"></a>
<a id="trace-15819"></a>
<a id="trace-15834"></a>
<a id="trace-15836"></a>
<a id="trace-15858"></a>
<a id="trace-15860"></a>
<a id="trace-15877"></a>
<a id="trace-15879"></a>
<a id="trace-15902"></a>
<a id="trace-15904"></a>
<a id="trace-15927"></a>
<a id="trace-15929"></a>
<a id="trace-15953"></a>
<a id="trace-15955"></a>
<a id="trace-15985"></a>
<a id="trace-15987"></a>
<a id="trace-16009"></a>
<a id="trace-16011"></a>
<a id="trace-16031"></a>
<a id="trace-16033"></a>
<a id="trace-16119"></a>
<a id="trace-16121"></a>
<a id="trace-16141"></a>
<a id="trace-16143"></a>
<a id="trace-16186"></a>
<a id="trace-16188"></a>
<a id="trace-16238"></a>
<a id="trace-16240"></a>
<a id="trace-16289"></a>
<a id="trace-16291"></a>
<a id="trace-16336"></a>
<a id="trace-16338"></a>
<a id="trace-16396"></a>
<a id="trace-16398"></a>
<a id="trace-16458"></a>
<a id="trace-16460"></a>
<a id="trace-16505"></a>
<a id="trace-16507"></a>
<a id="trace-16650"></a>
<a id="trace-16652"></a>
<a id="trace-16746"></a>
<a id="trace-16748"></a>
<a id="trace-16774"></a>
<a id="trace-16776"></a>
<a id="trace-16801"></a>
<a id="trace-16803"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16842"></a>
<a id="trace-16844"></a>
<a id="trace-16856"></a>
<a id="trace-16858"></a>
<a id="trace-16896"></a>
<a id="trace-16898"></a>
<a id="trace-16916"></a>
<a id="trace-16918"></a>
<a id="trace-16927"></a>
<a id="trace-16929"></a>
<a id="trace-17054"></a>
<a id="trace-17056"></a>
<a id="trace-17104"></a>
<a id="trace-17106"></a>
<a id="trace-17132"></a>
<a id="trace-17134"></a>
<a id="trace-17160"></a>
<a id="trace-17162"></a>
<a id="trace-17193"></a>
<a id="trace-17195"></a>
<a id="trace-17231"></a>
<a id="trace-17233"></a>
<a id="trace-17283"></a>
<a id="trace-17285"></a>
<a id="trace-17507"></a>
<a id="trace-17568"></a>
<a id="trace-17599"></a>
<a id="trace-17620"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17843"></a>
<a id="trace-17845"></a>
<a id="trace-17875"></a>
<a id="trace-17877"></a>
<a id="trace-17900"></a>
<a id="trace-17902"></a>
<a id="trace-17927"></a>
<a id="trace-17929"></a>
<a id="trace-17955"></a>
<a id="trace-17957"></a>
<a id="trace-17971"></a>
<a id="trace-17973"></a>
<a id="trace-17991"></a>
<a id="trace-17993"></a>
<a id="trace-18006"></a>
<a id="trace-18008"></a>
<a id="trace-18080"></a>
<a id="trace-18082"></a>
<a id="trace-18094"></a>
<a id="trace-18096"></a>
<a id="trace-18112"></a>
<a id="trace-18114"></a>
<a id="trace-18123"></a>
<a id="trace-18125"></a>
<a id="trace-18143"></a>
<a id="trace-18145"></a>
<a id="trace-18156"></a>
<a id="trace-18158"></a>
<a id="trace-18178"></a>
<a id="trace-18180"></a>
<a id="trace-18190"></a>
<a id="trace-18192"></a>
<a id="trace-18212"></a>
<a id="trace-18214"></a>
<a id="trace-18290"></a>
<a id="trace-18292"></a>
<a id="trace-18376"></a>
<a id="trace-18378"></a>
<a id="trace-18396"></a>
<a id="trace-18398"></a>
<a id="trace-18410"></a>
<a id="trace-18412"></a>
<a id="trace-18427"></a>
<a id="trace-18429"></a>
<a id="trace-18458"></a>
<a id="trace-18460"></a>
<a id="trace-18471"></a>
<a id="trace-18473"></a>
<a id="trace-18494"></a>
<a id="trace-18496"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18593"></a>
<a id="trace-18595"></a>
<a id="trace-18623"></a>
<a id="trace-18625"></a>
<a id="trace-18639"></a>
<a id="trace-18641"></a>
<a id="trace-18660"></a>
<a id="trace-18662"></a>
<a id="trace-18704"></a>
<a id="trace-18706"></a>
<a id="trace-18722"></a>
<a id="trace-18724"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18773"></a>
<a id="trace-18775"></a>
<a id="trace-18865"></a>
<a id="trace-18867"></a>
<a id="trace-18943"></a>
<a id="trace-18945"></a>
<a id="trace-18979"></a>
<a id="trace-18981"></a>
<a id="trace-19005"></a>
<a id="trace-19007"></a>
<a id="trace-19024"></a>
<a id="trace-19026"></a>
<a id="trace-19045"></a>
<a id="trace-19047"></a>
<a id="trace-19058"></a>
<a id="trace-19060"></a>
<a id="trace-19136"></a>
<a id="trace-19138"></a>
<a id="trace-19153"></a>
<a id="trace-19155"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19184"></a>
<a id="trace-19186"></a>
<a id="trace-19207"></a>
<a id="trace-19209"></a>
<a id="trace-19219"></a>
<a id="trace-19221"></a>
<a id="trace-19265"></a>
<a id="trace-19267"></a>
<a id="trace-19282"></a>
<a id="trace-19284"></a>
<a id="trace-19360"></a>
<a id="trace-19362"></a>
<a id="trace-19437"></a>
<a id="trace-19439"></a>
<a id="trace-19455"></a>
<a id="trace-19457"></a>
<a id="trace-19481"></a>
<a id="trace-19483"></a>
<a id="trace-19531"></a>
<a id="trace-19533"></a>
<a id="trace-19547"></a>
<a id="trace-19549"></a>
<a id="trace-19567"></a>
<a id="trace-19569"></a>
<a id="trace-19587"></a>
<a id="trace-19589"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19739"></a>
<a id="trace-19741"></a>
<a id="trace-19773"></a>
<a id="trace-19775"></a>
<a id="trace-19794"></a>
<a id="trace-19796"></a>
<a id="trace-19808"></a>
<a id="trace-19810"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-19849"></a>
<a id="trace-19851"></a>
<a id="trace-19871"></a>
<a id="trace-19873"></a>
<a id="trace-19948"></a>
<a id="trace-19950"></a>
<a id="trace-19966"></a>
<a id="trace-19968"></a>
<a id="trace-19985"></a>
<a id="trace-19987"></a>
<a id="trace-19997"></a>
<a id="trace-19999"></a>
<a id="trace-20018"></a>
<a id="trace-20020"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
<a id="trace-20068"></a>
<a id="trace-20070"></a>
<a id="trace-20087"></a>
<a id="trace-20089"></a>
<a id="trace-20105"></a>
<a id="trace-20107"></a>
<a id="trace-20177"></a>
<a id="trace-20179"></a>
<a id="trace-20215"></a>
<a id="trace-20217"></a>
<a id="trace-20245"></a>
<a id="trace-20247"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
<a id="trace-20277"></a>
<a id="trace-20279"></a>
<a id="trace-20296"></a>
<a id="trace-20298"></a>
<a id="trace-20318"></a>
<a id="trace-20320"></a>
<a id="trace-20335"></a>
<a id="trace-20337"></a>
<a id="trace-20410"></a>
<a id="trace-20412"></a>
<a id="trace-20426"></a>
<a id="trace-20428"></a>
<a id="trace-20531"></a>
<a id="trace-20533"></a>
<a id="trace-20554"></a>
<a id="trace-20556"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20585"></a>
<a id="trace-20587"></a>
<a id="trace-20610"></a>
<a id="trace-20612"></a>
<a id="trace-20626"></a>
<a id="trace-20628"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20743"></a>
<a id="trace-20745"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20789"></a>
<a id="trace-20791"></a>
<a id="trace-20827"></a>
<a id="trace-20829"></a>
<a id="trace-20848"></a>
<a id="trace-20850"></a>
<a id="trace-20859"></a>
<a id="trace-20861"></a>
<a id="trace-20929"></a>
<a id="trace-20931"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20969"></a>
<a id="trace-20971"></a>
<a id="trace-20980"></a>
<a id="trace-20982"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21029"></a>
<a id="trace-21031"></a>
<a id="trace-21048"></a>
<a id="trace-21050"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21259"></a>
<a id="trace-21261"></a>
<a id="trace-21271"></a>
<a id="trace-21273"></a>
<a id="trace-21301"></a>
<a id="trace-21303"></a>
<a id="trace-21358"></a>
<a id="trace-21360"></a>
<a id="trace-21382"></a>
<a id="trace-21384"></a>
<a id="trace-21466"></a>
<a id="trace-21468"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21512"></a>
<a id="trace-21514"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21625"></a>
<a id="trace-21627"></a>
<a id="trace-21703"></a>
<a id="trace-21705"></a>
<a id="trace-21737"></a>
<a id="trace-21739"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
<a id="trace-21784"></a>
<a id="trace-21786"></a>
<a id="trace-21843"></a>
<a id="trace-21845"></a>
<a id="trace-21853"></a>
<a id="trace-21855"></a>
<a id="trace-21927"></a>
<a id="trace-21929"></a>
<a id="trace-22007"></a>
<a id="trace-22009"></a>
<a id="trace-22026"></a>
<a id="trace-22028"></a>
<a id="trace-22043"></a>
<a id="trace-22045"></a>
<a id="trace-22069"></a>
<a id="trace-22071"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22129"></a>
<a id="trace-22131"></a>
<a id="trace-22147"></a>
<a id="trace-22149"></a>
<a id="trace-22163"></a>
<a id="trace-22165"></a>
<a id="trace-22235"></a>
<a id="trace-22237"></a>
<a id="trace-22250"></a>
<a id="trace-22252"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22313"></a>
<a id="trace-22315"></a>
<a id="trace-22328"></a>
<a id="trace-22330"></a>
<a id="trace-22344"></a>
<a id="trace-22346"></a>
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22410"></a>
<a id="trace-22412"></a>
<a id="trace-22486"></a>
<a id="trace-22488"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22526"></a>
<a id="trace-22528"></a>
<a id="trace-22541"></a>
<a id="trace-22543"></a>
<a id="trace-22563"></a>
<a id="trace-22565"></a>
<a id="trace-22581"></a>
<a id="trace-22583"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22645"></a>
<a id="trace-22647"></a>
<a id="trace-22659"></a>
<a id="trace-22661"></a>
<a id="trace-22734"></a>
<a id="trace-22736"></a>
<a id="trace-22755"></a>
<a id="trace-22757"></a>
<a id="trace-22776"></a>
<a id="trace-22778"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22818"></a>
<a id="trace-22820"></a>
<a id="trace-22849"></a>
<a id="trace-22851"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22994"></a>
<a id="trace-22996"></a>
<a id="trace-23009"></a>
<a id="trace-23011"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23084"></a>
<a id="trace-23086"></a>
<a id="trace-23101"></a>
<a id="trace-23103"></a>
<a id="trace-23113"></a>
<a id="trace-23115"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23195"></a>
<a id="trace-23197"></a>
<a id="trace-23211"></a>
<a id="trace-23213"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23260"></a>
<a id="trace-23262"></a>
<a id="trace-23278"></a>
<a id="trace-23280"></a>
<a id="trace-23290"></a>
<a id="trace-23292"></a>
<a id="trace-23313"></a>
<a id="trace-23315"></a>
<a id="trace-23324"></a>
<a id="trace-23326"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23404"></a>
<a id="trace-23406"></a>
<a id="trace-23422"></a>
<a id="trace-23424"></a>
<a id="trace-23431"></a>
<a id="trace-23433"></a>
<a id="trace-23452"></a>
<a id="trace-23454"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23498"></a>
<a id="trace-23500"></a>
<a id="trace-23518"></a>
<a id="trace-23520"></a>
<a id="trace-23527"></a>
<a id="trace-23529"></a>
<a id="trace-23614"></a>
<a id="trace-23616"></a>
<a id="trace-23630"></a>
<a id="trace-23632"></a>
<a id="trace-23640"></a>
<a id="trace-23642"></a>
<a id="trace-23668"></a>
<a id="trace-23670"></a>
<a id="trace-23685"></a>
<a id="trace-23687"></a>
<a id="trace-23701"></a>
<a id="trace-23703"></a>
<a id="trace-23717"></a>
<a id="trace-23719"></a>
<a id="trace-23730"></a>
<a id="trace-23732"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23832"></a>
<a id="trace-23834"></a>
<a id="trace-23845"></a>
<a id="trace-23847"></a>
<a id="trace-23868"></a>
<a id="trace-23870"></a>
<a id="trace-23880"></a>
<a id="trace-23882"></a>
<a id="trace-23896"></a>
<a id="trace-23898"></a>
<a id="trace-23924"></a>
<a id="trace-23926"></a>
<a id="trace-23936"></a>
<a id="trace-23938"></a>
<a id="trace-24033"></a>
<a id="trace-24035"></a>
<a id="trace-24042"></a>
<a id="trace-24044"></a>
<a id="trace-24069"></a>
<a id="trace-24071"></a>
<a id="trace-24096"></a>
<a id="trace-24098"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24142"></a>
<a id="trace-24144"></a>
<a id="trace-24221"></a>
<a id="trace-24223"></a>
<a id="trace-24238"></a>
<a id="trace-24240"></a>
<a id="trace-24248"></a>
<a id="trace-24250"></a>
<a id="trace-24269"></a>
<a id="trace-24271"></a>
<a id="trace-24280"></a>
<a id="trace-24282"></a>
<a id="trace-24298"></a>
<a id="trace-24300"></a>
<a id="trace-24320"></a>
<a id="trace-24322"></a>
<a id="trace-24336"></a>
<a id="trace-24338"></a>
<a id="trace-24422"></a>
<a id="trace-24424"></a>
<a id="trace-24447"></a>
<a id="trace-24449"></a>
<a id="trace-24485"></a>
<a id="trace-24487"></a>
<a id="trace-24513"></a>
<a id="trace-24515"></a>
<a id="trace-24539"></a>
<a id="trace-24541"></a>
<a id="trace-24616"></a>
<a id="trace-24618"></a>
<a id="trace-24627"></a>
<a id="trace-24629"></a>
<a id="trace-24646"></a>
<a id="trace-24648"></a>
<a id="trace-24655"></a>
<a id="trace-24657"></a>
<a id="trace-24679"></a>
<a id="trace-24681"></a>
<a id="trace-24692"></a>
<a id="trace-24694"></a>
<a id="trace-24718"></a>
<a id="trace-24720"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24827"></a>
<a id="trace-24829"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24880"></a>
<a id="trace-24882"></a>
<a id="trace-24891"></a>
<a id="trace-24893"></a>
<a id="trace-24909"></a>
<a id="trace-24911"></a>
<a id="trace-24928"></a>
<a id="trace-24930"></a>
<a id="trace-24945"></a>
<a id="trace-24947"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25051"></a>
<a id="trace-25053"></a>
<a id="trace-25092"></a>
<a id="trace-25094"></a>
<a id="trace-25113"></a>
<a id="trace-25115"></a>
<a id="trace-25128"></a>
<a id="trace-25130"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25158"></a>
<a id="trace-25160"></a>
<a id="trace-25241"></a>
<a id="trace-25243"></a>
<a id="trace-25258"></a>
<a id="trace-25260"></a>
<a id="trace-25267"></a>
<a id="trace-25269"></a>
<a id="trace-25286"></a>
<a id="trace-25288"></a>
<a id="trace-25300"></a>
<a id="trace-25302"></a>
<a id="trace-25317"></a>
<a id="trace-25319"></a>
<a id="trace-25350"></a>
<a id="trace-25352"></a>
<a id="trace-25435"></a>
<a id="trace-25437"></a>
<a id="trace-25446"></a>
<a id="trace-25448"></a>
<a id="trace-25478"></a>
<a id="trace-25480"></a>
<a id="trace-25496"></a>
<a id="trace-25498"></a>
<a id="trace-25508"></a>
<a id="trace-25510"></a>
<a id="trace-25523"></a>
<a id="trace-25525"></a>
<a id="trace-25537"></a>
<a id="trace-25539"></a>
<a id="trace-25555"></a>
<a id="trace-25557"></a>
<a id="trace-25565"></a>
<a id="trace-25567"></a>
<a id="trace-25645"></a>
<a id="trace-25647"></a>
<a id="trace-25709"></a>
<a id="trace-25711"></a>
<a id="trace-25730"></a>
<a id="trace-25732"></a>
<a id="trace-25859"></a>
<a id="trace-25861"></a>
<a id="trace-25871"></a>
<a id="trace-25873"></a>
<a id="trace-25889"></a>
<a id="trace-25891"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-25956"></a>
<a id="trace-25958"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-26040"></a>
<a id="trace-26042"></a>
<a id="trace-26052"></a>
<a id="trace-26054"></a>
<a id="trace-26067"></a>
<a id="trace-26069"></a>
<a id="trace-26105"></a>
<a id="trace-26107"></a>
<a id="trace-26123"></a>
<a id="trace-26125"></a>
<a id="trace-26153"></a>
<a id="trace-26155"></a>
<a id="trace-26247"></a>
<a id="trace-26249"></a>
<a id="trace-26266"></a>
<a id="trace-26268"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26310"></a>
<a id="trace-26312"></a>
<a id="trace-26336"></a>
<a id="trace-26338"></a>
<a id="trace-26355"></a>
<a id="trace-26357"></a>
<a id="trace-26368"></a>
<a id="trace-26370"></a>
<a id="trace-26436"></a>
<a id="trace-26438"></a>
<a id="trace-26450"></a>
<a id="trace-26452"></a>
<a id="trace-26472"></a>
<a id="trace-26474"></a>
<a id="trace-26484"></a>
<a id="trace-26486"></a>
<a id="trace-26502"></a>
<a id="trace-26504"></a>
<a id="trace-26517"></a>
<a id="trace-26519"></a>
<a id="trace-26537"></a>
<a id="trace-26539"></a>
<a id="trace-26568"></a>
<a id="trace-26570"></a>
<a id="trace-26577"></a>
<a id="trace-26579"></a>
<a id="trace-26647"></a>
<a id="trace-26649"></a>
<a id="trace-26676"></a>
<a id="trace-26678"></a>
<a id="trace-26705"></a>
<a id="trace-26707"></a>
<a id="trace-26716"></a>
<a id="trace-26718"></a>
<a id="trace-26740"></a>
<a id="trace-26742"></a>
<a id="trace-26753"></a>
<a id="trace-26755"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26788"></a>
<a id="trace-26790"></a>
<a id="trace-26857"></a>
<a id="trace-26859"></a>
<a id="trace-26868"></a>
<a id="trace-26870"></a>
<a id="trace-26884"></a>
<a id="trace-26886"></a>
<a id="trace-26895"></a>
<a id="trace-26897"></a>
<a id="trace-26914"></a>
<a id="trace-26916"></a>
<a id="trace-26926"></a>
<a id="trace-26928"></a>
<a id="trace-26944"></a>
<a id="trace-26946"></a>
<a id="trace-26956"></a>
<a id="trace-26958"></a>
<a id="trace-26976"></a>
<a id="trace-26978"></a>
<a id="trace-26995"></a>
<a id="trace-26997"></a>
<a id="trace-27063"></a>
<a id="trace-27065"></a>
<a id="trace-27077"></a>
<a id="trace-27079"></a>
<a id="trace-27099"></a>
<a id="trace-27101"></a>
<a id="trace-27108"></a>
<a id="trace-27110"></a>
<a id="trace-27137"></a>
<a id="trace-27139"></a>
<a id="trace-27152"></a>
<a id="trace-27154"></a>
<a id="trace-27167"></a>
<a id="trace-27169"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
<a id="trace-27196"></a>
<a id="trace-27198"></a>
<a id="trace-27265"></a>
<a id="trace-27267"></a>
<a id="trace-27279"></a>
<a id="trace-27281"></a>
<a id="trace-27303"></a>
<a id="trace-27305"></a>
<a id="trace-27332"></a>
<a id="trace-27334"></a>
<a id="trace-27343"></a>
<a id="trace-27345"></a>
<a id="trace-27364"></a>
<a id="trace-27366"></a>
<a id="trace-27378"></a>
<a id="trace-27380"></a>
<a id="trace-27394"></a>
<a id="trace-27396"></a>
<a id="trace-27405"></a>
<a id="trace-27407"></a>
<a id="trace-27501"></a>
<a id="trace-27503"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27531"></a>
<a id="trace-27533"></a>
<a id="trace-27549"></a>
<a id="trace-27551"></a>
<a id="trace-27567"></a>
<a id="trace-27569"></a>
<a id="trace-27579"></a>
<a id="trace-27581"></a>
<a id="trace-27680"></a>
<a id="trace-27682"></a>
<a id="trace-27691"></a>
<a id="trace-27693"></a>
<a id="trace-27708"></a>
<a id="trace-27710"></a>
<a id="trace-27717"></a>
<a id="trace-27719"></a>
<a id="trace-27750"></a>
<a id="trace-27752"></a>
<a id="trace-27764"></a>
<a id="trace-27766"></a>
<a id="trace-27780"></a>
<a id="trace-27782"></a>
<a id="trace-27805"></a>
<a id="trace-27807"></a>
<a id="trace-27817"></a>
<a id="trace-27819"></a>
<a id="trace-27886"></a>
<a id="trace-27888"></a>
<a id="trace-27919"></a>
<a id="trace-27921"></a>
<a id="trace-27929"></a>
<a id="trace-27931"></a>
<a id="trace-27957"></a>
<a id="trace-27959"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28013"></a>
<a id="trace-28015"></a>
<a id="trace-28093"></a>
<a id="trace-28095"></a>
<a id="trace-28118"></a>
<a id="trace-28120"></a>
<a id="trace-28146"></a>
<a id="trace-28148"></a>
<a id="trace-28164"></a>
<a id="trace-28166"></a>
<a id="trace-28205"></a>
<a id="trace-28207"></a>
<a id="trace-28216"></a>
<a id="trace-28218"></a>
<a id="trace-28286"></a>
<a id="trace-28288"></a>
<a id="trace-28297"></a>
<a id="trace-28299"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28349"></a>
<a id="trace-28351"></a>
<a id="trace-28370"></a>
<a id="trace-28372"></a>
<a id="trace-28384"></a>
<a id="trace-28386"></a>
<a id="trace-28399"></a>
<a id="trace-28401"></a>
<a id="trace-28422"></a>
<a id="trace-28424"></a>
<a id="trace-28431"></a>
<a id="trace-28433"></a>
<a id="trace-28501"></a>
<a id="trace-28503"></a>
<a id="trace-28512"></a>
<a id="trace-28514"></a>
<a id="trace-28555"></a>
<a id="trace-28557"></a>
<a id="trace-28569"></a>
<a id="trace-28571"></a>
<a id="trace-28584"></a>
<a id="trace-28586"></a>
<a id="trace-28599"></a>
<a id="trace-28601"></a>
<a id="trace-28624"></a>
<a id="trace-28626"></a>
<a id="trace-28704"></a>
<a id="trace-28706"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28745"></a>
<a id="trace-28747"></a>
<a id="trace-28763"></a>
<a id="trace-28765"></a>
<a id="trace-28776"></a>
<a id="trace-28778"></a>
<a id="trace-28793"></a>
<a id="trace-28795"></a>
<a id="trace-28804"></a>
<a id="trace-28806"></a>
<a id="trace-28832"></a>
<a id="trace-28834"></a>
<a id="trace-28903"></a>
<a id="trace-28905"></a>
<a id="trace-28937"></a>
<a id="trace-28939"></a>
<a id="trace-28946"></a>
<a id="trace-28948"></a>
<a id="trace-28968"></a>
<a id="trace-28970"></a>
<a id="trace-29000"></a>
<a id="trace-29002"></a>
<a id="trace-29013"></a>
<a id="trace-29015"></a>
<a id="trace-29033"></a>
<a id="trace-29035"></a>
<a id="trace-29111"></a>
<a id="trace-29113"></a>
<a id="trace-29171"></a>
<a id="trace-29173"></a>
<a id="trace-29185"></a>
<a id="trace-29187"></a>
<a id="trace-29200"></a>
<a id="trace-29202"></a>
<a id="trace-29216"></a>
<a id="trace-29218"></a>
<a id="trace-29246"></a>
<a id="trace-29248"></a>
<a id="trace-29316"></a>
<a id="trace-29318"></a>
<a id="trace-29326"></a>
<a id="trace-29328"></a>
<a id="trace-29343"></a>
<a id="trace-29345"></a>
<a id="trace-29373"></a>
<a id="trace-29375"></a>
<a id="trace-29385"></a>
<a id="trace-29387"></a>
<a id="trace-29403"></a>
<a id="trace-29405"></a>
<a id="trace-29439"></a>
<a id="trace-29441"></a>
<a id="trace-29449"></a>
<a id="trace-29451"></a>
<a id="trace-29520"></a>
<a id="trace-29522"></a>
<a id="trace-29537"></a>
<a id="trace-29539"></a>
<a id="trace-29588"></a>
<a id="trace-29590"></a>
<a id="trace-29604"></a>
<a id="trace-29606"></a>
<a id="trace-29617"></a>
<a id="trace-29619"></a>
<a id="trace-29637"></a>
<a id="trace-29639"></a>
<a id="trace-29648"></a>
<a id="trace-29650"></a>
<a id="trace-29720"></a>
<a id="trace-29722"></a>
<a id="trace-29753"></a>
<a id="trace-29755"></a>
<a id="trace-29766"></a>
<a id="trace-29768"></a>
<a id="trace-29790"></a>
<a id="trace-29792"></a>
<a id="trace-29815"></a>
<a id="trace-29817"></a>
<a id="trace-29827"></a>
<a id="trace-29829"></a>
<a id="trace-29844"></a>
<a id="trace-29846"></a>
<a id="trace-29857"></a>
<a id="trace-29859"></a>
<a id="trace-29937"></a>
<a id="trace-29939"></a>
<a id="trace-29964"></a>
<a id="trace-29966"></a>
<a id="trace-29990"></a>
<a id="trace-29992"></a>
<a id="trace-30002"></a>
<a id="trace-30004"></a>
<a id="trace-30020"></a>
<a id="trace-30022"></a>
<a id="trace-30031"></a>
<a id="trace-30033"></a>
<a id="trace-30140"></a>
<a id="trace-30142"></a>
<a id="trace-30158"></a>
<a id="trace-30160"></a>
<a id="trace-30167"></a>
<a id="trace-30169"></a>
<a id="trace-30188"></a>
<a id="trace-30190"></a>
<a id="trace-30200"></a>
<a id="trace-30202"></a>
<a id="trace-30217"></a>
<a id="trace-30219"></a>
<a id="trace-30235"></a>
<a id="trace-30237"></a>
<a id="trace-30257"></a>
<a id="trace-30259"></a>
<a id="trace-30267"></a>
<a id="trace-30269"></a>
<a id="trace-30339"></a>
<a id="trace-30341"></a>
<a id="trace-30358"></a>
<a id="trace-30360"></a>
<a id="trace-30374"></a>
<a id="trace-30376"></a>
<a id="trace-30384"></a>
<a id="trace-30386"></a>
<a id="trace-30412"></a>
<a id="trace-30414"></a>
<a id="trace-30429"></a>
<a id="trace-30431"></a>
<a id="trace-30444"></a>
<a id="trace-30446"></a>
<a id="trace-30460"></a>
<a id="trace-30462"></a>
<a id="trace-30473"></a>
<a id="trace-30475"></a>
<a id="trace-30560"></a>
<a id="trace-30562"></a>
<a id="trace-30576"></a>
<a id="trace-30578"></a>
<a id="trace-30589"></a>
<a id="trace-30591"></a>
<a id="trace-30612"></a>
<a id="trace-30614"></a>
<a id="trace-30647"></a>
<a id="trace-30649"></a>
<a id="trace-30665"></a>
<a id="trace-30667"></a>
<a id="trace-30677"></a>
<a id="trace-30679"></a>
- 5.70s–359.80s (×1094), actor 37, squad 4 (trace 995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 906. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624793790105342, 'next_transition': 1365}.
<a id="trace-1006"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1006): traveling overwatch. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 6.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812213945815602, 'next_transition': 1398}.
<a id="trace-1007"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1007): received platoon directive. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 6.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812213945815602, 'next_transition': 1398}.
<a id="trace-1062"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1062): received platoon directive. Knowledge: actor memory at 5.00s, trace 889. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362629272054811, 'next_transition': 1361}.
<a id="trace-1361"></a>
<a id="trace-1363"></a>
<a id="trace-1559"></a>
<a id="trace-1561"></a>
<a id="trace-1604"></a>
<a id="trace-1606"></a>
<a id="trace-1654"></a>
<a id="trace-1656"></a>
<a id="trace-1708"></a>
<a id="trace-1710"></a>
<a id="trace-1767"></a>
<a id="trace-1769"></a>
<a id="trace-1807"></a>
<a id="trace-1809"></a>
<a id="trace-1835"></a>
<a id="trace-1837"></a>
<a id="trace-1930"></a>
<a id="trace-1932"></a>
<a id="trace-1953"></a>
<a id="trace-1955"></a>
<a id="trace-1980"></a>
<a id="trace-1982"></a>
<a id="trace-2011"></a>
<a id="trace-2013"></a>
<a id="trace-2042"></a>
<a id="trace-2044"></a>
<a id="trace-2067"></a>
<a id="trace-2069"></a>
<a id="trace-2104"></a>
<a id="trace-2106"></a>
<a id="trace-2122"></a>
<a id="trace-2124"></a>
<a id="trace-2155"></a>
<a id="trace-2157"></a>
<a id="trace-2176"></a>
<a id="trace-2178"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2291"></a>
<a id="trace-2293"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1361): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 894. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9395190665948455, 'next_transition': 1559}.
<a id="trace-1398"></a>
- 6.60s–6.60s (×1), actor 8, squad 1 (trace 1398): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.999840341726077, 'next_transition': 2791}.
<a id="trace-2302"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2302): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249398120924672, 'next_transition': 2702}.
<a id="trace-2303"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2303): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249398120924672, 'next_transition': 2702}.
<a id="trace-2304"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2304): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249398120924672, 'next_transition': 2702}.
<a id="trace-2702"></a>
<a id="trace-2704"></a>
<a id="trace-2731"></a>
<a id="trace-2733"></a>
<a id="trace-2772"></a>
<a id="trace-2774"></a>
<a id="trace-3145"></a>
<a id="trace-3147"></a>
<a id="trace-3189"></a>
<a id="trace-3191"></a>
<a id="trace-3572"></a>
<a id="trace-3574"></a>
<a id="trace-3611"></a>
<a id="trace-3613"></a>
- 16.25s–19.25s (×14), actor 5, squad 0 (trace 2702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2191. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2849972079891788, 'next_transition': 2731}.
<a id="trace-2791"></a>
- 17.65s–17.65s (×1), actor 8, squad 1 (trace 2791): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2194. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6249481396907715, 'next_transition': 3219}.
<a id="trace-2792"></a>
- 17.65s–17.65s (×1), actor 8, squad 1 (trace 2792): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2194. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6249481396907715, 'next_transition': 3219}.
<a id="trace-2793"></a>
<a id="trace-3219"></a>
- 17.65s–18.65s (×2), actor 8, squad 1 (trace 2793): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2194. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6249481396907715, 'next_transition': 3219}.
<a id="trace-3624"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 3624): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2186. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7977543592171158, 'next_transition': 4027}.
<a id="trace-4027"></a>
<a id="trace-4029"></a>
- 19.75s–19.75s (×2), actor 5, squad 0 (trace 4027): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2191. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4291023371206259, 'next_transition': 358}.
<a id="trace-358"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 358): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-359"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 359): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4039"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 4039): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872784 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4039. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7314481434535719, 'next_transition': 4166}.
<a id="trace-4040"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 4040): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872784 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4040. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7314481434535719, 'next_transition': 4166}.
<a id="trace-4041"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 4041): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872784 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4041. Next observer evidence: {'until': 23.8, 'shots': 6, 'casualties': 1, 'mean_displacement': 1.4928708159076192, 'next_transition': 5063}.
<a id="trace-4042"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 4042): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872784 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 4042. Next observer evidence: {'until': 23.8, 'shots': 6, 'casualties': 1, 'mean_displacement': 1.4928708159076192, 'next_transition': 5063}.
<a id="trace-4166"></a>
<a id="trace-4168"></a>
<a id="trace-4219"></a>
<a id="trace-4221"></a>
<a id="trace-4268"></a>
<a id="trace-4270"></a>
<a id="trace-4295"></a>
<a id="trace-4297"></a>
<a id="trace-4341"></a>
<a id="trace-4343"></a>
<a id="trace-4408"></a>
<a id="trace-4410"></a>
- 20.25s–22.75s (×12), actor 5, squad 0 (trace 4166): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4065. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6778047998439968, 'next_transition': 4219}.
<a id="trace-4420"></a>
- 22.85s–22.85s (×1), actor 0, squad 0 (trace 4420): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4060. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5733006108885225, 'next_transition': 4457}.
<a id="trace-4457"></a>
<a id="trace-4459"></a>
<a id="trace-4502"></a>
<a id="trace-4504"></a>
- 23.25s–23.75s (×4), actor 5, squad 0 (trace 4457): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4065. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3028629062469982, 'next_transition': 4502}.
<a id="trace-4512"></a>
- 23.80s–23.80s (×1), actor 0, squad 0 (trace 4512): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4060. Next observer evidence: {'until': 24, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15143791289650582, 'next_transition': 5313}.
<a id="trace-5063"></a>
- 23.95s–23.95s (×1), actor 9, squad 1 (trace 5063): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4069. Next observer evidence: {'until': 25.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3514633333333335, 'next_transition': 5511}.
<a id="trace-5313"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 5313): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4060. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1583004497551712, 'next_transition': 5337}.
<a id="trace-5337"></a>
<a id="trace-5339"></a>
<a id="trace-5396"></a>
<a id="trace-5398"></a>
<a id="trace-5757"></a>
<a id="trace-5759"></a>
<a id="trace-5802"></a>
<a id="trace-5804"></a>
<a id="trace-5864"></a>
<a id="trace-5866"></a>
<a id="trace-5922"></a>
<a id="trace-5924"></a>
<a id="trace-5961"></a>
<a id="trace-5963"></a>
- 24.25s–27.25s (×14), actor 5, squad 0 (trace 5337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4065. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05665625807839174, 'next_transition': 5396}.
<a id="trace-5511"></a>
- 25.20s–25.20s (×1), actor 9, squad 1 (trace 5511): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 28.4, 'shots': 2, 'casualties': 1, 'mean_displacement': 1.2259848143793988, 'next_transition': 6590}.
<a id="trace-5981"></a>
- 27.45s–27.45s (×1), actor 0, squad 0 (trace 5981): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5423. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749999999999997, 'next_transition': 6012}.
<a id="trace-6012"></a>
<a id="trace-6014"></a>
<a id="trace-6041"></a>
<a id="trace-6043"></a>
- 27.75s–28.25s (×4), actor 5, squad 0 (trace 6012): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5428. Next observer evidence: {'until': 28.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.23625000000000002, 'next_transition': 6041}.
<a id="trace-6052"></a>
- 28.40s–28.40s (×1), actor 0, squad 0 (trace 6052): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5423. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874999999999999, 'next_transition': 6607}.
<a id="trace-6590"></a>
- 28.55s–28.55s (×1), actor 9, squad 1 (trace 6590): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 28.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33108602333834647, 'next_transition': 6616}.
<a id="trace-6607"></a>
<a id="trace-6609"></a>
<a id="trace-6655"></a>
<a id="trace-6657"></a>
<a id="trace-6814"></a>
<a id="trace-6816"></a>
- 28.75s–29.75s (×6), actor 5, squad 0 (trace 6607): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5428. Next observer evidence: {'until': 29.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5315600187500988, 'next_transition': 6655}.
<a id="trace-6616"></a>
- 28.80s–28.80s (×1), actor 9, squad 1 (trace 6616): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 29.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.17695909484962888, 'next_transition': 6670}.
<a id="trace-6618"></a>
- 28.80s–28.80s (×1), actor 9, squad 1 (trace 6618): NeedSupport. Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 29.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.17695909484962888, 'next_transition': 6670}.
<a id="trace-6670"></a>
- 29.50s–29.50s (×1), actor 9, squad 1 (trace 6670): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 32.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2381970734496962, 'next_transition': 10493}.
<a id="trace-6673"></a>
- 29.50s–29.50s (×1), actor 9, squad 1 (trace 6673): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 32.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2381970734496962, 'next_transition': 10493}.
<a id="trace-6674"></a>
- 29.50s–29.50s (×1), actor 9, squad 1 (trace 6674): Reorganise complete: known contact. Knowledge: actor memory at 25.00s, trace 5431. Next observer evidence: {'until': 32.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2381970734496962, 'next_transition': 10493}.
<a id="trace-6908"></a>
- 30.20s–30.20s (×1), actor 0, squad 0 (trace 6908): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 6832. Next observer evidence: None.
<a id="trace-7445"></a>
<a id="trace-7447"></a>
- 30.25s–30.25s (×2), actor 5, squad 0 (trace 7445): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6837. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09937499999999977, 'next_transition': 7471}.
<a id="trace-7471"></a>
- 30.60s–30.60s (×1), actor 0, squad 0 (trace 7471): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6832. Next observer evidence: None.
<a id="trace-7472"></a>
- 30.60s–30.60s (×1), actor 0, squad 0 (trace 7472): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 30.00s, trace 6832. Next observer evidence: None.
<a id="trace-10262"></a>
<a id="trace-10264"></a>
<a id="trace-10316"></a>
<a id="trace-10318"></a>
<a id="trace-10365"></a>
<a id="trace-10367"></a>
<a id="trace-10405"></a>
<a id="trace-10407"></a>
<a id="trace-10463"></a>
<a id="trace-10465"></a>
- 30.75s–32.75s (×10), actor 5, squad 0 (trace 10262): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6837. Next observer evidence: {'until': 31.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.09413875000000005, 'next_transition': 10316}.
<a id="trace-10493"></a>
- 32.95s–32.95s (×1), actor 9, squad 1 (trace 10493): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6840. Next observer evidence: {'until': 34.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.559513640696096, 'next_transition': 10663}.
<a id="trace-10504"></a>
- 33.05s–33.05s (×1), actor 5, squad 0 (trace 10504): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 33.05s, trace 10504. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06402144165134742, 'next_transition': 10534}.
<a id="trace-10534"></a>
<a id="trace-10536"></a>
- 33.25s–33.25s (×2), actor 5, squad 0 (trace 10534): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 33.05s, trace 10504. Next observer evidence: {'until': 33.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09722854826817236, 'next_transition': 769}.
<a id="trace-769"></a>
- 33.45s–33.45s (×1), actor 5, squad 0 (events line 769): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10553"></a>
- 33.45s–33.45s (×1), actor 5, squad 0 (trace 10553): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477430 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 10553. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10569715284093936, 'next_transition': 10584}.
<a id="trace-10554"></a>
- 33.45s–33.45s (×1), actor 5, squad 0 (trace 10554): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477430 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 10554. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10569715284093936, 'next_transition': 10584}.
<a id="trace-10584"></a>
<a id="trace-10586"></a>
<a id="trace-10636"></a>
<a id="trace-10638"></a>
<a id="trace-10800"></a>
<a id="trace-10802"></a>
<a id="trace-10899"></a>
<a id="trace-10901"></a>
<a id="trace-10921"></a>
<a id="trace-10923"></a>
<a id="trace-10948"></a>
<a id="trace-10950"></a>
<a id="trace-10973"></a>
<a id="trace-10975"></a>
<a id="trace-11007"></a>
<a id="trace-11009"></a>
<a id="trace-11026"></a>
<a id="trace-11028"></a>
<a id="trace-11047"></a>
<a id="trace-11049"></a>
<a id="trace-11073"></a>
<a id="trace-11075"></a>
<a id="trace-11090"></a>
<a id="trace-11092"></a>
<a id="trace-11107"></a>
<a id="trace-11109"></a>
<a id="trace-11189"></a>
<a id="trace-11191"></a>
- 33.75s–40.25s (×28), actor 5, squad 0 (trace 10584): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 33.45s, trace 10554. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28324618895476994, 'next_transition': 10636}.
<a id="trace-10663"></a>
- 34.45s–34.45s (×1), actor 9, squad 1 (trace 10663): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 6840. Next observer evidence: {'until': 37.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.942285338869261, 'next_transition': 11038}.
<a id="trace-11038"></a>
- 37.90s–37.90s (×1), actor 9, squad 1 (trace 11038): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 10827. Next observer evidence: {'until': 40.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.6223438870504614, 'next_transition': 11214}.
<a id="trace-11198"></a>
- 40.40s–40.40s (×1), actor 1, squad 0 (trace 11198): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.014968333333333325, 'next_transition': 11229}.
<a id="trace-11199"></a>
- 40.40s–40.40s (×1), actor 1, squad 0 (trace 11199): NeedSupport. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.014968333333333325, 'next_transition': 11229}.
<a id="trace-11214"></a>
- 40.65s–40.65s (×1), actor 9, squad 1 (trace 11214): NeedSupport. Knowledge: actor memory at 40.00s, trace 11122. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0317694774633528, 'next_transition': 11681}.
<a id="trace-11229"></a>
<a id="trace-11231"></a>
- 40.75s–40.75s (×2), actor 5, squad 0 (trace 11229): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11120. Next observer evidence: {'until': 40.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751284970510296, 'next_transition': 11240}.
<a id="trace-11240"></a>
- 40.85s–40.85s (×1), actor 1, squad 0 (trace 11240): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4199907634037256, 'next_transition': 11658}.
<a id="trace-11245"></a>
- 40.85s–40.85s (×1), actor 1, squad 0 (trace 11245): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4199907634037256, 'next_transition': 11658}.
<a id="trace-11246"></a>
- 40.85s–40.85s (×1), actor 1, squad 0 (trace 11246): Reorganise complete: known contact. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4199907634037256, 'next_transition': 11658}.
<a id="trace-11658"></a>
<a id="trace-11660"></a>
<a id="trace-12660"></a>
<a id="trace-12662"></a>
<a id="trace-12697"></a>
<a id="trace-12699"></a>
- 41.25s–42.25s (×6), actor 5, squad 0 (trace 11658): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11120. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4200167111121596, 'next_transition': 12660}.
<a id="trace-11681"></a>
- 41.65s–41.65s (×1), actor 9, squad 1 (trace 11681): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 11122. Next observer evidence: {'until': 42.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5377865840647201, 'next_transition': 15601}.
<a id="trace-11682"></a>
- 41.65s–41.65s (×1), actor 9, squad 1 (trace 11682): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 11122. Next observer evidence: {'until': 42.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5377865840647201, 'next_transition': 15601}.
<a id="trace-12704"></a>
- 42.35s–42.35s (×1), actor 1, squad 0 (trace 12704): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5343271967342892, 'next_transition': 15612}.
<a id="trace-12705"></a>
- 42.35s–42.35s (×1), actor 1, squad 0 (trace 12705): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 11116. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5343271967342892, 'next_transition': 15612}.
<a id="trace-15601"></a>
- 42.50s–42.50s (×1), actor 9, squad 1 (trace 15601): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 11122. Next observer evidence: {'until': 72.4, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.96774331908053, 'next_transition': 1508}.
<a id="trace-15612"></a>
<a id="trace-15614"></a>
<a id="trace-15645"></a>
<a id="trace-15647"></a>
<a id="trace-15675"></a>
<a id="trace-15677"></a>
<a id="trace-15701"></a>
<a id="trace-15703"></a>
<a id="trace-15729"></a>
<a id="trace-15731"></a>
<a id="trace-15812"></a>
<a id="trace-15814"></a>
<a id="trace-15829"></a>
<a id="trace-15831"></a>
<a id="trace-15852"></a>
<a id="trace-15854"></a>
<a id="trace-15871"></a>
<a id="trace-15873"></a>
<a id="trace-15896"></a>
<a id="trace-15898"></a>
<a id="trace-15921"></a>
<a id="trace-15923"></a>
<a id="trace-15947"></a>
<a id="trace-15949"></a>
<a id="trace-15979"></a>
<a id="trace-15981"></a>
<a id="trace-16003"></a>
<a id="trace-16005"></a>
<a id="trace-16025"></a>
<a id="trace-16027"></a>
<a id="trace-16113"></a>
<a id="trace-16115"></a>
<a id="trace-16135"></a>
<a id="trace-16137"></a>
<a id="trace-16180"></a>
<a id="trace-16182"></a>
<a id="trace-16234"></a>
<a id="trace-16236"></a>
<a id="trace-16285"></a>
<a id="trace-16287"></a>
<a id="trace-16332"></a>
<a id="trace-16334"></a>
<a id="trace-16392"></a>
<a id="trace-16394"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
- 42.75s–53.75s (×46), actor 5, squad 0 (trace 15612): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11120. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2976475630487992, 'next_transition': 15645}.
<a id="trace-16482"></a>
- 54.00s–54.00s (×1), actor 1, squad 0 (trace 16482): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 16046. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31402557978067913, 'next_transition': 16501}.
<a id="trace-16501"></a>
<a id="trace-16503"></a>
- 54.25s–54.25s (×2), actor 5, squad 0 (trace 16501): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 16050. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5947221782115677, 'next_transition': 16645}.
<a id="trace-16508"></a>
- 54.25s–54.25s (×1), actor 1, squad 0 (trace 16508): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 16046. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5947221782115677, 'next_transition': 16645}.
<a id="trace-16509"></a>
- 54.25s–54.25s (×1), actor 1, squad 0 (trace 16509): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 16046. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5947221782115677, 'next_transition': 16645}.
<a id="trace-16645"></a>
<a id="trace-16647"></a>
<a id="trace-16741"></a>
<a id="trace-16743"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16795"></a>
<a id="trace-16797"></a>
<a id="trace-16809"></a>
<a id="trace-16811"></a>
<a id="trace-16836"></a>
<a id="trace-16838"></a>
<a id="trace-16850"></a>
<a id="trace-16852"></a>
<a id="trace-16873"></a>
<a id="trace-16875"></a>
- 54.75s–58.25s (×16), actor 5, squad 0 (trace 16645): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 16050. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5008523646499846, 'next_transition': 16741}.
<a id="trace-1241"></a>
- 58.35s–58.35s (×1), actor 5, squad 0 (events line 1241): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16883"></a>
- 58.35s–58.35s (×1), actor 5, squad 0 (trace 16883): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177360 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 58.35s, trace 16883. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4489972522640393, 'next_transition': 16890}.
<a id="trace-16884"></a>
- 58.35s–58.35s (×1), actor 5, squad 0 (trace 16884): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177360 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 58.35s, trace 16884. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4489972522640393, 'next_transition': 16890}.
<a id="trace-16890"></a>
<a id="trace-16892"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16921"></a>
<a id="trace-16923"></a>
<a id="trace-17016"></a>
<a id="trace-17018"></a>
<a id="trace-17050"></a>
<a id="trace-17052"></a>
<a id="trace-17088"></a>
<a id="trace-17090"></a>
<a id="trace-17099"></a>
<a id="trace-17101"></a>
<a id="trace-17127"></a>
<a id="trace-17129"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17187"></a>
<a id="trace-17189"></a>
<a id="trace-17225"></a>
<a id="trace-17227"></a>
<a id="trace-17277"></a>
<a id="trace-17279"></a>
<a id="trace-17318"></a>
<a id="trace-17320"></a>
<a id="trace-17433"></a>
<a id="trace-17435"></a>
<a id="trace-17471"></a>
<a id="trace-17473"></a>
<a id="trace-17503"></a>
<a id="trace-17505"></a>
<a id="trace-17528"></a>
<a id="trace-17530"></a>
<a id="trace-17552"></a>
<a id="trace-17554"></a>
<a id="trace-17564"></a>
<a id="trace-17566"></a>
<a id="trace-17583"></a>
<a id="trace-17585"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17616"></a>
<a id="trace-17618"></a>
<a id="trace-17633"></a>
<a id="trace-17635"></a>
- 58.75s–69.75s (×46), actor 5, squad 0 (trace 16890): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 58.35s, trace 16884. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6767767786030225, 'next_transition': 16910}.
<a id="trace-17671"></a>
- 70.10s–70.10s (×1), actor 1, squad 0 (trace 17671): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 17653. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.200035551610218, 'next_transition': 17773}.
<a id="trace-17672"></a>
- 70.10s–70.10s (×1), actor 1, squad 0 (trace 17672): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 17653. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.200035551610218, 'next_transition': 17773}.
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17795"></a>
<a id="trace-17797"></a>
<a id="trace-17839"></a>
<a id="trace-17841"></a>
<a id="trace-17871"></a>
<a id="trace-17873"></a>
<a id="trace-17896"></a>
<a id="trace-17898"></a>
<a id="trace-17923"></a>
<a id="trace-17925"></a>
<a id="trace-17950"></a>
<a id="trace-17952"></a>
<a id="trace-17966"></a>
<a id="trace-17968"></a>
<a id="trace-17986"></a>
<a id="trace-17988"></a>
<a id="trace-18001"></a>
<a id="trace-18003"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18106"></a>
<a id="trace-18108"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18137"></a>
<a id="trace-18139"></a>
<a id="trace-18150"></a>
<a id="trace-18152"></a>
<a id="trace-18172"></a>
<a id="trace-18174"></a>
<a id="trace-18186"></a>
<a id="trace-18188"></a>
<a id="trace-18286"></a>
<a id="trace-18288"></a>
<a id="trace-18356"></a>
<a id="trace-18358"></a>
<a id="trace-18372"></a>
<a id="trace-18374"></a>
<a id="trace-18392"></a>
<a id="trace-18394"></a>
<a id="trace-18406"></a>
<a id="trace-18408"></a>
<a id="trace-18423"></a>
<a id="trace-18425"></a>
<a id="trace-18440"></a>
<a id="trace-18442"></a>
<a id="trace-18454"></a>
<a id="trace-18456"></a>
<a id="trace-18467"></a>
<a id="trace-18469"></a>
<a id="trace-18490"></a>
<a id="trace-18492"></a>
<a id="trace-18511"></a>
<a id="trace-18513"></a>
<a id="trace-18589"></a>
<a id="trace-18591"></a>
<a id="trace-18619"></a>
<a id="trace-18621"></a>
<a id="trace-18635"></a>
<a id="trace-18637"></a>
<a id="trace-18656"></a>
<a id="trace-18658"></a>
<a id="trace-18675"></a>
<a id="trace-18677"></a>
<a id="trace-18700"></a>
<a id="trace-18702"></a>
<a id="trace-18718"></a>
<a id="trace-18720"></a>
<a id="trace-18747"></a>
<a id="trace-18749"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18843"></a>
<a id="trace-18845"></a>
<a id="trace-18861"></a>
<a id="trace-18863"></a>
- 70.25s–90.75s (×80), actor 5, squad 0 (trace 17773): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 17655. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31863920402176404, 'next_transition': 17795}.
<a id="trace-1508"></a>
- 78.05s–78.05s (×1), actor 5, squad 1 (events line 1508): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18162"></a>
- 78.05s–78.05s (×1), actor 5, squad 1 (trace 18162): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177256 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.05s, trace 18162. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18194}.
<a id="trace-18163"></a>
- 78.05s–78.05s (×1), actor 5, squad 1 (trace 18163): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177256 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.05s, trace 18163. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18194}.
<a id="trace-18194"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 18194): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 18014. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18200}.
<a id="trace-18195"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 18195): MoveTactically. Knowledge: actor memory at 75.00s, trace 18014. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18200}.
<a id="trace-18196"></a>
- 78.95s–78.95s (×1), actor 9, squad 1 (trace 18196): . Knowledge: actor memory at 75.00s, trace 18014. Next observer evidence: {'until': 79, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18200}.
<a id="trace-18200"></a>
- 79.00s–79.00s (×1), actor 9, squad 1 (trace 18200): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 18014. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18215}.
<a id="trace-18215"></a>
- 79.25s–79.25s (×1), actor 9, squad 1 (trace 18215): Withdraw to received rally. Knowledge: actor memory at 75.00s, trace 18014. Next observer evidence: {'until': 90.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 18853}.
<a id="trace-18216"></a>
- 79.25s–79.25s (×1), actor 9, squad 1 (trace 18216): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 18014. Next observer evidence: {'until': 90.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 18853}.
<a id="trace-18853"></a>
- 90.50s–90.50s (×1), actor 9, squad 1 (trace 18853): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 18783. Next observer evidence: {'until': 120.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1917}.
<a id="trace-18854"></a>
- 90.50s–90.50s (×1), actor 9, squad 1 (trace 18854): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 18783. Next observer evidence: {'until': 120.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1917}.
<a id="trace-18874"></a>
- 91.05s–91.05s (×1), actor 1, squad 0 (trace 18874): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 18779. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18939}.
<a id="trace-18875"></a>
- 91.05s–91.05s (×1), actor 1, squad 0 (trace 18875): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 18779. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18939}.
<a id="trace-18939"></a>
<a id="trace-18941"></a>
<a id="trace-18947"></a>
<a id="trace-18949"></a>
<a id="trace-18975"></a>
<a id="trace-18977"></a>
<a id="trace-18987"></a>
<a id="trace-18989"></a>
<a id="trace-19001"></a>
<a id="trace-19003"></a>
<a id="trace-19020"></a>
<a id="trace-19022"></a>
<a id="trace-19041"></a>
<a id="trace-19043"></a>
<a id="trace-19054"></a>
<a id="trace-19056"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
- 91.25s–95.25s (×18), actor 5, squad 0 (trace 18939): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 18781. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18947}.
<a id="trace-19139"></a>
- 95.25s–95.25s (×1), actor 1, squad 0 (trace 19139): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 95.00s, trace 19065. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680294515559124, 'next_transition': 19149}.
<a id="trace-19149"></a>
<a id="trace-19151"></a>
<a id="trace-19170"></a>
<a id="trace-19172"></a>
<a id="trace-19180"></a>
<a id="trace-19182"></a>
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19215"></a>
<a id="trace-19217"></a>
<a id="trace-19233"></a>
<a id="trace-19235"></a>
- 95.75s–98.25s (×12), actor 5, squad 0 (trace 19149): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 19067. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3402169574330474, 'next_transition': 19170}.
<a id="trace-19240"></a>
- 98.40s–98.40s (×1), actor 1, squad 0 (trace 19240): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 19065. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11338903190454418, 'next_transition': 19250}.
<a id="trace-19250"></a>
- 98.65s–98.65s (×1), actor 1, squad 0 (trace 19250): MoveTactically. Knowledge: actor memory at 95.00s, trace 19065. Next observer evidence: None.
<a id="trace-19251"></a>
- 98.65s–98.65s (×1), actor 1, squad 0 (trace 19251): received platoon directive. Knowledge: actor memory at 95.00s, trace 19065. Next observer evidence: None.
<a id="trace-19261"></a>
<a id="trace-19263"></a>
<a id="trace-19278"></a>
<a id="trace-19280"></a>
- 98.75s–99.25s (×4), actor 5, squad 0 (trace 19261): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 19067. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3402169574330474, 'next_transition': 19278}.
<a id="trace-19291"></a>
- 99.45s–99.45s (×1), actor 1, squad 0 (trace 19291): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 19065. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341391327786873, 'next_transition': 19356}.
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19433"></a>
<a id="trace-19435"></a>
<a id="trace-19451"></a>
<a id="trace-19453"></a>
<a id="trace-19477"></a>
<a id="trace-19479"></a>
<a id="trace-19493"></a>
<a id="trace-19495"></a>
<a id="trace-19516"></a>
<a id="trace-19518"></a>
<a id="trace-19527"></a>
<a id="trace-19529"></a>
- 99.75s–102.75s (×14), actor 5, squad 0 (trace 19356): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 19067. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680304418151034, 'next_transition': 19433}.
<a id="trace-1670"></a>
- 103.25s–103.25s (×1), actor 5, squad 0 (events line 1670): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}.
<a id="trace-19543"></a>
<a id="trace-19545"></a>
- 103.25s–103.25s (×2), actor 5, squad 0 (trace 19543): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 19369. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}.
<a id="trace-19550"></a>
- 103.25s–103.25s (×1), actor 5, squad 0 (trace 19550): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.191453 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 103.25s, trace 19550. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}.
<a id="trace-19551"></a>
- 103.25s–103.25s (×1), actor 5, squad 0 (trace 19551): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.191453 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 103.25s, trace 19551. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}.
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19583"></a>
<a id="trace-19585"></a>
<a id="trace-19593"></a>
<a id="trace-19595"></a>
- 103.75s–104.75s (×6), actor 5, squad 0 (trace 19563): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 103.25s, trace 19551. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6254708241922506, 'next_transition': 19583}.
<a id="trace-19619"></a>
- 105.05s–105.05s (×1), actor 1, squad 0 (trace 19619): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 19603. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37517908079498546, 'next_transition': 19719}.
<a id="trace-19620"></a>
- 105.05s–105.05s (×1), actor 1, squad 0 (trace 19620): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 19603. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37517908079498546, 'next_transition': 19719}.
<a id="trace-19719"></a>
<a id="trace-19721"></a>
<a id="trace-19735"></a>
<a id="trace-19737"></a>
<a id="trace-19760"></a>
<a id="trace-19762"></a>
<a id="trace-19769"></a>
<a id="trace-19771"></a>
<a id="trace-19790"></a>
<a id="trace-19792"></a>
<a id="trace-19804"></a>
<a id="trace-19806"></a>
<a id="trace-19828"></a>
<a id="trace-19830"></a>
<a id="trace-19845"></a>
<a id="trace-19847"></a>
<a id="trace-19867"></a>
<a id="trace-19869"></a>
<a id="trace-19876"></a>
<a id="trace-19878"></a>
<a id="trace-19944"></a>
<a id="trace-19946"></a>
<a id="trace-19962"></a>
<a id="trace-19964"></a>
<a id="trace-19981"></a>
<a id="trace-19983"></a>
<a id="trace-19993"></a>
<a id="trace-19995"></a>
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20027"></a>
<a id="trace-20029"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
<a id="trace-20064"></a>
<a id="trace-20066"></a>
<a id="trace-20083"></a>
<a id="trace-20085"></a>
<a id="trace-20101"></a>
<a id="trace-20103"></a>
<a id="trace-20173"></a>
<a id="trace-20175"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20241"></a>
<a id="trace-20243"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20273"></a>
<a id="trace-20275"></a>
<a id="trace-20292"></a>
<a id="trace-20294"></a>
<a id="trace-20314"></a>
<a id="trace-20316"></a>
<a id="trace-20331"></a>
<a id="trace-20333"></a>
<a id="trace-20406"></a>
<a id="trace-20408"></a>
<a id="trace-20422"></a>
<a id="trace-20424"></a>
<a id="trace-20447"></a>
<a id="trace-20449"></a>
- 105.25s–121.25s (×64), actor 5, squad 0 (trace 19719): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 19605. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7135669940026551, 'next_transition': 19735}.
<a id="trace-20454"></a>
- 121.65s–121.65s (×1), actor 1, squad 0 (trace 20454): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 20339. Next observer evidence: None.
<a id="trace-20455"></a>
- 121.65s–121.65s (×1), actor 1, squad 0 (trace 20455): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 20339. Next observer evidence: None.
<a id="trace-20510"></a>
<a id="trace-20512"></a>
<a id="trace-20527"></a>
<a id="trace-20529"></a>
<a id="trace-20550"></a>
<a id="trace-20552"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20606"></a>
<a id="trace-20608"></a>
<a id="trace-20622"></a>
<a id="trace-20624"></a>
<a id="trace-20698"></a>
<a id="trace-20700"></a>
<a id="trace-20716"></a>
<a id="trace-20718"></a>
<a id="trace-20739"></a>
<a id="trace-20741"></a>
<a id="trace-20755"></a>
<a id="trace-20757"></a>
<a id="trace-20772"></a>
<a id="trace-20774"></a>
<a id="trace-20785"></a>
<a id="trace-20787"></a>
<a id="trace-20807"></a>
<a id="trace-20809"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20925"></a>
<a id="trace-20927"></a>
<a id="trace-20942"></a>
<a id="trace-20944"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-20976"></a>
<a id="trace-20978"></a>
<a id="trace-20999"></a>
<a id="trace-21001"></a>
<a id="trace-21025"></a>
<a id="trace-21027"></a>
<a id="trace-21044"></a>
<a id="trace-21046"></a>
<a id="trace-21057"></a>
<a id="trace-21059"></a>
- 121.75s–133.80s (×50), actor 5, squad 0 (trace 20510): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 20341. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126884475636393, 'next_transition': 20527}.
<a id="trace-21068"></a>
- 134.25s–134.25s (×1), actor 1, squad 0 (trace 21068): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 20864. Next observer evidence: None.
<a id="trace-21069"></a>
- 134.25s–134.25s (×1), actor 1, squad 0 (trace 21069): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 20864. Next observer evidence: None.
<a id="trace-21128"></a>
<a id="trace-21130"></a>
<a id="trace-21143"></a>
<a id="trace-21145"></a>
<a id="trace-21217"></a>
<a id="trace-21219"></a>
<a id="trace-21233"></a>
<a id="trace-21235"></a>
<a id="trace-21255"></a>
<a id="trace-21257"></a>
<a id="trace-21267"></a>
<a id="trace-21269"></a>
<a id="trace-21297"></a>
<a id="trace-21299"></a>
<a id="trace-21320"></a>
<a id="trace-21322"></a>
<a id="trace-21337"></a>
<a id="trace-21339"></a>
<a id="trace-21354"></a>
<a id="trace-21356"></a>
<a id="trace-21378"></a>
<a id="trace-21380"></a>
<a id="trace-21387"></a>
<a id="trace-21389"></a>
<a id="trace-21462"></a>
<a id="trace-21464"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21496"></a>
<a id="trace-21498"></a>
<a id="trace-21508"></a>
<a id="trace-21510"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21578"></a>
<a id="trace-21580"></a>
<a id="trace-21609"></a>
<a id="trace-21611"></a>
<a id="trace-21621"></a>
<a id="trace-21623"></a>
<a id="trace-21699"></a>
<a id="trace-21701"></a>
<a id="trace-21710"></a>
<a id="trace-21712"></a>
<a id="trace-21733"></a>
<a id="trace-21735"></a>
<a id="trace-21750"></a>
<a id="trace-21752"></a>
<a id="trace-21768"></a>
<a id="trace-21770"></a>
<a id="trace-21780"></a>
<a id="trace-21782"></a>
<a id="trace-21804"></a>
<a id="trace-21806"></a>
<a id="trace-21816"></a>
<a id="trace-21818"></a>
<a id="trace-21839"></a>
<a id="trace-21841"></a>
<a id="trace-21849"></a>
<a id="trace-21851"></a>
<a id="trace-21923"></a>
<a id="trace-21925"></a>
- 134.30s–150.30s (×66), actor 5, squad 0 (trace 21128): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 20866. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.733965751145597, 'next_transition': 21143}.
<a id="trace-1917"></a>
- 138.05s–138.05s (×1), actor 5, squad 1 (events line 1917): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 168, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2410}.
<a id="trace-21329"></a>
- 138.05s–138.05s (×1), actor 5, squad 1 (trace 21329): renew committed intent (75 s lifetime). Knowledge: actor memory at 138.05s, trace 21329. Next observer evidence: {'until': 168, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2410}.
<a id="trace-21944"></a>
- 150.65s–150.65s (×1), actor 1, squad 0 (trace 21944): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 21857. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22003}.
<a id="trace-21945"></a>
- 150.65s–150.65s (×1), actor 1, squad 0 (trace 21945): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 21857. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22003}.
<a id="trace-22003"></a>
<a id="trace-22005"></a>
<a id="trace-22022"></a>
<a id="trace-22024"></a>
<a id="trace-22039"></a>
<a id="trace-22041"></a>
<a id="trace-22065"></a>
<a id="trace-22067"></a>
<a id="trace-22086"></a>
<a id="trace-22088"></a>
<a id="trace-22111"></a>
<a id="trace-22113"></a>
<a id="trace-22125"></a>
<a id="trace-22127"></a>
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22231"></a>
<a id="trace-22233"></a>
<a id="trace-22246"></a>
<a id="trace-22248"></a>
<a id="trace-22266"></a>
<a id="trace-22268"></a>
<a id="trace-22284"></a>
<a id="trace-22286"></a>
<a id="trace-22309"></a>
<a id="trace-22311"></a>
<a id="trace-22324"></a>
<a id="trace-22326"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
- 150.80s–158.30s (×32), actor 5, squad 0 (trace 22003): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 21859. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22022}.
<a id="trace-22356"></a>
- 158.65s–158.65s (×1), actor 1, squad 0 (trace 22356): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 155.00s, trace 22170. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42840004842999563, 'next_transition': 22364}.
<a id="trace-22364"></a>
<a id="trace-22366"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22406"></a>
<a id="trace-22408"></a>
<a id="trace-22482"></a>
<a id="trace-22484"></a>
<a id="trace-22497"></a>
<a id="trace-22499"></a>
<a id="trace-22522"></a>
<a id="trace-22524"></a>
<a id="trace-22537"></a>
<a id="trace-22539"></a>
<a id="trace-22559"></a>
<a id="trace-22561"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
- 158.80s–162.80s (×18), actor 5, squad 0 (trace 22364): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 22172. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6597105834442863, 'next_transition': 22386}.
<a id="trace-2148"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 2148): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22592"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 22592): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.284779 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 163.25s, trace 22592. Next observer evidence: None.
<a id="trace-22593"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 22593): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.284779 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 163.25s, trace 22593. Next observer evidence: None.
<a id="trace-22599"></a>
<a id="trace-22601"></a>
<a id="trace-22614"></a>
<a id="trace-22616"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22655"></a>
<a id="trace-22657"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
<a id="trace-22751"></a>
<a id="trace-22753"></a>
- 163.30s–165.80s (×12), actor 5, squad 0 (trace 22599): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 22593. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22614}.
<a id="trace-22759"></a>
- 165.90s–165.90s (×1), actor 1, squad 0 (trace 22759): Withdraw to received rally. Knowledge: actor memory at 165.00s, trace 22666. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22772}.
<a id="trace-22760"></a>
- 165.90s–165.90s (×1), actor 1, squad 0 (trace 22760): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 22666. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22772}.
<a id="trace-22772"></a>
<a id="trace-22774"></a>
<a id="trace-22787"></a>
<a id="trace-22789"></a>
<a id="trace-22814"></a>
<a id="trace-22816"></a>
<a id="trace-22827"></a>
<a id="trace-22829"></a>
<a id="trace-22845"></a>
<a id="trace-22847"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
- 166.30s–168.80s (×12), actor 5, squad 0 (trace 22772): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 22668. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22787}.
<a id="trace-2205"></a>
- 169.00s–169.00s (×1), actor 5, squad 0 (events line 2205): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22889}.
<a id="trace-22879"></a>
- 169.00s–169.00s (×1), actor 5, squad 0 (trace 22879): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.737083 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 169.00s, trace 22879. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22889}.
<a id="trace-22880"></a>
- 169.00s–169.00s (×1), actor 5, squad 0 (trace 22880): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.737083 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 169.00s, trace 22880. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22889}.
<a id="trace-22889"></a>
<a id="trace-22891"></a>
<a id="trace-22896"></a>
<a id="trace-22898"></a>
<a id="trace-22966"></a>
<a id="trace-22968"></a>
<a id="trace-22990"></a>
<a id="trace-22992"></a>
<a id="trace-23005"></a>
<a id="trace-23007"></a>
<a id="trace-23018"></a>
<a id="trace-23020"></a>
<a id="trace-23040"></a>
<a id="trace-23042"></a>
<a id="trace-23051"></a>
<a id="trace-23053"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23080"></a>
<a id="trace-23082"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23109"></a>
<a id="trace-23111"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23191"></a>
<a id="trace-23193"></a>
<a id="trace-23207"></a>
<a id="trace-23209"></a>
<a id="trace-23220"></a>
<a id="trace-23222"></a>
<a id="trace-23246"></a>
<a id="trace-23248"></a>
<a id="trace-23256"></a>
<a id="trace-23258"></a>
<a id="trace-23274"></a>
<a id="trace-23276"></a>
<a id="trace-23286"></a>
<a id="trace-23288"></a>
<a id="trace-23309"></a>
<a id="trace-23311"></a>
<a id="trace-23320"></a>
<a id="trace-23322"></a>
<a id="trace-23388"></a>
<a id="trace-23390"></a>
<a id="trace-23400"></a>
<a id="trace-23402"></a>
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23427"></a>
<a id="trace-23429"></a>
<a id="trace-23448"></a>
<a id="trace-23450"></a>
<a id="trace-23460"></a>
<a id="trace-23462"></a>
<a id="trace-23475"></a>
<a id="trace-23477"></a>
<a id="trace-23494"></a>
<a id="trace-23496"></a>
<a id="trace-23514"></a>
<a id="trace-23516"></a>
<a id="trace-23523"></a>
<a id="trace-23525"></a>
<a id="trace-23595"></a>
<a id="trace-23597"></a>
<a id="trace-23610"></a>
<a id="trace-23612"></a>
<a id="trace-23626"></a>
<a id="trace-23628"></a>
<a id="trace-23636"></a>
<a id="trace-23638"></a>
<a id="trace-23655"></a>
<a id="trace-23657"></a>
<a id="trace-23664"></a>
<a id="trace-23666"></a>
<a id="trace-23681"></a>
<a id="trace-23683"></a>
<a id="trace-23697"></a>
<a id="trace-23699"></a>
<a id="trace-23713"></a>
<a id="trace-23715"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23801"></a>
<a id="trace-23803"></a>
<a id="trace-23812"></a>
<a id="trace-23814"></a>
<a id="trace-23828"></a>
<a id="trace-23830"></a>
<a id="trace-23841"></a>
<a id="trace-23843"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23876"></a>
<a id="trace-23878"></a>
<a id="trace-23892"></a>
<a id="trace-23894"></a>
<a id="trace-23904"></a>
<a id="trace-23906"></a>
<a id="trace-23920"></a>
<a id="trace-23922"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-24003"></a>
<a id="trace-24005"></a>
<a id="trace-24012"></a>
<a id="trace-24014"></a>
<a id="trace-24029"></a>
<a id="trace-24031"></a>
<a id="trace-24038"></a>
<a id="trace-24040"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24077"></a>
<a id="trace-24079"></a>
<a id="trace-24092"></a>
<a id="trace-24094"></a>
<a id="trace-24111"></a>
<a id="trace-24113"></a>
<a id="trace-24128"></a>
<a id="trace-24130"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24207"></a>
<a id="trace-24209"></a>
<a id="trace-24217"></a>
<a id="trace-24219"></a>
<a id="trace-24234"></a>
<a id="trace-24236"></a>
<a id="trace-24244"></a>
<a id="trace-24246"></a>
<a id="trace-24265"></a>
<a id="trace-24267"></a>
<a id="trace-24276"></a>
<a id="trace-24278"></a>
<a id="trace-24294"></a>
<a id="trace-24296"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24332"></a>
<a id="trace-24334"></a>
<a id="trace-24345"></a>
<a id="trace-24347"></a>
<a id="trace-24418"></a>
<a id="trace-24420"></a>
<a id="trace-24428"></a>
<a id="trace-24430"></a>
<a id="trace-24443"></a>
<a id="trace-24445"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24469"></a>
<a id="trace-24471"></a>
<a id="trace-24481"></a>
<a id="trace-24483"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24509"></a>
<a id="trace-24511"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24612"></a>
<a id="trace-24614"></a>
<a id="trace-24623"></a>
<a id="trace-24625"></a>
<a id="trace-24642"></a>
<a id="trace-24644"></a>
<a id="trace-24651"></a>
<a id="trace-24653"></a>
<a id="trace-24675"></a>
<a id="trace-24677"></a>
<a id="trace-24688"></a>
<a id="trace-24690"></a>
<a id="trace-24702"></a>
<a id="trace-24704"></a>
<a id="trace-24714"></a>
<a id="trace-24716"></a>
<a id="trace-24733"></a>
<a id="trace-24735"></a>
<a id="trace-24740"></a>
<a id="trace-24742"></a>
<a id="trace-24812"></a>
<a id="trace-24814"></a>
<a id="trace-24823"></a>
<a id="trace-24825"></a>
<a id="trace-24841"></a>
<a id="trace-24843"></a>
<a id="trace-24857"></a>
<a id="trace-24859"></a>
<a id="trace-24876"></a>
<a id="trace-24878"></a>
<a id="trace-24887"></a>
<a id="trace-24889"></a>
<a id="trace-24905"></a>
<a id="trace-24907"></a>
<a id="trace-24924"></a>
<a id="trace-24926"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24951"></a>
<a id="trace-24953"></a>
<a id="trace-25021"></a>
<a id="trace-25023"></a>
<a id="trace-25031"></a>
<a id="trace-25033"></a>
<a id="trace-25047"></a>
<a id="trace-25049"></a>
<a id="trace-25060"></a>
<a id="trace-25062"></a>
<a id="trace-25075"></a>
<a id="trace-25077"></a>
<a id="trace-25088"></a>
<a id="trace-25090"></a>
<a id="trace-25109"></a>
<a id="trace-25111"></a>
<a id="trace-25124"></a>
<a id="trace-25126"></a>
<a id="trace-25141"></a>
<a id="trace-25143"></a>
<a id="trace-25154"></a>
<a id="trace-25156"></a>
<a id="trace-25228"></a>
<a id="trace-25230"></a>
<a id="trace-25237"></a>
<a id="trace-25239"></a>
<a id="trace-25254"></a>
<a id="trace-25256"></a>
<a id="trace-25263"></a>
<a id="trace-25265"></a>
<a id="trace-25282"></a>
<a id="trace-25284"></a>
<a id="trace-25296"></a>
<a id="trace-25298"></a>
<a id="trace-25313"></a>
<a id="trace-25315"></a>
<a id="trace-25326"></a>
<a id="trace-25328"></a>
- 169.30s–228.80s (×238), actor 5, squad 0 (trace 22889): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 169.00s, trace 22880. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22896}.
<a id="trace-2410"></a>
- 199.00s–199.00s (×1), actor 5, squad 1 (events line 2410): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 229, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2805}.
<a id="trace-24119"></a>
- 199.00s–199.00s (×1), actor 5, squad 1 (trace 24119): renew committed intent (75 s lifetime). Knowledge: actor memory at 199.00s, trace 24119. Next observer evidence: {'until': 229, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2805}.
<a id="trace-2600"></a>
- 229.00s–229.00s (×1), actor 5, squad 0 (events line 2600): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25346}.
<a id="trace-25334"></a>
- 229.00s–229.00s (×1), actor 5, squad 0 (trace 25334): renew committed intent (75 s lifetime). Knowledge: actor memory at 229.00s, trace 25334. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25346}.
<a id="trace-25346"></a>
<a id="trace-25348"></a>
<a id="trace-25355"></a>
<a id="trace-25357"></a>
<a id="trace-25431"></a>
<a id="trace-25433"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25460"></a>
<a id="trace-25462"></a>
<a id="trace-25474"></a>
<a id="trace-25476"></a>
<a id="trace-25492"></a>
<a id="trace-25494"></a>
<a id="trace-25504"></a>
<a id="trace-25506"></a>
<a id="trace-25519"></a>
<a id="trace-25521"></a>
<a id="trace-25533"></a>
<a id="trace-25535"></a>
<a id="trace-25551"></a>
<a id="trace-25553"></a>
<a id="trace-25561"></a>
<a id="trace-25563"></a>
<a id="trace-25633"></a>
<a id="trace-25635"></a>
<a id="trace-25641"></a>
<a id="trace-25643"></a>
<a id="trace-25660"></a>
<a id="trace-25662"></a>
<a id="trace-25677"></a>
<a id="trace-25679"></a>
<a id="trace-25692"></a>
<a id="trace-25694"></a>
<a id="trace-25705"></a>
<a id="trace-25707"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
- 229.30s–238.30s (×38), actor 5, squad 0 (trace 25346): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 229.00s, trace 25334. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25355}.
<a id="trace-25734"></a>
- 238.65s–238.65s (×1), actor 1, squad 0 (trace 25734): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 235.00s, trace 25572. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25739}.
<a id="trace-25739"></a>
<a id="trace-25741"></a>
<a id="trace-25755"></a>
<a id="trace-25757"></a>
<a id="trace-25763"></a>
<a id="trace-25765"></a>
<a id="trace-25830"></a>
<a id="trace-25832"></a>
<a id="trace-25841"></a>
<a id="trace-25843"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25885"></a>
<a id="trace-25887"></a>
<a id="trace-25900"></a>
<a id="trace-25902"></a>
<a id="trace-25921"></a>
<a id="trace-25923"></a>
<a id="trace-25932"></a>
<a id="trace-25934"></a>
<a id="trace-25952"></a>
<a id="trace-25954"></a>
<a id="trace-25961"></a>
<a id="trace-25963"></a>
<a id="trace-26036"></a>
<a id="trace-26038"></a>
<a id="trace-26048"></a>
<a id="trace-26050"></a>
<a id="trace-26063"></a>
<a id="trace-26065"></a>
<a id="trace-26074"></a>
<a id="trace-26076"></a>
<a id="trace-26092"></a>
<a id="trace-26094"></a>
<a id="trace-26101"></a>
<a id="trace-26103"></a>
<a id="trace-26119"></a>
<a id="trace-26121"></a>
<a id="trace-26132"></a>
<a id="trace-26134"></a>
<a id="trace-26149"></a>
<a id="trace-26151"></a>
<a id="trace-26165"></a>
<a id="trace-26167"></a>
<a id="trace-26235"></a>
<a id="trace-26237"></a>
<a id="trace-26243"></a>
<a id="trace-26245"></a>
<a id="trace-26262"></a>
<a id="trace-26264"></a>
<a id="trace-26278"></a>
<a id="trace-26280"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26322"></a>
<a id="trace-26324"></a>
<a id="trace-26332"></a>
<a id="trace-26334"></a>
<a id="trace-26351"></a>
<a id="trace-26353"></a>
<a id="trace-26364"></a>
<a id="trace-26366"></a>
<a id="trace-26432"></a>
<a id="trace-26434"></a>
<a id="trace-26446"></a>
<a id="trace-26448"></a>
<a id="trace-26468"></a>
<a id="trace-26470"></a>
<a id="trace-26480"></a>
<a id="trace-26482"></a>
<a id="trace-26498"></a>
<a id="trace-26500"></a>
<a id="trace-26513"></a>
<a id="trace-26515"></a>
<a id="trace-26533"></a>
<a id="trace-26535"></a>
<a id="trace-26546"></a>
<a id="trace-26548"></a>
<a id="trace-26564"></a>
<a id="trace-26566"></a>
<a id="trace-26573"></a>
<a id="trace-26575"></a>
<a id="trace-26643"></a>
<a id="trace-26645"></a>
<a id="trace-26656"></a>
<a id="trace-26658"></a>
<a id="trace-26672"></a>
<a id="trace-26674"></a>
<a id="trace-26682"></a>
<a id="trace-26684"></a>
<a id="trace-26701"></a>
<a id="trace-26703"></a>
<a id="trace-26712"></a>
<a id="trace-26714"></a>
<a id="trace-26736"></a>
<a id="trace-26738"></a>
<a id="trace-26749"></a>
<a id="trace-26751"></a>
<a id="trace-26768"></a>
<a id="trace-26770"></a>
<a id="trace-26784"></a>
<a id="trace-26786"></a>
<a id="trace-26853"></a>
<a id="trace-26855"></a>
<a id="trace-26864"></a>
<a id="trace-26866"></a>
<a id="trace-26880"></a>
<a id="trace-26882"></a>
<a id="trace-26891"></a>
<a id="trace-26893"></a>
<a id="trace-26910"></a>
<a id="trace-26912"></a>
<a id="trace-26922"></a>
<a id="trace-26924"></a>
<a id="trace-26940"></a>
<a id="trace-26942"></a>
<a id="trace-26952"></a>
<a id="trace-26954"></a>
<a id="trace-26972"></a>
<a id="trace-26974"></a>
<a id="trace-26991"></a>
<a id="trace-26993"></a>
<a id="trace-27059"></a>
<a id="trace-27061"></a>
<a id="trace-27073"></a>
<a id="trace-27075"></a>
<a id="trace-27095"></a>
<a id="trace-27097"></a>
<a id="trace-27104"></a>
<a id="trace-27106"></a>
<a id="trace-27123"></a>
<a id="trace-27125"></a>
<a id="trace-27133"></a>
<a id="trace-27135"></a>
<a id="trace-27148"></a>
<a id="trace-27150"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27180"></a>
<a id="trace-27182"></a>
<a id="trace-27192"></a>
<a id="trace-27194"></a>
<a id="trace-27261"></a>
<a id="trace-27263"></a>
<a id="trace-27275"></a>
<a id="trace-27277"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27309"></a>
<a id="trace-27311"></a>
<a id="trace-27328"></a>
<a id="trace-27330"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27360"></a>
<a id="trace-27362"></a>
<a id="trace-27374"></a>
<a id="trace-27376"></a>
<a id="trace-27390"></a>
<a id="trace-27392"></a>
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27472"></a>
<a id="trace-27474"></a>
<a id="trace-27480"></a>
<a id="trace-27482"></a>
<a id="trace-27497"></a>
<a id="trace-27499"></a>
<a id="trace-27507"></a>
<a id="trace-27509"></a>
<a id="trace-27527"></a>
<a id="trace-27529"></a>
<a id="trace-27545"></a>
<a id="trace-27547"></a>
<a id="trace-27563"></a>
<a id="trace-27565"></a>
<a id="trace-27575"></a>
<a id="trace-27577"></a>
<a id="trace-27595"></a>
<a id="trace-27597"></a>
<a id="trace-27609"></a>
<a id="trace-27611"></a>
<a id="trace-27676"></a>
<a id="trace-27678"></a>
<a id="trace-27687"></a>
<a id="trace-27689"></a>
<a id="trace-27704"></a>
<a id="trace-27706"></a>
<a id="trace-27713"></a>
<a id="trace-27715"></a>
<a id="trace-27733"></a>
<a id="trace-27735"></a>
<a id="trace-27746"></a>
<a id="trace-27748"></a>
<a id="trace-27760"></a>
<a id="trace-27762"></a>
<a id="trace-27776"></a>
<a id="trace-27778"></a>
- 238.80s–288.80s (×202), actor 5, squad 0 (trace 25739): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 25574. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25755}.
<a id="trace-2805"></a>
- 259.05s–259.05s (×1), actor 5, squad 1 (events line 2805): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26555"></a>
- 259.05s–259.05s (×1), actor 5, squad 1 (trace 26555): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.05s, trace 26555. Next observer evidence: {'until': 289, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3205}.
<a id="trace-2998"></a>
- 289.05s–289.05s (×1), actor 5, squad 0 (events line 2998): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27786"></a>
- 289.05s–289.05s (×1), actor 5, squad 0 (trace 27786): renew committed intent (75 s lifetime). Knowledge: actor memory at 289.05s, trace 27786. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27801}.
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27813"></a>
<a id="trace-27815"></a>
<a id="trace-27882"></a>
<a id="trace-27884"></a>
<a id="trace-27896"></a>
<a id="trace-27898"></a>
<a id="trace-27915"></a>
<a id="trace-27917"></a>
<a id="trace-27925"></a>
<a id="trace-27927"></a>
<a id="trace-27944"></a>
<a id="trace-27946"></a>
<a id="trace-27953"></a>
<a id="trace-27955"></a>
<a id="trace-27969"></a>
<a id="trace-27971"></a>
<a id="trace-27982"></a>
<a id="trace-27984"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28009"></a>
<a id="trace-28011"></a>
<a id="trace-28081"></a>
<a id="trace-28083"></a>
<a id="trace-28089"></a>
<a id="trace-28091"></a>
<a id="trace-28114"></a>
<a id="trace-28116"></a>
<a id="trace-28124"></a>
<a id="trace-28126"></a>
<a id="trace-28142"></a>
<a id="trace-28144"></a>
<a id="trace-28160"></a>
<a id="trace-28162"></a>
<a id="trace-28175"></a>
<a id="trace-28177"></a>
<a id="trace-28186"></a>
<a id="trace-28188"></a>
<a id="trace-28201"></a>
<a id="trace-28203"></a>
<a id="trace-28212"></a>
<a id="trace-28214"></a>
<a id="trace-28282"></a>
<a id="trace-28284"></a>
<a id="trace-28293"></a>
<a id="trace-28295"></a>
<a id="trace-28313"></a>
<a id="trace-28315"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28345"></a>
<a id="trace-28347"></a>
<a id="trace-28366"></a>
<a id="trace-28368"></a>
<a id="trace-28380"></a>
<a id="trace-28382"></a>
<a id="trace-28395"></a>
<a id="trace-28397"></a>
<a id="trace-28418"></a>
<a id="trace-28420"></a>
<a id="trace-28427"></a>
<a id="trace-28429"></a>
<a id="trace-28497"></a>
<a id="trace-28499"></a>
<a id="trace-28508"></a>
<a id="trace-28510"></a>
<a id="trace-28524"></a>
<a id="trace-28526"></a>
<a id="trace-28534"></a>
<a id="trace-28536"></a>
<a id="trace-28551"></a>
<a id="trace-28553"></a>
<a id="trace-28565"></a>
<a id="trace-28567"></a>
<a id="trace-28580"></a>
<a id="trace-28582"></a>
<a id="trace-28595"></a>
<a id="trace-28597"></a>
<a id="trace-28620"></a>
<a id="trace-28622"></a>
<a id="trace-28630"></a>
<a id="trace-28632"></a>
<a id="trace-28700"></a>
<a id="trace-28702"></a>
<a id="trace-28710"></a>
<a id="trace-28712"></a>
<a id="trace-28732"></a>
<a id="trace-28734"></a>
<a id="trace-28741"></a>
<a id="trace-28743"></a>
<a id="trace-28759"></a>
<a id="trace-28761"></a>
<a id="trace-28772"></a>
<a id="trace-28774"></a>
<a id="trace-28789"></a>
<a id="trace-28791"></a>
<a id="trace-28800"></a>
<a id="trace-28802"></a>
<a id="trace-28820"></a>
<a id="trace-28822"></a>
<a id="trace-28828"></a>
<a id="trace-28830"></a>
<a id="trace-28899"></a>
<a id="trace-28901"></a>
<a id="trace-28916"></a>
<a id="trace-28918"></a>
<a id="trace-28933"></a>
<a id="trace-28935"></a>
<a id="trace-28942"></a>
<a id="trace-28944"></a>
<a id="trace-28964"></a>
<a id="trace-28966"></a>
<a id="trace-28982"></a>
<a id="trace-28984"></a>
<a id="trace-28996"></a>
<a id="trace-28998"></a>
<a id="trace-29009"></a>
<a id="trace-29011"></a>
<a id="trace-29029"></a>
<a id="trace-29031"></a>
<a id="trace-29038"></a>
<a id="trace-29040"></a>
<a id="trace-29107"></a>
<a id="trace-29109"></a>
<a id="trace-29121"></a>
<a id="trace-29123"></a>
<a id="trace-29134"></a>
<a id="trace-29136"></a>
<a id="trace-29145"></a>
<a id="trace-29147"></a>
<a id="trace-29167"></a>
<a id="trace-29169"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
<a id="trace-29196"></a>
<a id="trace-29198"></a>
<a id="trace-29212"></a>
<a id="trace-29214"></a>
<a id="trace-29234"></a>
<a id="trace-29236"></a>
<a id="trace-29242"></a>
<a id="trace-29244"></a>
<a id="trace-29312"></a>
<a id="trace-29314"></a>
<a id="trace-29322"></a>
<a id="trace-29324"></a>
<a id="trace-29339"></a>
<a id="trace-29341"></a>
<a id="trace-29351"></a>
<a id="trace-29353"></a>
<a id="trace-29369"></a>
<a id="trace-29371"></a>
<a id="trace-29381"></a>
<a id="trace-29383"></a>
<a id="trace-29399"></a>
<a id="trace-29401"></a>
<a id="trace-29411"></a>
<a id="trace-29413"></a>
<a id="trace-29435"></a>
<a id="trace-29437"></a>
<a id="trace-29445"></a>
<a id="trace-29447"></a>
<a id="trace-29516"></a>
<a id="trace-29518"></a>
<a id="trace-29533"></a>
<a id="trace-29535"></a>
<a id="trace-29549"></a>
<a id="trace-29551"></a>
<a id="trace-29557"></a>
<a id="trace-29559"></a>
<a id="trace-29573"></a>
<a id="trace-29575"></a>
<a id="trace-29584"></a>
<a id="trace-29586"></a>
<a id="trace-29600"></a>
<a id="trace-29602"></a>
<a id="trace-29613"></a>
<a id="trace-29615"></a>
<a id="trace-29633"></a>
<a id="trace-29635"></a>
<a id="trace-29644"></a>
<a id="trace-29646"></a>
<a id="trace-29716"></a>
<a id="trace-29718"></a>
<a id="trace-29736"></a>
<a id="trace-29738"></a>
<a id="trace-29749"></a>
<a id="trace-29751"></a>
<a id="trace-29762"></a>
<a id="trace-29764"></a>
<a id="trace-29786"></a>
<a id="trace-29788"></a>
<a id="trace-29797"></a>
<a id="trace-29799"></a>
<a id="trace-29811"></a>
<a id="trace-29813"></a>
<a id="trace-29823"></a>
<a id="trace-29825"></a>
<a id="trace-29840"></a>
<a id="trace-29842"></a>
<a id="trace-29853"></a>
<a id="trace-29855"></a>
<a id="trace-29922"></a>
<a id="trace-29924"></a>
<a id="trace-29933"></a>
<a id="trace-29935"></a>
<a id="trace-29949"></a>
<a id="trace-29951"></a>
<a id="trace-29960"></a>
<a id="trace-29962"></a>
<a id="trace-29986"></a>
<a id="trace-29988"></a>
<a id="trace-29998"></a>
<a id="trace-30000"></a>
<a id="trace-30016"></a>
<a id="trace-30018"></a>
<a id="trace-30027"></a>
<a id="trace-30029"></a>
<a id="trace-30050"></a>
<a id="trace-30052"></a>
<a id="trace-30060"></a>
<a id="trace-30062"></a>
<a id="trace-30126"></a>
<a id="trace-30128"></a>
<a id="trace-30136"></a>
<a id="trace-30138"></a>
<a id="trace-30154"></a>
<a id="trace-30156"></a>
<a id="trace-30163"></a>
<a id="trace-30165"></a>
<a id="trace-30184"></a>
<a id="trace-30186"></a>
<a id="trace-30196"></a>
<a id="trace-30198"></a>
<a id="trace-30213"></a>
<a id="trace-30215"></a>
<a id="trace-30231"></a>
<a id="trace-30233"></a>
- 289.30s–348.80s (×240), actor 5, squad 0 (trace 27801): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 289.05s, trace 27786. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27813}.
<a id="trace-3205"></a>
- 319.05s–319.05s (×1), actor 5, squad 1 (events line 3205): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29019"></a>
- 319.05s–319.05s (×1), actor 5, squad 1 (trace 29019): renew committed intent (75 s lifetime). Knowledge: actor memory at 319.05s, trace 29019. Next observer evidence: {'until': 349, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-3406"></a>
- 349.05s–349.05s (×1), actor 5, squad 0 (events line 3406): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30244"></a>
- 349.05s–349.05s (×1), actor 5, squad 0 (trace 30244): renew committed intent (75 s lifetime). Knowledge: actor memory at 349.05s, trace 30244. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30253}.
<a id="trace-30253"></a>
<a id="trace-30255"></a>
<a id="trace-30263"></a>
<a id="trace-30265"></a>
<a id="trace-30335"></a>
<a id="trace-30337"></a>
<a id="trace-30354"></a>
<a id="trace-30356"></a>
<a id="trace-30370"></a>
<a id="trace-30372"></a>
<a id="trace-30380"></a>
<a id="trace-30382"></a>
<a id="trace-30399"></a>
<a id="trace-30401"></a>
<a id="trace-30408"></a>
<a id="trace-30410"></a>
<a id="trace-30425"></a>
<a id="trace-30427"></a>
<a id="trace-30440"></a>
<a id="trace-30442"></a>
<a id="trace-30456"></a>
<a id="trace-30458"></a>
<a id="trace-30469"></a>
<a id="trace-30471"></a>
<a id="trace-30544"></a>
<a id="trace-30546"></a>
<a id="trace-30556"></a>
<a id="trace-30558"></a>
<a id="trace-30572"></a>
<a id="trace-30574"></a>
<a id="trace-30585"></a>
<a id="trace-30587"></a>
<a id="trace-30608"></a>
<a id="trace-30610"></a>
<a id="trace-30620"></a>
<a id="trace-30622"></a>
<a id="trace-30634"></a>
<a id="trace-30636"></a>
<a id="trace-30643"></a>
<a id="trace-30645"></a>
<a id="trace-30661"></a>
<a id="trace-30663"></a>
<a id="trace-30673"></a>
<a id="trace-30675"></a>
- 349.30s–359.80s (×44), actor 5, squad 0 (trace 30253): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 349.05s, trace 30244. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30263}.

## Net delivery

228 matched order/radio deliveries; 475 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.360s; maximum 1.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4039: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4040: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4041: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 4042: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4060: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4065: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4066: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4068: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 4070: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 4071: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4072: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4073: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4075: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4077: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4078: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4079: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4080: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4081: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 4082: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 4083: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5423: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5424: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5425: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5428: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5429: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5431: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5432: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5433: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5434: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5435: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5437: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5439: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5440: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5441: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5442: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5443: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5444: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5445: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6832: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6833: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6834: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6835: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6837: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6838: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6840: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6841: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6842: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6843: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6844: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6845: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6847: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6848: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6849: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6850: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6851: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6852: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6853: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.05s leader 5, trace 10504: estimate 15.28; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 10553: estimate 15.26; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 10554: estimate 15.26; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 10819: estimate 15.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10820: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10821: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10822: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10824: estimate 15.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10825: estimate 15.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10827: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 10828: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10829: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10830: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10831: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10832: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10834: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10835: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10836: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10837: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10838: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 10839: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 10840: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 11116: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 11117: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 11118: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 11119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 11120: estimate 15.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 11121: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 11122: estimate 15.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 11123: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11124: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11125: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11126: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11127: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 11128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11129: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11130: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 11131: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11132: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11133: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 11134: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 11135: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 15741: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 15742: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 15743: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 15744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 15745: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 15746: estimate 15.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 15747: estimate 15.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 15748: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 15749: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 15750: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 15751: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 15752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 15753: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 15754: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 15755: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 15756: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 15757: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 15758: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 15759: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16046: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 16047: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 16048: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16049: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16050: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16051: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 16052: estimate 15.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16053: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16054: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16055: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16056: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 16057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16058: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16059: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 16060: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16061: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16062: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 16063: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16064: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16661: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16662: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16663: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16664: estimate 15.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16665: estimate 15.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 16666: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16667: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16668: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16669: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16670: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16671: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16672: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16673: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16674: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16675: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16676: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16677: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 58.35s leader 5, trace 16883: estimate 15.41; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 58.35s leader 5, trace 16884: estimate 15.41; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 16936: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 16937: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 16938: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 16939: estimate 15.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 16940: estimate 15.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 16941: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 16942: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 16943: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 16944: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 16945: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 16946: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 16947: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 16948: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 16949: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 16950: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 16951: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 16952: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 17351: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 17352: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 17353: estimate 15.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 17354: estimate 15.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 17355: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 17356: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 17357: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 17358: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 17359: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 17360: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 17361: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 17362: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 17363: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 17364: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 17365: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 17366: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 17653: estimate 15.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 17654: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 17655: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 17656: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 17657: estimate 15.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 17658: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 17659: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 17660: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 17661: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 17662: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 17663: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 17664: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 17665: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 17666: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 17667: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 17668: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 18010: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 18011: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 18012: estimate 15.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 18013: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 18014: estimate 15.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 18015: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 18016: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 18017: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 18018: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 18019: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 18020: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 18021: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 18022: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 18023: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 18024: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 18025: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.05s leader 5, trace 18162: estimate 15.42; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.05s leader 5, trace 18163: estimate 15.42; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 18294: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 18295: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 18296: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 18297: estimate 15.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 18298: estimate 15.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 18299: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 18300: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 18301: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 18302: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 18303: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 18304: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 18305: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 18306: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 18307: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 18308: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 18309: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 18523: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 18524: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 18525: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 18526: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 18527: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 18528: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 18529: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 18530: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 18531: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 18532: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 18533: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 18534: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 18535: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 18536: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 18537: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 18779: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 18780: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 18781: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 18782: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 18783: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 18784: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 18785: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 18786: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 18787: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 18788: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 18789: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 18790: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 18791: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 18792: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 18793: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 19065: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 19066: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 19067: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 19068: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 19069: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19070: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19071: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19072: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 19073: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19074: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19075: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19076: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19077: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 19078: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 19079: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 19367: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 19368: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 19369: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 19370: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 19371: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 19372: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 19373: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 19374: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 19375: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 19376: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 19377: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 19378: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 19379: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 19380: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 19381: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 103.25s leader 5, trace 19550: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 103.25s leader 5, trace 19551: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 19603: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 19604: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 19605: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 19606: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 19607: estimate 14.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 19608: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 19609: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 19610: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 19611: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 19612: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 19613: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 19614: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 19615: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 19616: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 19617: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 19882: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 19883: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 19884: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 19885: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19886: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19887: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 19888: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 19889: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19890: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19891: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 19892: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 19893: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19894: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 19895: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 19896: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 20109: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 20110: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 20111: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 20112: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 20113: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 20114: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 20115: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 20116: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 20117: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 20118: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 20119: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 20120: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 20121: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 20122: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 20123: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 20339: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 20340: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 20341: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 20342: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 20343: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 20344: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 20345: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 20346: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 20347: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 20348: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 20349: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 20350: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 20351: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 20352: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 20353: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 20637: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 20638: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 20639: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 20640: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 20641: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 20642: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 20643: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 20644: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 20645: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 20646: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 20647: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 20648: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 20649: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 20650: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 20651: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 20864: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 20865: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 20866: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 20867: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 20868: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 20869: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 20870: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 20871: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 20872: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 20873: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 20874: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 20875: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 20876: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 20877: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 20878: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 21148: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 21149: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 21150: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 21151: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 21152: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 21153: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 21154: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 21155: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 21156: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 21157: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 21158: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 21159: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 21160: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 21161: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 21162: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.05s leader 5, trace 21329: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 21394: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 21395: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 21396: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 21397: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 21398: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 21399: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 21400: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 21401: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 21402: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 21403: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 21404: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 21405: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 21406: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 21407: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 21408: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 21633: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 21634: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 21635: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 21636: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 21637: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 21638: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 21639: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 21640: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 21641: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 21642: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 21643: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 21644: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 21645: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 21646: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 21647: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 21857: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 21858: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 21859: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 21860: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21861: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21862: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21863: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21864: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21865: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21866: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21867: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21868: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21869: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 21870: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 21871: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 22170: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 22171: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 22172: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 22173: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 22174: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 22175: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 22176: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 22177: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 22178: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 22179: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 22180: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 22181: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 22182: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 22183: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 22184: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 22417: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 22418: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 22419: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 22420: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 22421: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22422: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22423: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 22424: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 22425: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22426: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 22427: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22428: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22429: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 22430: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 22431: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 22592: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 22593: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 22666: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 22667: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 22668: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 22669: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 22670: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22671: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22672: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 22673: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 22674: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22675: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22676: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 22677: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22678: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 22679: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 22680: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 169.00s leader 5, trace 22879: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 169.00s leader 5, trace 22880: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 22905: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 22906: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 22907: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 22908: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 22909: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 22910: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 22911: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 22912: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 22913: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 22914: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 22915: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 22916: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 22917: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 22918: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 22919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 23117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 23118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 23119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 23120: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 23121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23122: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23123: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 23124: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 23125: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23126: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 23127: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23128: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23129: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 23130: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 23131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 23327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 23328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 23329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 23330: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 23331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 23332: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 23333: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 23334: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 23335: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 23336: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 23337: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 23338: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 23339: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 23340: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 23341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 23534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 23535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 23536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 23537: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 23538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 23539: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 23540: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 23541: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 23542: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 23543: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 23544: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 23545: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 23546: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 23547: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 23548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 23734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 23735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 23737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23739: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23740: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23741: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23742: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23743: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23744: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23745: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23746: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 23747: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 23748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 23939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 23940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 23941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 23942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 23943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23944: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 23945: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 23946: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 23947: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23948: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 23949: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 23950: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23951: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 23952: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 23953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 199.00s leader 5, trace 24119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 24146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 24147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 24148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 24149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 24150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 24151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 24152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 24153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 24154: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 24155: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 24156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 24157: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 24158: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 24159: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 24160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 24351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 24352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 24353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 24354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 24355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 24356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 24357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 24358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 24359: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 24360: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 24361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 24362: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 24363: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 24364: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 24365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 24542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 24543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 24544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 24545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 24546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 24549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 24550: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24551: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24553: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24554: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 24555: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 24556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 24748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 24749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 24751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24756: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24757: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24759: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24760: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 24761: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 24762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 24959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 24960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 24962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 24963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 24966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 24967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 24972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 24973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 25161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 25162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 25163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 25164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 25165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 25166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 25167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 25168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 25169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 25170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 25171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 25172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 25173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 25174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 25175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 229.00s leader 5, trace 25334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 25367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 25368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 25369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 25370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 25371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 25372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 25373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 25374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 25375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 25376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 25377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 25378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 25379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 25380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 25381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 25572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 25573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 25574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 25575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 25576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 25580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 25585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 25586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 25768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 25769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 25771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 25776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 25781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 25782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 25975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 25976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 25978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 25979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 25983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 25988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 25989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 26174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 26175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 26176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 26177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 26178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 26179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 26180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 26181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 26182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 26183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 26184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 26185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 26186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 26187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 26188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 26371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 26372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 26373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 26374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 26375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 26376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 26377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 26378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 26379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 26380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 26381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 26382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 26383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 26384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 26385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.05s leader 5, trace 26555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 26582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 26583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 26584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 26585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 26586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 26587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 26588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 26589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 26590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 26591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 26592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 26593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 26595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 26596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 26792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 26793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 26794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 26795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 26796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 26799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 26800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 26801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 26803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 26805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 26806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 26998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 26999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 27000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 27001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 27002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 27003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 27004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 27005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 27006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 27007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 27008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 27009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 27010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 27011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 27012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 27200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 27201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 27202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 27203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 27204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 27205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 27206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 27207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 27208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 27209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 27210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 27211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 27212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 27213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 27214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 27409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 27410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 27411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 27412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 27413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 27414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 27415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 27416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 27417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 27418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 27419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 27420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 27421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 27422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 27423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 27614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 27615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 27616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 27617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 27618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 27621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 27622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 27623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 27625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 27627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 27628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.05s leader 5, trace 27786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 27821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 27822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 27824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 27825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 27834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 27835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 28017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 28018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 28019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 28020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 28021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 28030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 28031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 28219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 28220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 28221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 28222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 28223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 28232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 28233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 28435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 28436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 28438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 28439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 28448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 28449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 28636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 28637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 28638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 28639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 28640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 28641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 28642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 28643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 28644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 28645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 28646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 28647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 28648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 28649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 28650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 28835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 28836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 28837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 28838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 28839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 28840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 28841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 28842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 28843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 28844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 28845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 28846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 28847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 28848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 28849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 319.05s leader 5, trace 29019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 29046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 29047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 29049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 29050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 29059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 29251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 29252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 29253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 29254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 29255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 29257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 29258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 29260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 29262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 29264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 29265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 29452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 29453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 29454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 29455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 29456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 29465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 29466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 29655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 29656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 29657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 29658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 29659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 29660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 29661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 29662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 29663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 29664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 29665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 29666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 29667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 29668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 29669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 29861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 29862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 29863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 29864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 29865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 29866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 29867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 29868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 29869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 29870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 29871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 29872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 29873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 29874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 29875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 30065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 30066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 30067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 30068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 30069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 30078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 30079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 349.05s leader 5, trace 30244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 30275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 30276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 30277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 30278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 30287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 30288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 30477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 30478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 30479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 30480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 30481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 30483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 30484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 30486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 30488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 30490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 30491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 30680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 30681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 30682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 30683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 30684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 30686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 30687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 30689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 30693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 30694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Dane incapacitated
- 1: Vale killed in action
- 1: Reed killed in action
- 1: Ellis incapacitated
- 1: Ash incapacitated
- 1: Soren killed in action
- 1: Voss killed in action
- 1: Bram killed in action

## Outcome attribution

- 78.05s, evidence 1508: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 78.05s, evidence 18162: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177256 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18194}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 78.05s, evidence 18163: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.177256 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18194}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 103.25s, evidence 1670: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 103.25s, evidence 19550: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.191453 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 103.25s, evidence 19551: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.191453 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40932569033433686, 'next_transition': 19563}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 138.05s, evidence 1917: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 168, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2410}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 163.25s, evidence 2148: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 163.25s, evidence 22592: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.284779 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 163.25s, evidence 22593: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.284779 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 199.00s, evidence 2410: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 229, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2805}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 259.05s, evidence 2805: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 319.05s, evidence 3205: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
