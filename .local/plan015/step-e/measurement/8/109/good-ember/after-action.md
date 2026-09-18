# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/8/109/good-ember/battle-109-1789673808319024624`

## Battle summary

**Ember** · 360 s · 461 shots.

### Turning points

- 18.6s, squad 5: contact (events line 211). First recorded contact.
- 22.4s, squad 1: withdrawal ([trace 3319](#trace-3319)). 54.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 40.4s, squad 1: help call ([trace 4926](#trace-4926)). 73.7s, squad 0: answered a neighbour with support by fire.
- 44.6s, squad 0: help call ([trace 7121](#trace-7121)). No completion observed before termination.
- 73.7s, squad 0: help answer ([trace 9640](#trace-9640)). 123.0s, squad 0: took cover and returned fire.
- 93.6s, squad 0: help call ([trace 12297](#trace-12297)). No completion observed before termination.
- 105.7s, squad 1: withdrawal ([trace 13136](#trace-13136)). 136.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 117.3s, squad 1: help call ([trace 13988](#trace-13988)). No completion observed before termination.
- 126.4s, squad 0: withdrawal ([trace 14542](#trace-14542)). No completion observed before termination.

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, broke contact and 3 further drill types; no completed objective recorded; 38 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 5 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 368 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 50 shots, 0/2 lost.

### Decisions and attribution

At 105.7s, squad 1 chose broke contact ([trace 13136](#trace-13136)), followed by 3 shots and 1 own casualties; estimate 11.4 against 0 distinct squad-reported contacts; At 50.2s, squad 0 chose advanced tactically ([trace 7679](#trace-7679)), followed by 1 shots and 1 own casualties; estimate 12.8 against 0 distinct squad-reported contacts; At 102.3s, squad 1 chose took cover and returned fire ([trace 12819](#trace-12819)), followed by 1 shots and 0 own casualties; estimate 11.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1264](#trace-1264)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5761616488155874, 'next_transition': 1289}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1266](#trace-1266)). Following evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.101246138857494, 'next_transition': 2179}.

### Communication

182 matched deliveries (mean 0.63s, max 5.45s); 314 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.60s, squad 5, contact, evidence events line 211: First recorded contact; .
- 22.35s, squad 1, withdrawal, evidence 3319: BreakContact: believed ratio at least two without superiority; 54.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 40.35s, squad 1, help call, evidence 4926: NeedSupport; 73.7s, squad 0: answered a neighbour with support by fire.
- 44.60s, squad 0, help call, evidence 7121: NeedSupport; No completion observed before termination.
- 73.65s, squad 0, help answer, evidence 9640: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 123.0s, squad 0: took cover and returned fire.
- 93.60s, squad 0, help call, evidence 12297: NeedSupport; No completion observed before termination.
- 105.65s, squad 1, withdrawal, evidence 13136: BreakContact: believed ratio at least two without superiority; 136.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 117.30s, squad 1, help call, evidence 13988: NeedSupport; No completion observed before termination.
- 126.40s, squad 0, withdrawal, evidence 14542: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.059333978610344, 'next_transition': 815}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.059333978610344, 'next_transition': 815}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.059333978610344, 'next_transition': 815}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1156}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1156}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1156}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-643"></a>
<a id="trace-645"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-685"></a>
<a id="trace-687"></a>
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-735"></a>
<a id="trace-737"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
<a id="trace-845"></a>
<a id="trace-847"></a>
<a id="trace-876"></a>
<a id="trace-878"></a>
<a id="trace-911"></a>
<a id="trace-913"></a>
<a id="trace-932"></a>
<a id="trace-934"></a>
<a id="trace-963"></a>
<a id="trace-965"></a>
<a id="trace-992"></a>
<a id="trace-994"></a>
<a id="trace-1021"></a>
<a id="trace-1023"></a>
<a id="trace-1046"></a>
<a id="trace-1048"></a>
<a id="trace-1063"></a>
<a id="trace-1065"></a>
<a id="trace-1152"></a>
<a id="trace-1154"></a>
<a id="trace-1239"></a>
<a id="trace-1241"></a>
<a id="trace-1260"></a>
<a id="trace-1262"></a>
<a id="trace-1293"></a>
<a id="trace-1295"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1351"></a>
<a id="trace-1353"></a>
<a id="trace-1521"></a>
<a id="trace-1523"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1767"></a>
<a id="trace-1769"></a>
<a id="trace-1851"></a>
<a id="trace-1853"></a>
<a id="trace-1894"></a>
<a id="trace-1896"></a>
<a id="trace-1935"></a>
<a id="trace-1937"></a>
<a id="trace-1958"></a>
<a id="trace-1960"></a>
<a id="trace-2113"></a>
<a id="trace-2115"></a>
<a id="trace-2137"></a>
<a id="trace-2139"></a>
<a id="trace-2169"></a>
<a id="trace-2171"></a>
<a id="trace-2223"></a>
<a id="trace-2225"></a>
<a id="trace-2698"></a>
<a id="trace-2700"></a>
<a id="trace-2736"></a>
<a id="trace-2738"></a>
<a id="trace-2848"></a>
<a id="trace-2850"></a>
<a id="trace-2896"></a>
<a id="trace-2898"></a>
<a id="trace-2931"></a>
<a id="trace-2933"></a>
<a id="trace-2963"></a>
<a id="trace-2965"></a>
<a id="trace-3313"></a>
<a id="trace-3315"></a>
<a id="trace-3492"></a>
<a id="trace-3494"></a>
<a id="trace-3533"></a>
<a id="trace-3535"></a>
<a id="trace-3558"></a>
<a id="trace-3560"></a>
<a id="trace-3598"></a>
<a id="trace-3600"></a>
<a id="trace-3641"></a>
<a id="trace-3643"></a>
<a id="trace-3727"></a>
<a id="trace-3729"></a>
<a id="trace-3749"></a>
<a id="trace-3751"></a>
<a id="trace-3776"></a>
<a id="trace-3778"></a>
<a id="trace-3793"></a>
<a id="trace-3795"></a>
<a id="trace-3818"></a>
<a id="trace-3820"></a>
<a id="trace-3845"></a>
<a id="trace-3847"></a>
<a id="trace-3883"></a>
<a id="trace-3885"></a>
<a id="trace-3934"></a>
<a id="trace-3936"></a>
<a id="trace-3968"></a>
<a id="trace-3970"></a>
<a id="trace-4222"></a>
<a id="trace-4224"></a>
<a id="trace-4328"></a>
<a id="trace-4330"></a>
<a id="trace-4362"></a>
<a id="trace-4364"></a>
<a id="trace-4384"></a>
<a id="trace-4386"></a>
<a id="trace-4409"></a>
<a id="trace-4411"></a>
<a id="trace-4436"></a>
<a id="trace-4438"></a>
<a id="trace-4457"></a>
<a id="trace-4459"></a>
<a id="trace-4474"></a>
<a id="trace-4476"></a>
<a id="trace-4485"></a>
<a id="trace-4487"></a>
<a id="trace-4507"></a>
<a id="trace-4509"></a>
<a id="trace-4575"></a>
<a id="trace-4577"></a>
<a id="trace-4656"></a>
<a id="trace-4658"></a>
<a id="trace-4672"></a>
<a id="trace-4674"></a>
<a id="trace-4699"></a>
<a id="trace-4701"></a>
<a id="trace-4717"></a>
<a id="trace-4719"></a>
<a id="trace-4739"></a>
<a id="trace-4741"></a>
<a id="trace-4755"></a>
<a id="trace-4757"></a>
<a id="trace-4782"></a>
<a id="trace-4784"></a>
<a id="trace-4796"></a>
<a id="trace-4798"></a>
<a id="trace-4815"></a>
<a id="trace-4817"></a>
<a id="trace-4831"></a>
<a id="trace-4833"></a>
<a id="trace-4921"></a>
<a id="trace-4923"></a>
<a id="trace-4949"></a>
<a id="trace-4951"></a>
<a id="trace-4972"></a>
<a id="trace-4974"></a>
<a id="trace-4996"></a>
<a id="trace-4998"></a>
<a id="trace-7005"></a>
<a id="trace-7007"></a>
<a id="trace-7024"></a>
<a id="trace-7026"></a>
<a id="trace-7053"></a>
<a id="trace-7055"></a>
<a id="trace-7082"></a>
<a id="trace-7084"></a>
<a id="trace-7101"></a>
<a id="trace-7103"></a>
<a id="trace-7142"></a>
<a id="trace-7144"></a>
<a id="trace-7227"></a>
<a id="trace-7229"></a>
<a id="trace-7251"></a>
<a id="trace-7253"></a>
<a id="trace-7275"></a>
<a id="trace-7277"></a>
<a id="trace-7313"></a>
<a id="trace-7315"></a>
<a id="trace-7349"></a>
<a id="trace-7351"></a>
<a id="trace-7389"></a>
<a id="trace-7391"></a>
<a id="trace-7438"></a>
<a id="trace-7440"></a>
<a id="trace-7497"></a>
<a id="trace-7499"></a>
<a id="trace-7542"></a>
<a id="trace-7544"></a>
<a id="trace-7570"></a>
<a id="trace-7572"></a>
<a id="trace-7669"></a>
<a id="trace-7671"></a>
<a id="trace-7914"></a>
<a id="trace-7916"></a>
<a id="trace-7940"></a>
<a id="trace-7942"></a>
<a id="trace-7974"></a>
<a id="trace-7976"></a>
<a id="trace-7995"></a>
<a id="trace-7997"></a>
<a id="trace-8020"></a>
<a id="trace-8022"></a>
<a id="trace-8123"></a>
<a id="trace-8125"></a>
<a id="trace-8137"></a>
<a id="trace-8139"></a>
<a id="trace-8160"></a>
<a id="trace-8162"></a>
<a id="trace-8187"></a>
<a id="trace-8189"></a>
<a id="trace-8275"></a>
<a id="trace-8277"></a>
<a id="trace-8295"></a>
<a id="trace-8297"></a>
<a id="trace-8324"></a>
<a id="trace-8326"></a>
<a id="trace-8346"></a>
<a id="trace-8348"></a>
<a id="trace-8369"></a>
<a id="trace-8371"></a>
<a id="trace-8382"></a>
<a id="trace-8384"></a>
<a id="trace-8564"></a>
<a id="trace-8566"></a>
<a id="trace-8633"></a>
<a id="trace-8635"></a>
<a id="trace-8663"></a>
<a id="trace-8665"></a>
<a id="trace-8689"></a>
<a id="trace-8691"></a>
<a id="trace-8771"></a>
<a id="trace-8773"></a>
<a id="trace-8789"></a>
<a id="trace-8791"></a>
<a id="trace-8819"></a>
<a id="trace-8821"></a>
<a id="trace-8830"></a>
<a id="trace-8832"></a>
<a id="trace-8851"></a>
<a id="trace-8853"></a>
<a id="trace-8864"></a>
<a id="trace-8866"></a>
<a id="trace-8875"></a>
<a id="trace-8877"></a>
<a id="trace-8888"></a>
<a id="trace-8890"></a>
<a id="trace-8905"></a>
<a id="trace-8907"></a>
<a id="trace-8920"></a>
<a id="trace-8922"></a>
<a id="trace-9085"></a>
<a id="trace-9087"></a>
<a id="trace-9096"></a>
<a id="trace-9098"></a>
<a id="trace-9117"></a>
<a id="trace-9119"></a>
<a id="trace-9136"></a>
<a id="trace-9138"></a>
<a id="trace-9167"></a>
<a id="trace-9169"></a>
<a id="trace-9187"></a>
<a id="trace-9189"></a>
<a id="trace-9199"></a>
<a id="trace-9201"></a>
<a id="trace-9225"></a>
<a id="trace-9227"></a>
<a id="trace-9246"></a>
<a id="trace-9248"></a>
<a id="trace-9332"></a>
<a id="trace-9334"></a>
<a id="trace-9442"></a>
<a id="trace-9444"></a>
<a id="trace-9464"></a>
<a id="trace-9466"></a>
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9587"></a>
<a id="trace-9589"></a>
<a id="trace-9609"></a>
<a id="trace-9611"></a>
<a id="trace-9634"></a>
<a id="trace-9636"></a>
<a id="trace-11195"></a>
<a id="trace-11197"></a>
<a id="trace-11225"></a>
<a id="trace-11227"></a>
<a id="trace-11240"></a>
<a id="trace-11242"></a>
<a id="trace-11323"></a>
<a id="trace-11325"></a>
<a id="trace-11343"></a>
<a id="trace-11345"></a>
<a id="trace-11363"></a>
<a id="trace-11365"></a>
<a id="trace-11381"></a>
<a id="trace-11383"></a>
<a id="trace-11403"></a>
<a id="trace-11405"></a>
<a id="trace-11425"></a>
<a id="trace-11427"></a>
<a id="trace-11438"></a>
<a id="trace-11440"></a>
<a id="trace-11452"></a>
<a id="trace-11454"></a>
<a id="trace-11468"></a>
<a id="trace-11470"></a>
<a id="trace-11487"></a>
<a id="trace-11489"></a>
<a id="trace-11573"></a>
<a id="trace-11575"></a>
<a id="trace-11588"></a>
<a id="trace-11590"></a>
<a id="trace-11609"></a>
<a id="trace-11611"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11703"></a>
<a id="trace-11705"></a>
<a id="trace-11720"></a>
<a id="trace-11722"></a>
<a id="trace-11746"></a>
<a id="trace-11748"></a>
<a id="trace-11763"></a>
<a id="trace-11765"></a>
<a id="trace-11802"></a>
<a id="trace-11804"></a>
<a id="trace-11819"></a>
<a id="trace-11821"></a>
<a id="trace-11905"></a>
<a id="trace-11907"></a>
<a id="trace-11918"></a>
<a id="trace-11920"></a>
<a id="trace-11936"></a>
<a id="trace-11938"></a>
<a id="trace-11952"></a>
<a id="trace-11954"></a>
<a id="trace-12035"></a>
<a id="trace-12037"></a>
<a id="trace-12052"></a>
<a id="trace-12054"></a>
<a id="trace-12064"></a>
<a id="trace-12066"></a>
<a id="trace-12080"></a>
<a id="trace-12082"></a>
<a id="trace-12096"></a>
<a id="trace-12098"></a>
<a id="trace-12113"></a>
<a id="trace-12115"></a>
<a id="trace-12190"></a>
<a id="trace-12192"></a>
<a id="trace-12210"></a>
<a id="trace-12212"></a>
<a id="trace-12225"></a>
<a id="trace-12227"></a>
<a id="trace-12240"></a>
<a id="trace-12242"></a>
<a id="trace-12257"></a>
<a id="trace-12259"></a>
<a id="trace-12273"></a>
<a id="trace-12275"></a>
<a id="trace-12288"></a>
<a id="trace-12290"></a>
<a id="trace-12311"></a>
<a id="trace-12313"></a>
<a id="trace-12383"></a>
<a id="trace-12385"></a>
<a id="trace-12405"></a>
<a id="trace-12407"></a>
<a id="trace-12488"></a>
<a id="trace-12490"></a>
<a id="trace-12500"></a>
<a id="trace-12502"></a>
<a id="trace-12526"></a>
<a id="trace-12528"></a>
<a id="trace-12539"></a>
<a id="trace-12541"></a>
<a id="trace-12556"></a>
<a id="trace-12558"></a>
<a id="trace-12572"></a>
<a id="trace-12574"></a>
<a id="trace-12599"></a>
<a id="trace-12601"></a>
<a id="trace-12616"></a>
<a id="trace-12618"></a>
<a id="trace-12637"></a>
<a id="trace-12639"></a>
<a id="trace-12651"></a>
<a id="trace-12653"></a>
<a id="trace-12736"></a>
<a id="trace-12738"></a>
<a id="trace-12756"></a>
<a id="trace-12758"></a>
<a id="trace-12779"></a>
<a id="trace-12781"></a>
<a id="trace-12792"></a>
<a id="trace-12794"></a>
<a id="trace-12814"></a>
<a id="trace-12816"></a>
<a id="trace-12925"></a>
<a id="trace-12927"></a>
<a id="trace-12947"></a>
<a id="trace-12949"></a>
<a id="trace-12966"></a>
<a id="trace-12968"></a>
<a id="trace-13001"></a>
<a id="trace-13003"></a>
<a id="trace-13025"></a>
<a id="trace-13027"></a>
<a id="trace-13126"></a>
<a id="trace-13128"></a>
<a id="trace-13253"></a>
<a id="trace-13255"></a>
<a id="trace-13274"></a>
<a id="trace-13276"></a>
<a id="trace-13298"></a>
<a id="trace-13300"></a>
<a id="trace-13324"></a>
<a id="trace-13326"></a>
<a id="trace-13357"></a>
<a id="trace-13359"></a>
<a id="trace-13389"></a>
<a id="trace-13391"></a>
<a id="trace-13408"></a>
<a id="trace-13410"></a>
<a id="trace-13433"></a>
<a id="trace-13435"></a>
<a id="trace-13445"></a>
<a id="trace-13447"></a>
<a id="trace-13531"></a>
<a id="trace-13533"></a>
<a id="trace-13554"></a>
<a id="trace-13556"></a>
<a id="trace-13584"></a>
<a id="trace-13586"></a>
<a id="trace-13616"></a>
<a id="trace-13618"></a>
<a id="trace-13651"></a>
<a id="trace-13653"></a>
<a id="trace-13681"></a>
<a id="trace-13683"></a>
<a id="trace-13727"></a>
<a id="trace-13729"></a>
<a id="trace-13748"></a>
<a id="trace-13750"></a>
<a id="trace-13782"></a>
<a id="trace-13784"></a>
<a id="trace-13797"></a>
<a id="trace-13799"></a>
<a id="trace-13891"></a>
<a id="trace-13893"></a>
<a id="trace-13909"></a>
<a id="trace-13911"></a>
<a id="trace-13938"></a>
<a id="trace-13940"></a>
<a id="trace-13960"></a>
<a id="trace-13962"></a>
<a id="trace-13983"></a>
<a id="trace-13985"></a>
<a id="trace-14009"></a>
<a id="trace-14011"></a>
<a id="trace-14029"></a>
<a id="trace-14031"></a>
<a id="trace-14047"></a>
<a id="trace-14049"></a>
<a id="trace-14070"></a>
<a id="trace-14072"></a>
<a id="trace-14080"></a>
<a id="trace-14082"></a>
<a id="trace-14157"></a>
<a id="trace-14159"></a>
<a id="trace-14172"></a>
<a id="trace-14174"></a>
<a id="trace-14200"></a>
<a id="trace-14202"></a>
<a id="trace-14218"></a>
<a id="trace-14220"></a>
<a id="trace-14231"></a>
<a id="trace-14233"></a>
<a id="trace-14359"></a>
<a id="trace-14361"></a>
<a id="trace-14373"></a>
<a id="trace-14375"></a>
<a id="trace-14398"></a>
<a id="trace-14400"></a>
<a id="trace-14411"></a>
<a id="trace-14413"></a>
<a id="trace-14497"></a>
<a id="trace-14499"></a>
<a id="trace-14512"></a>
<a id="trace-14514"></a>
<a id="trace-14534"></a>
<a id="trace-14536"></a>
<a id="trace-14658"></a>
<a id="trace-14660"></a>
<a id="trace-14677"></a>
<a id="trace-14679"></a>
<a id="trace-14691"></a>
<a id="trace-14693"></a>
<a id="trace-14717"></a>
<a id="trace-14719"></a>
<a id="trace-14733"></a>
<a id="trace-14735"></a>
<a id="trace-14758"></a>
<a id="trace-14760"></a>
<a id="trace-14773"></a>
<a id="trace-14775"></a>
<a id="trace-14845"></a>
<a id="trace-14847"></a>
<a id="trace-14861"></a>
<a id="trace-14863"></a>
<a id="trace-14881"></a>
<a id="trace-14883"></a>
<a id="trace-14894"></a>
<a id="trace-14896"></a>
<a id="trace-14912"></a>
<a id="trace-14914"></a>
<a id="trace-14928"></a>
<a id="trace-14930"></a>
<a id="trace-14947"></a>
<a id="trace-14949"></a>
<a id="trace-14960"></a>
<a id="trace-14962"></a>
<a id="trace-14976"></a>
<a id="trace-14978"></a>
<a id="trace-14992"></a>
<a id="trace-14994"></a>
<a id="trace-15063"></a>
<a id="trace-15065"></a>
<a id="trace-15077"></a>
<a id="trace-15079"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15109"></a>
<a id="trace-15111"></a>
<a id="trace-15137"></a>
<a id="trace-15139"></a>
<a id="trace-15150"></a>
<a id="trace-15152"></a>
<a id="trace-15174"></a>
<a id="trace-15176"></a>
<a id="trace-15187"></a>
<a id="trace-15189"></a>
<a id="trace-15202"></a>
<a id="trace-15204"></a>
<a id="trace-15213"></a>
<a id="trace-15215"></a>
<a id="trace-15290"></a>
<a id="trace-15292"></a>
<a id="trace-15310"></a>
<a id="trace-15312"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15343"></a>
<a id="trace-15345"></a>
<a id="trace-15363"></a>
<a id="trace-15365"></a>
<a id="trace-15380"></a>
<a id="trace-15382"></a>
<a id="trace-15399"></a>
<a id="trace-15401"></a>
<a id="trace-15412"></a>
<a id="trace-15414"></a>
<a id="trace-15428"></a>
<a id="trace-15430"></a>
<a id="trace-15438"></a>
<a id="trace-15440"></a>
<a id="trace-15515"></a>
<a id="trace-15517"></a>
<a id="trace-15531"></a>
<a id="trace-15533"></a>
<a id="trace-15545"></a>
<a id="trace-15547"></a>
<a id="trace-15555"></a>
<a id="trace-15557"></a>
<a id="trace-15575"></a>
<a id="trace-15577"></a>
<a id="trace-15586"></a>
<a id="trace-15588"></a>
<a id="trace-15605"></a>
<a id="trace-15607"></a>
<a id="trace-15622"></a>
<a id="trace-15624"></a>
<a id="trace-15641"></a>
<a id="trace-15643"></a>
<a id="trace-15656"></a>
<a id="trace-15658"></a>
<a id="trace-15731"></a>
<a id="trace-15733"></a>
<a id="trace-15753"></a>
<a id="trace-15755"></a>
<a id="trace-15769"></a>
<a id="trace-15771"></a>
<a id="trace-15783"></a>
<a id="trace-15785"></a>
<a id="trace-15808"></a>
<a id="trace-15810"></a>
<a id="trace-15822"></a>
<a id="trace-15824"></a>
<a id="trace-15836"></a>
<a id="trace-15838"></a>
<a id="trace-15853"></a>
<a id="trace-15855"></a>
<a id="trace-15871"></a>
<a id="trace-15873"></a>
<a id="trace-15885"></a>
<a id="trace-15887"></a>
<a id="trace-15964"></a>
<a id="trace-15966"></a>
<a id="trace-15978"></a>
<a id="trace-15980"></a>
<a id="trace-15998"></a>
<a id="trace-16000"></a>
<a id="trace-16011"></a>
<a id="trace-16013"></a>
<a id="trace-16028"></a>
<a id="trace-16030"></a>
<a id="trace-16038"></a>
<a id="trace-16040"></a>
<a id="trace-16051"></a>
<a id="trace-16053"></a>
<a id="trace-16066"></a>
<a id="trace-16068"></a>
<a id="trace-16079"></a>
<a id="trace-16081"></a>
<a id="trace-16093"></a>
<a id="trace-16095"></a>
<a id="trace-16164"></a>
<a id="trace-16166"></a>
<a id="trace-16177"></a>
<a id="trace-16179"></a>
<a id="trace-16193"></a>
<a id="trace-16195"></a>
<a id="trace-16205"></a>
<a id="trace-16207"></a>
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16231"></a>
<a id="trace-16233"></a>
<a id="trace-16243"></a>
<a id="trace-16245"></a>
<a id="trace-16255"></a>
<a id="trace-16257"></a>
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16347"></a>
<a id="trace-16349"></a>
<a id="trace-16358"></a>
<a id="trace-16360"></a>
<a id="trace-16376"></a>
<a id="trace-16378"></a>
<a id="trace-16389"></a>
<a id="trace-16391"></a>
<a id="trace-16402"></a>
<a id="trace-16404"></a>
<a id="trace-16410"></a>
<a id="trace-16412"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16433"></a>
<a id="trace-16435"></a>
<a id="trace-16443"></a>
<a id="trace-16445"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
<a id="trace-16522"></a>
<a id="trace-16524"></a>
<a id="trace-16533"></a>
<a id="trace-16535"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16558"></a>
<a id="trace-16560"></a>
<a id="trace-16572"></a>
<a id="trace-16574"></a>
<a id="trace-16581"></a>
<a id="trace-16583"></a>
<a id="trace-16595"></a>
<a id="trace-16597"></a>
<a id="trace-16609"></a>
<a id="trace-16611"></a>
<a id="trace-16619"></a>
<a id="trace-16621"></a>
<a id="trace-16629"></a>
<a id="trace-16631"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16708"></a>
<a id="trace-16710"></a>
<a id="trace-16722"></a>
<a id="trace-16724"></a>
<a id="trace-16732"></a>
<a id="trace-16734"></a>
<a id="trace-16746"></a>
<a id="trace-16748"></a>
<a id="trace-16755"></a>
<a id="trace-16757"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16781"></a>
<a id="trace-16783"></a>
<a id="trace-16795"></a>
<a id="trace-16797"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16876"></a>
<a id="trace-16878"></a>
<a id="trace-16888"></a>
<a id="trace-16890"></a>
<a id="trace-16901"></a>
<a id="trace-16903"></a>
<a id="trace-16912"></a>
<a id="trace-16914"></a>
<a id="trace-16925"></a>
<a id="trace-16927"></a>
<a id="trace-16933"></a>
<a id="trace-16935"></a>
<a id="trace-16948"></a>
<a id="trace-16950"></a>
<a id="trace-16964"></a>
<a id="trace-16966"></a>
<a id="trace-16977"></a>
<a id="trace-16979"></a>
<a id="trace-16986"></a>
<a id="trace-16988"></a>
<a id="trace-17065"></a>
<a id="trace-17067"></a>
<a id="trace-17079"></a>
<a id="trace-17081"></a>
<a id="trace-17090"></a>
<a id="trace-17092"></a>
<a id="trace-17105"></a>
<a id="trace-17107"></a>
<a id="trace-17113"></a>
<a id="trace-17115"></a>
<a id="trace-17128"></a>
<a id="trace-17130"></a>
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17152"></a>
<a id="trace-17154"></a>
<a id="trace-17159"></a>
<a id="trace-17161"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17239"></a>
<a id="trace-17241"></a>
<a id="trace-17255"></a>
<a id="trace-17257"></a>
<a id="trace-17267"></a>
<a id="trace-17269"></a>
<a id="trace-17283"></a>
<a id="trace-17285"></a>
<a id="trace-17292"></a>
<a id="trace-17294"></a>
<a id="trace-17305"></a>
<a id="trace-17307"></a>
<a id="trace-17317"></a>
<a id="trace-17319"></a>
<a id="trace-17328"></a>
<a id="trace-17330"></a>
<a id="trace-17338"></a>
<a id="trace-17340"></a>
<a id="trace-17407"></a>
<a id="trace-17409"></a>
<a id="trace-17421"></a>
<a id="trace-17423"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17442"></a>
<a id="trace-17444"></a>
<a id="trace-17455"></a>
<a id="trace-17457"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17507"></a>
<a id="trace-17509"></a>
<a id="trace-17518"></a>
<a id="trace-17520"></a>
<a id="trace-17588"></a>
<a id="trace-17590"></a>
<a id="trace-17599"></a>
<a id="trace-17601"></a>
<a id="trace-17610"></a>
<a id="trace-17612"></a>
<a id="trace-17621"></a>
<a id="trace-17623"></a>
<a id="trace-17634"></a>
<a id="trace-17636"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17660"></a>
<a id="trace-17662"></a>
<a id="trace-17672"></a>
<a id="trace-17674"></a>
<a id="trace-17686"></a>
<a id="trace-17688"></a>
<a id="trace-17700"></a>
<a id="trace-17702"></a>
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17783"></a>
<a id="trace-17785"></a>
<a id="trace-17795"></a>
<a id="trace-17797"></a>
<a id="trace-17805"></a>
<a id="trace-17807"></a>
<a id="trace-17819"></a>
<a id="trace-17821"></a>
<a id="trace-17828"></a>
<a id="trace-17830"></a>
<a id="trace-17839"></a>
<a id="trace-17841"></a>
<a id="trace-17850"></a>
<a id="trace-17852"></a>
<a id="trace-17864"></a>
<a id="trace-17866"></a>
<a id="trace-17879"></a>
<a id="trace-17881"></a>
<a id="trace-17949"></a>
<a id="trace-17951"></a>
<a id="trace-18018"></a>
<a id="trace-18020"></a>
<a id="trace-18038"></a>
<a id="trace-18040"></a>
<a id="trace-18046"></a>
<a id="trace-18048"></a>
<a id="trace-18063"></a>
<a id="trace-18065"></a>
<a id="trace-18072"></a>
<a id="trace-18074"></a>
<a id="trace-18085"></a>
<a id="trace-18087"></a>
<a id="trace-18094"></a>
<a id="trace-18096"></a>
<a id="trace-18108"></a>
<a id="trace-18110"></a>
<a id="trace-18116"></a>
<a id="trace-18118"></a>
<a id="trace-18185"></a>
<a id="trace-18187"></a>
<a id="trace-18193"></a>
<a id="trace-18195"></a>
<a id="trace-18212"></a>
<a id="trace-18214"></a>
<a id="trace-18221"></a>
<a id="trace-18223"></a>
<a id="trace-18242"></a>
<a id="trace-18244"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18266"></a>
<a id="trace-18268"></a>
<a id="trace-18277"></a>
<a id="trace-18279"></a>
<a id="trace-18288"></a>
<a id="trace-18290"></a>
<a id="trace-18299"></a>
<a id="trace-18301"></a>
<a id="trace-18366"></a>
<a id="trace-18368"></a>
<a id="trace-18374"></a>
<a id="trace-18376"></a>
<a id="trace-18388"></a>
<a id="trace-18390"></a>
<a id="trace-18396"></a>
<a id="trace-18398"></a>
<a id="trace-18407"></a>
<a id="trace-18409"></a>
<a id="trace-18414"></a>
<a id="trace-18416"></a>
<a id="trace-18423"></a>
<a id="trace-18425"></a>
<a id="trace-18431"></a>
<a id="trace-18433"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18451"></a>
<a id="trace-18453"></a>
<a id="trace-18517"></a>
<a id="trace-18519"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18558"></a>
<a id="trace-18560"></a>
<a id="trace-18566"></a>
<a id="trace-18568"></a>
<a id="trace-18573"></a>
<a id="trace-18575"></a>
<a id="trace-18584"></a>
<a id="trace-18586"></a>
<a id="trace-18591"></a>
<a id="trace-18593"></a>
<a id="trace-18656"></a>
<a id="trace-18658"></a>
<a id="trace-18664"></a>
<a id="trace-18666"></a>
<a id="trace-18677"></a>
<a id="trace-18679"></a>
<a id="trace-18685"></a>
<a id="trace-18687"></a>
<a id="trace-18693"></a>
<a id="trace-18695"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18716"></a>
<a id="trace-18718"></a>
<a id="trace-18730"></a>
<a id="trace-18732"></a>
<a id="trace-18742"></a>
<a id="trace-18744"></a>
<a id="trace-18749"></a>
<a id="trace-18751"></a>
<a id="trace-18814"></a>
<a id="trace-18816"></a>
<a id="trace-18819"></a>
<a id="trace-18821"></a>
<a id="trace-18830"></a>
<a id="trace-18832"></a>
<a id="trace-18837"></a>
<a id="trace-18839"></a>
<a id="trace-18845"></a>
<a id="trace-18847"></a>
<a id="trace-18853"></a>
<a id="trace-18855"></a>
<a id="trace-18864"></a>
<a id="trace-18866"></a>
<a id="trace-18873"></a>
<a id="trace-18875"></a>
<a id="trace-18885"></a>
<a id="trace-18887"></a>
<a id="trace-18895"></a>
<a id="trace-18897"></a>
<a id="trace-18962"></a>
<a id="trace-18964"></a>
<a id="trace-18975"></a>
<a id="trace-18977"></a>
<a id="trace-18988"></a>
<a id="trace-18990"></a>
<a id="trace-18994"></a>
<a id="trace-18996"></a>
<a id="trace-19002"></a>
<a id="trace-19004"></a>
<a id="trace-19008"></a>
<a id="trace-19010"></a>
<a id="trace-19017"></a>
<a id="trace-19019"></a>
<a id="trace-19025"></a>
<a id="trace-19027"></a>
<a id="trace-19036"></a>
<a id="trace-19038"></a>
<a id="trace-19042"></a>
<a id="trace-19044"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19117"></a>
<a id="trace-19119"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19158"></a>
<a id="trace-19160"></a>
<a id="trace-19165"></a>
<a id="trace-19167"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19196"></a>
<a id="trace-19198"></a>
<a id="trace-19201"></a>
<a id="trace-19203"></a>
<a id="trace-19266"></a>
<a id="trace-19268"></a>
<a id="trace-19271"></a>
<a id="trace-19273"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19293"></a>
<a id="trace-19295"></a>
<a id="trace-19303"></a>
<a id="trace-19305"></a>
<a id="trace-19314"></a>
<a id="trace-19316"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19334"></a>
<a id="trace-19336"></a>
<a id="trace-19349"></a>
<a id="trace-19351"></a>
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19422"></a>
<a id="trace-19424"></a>
<a id="trace-19429"></a>
<a id="trace-19431"></a>
<a id="trace-19441"></a>
<a id="trace-19443"></a>
<a id="trace-19447"></a>
<a id="trace-19449"></a>
<a id="trace-19456"></a>
<a id="trace-19458"></a>
<a id="trace-19464"></a>
<a id="trace-19466"></a>
<a id="trace-19473"></a>
<a id="trace-19475"></a>
<a id="trace-19482"></a>
<a id="trace-19484"></a>
<a id="trace-19496"></a>
<a id="trace-19498"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19576"></a>
<a id="trace-19578"></a>
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19596"></a>
<a id="trace-19598"></a>
<a id="trace-19606"></a>
<a id="trace-19608"></a>
<a id="trace-19614"></a>
<a id="trace-19616"></a>
<a id="trace-19621"></a>
<a id="trace-19623"></a>
<a id="trace-19632"></a>
<a id="trace-19634"></a>
<a id="trace-19640"></a>
<a id="trace-19642"></a>
<a id="trace-19656"></a>
<a id="trace-19658"></a>
<a id="trace-19726"></a>
<a id="trace-19728"></a>
<a id="trace-19733"></a>
<a id="trace-19735"></a>
<a id="trace-19746"></a>
<a id="trace-19748"></a>
<a id="trace-19756"></a>
<a id="trace-19758"></a>
<a id="trace-19768"></a>
<a id="trace-19770"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19788"></a>
<a id="trace-19790"></a>
<a id="trace-19796"></a>
<a id="trace-19798"></a>
<a id="trace-19805"></a>
<a id="trace-19807"></a>
<a id="trace-19811"></a>
<a id="trace-19813"></a>
<a id="trace-19880"></a>
<a id="trace-19882"></a>
<a id="trace-19888"></a>
<a id="trace-19890"></a>
<a id="trace-19899"></a>
<a id="trace-19901"></a>
<a id="trace-19906"></a>
<a id="trace-19908"></a>
<a id="trace-19915"></a>
<a id="trace-19917"></a>
<a id="trace-19925"></a>
<a id="trace-19927"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-19947"></a>
<a id="trace-19949"></a>
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-19963"></a>
<a id="trace-19965"></a>
<a id="trace-20030"></a>
<a id="trace-20032"></a>
<a id="trace-20039"></a>
<a id="trace-20041"></a>
<a id="trace-20050"></a>
<a id="trace-20052"></a>
<a id="trace-20057"></a>
<a id="trace-20059"></a>
<a id="trace-20070"></a>
<a id="trace-20072"></a>
<a id="trace-20077"></a>
<a id="trace-20079"></a>
<a id="trace-20085"></a>
<a id="trace-20087"></a>
<a id="trace-20093"></a>
<a id="trace-20095"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20113"></a>
<a id="trace-20115"></a>
<a id="trace-20183"></a>
<a id="trace-20185"></a>
<a id="trace-20189"></a>
<a id="trace-20191"></a>
<a id="trace-20203"></a>
<a id="trace-20205"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20220"></a>
<a id="trace-20222"></a>
<a id="trace-20230"></a>
<a id="trace-20232"></a>
<a id="trace-20239"></a>
<a id="trace-20241"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20259"></a>
<a id="trace-20261"></a>
<a id="trace-20267"></a>
<a id="trace-20269"></a>
<a id="trace-20334"></a>
<a id="trace-20336"></a>
<a id="trace-20343"></a>
<a id="trace-20345"></a>
<a id="trace-20356"></a>
<a id="trace-20358"></a>
<a id="trace-20363"></a>
<a id="trace-20365"></a>
<a id="trace-20375"></a>
<a id="trace-20377"></a>
<a id="trace-20381"></a>
<a id="trace-20383"></a>
<a id="trace-20390"></a>
<a id="trace-20392"></a>
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20411"></a>
<a id="trace-20413"></a>
<a id="trace-20418"></a>
<a id="trace-20420"></a>
<a id="trace-20485"></a>
<a id="trace-20487"></a>
<a id="trace-20493"></a>
<a id="trace-20495"></a>
<a id="trace-20505"></a>
<a id="trace-20507"></a>
<a id="trace-20515"></a>
<a id="trace-20517"></a>
<a id="trace-20528"></a>
<a id="trace-20530"></a>
<a id="trace-20533"></a>
<a id="trace-20535"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20554"></a>
<a id="trace-20556"></a>
<a id="trace-20563"></a>
<a id="trace-20565"></a>
<a id="trace-20570"></a>
<a id="trace-20572"></a>
<a id="trace-20634"></a>
<a id="trace-20636"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20654"></a>
<a id="trace-20656"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20679"></a>
<a id="trace-20681"></a>
<a id="trace-20684"></a>
<a id="trace-20686"></a>
<a id="trace-20695"></a>
<a id="trace-20697"></a>
<a id="trace-20703"></a>
<a id="trace-20705"></a>
<a id="trace-20716"></a>
<a id="trace-20718"></a>
<a id="trace-20724"></a>
<a id="trace-20726"></a>
<a id="trace-20792"></a>
<a id="trace-20794"></a>
<a id="trace-20798"></a>
<a id="trace-20800"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20815"></a>
<a id="trace-20817"></a>
<a id="trace-20825"></a>
<a id="trace-20827"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20855"></a>
<a id="trace-20857"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-20872"></a>
<a id="trace-20874"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20948"></a>
<a id="trace-20950"></a>
<a id="trace-20962"></a>
<a id="trace-20964"></a>
<a id="trace-20972"></a>
<a id="trace-20974"></a>
<a id="trace-20981"></a>
<a id="trace-20983"></a>
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-20994"></a>
<a id="trace-20996"></a>
<a id="trace-21004"></a>
<a id="trace-21006"></a>
<a id="trace-21013"></a>
<a id="trace-21015"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21091"></a>
<a id="trace-21093"></a>
<a id="trace-21099"></a>
<a id="trace-21101"></a>
<a id="trace-21111"></a>
<a id="trace-21113"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21132"></a>
<a id="trace-21134"></a>
<a id="trace-21140"></a>
<a id="trace-21142"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21172"></a>
<a id="trace-21174"></a>
<a id="trace-21177"></a>
<a id="trace-21179"></a>
<a id="trace-21243"></a>
<a id="trace-21245"></a>
<a id="trace-21249"></a>
<a id="trace-21251"></a>
<a id="trace-21260"></a>
<a id="trace-21262"></a>
<a id="trace-21266"></a>
<a id="trace-21268"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21289"></a>
<a id="trace-21291"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21311"></a>
<a id="trace-21313"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21329"></a>
<a id="trace-21331"></a>
<a id="trace-21397"></a>
<a id="trace-21399"></a>
<a id="trace-21404"></a>
<a id="trace-21406"></a>
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21429"></a>
<a id="trace-21431"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
<a id="trace-21445"></a>
<a id="trace-21447"></a>
<a id="trace-21455"></a>
<a id="trace-21457"></a>
<a id="trace-21466"></a>
<a id="trace-21468"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21547"></a>
<a id="trace-21549"></a>
<a id="trace-21553"></a>
<a id="trace-21555"></a>
<a id="trace-21567"></a>
<a id="trace-21569"></a>
<a id="trace-21576"></a>
<a id="trace-21578"></a>
<a id="trace-21584"></a>
<a id="trace-21586"></a>
<a id="trace-21591"></a>
<a id="trace-21593"></a>
<a id="trace-21601"></a>
<a id="trace-21603"></a>
<a id="trace-21609"></a>
<a id="trace-21611"></a>
<a id="trace-21622"></a>
<a id="trace-21624"></a>
<a id="trace-21629"></a>
<a id="trace-21631"></a>
<a id="trace-21697"></a>
<a id="trace-21699"></a>
<a id="trace-21703"></a>
<a id="trace-21705"></a>
<a id="trace-21718"></a>
<a id="trace-21720"></a>
<a id="trace-21727"></a>
<a id="trace-21729"></a>
<a id="trace-21740"></a>
<a id="trace-21742"></a>
<a id="trace-21748"></a>
<a id="trace-21750"></a>
<a id="trace-21759"></a>
<a id="trace-21761"></a>
<a id="trace-21767"></a>
<a id="trace-21769"></a>
<a id="trace-21776"></a>
<a id="trace-21778"></a>
<a id="trace-21782"></a>
<a id="trace-21784"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21856"></a>
<a id="trace-21858"></a>
<a id="trace-21866"></a>
<a id="trace-21868"></a>
<a id="trace-21875"></a>
<a id="trace-21877"></a>
<a id="trace-21884"></a>
<a id="trace-21886"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21901"></a>
<a id="trace-21903"></a>
<a id="trace-21915"></a>
<a id="trace-21917"></a>
<a id="trace-21929"></a>
<a id="trace-21931"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22010"></a>
<a id="trace-22012"></a>
<a id="trace-22020"></a>
<a id="trace-22022"></a>
<a id="trace-22028"></a>
<a id="trace-22030"></a>
<a id="trace-22038"></a>
<a id="trace-22040"></a>
<a id="trace-22045"></a>
<a id="trace-22047"></a>
<a id="trace-22055"></a>
<a id="trace-22057"></a>
<a id="trace-22063"></a>
<a id="trace-22065"></a>
<a id="trace-22075"></a>
<a id="trace-22077"></a>
<a id="trace-22082"></a>
<a id="trace-22084"></a>
<a id="trace-22153"></a>
<a id="trace-22155"></a>
<a id="trace-22165"></a>
<a id="trace-22167"></a>
<a id="trace-22179"></a>
<a id="trace-22181"></a>
<a id="trace-22187"></a>
<a id="trace-22189"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22211"></a>
<a id="trace-22213"></a>
<a id="trace-22218"></a>
<a id="trace-22220"></a>
<a id="trace-22230"></a>
<a id="trace-22232"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22305"></a>
<a id="trace-22307"></a>
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22323"></a>
<a id="trace-22325"></a>
<a id="trace-22333"></a>
<a id="trace-22335"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22354"></a>
<a id="trace-22356"></a>
<a id="trace-22366"></a>
<a id="trace-22368"></a>
<a id="trace-22375"></a>
<a id="trace-22377"></a>
<a id="trace-22385"></a>
<a id="trace-22387"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22458"></a>
<a id="trace-22460"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22474"></a>
<a id="trace-22476"></a>
<a id="trace-22485"></a>
<a id="trace-22487"></a>
<a id="trace-22494"></a>
<a id="trace-22496"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22513"></a>
<a id="trace-22515"></a>
<a id="trace-22520"></a>
<a id="trace-22522"></a>
<a id="trace-22534"></a>
<a id="trace-22536"></a>
<a id="trace-22544"></a>
<a id="trace-22546"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079396765797464, 'next_transition': 608}.
<a id="trace-815"></a>
<a id="trace-817"></a>
<a id="trace-841"></a>
<a id="trace-843"></a>
<a id="trace-872"></a>
<a id="trace-874"></a>
<a id="trace-907"></a>
<a id="trace-909"></a>
<a id="trace-928"></a>
<a id="trace-930"></a>
<a id="trace-959"></a>
<a id="trace-961"></a>
<a id="trace-988"></a>
<a id="trace-990"></a>
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1235"></a>
<a id="trace-1237"></a>
<a id="trace-1256"></a>
<a id="trace-1258"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599856166303827, 'next_transition': 841}.
<a id="trace-1156"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1156): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1077. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5700303187279545, 'next_transition': 127}.
<a id="trace-1157"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1157): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1077. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5700303187279545, 'next_transition': 127}.
<a id="trace-126"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 126): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5761616488155874, 'next_transition': 1289}.
<a id="trace-127"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 127): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.101246138857494, 'next_transition': 2179}.
<a id="trace-1264"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1264): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1264. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5761616488155874, 'next_transition': 1289}.
<a id="trace-1265"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1265): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1265. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5761616488155874, 'next_transition': 1289}.
<a id="trace-1266"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1266): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1266. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.101246138857494, 'next_transition': 2179}.
<a id="trace-1267"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1267): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1267. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.101246138857494, 'next_transition': 2179}.
<a id="trace-1289"></a>
<a id="trace-1291"></a>
<a id="trace-1324"></a>
<a id="trace-1326"></a>
<a id="trace-1347"></a>
<a id="trace-1349"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1289): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1267. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29191759351181645, 'next_transition': 1324}.
<a id="trace-1357"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1357): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249241188376023, 'next_transition': 1517}.
<a id="trace-1358"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1358): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249241188376023, 'next_transition': 1517}.
<a id="trace-1517"></a>
<a id="trace-1519"></a>
- 13.20s–13.20s (×2), actor 5, squad 0 (trace 1517): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1267. Next observer evidence: None.
<a id="trace-1527"></a>
- 13.35s–13.35s (×1), actor 0, squad 0 (trace 1527): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8859498754913898, 'next_transition': 1739}.
<a id="trace-1739"></a>
<a id="trace-1741"></a>
<a id="trace-1847"></a>
<a id="trace-1849"></a>
<a id="trace-1890"></a>
<a id="trace-1892"></a>
<a id="trace-1931"></a>
<a id="trace-1933"></a>
- 14.20s–16.25s (×8), actor 5, squad 0 (trace 1739): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1267. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0227120018200397, 'next_transition': 1847}.
<a id="trace-1966"></a>
- 17.00s–17.00s (×1), actor 0, squad 0 (trace 1966): received platoon directive. Knowledge: actor memory at 15.00s, trace 1777. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937656830365459, 'next_transition': 2109}.
<a id="trace-2109"></a>
<a id="trace-2111"></a>
<a id="trace-2219"></a>
<a id="trace-2221"></a>
<a id="trace-2694"></a>
<a id="trace-2696"></a>
<a id="trace-2844"></a>
<a id="trace-2846"></a>
<a id="trace-2892"></a>
<a id="trace-2894"></a>
<a id="trace-2927"></a>
<a id="trace-2929"></a>
<a id="trace-2959"></a>
<a id="trace-2961"></a>
- 17.25s–21.75s (×14), actor 5, squad 0 (trace 2109): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1782. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7667422446107364, 'next_transition': 2219}.
<a id="trace-2179"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 2179): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1785. Next observer evidence: None.
<a id="trace-2226"></a>
- 18.75s–18.75s (×1), actor 8, squad 1 (trace 2226): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1785. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2338}.
<a id="trace-2227"></a>
- 18.75s–18.75s (×1), actor 8, squad 1 (trace 2227): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1785. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2338}.
<a id="trace-2228"></a>
<a id="trace-2338"></a>
<a id="trace-2448"></a>
<a id="trace-2564"></a>
- 18.75s–19.00s (×4), actor 8, squad 1 (trace 2228): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1785. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2338}.
<a id="trace-2966"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2966): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2758. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1713373883876366, 'next_transition': 3309}.
<a id="trace-2967"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2967): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2758. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1713373883876366, 'next_transition': 3309}.
<a id="trace-2968"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2968): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2758. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1713373883876366, 'next_transition': 3309}.
<a id="trace-3309"></a>
<a id="trace-3311"></a>
<a id="trace-3554"></a>
<a id="trace-3556"></a>
<a id="trace-3594"></a>
<a id="trace-3596"></a>
<a id="trace-3637"></a>
<a id="trace-3639"></a>
- 22.25s–24.75s (×8), actor 5, squad 0 (trace 3309): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2763. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1591299084868445, 'next_transition': 3554}.
<a id="trace-3319"></a>
- 22.35s–22.35s (×1), actor 8, squad 1 (trace 3319): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2766. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.513044463858026, 'next_transition': 4516}.
<a id="trace-3320"></a>
- 22.35s–22.35s (×1), actor 8, squad 1 (trace 3320): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2766. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.513044463858026, 'next_transition': 4516}.
<a id="trace-3734"></a>
- 25.40s–25.40s (×1), actor 0, squad 0 (trace 3734): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3652. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2563265420649568, 'next_transition': 3745}.
<a id="trace-3745"></a>
<a id="trace-3747"></a>
<a id="trace-3772"></a>
<a id="trace-3774"></a>
<a id="trace-3814"></a>
<a id="trace-3816"></a>
<a id="trace-3841"></a>
<a id="trace-3843"></a>
<a id="trace-3879"></a>
<a id="trace-3881"></a>
<a id="trace-3930"></a>
<a id="trace-3932"></a>
<a id="trace-3964"></a>
<a id="trace-3966"></a>
- 25.75s–29.25s (×14), actor 5, squad 0 (trace 3745): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3657. Next observer evidence: {'until': 26.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2615297035753778, 'next_transition': 3772}.
<a id="trace-3982"></a>
- 29.40s–29.40s (×1), actor 1, squad 0 (trace 3982): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3653. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19607984404674447, 'next_transition': 4218}.
<a id="trace-4218"></a>
<a id="trace-4220"></a>
<a id="trace-4324"></a>
<a id="trace-4326"></a>
<a id="trace-4358"></a>
<a id="trace-4360"></a>
<a id="trace-4380"></a>
<a id="trace-4382"></a>
<a id="trace-4405"></a>
<a id="trace-4407"></a>
<a id="trace-4455"></a>
<a id="trace-4483"></a>
- 29.75s–33.75s (×12), actor 5, squad 0 (trace 4218): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3657. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6470050610373702, 'next_transition': 4324}.
<a id="trace-4490"></a>
- 33.75s–33.75s (×1), actor 1, squad 0 (trace 4490): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4237. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3867601817476048, 'next_transition': 4505}.
<a id="trace-4505"></a>
<a id="trace-4668"></a>
<a id="trace-4670"></a>
<a id="trace-4695"></a>
<a id="trace-4697"></a>
<a id="trace-4735"></a>
<a id="trace-4737"></a>
<a id="trace-4778"></a>
<a id="trace-4780"></a>
<a id="trace-4792"></a>
<a id="trace-4794"></a>
<a id="trace-4811"></a>
<a id="trace-4813"></a>
<a id="trace-4827"></a>
<a id="trace-4829"></a>
<a id="trace-4945"></a>
<a id="trace-4947"></a>
<a id="trace-4992"></a>
<a id="trace-4994"></a>
- 34.25s–41.75s (×19), actor 5, squad 0 (trace 4505): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4241. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7671565140785208, 'next_transition': 4668}.
<a id="trace-4516"></a>
- 34.70s–34.70s (×1), actor 8, squad 1 (trace 4516): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 30.00s, trace 4244. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4926}.
<a id="trace-4517"></a>
- 34.70s–34.70s (×1), actor 8, squad 1 (trace 4517): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 30.00s, trace 4244. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4926}.
<a id="trace-4926"></a>
- 40.35s–40.35s (×1), actor 8, squad 1 (trace 4926): NeedSupport. Knowledge: actor memory at 40.00s, trace 4847. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999987446078078, 'next_transition': 8026}.
<a id="trace-5006"></a>
- 42.15s–42.15s (×1), actor 1, squad 0 (trace 5006): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 4840. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480025635509887, 'next_transition': 7001}.
<a id="trace-6739"></a>
- 42.15s–42.15s (×1), actor 1, squad 0 (trace 6739): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 4840. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480025635509887, 'next_transition': 7001}.
<a id="trace-6740"></a>
- 42.15s–42.15s (×1), actor 1, squad 0 (trace 6740): MoveTactically. Knowledge: actor memory at 40.00s, trace 4840. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480025635509887, 'next_transition': 7001}.
<a id="trace-6741"></a>
- 42.15s–42.15s (×1), actor 1, squad 0 (trace 6741): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 4840. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06480025635509887, 'next_transition': 7001}.
<a id="trace-7001"></a>
<a id="trace-7003"></a>
<a id="trace-7020"></a>
<a id="trace-7022"></a>
<a id="trace-7049"></a>
<a id="trace-7051"></a>
<a id="trace-7078"></a>
<a id="trace-7080"></a>
<a id="trace-7097"></a>
<a id="trace-7099"></a>
- 42.25s–44.25s (×10), actor 5, squad 0 (trace 7001): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4844. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12959899924059315, 'next_transition': 7020}.
<a id="trace-7121"></a>
- 44.60s–44.60s (×1), actor 1, squad 0 (trace 7121): NeedSupport. Knowledge: actor memory at 40.00s, trace 4840. Next observer evidence: None.
<a id="trace-7138"></a>
<a id="trace-7140"></a>
<a id="trace-7271"></a>
<a id="trace-7273"></a>
<a id="trace-7309"></a>
<a id="trace-7311"></a>
<a id="trace-7385"></a>
<a id="trace-7387"></a>
<a id="trace-7434"></a>
<a id="trace-7436"></a>
<a id="trace-7493"></a>
<a id="trace-7495"></a>
- 44.75s–48.75s (×12), actor 5, squad 0 (trace 7138): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4844. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.467171922786867, 'next_transition': 7271}.
<a id="trace-7605"></a>
- 50.00s–50.00s (×1), actor 1, squad 0 (trace 7605): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 7584. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4955912466863899, 'next_transition': 7665}.
<a id="trace-7665"></a>
<a id="trace-7667"></a>
- 50.25s–50.25s (×2), actor 5, squad 0 (trace 7665): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7587. Next observer evidence: {'until': 51.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.6856753809314227, 'next_transition': 7970}.
<a id="trace-7674"></a>
- 50.25s–50.25s (×1), actor 1, squad 0 (trace 7674): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 7584. Next observer evidence: {'until': 51.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.6856753809314227, 'next_transition': 7970}.
<a id="trace-7679"></a>
- 50.25s–50.25s (×1), actor 1, squad 0 (trace 7679): MoveTactically. Knowledge: actor memory at 50.00s, trace 7584. Next observer evidence: {'until': 51.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.6856753809314227, 'next_transition': 7970}.
<a id="trace-7680"></a>
- 50.25s–50.25s (×1), actor 1, squad 0 (trace 7680): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 7584. Next observer evidence: {'until': 51.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.6856753809314227, 'next_transition': 7970}.
<a id="trace-7970"></a>
<a id="trace-7972"></a>
- 51.75s–51.75s (×2), actor 5, squad 0 (trace 7970): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7587. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1394724525050917, 'next_transition': 734}.
<a id="trace-734"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 734): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8006"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 8006): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.386908 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 8006. Next observer evidence: None.
<a id="trace-8007"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 8007): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.386908 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 8007. Next observer evidence: None.
<a id="trace-8016"></a>
<a id="trace-8018"></a>
<a id="trace-8119"></a>
<a id="trace-8121"></a>
<a id="trace-8271"></a>
<a id="trace-8273"></a>
<a id="trace-8291"></a>
<a id="trace-8293"></a>
<a id="trace-8320"></a>
<a id="trace-8322"></a>
<a id="trace-8365"></a>
<a id="trace-8367"></a>
- 52.75s–57.25s (×12), actor 5, squad 0 (trace 8016): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 8007. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6619608534638204, 'next_transition': 8119}.
<a id="trace-8026"></a>
- 52.80s–52.80s (×1), actor 8, squad 1 (trace 8026): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 7590. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512439228689977, 'next_transition': 8148}.
<a id="trace-8048"></a>
- 52.80s–52.80s (×1), actor 8, squad 1 (trace 8048): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 7590. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512439228689977, 'next_transition': 8148}.
<a id="trace-8148"></a>
- 54.20s–54.20s (×1), actor 8, squad 1 (trace 8148): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 50.00s, trace 7590. Next observer evidence: {'until': 66.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512439228689977, 'next_transition': 819}.
<a id="trace-8391"></a>
- 58.15s–58.15s (×1), actor 1, squad 0 (trace 8391): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 8196. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2167282683552842, 'next_transition': 8560}.
<a id="trace-8560"></a>
<a id="trace-8562"></a>
- 58.25s–58.25s (×2), actor 5, squad 0 (trace 8560): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8198. Next observer evidence: {'until': 58.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2167188150589337, 'next_transition': 8571}.
<a id="trace-8571"></a>
- 58.40s–58.40s (×1), actor 1, squad 0 (trace 8571): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 8196. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18057265776426584, 'next_transition': 8629}.
<a id="trace-8629"></a>
<a id="trace-8631"></a>
<a id="trace-8659"></a>
<a id="trace-8661"></a>
<a id="trace-8685"></a>
<a id="trace-8687"></a>
<a id="trace-8785"></a>
<a id="trace-8787"></a>
<a id="trace-8815"></a>
<a id="trace-8817"></a>
<a id="trace-8847"></a>
<a id="trace-8849"></a>
<a id="trace-8884"></a>
<a id="trace-8886"></a>
<a id="trace-8901"></a>
<a id="trace-8903"></a>
<a id="trace-8916"></a>
<a id="trace-8918"></a>
- 58.75s–64.75s (×18), actor 5, squad 0 (trace 8629): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8198. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12770181574276868, 'next_transition': 8659}.
<a id="trace-8949"></a>
- 65.05s–65.05s (×1), actor 1, squad 0 (trace 8949): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 8930. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6593083037472305, 'next_transition': 9092}.
<a id="trace-9092"></a>
<a id="trace-9094"></a>
<a id="trace-9113"></a>
<a id="trace-9115"></a>
- 65.75s–66.25s (×4), actor 5, squad 0 (trace 9092): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 8932. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5556626149102011, 'next_transition': 9113}.
<a id="trace-818"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 818): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-819"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (events line 819): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9126"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 9126): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.004051 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 9126. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040008590667282, 'next_transition': 9153}.
<a id="trace-9127"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 9127): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.004051 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 9127. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040008590667282, 'next_transition': 9153}.
<a id="trace-9128"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (trace 9128): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.004051 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 9128. Next observer evidence: {'until': 71.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9469}.
<a id="trace-9129"></a>
- 66.45s–66.45s (×1), actor 5, squad 1 (trace 9129): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.004051 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 9129. Next observer evidence: {'until': 71.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9469}.
<a id="trace-9153"></a>
<a id="trace-9155"></a>
<a id="trace-9163"></a>
<a id="trace-9165"></a>
<a id="trace-9183"></a>
<a id="trace-9185"></a>
<a id="trace-9221"></a>
<a id="trace-9223"></a>
<a id="trace-9242"></a>
<a id="trace-9244"></a>
<a id="trace-9328"></a>
<a id="trace-9330"></a>
- 67.25s–70.25s (×12), actor 5, squad 0 (trace 9153): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 9129. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199820100945164, 'next_transition': 9163}.
<a id="trace-9342"></a>
- 70.45s–70.45s (×1), actor 1, squad 0 (trace 9342): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 9255. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9438}.
<a id="trace-9438"></a>
<a id="trace-9440"></a>
<a id="trace-9460"></a>
<a id="trace-9462"></a>
<a id="trace-9559"></a>
<a id="trace-9561"></a>
<a id="trace-9583"></a>
<a id="trace-9585"></a>
- 70.75s–72.25s (×8), actor 5, squad 0 (trace 9438): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9257. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9460}.
<a id="trace-9469"></a>
- 71.50s–71.50s (×1), actor 8, squad 1 (trace 9469): MoveTactically. Knowledge: actor memory at 70.00s, trace 9260. Next observer evidence: None.
<a id="trace-9470"></a>
- 71.50s–71.50s (×1), actor 8, squad 1 (trace 9470): received platoon directive. Knowledge: actor memory at 70.00s, trace 9260. Next observer evidence: None.
<a id="trace-9496"></a>
- 71.55s–71.55s (×1), actor 8, squad 1 (trace 9496): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 9260. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.000014044262615, 'next_transition': 11617}.
<a id="trace-9640"></a>
- 73.65s–73.65s (×1), actor 1, squad 0 (trace 9640): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 9255. Next observer evidence: None.
<a id="trace-9641"></a>
- 73.65s–73.65s (×1), actor 1, squad 0 (trace 9641): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 70.00s, trace 9255. Next observer evidence: None.
<a id="trace-11191"></a>
<a id="trace-11193"></a>
<a id="trace-11221"></a>
<a id="trace-11223"></a>
<a id="trace-11236"></a>
<a id="trace-11238"></a>
<a id="trace-11319"></a>
<a id="trace-11321"></a>
<a id="trace-11339"></a>
<a id="trace-11341"></a>
<a id="trace-11359"></a>
<a id="trace-11361"></a>
<a id="trace-11377"></a>
<a id="trace-11379"></a>
<a id="trace-11399"></a>
<a id="trace-11401"></a>
<a id="trace-11421"></a>
<a id="trace-11423"></a>
<a id="trace-11448"></a>
<a id="trace-11450"></a>
<a id="trace-11464"></a>
<a id="trace-11466"></a>
<a id="trace-11483"></a>
<a id="trace-11485"></a>
<a id="trace-11569"></a>
<a id="trace-11571"></a>
<a id="trace-11584"></a>
<a id="trace-11586"></a>
<a id="trace-11605"></a>
<a id="trace-11607"></a>
<a id="trace-11677"></a>
<a id="trace-11679"></a>
<a id="trace-11699"></a>
<a id="trace-11701"></a>
<a id="trace-11716"></a>
<a id="trace-11718"></a>
<a id="trace-11742"></a>
<a id="trace-11744"></a>
<a id="trace-11759"></a>
<a id="trace-11761"></a>
<a id="trace-11798"></a>
<a id="trace-11800"></a>
<a id="trace-11903"></a>
<a id="trace-11934"></a>
<a id="trace-11950"></a>
<a id="trace-12033"></a>
<a id="trace-12050"></a>
<a id="trace-12062"></a>
<a id="trace-12094"></a>
<a id="trace-12109"></a>
<a id="trace-12111"></a>
<a id="trace-12206"></a>
<a id="trace-12208"></a>
<a id="trace-12236"></a>
<a id="trace-12238"></a>
<a id="trace-12253"></a>
<a id="trace-12255"></a>
- 73.75s–92.25s (×57), actor 5, squad 0 (trace 11191): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9257. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9000306404606114, 'next_transition': 11221}.
<a id="trace-11617"></a>
- 81.60s–81.60s (×1), actor 8, squad 1 (trace 11617): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 11505. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11622}.
<a id="trace-11622"></a>
- 81.65s–81.65s (×1), actor 8, squad 1 (trace 11622): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 11505. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.774785092321618, 'next_transition': 11962}.
<a id="trace-11962"></a>
- 87.00s–87.00s (×1), actor 8, squad 1 (trace 11962): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 11839. Next observer evidence: {'until': 93.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.328812898756198, 'next_transition': 12317}.
<a id="trace-12297"></a>
- 93.60s–93.60s (×1), actor 4, squad 0 (trace 12297): NeedSupport. Knowledge: actor memory at 90.00s, trace 12120. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12379}.
<a id="trace-12317"></a>
- 93.85s–93.85s (×1), actor 8, squad 1 (trace 12317): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 12124. Next observer evidence: {'until': 102.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 12.351886472479427, 'next_transition': 12819}.
<a id="trace-12379"></a>
<a id="trace-12381"></a>
<a id="trace-12401"></a>
<a id="trace-12403"></a>
<a id="trace-12484"></a>
<a id="trace-12486"></a>
<a id="trace-12522"></a>
<a id="trace-12524"></a>
<a id="trace-12535"></a>
<a id="trace-12537"></a>
<a id="trace-12552"></a>
<a id="trace-12554"></a>
<a id="trace-12568"></a>
<a id="trace-12570"></a>
<a id="trace-12595"></a>
<a id="trace-12597"></a>
<a id="trace-12612"></a>
<a id="trace-12614"></a>
<a id="trace-12633"></a>
<a id="trace-12635"></a>
<a id="trace-12647"></a>
<a id="trace-12649"></a>
<a id="trace-12732"></a>
<a id="trace-12734"></a>
<a id="trace-12752"></a>
<a id="trace-12754"></a>
<a id="trace-12810"></a>
<a id="trace-12812"></a>
<a id="trace-12921"></a>
<a id="trace-12923"></a>
<a id="trace-12943"></a>
<a id="trace-12945"></a>
<a id="trace-12962"></a>
<a id="trace-12964"></a>
<a id="trace-12997"></a>
<a id="trace-12999"></a>
<a id="trace-13021"></a>
<a id="trace-13023"></a>
- 94.25s–104.75s (×38), actor 5, squad 0 (trace 12379): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 12121. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015800016020561976, 'next_transition': 12401}.
<a id="trace-12819"></a>
- 102.30s–102.30s (×1), actor 8, squad 1 (trace 12819): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 12664. Next observer evidence: {'until': 105.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.404539348889122, 'next_transition': 13136}.
<a id="trace-12820"></a>
- 102.30s–102.30s (×1), actor 8, squad 1 (trace 12820): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 12664. Next observer evidence: {'until': 105.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.404539348889122, 'next_transition': 13136}.
<a id="trace-13061"></a>
- 105.15s–105.15s (×1), actor 4, squad 0 (trace 13061): support established: element delivered fire on threat area. Knowledge: actor memory at 105.00s, trace 13039. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13122}.
<a id="trace-13062"></a>
- 105.15s–105.15s (×1), actor 4, squad 0 (trace 13062): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 105.00s, trace 13039. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13122}.
<a id="trace-13063"></a>
- 105.15s–105.15s (×1), actor 4, squad 0 (trace 13063): Fixing. Knowledge: actor memory at 105.00s, trace 13039. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13122}.
<a id="trace-13122"></a>
<a id="trace-13124"></a>
<a id="trace-13249"></a>
<a id="trace-13251"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13353"></a>
<a id="trace-13355"></a>
- 105.25s–107.75s (×8), actor 5, squad 0 (trace 13122): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 13040. Next observer evidence: {'until': 105.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13249}.
<a id="trace-13136"></a>
- 105.65s–105.65s (×1), actor 8, squad 1 (trace 13136): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 105.00s, trace 13043. Next observer evidence: {'until': 117.2, 'shots': 3, 'casualties': 1, 'mean_displacement': 15.48481170970034, 'next_transition': 13988}.
<a id="trace-13137"></a>
- 105.65s–105.65s (×1), actor 8, squad 1 (trace 13137): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 13043. Next observer evidence: {'until': 117.2, 'shots': 3, 'casualties': 1, 'mean_displacement': 15.48481170970034, 'next_transition': 13988}.
<a id="trace-1176"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 1176): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4180229554301961, 'next_transition': 13385}.
<a id="trace-13369"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 13369): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.776633 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 13369. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4180229554301961, 'next_transition': 13385}.
<a id="trace-13370"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 13370): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.776633 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 13370. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4180229554301961, 'next_transition': 13385}.
<a id="trace-13385"></a>
<a id="trace-13387"></a>
<a id="trace-13404"></a>
<a id="trace-13406"></a>
<a id="trace-13429"></a>
<a id="trace-13431"></a>
<a id="trace-13441"></a>
<a id="trace-13443"></a>
<a id="trace-13527"></a>
<a id="trace-13529"></a>
<a id="trace-13550"></a>
<a id="trace-13552"></a>
<a id="trace-13677"></a>
<a id="trace-13679"></a>
<a id="trace-13723"></a>
<a id="trace-13725"></a>
<a id="trace-13744"></a>
<a id="trace-13746"></a>
<a id="trace-13778"></a>
<a id="trace-13780"></a>
<a id="trace-13887"></a>
<a id="trace-13889"></a>
<a id="trace-13934"></a>
<a id="trace-13936"></a>
<a id="trace-13956"></a>
<a id="trace-13958"></a>
<a id="trace-13979"></a>
<a id="trace-13981"></a>
<a id="trace-14005"></a>
<a id="trace-14007"></a>
<a id="trace-14025"></a>
<a id="trace-14027"></a>
<a id="trace-14043"></a>
<a id="trace-14045"></a>
<a id="trace-14066"></a>
<a id="trace-14068"></a>
<a id="trace-14170"></a>
<a id="trace-14186"></a>
<a id="trace-14198"></a>
<a id="trace-14227"></a>
<a id="trace-14229"></a>
- 108.25s–122.75s (×41), actor 5, squad 0 (trace 13385): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 13370. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16995659405242952, 'next_transition': 13404}.
<a id="trace-13988"></a>
- 117.30s–117.30s (×1), actor 9, squad 1 (trace 13988): NeedSupport. Knowledge: actor memory at 115.00s, trace 13817. Next observer evidence: {'until': 120.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.476262024568155, 'next_transition': 14165}.
<a id="trace-14165"></a>
- 120.50s–120.50s (×1), actor 9, squad 1 (trace 14165): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 14092. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1365}.
<a id="trace-14166"></a>
- 120.50s–120.50s (×1), actor 9, squad 1 (trace 14166): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 14092. Next observer evidence: {'until': 135.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1365}.
<a id="trace-14240"></a>
- 123.00s–123.00s (×1), actor 4, squad 0 (trace 14240): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 120.00s, trace 14088. Next observer evidence: None.
<a id="trace-14241"></a>
- 123.05s–123.05s (×1), actor 4, squad 0 (trace 14241): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 14088. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28855020597050934, 'next_transition': 14355}.
<a id="trace-14243"></a>
- 123.05s–123.05s (×1), actor 4, squad 0 (trace 14243): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 14088. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28855020597050934, 'next_transition': 14355}.
<a id="trace-14244"></a>
- 123.05s–123.05s (×1), actor 4, squad 0 (trace 14244): Reorganise complete: known contact. Knowledge: actor memory at 120.00s, trace 14088. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28855020597050934, 'next_transition': 14355}.
<a id="trace-14355"></a>
<a id="trace-14357"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14407"></a>
<a id="trace-14409"></a>
<a id="trace-14493"></a>
<a id="trace-14495"></a>
<a id="trace-14508"></a>
<a id="trace-14510"></a>
<a id="trace-14530"></a>
<a id="trace-14532"></a>
- 123.25s–126.25s (×12), actor 5, squad 0 (trace 14355): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 14089. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5334247820691965, 'next_transition': 14369}.
<a id="trace-14542"></a>
- 126.40s–126.40s (×1), actor 4, squad 0 (trace 14542): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 14426. Next observer evidence: {'until': 126.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5107730951979366, 'next_transition': 14654}.
<a id="trace-14543"></a>
- 126.40s–126.40s (×1), actor 4, squad 0 (trace 14543): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 14426. Next observer evidence: {'until': 126.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5107730951979366, 'next_transition': 14654}.
<a id="trace-14654"></a>
<a id="trace-14656"></a>
<a id="trace-14673"></a>
<a id="trace-14675"></a>
<a id="trace-14687"></a>
<a id="trace-14689"></a>
<a id="trace-14713"></a>
<a id="trace-14715"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14754"></a>
<a id="trace-14756"></a>
<a id="trace-14769"></a>
<a id="trace-14771"></a>
<a id="trace-14841"></a>
<a id="trace-14843"></a>
<a id="trace-14857"></a>
<a id="trace-14859"></a>
<a id="trace-14877"></a>
<a id="trace-14879"></a>
<a id="trace-14890"></a>
<a id="trace-14892"></a>
<a id="trace-14908"></a>
<a id="trace-14910"></a>
<a id="trace-14924"></a>
<a id="trace-14926"></a>
<a id="trace-14956"></a>
<a id="trace-14958"></a>
<a id="trace-14988"></a>
<a id="trace-14990"></a>
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15133"></a>
<a id="trace-15135"></a>
<a id="trace-15146"></a>
<a id="trace-15148"></a>
<a id="trace-15170"></a>
<a id="trace-15172"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
<a id="trace-15286"></a>
<a id="trace-15288"></a>
<a id="trace-15306"></a>
<a id="trace-15308"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15339"></a>
<a id="trace-15341"></a>
<a id="trace-15359"></a>
<a id="trace-15361"></a>
<a id="trace-15395"></a>
<a id="trace-15397"></a>
<a id="trace-15408"></a>
<a id="trace-15410"></a>
<a id="trace-15424"></a>
<a id="trace-15426"></a>
<a id="trace-15511"></a>
<a id="trace-15513"></a>
<a id="trace-15527"></a>
<a id="trace-15529"></a>
<a id="trace-15541"></a>
<a id="trace-15543"></a>
<a id="trace-15571"></a>
<a id="trace-15573"></a>
<a id="trace-15582"></a>
<a id="trace-15584"></a>
<a id="trace-15637"></a>
<a id="trace-15639"></a>
<a id="trace-15652"></a>
<a id="trace-15654"></a>
<a id="trace-15727"></a>
<a id="trace-15729"></a>
<a id="trace-15749"></a>
<a id="trace-15751"></a>
<a id="trace-15765"></a>
<a id="trace-15767"></a>
<a id="trace-15779"></a>
<a id="trace-15781"></a>
<a id="trace-15804"></a>
<a id="trace-15806"></a>
<a id="trace-15818"></a>
<a id="trace-15820"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15849"></a>
<a id="trace-15851"></a>
<a id="trace-15881"></a>
<a id="trace-15883"></a>
<a id="trace-15960"></a>
<a id="trace-15962"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15994"></a>
<a id="trace-15996"></a>
<a id="trace-16007"></a>
<a id="trace-16009"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16047"></a>
<a id="trace-16049"></a>
<a id="trace-16062"></a>
<a id="trace-16064"></a>
<a id="trace-16160"></a>
<a id="trace-16162"></a>
<a id="trace-16173"></a>
<a id="trace-16175"></a>
<a id="trace-16189"></a>
<a id="trace-16191"></a>
<a id="trace-16201"></a>
<a id="trace-16203"></a>
<a id="trace-16227"></a>
<a id="trace-16229"></a>
<a id="trace-16241"></a>
<a id="trace-16253"></a>
<a id="trace-16264"></a>
<a id="trace-16276"></a>
<a id="trace-16345"></a>
- 126.75s–165.30s (×117), actor 5, squad 0 (trace 14654): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 14427. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3988524445107924, 'next_transition': 14673}.
<a id="trace-1365"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (events line 1365): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15070"></a>
- 135.60s–135.60s (×1), actor 5, squad 1 (trace 15070): renew committed intent (75 s lifetime). Knowledge: actor memory at 135.60s, trace 15070. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15114}.
<a id="trace-15114"></a>
- 136.80s–136.80s (×1), actor 9, squad 1 (trace 15114): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 15001. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1625}.
<a id="trace-16369"></a>
- 166.25s–166.25s (×1), actor 5, squad 0 (trace 16369): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 166.25s, trace 16369. Next observer evidence: None.
<a id="trace-16374"></a>
<a id="trace-16387"></a>
<a id="trace-16400"></a>
<a id="trace-16408"></a>
<a id="trace-16419"></a>
<a id="trace-16431"></a>
<a id="trace-16452"></a>
<a id="trace-16531"></a>
<a id="trace-16556"></a>
<a id="trace-16570"></a>
<a id="trace-16579"></a>
<a id="trace-16607"></a>
<a id="trace-16627"></a>
<a id="trace-16696"></a>
<a id="trace-16720"></a>
<a id="trace-16744"></a>
<a id="trace-16753"></a>
<a id="trace-16766"></a>
<a id="trace-16779"></a>
<a id="trace-16793"></a>
<a id="trace-16805"></a>
<a id="trace-16874"></a>
<a id="trace-16886"></a>
<a id="trace-16899"></a>
<a id="trace-16910"></a>
<a id="trace-16931"></a>
<a id="trace-16946"></a>
<a id="trace-16962"></a>
<a id="trace-16984"></a>
<a id="trace-17054"></a>
<a id="trace-17063"></a>
<a id="trace-17077"></a>
<a id="trace-17088"></a>
<a id="trace-17103"></a>
<a id="trace-17126"></a>
<a id="trace-17150"></a>
<a id="trace-17225"></a>
<a id="trace-17237"></a>
<a id="trace-17253"></a>
<a id="trace-17265"></a>
<a id="trace-17281"></a>
<a id="trace-17290"></a>
<a id="trace-17303"></a>
<a id="trace-17326"></a>
<a id="trace-17405"></a>
<a id="trace-17419"></a>
<a id="trace-17453"></a>
<a id="trace-17464"></a>
<a id="trace-17480"></a>
<a id="trace-17492"></a>
<a id="trace-17505"></a>
<a id="trace-17516"></a>
<a id="trace-17586"></a>
<a id="trace-17597"></a>
<a id="trace-17619"></a>
<a id="trace-17632"></a>
<a id="trace-17643"></a>
<a id="trace-17658"></a>
<a id="trace-17684"></a>
<a id="trace-17698"></a>
<a id="trace-17771"></a>
<a id="trace-17803"></a>
<a id="trace-17817"></a>
<a id="trace-17826"></a>
<a id="trace-17848"></a>
<a id="trace-17862"></a>
<a id="trace-17877"></a>
<a id="trace-17947"></a>
<a id="trace-18016"></a>
<a id="trace-18034"></a>
<a id="trace-18059"></a>
<a id="trace-18081"></a>
<a id="trace-18104"></a>
<a id="trace-18181"></a>
<a id="trace-18208"></a>
<a id="trace-18262"></a>
<a id="trace-18362"></a>
<a id="trace-18384"></a>
<a id="trace-18403"></a>
<a id="trace-18419"></a>
<a id="trace-18513"></a>
<a id="trace-18531"></a>
<a id="trace-18562"></a>
<a id="trace-18580"></a>
<a id="trace-18652"></a>
<a id="trace-18673"></a>
<a id="trace-18712"></a>
<a id="trace-18738"></a>
<a id="trace-18810"></a>
<a id="trace-18826"></a>
<a id="trace-18860"></a>
<a id="trace-18881"></a>
<a id="trace-18958"></a>
<a id="trace-18984"></a>
<a id="trace-19013"></a>
<a id="trace-19131"></a>
<a id="trace-19154"></a>
<a id="trace-19192"></a>
<a id="trace-19282"></a>
<a id="trace-19299"></a>
<a id="trace-19321"></a>
<a id="trace-19345"></a>
<a id="trace-19437"></a>
<a id="trace-19452"></a>
<a id="trace-19469"></a>
<a id="trace-19492"></a>
<a id="trace-19572"></a>
<a id="trace-19592"></a>
<a id="trace-19610"></a>
<a id="trace-19628"></a>
<a id="trace-19649"></a>
<a id="trace-19722"></a>
<a id="trace-19742"></a>
<a id="trace-19764"></a>
<a id="trace-19784"></a>
<a id="trace-19876"></a>
<a id="trace-19895"></a>
<a id="trace-19911"></a>
<a id="trace-19931"></a>
<a id="trace-20046"></a>
<a id="trace-20066"></a>
<a id="trace-20102"></a>
<a id="trace-20179"></a>
<a id="trace-20199"></a>
<a id="trace-20235"></a>
<a id="trace-20255"></a>
<a id="trace-20330"></a>
<a id="trace-20352"></a>
<a id="trace-20371"></a>
<a id="trace-20386"></a>
<a id="trace-20481"></a>
<a id="trace-20501"></a>
<a id="trace-20524"></a>
<a id="trace-20540"></a>
<a id="trace-20559"></a>
<a id="trace-20675"></a>
<a id="trace-20691"></a>
<a id="trace-20788"></a>
<a id="trace-20804"></a>
<a id="trace-20861"></a>
<a id="trace-20934"></a>
<a id="trace-20958"></a>
<a id="trace-20990"></a>
<a id="trace-21009"></a>
<a id="trace-21087"></a>
<a id="trace-21107"></a>
<a id="trace-21128"></a>
<a id="trace-21151"></a>
<a id="trace-21239"></a>
<a id="trace-21275"></a>
<a id="trace-21319"></a>
<a id="trace-21411"></a>
<a id="trace-21462"></a>
<a id="trace-21543"></a>
<a id="trace-21563"></a>
<a id="trace-21597"></a>
<a id="trace-21618"></a>
<a id="trace-21693"></a>
<a id="trace-21714"></a>
<a id="trace-21736"></a>
<a id="trace-21847"></a>
<a id="trace-21880"></a>
<a id="trace-21897"></a>
<a id="trace-21925"></a>
<a id="trace-22016"></a>
<a id="trace-22034"></a>
<a id="trace-22051"></a>
<a id="trace-22071"></a>
<a id="trace-22149"></a>
<a id="trace-22175"></a>
<a id="trace-22192"></a>
<a id="trace-22207"></a>
<a id="trace-22301"></a>
<a id="trace-22319"></a>
<a id="trace-22343"></a>
<a id="trace-22362"></a>
<a id="trace-22381"></a>
<a id="trace-22454"></a>
<a id="trace-22509"></a>
<a id="trace-22530"></a>
- 166.30s–359.30s (×180), actor 5, squad 0 (trace 16374): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 166.25s, trace 16369. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4597899999999999, 'next_transition': 16387}.
<a id="trace-1625"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (events line 1625): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17693"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 17693): renew committed intent (75 s lifetime). Knowledge: actor memory at 204.65s, trace 17693. Next observer evidence: {'until': 210.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17955}.
<a id="trace-17955"></a>
- 210.60s–210.60s (×1), actor 9, squad 1 (trace 17955): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 210.00s, trace 17887. Next observer evidence: {'until': 217, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999999999999996, 'next_transition': 18230}.
<a id="trace-17956"></a>
- 210.60s–210.60s (×1), actor 9, squad 1 (trace 17956): MoveTactically. Knowledge: actor memory at 210.00s, trace 17887. Next observer evidence: {'until': 217, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999999999999996, 'next_transition': 18230}.
<a id="trace-17957"></a>
- 210.60s–210.60s (×1), actor 9, squad 1 (trace 17957): traveling. Knowledge: actor memory at 210.00s, trace 17887. Next observer evidence: {'until': 217, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999999999999996, 'next_transition': 18230}.
<a id="trace-17958"></a>
- 210.60s–210.60s (×1), actor 9, squad 1 (trace 17958): . Knowledge: actor memory at 210.00s, trace 17887. Next observer evidence: {'until': 217, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999999999999996, 'next_transition': 18230}.
<a id="trace-18230"></a>
- 217.10s–217.10s (×1), actor 9, squad 1 (trace 18230): traveling overwatch. Knowledge: actor memory at 215.00s, trace 18123. Next observer evidence: None.
<a id="trace-18231"></a>
- 217.10s–217.10s (×1), actor 9, squad 1 (trace 18231): matching received arrivals: traveling stage complete. Knowledge: actor memory at 215.00s, trace 18123. Next observer evidence: None.
<a id="trace-18235"></a>
- 217.15s–217.15s (×1), actor 9, squad 1 (trace 18235): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 215.00s, trace 18123. Next observer evidence: {'until': 246, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1743}.
<a id="trace-1743"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (events line 1743): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19125"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 19125): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.645359 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 19125. Next observer evidence: {'until': 251, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19277}.
<a id="trace-19126"></a>
- 246.10s–246.10s (×1), actor 5, squad 1 (trace 19126): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.645359 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 246.10s, trace 19126. Next observer evidence: {'until': 251, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19277}.
<a id="trace-19277"></a>
- 251.05s–251.05s (×1), actor 9, squad 1 (trace 19277): received platoon directive. Knowledge: actor memory at 250.00s, trace 19205. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19508}.
<a id="trace-19508"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 19508): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 259.90s, trace 19508. Next observer evidence: None.
<a id="trace-19509"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 19509): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 259.90s, trace 19509. Next observer evidence: None.
<a id="trace-1794"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (events line 1794): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 264.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19660}.
<a id="trace-19660"></a>
- 264.85s–264.85s (×1), actor 9, squad 1 (trace 19660): received platoon directive. Knowledge: actor memory at 260.00s, trace 19512. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21614}.
<a id="trace-21614"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (trace 21614): renew committed intent (75 s lifetime). Knowledge: actor memory at 328.90s, trace 21614. Next observer evidence: None.
<a id="trace-2038"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (events line 2038): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

182 matched order/radio deliveries; 314 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.629s; maximum 5.450s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2766: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2768: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2769: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2770: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2771: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2772: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2776: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2777: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3652: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3654: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3655: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3658: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3660: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3662: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3663: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3664: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3665: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3666: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3667: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3668: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3669: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3670: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3671: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4237: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4238: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4239: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4241: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4242: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4244: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4246: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4247: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4248: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4249: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4250: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4251: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4252: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4253: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4254: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4255: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4584: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4585: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4586: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4588: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4589: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4591: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4593: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4594: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4595: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4596: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4597: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4598: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4599: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4600: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4601: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4602: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4840: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4841: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4842: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4844: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4845: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4847: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4849: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4850: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4851: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4852: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4853: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4854: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4855: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4856: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4857: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4858: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7156: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7157: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7158: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7160: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7161: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7163: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7165: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7166: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7167: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7168: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7169: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7170: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7171: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7172: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7173: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7174: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7584: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7585: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7587: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7588: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 7590: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7592: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7593: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7594: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7595: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7596: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7597: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7598: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7599: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7600: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7601: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 8006: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 8007: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8196: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8198: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8199: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 8201: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8203: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8204: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8205: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8206: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8207: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8208: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8209: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8210: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8211: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8212: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8696: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8698: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8699: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 8701: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8703: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8704: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8705: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8706: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8707: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8708: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8709: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8710: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8711: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8712: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8930: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8932: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8933: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 8935: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8937: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8938: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8939: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8940: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8941: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8942: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8943: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8944: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8945: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8946: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 9126: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 9127: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 9128: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 9129: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9255: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9257: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9258: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 9260: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9262: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9263: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9264: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9265: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9266: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9267: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9268: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9269: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9270: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9271: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 11253: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11254: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11255: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11256: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 11257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 11258: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 11259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11260: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11261: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11262: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11263: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11264: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11265: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11266: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11267: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11268: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 11269: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11501: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11502: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11503: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 11504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 11505: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 11506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11507: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11508: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11509: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11510: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11511: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11512: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11513: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11514: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 11515: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 11516: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11835: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11836: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11837: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11838: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 11839: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11841: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11842: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11843: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11844: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11845: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11846: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11847: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11848: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11849: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11850: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12120: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12121: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12122: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 12123: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 12124: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12126: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12127: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12128: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12129: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12130: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12131: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12132: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12133: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12134: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 12135: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12417: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12418: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12419: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12420: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 12421: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12423: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12424: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12425: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12426: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12427: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12428: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12429: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12430: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12431: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12432: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12660: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12661: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12662: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12663: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 12664: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12666: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12667: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12668: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12669: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12670: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12671: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12672: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12673: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12674: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12675: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 13039: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 13040: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 13041: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 13042: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 13043: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 13044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 13045: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 13046: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 13047: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 13048: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 13049: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 13050: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 13051: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 13052: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 13053: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 13054: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 13369: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 13370: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 13458: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 13459: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 13460: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 13461: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 13462: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 13463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 13464: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 13465: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 13466: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 13467: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 13468: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 13469: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 13470: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 13471: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 13472: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 13473: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 13813: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 13814: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 13815: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 13816: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 13817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13818: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13819: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13820: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13821: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13822: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13823: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13824: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13825: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 13826: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 13827: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14088: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14089: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14090: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14091: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 14093: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 14094: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 14095: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 14096: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 14097: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14098: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14099: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 14100: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 14101: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 14102: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 14426: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 14427: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 14428: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 14429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 14430: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 14431: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 14432: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 14433: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 14434: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 14435: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 14436: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 14437: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 14438: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 14439: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 14778: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 14779: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 14780: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 14781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 14782: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 14783: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 14784: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 14785: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 14786: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 14787: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 14788: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 14789: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 14790: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 14791: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14998: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14999: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15000: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 15001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15002: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15003: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 15004: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15005: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15006: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15007: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15008: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15009: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 15010: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 15011: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 15070: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15219: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15220: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15221: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 15222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15223: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15224: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 15225: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15226: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15227: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15228: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15229: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15230: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 15231: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 15232: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15447: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15448: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15449: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 15450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15451: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15452: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 15453: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15454: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15455: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15456: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15457: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15458: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 15459: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 15460: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 15662: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15663: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15664: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 15665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 15666: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 15667: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 15668: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15669: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15670: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15671: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15672: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15673: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 15674: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15675: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 15893: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15894: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 15895: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15897: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15898: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15899: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15900: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15901: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15902: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15903: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15904: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15905: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15906: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16099: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16100: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 16101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16102: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16103: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 16104: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16105: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16106: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16107: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16108: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16109: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 16110: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 16111: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16284: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16285: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16287: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16288: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16289: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16290: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16291: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16292: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16293: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16294: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16295: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16296: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 166.25s leader 5, trace 16369: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16460: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 16461: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 16462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16463: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16464: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 16465: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16466: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16467: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16468: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16469: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16470: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 16471: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 16472: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 16634: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 16635: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 16636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 16637: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 16638: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 16639: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 16640: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 16641: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 16642: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 16643: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 16644: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 16645: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 16646: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 16812: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 16813: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 16814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 16815: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 16816: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 16817: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 16818: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 16819: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16820: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 16821: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 16822: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 16823: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 16824: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 16993: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 16994: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 16995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 16996: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 16997: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 16998: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 16999: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17000: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17001: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17002: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17003: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 17004: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 17005: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17164: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 17165: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 17166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 17167: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 17168: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 17169: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 17170: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 17171: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 17172: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17173: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 17174: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 17175: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 17176: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17343: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 17344: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 17345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 17346: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 17347: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 17348: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17349: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17350: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 17351: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17352: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17353: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 17354: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 17355: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17523: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 17524: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 17525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17526: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17527: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 17528: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17529: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17530: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17531: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17532: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17533: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 17534: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 17535: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 17693: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17706: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17707: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 17708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 17709: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 17710: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 17711: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17712: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17713: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17714: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17715: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17716: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 17717: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 17718: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17885: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17886: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 17887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 17888: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 17889: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 17890: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17891: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17892: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17893: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17894: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17895: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 17896: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 17897: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 18122: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 18123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 18124: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 18125: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 18126: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 18127: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 18128: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 18129: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 18130: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 18131: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 18132: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 18133: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 18304: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 18305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 18306: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 18307: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 18308: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 18309: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 18310: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 18311: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 18312: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 18313: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 18314: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 18315: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18454: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 18455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 18456: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 18457: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 18458: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18459: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18460: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18461: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 18462: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18463: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 18464: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 18465: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18594: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 18595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 18596: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 18597: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 18598: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18599: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18600: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18601: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 18602: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18603: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 18604: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 18605: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 18752: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 18753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 18754: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 18755: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 18756: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 18757: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 18758: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18759: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18760: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 18761: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 18762: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 18763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 18898: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 18899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 18900: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 18901: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 18902: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 18903: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 18904: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18905: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18906: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 18907: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 18908: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 18909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 19046: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 19047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 19048: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 19049: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 19050: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 19051: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 19052: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 19053: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 19054: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 19055: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 19056: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 19057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 19125: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 19126: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 19204: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 19205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 19206: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 19207: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 19208: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 19209: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 19210: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 19211: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 19212: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 19213: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 19214: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 19215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 19359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 19360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 19361: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 19362: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 19363: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 19364: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 19365: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 19366: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 19367: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 19368: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 19369: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 19370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 19508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 19509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 19511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 19512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 19513: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 19514: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 19515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 19516: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 19517: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 19518: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 19519: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 19520: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 19521: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 19522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 19663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 19664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 19665: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 19666: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 19667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 19668: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 19669: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 19670: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 19671: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 19672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 19673: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 19674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 19815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 19816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 19817: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 19818: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 19819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 19820: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 19821: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 19822: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 19823: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 19824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 19825: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 19826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 19971: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 19972: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 19973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 19974: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 19975: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 19976: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 19977: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 19978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 19979: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 19980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 20118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 20119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 20120: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 20121: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 20122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 20123: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 20124: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 20125: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 20126: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 20127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 20128: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 20129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 20270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 20271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 20272: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 20273: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 20274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 20275: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 20276: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 20277: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 20278: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 20279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 20280: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 20281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 20422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 20423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 20424: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 20425: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 20426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 20427: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 20428: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 20429: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 20430: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 20431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 20432: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 20433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 20573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 20574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 20575: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 20576: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 20577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 20578: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 20579: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 20580: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 20581: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 20582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 20583: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 20584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 20728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 20729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 20730: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 20731: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 20732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 20733: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 20734: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 20735: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 20736: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 20737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 20738: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 20739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 20876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 20877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 20878: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 20879: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 20880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 20881: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 20882: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 20883: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 20884: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 20885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 20886: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 20887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 21024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 21025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 21026: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 21027: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 21028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 21029: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 21030: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 21031: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 21032: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 21033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 21034: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 21035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 21180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 21181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 21182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 21183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 21184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 21185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 21186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 21187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 21188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 21189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 21190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 21191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 21334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 21335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 21336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 21337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 21338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 21339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 21340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 21341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 21342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 21343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 21344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 21345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 21481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 21482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 21483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 21484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 21485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 21486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 21487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 21488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 21489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 21490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 21491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 21492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 21614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 21632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 21633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 21634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 21635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 21636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 21637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 21638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 21639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 21640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 21641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 21642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 21643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 21787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 21788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 21789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 21790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 21791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 21792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 21793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 21794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 21795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 21796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 21797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 21798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 21943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 21944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 21945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 21946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 21947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 21948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 21949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 21950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 21951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 21952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 21953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 21954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 22088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 22089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 22090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 22091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 22092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 22093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 22094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 22095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 22096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 22097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 22098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 22099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 22242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 22243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 22244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 22245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 22246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 22247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 22248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 22249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 22250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 22251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 22252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 22253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 22396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 22397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 22398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 22399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 22400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 22401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 22402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 22403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 22404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 22405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 22406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 22407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 22548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 22549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 22550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 22551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 22552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 22553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 22554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 22555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 22556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 22557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 22558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 22559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Ash killed in action
- 1: Rook incapacitated
- 1: Bren killed in action
- 1: Reed incapacitated
- 1: Tern killed in action
- 1: Moss incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
