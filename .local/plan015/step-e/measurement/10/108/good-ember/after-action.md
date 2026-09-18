# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/10/108/good-ember/battle-108-1789673851562112207`

## Battle summary

**Ember** · 360 s · 213 shots.

### Turning points

- 17.4s, squad 5: contact (events line 188). First recorded contact.
- 21.1s, squad 1: withdrawal ([trace 3009](#trace-3009)). 56.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 29.8s, squad 0: help call ([trace 6330](#trace-6330)). No completion observed before termination.
- 39.2s, squad 1: help call ([trace 7399](#trace-7399)). No completion observed before termination.
- 43.4s, squad 0: withdrawal ([trace 7647](#trace-7647)). 71.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 124.2s, squad 1: withdrawal ([trace 14637](#trace-14637)). 150.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 195.9s, squad 0: withdrawal ([trace 19388](#trace-19388)). 205.0s, squad 0: took cover and returned fire.
- 204.9s, squad 0: help call ([trace 20058](#trace-20058)). No completion observed before termination.
- 208.4s, squad 0: withdrawal ([trace 20400](#trace-20400)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 3 further drill types; withdrew; 5 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 2 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 156 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 50 shots, 0/2 lost.

### Decisions and attribution

At 124.2s, squad 1 chose broke contact ([trace 14637](#trace-14637)), followed by 0 shots and 1 own casualties; estimate 12.4 against 0 distinct squad-reported contacts; At 19.8s, squad 0 chose took cover and returned fire ([trace 2534](#trace-2534)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.6s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 3900](#trace-3900)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1342](#trace-1342)). Following evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.092332130196532, 'next_transition': 1902}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 3899](#trace-3899)). Following evidence: {'until': 26.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3905}.

### Communication

201 matched deliveries (mean 0.41s, max 6.60s); 319 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.40s, squad 5, contact, evidence events line 188: First recorded contact; .
- 21.10s, squad 1, withdrawal, evidence 3009: BreakContact: believed ratio at least two without superiority; 56.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 29.75s, squad 0, help call, evidence 6330: NeedSupport; No completion observed before termination.
- 39.15s, squad 1, help call, evidence 7399: NeedSupport; No completion observed before termination.
- 43.35s, squad 0, withdrawal, evidence 7647: BreakContact: believed ratio at least two without superiority; 71.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 124.25s, squad 1, withdrawal, evidence 14637: BreakContact: believed ratio at least two without superiority; 150.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 195.95s, squad 0, withdrawal, evidence 19388: BreakContact: believed ratio at least two without superiority; 205.0s, squad 0: took cover and returned fire.
- 204.95s, squad 0, help call, evidence 20058: NeedSupport; No completion observed before termination.
- 208.35s, squad 0, withdrawal, evidence 20400: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.50069668881213, 'next_transition': 937}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.50069668881213, 'next_transition': 937}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.50069668881213, 'next_transition': 937}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1135}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1135}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1135}.
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
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-733"></a>
<a id="trace-735"></a>
<a id="trace-815"></a>
<a id="trace-817"></a>
<a id="trace-835"></a>
<a id="trace-837"></a>
<a id="trace-864"></a>
<a id="trace-866"></a>
<a id="trace-893"></a>
<a id="trace-895"></a>
<a id="trace-912"></a>
<a id="trace-914"></a>
<a id="trace-939"></a>
<a id="trace-941"></a>
<a id="trace-968"></a>
<a id="trace-970"></a>
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1024"></a>
<a id="trace-1026"></a>
<a id="trace-1041"></a>
<a id="trace-1043"></a>
<a id="trace-1132"></a>
<a id="trace-1134"></a>
<a id="trace-1237"></a>
<a id="trace-1239"></a>
<a id="trace-1260"></a>
<a id="trace-1262"></a>
<a id="trace-1281"></a>
<a id="trace-1283"></a>
<a id="trace-1317"></a>
<a id="trace-1319"></a>
<a id="trace-1336"></a>
<a id="trace-1338"></a>
<a id="trace-1622"></a>
<a id="trace-1624"></a>
<a id="trace-1642"></a>
<a id="trace-1644"></a>
<a id="trace-1680"></a>
<a id="trace-1682"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1783"></a>
<a id="trace-1785"></a>
<a id="trace-1819"></a>
<a id="trace-1821"></a>
<a id="trace-1852"></a>
<a id="trace-1854"></a>
<a id="trace-1877"></a>
<a id="trace-1879"></a>
<a id="trace-1896"></a>
<a id="trace-1898"></a>
<a id="trace-2236"></a>
<a id="trace-2238"></a>
<a id="trace-2426"></a>
<a id="trace-2428"></a>
<a id="trace-2459"></a>
<a id="trace-2461"></a>
<a id="trace-2499"></a>
<a id="trace-2501"></a>
<a id="trace-2531"></a>
<a id="trace-2533"></a>
<a id="trace-2950"></a>
<a id="trace-2952"></a>
<a id="trace-2989"></a>
<a id="trace-2991"></a>
<a id="trace-3211"></a>
<a id="trace-3213"></a>
<a id="trace-3556"></a>
<a id="trace-3558"></a>
<a id="trace-3595"></a>
<a id="trace-3597"></a>
<a id="trace-3635"></a>
<a id="trace-3637"></a>
<a id="trace-3661"></a>
<a id="trace-3663"></a>
<a id="trace-3690"></a>
<a id="trace-3692"></a>
<a id="trace-3732"></a>
<a id="trace-3734"></a>
<a id="trace-3761"></a>
<a id="trace-3763"></a>
<a id="trace-3848"></a>
<a id="trace-3850"></a>
<a id="trace-3866"></a>
<a id="trace-3868"></a>
<a id="trace-3890"></a>
<a id="trace-3892"></a>
<a id="trace-6158"></a>
<a id="trace-6160"></a>
<a id="trace-6185"></a>
<a id="trace-6187"></a>
<a id="trace-6209"></a>
<a id="trace-6211"></a>
<a id="trace-6248"></a>
<a id="trace-6250"></a>
<a id="trace-6267"></a>
<a id="trace-6269"></a>
<a id="trace-6299"></a>
<a id="trace-6301"></a>
<a id="trace-6323"></a>
<a id="trace-6325"></a>
<a id="trace-6562"></a>
<a id="trace-6564"></a>
<a id="trace-6579"></a>
<a id="trace-6581"></a>
<a id="trace-6610"></a>
<a id="trace-6612"></a>
<a id="trace-6632"></a>
<a id="trace-6634"></a>
<a id="trace-6657"></a>
<a id="trace-6659"></a>
<a id="trace-6685"></a>
<a id="trace-6687"></a>
<a id="trace-6762"></a>
<a id="trace-6764"></a>
<a id="trace-6775"></a>
<a id="trace-6777"></a>
<a id="trace-6804"></a>
<a id="trace-6806"></a>
<a id="trace-6822"></a>
<a id="trace-6824"></a>
<a id="trace-6913"></a>
<a id="trace-6915"></a>
<a id="trace-7190"></a>
<a id="trace-7192"></a>
<a id="trace-7222"></a>
<a id="trace-7224"></a>
<a id="trace-7258"></a>
<a id="trace-7260"></a>
<a id="trace-7283"></a>
<a id="trace-7285"></a>
<a id="trace-7299"></a>
<a id="trace-7301"></a>
<a id="trace-7336"></a>
<a id="trace-7338"></a>
<a id="trace-7387"></a>
<a id="trace-7389"></a>
<a id="trace-7413"></a>
<a id="trace-7415"></a>
<a id="trace-7433"></a>
<a id="trace-7435"></a>
<a id="trace-7517"></a>
<a id="trace-7519"></a>
<a id="trace-7543"></a>
<a id="trace-7545"></a>
<a id="trace-7564"></a>
<a id="trace-7566"></a>
<a id="trace-7581"></a>
<a id="trace-7583"></a>
<a id="trace-7605"></a>
<a id="trace-7607"></a>
<a id="trace-7619"></a>
<a id="trace-7621"></a>
<a id="trace-7642"></a>
<a id="trace-7644"></a>
<a id="trace-7712"></a>
<a id="trace-7714"></a>
<a id="trace-7735"></a>
<a id="trace-7737"></a>
<a id="trace-7819"></a>
<a id="trace-7821"></a>
<a id="trace-7901"></a>
<a id="trace-7903"></a>
<a id="trace-7922"></a>
<a id="trace-7924"></a>
<a id="trace-7946"></a>
<a id="trace-7948"></a>
<a id="trace-7964"></a>
<a id="trace-7966"></a>
<a id="trace-7991"></a>
<a id="trace-7993"></a>
<a id="trace-8007"></a>
<a id="trace-8009"></a>
<a id="trace-8029"></a>
<a id="trace-8031"></a>
<a id="trace-8052"></a>
<a id="trace-8054"></a>
<a id="trace-8069"></a>
<a id="trace-8071"></a>
<a id="trace-8085"></a>
<a id="trace-8087"></a>
<a id="trace-8165"></a>
<a id="trace-8167"></a>
<a id="trace-8186"></a>
<a id="trace-8188"></a>
<a id="trace-8202"></a>
<a id="trace-8204"></a>
<a id="trace-8215"></a>
<a id="trace-8217"></a>
<a id="trace-8235"></a>
<a id="trace-8237"></a>
<a id="trace-8257"></a>
<a id="trace-8259"></a>
<a id="trace-8275"></a>
<a id="trace-8277"></a>
<a id="trace-8293"></a>
<a id="trace-8295"></a>
<a id="trace-8310"></a>
<a id="trace-8312"></a>
<a id="trace-8329"></a>
<a id="trace-8331"></a>
<a id="trace-8409"></a>
<a id="trace-8411"></a>
<a id="trace-8422"></a>
<a id="trace-8424"></a>
<a id="trace-8440"></a>
<a id="trace-8442"></a>
<a id="trace-8461"></a>
<a id="trace-8463"></a>
<a id="trace-8480"></a>
<a id="trace-8482"></a>
<a id="trace-8500"></a>
<a id="trace-8502"></a>
<a id="trace-8527"></a>
<a id="trace-8529"></a>
<a id="trace-8549"></a>
<a id="trace-8551"></a>
<a id="trace-8569"></a>
<a id="trace-8571"></a>
<a id="trace-8583"></a>
<a id="trace-8585"></a>
<a id="trace-8668"></a>
<a id="trace-8670"></a>
<a id="trace-8688"></a>
<a id="trace-8690"></a>
<a id="trace-8834"></a>
<a id="trace-8836"></a>
<a id="trace-8844"></a>
<a id="trace-8846"></a>
<a id="trace-8880"></a>
<a id="trace-8882"></a>
<a id="trace-8899"></a>
<a id="trace-8901"></a>
<a id="trace-8922"></a>
<a id="trace-8924"></a>
<a id="trace-8939"></a>
<a id="trace-8941"></a>
<a id="trace-8969"></a>
<a id="trace-8971"></a>
<a id="trace-8981"></a>
<a id="trace-8983"></a>
<a id="trace-9068"></a>
<a id="trace-9070"></a>
<a id="trace-9105"></a>
<a id="trace-9107"></a>
<a id="trace-9123"></a>
<a id="trace-9125"></a>
<a id="trace-9152"></a>
<a id="trace-9154"></a>
<a id="trace-9170"></a>
<a id="trace-9172"></a>
<a id="trace-9198"></a>
<a id="trace-9200"></a>
<a id="trace-9210"></a>
<a id="trace-9212"></a>
<a id="trace-9236"></a>
<a id="trace-9238"></a>
<a id="trace-9248"></a>
<a id="trace-9250"></a>
<a id="trace-9331"></a>
<a id="trace-9333"></a>
<a id="trace-9349"></a>
<a id="trace-9351"></a>
<a id="trace-9370"></a>
<a id="trace-9372"></a>
<a id="trace-9389"></a>
<a id="trace-9391"></a>
<a id="trace-9422"></a>
<a id="trace-9424"></a>
<a id="trace-9558"></a>
<a id="trace-9560"></a>
<a id="trace-9642"></a>
<a id="trace-9644"></a>
<a id="trace-9663"></a>
<a id="trace-9665"></a>
<a id="trace-9698"></a>
<a id="trace-9700"></a>
<a id="trace-9723"></a>
<a id="trace-9725"></a>
<a id="trace-9814"></a>
<a id="trace-9816"></a>
<a id="trace-9835"></a>
<a id="trace-9837"></a>
<a id="trace-9859"></a>
<a id="trace-9861"></a>
<a id="trace-9877"></a>
<a id="trace-9879"></a>
<a id="trace-9907"></a>
<a id="trace-9909"></a>
<a id="trace-9923"></a>
<a id="trace-9925"></a>
<a id="trace-9942"></a>
<a id="trace-9944"></a>
<a id="trace-9970"></a>
<a id="trace-9972"></a>
<a id="trace-9992"></a>
<a id="trace-9994"></a>
<a id="trace-10006"></a>
<a id="trace-10008"></a>
<a id="trace-10097"></a>
<a id="trace-10099"></a>
<a id="trace-10118"></a>
<a id="trace-10120"></a>
<a id="trace-10145"></a>
<a id="trace-10147"></a>
<a id="trace-10161"></a>
<a id="trace-10163"></a>
<a id="trace-10186"></a>
<a id="trace-10188"></a>
<a id="trace-10203"></a>
<a id="trace-10205"></a>
<a id="trace-10224"></a>
<a id="trace-10226"></a>
<a id="trace-10243"></a>
<a id="trace-10245"></a>
<a id="trace-10272"></a>
<a id="trace-10274"></a>
<a id="trace-10292"></a>
<a id="trace-10294"></a>
<a id="trace-10446"></a>
<a id="trace-10448"></a>
<a id="trace-10460"></a>
<a id="trace-10462"></a>
<a id="trace-10538"></a>
<a id="trace-10540"></a>
<a id="trace-10568"></a>
<a id="trace-10570"></a>
<a id="trace-10595"></a>
<a id="trace-10597"></a>
<a id="trace-10620"></a>
<a id="trace-10622"></a>
<a id="trace-10657"></a>
<a id="trace-10659"></a>
<a id="trace-10727"></a>
<a id="trace-10729"></a>
<a id="trace-10754"></a>
<a id="trace-10756"></a>
<a id="trace-10777"></a>
<a id="trace-10779"></a>
<a id="trace-10863"></a>
<a id="trace-10865"></a>
<a id="trace-10890"></a>
<a id="trace-10892"></a>
<a id="trace-10912"></a>
<a id="trace-10914"></a>
<a id="trace-10926"></a>
<a id="trace-10928"></a>
<a id="trace-10953"></a>
<a id="trace-10955"></a>
<a id="trace-11056"></a>
<a id="trace-11058"></a>
<a id="trace-11082"></a>
<a id="trace-11084"></a>
<a id="trace-11106"></a>
<a id="trace-11108"></a>
<a id="trace-11124"></a>
<a id="trace-11126"></a>
<a id="trace-11142"></a>
<a id="trace-11144"></a>
<a id="trace-11227"></a>
<a id="trace-11229"></a>
<a id="trace-11255"></a>
<a id="trace-11257"></a>
<a id="trace-11276"></a>
<a id="trace-11278"></a>
<a id="trace-11296"></a>
<a id="trace-11298"></a>
<a id="trace-11327"></a>
<a id="trace-11329"></a>
<a id="trace-11340"></a>
<a id="trace-11342"></a>
<a id="trace-11361"></a>
<a id="trace-11363"></a>
<a id="trace-11441"></a>
<a id="trace-11443"></a>
<a id="trace-11467"></a>
<a id="trace-11469"></a>
<a id="trace-11483"></a>
<a id="trace-11485"></a>
<a id="trace-11575"></a>
<a id="trace-11577"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11622"></a>
<a id="trace-11624"></a>
<a id="trace-11638"></a>
<a id="trace-11640"></a>
<a id="trace-13296"></a>
<a id="trace-13298"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13331"></a>
<a id="trace-13333"></a>
<a id="trace-13342"></a>
<a id="trace-13344"></a>
<a id="trace-13368"></a>
<a id="trace-13370"></a>
<a id="trace-13381"></a>
<a id="trace-13383"></a>
<a id="trace-13466"></a>
<a id="trace-13468"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13500"></a>
<a id="trace-13502"></a>
<a id="trace-13516"></a>
<a id="trace-13518"></a>
<a id="trace-13538"></a>
<a id="trace-13540"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13684"></a>
<a id="trace-13686"></a>
<a id="trace-13702"></a>
<a id="trace-13704"></a>
<a id="trace-13716"></a>
<a id="trace-13718"></a>
<a id="trace-13738"></a>
<a id="trace-13740"></a>
<a id="trace-13813"></a>
<a id="trace-13815"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13846"></a>
<a id="trace-13848"></a>
<a id="trace-13862"></a>
<a id="trace-13864"></a>
<a id="trace-13877"></a>
<a id="trace-13879"></a>
<a id="trace-13893"></a>
<a id="trace-13895"></a>
<a id="trace-13911"></a>
<a id="trace-13913"></a>
<a id="trace-13927"></a>
<a id="trace-13929"></a>
<a id="trace-13998"></a>
<a id="trace-14000"></a>
<a id="trace-14014"></a>
<a id="trace-14016"></a>
<a id="trace-14099"></a>
<a id="trace-14101"></a>
<a id="trace-14112"></a>
<a id="trace-14114"></a>
<a id="trace-14130"></a>
<a id="trace-14132"></a>
<a id="trace-14140"></a>
<a id="trace-14142"></a>
<a id="trace-14158"></a>
<a id="trace-14160"></a>
<a id="trace-14175"></a>
<a id="trace-14177"></a>
<a id="trace-14192"></a>
<a id="trace-14194"></a>
<a id="trace-14202"></a>
<a id="trace-14204"></a>
<a id="trace-14220"></a>
<a id="trace-14222"></a>
<a id="trace-14230"></a>
<a id="trace-14232"></a>
<a id="trace-14311"></a>
<a id="trace-14313"></a>
<a id="trace-14324"></a>
<a id="trace-14326"></a>
<a id="trace-14517"></a>
<a id="trace-14519"></a>
<a id="trace-14530"></a>
<a id="trace-14532"></a>
<a id="trace-14555"></a>
<a id="trace-14557"></a>
<a id="trace-14567"></a>
<a id="trace-14569"></a>
<a id="trace-14591"></a>
<a id="trace-14593"></a>
<a id="trace-14609"></a>
<a id="trace-14611"></a>
<a id="trace-14632"></a>
<a id="trace-14634"></a>
<a id="trace-14821"></a>
<a id="trace-14823"></a>
<a id="trace-14905"></a>
<a id="trace-14907"></a>
<a id="trace-14927"></a>
<a id="trace-14929"></a>
<a id="trace-14951"></a>
<a id="trace-14953"></a>
<a id="trace-14970"></a>
<a id="trace-14972"></a>
<a id="trace-14986"></a>
<a id="trace-14988"></a>
<a id="trace-15004"></a>
<a id="trace-15006"></a>
<a id="trace-15021"></a>
<a id="trace-15023"></a>
<a id="trace-15035"></a>
<a id="trace-15037"></a>
<a id="trace-15052"></a>
<a id="trace-15054"></a>
<a id="trace-15062"></a>
<a id="trace-15064"></a>
<a id="trace-15138"></a>
<a id="trace-15140"></a>
<a id="trace-15149"></a>
<a id="trace-15151"></a>
<a id="trace-15163"></a>
<a id="trace-15165"></a>
<a id="trace-15179"></a>
<a id="trace-15181"></a>
<a id="trace-15196"></a>
<a id="trace-15198"></a>
<a id="trace-15207"></a>
<a id="trace-15209"></a>
<a id="trace-15224"></a>
<a id="trace-15226"></a>
<a id="trace-15239"></a>
<a id="trace-15241"></a>
<a id="trace-15252"></a>
<a id="trace-15254"></a>
<a id="trace-15263"></a>
<a id="trace-15265"></a>
<a id="trace-15337"></a>
<a id="trace-15339"></a>
<a id="trace-15349"></a>
<a id="trace-15351"></a>
<a id="trace-15361"></a>
<a id="trace-15363"></a>
<a id="trace-15376"></a>
<a id="trace-15378"></a>
<a id="trace-15392"></a>
<a id="trace-15394"></a>
<a id="trace-15410"></a>
<a id="trace-15412"></a>
<a id="trace-15428"></a>
<a id="trace-15430"></a>
<a id="trace-15445"></a>
<a id="trace-15447"></a>
<a id="trace-15467"></a>
<a id="trace-15469"></a>
<a id="trace-15476"></a>
<a id="trace-15478"></a>
<a id="trace-15554"></a>
<a id="trace-15556"></a>
<a id="trace-15567"></a>
<a id="trace-15569"></a>
<a id="trace-15583"></a>
<a id="trace-15585"></a>
<a id="trace-15596"></a>
<a id="trace-15598"></a>
<a id="trace-15614"></a>
<a id="trace-15616"></a>
<a id="trace-15623"></a>
<a id="trace-15625"></a>
<a id="trace-15643"></a>
<a id="trace-15645"></a>
<a id="trace-15656"></a>
<a id="trace-15658"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15765"></a>
<a id="trace-15767"></a>
<a id="trace-15775"></a>
<a id="trace-15777"></a>
<a id="trace-15794"></a>
<a id="trace-15796"></a>
<a id="trace-15809"></a>
<a id="trace-15811"></a>
<a id="trace-15827"></a>
<a id="trace-15829"></a>
<a id="trace-15836"></a>
<a id="trace-15838"></a>
<a id="trace-15854"></a>
<a id="trace-15856"></a>
<a id="trace-15865"></a>
<a id="trace-15867"></a>
<a id="trace-15882"></a>
<a id="trace-15884"></a>
<a id="trace-15908"></a>
<a id="trace-15910"></a>
<a id="trace-15987"></a>
<a id="trace-15989"></a>
<a id="trace-16002"></a>
<a id="trace-16004"></a>
<a id="trace-16028"></a>
<a id="trace-16030"></a>
<a id="trace-16036"></a>
<a id="trace-16038"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16071"></a>
<a id="trace-16073"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16100"></a>
<a id="trace-16102"></a>
<a id="trace-16117"></a>
<a id="trace-16119"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16209"></a>
<a id="trace-16211"></a>
<a id="trace-16227"></a>
<a id="trace-16229"></a>
<a id="trace-16252"></a>
<a id="trace-16254"></a>
<a id="trace-16267"></a>
<a id="trace-16269"></a>
<a id="trace-16288"></a>
<a id="trace-16290"></a>
<a id="trace-16299"></a>
<a id="trace-16301"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16332"></a>
<a id="trace-16334"></a>
<a id="trace-16352"></a>
<a id="trace-16354"></a>
<a id="trace-16363"></a>
<a id="trace-16365"></a>
<a id="trace-16440"></a>
<a id="trace-16442"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16522"></a>
<a id="trace-16524"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16578"></a>
<a id="trace-16580"></a>
<a id="trace-16591"></a>
<a id="trace-16593"></a>
<a id="trace-16668"></a>
<a id="trace-16670"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16706"></a>
<a id="trace-16708"></a>
<a id="trace-16723"></a>
<a id="trace-16725"></a>
<a id="trace-16739"></a>
<a id="trace-16741"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16773"></a>
<a id="trace-16775"></a>
<a id="trace-16796"></a>
<a id="trace-16798"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16887"></a>
<a id="trace-16889"></a>
<a id="trace-16906"></a>
<a id="trace-16908"></a>
<a id="trace-17032"></a>
<a id="trace-17034"></a>
<a id="trace-17045"></a>
<a id="trace-17047"></a>
<a id="trace-17073"></a>
<a id="trace-17075"></a>
<a id="trace-17095"></a>
<a id="trace-17097"></a>
<a id="trace-17117"></a>
<a id="trace-17119"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17153"></a>
<a id="trace-17155"></a>
<a id="trace-17167"></a>
<a id="trace-17169"></a>
<a id="trace-17248"></a>
<a id="trace-17250"></a>
<a id="trace-17262"></a>
<a id="trace-17264"></a>
<a id="trace-17294"></a>
<a id="trace-17296"></a>
<a id="trace-17318"></a>
<a id="trace-17320"></a>
<a id="trace-17339"></a>
<a id="trace-17341"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17384"></a>
<a id="trace-17386"></a>
<a id="trace-17397"></a>
<a id="trace-17399"></a>
<a id="trace-17418"></a>
<a id="trace-17420"></a>
<a id="trace-17432"></a>
<a id="trace-17434"></a>
<a id="trace-17511"></a>
<a id="trace-17513"></a>
<a id="trace-17535"></a>
<a id="trace-17537"></a>
<a id="trace-17557"></a>
<a id="trace-17559"></a>
<a id="trace-17573"></a>
<a id="trace-17575"></a>
<a id="trace-17602"></a>
<a id="trace-17604"></a>
<a id="trace-17626"></a>
<a id="trace-17628"></a>
<a id="trace-17650"></a>
<a id="trace-17652"></a>
<a id="trace-17661"></a>
<a id="trace-17663"></a>
<a id="trace-17692"></a>
<a id="trace-17694"></a>
<a id="trace-17712"></a>
<a id="trace-17714"></a>
<a id="trace-18011"></a>
<a id="trace-18013"></a>
<a id="trace-18030"></a>
<a id="trace-18032"></a>
<a id="trace-18052"></a>
<a id="trace-18054"></a>
<a id="trace-18072"></a>
<a id="trace-18074"></a>
<a id="trace-18091"></a>
<a id="trace-18093"></a>
<a id="trace-18110"></a>
<a id="trace-18112"></a>
<a id="trace-18136"></a>
<a id="trace-18138"></a>
<a id="trace-18162"></a>
<a id="trace-18164"></a>
<a id="trace-18189"></a>
<a id="trace-18191"></a>
<a id="trace-18207"></a>
<a id="trace-18209"></a>
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18301"></a>
<a id="trace-18303"></a>
<a id="trace-18584"></a>
<a id="trace-18586"></a>
<a id="trace-18874"></a>
<a id="trace-18876"></a>
<a id="trace-19161"></a>
<a id="trace-19163"></a>
<a id="trace-19183"></a>
<a id="trace-19185"></a>
<a id="trace-19209"></a>
<a id="trace-19211"></a>
<a id="trace-19235"></a>
<a id="trace-19237"></a>
<a id="trace-19258"></a>
<a id="trace-19260"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
<a id="trace-19367"></a>
<a id="trace-19369"></a>
<a id="trace-19380"></a>
<a id="trace-19382"></a>
<a id="trace-19670"></a>
<a id="trace-19672"></a>
<a id="trace-19694"></a>
<a id="trace-19696"></a>
<a id="trace-19715"></a>
<a id="trace-19717"></a>
<a id="trace-19730"></a>
<a id="trace-19732"></a>
<a id="trace-19751"></a>
<a id="trace-19753"></a>
<a id="trace-19765"></a>
<a id="trace-19767"></a>
<a id="trace-19785"></a>
<a id="trace-19787"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19878"></a>
<a id="trace-19880"></a>
<a id="trace-19897"></a>
<a id="trace-19899"></a>
<a id="trace-19918"></a>
<a id="trace-19920"></a>
<a id="trace-19933"></a>
<a id="trace-19935"></a>
<a id="trace-19955"></a>
<a id="trace-19957"></a>
<a id="trace-19969"></a>
<a id="trace-19971"></a>
<a id="trace-19992"></a>
<a id="trace-19994"></a>
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20036"></a>
<a id="trace-20038"></a>
<a id="trace-20052"></a>
<a id="trace-20054"></a>
<a id="trace-20276"></a>
<a id="trace-20278"></a>
<a id="trace-20293"></a>
<a id="trace-20295"></a>
<a id="trace-20323"></a>
<a id="trace-20325"></a>
<a id="trace-20337"></a>
<a id="trace-20339"></a>
<a id="trace-20357"></a>
<a id="trace-20359"></a>
<a id="trace-20371"></a>
<a id="trace-20373"></a>
<a id="trace-20395"></a>
<a id="trace-20397"></a>
<a id="trace-20547"></a>
<a id="trace-20549"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20587"></a>
<a id="trace-20589"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20674"></a>
<a id="trace-20676"></a>
<a id="trace-20694"></a>
<a id="trace-20696"></a>
<a id="trace-20706"></a>
<a id="trace-20708"></a>
<a id="trace-20721"></a>
<a id="trace-20723"></a>
<a id="trace-20737"></a>
<a id="trace-20739"></a>
<a id="trace-20750"></a>
<a id="trace-20752"></a>
<a id="trace-20758"></a>
<a id="trace-20760"></a>
<a id="trace-20768"></a>
<a id="trace-20770"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20842"></a>
<a id="trace-20844"></a>
<a id="trace-20850"></a>
<a id="trace-20852"></a>
<a id="trace-20862"></a>
<a id="trace-20864"></a>
<a id="trace-20870"></a>
<a id="trace-20872"></a>
<a id="trace-20884"></a>
<a id="trace-20886"></a>
<a id="trace-20893"></a>
<a id="trace-20895"></a>
<a id="trace-20905"></a>
<a id="trace-20907"></a>
<a id="trace-20913"></a>
<a id="trace-20915"></a>
<a id="trace-20924"></a>
<a id="trace-20926"></a>
<a id="trace-20932"></a>
<a id="trace-20934"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21018"></a>
<a id="trace-21020"></a>
<a id="trace-21026"></a>
<a id="trace-21028"></a>
<a id="trace-21042"></a>
<a id="trace-21044"></a>
<a id="trace-21051"></a>
<a id="trace-21053"></a>
<a id="trace-21063"></a>
<a id="trace-21065"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21077"></a>
<a id="trace-21079"></a>
<a id="trace-21083"></a>
<a id="trace-21085"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21172"></a>
<a id="trace-21174"></a>
<a id="trace-21180"></a>
<a id="trace-21182"></a>
<a id="trace-21195"></a>
<a id="trace-21197"></a>
<a id="trace-21206"></a>
<a id="trace-21208"></a>
<a id="trace-21218"></a>
<a id="trace-21220"></a>
<a id="trace-21227"></a>
<a id="trace-21229"></a>
<a id="trace-21240"></a>
<a id="trace-21242"></a>
<a id="trace-21248"></a>
<a id="trace-21250"></a>
<a id="trace-21315"></a>
<a id="trace-21317"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21389"></a>
<a id="trace-21391"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21416"></a>
<a id="trace-21418"></a>
<a id="trace-21436"></a>
<a id="trace-21438"></a>
<a id="trace-21505"></a>
<a id="trace-21507"></a>
<a id="trace-21514"></a>
<a id="trace-21516"></a>
<a id="trace-21526"></a>
<a id="trace-21528"></a>
<a id="trace-21537"></a>
<a id="trace-21539"></a>
<a id="trace-21548"></a>
<a id="trace-21550"></a>
<a id="trace-21560"></a>
<a id="trace-21562"></a>
<a id="trace-21578"></a>
<a id="trace-21580"></a>
<a id="trace-21584"></a>
<a id="trace-21586"></a>
<a id="trace-21597"></a>
<a id="trace-21599"></a>
<a id="trace-21609"></a>
<a id="trace-21611"></a>
<a id="trace-21677"></a>
<a id="trace-21679"></a>
<a id="trace-21692"></a>
<a id="trace-21694"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21718"></a>
<a id="trace-21720"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21751"></a>
<a id="trace-21753"></a>
<a id="trace-21765"></a>
<a id="trace-21767"></a>
<a id="trace-21773"></a>
<a id="trace-21775"></a>
<a id="trace-21787"></a>
<a id="trace-21789"></a>
<a id="trace-21795"></a>
<a id="trace-21797"></a>
<a id="trace-21867"></a>
<a id="trace-21869"></a>
<a id="trace-21877"></a>
<a id="trace-21879"></a>
<a id="trace-21889"></a>
<a id="trace-21891"></a>
<a id="trace-21899"></a>
<a id="trace-21901"></a>
<a id="trace-21919"></a>
<a id="trace-21921"></a>
<a id="trace-21927"></a>
<a id="trace-21929"></a>
<a id="trace-21946"></a>
<a id="trace-21948"></a>
<a id="trace-21960"></a>
<a id="trace-21962"></a>
<a id="trace-21973"></a>
<a id="trace-21975"></a>
<a id="trace-21984"></a>
<a id="trace-21986"></a>
<a id="trace-22054"></a>
<a id="trace-22056"></a>
<a id="trace-22061"></a>
<a id="trace-22063"></a>
<a id="trace-22075"></a>
<a id="trace-22077"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22100"></a>
<a id="trace-22102"></a>
<a id="trace-22110"></a>
<a id="trace-22112"></a>
<a id="trace-22127"></a>
<a id="trace-22129"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22167"></a>
<a id="trace-22169"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22248"></a>
<a id="trace-22250"></a>
<a id="trace-22263"></a>
<a id="trace-22265"></a>
<a id="trace-22274"></a>
<a id="trace-22276"></a>
<a id="trace-22288"></a>
<a id="trace-22290"></a>
<a id="trace-22300"></a>
<a id="trace-22302"></a>
<a id="trace-22316"></a>
<a id="trace-22318"></a>
<a id="trace-22324"></a>
<a id="trace-22326"></a>
<a id="trace-22337"></a>
<a id="trace-22339"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22430"></a>
<a id="trace-22432"></a>
<a id="trace-22444"></a>
<a id="trace-22446"></a>
<a id="trace-22459"></a>
<a id="trace-22461"></a>
<a id="trace-22473"></a>
<a id="trace-22475"></a>
<a id="trace-22483"></a>
<a id="trace-22485"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
<a id="trace-22513"></a>
<a id="trace-22515"></a>
<a id="trace-22525"></a>
<a id="trace-22527"></a>
<a id="trace-22539"></a>
<a id="trace-22541"></a>
<a id="trace-22607"></a>
<a id="trace-22609"></a>
<a id="trace-22615"></a>
<a id="trace-22617"></a>
<a id="trace-22629"></a>
<a id="trace-22631"></a>
<a id="trace-22640"></a>
<a id="trace-22642"></a>
<a id="trace-22655"></a>
<a id="trace-22657"></a>
<a id="trace-22669"></a>
<a id="trace-22671"></a>
<a id="trace-22687"></a>
<a id="trace-22689"></a>
<a id="trace-22694"></a>
<a id="trace-22696"></a>
<a id="trace-22707"></a>
<a id="trace-22709"></a>
<a id="trace-22722"></a>
<a id="trace-22724"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22803"></a>
<a id="trace-22805"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
<a id="trace-22826"></a>
<a id="trace-22828"></a>
<a id="trace-22841"></a>
<a id="trace-22843"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22879"></a>
<a id="trace-22881"></a>
<a id="trace-22895"></a>
<a id="trace-22897"></a>
<a id="trace-22903"></a>
<a id="trace-22905"></a>
<a id="trace-22975"></a>
<a id="trace-22977"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-23000"></a>
<a id="trace-23002"></a>
<a id="trace-23012"></a>
<a id="trace-23014"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23041"></a>
<a id="trace-23043"></a>
<a id="trace-23058"></a>
<a id="trace-23060"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23078"></a>
<a id="trace-23080"></a>
<a id="trace-23089"></a>
<a id="trace-23091"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23167"></a>
<a id="trace-23169"></a>
<a id="trace-23183"></a>
<a id="trace-23185"></a>
<a id="trace-23193"></a>
<a id="trace-23195"></a>
<a id="trace-23205"></a>
<a id="trace-23207"></a>
<a id="trace-23220"></a>
<a id="trace-23222"></a>
<a id="trace-23237"></a>
<a id="trace-23239"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23279"></a>
<a id="trace-23281"></a>
<a id="trace-23346"></a>
<a id="trace-23348"></a>
<a id="trace-23355"></a>
<a id="trace-23357"></a>
<a id="trace-23370"></a>
<a id="trace-23372"></a>
<a id="trace-23377"></a>
<a id="trace-23379"></a>
<a id="trace-23407"></a>
<a id="trace-23409"></a>
<a id="trace-23420"></a>
<a id="trace-23422"></a>
<a id="trace-23428"></a>
<a id="trace-23430"></a>
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23456"></a>
<a id="trace-23458"></a>
<a id="trace-23525"></a>
<a id="trace-23527"></a>
<a id="trace-23539"></a>
<a id="trace-23541"></a>
<a id="trace-23556"></a>
<a id="trace-23558"></a>
<a id="trace-23566"></a>
<a id="trace-23568"></a>
<a id="trace-23581"></a>
<a id="trace-23583"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23605"></a>
<a id="trace-23607"></a>
<a id="trace-23617"></a>
<a id="trace-23619"></a>
<a id="trace-23631"></a>
<a id="trace-23633"></a>
<a id="trace-23642"></a>
<a id="trace-23644"></a>
<a id="trace-23709"></a>
<a id="trace-23711"></a>
<a id="trace-23717"></a>
<a id="trace-23719"></a>
<a id="trace-23735"></a>
<a id="trace-23737"></a>
<a id="trace-23745"></a>
<a id="trace-23747"></a>
<a id="trace-23760"></a>
<a id="trace-23762"></a>
<a id="trace-23776"></a>
<a id="trace-23778"></a>
<a id="trace-23792"></a>
<a id="trace-23794"></a>
<a id="trace-23801"></a>
<a id="trace-23803"></a>
<a id="trace-23815"></a>
<a id="trace-23817"></a>
<a id="trace-23826"></a>
<a id="trace-23828"></a>
<a id="trace-23896"></a>
<a id="trace-23898"></a>
<a id="trace-23909"></a>
<a id="trace-23911"></a>
<a id="trace-23922"></a>
<a id="trace-23924"></a>
<a id="trace-23929"></a>
<a id="trace-23931"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23959"></a>
<a id="trace-23961"></a>
<a id="trace-23970"></a>
<a id="trace-23972"></a>
<a id="trace-23982"></a>
<a id="trace-23984"></a>
<a id="trace-23998"></a>
<a id="trace-24000"></a>
<a id="trace-24008"></a>
<a id="trace-24010"></a>
<a id="trace-24083"></a>
<a id="trace-24085"></a>
<a id="trace-24094"></a>
<a id="trace-24096"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24118"></a>
<a id="trace-24120"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24145"></a>
<a id="trace-24147"></a>
<a id="trace-24158"></a>
<a id="trace-24160"></a>
<a id="trace-24167"></a>
<a id="trace-24169"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24192"></a>
<a id="trace-24194"></a>
<a id="trace-24263"></a>
<a id="trace-24265"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24287"></a>
<a id="trace-24289"></a>
<a id="trace-24300"></a>
<a id="trace-24302"></a>
<a id="trace-24317"></a>
<a id="trace-24319"></a>
<a id="trace-24329"></a>
<a id="trace-24331"></a>
<a id="trace-24347"></a>
<a id="trace-24349"></a>
<a id="trace-24353"></a>
<a id="trace-24355"></a>
<a id="trace-24427"></a>
<a id="trace-24429"></a>
<a id="trace-24438"></a>
<a id="trace-24440"></a>
<a id="trace-24508"></a>
<a id="trace-24510"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24535"></a>
<a id="trace-24537"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24578"></a>
<a id="trace-24580"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
<a id="trace-24603"></a>
<a id="trace-24605"></a>
<a id="trace-24623"></a>
<a id="trace-24625"></a>
<a id="trace-24633"></a>
<a id="trace-24635"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24720"></a>
<a id="trace-24722"></a>
<a id="trace-24730"></a>
<a id="trace-24732"></a>
<a id="trace-24739"></a>
<a id="trace-24741"></a>
<a id="trace-24753"></a>
<a id="trace-24755"></a>
<a id="trace-24763"></a>
<a id="trace-24765"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24806"></a>
<a id="trace-24808"></a>
<a id="trace-24818"></a>
<a id="trace-24820"></a>
<a id="trace-24886"></a>
<a id="trace-24888"></a>
<a id="trace-24897"></a>
<a id="trace-24899"></a>
<a id="trace-24915"></a>
<a id="trace-24917"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24942"></a>
<a id="trace-24944"></a>
<a id="trace-24952"></a>
<a id="trace-24954"></a>
<a id="trace-24966"></a>
<a id="trace-24968"></a>
<a id="trace-24973"></a>
<a id="trace-24975"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-24997"></a>
<a id="trace-24999"></a>
<a id="trace-25069"></a>
<a id="trace-25071"></a>
<a id="trace-25082"></a>
<a id="trace-25084"></a>
<a id="trace-25096"></a>
<a id="trace-25098"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25119"></a>
<a id="trace-25121"></a>
<a id="trace-25133"></a>
<a id="trace-25135"></a>
<a id="trace-25152"></a>
<a id="trace-25154"></a>
<a id="trace-25165"></a>
<a id="trace-25167"></a>
<a id="trace-25178"></a>
<a id="trace-25180"></a>
<a id="trace-25186"></a>
<a id="trace-25188"></a>
<a id="trace-25254"></a>
<a id="trace-25256"></a>
<a id="trace-25265"></a>
<a id="trace-25267"></a>
<a id="trace-25275"></a>
<a id="trace-25277"></a>
<a id="trace-25288"></a>
<a id="trace-25290"></a>
<a id="trace-25307"></a>
<a id="trace-25309"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25331"></a>
<a id="trace-25333"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
<a id="trace-25355"></a>
<a id="trace-25357"></a>
<a id="trace-25371"></a>
<a id="trace-25373"></a>
<a id="trace-25446"></a>
<a id="trace-25448"></a>
<a id="trace-25455"></a>
<a id="trace-25457"></a>
<a id="trace-25467"></a>
<a id="trace-25469"></a>
<a id="trace-25475"></a>
<a id="trace-25477"></a>
<a id="trace-25490"></a>
<a id="trace-25492"></a>
<a id="trace-25500"></a>
<a id="trace-25502"></a>
<a id="trace-25519"></a>
<a id="trace-25521"></a>
<a id="trace-25526"></a>
<a id="trace-25528"></a>
<a id="trace-25543"></a>
<a id="trace-25545"></a>
<a id="trace-25554"></a>
<a id="trace-25556"></a>
<a id="trace-25621"></a>
<a id="trace-25623"></a>
<a id="trace-25633"></a>
<a id="trace-25635"></a>
<a id="trace-25649"></a>
<a id="trace-25651"></a>
<a id="trace-25657"></a>
<a id="trace-25659"></a>
<a id="trace-25680"></a>
<a id="trace-25682"></a>
<a id="trace-25690"></a>
<a id="trace-25692"></a>
<a id="trace-25702"></a>
<a id="trace-25704"></a>
<a id="trace-25711"></a>
<a id="trace-25713"></a>
<a id="trace-25726"></a>
<a id="trace-25728"></a>
<a id="trace-25735"></a>
<a id="trace-25737"></a>
<a id="trace-25807"></a>
<a id="trace-25809"></a>
<a id="trace-25821"></a>
<a id="trace-25823"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25840"></a>
<a id="trace-25842"></a>
<a id="trace-25859"></a>
<a id="trace-25861"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25885"></a>
<a id="trace-25887"></a>
<a id="trace-25900"></a>
<a id="trace-25902"></a>
<a id="trace-25914"></a>
<a id="trace-25916"></a>
<a id="trace-25925"></a>
<a id="trace-25927"></a>
<a id="trace-25992"></a>
<a id="trace-25994"></a>
<a id="trace-26002"></a>
<a id="trace-26004"></a>
<a id="trace-26014"></a>
<a id="trace-26016"></a>
<a id="trace-26025"></a>
<a id="trace-26027"></a>
<a id="trace-26043"></a>
<a id="trace-26045"></a>
<a id="trace-26053"></a>
<a id="trace-26055"></a>
<a id="trace-26069"></a>
<a id="trace-26071"></a>
<a id="trace-26077"></a>
<a id="trace-26079"></a>
<a id="trace-26091"></a>
<a id="trace-26093"></a>
<a id="trace-26106"></a>
<a id="trace-26108"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079356011602765, 'next_transition': 608}.
<a id="trace-937"></a>
<a id="trace-966"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1020"></a>
<a id="trace-1022"></a>
<a id="trace-1037"></a>
<a id="trace-1039"></a>
<a id="trace-1128"></a>
<a id="trace-1130"></a>
<a id="trace-1233"></a>
<a id="trace-1235"></a>
<a id="trace-1256"></a>
<a id="trace-1258"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 937): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5224095814721169, 'next_transition': 966}.
<a id="trace-1135"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1135): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1057. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.93582088516575, 'next_transition': 142}.
<a id="trace-1136"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1136): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1057. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.93582088516575, 'next_transition': 142}.
<a id="trace-142"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.092332130196532, 'next_transition': 1902}.
<a id="trace-1342"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1342): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1342. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.092332130196532, 'next_transition': 1902}.
<a id="trace-1343"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1343): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1343. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.092332130196532, 'next_transition': 1902}.
<a id="trace-1344"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1344): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012009934033, 'next_transition': 1618}.
<a id="trace-1345"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1345): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012009934033, 'next_transition': 1618}.
<a id="trace-1618"></a>
<a id="trace-1620"></a>
<a id="trace-1676"></a>
<a id="trace-1678"></a>
<a id="trace-1695"></a>
<a id="trace-1697"></a>
<a id="trace-1779"></a>
<a id="trace-1781"></a>
<a id="trace-1815"></a>
<a id="trace-1817"></a>
<a id="trace-1848"></a>
<a id="trace-1850"></a>
<a id="trace-1873"></a>
<a id="trace-1875"></a>
<a id="trace-1892"></a>
<a id="trace-1894"></a>
<a id="trace-2232"></a>
<a id="trace-2234"></a>
<a id="trace-2455"></a>
<a id="trace-2457"></a>
<a id="trace-2495"></a>
<a id="trace-2497"></a>
<a id="trace-2527"></a>
<a id="trace-2529"></a>
- 13.20s–19.75s (×24), actor 5, squad 0 (trace 1618): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1343. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2206413051277338, 'next_transition': 1676}.
<a id="trace-1902"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 1902): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1717. Next observer evidence: None.
<a id="trace-1942"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 1942): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1717. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2087}.
<a id="trace-1943"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 1943): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1717. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2087}.
<a id="trace-1944"></a>
<a id="trace-2087"></a>
<a id="trace-2239"></a>
- 17.55s–17.75s (×3), actor 8, squad 1 (trace 1944): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1717. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2087}.
<a id="trace-2534"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2534): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1709. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 2946}.
<a id="trace-2535"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2535): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1709. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 2946}.
<a id="trace-2536"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2536): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1709. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 2946}.
<a id="trace-2946"></a>
<a id="trace-2948"></a>
<a id="trace-2985"></a>
<a id="trace-2987"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 2946): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2875. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749727402898897, 'next_transition': 2985}.
<a id="trace-3009"></a>
- 21.10s–21.10s (×1), actor 8, squad 1 (trace 3009): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2878. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.557173473889403, 'next_transition': 6698}.
<a id="trace-3010"></a>
- 21.10s–21.10s (×1), actor 8, squad 1 (trace 3010): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2878. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.557173473889403, 'next_transition': 6698}.
<a id="trace-3215"></a>
- 21.25s–21.25s (×1), actor 0, squad 0 (trace 3215): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2870. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4694633359878399, 'next_transition': 3552}.
<a id="trace-3552"></a>
<a id="trace-3554"></a>
<a id="trace-3657"></a>
<a id="trace-3659"></a>
<a id="trace-3728"></a>
<a id="trace-3730"></a>
<a id="trace-3757"></a>
<a id="trace-3759"></a>
- 21.75s–24.75s (×8), actor 5, squad 0 (trace 3552): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2875. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7562636424638948, 'next_transition': 3657}.
<a id="trace-3833"></a>
- 25.20s–25.20s (×1), actor 1, squad 0 (trace 3833): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: None.
<a id="trace-3844"></a>
<a id="trace-3846"></a>
<a id="trace-3862"></a>
<a id="trace-3864"></a>
- 25.25s–25.75s (×4), actor 5, squad 0 (trace 3844): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3774. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5185999551014182, 'next_transition': 3862}.
<a id="trace-379"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 379): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3899"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3899): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3899. Next observer evidence: {'until': 26.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3905}.
<a id="trace-3900"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3900): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3900. Next observer evidence: {'until': 26.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3905}.
<a id="trace-3905"></a>
- 26.65s–26.65s (×1), actor 1, squad 0 (trace 3905): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.009014285714285515, 'next_transition': 6181}.
<a id="trace-5990"></a>
- 26.65s–26.65s (×1), actor 1, squad 0 (trace 5990): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.009014285714285515, 'next_transition': 6181}.
<a id="trace-5991"></a>
- 26.65s–26.65s (×1), actor 1, squad 0 (trace 5991): MoveTactically. Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.009014285714285515, 'next_transition': 6181}.
<a id="trace-5992"></a>
- 26.65s–26.65s (×1), actor 1, squad 0 (trace 5992): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.009014285714285515, 'next_transition': 6181}.
<a id="trace-6181"></a>
<a id="trace-6183"></a>
<a id="trace-6244"></a>
<a id="trace-6246"></a>
<a id="trace-6321"></a>
- 27.25s–29.75s (×5), actor 5, squad 0 (trace 6181): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 3900. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.081742004042626, 'next_transition': 6244}.
<a id="trace-6328"></a>
- 29.75s–29.75s (×1), actor 1, squad 0 (trace 6328): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400228415092136, 'next_transition': 6406}.
<a id="trace-6330"></a>
- 29.75s–29.75s (×1), actor 1, squad 0 (trace 6330): NeedSupport. Knowledge: actor memory at 25.00s, trace 3770. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400228415092136, 'next_transition': 6406}.
<a id="trace-6406"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 6406): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 6340. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199844363371305, 'next_transition': 6560}.
<a id="trace-6411"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 6411): MoveTactically. Knowledge: actor memory at 30.00s, trace 6340. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199844363371305, 'next_transition': 6560}.
<a id="trace-6412"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 6412): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 30.00s, trace 6340. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199844363371305, 'next_transition': 6560}.
<a id="trace-6560"></a>
<a id="trace-6575"></a>
<a id="trace-6577"></a>
<a id="trace-6628"></a>
<a id="trace-6630"></a>
<a id="trace-6653"></a>
<a id="trace-6655"></a>
<a id="trace-6758"></a>
<a id="trace-6760"></a>
<a id="trace-6771"></a>
<a id="trace-6773"></a>
<a id="trace-6800"></a>
<a id="trace-6802"></a>
<a id="trace-6818"></a>
<a id="trace-6820"></a>
<a id="trace-6909"></a>
<a id="trace-6911"></a>
- 30.25s–35.25s (×17), actor 5, squad 0 (trace 6560): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6343. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400131196813602, 'next_transition': 6575}.
<a id="trace-6698"></a>
- 33.20s–33.20s (×1), actor 8, squad 1 (trace 6698): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 30.00s, trace 6346. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.197450359482229, 'next_transition': 7399}.
<a id="trace-6699"></a>
- 33.20s–33.20s (×1), actor 8, squad 1 (trace 6699): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 30.00s, trace 6346. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.197450359482229, 'next_transition': 7399}.
<a id="trace-6918"></a>
- 35.25s–35.25s (×1), actor 1, squad 0 (trace 6918): traveling overwatch. Knowledge: actor memory at 35.00s, trace 6838. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3563413141840745, 'next_transition': 7186}.
<a id="trace-6919"></a>
- 35.25s–35.25s (×1), actor 1, squad 0 (trace 6919): current contact unknown for 10 s. Knowledge: actor memory at 35.00s, trace 6838. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3563413141840745, 'next_transition': 7186}.
<a id="trace-7186"></a>
<a id="trace-7188"></a>
<a id="trace-7254"></a>
<a id="trace-7256"></a>
<a id="trace-7279"></a>
<a id="trace-7281"></a>
<a id="trace-7332"></a>
<a id="trace-7334"></a>
- 35.75s–38.25s (×8), actor 5, squad 0 (trace 7186): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6841. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9712578477890323, 'next_transition': 7254}.
<a id="trace-7345"></a>
- 38.65s–38.65s (×1), actor 1, squad 0 (trace 7345): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 6838. Next observer evidence: None.
<a id="trace-7383"></a>
<a id="trace-7385"></a>
<a id="trace-7429"></a>
<a id="trace-7431"></a>
<a id="trace-7513"></a>
<a id="trace-7515"></a>
- 38.75s–40.25s (×6), actor 5, squad 0 (trace 7383): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6841. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13124936452555155, 'next_transition': 7429}.
<a id="trace-7399"></a>
- 39.15s–39.15s (×1), actor 8, squad 1 (trace 7399): NeedSupport. Knowledge: actor memory at 35.00s, trace 6844. Next observer evidence: {'until': 44.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.802533023543509, 'next_transition': 7747}.
<a id="trace-538"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (events line 538): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7522"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 7522): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.138540 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 7522. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31219632978896744, 'next_transition': 7539}.
<a id="trace-7523"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 7523): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.138540 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 7523. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31219632978896744, 'next_transition': 7539}.
<a id="trace-7539"></a>
<a id="trace-7541"></a>
<a id="trace-7560"></a>
<a id="trace-7562"></a>
<a id="trace-7577"></a>
<a id="trace-7579"></a>
<a id="trace-7601"></a>
<a id="trace-7603"></a>
<a id="trace-7615"></a>
<a id="trace-7617"></a>
<a id="trace-7638"></a>
<a id="trace-7640"></a>
- 40.75s–43.25s (×12), actor 5, squad 0 (trace 7539): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 7523. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.9134820297105312, 'next_transition': 7560}.
<a id="trace-7647"></a>
- 43.35s–43.35s (×1), actor 1, squad 0 (trace 7647): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 7440. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11306192858783193, 'next_transition': 7708}.
<a id="trace-7648"></a>
- 43.35s–43.35s (×1), actor 1, squad 0 (trace 7648): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 7440. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11306192858783193, 'next_transition': 7708}.
<a id="trace-7708"></a>
<a id="trace-7710"></a>
<a id="trace-7918"></a>
<a id="trace-7920"></a>
<a id="trace-7942"></a>
<a id="trace-7944"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-7987"></a>
<a id="trace-7989"></a>
<a id="trace-8003"></a>
<a id="trace-8005"></a>
<a id="trace-8048"></a>
<a id="trace-8050"></a>
<a id="trace-8065"></a>
<a id="trace-8067"></a>
<a id="trace-8081"></a>
<a id="trace-8083"></a>
<a id="trace-8161"></a>
<a id="trace-8163"></a>
<a id="trace-8182"></a>
<a id="trace-8184"></a>
<a id="trace-8198"></a>
<a id="trace-8200"></a>
<a id="trace-8231"></a>
<a id="trace-8233"></a>
<a id="trace-8253"></a>
<a id="trace-8255"></a>
<a id="trace-8271"></a>
<a id="trace-8273"></a>
<a id="trace-8289"></a>
<a id="trace-8291"></a>
<a id="trace-8306"></a>
<a id="trace-8308"></a>
<a id="trace-8325"></a>
<a id="trace-8327"></a>
<a id="trace-8418"></a>
<a id="trace-8420"></a>
<a id="trace-8436"></a>
<a id="trace-8438"></a>
<a id="trace-8457"></a>
<a id="trace-8459"></a>
<a id="trace-8476"></a>
<a id="trace-8478"></a>
<a id="trace-8496"></a>
<a id="trace-8498"></a>
<a id="trace-8523"></a>
<a id="trace-8525"></a>
<a id="trace-8545"></a>
<a id="trace-8547"></a>
<a id="trace-8565"></a>
<a id="trace-8567"></a>
<a id="trace-8579"></a>
<a id="trace-8581"></a>
<a id="trace-8664"></a>
<a id="trace-8666"></a>
<a id="trace-8684"></a>
<a id="trace-8686"></a>
- 43.75s–60.75s (×58), actor 5, squad 0 (trace 7708): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 7523. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9061546963838496, 'next_transition': 7918}.
<a id="trace-7747"></a>
- 44.40s–44.40s (×1), actor 8, squad 1 (trace 7747): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 7446. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000022870399235, 'next_transition': 8445}.
<a id="trace-7748"></a>
- 44.40s–44.40s (×1), actor 8, squad 1 (trace 7748): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 7446. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000022870399235, 'next_transition': 8445}.
<a id="trace-8445"></a>
- 56.40s–56.40s (×1), actor 8, squad 1 (trace 8445): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 8338. Next observer evidence: {'until': 67.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 766}.
<a id="trace-8695"></a>
- 61.05s–61.05s (×1), actor 1, squad 0 (trace 8695): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 8587. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519885072497646, 'next_transition': 8830}.
<a id="trace-8717"></a>
- 61.05s–61.05s (×1), actor 1, squad 0 (trace 8717): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 8587. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519885072497646, 'next_transition': 8830}.
<a id="trace-8830"></a>
<a id="trace-8832"></a>
<a id="trace-8840"></a>
<a id="trace-8842"></a>
<a id="trace-8876"></a>
<a id="trace-8878"></a>
<a id="trace-8895"></a>
<a id="trace-8897"></a>
<a id="trace-8918"></a>
<a id="trace-8920"></a>
<a id="trace-8935"></a>
<a id="trace-8937"></a>
<a id="trace-8965"></a>
<a id="trace-8967"></a>
<a id="trace-8977"></a>
<a id="trace-8979"></a>
<a id="trace-9064"></a>
<a id="trace-9066"></a>
<a id="trace-9080"></a>
<a id="trace-9082"></a>
<a id="trace-9148"></a>
<a id="trace-9150"></a>
<a id="trace-9166"></a>
<a id="trace-9168"></a>
<a id="trace-9232"></a>
<a id="trace-9234"></a>
<a id="trace-9244"></a>
<a id="trace-9246"></a>
<a id="trace-9327"></a>
<a id="trace-9329"></a>
<a id="trace-9345"></a>
<a id="trace-9347"></a>
<a id="trace-9366"></a>
<a id="trace-9368"></a>
- 61.25s–71.25s (×34), actor 5, squad 0 (trace 8830): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8589. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48077670676953915, 'next_transition': 8840}.
<a id="trace-766"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (events line 766): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9177"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 9177): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.015794 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 9177. Next observer evidence: {'until': 73, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9571}.
<a id="trace-9178"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 9178): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.015794 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 9178. Next observer evidence: {'until': 73, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9571}.
<a id="trace-9373"></a>
- 71.40s–71.40s (×1), actor 1, squad 0 (trace 9373): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 9256. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6272475233398959, 'next_transition': 9418}.
<a id="trace-9418"></a>
<a id="trace-9420"></a>
- 72.25s–72.25s (×2), actor 5, squad 0 (trace 9418): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9258. Next observer evidence: {'until': 72.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599144415395763, 'next_transition': 9433}.
<a id="trace-9433"></a>
- 72.40s–72.40s (×1), actor 1, squad 0 (trace 9433): MoveTactically. Knowledge: actor memory at 70.00s, trace 9256. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4489728505463426, 'next_transition': 9638}.
<a id="trace-9434"></a>
- 72.40s–72.40s (×1), actor 1, squad 0 (trace 9434): bounding overwatch. Knowledge: actor memory at 70.00s, trace 9256. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4489728505463426, 'next_transition': 9638}.
<a id="trace-9435"></a>
- 72.40s–72.40s (×1), actor 1, squad 0 (trace 9435): received platoon directive. Knowledge: actor memory at 70.00s, trace 9256. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4489728505463426, 'next_transition': 9638}.
<a id="trace-9571"></a>
- 73.00s–73.00s (×1), actor 8, squad 1 (trace 9571): MoveTactically. Knowledge: actor memory at 70.00s, trace 9261. Next observer evidence: {'until': 85.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.858750443389926, 'next_transition': 10466}.
<a id="trace-9572"></a>
- 73.00s–73.00s (×1), actor 8, squad 1 (trace 9572): received platoon directive. Knowledge: actor memory at 70.00s, trace 9261. Next observer evidence: {'until': 85.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.858750443389926, 'next_transition': 10466}.
<a id="trace-9638"></a>
<a id="trace-9640"></a>
<a id="trace-9659"></a>
<a id="trace-9661"></a>
<a id="trace-9694"></a>
<a id="trace-9696"></a>
<a id="trace-9719"></a>
<a id="trace-9721"></a>
<a id="trace-9810"></a>
<a id="trace-9812"></a>
<a id="trace-9831"></a>
<a id="trace-9833"></a>
<a id="trace-9855"></a>
<a id="trace-9857"></a>
<a id="trace-9873"></a>
<a id="trace-9875"></a>
<a id="trace-9903"></a>
<a id="trace-9905"></a>
<a id="trace-9919"></a>
<a id="trace-9921"></a>
<a id="trace-9966"></a>
<a id="trace-9968"></a>
<a id="trace-10093"></a>
<a id="trace-10095"></a>
<a id="trace-10141"></a>
<a id="trace-10143"></a>
<a id="trace-10182"></a>
<a id="trace-10184"></a>
<a id="trace-10199"></a>
<a id="trace-10201"></a>
<a id="trace-10220"></a>
<a id="trace-10222"></a>
<a id="trace-10239"></a>
<a id="trace-10241"></a>
- 73.25s–83.75s (×34), actor 5, squad 0 (trace 9638): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9258. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9988598117690402, 'next_transition': 9659}.
<a id="trace-10248"></a>
- 83.85s–83.85s (×1), actor 1, squad 0 (trace 10248): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 80.00s, trace 10015. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10268}.
<a id="trace-10268"></a>
<a id="trace-10270"></a>
<a id="trace-10288"></a>
<a id="trace-10290"></a>
- 84.25s–84.75s (×4), actor 5, squad 0 (trace 10268): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10017. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10288}.
<a id="trace-10300"></a>
- 84.85s–84.85s (×1), actor 1, squad 0 (trace 10300): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 10015. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44100351247099584, 'next_transition': 10442}.
<a id="trace-10442"></a>
<a id="trace-10444"></a>
<a id="trace-10564"></a>
<a id="trace-10566"></a>
<a id="trace-10616"></a>
<a id="trace-10618"></a>
<a id="trace-10653"></a>
<a id="trace-10655"></a>
<a id="trace-10750"></a>
<a id="trace-10752"></a>
<a id="trace-10773"></a>
<a id="trace-10775"></a>
<a id="trace-10859"></a>
<a id="trace-10861"></a>
<a id="trace-10886"></a>
<a id="trace-10888"></a>
<a id="trace-10908"></a>
<a id="trace-10910"></a>
<a id="trace-10922"></a>
<a id="trace-10924"></a>
<a id="trace-10949"></a>
<a id="trace-10951"></a>
- 85.25s–92.25s (×22), actor 5, squad 0 (trace 10442): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 10358. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38555966581581136, 'next_transition': 10564}.
<a id="trace-10466"></a>
- 85.80s–85.80s (×1), actor 8, squad 1 (trace 10466): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 10361. Next observer evidence: None.
<a id="trace-10474"></a>
- 85.85s–85.85s (×1), actor 8, squad 1 (trace 10474): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 10361. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9677158852129321, 'next_transition': 10639}.
<a id="trace-10639"></a>
- 88.20s–88.20s (×1), actor 8, squad 1 (trace 10639): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 10361. Next observer evidence: None.
<a id="trace-10660"></a>
- 88.25s–88.25s (×1), actor 8, squad 1 (trace 10660): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 10361. Next observer evidence: {'until': 98.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.325557897312398, 'next_transition': 11370}.
<a id="trace-10956"></a>
- 92.25s–92.25s (×1), actor 1, squad 0 (trace 10956): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 10786. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11052}.
<a id="trace-11052"></a>
<a id="trace-11054"></a>
<a id="trace-11078"></a>
<a id="trace-11080"></a>
<a id="trace-11102"></a>
<a id="trace-11104"></a>
<a id="trace-11138"></a>
<a id="trace-11140"></a>
- 92.75s–94.75s (×8), actor 5, squad 0 (trace 11052): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 10788. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6526824159859402, 'next_transition': 11078}.
<a id="trace-1164"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 1164): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11245"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 11245): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.119501 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 11245. Next observer evidence: None.
<a id="trace-11246"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 11246): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.119501 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 11246. Next observer evidence: None.
<a id="trace-11251"></a>
<a id="trace-11253"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11292"></a>
<a id="trace-11294"></a>
<a id="trace-11323"></a>
<a id="trace-11325"></a>
<a id="trace-11336"></a>
<a id="trace-11338"></a>
<a id="trace-11357"></a>
<a id="trace-11359"></a>
<a id="trace-11437"></a>
<a id="trace-11439"></a>
<a id="trace-11463"></a>
<a id="trace-11465"></a>
<a id="trace-11618"></a>
<a id="trace-11620"></a>
<a id="trace-11634"></a>
<a id="trace-11636"></a>
- 95.75s–101.75s (×20), actor 5, squad 0 (trace 11251): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 11246. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2721597164754549, 'next_transition': 11272}.
<a id="trace-11370"></a>
- 98.40s–98.40s (×1), actor 8, squad 1 (trace 11370): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 11156. Next observer evidence: None.
<a id="trace-11377"></a>
- 98.45s–98.45s (×1), actor 8, squad 1 (trace 11377): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 11156. Next observer evidence: {'until': 108, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.000000334967703, 'next_transition': 13557}.
<a id="trace-11643"></a>
- 101.85s–101.85s (×1), actor 1, squad 0 (trace 11643): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 11490. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3186923698496883, 'next_transition': 13292}.
<a id="trace-11644"></a>
- 101.85s–101.85s (×1), actor 1, squad 0 (trace 11644): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 100.00s, trace 11490. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3186923698496883, 'next_transition': 13292}.
<a id="trace-13292"></a>
<a id="trace-13294"></a>
<a id="trace-13309"></a>
<a id="trace-13311"></a>
<a id="trace-13338"></a>
<a id="trace-13340"></a>
<a id="trace-13364"></a>
<a id="trace-13366"></a>
<a id="trace-13496"></a>
<a id="trace-13498"></a>
<a id="trace-13534"></a>
<a id="trace-13536"></a>
<a id="trace-13548"></a>
<a id="trace-13550"></a>
<a id="trace-13680"></a>
<a id="trace-13682"></a>
<a id="trace-13714"></a>
- 102.25s–109.25s (×17), actor 5, squad 0 (trace 13292): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11492. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.06803999306290384, 'next_transition': 13309}.
<a id="trace-13557"></a>
- 108.00s–108.00s (×1), actor 8, squad 1 (trace 13557): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 105.00s, trace 13395. Next observer evidence: {'until': 114, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.667044773437854, 'next_transition': 13933}.
<a id="trace-1337"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (events line 1337): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13736}.
<a id="trace-13722"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 13722): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.179493 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 13722. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13736}.
<a id="trace-13723"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 13723): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.179493 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 13723. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13736}.
<a id="trace-13736"></a>
<a id="trace-13827"></a>
<a id="trace-13844"></a>
<a id="trace-13860"></a>
<a id="trace-13889"></a>
<a id="trace-13891"></a>
<a id="trace-13907"></a>
<a id="trace-13909"></a>
<a id="trace-13923"></a>
<a id="trace-13925"></a>
<a id="trace-13994"></a>
<a id="trace-13996"></a>
<a id="trace-14095"></a>
<a id="trace-14097"></a>
<a id="trace-14108"></a>
<a id="trace-14110"></a>
<a id="trace-14126"></a>
<a id="trace-14128"></a>
<a id="trace-14154"></a>
<a id="trace-14156"></a>
<a id="trace-14171"></a>
<a id="trace-14173"></a>
<a id="trace-14188"></a>
<a id="trace-14190"></a>
<a id="trace-14226"></a>
<a id="trace-14228"></a>
<a id="trace-14307"></a>
<a id="trace-14309"></a>
<a id="trace-14320"></a>
<a id="trace-14322"></a>
<a id="trace-14513"></a>
<a id="trace-14515"></a>
<a id="trace-14526"></a>
<a id="trace-14528"></a>
<a id="trace-14551"></a>
<a id="trace-14553"></a>
<a id="trace-14587"></a>
<a id="trace-14589"></a>
<a id="trace-14605"></a>
<a id="trace-14607"></a>
<a id="trace-14628"></a>
<a id="trace-14630"></a>
<a id="trace-14817"></a>
<a id="trace-14819"></a>
<a id="trace-14923"></a>
<a id="trace-14925"></a>
<a id="trace-14947"></a>
<a id="trace-14949"></a>
<a id="trace-14966"></a>
<a id="trace-14968"></a>
<a id="trace-14982"></a>
<a id="trace-14984"></a>
<a id="trace-15000"></a>
<a id="trace-15002"></a>
<a id="trace-15031"></a>
<a id="trace-15033"></a>
<a id="trace-15048"></a>
<a id="trace-15050"></a>
<a id="trace-15058"></a>
<a id="trace-15060"></a>
<a id="trace-15134"></a>
<a id="trace-15136"></a>
<a id="trace-15159"></a>
<a id="trace-15161"></a>
<a id="trace-15175"></a>
<a id="trace-15177"></a>
<a id="trace-15192"></a>
<a id="trace-15194"></a>
<a id="trace-15220"></a>
<a id="trace-15222"></a>
<a id="trace-15235"></a>
<a id="trace-15237"></a>
<a id="trace-15261"></a>
<a id="trace-15347"></a>
<a id="trace-15359"></a>
<a id="trace-15372"></a>
<a id="trace-15374"></a>
<a id="trace-15406"></a>
<a id="trace-15408"></a>
<a id="trace-15424"></a>
<a id="trace-15426"></a>
<a id="trace-15441"></a>
<a id="trace-15443"></a>
<a id="trace-15463"></a>
<a id="trace-15465"></a>
<a id="trace-15472"></a>
<a id="trace-15474"></a>
<a id="trace-15550"></a>
<a id="trace-15552"></a>
<a id="trace-15563"></a>
<a id="trace-15565"></a>
<a id="trace-15579"></a>
<a id="trace-15581"></a>
<a id="trace-15592"></a>
<a id="trace-15594"></a>
<a id="trace-15610"></a>
<a id="trace-15612"></a>
<a id="trace-15639"></a>
<a id="trace-15641"></a>
<a id="trace-15652"></a>
<a id="trace-15654"></a>
<a id="trace-15682"></a>
<a id="trace-15684"></a>
<a id="trace-15761"></a>
<a id="trace-15763"></a>
<a id="trace-15790"></a>
<a id="trace-15792"></a>
<a id="trace-15805"></a>
<a id="trace-15807"></a>
<a id="trace-15823"></a>
<a id="trace-15825"></a>
<a id="trace-15850"></a>
<a id="trace-15852"></a>
<a id="trace-15861"></a>
<a id="trace-15863"></a>
<a id="trace-15904"></a>
<a id="trace-15906"></a>
<a id="trace-15983"></a>
<a id="trace-15985"></a>
<a id="trace-15998"></a>
<a id="trace-16000"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16067"></a>
<a id="trace-16069"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16096"></a>
<a id="trace-16098"></a>
<a id="trace-16113"></a>
<a id="trace-16115"></a>
<a id="trace-16127"></a>
<a id="trace-16129"></a>
<a id="trace-16205"></a>
<a id="trace-16207"></a>
<a id="trace-16223"></a>
<a id="trace-16225"></a>
<a id="trace-16248"></a>
<a id="trace-16250"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16284"></a>
<a id="trace-16286"></a>
<a id="trace-16315"></a>
<a id="trace-16317"></a>
<a id="trace-16328"></a>
<a id="trace-16330"></a>
<a id="trace-16348"></a>
<a id="trace-16350"></a>
<a id="trace-16359"></a>
<a id="trace-16361"></a>
<a id="trace-16436"></a>
<a id="trace-16438"></a>
<a id="trace-16447"></a>
<a id="trace-16449"></a>
<a id="trace-16467"></a>
<a id="trace-16469"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
<a id="trace-16518"></a>
<a id="trace-16520"></a>
<a id="trace-16542"></a>
<a id="trace-16544"></a>
<a id="trace-16574"></a>
<a id="trace-16576"></a>
<a id="trace-16664"></a>
<a id="trace-16666"></a>
<a id="trace-16678"></a>
<a id="trace-16680"></a>
<a id="trace-16719"></a>
<a id="trace-16721"></a>
<a id="trace-16735"></a>
<a id="trace-16737"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16769"></a>
<a id="trace-16771"></a>
<a id="trace-16803"></a>
<a id="trace-16805"></a>
<a id="trace-16883"></a>
<a id="trace-16885"></a>
<a id="trace-16902"></a>
<a id="trace-16904"></a>
- 109.75s–170.80s (×183), actor 5, squad 0 (trace 13736): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.45s, trace 13723. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13827}.
<a id="trace-13933"></a>
- 114.00s–114.00s (×1), actor 8, squad 1 (trace 13933): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 13748. Next observer evidence: {'until': 120.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 12.853101119955836, 'next_transition': 14330}.
<a id="trace-14330"></a>
- 120.90s–120.90s (×1), actor 8, squad 1 (trace 14330): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 14239. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.171701259128744, 'next_transition': 14637}.
<a id="trace-14331"></a>
- 120.90s–120.90s (×1), actor 8, squad 1 (trace 14331): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 120.00s, trace 14239. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.171701259128744, 'next_transition': 14637}.
<a id="trace-14637"></a>
- 124.25s–124.25s (×1), actor 8, squad 1 (trace 14637): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 120.00s, trace 14239. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 1, 'mean_displacement': 20.63308544531807, 'next_transition': 1457}.
<a id="trace-14638"></a>
- 124.25s–124.25s (×1), actor 8, squad 1 (trace 14638): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 14239. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 1, 'mean_displacement': 20.63308544531807, 'next_transition': 1457}.
<a id="trace-1457"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (events line 1457): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15381"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 15381): renew committed intent (75 s lifetime). Knowledge: actor memory at 137.10s, trace 15381. Next observer evidence: {'until': 138.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7623496901029088, 'next_transition': 15435}.
<a id="trace-15435"></a>
- 138.50s–138.50s (×1), actor 9, squad 1 (trace 15435): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 15272. Next observer evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15629}.
<a id="trace-15436"></a>
- 138.50s–138.50s (×1), actor 9, squad 1 (trace 15436): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 15272. Next observer evidence: {'until': 143, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15629}.
<a id="trace-15629"></a>
- 143.00s–143.00s (×1), actor 9, squad 1 (trace 15629): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 140.00s, trace 15486. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16007}.
<a id="trace-16007"></a>
- 150.90s–150.90s (×1), actor 9, squad 1 (trace 16007): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 150.00s, trace 15915. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2241}.
<a id="trace-16909"></a>
- 170.90s–170.90s (×1), actor 4, squad 0 (trace 16909): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 16815. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331310657944665, 'next_transition': 17041}.
<a id="trace-16910"></a>
- 170.90s–170.90s (×1), actor 4, squad 0 (trace 16910): MoveTactically. Knowledge: actor memory at 170.00s, trace 16815. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331310657944665, 'next_transition': 17041}.
<a id="trace-16911"></a>
- 170.90s–170.90s (×1), actor 4, squad 0 (trace 16911): traveling. Knowledge: actor memory at 170.00s, trace 16815. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331310657944665, 'next_transition': 17041}.
<a id="trace-16912"></a>
- 170.90s–170.90s (×1), actor 4, squad 0 (trace 16912): . Knowledge: actor memory at 170.00s, trace 16815. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331310657944665, 'next_transition': 17041}.
<a id="trace-17041"></a>
<a id="trace-17043"></a>
<a id="trace-17069"></a>
<a id="trace-17071"></a>
<a id="trace-17091"></a>
<a id="trace-17093"></a>
<a id="trace-17113"></a>
<a id="trace-17115"></a>
<a id="trace-17149"></a>
<a id="trace-17151"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17244"></a>
<a id="trace-17246"></a>
<a id="trace-17258"></a>
<a id="trace-17260"></a>
<a id="trace-17290"></a>
<a id="trace-17292"></a>
<a id="trace-17314"></a>
<a id="trace-17316"></a>
<a id="trace-17356"></a>
<a id="trace-17358"></a>
<a id="trace-17380"></a>
<a id="trace-17382"></a>
- 171.80s–178.30s (×24), actor 5, squad 0 (trace 17041): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 16816. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724834551716228, 'next_transition': 17069}.
<a id="trace-1869"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 1869): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.519991058371799, 'next_transition': 17414}.
<a id="trace-17391"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 17391): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 17391. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.519991058371799, 'next_transition': 17414}.
<a id="trace-17414"></a>
<a id="trace-17416"></a>
<a id="trace-17428"></a>
<a id="trace-17430"></a>
<a id="trace-17507"></a>
<a id="trace-17509"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17553"></a>
<a id="trace-17555"></a>
<a id="trace-17569"></a>
<a id="trace-17571"></a>
<a id="trace-17598"></a>
<a id="trace-17600"></a>
<a id="trace-17622"></a>
<a id="trace-17624"></a>
<a id="trace-17646"></a>
<a id="trace-17648"></a>
<a id="trace-17657"></a>
<a id="trace-17659"></a>
- 179.30s–183.80s (×20), actor 5, squad 0 (trace 17414): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 17391. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900008322325972, 'next_transition': 17428}.
<a id="trace-17674"></a>
- 184.20s–184.20s (×1), actor 4, squad 0 (trace 17674): matching received arrivals: deployment leg complete. Knowledge: actor memory at 180.00s, trace 17435. Next observer evidence: None.
<a id="trace-17688"></a>
<a id="trace-17690"></a>
<a id="trace-17708"></a>
<a id="trace-17710"></a>
- 184.30s–184.80s (×4), actor 5, squad 0 (trace 17688): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 17436. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945000124347608, 'next_transition': 17708}.
<a id="trace-17778"></a>
- 185.20s–185.20s (×1), actor 4, squad 0 (trace 17778): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 17717. Next observer evidence: None.
<a id="trace-17781"></a>
- 185.20s–185.20s (×1), actor 4, squad 0 (trace 17781): MoveTactically. Knowledge: actor memory at 185.00s, trace 17717. Next observer evidence: None.
<a id="trace-17782"></a>
- 185.20s–185.20s (×1), actor 4, squad 0 (trace 17782): traveling overwatch. Knowledge: actor memory at 185.00s, trace 17717. Next observer evidence: None.
<a id="trace-17783"></a>
- 185.20s–185.20s (×1), actor 4, squad 0 (trace 17783): Reorganise complete. Knowledge: actor memory at 185.00s, trace 17717. Next observer evidence: None.
<a id="trace-18007"></a>
<a id="trace-18009"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18048"></a>
<a id="trace-18050"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18087"></a>
<a id="trace-18089"></a>
<a id="trace-18132"></a>
<a id="trace-18134"></a>
<a id="trace-18158"></a>
<a id="trace-18160"></a>
<a id="trace-18185"></a>
<a id="trace-18187"></a>
<a id="trace-18203"></a>
<a id="trace-18205"></a>
<a id="trace-18283"></a>
<a id="trace-18285"></a>
<a id="trace-18297"></a>
<a id="trace-18299"></a>
- 185.30s–190.80s (×22), actor 5, squad 0 (trace 18007): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 17718. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1418782360605364, 'next_transition': 18026}.
<a id="trace-18308"></a>
- 191.05s–191.05s (×1), actor 4, squad 0 (trace 18308): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 18215. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2943542118723753, 'next_transition': 18580}.
<a id="trace-18309"></a>
- 191.05s–191.05s (×1), actor 4, squad 0 (trace 18309): bounding overwatch. Knowledge: actor memory at 190.00s, trace 18215. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2943542118723753, 'next_transition': 18580}.
<a id="trace-18310"></a>
- 191.05s–191.05s (×1), actor 4, squad 0 (trace 18310): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 18215. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2943542118723753, 'next_transition': 18580}.
<a id="trace-18580"></a>
<a id="trace-18582"></a>
- 191.30s–191.30s (×2), actor 5, squad 0 (trace 18580): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 18216. Next observer evidence: {'until': 191.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27322789169512807, 'next_transition': 18596}.
<a id="trace-18596"></a>
- 191.55s–191.55s (×1), actor 4, squad 0 (trace 18596): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 18215. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34163626539712955, 'next_transition': 18870}.
<a id="trace-18870"></a>
<a id="trace-18872"></a>
- 191.80s–191.80s (×2), actor 5, squad 0 (trace 18870): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 18216. Next observer evidence: {'until': 192, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22255828696051239, 'next_transition': 18882}.
<a id="trace-18882"></a>
- 192.15s–192.15s (×1), actor 4, squad 0 (trace 18882): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 18215. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2212158807550217, 'next_transition': 19157}.
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19205"></a>
<a id="trace-19207"></a>
<a id="trace-19231"></a>
<a id="trace-19233"></a>
<a id="trace-19254"></a>
<a id="trace-19256"></a>
<a id="trace-19281"></a>
<a id="trace-19283"></a>
<a id="trace-19363"></a>
<a id="trace-19365"></a>
<a id="trace-19376"></a>
<a id="trace-19378"></a>
- 192.30s–195.80s (×16), actor 5, squad 0 (trace 19157): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 18216. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4323366419099859, 'next_transition': 19179}.
<a id="trace-19388"></a>
- 195.95s–195.95s (×1), actor 4, squad 0 (trace 19388): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 195.00s, trace 19291. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3384991456776628, 'next_transition': 19666}.
<a id="trace-19389"></a>
- 195.95s–195.95s (×1), actor 4, squad 0 (trace 19389): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 19291. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3384991456776628, 'next_transition': 19666}.
<a id="trace-19666"></a>
<a id="trace-19668"></a>
<a id="trace-19690"></a>
<a id="trace-19692"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19761"></a>
<a id="trace-19763"></a>
<a id="trace-19781"></a>
<a id="trace-19783"></a>
<a id="trace-19794"></a>
<a id="trace-19796"></a>
<a id="trace-19893"></a>
<a id="trace-19895"></a>
<a id="trace-19914"></a>
<a id="trace-19916"></a>
<a id="trace-19929"></a>
<a id="trace-19931"></a>
<a id="trace-19951"></a>
<a id="trace-19953"></a>
<a id="trace-19965"></a>
<a id="trace-19967"></a>
<a id="trace-19988"></a>
<a id="trace-19990"></a>
<a id="trace-20010"></a>
<a id="trace-20012"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
- 196.30s–204.80s (×28), actor 5, squad 0 (trace 19666): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 19292. Next observer evidence: {'until': 196.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6385252056041743, 'next_transition': 19690}.
<a id="trace-20057"></a>
- 204.95s–204.95s (×1), actor 7, squad 0 (trace 20057): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 200.00s, trace 19810. Next observer evidence: {'until': 205, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4973621682311016, 'next_transition': 20080}.
<a id="trace-20058"></a>
- 204.95s–204.95s (×1), actor 7, squad 0 (trace 20058): NeedSupport. Knowledge: actor memory at 200.00s, trace 19810. Next observer evidence: {'until': 205, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4973621682311016, 'next_transition': 20080}.
<a id="trace-20080"></a>
- 205.00s–205.00s (×1), actor 7, squad 0 (trace 20080): Reorganise: completed/failed drill. Knowledge: actor memory at 205.00s, trace 20062. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49812618072377884, 'next_transition': 20272}.
<a id="trace-20082"></a>
- 205.00s–205.00s (×1), actor 7, squad 0 (trace 20082): ReactToContact: cover and return fire. Knowledge: actor memory at 205.00s, trace 20062. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49812618072377884, 'next_transition': 20272}.
<a id="trace-20083"></a>
- 205.00s–205.00s (×1), actor 7, squad 0 (trace 20083): Reorganise complete: known contact. Knowledge: actor memory at 205.00s, trace 20062. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49812618072377884, 'next_transition': 20272}.
<a id="trace-20272"></a>
<a id="trace-20274"></a>
<a id="trace-20289"></a>
<a id="trace-20291"></a>
<a id="trace-20319"></a>
<a id="trace-20321"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20353"></a>
<a id="trace-20355"></a>
<a id="trace-20367"></a>
<a id="trace-20369"></a>
<a id="trace-20393"></a>
- 205.30s–208.30s (×13), actor 5, squad 0 (trace 20272): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 20060. Next observer evidence: {'until': 205.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2041290941132397, 'next_transition': 20289}.
<a id="trace-2241"></a>
- 206.15s–206.15s (×1), actor 5, squad 1 (events line 2241): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20310"></a>
- 206.15s–206.15s (×1), actor 5, squad 1 (trace 20310): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.15s, trace 20310. Next observer evidence: {'until': 211, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20679}.
<a id="trace-20400"></a>
- 208.35s–208.35s (×1), actor 7, squad 0 (trace 20400): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 205.00s, trace 20062. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.15685148835364, 'next_transition': 20570}.
<a id="trace-20401"></a>
- 208.35s–208.35s (×1), actor 7, squad 0 (trace 20401): rearward bound: one stationary suppressing element. Knowledge: actor memory at 205.00s, trace 20062. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.15685148835364, 'next_transition': 20570}.
<a id="trace-20570"></a>
<a id="trace-20662"></a>
<a id="trace-20672"></a>
- 209.30s–210.80s (×3), actor 5, squad 0 (trace 20570): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.15s, trace 20310. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.32555126197946566, 'next_transition': 20662}.
<a id="trace-20679"></a>
- 211.10s–211.10s (×1), actor 9, squad 1 (trace 20679): MoveTactically. Knowledge: actor memory at 210.00s, trace 20601. Next observer evidence: None.
<a id="trace-20680"></a>
- 211.10s–211.10s (×1), actor 9, squad 1 (trace 20680): received platoon directive. Knowledge: actor memory at 210.00s, trace 20601. Next observer evidence: None.
<a id="trace-20684"></a>
- 211.15s–211.15s (×1), actor 9, squad 1 (trace 20684): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 210.00s, trace 20601. Next observer evidence: {'until': 241, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2786}.
<a id="trace-20685"></a>
- 211.25s–211.25s (×1), actor 5, squad 0 (trace 20685): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 211.25s, trace 20685. Next observer evidence: None.
<a id="trace-20692"></a>
<a id="trace-20704"></a>
<a id="trace-20719"></a>
<a id="trace-20746"></a>
<a id="trace-20838"></a>
<a id="trace-20858"></a>
<a id="trace-20880"></a>
<a id="trace-20901"></a>
<a id="trace-20920"></a>
<a id="trace-20994"></a>
<a id="trace-21014"></a>
<a id="trace-21038"></a>
<a id="trace-21059"></a>
<a id="trace-21073"></a>
<a id="trace-21145"></a>
<a id="trace-21168"></a>
<a id="trace-21214"></a>
<a id="trace-21236"></a>
<a id="trace-21362"></a>
<a id="trace-21385"></a>
<a id="trace-21412"></a>
<a id="trace-21501"></a>
<a id="trace-21522"></a>
<a id="trace-21574"></a>
<a id="trace-21593"></a>
<a id="trace-21673"></a>
<a id="trace-21704"></a>
<a id="trace-21737"></a>
<a id="trace-21761"></a>
<a id="trace-21783"></a>
<a id="trace-21863"></a>
<a id="trace-21885"></a>
<a id="trace-21969"></a>
<a id="trace-22050"></a>
<a id="trace-22071"></a>
<a id="trace-22123"></a>
<a id="trace-22147"></a>
<a id="trace-22232"></a>
<a id="trace-22259"></a>
<a id="trace-22284"></a>
<a id="trace-22312"></a>
<a id="trace-22333"></a>
<a id="trace-22412"></a>
<a id="trace-22440"></a>
<a id="trace-22469"></a>
<a id="trace-22501"></a>
<a id="trace-22521"></a>
<a id="trace-22603"></a>
<a id="trace-22625"></a>
<a id="trace-22703"></a>
<a id="trace-22787"></a>
<a id="trace-22815"></a>
<a id="trace-22837"></a>
<a id="trace-22862"></a>
<a id="trace-22891"></a>
<a id="trace-22971"></a>
<a id="trace-22996"></a>
<a id="trace-23027"></a>
<a id="trace-23179"></a>
<a id="trace-23201"></a>
<a id="trace-23233"></a>
<a id="trace-23261"></a>
<a id="trace-23342"></a>
<a id="trace-23366"></a>
<a id="trace-23391"></a>
<a id="trace-23416"></a>
<a id="trace-23441"></a>
<a id="trace-23521"></a>
<a id="trace-23552"></a>
<a id="trace-23577"></a>
<a id="trace-23627"></a>
<a id="trace-23731"></a>
<a id="trace-23756"></a>
<a id="trace-23811"></a>
<a id="trace-23892"></a>
<a id="trace-23918"></a>
<a id="trace-23939"></a>
<a id="trace-23994"></a>
<a id="trace-24079"></a>
<a id="trace-24101"></a>
<a id="trace-24132"></a>
<a id="trace-24177"></a>
<a id="trace-24283"></a>
<a id="trace-24313"></a>
<a id="trace-24343"></a>
<a id="trace-24504"></a>
<a id="trace-24726"></a>
<a id="trace-24774"></a>
<a id="trace-24802"></a>
<a id="trace-24962"></a>
<a id="trace-25065"></a>
<a id="trace-25092"></a>
<a id="trace-25148"></a>
<a id="trace-25174"></a>
<a id="trace-25271"></a>
<a id="trace-25303"></a>
<a id="trace-25327"></a>
<a id="trace-25351"></a>
<a id="trace-25442"></a>
<a id="trace-25463"></a>
<a id="trace-25486"></a>
<a id="trace-25515"></a>
<a id="trace-25539"></a>
<a id="trace-25645"></a>
<a id="trace-25698"></a>
<a id="trace-25722"></a>
<a id="trace-25803"></a>
<a id="trace-25828"></a>
<a id="trace-25855"></a>
<a id="trace-25910"></a>
<a id="trace-26010"></a>
<a id="trace-26039"></a>
<a id="trace-26065"></a>
- 211.30s–358.30s (×113), actor 5, squad 0 (trace 20692): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 211.25s, trace 20685. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5522017495671305, 'next_transition': 20704}.
<a id="trace-2786"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (events line 2786): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22924"></a>
- 275.20s–275.20s (×1), actor 5, squad 1 (trace 22924): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.20s, trace 22924. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24360}.
<a id="trace-24360"></a>
- 313.85s–313.85s (×1), actor 9, squad 1 (trace 24360): traveling. Knowledge: actor memory at 310.00s, trace 24199. Next observer evidence: {'until': 316.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.717433340172107, 'next_transition': 3213}.
<a id="trace-24361"></a>
- 313.85s–313.85s (×1), actor 9, squad 1 (trace 24361): current contact unknown for 10 s. Knowledge: actor memory at 310.00s, trace 24199. Next observer evidence: {'until': 316.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.717433340172107, 'next_transition': 3213}.
<a id="trace-3213"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (events line 3213): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24540"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (trace 24540): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 24540. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.282515824218992, 'next_transition': 24708}.
<a id="trace-24541"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (trace 24541): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 24541. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.282515824218992, 'next_transition': 24708}.
<a id="trace-24708"></a>
- 320.30s–320.30s (×1), actor 9, squad 1 (trace 24708): traveling overwatch. Knowledge: actor memory at 320.00s, trace 24643. Next observer evidence: {'until': 321.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24735}.
<a id="trace-24709"></a>
- 320.30s–320.30s (×1), actor 9, squad 1 (trace 24709): matching received arrivals: traveling stage complete. Knowledge: actor memory at 320.00s, trace 24643. Next observer evidence: {'until': 321.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24735}.
<a id="trace-24735"></a>
- 321.55s–321.55s (×1), actor 9, squad 1 (trace 24735): received platoon directive. Knowledge: actor memory at 320.00s, trace 24643. Next observer evidence: {'until': 351.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

201 matched order/radio deliveries; 319 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.405s; maximum 6.600s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2870: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2878: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2880: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2881: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2882: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2883: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2884: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2885: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2886: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2888: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2889: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3775: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3777: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3779: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3780: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3781: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3782: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3783: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3784: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3785: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3786: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3787: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3788: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6343: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6344: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6346: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6348: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6349: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6350: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6351: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6352: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6353: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6354: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6355: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6356: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6357: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6841: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6842: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6844: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6846: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6847: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6848: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6849: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6850: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6851: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6852: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6853: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6854: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6855: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7441: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7443: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7444: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7446: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7448: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7449: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7450: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7451: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7452: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7453: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7454: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7455: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7456: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7457: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 7522: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 7523: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7828: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7830: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7831: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7833: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7835: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7836: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7837: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7838: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7839: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7840: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7841: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7842: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7843: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7844: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8091: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8093: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8094: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 8096: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8098: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8099: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8100: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8101: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8102: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8103: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8104: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8105: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8106: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8107: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8333: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8335: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8336: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 8338: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8340: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8341: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8342: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8343: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8344: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8345: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8346: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8347: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8348: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8349: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8587: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8589: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8590: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 8592: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8594: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8595: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8596: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8597: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8598: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8599: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8600: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8601: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8602: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8603: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8993: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8995: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8996: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 8998: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9000: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9001: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9002: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9003: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9004: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9005: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9006: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9007: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9008: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9009: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 9177: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 9178: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9256: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9258: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9259: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 9261: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9263: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9264: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9265: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9266: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9267: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9268: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9269: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9270: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9271: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9272: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9727: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9729: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9730: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 9732: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9734: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9735: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9736: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9737: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9738: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9739: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9740: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9741: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9742: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9743: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10015: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10017: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10018: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 10020: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 10021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10022: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10023: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10024: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10025: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10026: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10027: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10028: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10029: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10030: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10031: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10356: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10358: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10359: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 10361: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 10362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10363: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10364: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10365: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10366: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10367: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10368: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10369: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10370: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10371: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10372: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10786: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10788: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10789: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 10791: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 10792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10793: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10794: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10795: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10796: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10797: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10798: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10799: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10800: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10801: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10802: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11151: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11153: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11154: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 11156: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 11157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11158: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11159: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11160: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11161: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11162: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11163: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11164: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11165: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 11166: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 11167: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 11245: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 11246: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11490: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11492: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 11493: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 11494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 11495: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 11496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 11497: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 11498: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 11499: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 11500: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 11501: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 11502: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 11503: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 11504: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 11505: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 11506: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 13391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 13392: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 13393: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 13394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 13395: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 13396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 13397: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 13398: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 13399: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 13400: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 13401: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 13402: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 13403: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 13404: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 13405: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 13406: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 13722: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 13723: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 13744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 13745: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 13746: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 13747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 13748: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 13749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 13750: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 13751: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 13752: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 13753: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 13754: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 13755: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 13756: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 13757: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 13758: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 13759: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 14021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 14022: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 14023: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 14024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 14025: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 14026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 14027: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 14028: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 14029: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 14030: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 14031: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 14032: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 14033: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 14034: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 14035: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 14036: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14236: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14237: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 14239: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 14241: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 14242: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 14243: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 14244: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 14245: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14246: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14247: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 14248: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 14249: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 14250: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 14831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 14832: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 14833: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 14834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 14835: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 14836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 14837: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 14838: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 14839: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 14840: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 14841: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 14842: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 14843: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 14844: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 14845: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 14846: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15066: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15067: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 15068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 15069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15070: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15071: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 15072: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15073: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15074: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15075: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15076: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15077: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 15078: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 15079: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 15268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15269: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15270: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 15271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 15272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15273: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15274: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 15275: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15276: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15277: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15278: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15279: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15280: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 15281: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 15282: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 15381: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15483: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15484: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 15485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 15486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15487: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15488: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 15489: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15490: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15491: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15492: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15493: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15494: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 15495: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 15496: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15692: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15693: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 15694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 15695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15696: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15697: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 15698: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15699: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15700: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15701: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15702: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15703: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 15704: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 15705: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 15911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15912: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15913: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 15914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 15915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 15916: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 15917: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 15918: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15919: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15920: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15921: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15922: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15923: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 15924: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15925: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16137: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16138: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 16139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 16140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16141: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16142: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 16143: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16144: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16145: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16146: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16147: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16148: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 16149: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 16150: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16369: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16370: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 16371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 16372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16373: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16374: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 16375: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16376: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16377: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16378: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16379: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16380: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 16381: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 16382: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16595: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16596: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16599: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16600: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16601: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16602: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16603: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16604: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16605: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16606: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16607: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16608: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 16815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16816: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 16817: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 16818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 16819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16820: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16821: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 16822: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16823: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16824: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16825: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16826: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16827: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 16828: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 16829: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17174: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17175: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17178: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17179: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17180: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17181: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17182: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17183: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17184: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17185: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17186: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17187: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 17391: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17436: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17437: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17440: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17441: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17442: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17443: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17444: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17445: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17446: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17447: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17448: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17449: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 17717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17718: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 17719: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 17720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 17721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 17722: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 17723: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 17724: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 17725: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17726: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17727: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17728: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17729: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 17730: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 17731: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18216: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18217: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 18218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18220: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18221: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18222: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18223: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18224: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18225: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18226: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18227: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18228: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18229: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19291: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19292: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 19293: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 19294: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19296: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19297: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19298: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19299: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19300: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19301: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19302: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19303: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19304: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19305: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19807: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19808: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19809: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 19810: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19812: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19813: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19814: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19815: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19816: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19817: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19818: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19819: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19820: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19821: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20060: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20061: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 20062: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20064: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20065: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 20066: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20067: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 20068: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20069: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20070: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20071: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20072: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20073: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.15s leader 5, trace 20310: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 20599: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 20600: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20601: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20602: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 20603: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 20604: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 20605: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 20606: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 20607: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 20608: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 20609: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 20610: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20611: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 211.25s leader 5, trace 20685: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 20781: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20782: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 20783: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 20784: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 20785: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 20786: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 20787: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 20788: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 20789: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 20790: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 20791: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20792: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 20937: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20938: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20939: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20940: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20941: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20942: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20943: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20944: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20945: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20946: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20947: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20948: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 21086: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 21087: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 21088: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 21089: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 21090: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 21091: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 21092: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 21093: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 21094: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 21095: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 21096: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 21097: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 21253: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21254: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 21255: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 21256: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 21257: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 21258: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 21259: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 21260: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 21261: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 21262: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 21263: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21264: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 21441: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 21442: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 21443: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21444: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 21445: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21446: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 21447: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21448: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21449: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 21450: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21451: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21452: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 21612: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21613: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21614: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21615: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 21616: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21617: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 21618: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21619: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21620: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21621: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21622: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21623: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 21804: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21805: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21806: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21807: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21808: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21809: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21810: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21811: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21812: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21813: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21814: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21815: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21991: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21992: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21993: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21994: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21995: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21996: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21997: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21998: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21999: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 22000: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 22001: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 22002: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 22170: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 22171: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 22172: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 22173: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 22174: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 22175: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 22176: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 22177: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 22178: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 22179: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 22180: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 22181: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 22353: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 22354: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 22355: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 22356: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 22357: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 22358: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 22359: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 22360: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 22361: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 22362: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 22363: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 22364: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 22544: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 22545: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 22546: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 22547: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 22548: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 22549: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 22550: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 22551: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 22552: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 22553: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 22554: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 22555: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 22726: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 22727: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22728: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22729: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22730: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22731: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22732: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22733: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22734: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22735: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22736: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22737: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 22910: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 22911: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22912: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22913: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22914: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22915: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22916: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22917: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22918: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22919: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22920: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22921: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 22924: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 23094: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 23095: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 23096: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 23097: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 23098: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 23099: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 23100: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 23101: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 23102: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 23103: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 23104: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 23105: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 23282: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 23283: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 23284: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 23285: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 23286: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 23287: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 23288: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 23289: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 23290: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 23291: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 23292: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 23293: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 23461: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 23462: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 23463: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 23464: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 23465: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 23466: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 23467: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 23468: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 23469: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 23470: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 23471: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 23472: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 23647: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 23648: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23649: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 23650: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 23651: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23652: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 23653: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23654: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23655: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23656: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23657: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23658: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 23829: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 23830: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23831: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23832: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 23833: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23834: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23835: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23836: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23837: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23838: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23839: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23840: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 24018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 24019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 24020: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 24021: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 24022: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 24023: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 24024: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 24025: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 24026: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 24027: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 24028: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 24029: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 24198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 24199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 24200: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 24201: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 24202: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 24203: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 24204: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 24205: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 24206: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 24207: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 24208: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 24209: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 24441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 24442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 24443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 24444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 24445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 24446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 24447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 24448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 24449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 24450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 24451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 24452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 24540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 24541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 24642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 24643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 24648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 24824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 24825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 24827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 24828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 24830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 25001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 25002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 25003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 25004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 25005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 25006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 25007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 25008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 25009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 25010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 25011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 25012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 25191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 25192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 25193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 25194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 25195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 25196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 25197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 25198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 25199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 25200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 25201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 25202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 25376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 25377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 25378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 25379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 25380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 25381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 25382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 25383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 25384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 25385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 25386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 25387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 25557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 25558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 25559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 25560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 25561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 25562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 25563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 25564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 25565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 25566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 25567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 25568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 25744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 25745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 25746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 25747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 25748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 25749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 25750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 25751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 25753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 25930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 25931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 26109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 26110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 26111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 26112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 26113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 26114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 26115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 26116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 26117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 26118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 26119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 26120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Ash killed in action
- 1: Soren incapacitated
- 1: Rook killed in action
- 1: Bren incapacitated
- 1: Tern killed in action
- 1: Reed killed in action
- 1: Moss incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
