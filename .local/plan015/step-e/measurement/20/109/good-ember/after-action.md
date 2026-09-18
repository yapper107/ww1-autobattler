# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/20/109/good-ember/battle-109-1789674113251928114`

## Battle summary

**Ember** · 360 s · 402 shots.

### Turning points

- 16.7s, squad 1: contact (events line 188). First recorded contact.
- 20.3s, squad 1: withdrawal ([trace 4026](#trace-4026)). 69.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.6s, squad 1: help call ([trace 9380](#trace-9380)). No completion observed before termination.
- 39.1s, squad 0: help call ([trace 9412](#trace-9412)). No completion observed before termination.
- 61.9s, squad 0: withdrawal ([trace 13885](#trace-13885)). 117.8s, squad 0: took cover and returned fire.
- 99.3s, squad 1: assault ([trace 17106](#trace-17106)). 141.6s, squad 1: reported a blocked assault and resumed closure.
- 117.7s, squad 0: help call ([trace 18109](#trace-18109)). No completion observed before termination.
- 121.1s, squad 0: withdrawal ([trace 18415](#trace-18415)). No completion observed before termination.
- 203.4s, squad 1: withdrawal ([trace 21868](#trace-21868)). 249.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 222.5s, squad 1: help call ([trace 23301](#trace-23301)). No completion observed before termination.
- 2 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 67 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, committed a covered flank assault and 2 further drill types; withdrew; 5 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 283 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 47 shots, 0/2 lost.

### Decisions and attribution

At 318.9s, squad 1 chose broke contact ([trace 26615](#trace-26615)), followed by 0 shots and 1 own casualties; estimate 9.5 against 0 distinct squad-reported contacts; At 135.6s, squad 0 chose renewed the existing objective ([trace 19044](#trace-19044)), followed by 1 shots and 0 own casualties; estimate 10.6 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1314](#trace-1314)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5712808550833854, 'next_transition': 1339}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1316](#trace-1316)). Following evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.051825341088968, 'next_transition': 1952}.

### Communication

230 matched deliveries (mean 0.69s, max 5.45s); 268 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 16.70s, squad 1, contact, evidence events line 188: First recorded contact; .
- 20.30s, squad 1, withdrawal, evidence 4026: BreakContact: believed ratio at least two without superiority; 69.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.60s, squad 1, help call, evidence 9380: NeedSupport; No completion observed before termination.
- 39.10s, squad 0, help call, evidence 9412: NeedSupport; No completion observed before termination.
- 61.85s, squad 0, withdrawal, evidence 13885: BreakContact: believed ratio at least two without superiority; 117.8s, squad 0: took cover and returned fire.
- 99.35s, squad 1, assault, evidence 17106: radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map; 141.6s, squad 1: reported a blocked assault and resumed closure.
- 117.70s, squad 0, help call, evidence 18109: NeedSupport; No completion observed before termination.
- 121.10s, squad 0, withdrawal, evidence 18415: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 203.40s, squad 1, withdrawal, evidence 21868: BreakContact: believed ratio at least two without superiority; 249.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 222.50s, squad 1, help call, evidence 23301: NeedSupport; No completion observed before termination.
- 318.90s, squad 1, withdrawal, evidence 26615: BreakContact: believed ratio at least two without superiority; 350.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 330.55s, squad 1, help call, evidence 27180: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.09136725106695, 'next_transition': 814}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.09136725106695, 'next_transition': 814}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.09136725106695, 'next_transition': 814}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1154}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1154}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1154}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-642"></a>
<a id="trace-644"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-684"></a>
<a id="trace-686"></a>
<a id="trace-706"></a>
<a id="trace-708"></a>
<a id="trace-734"></a>
<a id="trace-736"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-910"></a>
<a id="trace-912"></a>
<a id="trace-931"></a>
<a id="trace-933"></a>
<a id="trace-961"></a>
<a id="trace-963"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1019"></a>
<a id="trace-1021"></a>
<a id="trace-1044"></a>
<a id="trace-1046"></a>
<a id="trace-1061"></a>
<a id="trace-1063"></a>
<a id="trace-1150"></a>
<a id="trace-1152"></a>
<a id="trace-1288"></a>
<a id="trace-1290"></a>
<a id="trace-1310"></a>
<a id="trace-1312"></a>
<a id="trace-1343"></a>
<a id="trace-1345"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1690"></a>
<a id="trace-1692"></a>
<a id="trace-1713"></a>
<a id="trace-1715"></a>
<a id="trace-1751"></a>
<a id="trace-1753"></a>
<a id="trace-1771"></a>
<a id="trace-1773"></a>
<a id="trace-1854"></a>
<a id="trace-1856"></a>
<a id="trace-1896"></a>
<a id="trace-1898"></a>
<a id="trace-1927"></a>
<a id="trace-1929"></a>
<a id="trace-2147"></a>
<a id="trace-2149"></a>
<a id="trace-3014"></a>
<a id="trace-3016"></a>
<a id="trace-3061"></a>
<a id="trace-3063"></a>
<a id="trace-3431"></a>
<a id="trace-3433"></a>
<a id="trace-3781"></a>
<a id="trace-3783"></a>
<a id="trace-3858"></a>
<a id="trace-3860"></a>
<a id="trace-3926"></a>
<a id="trace-3928"></a>
<a id="trace-4022"></a>
<a id="trace-4024"></a>
<a id="trace-4220"></a>
<a id="trace-4222"></a>
<a id="trace-4264"></a>
<a id="trace-4266"></a>
<a id="trace-4313"></a>
<a id="trace-4315"></a>
<a id="trace-4342"></a>
<a id="trace-4344"></a>
<a id="trace-4368"></a>
<a id="trace-4370"></a>
<a id="trace-4393"></a>
<a id="trace-4395"></a>
<a id="trace-4409"></a>
<a id="trace-4411"></a>
<a id="trace-4765"></a>
<a id="trace-4767"></a>
<a id="trace-4794"></a>
<a id="trace-4796"></a>
<a id="trace-4896"></a>
<a id="trace-4898"></a>
<a id="trace-4918"></a>
<a id="trace-4920"></a>
<a id="trace-4945"></a>
<a id="trace-4947"></a>
<a id="trace-4982"></a>
<a id="trace-4984"></a>
<a id="trace-5012"></a>
<a id="trace-5014"></a>
<a id="trace-5041"></a>
<a id="trace-5043"></a>
<a id="trace-5067"></a>
<a id="trace-5069"></a>
<a id="trace-5093"></a>
<a id="trace-5095"></a>
<a id="trace-5117"></a>
<a id="trace-5119"></a>
<a id="trace-5142"></a>
<a id="trace-5144"></a>
<a id="trace-5243"></a>
<a id="trace-5245"></a>
<a id="trace-5267"></a>
<a id="trace-5269"></a>
<a id="trace-5639"></a>
<a id="trace-5641"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
<a id="trace-6045"></a>
<a id="trace-6047"></a>
<a id="trace-6092"></a>
<a id="trace-6094"></a>
<a id="trace-6115"></a>
<a id="trace-6117"></a>
<a id="trace-6154"></a>
<a id="trace-6156"></a>
<a id="trace-6199"></a>
<a id="trace-6201"></a>
<a id="trace-6238"></a>
<a id="trace-6240"></a>
<a id="trace-6348"></a>
<a id="trace-6350"></a>
<a id="trace-6429"></a>
<a id="trace-6431"></a>
<a id="trace-9250"></a>
<a id="trace-9252"></a>
<a id="trace-9277"></a>
<a id="trace-9279"></a>
<a id="trace-9315"></a>
<a id="trace-9317"></a>
<a id="trace-9328"></a>
<a id="trace-9330"></a>
<a id="trace-9360"></a>
<a id="trace-9362"></a>
<a id="trace-9392"></a>
<a id="trace-9394"></a>
<a id="trace-9430"></a>
<a id="trace-9432"></a>
<a id="trace-9467"></a>
<a id="trace-9469"></a>
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9610"></a>
<a id="trace-9612"></a>
<a id="trace-10052"></a>
<a id="trace-10054"></a>
<a id="trace-10093"></a>
<a id="trace-10095"></a>
<a id="trace-10165"></a>
<a id="trace-10167"></a>
<a id="trace-10240"></a>
<a id="trace-10242"></a>
<a id="trace-10288"></a>
<a id="trace-10290"></a>
<a id="trace-10332"></a>
<a id="trace-10334"></a>
<a id="trace-10391"></a>
<a id="trace-10393"></a>
<a id="trace-10432"></a>
<a id="trace-10434"></a>
<a id="trace-10518"></a>
<a id="trace-10520"></a>
<a id="trace-10540"></a>
<a id="trace-10542"></a>
<a id="trace-10573"></a>
<a id="trace-10575"></a>
<a id="trace-10590"></a>
<a id="trace-10592"></a>
<a id="trace-10611"></a>
<a id="trace-10613"></a>
<a id="trace-10628"></a>
<a id="trace-10630"></a>
<a id="trace-10652"></a>
<a id="trace-10654"></a>
<a id="trace-12648"></a>
<a id="trace-12650"></a>
<a id="trace-12673"></a>
<a id="trace-12675"></a>
<a id="trace-12699"></a>
<a id="trace-12701"></a>
<a id="trace-12787"></a>
<a id="trace-12789"></a>
<a id="trace-12803"></a>
<a id="trace-12805"></a>
<a id="trace-12832"></a>
<a id="trace-12834"></a>
<a id="trace-12844"></a>
<a id="trace-12846"></a>
<a id="trace-12872"></a>
<a id="trace-12874"></a>
<a id="trace-12888"></a>
<a id="trace-12890"></a>
<a id="trace-12917"></a>
<a id="trace-12919"></a>
<a id="trace-12937"></a>
<a id="trace-12939"></a>
<a id="trace-12960"></a>
<a id="trace-12962"></a>
<a id="trace-12984"></a>
<a id="trace-12986"></a>
<a id="trace-13077"></a>
<a id="trace-13079"></a>
<a id="trace-13171"></a>
<a id="trace-13173"></a>
<a id="trace-13203"></a>
<a id="trace-13205"></a>
<a id="trace-13226"></a>
<a id="trace-13228"></a>
<a id="trace-13258"></a>
<a id="trace-13260"></a>
<a id="trace-13281"></a>
<a id="trace-13283"></a>
<a id="trace-13301"></a>
<a id="trace-13303"></a>
<a id="trace-13324"></a>
<a id="trace-13326"></a>
<a id="trace-13341"></a>
<a id="trace-13343"></a>
<a id="trace-13357"></a>
<a id="trace-13359"></a>
<a id="trace-13436"></a>
<a id="trace-13438"></a>
<a id="trace-13458"></a>
<a id="trace-13460"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13870"></a>
<a id="trace-13872"></a>
<a id="trace-14167"></a>
<a id="trace-14169"></a>
<a id="trace-14202"></a>
<a id="trace-14204"></a>
<a id="trace-14230"></a>
<a id="trace-14232"></a>
<a id="trace-14252"></a>
<a id="trace-14254"></a>
<a id="trace-14289"></a>
<a id="trace-14291"></a>
<a id="trace-14316"></a>
<a id="trace-14318"></a>
<a id="trace-14403"></a>
<a id="trace-14405"></a>
<a id="trace-14422"></a>
<a id="trace-14424"></a>
<a id="trace-14451"></a>
<a id="trace-14453"></a>
<a id="trace-14467"></a>
<a id="trace-14469"></a>
<a id="trace-14557"></a>
<a id="trace-14559"></a>
<a id="trace-14581"></a>
<a id="trace-14583"></a>
<a id="trace-14599"></a>
<a id="trace-14601"></a>
<a id="trace-14626"></a>
<a id="trace-14628"></a>
<a id="trace-14646"></a>
<a id="trace-14648"></a>
<a id="trace-14751"></a>
<a id="trace-14753"></a>
<a id="trace-14793"></a>
<a id="trace-14795"></a>
<a id="trace-14838"></a>
<a id="trace-14840"></a>
<a id="trace-14874"></a>
<a id="trace-14876"></a>
<a id="trace-14933"></a>
<a id="trace-14935"></a>
<a id="trace-14973"></a>
<a id="trace-14975"></a>
<a id="trace-15022"></a>
<a id="trace-15024"></a>
<a id="trace-15066"></a>
<a id="trace-15068"></a>
<a id="trace-15115"></a>
<a id="trace-15117"></a>
<a id="trace-15138"></a>
<a id="trace-15140"></a>
<a id="trace-15232"></a>
<a id="trace-15234"></a>
<a id="trace-15256"></a>
<a id="trace-15258"></a>
<a id="trace-15285"></a>
<a id="trace-15287"></a>
<a id="trace-15300"></a>
<a id="trace-15302"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15346"></a>
<a id="trace-15348"></a>
<a id="trace-15370"></a>
<a id="trace-15372"></a>
<a id="trace-15385"></a>
<a id="trace-15387"></a>
<a id="trace-15403"></a>
<a id="trace-15405"></a>
<a id="trace-15420"></a>
<a id="trace-15422"></a>
<a id="trace-15502"></a>
<a id="trace-15504"></a>
<a id="trace-15521"></a>
<a id="trace-15523"></a>
<a id="trace-15549"></a>
<a id="trace-15551"></a>
<a id="trace-15566"></a>
<a id="trace-15568"></a>
<a id="trace-15591"></a>
<a id="trace-15593"></a>
<a id="trace-15605"></a>
<a id="trace-15607"></a>
<a id="trace-15625"></a>
<a id="trace-15627"></a>
<a id="trace-15638"></a>
<a id="trace-15640"></a>
<a id="trace-15760"></a>
<a id="trace-15762"></a>
<a id="trace-15778"></a>
<a id="trace-15780"></a>
<a id="trace-15855"></a>
<a id="trace-15857"></a>
<a id="trace-15928"></a>
<a id="trace-15930"></a>
<a id="trace-15964"></a>
<a id="trace-15966"></a>
<a id="trace-15982"></a>
<a id="trace-15984"></a>
<a id="trace-16014"></a>
<a id="trace-16016"></a>
<a id="trace-16039"></a>
<a id="trace-16041"></a>
<a id="trace-16068"></a>
<a id="trace-16070"></a>
<a id="trace-16082"></a>
<a id="trace-16084"></a>
<a id="trace-16103"></a>
<a id="trace-16105"></a>
<a id="trace-16122"></a>
<a id="trace-16124"></a>
<a id="trace-16205"></a>
<a id="trace-16207"></a>
<a id="trace-16226"></a>
<a id="trace-16228"></a>
<a id="trace-16248"></a>
<a id="trace-16250"></a>
<a id="trace-16267"></a>
<a id="trace-16269"></a>
<a id="trace-16292"></a>
<a id="trace-16294"></a>
<a id="trace-16311"></a>
<a id="trace-16313"></a>
<a id="trace-16395"></a>
<a id="trace-16397"></a>
<a id="trace-16412"></a>
<a id="trace-16414"></a>
<a id="trace-16437"></a>
<a id="trace-16439"></a>
<a id="trace-16458"></a>
<a id="trace-16460"></a>
<a id="trace-16542"></a>
<a id="trace-16544"></a>
<a id="trace-16566"></a>
<a id="trace-16568"></a>
<a id="trace-16586"></a>
<a id="trace-16588"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16730"></a>
<a id="trace-16732"></a>
<a id="trace-16753"></a>
<a id="trace-16755"></a>
<a id="trace-16779"></a>
<a id="trace-16781"></a>
<a id="trace-16805"></a>
<a id="trace-16807"></a>
<a id="trace-16827"></a>
<a id="trace-16829"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17216"></a>
<a id="trace-17218"></a>
<a id="trace-17234"></a>
<a id="trace-17236"></a>
<a id="trace-17258"></a>
<a id="trace-17260"></a>
<a id="trace-17276"></a>
<a id="trace-17278"></a>
<a id="trace-17298"></a>
<a id="trace-17300"></a>
<a id="trace-17315"></a>
<a id="trace-17317"></a>
<a id="trace-17337"></a>
<a id="trace-17339"></a>
<a id="trace-17351"></a>
<a id="trace-17353"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17392"></a>
<a id="trace-17394"></a>
<a id="trace-17479"></a>
<a id="trace-17481"></a>
<a id="trace-17493"></a>
<a id="trace-17495"></a>
<a id="trace-17512"></a>
<a id="trace-17514"></a>
<a id="trace-17527"></a>
<a id="trace-17529"></a>
<a id="trace-17553"></a>
<a id="trace-17555"></a>
<a id="trace-17569"></a>
<a id="trace-17571"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17612"></a>
<a id="trace-17614"></a>
<a id="trace-17638"></a>
<a id="trace-17640"></a>
<a id="trace-17650"></a>
<a id="trace-17652"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17747"></a>
<a id="trace-17749"></a>
<a id="trace-17763"></a>
<a id="trace-17765"></a>
<a id="trace-17778"></a>
<a id="trace-17780"></a>
<a id="trace-17795"></a>
<a id="trace-17797"></a>
<a id="trace-17809"></a>
<a id="trace-17811"></a>
<a id="trace-17882"></a>
<a id="trace-17884"></a>
<a id="trace-17897"></a>
<a id="trace-17899"></a>
<a id="trace-17922"></a>
<a id="trace-17924"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-18021"></a>
<a id="trace-18023"></a>
<a id="trace-18034"></a>
<a id="trace-18036"></a>
<a id="trace-18057"></a>
<a id="trace-18059"></a>
<a id="trace-18072"></a>
<a id="trace-18074"></a>
<a id="trace-18098"></a>
<a id="trace-18100"></a>
<a id="trace-18120"></a>
<a id="trace-18122"></a>
<a id="trace-18231"></a>
<a id="trace-18233"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18275"></a>
<a id="trace-18277"></a>
<a id="trace-18300"></a>
<a id="trace-18302"></a>
<a id="trace-18381"></a>
<a id="trace-18383"></a>
<a id="trace-18403"></a>
<a id="trace-18405"></a>
<a id="trace-18502"></a>
<a id="trace-18504"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18558"></a>
<a id="trace-18560"></a>
<a id="trace-18566"></a>
<a id="trace-18568"></a>
<a id="trace-18583"></a>
<a id="trace-18585"></a>
<a id="trace-18594"></a>
<a id="trace-18596"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18680"></a>
<a id="trace-18682"></a>
<a id="trace-18698"></a>
<a id="trace-18700"></a>
<a id="trace-18708"></a>
<a id="trace-18710"></a>
<a id="trace-18724"></a>
<a id="trace-18726"></a>
<a id="trace-18738"></a>
<a id="trace-18740"></a>
<a id="trace-18757"></a>
<a id="trace-18759"></a>
<a id="trace-18770"></a>
<a id="trace-18772"></a>
<a id="trace-18786"></a>
<a id="trace-18788"></a>
<a id="trace-18797"></a>
<a id="trace-18799"></a>
<a id="trace-18872"></a>
<a id="trace-18874"></a>
<a id="trace-18883"></a>
<a id="trace-18885"></a>
<a id="trace-18902"></a>
<a id="trace-18904"></a>
<a id="trace-18912"></a>
<a id="trace-18914"></a>
<a id="trace-18923"></a>
<a id="trace-18925"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18941"></a>
<a id="trace-18943"></a>
<a id="trace-18948"></a>
<a id="trace-18950"></a>
<a id="trace-18960"></a>
<a id="trace-18962"></a>
<a id="trace-18971"></a>
<a id="trace-18973"></a>
<a id="trace-19038"></a>
<a id="trace-19040"></a>
<a id="trace-19049"></a>
<a id="trace-19051"></a>
<a id="trace-19060"></a>
<a id="trace-19062"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19078"></a>
<a id="trace-19080"></a>
<a id="trace-19086"></a>
<a id="trace-19088"></a>
<a id="trace-19098"></a>
<a id="trace-19100"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19118"></a>
<a id="trace-19120"></a>
<a id="trace-19129"></a>
<a id="trace-19131"></a>
<a id="trace-19200"></a>
<a id="trace-19202"></a>
<a id="trace-19210"></a>
<a id="trace-19212"></a>
<a id="trace-19223"></a>
<a id="trace-19225"></a>
<a id="trace-19295"></a>
<a id="trace-19297"></a>
<a id="trace-19308"></a>
<a id="trace-19310"></a>
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19332"></a>
<a id="trace-19334"></a>
<a id="trace-19344"></a>
<a id="trace-19346"></a>
<a id="trace-19362"></a>
<a id="trace-19364"></a>
<a id="trace-19370"></a>
<a id="trace-19372"></a>
<a id="trace-19439"></a>
<a id="trace-19441"></a>
<a id="trace-19444"></a>
<a id="trace-19446"></a>
<a id="trace-19458"></a>
<a id="trace-19460"></a>
<a id="trace-19464"></a>
<a id="trace-19466"></a>
<a id="trace-19476"></a>
<a id="trace-19478"></a>
<a id="trace-19484"></a>
<a id="trace-19486"></a>
<a id="trace-19497"></a>
<a id="trace-19499"></a>
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19517"></a>
<a id="trace-19519"></a>
<a id="trace-19525"></a>
<a id="trace-19527"></a>
<a id="trace-19595"></a>
<a id="trace-19597"></a>
<a id="trace-19602"></a>
<a id="trace-19604"></a>
<a id="trace-19614"></a>
<a id="trace-19616"></a>
<a id="trace-19621"></a>
<a id="trace-19623"></a>
<a id="trace-19652"></a>
<a id="trace-19654"></a>
<a id="trace-19660"></a>
<a id="trace-19662"></a>
<a id="trace-19688"></a>
<a id="trace-19690"></a>
<a id="trace-19697"></a>
<a id="trace-19699"></a>
<a id="trace-19712"></a>
<a id="trace-19714"></a>
<a id="trace-19720"></a>
<a id="trace-19722"></a>
<a id="trace-19792"></a>
<a id="trace-19794"></a>
<a id="trace-19797"></a>
<a id="trace-19799"></a>
<a id="trace-19809"></a>
<a id="trace-19811"></a>
<a id="trace-19814"></a>
<a id="trace-19816"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-19846"></a>
<a id="trace-19848"></a>
<a id="trace-19855"></a>
<a id="trace-19857"></a>
<a id="trace-19873"></a>
<a id="trace-19875"></a>
<a id="trace-19893"></a>
<a id="trace-19895"></a>
<a id="trace-19965"></a>
<a id="trace-19967"></a>
<a id="trace-19970"></a>
<a id="trace-19972"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-19996"></a>
<a id="trace-19998"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20078"></a>
<a id="trace-20080"></a>
<a id="trace-20089"></a>
<a id="trace-20091"></a>
<a id="trace-20099"></a>
<a id="trace-20101"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20192"></a>
<a id="trace-20194"></a>
<a id="trace-20203"></a>
<a id="trace-20205"></a>
<a id="trace-20226"></a>
<a id="trace-20228"></a>
<a id="trace-20237"></a>
<a id="trace-20239"></a>
<a id="trace-20248"></a>
<a id="trace-20250"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
<a id="trace-20269"></a>
<a id="trace-20271"></a>
<a id="trace-20278"></a>
<a id="trace-20280"></a>
<a id="trace-20286"></a>
<a id="trace-20288"></a>
<a id="trace-20294"></a>
<a id="trace-20296"></a>
<a id="trace-20362"></a>
<a id="trace-20364"></a>
<a id="trace-20369"></a>
<a id="trace-20371"></a>
<a id="trace-20382"></a>
<a id="trace-20384"></a>
<a id="trace-20393"></a>
<a id="trace-20395"></a>
<a id="trace-20406"></a>
<a id="trace-20408"></a>
<a id="trace-20415"></a>
<a id="trace-20417"></a>
<a id="trace-20435"></a>
<a id="trace-20437"></a>
<a id="trace-20449"></a>
<a id="trace-20451"></a>
<a id="trace-20460"></a>
<a id="trace-20462"></a>
<a id="trace-20605"></a>
<a id="trace-20607"></a>
<a id="trace-20745"></a>
<a id="trace-20747"></a>
<a id="trace-20755"></a>
<a id="trace-20757"></a>
<a id="trace-20772"></a>
<a id="trace-20774"></a>
<a id="trace-20783"></a>
<a id="trace-20785"></a>
<a id="trace-20805"></a>
<a id="trace-20807"></a>
<a id="trace-20811"></a>
<a id="trace-20813"></a>
<a id="trace-20824"></a>
<a id="trace-20826"></a>
<a id="trace-20830"></a>
<a id="trace-20832"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20861"></a>
<a id="trace-20863"></a>
<a id="trace-20930"></a>
<a id="trace-20932"></a>
<a id="trace-20944"></a>
<a id="trace-20946"></a>
<a id="trace-20959"></a>
<a id="trace-20961"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-20974"></a>
<a id="trace-20976"></a>
<a id="trace-20979"></a>
<a id="trace-20981"></a>
<a id="trace-20988"></a>
<a id="trace-20990"></a>
<a id="trace-20994"></a>
<a id="trace-20996"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21013"></a>
<a id="trace-21015"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21110"></a>
<a id="trace-21112"></a>
<a id="trace-21117"></a>
<a id="trace-21119"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21136"></a>
<a id="trace-21138"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21157"></a>
<a id="trace-21159"></a>
<a id="trace-21166"></a>
<a id="trace-21168"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21241"></a>
<a id="trace-21243"></a>
<a id="trace-21249"></a>
<a id="trace-21251"></a>
<a id="trace-21267"></a>
<a id="trace-21269"></a>
<a id="trace-21273"></a>
<a id="trace-21275"></a>
<a id="trace-21285"></a>
<a id="trace-21287"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21310"></a>
<a id="trace-21312"></a>
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21418"></a>
<a id="trace-21420"></a>
<a id="trace-21598"></a>
<a id="trace-21600"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21623"></a>
<a id="trace-21625"></a>
<a id="trace-21636"></a>
<a id="trace-21638"></a>
<a id="trace-21655"></a>
<a id="trace-21657"></a>
<a id="trace-21670"></a>
<a id="trace-21672"></a>
<a id="trace-21690"></a>
<a id="trace-21692"></a>
<a id="trace-21702"></a>
<a id="trace-21704"></a>
<a id="trace-21778"></a>
<a id="trace-21780"></a>
<a id="trace-21790"></a>
<a id="trace-21792"></a>
<a id="trace-21804"></a>
<a id="trace-21806"></a>
<a id="trace-21820"></a>
<a id="trace-21822"></a>
<a id="trace-21837"></a>
<a id="trace-21839"></a>
<a id="trace-21845"></a>
<a id="trace-21847"></a>
<a id="trace-21862"></a>
<a id="trace-21864"></a>
<a id="trace-22029"></a>
<a id="trace-22031"></a>
<a id="trace-22048"></a>
<a id="trace-22050"></a>
<a id="trace-22065"></a>
<a id="trace-22067"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22170"></a>
<a id="trace-22172"></a>
<a id="trace-22180"></a>
<a id="trace-22182"></a>
<a id="trace-22194"></a>
<a id="trace-22196"></a>
<a id="trace-22204"></a>
<a id="trace-22206"></a>
<a id="trace-22218"></a>
<a id="trace-22220"></a>
<a id="trace-22230"></a>
<a id="trace-22232"></a>
<a id="trace-22249"></a>
<a id="trace-22251"></a>
<a id="trace-22261"></a>
<a id="trace-22263"></a>
<a id="trace-22344"></a>
<a id="trace-22346"></a>
<a id="trace-22373"></a>
<a id="trace-22375"></a>
<a id="trace-22396"></a>
<a id="trace-22398"></a>
<a id="trace-22418"></a>
<a id="trace-22420"></a>
<a id="trace-22445"></a>
<a id="trace-22447"></a>
<a id="trace-22464"></a>
<a id="trace-22466"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22507"></a>
<a id="trace-22509"></a>
<a id="trace-22539"></a>
<a id="trace-22541"></a>
<a id="trace-22580"></a>
<a id="trace-22582"></a>
<a id="trace-22691"></a>
<a id="trace-22693"></a>
<a id="trace-22741"></a>
<a id="trace-22743"></a>
<a id="trace-22790"></a>
<a id="trace-22792"></a>
<a id="trace-22818"></a>
<a id="trace-22820"></a>
<a id="trace-22861"></a>
<a id="trace-22863"></a>
<a id="trace-22892"></a>
<a id="trace-22894"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22939"></a>
<a id="trace-22941"></a>
<a id="trace-22986"></a>
<a id="trace-22988"></a>
<a id="trace-23095"></a>
<a id="trace-23097"></a>
<a id="trace-23194"></a>
<a id="trace-23196"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23264"></a>
<a id="trace-23266"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23318"></a>
<a id="trace-23320"></a>
- 1.60s–223.30s (×882), actor 37, squad 4 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079420810525734, 'next_transition': 607}.
<a id="trace-814"></a>
<a id="trace-816"></a>
<a id="trace-840"></a>
<a id="trace-842"></a>
<a id="trace-871"></a>
<a id="trace-873"></a>
<a id="trace-906"></a>
<a id="trace-908"></a>
<a id="trace-927"></a>
<a id="trace-929"></a>
<a id="trace-957"></a>
<a id="trace-959"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1015"></a>
<a id="trace-1017"></a>
<a id="trace-1146"></a>
<a id="trace-1148"></a>
<a id="trace-1284"></a>
<a id="trace-1286"></a>
<a id="trace-1306"></a>
<a id="trace-1308"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 814): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260005804672387, 'next_transition': 840}.
<a id="trace-1154"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1154): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1075. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4677036642140162, 'next_transition': 125}.
<a id="trace-1155"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1155): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1075. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4677036642140162, 'next_transition': 125}.
<a id="trace-124"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 124): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5712808550833854, 'next_transition': 1339}.
<a id="trace-125"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 125): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.051825341088968, 'next_transition': 1952}.
<a id="trace-1314"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1314): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1314. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5712808550833854, 'next_transition': 1339}.
<a id="trace-1315"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1315): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1315. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5712808550833854, 'next_transition': 1339}.
<a id="trace-1316"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1316): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1316. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.051825341088968, 'next_transition': 1952}.
<a id="trace-1317"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1317): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1317. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.051825341088968, 'next_transition': 1952}.
<a id="trace-1339"></a>
<a id="trace-1341"></a>
<a id="trace-1374"></a>
<a id="trace-1376"></a>
<a id="trace-1397"></a>
<a id="trace-1399"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1339): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1317. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35543719274254165, 'next_transition': 1374}.
<a id="trace-1407"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1407): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725015029730752, 'next_transition': 1686}.
<a id="trace-1408"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1408): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725015029730752, 'next_transition': 1686}.
<a id="trace-1686"></a>
<a id="trace-1688"></a>
<a id="trace-1747"></a>
<a id="trace-1749"></a>
<a id="trace-1850"></a>
<a id="trace-1852"></a>
<a id="trace-1892"></a>
<a id="trace-1894"></a>
<a id="trace-1923"></a>
<a id="trace-1925"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1686): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1317. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1221939297380392, 'next_transition': 1747}.
<a id="trace-1952"></a>
- 16.70s–16.70s (×1), actor 8, squad 1 (trace 1952): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1789. Next observer evidence: None.
<a id="trace-1953"></a>
- 16.70s–16.70s (×1), actor 8, squad 1 (trace 1953): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1789. Next observer evidence: None.
<a id="trace-1954"></a>
<a id="trace-2423"></a>
<a id="trace-2616"></a>
<a id="trace-2804"></a>
- 16.70s–16.95s (×4), actor 8, squad 1 (trace 1954): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1789. Next observer evidence: None.
<a id="trace-2150"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2150): received platoon directive. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450063132978165, 'next_transition': 3010}.
<a id="trace-3010"></a>
<a id="trace-3012"></a>
- 17.25s–17.25s (×2), actor 5, squad 0 (trace 3010): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1786. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6012717897810805, 'next_transition': 3091}.
<a id="trace-3091"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 3091): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2263642481053948, 'next_transition': 3434}.
<a id="trace-3092"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 3092): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2263642481053948, 'next_transition': 3434}.
<a id="trace-3093"></a>
<a id="trace-3434"></a>
- 18.00s–18.25s (×2), actor 0, squad 0 (trace 3093): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1781. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2263642481053948, 'next_transition': 3434}.
<a id="trace-3777"></a>
<a id="trace-3779"></a>
<a id="trace-3854"></a>
<a id="trace-3856"></a>
<a id="trace-4018"></a>
<a id="trace-4020"></a>
<a id="trace-4216"></a>
<a id="trace-4218"></a>
<a id="trace-4260"></a>
<a id="trace-4262"></a>
<a id="trace-4309"></a>
<a id="trace-4311"></a>
- 18.75s–21.75s (×12), actor 5, squad 0 (trace 3777): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1786. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6399040785849403, 'next_transition': 3854}.
<a id="trace-4026"></a>
- 20.30s–20.30s (×1), actor 8, squad 1 (trace 4026): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 3946. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.073657894942492, 'next_transition': 6362}.
<a id="trace-4027"></a>
- 20.30s–20.30s (×1), actor 8, squad 1 (trace 4027): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 3946. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 19.073657894942492, 'next_transition': 6362}.
<a id="trace-4316"></a>
- 21.80s–21.80s (×1), actor 0, squad 0 (trace 4316): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3938. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06982915367613295, 'next_transition': 4338}.
<a id="trace-4338"></a>
<a id="trace-4340"></a>
<a id="trace-4405"></a>
<a id="trace-4407"></a>
- 22.25s–23.75s (×4), actor 5, squad 0 (trace 4338): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3943. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2586411295832993, 'next_transition': 4405}.
<a id="trace-4413"></a>
- 23.75s–23.75s (×1), actor 0, squad 0 (trace 4413): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3938. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022815946498556654, 'next_transition': 4761}.
<a id="trace-4761"></a>
<a id="trace-4763"></a>
<a id="trace-4790"></a>
<a id="trace-4792"></a>
<a id="trace-4914"></a>
<a id="trace-4916"></a>
<a id="trace-4941"></a>
<a id="trace-4943"></a>
<a id="trace-5008"></a>
<a id="trace-5010"></a>
- 24.25s–27.25s (×10), actor 5, squad 0 (trace 4761): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3943. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.001210672746864324, 'next_transition': 4790}.
<a id="trace-5017"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 5017): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4815. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25693602258515214, 'next_transition': 5037}.
<a id="trace-5037"></a>
<a id="trace-5039"></a>
<a id="trace-5063"></a>
<a id="trace-5065"></a>
<a id="trace-5089"></a>
<a id="trace-5091"></a>
<a id="trace-5113"></a>
<a id="trace-5115"></a>
<a id="trace-5138"></a>
<a id="trace-5140"></a>
<a id="trace-5239"></a>
<a id="trace-5241"></a>
<a id="trace-5263"></a>
<a id="trace-5265"></a>
- 27.75s–30.75s (×14), actor 5, squad 0 (trace 5037): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4820. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38414683434709096, 'next_transition': 5063}.
<a id="trace-5278"></a>
- 31.00s–31.00s (×1), actor 0, squad 0 (trace 5278): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 5158. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03452534234533395, 'next_transition': 5635}.
<a id="trace-5635"></a>
<a id="trace-5637"></a>
- 31.25s–31.25s (×2), actor 5, squad 0 (trace 5635): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5163. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03530035136156568, 'next_transition': 5651}.
<a id="trace-5651"></a>
- 31.50s–31.50s (×1), actor 0, squad 0 (trace 5651): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 5158. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.03367532852939215, 'next_transition': 6005}.
<a id="trace-6005"></a>
<a id="trace-6007"></a>
<a id="trace-6088"></a>
<a id="trace-6090"></a>
<a id="trace-6150"></a>
<a id="trace-6152"></a>
<a id="trace-6195"></a>
<a id="trace-6197"></a>
- 31.75s–34.25s (×8), actor 5, squad 0 (trace 6005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5163. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11363862765500345, 'next_transition': 6088}.
<a id="trace-6339"></a>
- 35.15s–35.15s (×1), actor 0, squad 0 (trace 6339): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6249. Next observer evidence: {'until': 35.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6425}.
<a id="trace-6362"></a>
- 35.60s–35.60s (×1), actor 8, squad 1 (trace 6362): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 6257. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5307063052722212, 'next_transition': 9380}.
<a id="trace-6363"></a>
- 35.60s–35.60s (×1), actor 8, squad 1 (trace 6363): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 6257. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5307063052722212, 'next_transition': 9380}.
<a id="trace-6425"></a>
<a id="trace-6427"></a>
- 35.75s–35.75s (×2), actor 5, squad 0 (trace 6425): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6254. Next observer evidence: {'until': 35.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6437}.
<a id="trace-6437"></a>
- 35.90s–35.90s (×1), actor 0, squad 0 (trace 6437): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 6249. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9246}.
<a id="trace-8995"></a>
- 35.90s–35.90s (×1), actor 0, squad 0 (trace 8995): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 6249. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9246}.
<a id="trace-8996"></a>
- 35.90s–35.90s (×1), actor 0, squad 0 (trace 8996): MoveTactically. Knowledge: actor memory at 35.00s, trace 6249. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9246}.
<a id="trace-8997"></a>
- 35.90s–35.90s (×1), actor 0, squad 0 (trace 8997): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 6249. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9246}.
<a id="trace-9246"></a>
<a id="trace-9248"></a>
<a id="trace-9311"></a>
<a id="trace-9313"></a>
<a id="trace-9356"></a>
<a id="trace-9358"></a>
<a id="trace-9388"></a>
<a id="trace-9390"></a>
- 36.25s–38.75s (×8), actor 5, squad 0 (trace 9246): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6254. Next observer evidence: {'until': 37.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.23625641446298629, 'next_transition': 9311}.
<a id="trace-9380"></a>
- 38.60s–38.60s (×1), actor 8, squad 1 (trace 9380): NeedSupport. Knowledge: actor memory at 35.00s, trace 6257. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.798127685312929, 'next_transition': 13083}.
<a id="trace-606"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 606): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9403"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 9403): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.012498 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 9403. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624876268742273, 'next_transition': 9412}.
<a id="trace-9404"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 9404): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.012498 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 9404. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624876268742273, 'next_transition': 9412}.
<a id="trace-9412"></a>
- 39.10s–39.10s (×1), actor 0, squad 0 (trace 9412): NeedSupport. Knowledge: actor memory at 35.00s, trace 6249. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23626035926760983, 'next_transition': 9426}.
<a id="trace-9426"></a>
<a id="trace-9428"></a>
<a id="trace-9463"></a>
<a id="trace-9465"></a>
<a id="trace-9606"></a>
<a id="trace-9608"></a>
- 39.25s–40.75s (×6), actor 5, squad 0 (trace 9426): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 9404. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724953936732246, 'next_transition': 9463}.
<a id="trace-9639"></a>
- 41.15s–41.15s (×1), actor 0, squad 0 (trace 9639): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 9475. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.245785886562055, 'next_transition': 10089}.
<a id="trace-9640"></a>
- 41.15s–41.15s (×1), actor 0, squad 0 (trace 9640): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 9475. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.245785886562055, 'next_transition': 10089}.
<a id="trace-10089"></a>
<a id="trace-10091"></a>
<a id="trace-10161"></a>
<a id="trace-10163"></a>
<a id="trace-10236"></a>
<a id="trace-10238"></a>
<a id="trace-10284"></a>
<a id="trace-10286"></a>
<a id="trace-10328"></a>
<a id="trace-10330"></a>
<a id="trace-10387"></a>
<a id="trace-10389"></a>
<a id="trace-10428"></a>
<a id="trace-10430"></a>
<a id="trace-10569"></a>
<a id="trace-10571"></a>
<a id="trace-10586"></a>
<a id="trace-10588"></a>
<a id="trace-10624"></a>
<a id="trace-10626"></a>
- 41.75s–47.75s (×20), actor 5, squad 0 (trace 10089): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 9480. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3036801782984329, 'next_transition': 10161}.
<a id="trace-10635"></a>
- 47.85s–47.85s (×1), actor 1, squad 0 (trace 10635): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 10443. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3095981630978172, 'next_transition': 10648}.
<a id="trace-10648"></a>
<a id="trace-10650"></a>
- 48.25s–48.25s (×2), actor 5, squad 0 (trace 10648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10447. Next observer evidence: None.
<a id="trace-10659"></a>
- 48.30s–48.30s (×1), actor 1, squad 0 (trace 10659): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 10443. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3096019886642085, 'next_transition': 12644}.
<a id="trace-12380"></a>
- 48.30s–48.30s (×1), actor 1, squad 0 (trace 12380): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 10443. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3096019886642085, 'next_transition': 12644}.
<a id="trace-12381"></a>
- 48.30s–48.30s (×1), actor 1, squad 0 (trace 12381): MoveTactically. Knowledge: actor memory at 45.00s, trace 10443. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3096019886642085, 'next_transition': 12644}.
<a id="trace-12382"></a>
- 48.30s–48.30s (×1), actor 1, squad 0 (trace 12382): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 10443. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3096019886642085, 'next_transition': 12644}.
<a id="trace-12644"></a>
<a id="trace-12646"></a>
<a id="trace-12783"></a>
<a id="trace-12785"></a>
<a id="trace-12842"></a>
<a id="trace-12886"></a>
<a id="trace-12915"></a>
<a id="trace-13073"></a>
<a id="trace-13075"></a>
<a id="trace-13167"></a>
<a id="trace-13169"></a>
<a id="trace-13199"></a>
<a id="trace-13201"></a>
<a id="trace-13254"></a>
<a id="trace-13256"></a>
<a id="trace-13297"></a>
<a id="trace-13299"></a>
<a id="trace-13320"></a>
<a id="trace-13322"></a>
<a id="trace-13337"></a>
<a id="trace-13339"></a>
<a id="trace-13353"></a>
<a id="trace-13355"></a>
- 48.75s–59.75s (×23), actor 5, squad 0 (trace 12644): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10447. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6528027190067829, 'next_transition': 12783}.
<a id="trace-13083"></a>
- 55.30s–55.30s (×1), actor 8, squad 1 (trace 13083): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 13003. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000038222675471, 'next_transition': 14495}.
<a id="trace-13105"></a>
- 55.30s–55.30s (×1), actor 8, squad 1 (trace 13105): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 13003. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000038222675471, 'next_transition': 14495}.
<a id="trace-13441"></a>
- 60.35s–60.35s (×1), actor 3, squad 0 (trace 13441): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 60.00s, trace 13364. Next observer evidence: {'until': 60.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13454}.
<a id="trace-13454"></a>
<a id="trace-13456"></a>
<a id="trace-13477"></a>
<a id="trace-13479"></a>
- 60.75s–61.25s (×4), actor 5, squad 0 (trace 13454): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 13366. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5020386579484315, 'next_transition': 13477}.
<a id="trace-13488"></a>
- 61.35s–61.35s (×1), actor 3, squad 0 (trace 13488): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 13364. Next observer evidence: {'until': 61.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0102639546011623, 'next_transition': 13885}.
<a id="trace-13493"></a>
- 61.35s–61.35s (×1), actor 3, squad 0 (trace 13493): MoveTactically. Knowledge: actor memory at 60.00s, trace 13364. Next observer evidence: {'until': 61.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0102639546011623, 'next_transition': 13885}.
<a id="trace-13494"></a>
- 61.35s–61.35s (×1), actor 3, squad 0 (trace 13494): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 60.00s, trace 13364. Next observer evidence: {'until': 61.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0102639546011623, 'next_transition': 13885}.
<a id="trace-13885"></a>
- 61.85s–61.85s (×1), actor 3, squad 0 (trace 13885): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 13364. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4161913684119275, 'next_transition': 14163}.
<a id="trace-13886"></a>
- 61.85s–61.85s (×1), actor 3, squad 0 (trace 13886): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 13364. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4161913684119275, 'next_transition': 14163}.
<a id="trace-14163"></a>
<a id="trace-14165"></a>
<a id="trace-14248"></a>
<a id="trace-14250"></a>
<a id="trace-14287"></a>
<a id="trace-14314"></a>
<a id="trace-14420"></a>
<a id="trace-14449"></a>
- 62.25s–66.25s (×8), actor 5, squad 0 (trace 14163): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 13366. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.621867522343559, 'next_transition': 14248}.
<a id="trace-1013"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 1013): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14458"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 14458): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.443308 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 14458. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21064400000000028, 'next_transition': 14486}.
<a id="trace-14459"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 14459): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.443308 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 14459. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21064400000000028, 'next_transition': 14486}.
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14553"></a>
<a id="trace-14555"></a>
<a id="trace-14577"></a>
<a id="trace-14579"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14642"></a>
<a id="trace-14644"></a>
- 67.25s–69.75s (×10), actor 5, squad 0 (trace 14486): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 14459. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14553}.
<a id="trace-14495"></a>
- 67.30s–67.30s (×1), actor 8, squad 1 (trace 14495): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 14338. Next observer evidence: {'until': 69.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.211273790736913, 'next_transition': 14651}.
<a id="trace-14496"></a>
- 67.30s–67.30s (×1), actor 8, squad 1 (trace 14496): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 14338. Next observer evidence: {'until': 69.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.211273790736913, 'next_transition': 14651}.
<a id="trace-14651"></a>
- 69.80s–69.80s (×1), actor 8, squad 1 (trace 14651): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 14338. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05672019129022667, 'next_transition': 1266}.
<a id="trace-14684"></a>
- 70.15s–70.15s (×1), actor 3, squad 0 (trace 14684): support established: element delivered fire on threat area. Knowledge: actor memory at 70.00s, trace 14659. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09796580858015376, 'next_transition': 14747}.
<a id="trace-14685"></a>
- 70.15s–70.15s (×1), actor 3, squad 0 (trace 14685): Fixing. Knowledge: actor memory at 70.00s, trace 14659. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09796580858015376, 'next_transition': 14747}.
<a id="trace-14747"></a>
<a id="trace-14749"></a>
<a id="trace-14789"></a>
<a id="trace-14791"></a>
<a id="trace-14834"></a>
<a id="trace-14836"></a>
<a id="trace-14870"></a>
<a id="trace-14872"></a>
<a id="trace-14929"></a>
<a id="trace-14931"></a>
<a id="trace-15062"></a>
<a id="trace-15064"></a>
<a id="trace-15111"></a>
<a id="trace-15113"></a>
<a id="trace-15134"></a>
<a id="trace-15136"></a>
<a id="trace-15228"></a>
<a id="trace-15230"></a>
<a id="trace-15252"></a>
<a id="trace-15254"></a>
<a id="trace-15281"></a>
<a id="trace-15283"></a>
<a id="trace-15296"></a>
<a id="trace-15298"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15381"></a>
<a id="trace-15383"></a>
<a id="trace-15399"></a>
<a id="trace-15401"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15498"></a>
<a id="trace-15500"></a>
<a id="trace-15517"></a>
<a id="trace-15519"></a>
<a id="trace-15545"></a>
<a id="trace-15547"></a>
<a id="trace-15562"></a>
<a id="trace-15564"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15601"></a>
<a id="trace-15603"></a>
<a id="trace-15621"></a>
<a id="trace-15623"></a>
<a id="trace-15634"></a>
<a id="trace-15636"></a>
- 70.25s–83.75s (×50), actor 5, squad 0 (trace 14747): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14661. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.027669827147621125, 'next_transition': 14789}.
<a id="trace-1266"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1266): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15508"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 15508): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.30s, trace 15508. Next observer evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15861}.
<a id="trace-15643"></a>
- 83.95s–83.95s (×1), actor 3, squad 0 (trace 15643): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 15427. Next observer evidence: {'until': 84.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15756}.
<a id="trace-15644"></a>
- 83.95s–83.95s (×1), actor 3, squad 0 (trace 15644): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 15427. Next observer evidence: {'until': 84.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15756}.
<a id="trace-15756"></a>
<a id="trace-15758"></a>
<a id="trace-15851"></a>
<a id="trace-15853"></a>
<a id="trace-15960"></a>
<a id="trace-15962"></a>
<a id="trace-15978"></a>
<a id="trace-15980"></a>
- 84.25s–86.75s (×8), actor 5, squad 0 (trace 15756): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 15508. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5401662881985972, 'next_transition': 15851}.
<a id="trace-15861"></a>
- 85.50s–85.50s (×1), actor 8, squad 1 (trace 15861): MoveTactically. Knowledge: actor memory at 85.00s, trace 15789. Next observer evidence: None.
<a id="trace-15862"></a>
- 85.50s–85.50s (×1), actor 8, squad 1 (trace 15862): received platoon directive. Knowledge: actor memory at 85.00s, trace 15789. Next observer evidence: None.
<a id="trace-15868"></a>
- 85.55s–85.55s (×1), actor 8, squad 1 (trace 15868): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 15789. Next observer evidence: {'until': 93, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.286132536512414, 'next_transition': 16327}.
<a id="trace-15989"></a>
- 86.90s–86.90s (×1), actor 3, squad 0 (trace 15989): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 15785. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41916876036074846, 'next_transition': 16010}.
<a id="trace-16010"></a>
<a id="trace-16012"></a>
<a id="trace-16035"></a>
<a id="trace-16037"></a>
<a id="trace-16064"></a>
<a id="trace-16066"></a>
<a id="trace-16099"></a>
<a id="trace-16101"></a>
<a id="trace-16118"></a>
<a id="trace-16120"></a>
<a id="trace-16222"></a>
<a id="trace-16224"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16288"></a>
<a id="trace-16290"></a>
- 87.25s–92.25s (×16), actor 5, squad 0 (trace 16010): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 15787. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3140346123041214, 'next_transition': 16035}.
<a id="trace-16305"></a>
- 92.65s–92.65s (×1), actor 3, squad 0 (trace 16305): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 90.00s, trace 16132. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.03851981400225, 'next_transition': 16433}.
<a id="trace-16327"></a>
- 93.10s–93.10s (×1), actor 8, squad 1 (trace 16327): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 16136. Next observer evidence: None.
<a id="trace-16334"></a>
- 93.15s–93.15s (×1), actor 8, squad 1 (trace 16334): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 16136. Next observer evidence: {'until': 94, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1392}.
<a id="trace-1392"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (events line 1392): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16421"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (trace 16421): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.770488 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 16421. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.875102596563426, 'next_transition': 17106}.
<a id="trace-16422"></a>
- 94.15s–94.15s (×1), actor 5, squad 1 (trace 16422): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.770488 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 94.15s, trace 16422. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.875102596563426, 'next_transition': 17106}.
<a id="trace-16433"></a>
<a id="trace-16435"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
<a id="trace-16538"></a>
<a id="trace-16540"></a>
<a id="trace-16582"></a>
<a id="trace-16584"></a>
- 94.25s–96.25s (×8), actor 5, squad 0 (trace 16433): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.15s, trace 16422. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6069426738709536, 'next_transition': 16454}.
<a id="trace-16599"></a>
- 96.65s–96.65s (×1), actor 3, squad 0 (trace 16599): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 16469. Next observer evidence: None.
<a id="trace-16697"></a>
- 96.65s–96.65s (×1), actor 3, squad 0 (trace 16697): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 16469. Next observer evidence: None.
<a id="trace-16703"></a>
<a id="trace-16705"></a>
<a id="trace-16726"></a>
<a id="trace-16728"></a>
<a id="trace-16749"></a>
<a id="trace-16751"></a>
<a id="trace-16775"></a>
<a id="trace-16777"></a>
<a id="trace-16801"></a>
<a id="trace-16803"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-17125"></a>
<a id="trace-17127"></a>
<a id="trace-17212"></a>
<a id="trace-17214"></a>
<a id="trace-17230"></a>
<a id="trace-17232"></a>
<a id="trace-17294"></a>
<a id="trace-17296"></a>
<a id="trace-17311"></a>
<a id="trace-17313"></a>
<a id="trace-17333"></a>
<a id="trace-17335"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17370"></a>
<a id="trace-17372"></a>
<a id="trace-17388"></a>
<a id="trace-17390"></a>
<a id="trace-17475"></a>
<a id="trace-17477"></a>
<a id="trace-17489"></a>
<a id="trace-17491"></a>
<a id="trace-17523"></a>
<a id="trace-17525"></a>
<a id="trace-17565"></a>
<a id="trace-17567"></a>
<a id="trace-17591"></a>
<a id="trace-17593"></a>
<a id="trace-17608"></a>
<a id="trace-17610"></a>
<a id="trace-17634"></a>
<a id="trace-17636"></a>
<a id="trace-17646"></a>
<a id="trace-17648"></a>
<a id="trace-17730"></a>
<a id="trace-17732"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17805"></a>
<a id="trace-17807"></a>
<a id="trace-17878"></a>
<a id="trace-17880"></a>
<a id="trace-17893"></a>
<a id="trace-17895"></a>
<a id="trace-17918"></a>
<a id="trace-17920"></a>
<a id="trace-18017"></a>
<a id="trace-18019"></a>
<a id="trace-18053"></a>
<a id="trace-18055"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18094"></a>
<a id="trace-18096"></a>
- 96.75s–117.25s (×66), actor 5, squad 0 (trace 16703): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 16471. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126938178191251, 'next_transition': 16726}.
<a id="trace-17106"></a>
- 99.35s–99.35s (×1), actor 8, squad 1 (trace 17106): radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 16473. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.9190499304965476, 'next_transition': 17817}.
<a id="trace-17107"></a>
- 99.35s–99.35s (×1), actor 8, squad 1 (trace 17107): radio assault committed: wait for delivered support evidence. Knowledge: actor memory at 95.00s, trace 16473. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.9190499304965476, 'next_transition': 17817}.
<a id="trace-17108"></a>
- 99.35s–99.35s (×1), actor 8, squad 1 (trace 17108): Assaulting. Knowledge: actor memory at 95.00s, trace 16473. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.9190499304965476, 'next_transition': 17817}.
<a id="trace-17817"></a>
- 112.95s–112.95s (×1), actor 8, squad 1 (trace 17817): support established: element delivered fire on threat area. Knowledge: actor memory at 110.00s, trace 17662. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.1813091146792765, 'next_transition': 18290}.
<a id="trace-17818"></a>
- 112.95s–112.95s (×1), actor 8, squad 1 (trace 17818): support established: next buddy rush, at most five seconds. Knowledge: actor memory at 110.00s, trace 17662. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.1813091146792765, 'next_transition': 18290}.
<a id="trace-18108"></a>
- 117.70s–117.70s (×1), actor 4, squad 0 (trace 18108): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 115.00s, trace 17948. Next observer evidence: None.
<a id="trace-18109"></a>
- 117.70s–117.70s (×1), actor 4, squad 0 (trace 18109): NeedSupport. Knowledge: actor memory at 115.00s, trace 17948. Next observer evidence: None.
<a id="trace-18116"></a>
<a id="trace-18118"></a>
- 117.75s–117.75s (×2), actor 5, squad 0 (trace 18116): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17949. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300189882500017, 'next_transition': 18227}.
<a id="trace-18128"></a>
- 117.75s–117.75s (×1), actor 4, squad 0 (trace 18128): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 17948. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300189882500017, 'next_transition': 18227}.
<a id="trace-18130"></a>
- 117.75s–117.75s (×1), actor 4, squad 0 (trace 18130): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 17948. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300189882500017, 'next_transition': 18227}.
<a id="trace-18131"></a>
- 117.75s–117.75s (×1), actor 4, squad 0 (trace 18131): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 17948. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300189882500017, 'next_transition': 18227}.
<a id="trace-18227"></a>
<a id="trace-18229"></a>
<a id="trace-18246"></a>
<a id="trace-18248"></a>
<a id="trace-18271"></a>
<a id="trace-18273"></a>
<a id="trace-18399"></a>
<a id="trace-18401"></a>
- 118.25s–120.75s (×8), actor 5, squad 0 (trace 18227): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17949. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6845820996525532, 'next_transition': 18246}.
<a id="trace-18290"></a>
- 119.60s–119.60s (×1), actor 8, squad 1 (trace 18290): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 115.00s, trace 17951. Next observer evidence: {'until': 141.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19229}.
<a id="trace-18293"></a>
- 119.60s–119.60s (×1), actor 8, squad 1 (trace 18293): support permission paused. Knowledge: actor memory at 115.00s, trace 17951. Next observer evidence: {'until': 141.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19229}.
<a id="trace-18415"></a>
- 121.10s–121.10s (×1), actor 4, squad 0 (trace 18415): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 120.00s, trace 18308. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418042760501602, 'next_transition': 18482}.
<a id="trace-18416"></a>
- 121.10s–121.10s (×1), actor 4, squad 0 (trace 18416): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 18308. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418042760501602, 'next_transition': 18482}.
<a id="trace-18482"></a>
<a id="trace-18484"></a>
<a id="trace-18517"></a>
<a id="trace-18519"></a>
<a id="trace-18552"></a>
<a id="trace-18554"></a>
<a id="trace-18577"></a>
<a id="trace-18579"></a>
<a id="trace-18664"></a>
<a id="trace-18666"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
<a id="trace-18719"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18780"></a>
<a id="trace-18782"></a>
<a id="trace-18868"></a>
<a id="trace-18897"></a>
<a id="trace-18919"></a>
<a id="trace-18937"></a>
<a id="trace-18956"></a>
- 121.25s–134.30s (×22), actor 5, squad 0 (trace 18482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 18309. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.444395819022203, 'next_transition': 18517}.
<a id="trace-1736"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (events line 1736): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19044"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (trace 19044): renew committed intent (75 s lifetime). Knowledge: actor memory at 135.60s, trace 19044. Next observer evidence: {'until': 136.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19056}.
<a id="trace-19056"></a>
<a id="trace-19074"></a>
<a id="trace-19094"></a>
<a id="trace-19196"></a>
<a id="trace-19219"></a>
<a id="trace-19454"></a>
<a id="trace-19513"></a>
<a id="trace-19591"></a>
<a id="trace-19610"></a>
<a id="trace-19648"></a>
<a id="trace-19684"></a>
<a id="trace-19708"></a>
<a id="trace-19805"></a>
<a id="trace-19869"></a>
<a id="trace-19961"></a>
<a id="trace-19982"></a>
<a id="trace-20061"></a>
<a id="trace-20084"></a>
<a id="trace-20106"></a>
<a id="trace-20188"></a>
<a id="trace-20222"></a>
<a id="trace-20244"></a>
<a id="trace-20265"></a>
<a id="trace-20358"></a>
<a id="trace-20378"></a>
<a id="trace-20431"></a>
<a id="trace-20456"></a>
<a id="trace-20768"></a>
<a id="trace-20801"></a>
<a id="trace-20820"></a>
<a id="trace-20841"></a>
<a id="trace-20926"></a>
<a id="trace-20955"></a>
<a id="trace-20970"></a>
<a id="trace-20984"></a>
<a id="trace-20999"></a>
<a id="trace-21077"></a>
<a id="trace-21125"></a>
<a id="trace-21145"></a>
<a id="trace-21162"></a>
<a id="trace-21237"></a>
<a id="trace-21263"></a>
<a id="trace-21281"></a>
<a id="trace-21404"></a>
<a id="trace-21594"></a>
<a id="trace-21619"></a>
<a id="trace-21651"></a>
<a id="trace-21686"></a>
<a id="trace-21774"></a>
<a id="trace-21833"></a>
<a id="trace-21858"></a>
<a id="trace-22044"></a>
<a id="trace-22166"></a>
<a id="trace-22214"></a>
<a id="trace-22245"></a>
<a id="trace-22340"></a>
<a id="trace-22392"></a>
<a id="trace-22535"></a>
<a id="trace-22687"></a>
<a id="trace-22857"></a>
<a id="trace-22907"></a>
<a id="trace-22982"></a>
<a id="trace-23190"></a>
<a id="trace-23260"></a>
<a id="trace-23292"></a>
<a id="trace-23314"></a>
<a id="trace-23398"></a>
<a id="trace-23409"></a>
<a id="trace-23422"></a>
<a id="trace-23436"></a>
<a id="trace-23519"></a>
<a id="trace-23534"></a>
<a id="trace-23553"></a>
<a id="trace-23565"></a>
<a id="trace-23578"></a>
<a id="trace-23763"></a>
<a id="trace-23775"></a>
<a id="trace-23789"></a>
<a id="trace-23868"></a>
<a id="trace-23895"></a>
<a id="trace-23904"></a>
<a id="trace-23925"></a>
<a id="trace-24018"></a>
<a id="trace-24035"></a>
<a id="trace-24055"></a>
<a id="trace-24169"></a>
<a id="trace-24189"></a>
<a id="trace-24206"></a>
<a id="trace-24226"></a>
<a id="trace-24301"></a>
<a id="trace-24313"></a>
<a id="trace-24321"></a>
<a id="trace-24330"></a>
<a id="trace-24413"></a>
<a id="trace-24433"></a>
<a id="trace-24468"></a>
<a id="trace-24617"></a>
<a id="trace-24637"></a>
<a id="trace-24665"></a>
<a id="trace-24689"></a>
<a id="trace-24704"></a>
<a id="trace-24782"></a>
<a id="trace-24796"></a>
<a id="trace-24811"></a>
<a id="trace-24824"></a>
<a id="trace-24843"></a>
<a id="trace-24915"></a>
<a id="trace-24935"></a>
<a id="trace-24963"></a>
<a id="trace-25013"></a>
<a id="trace-25089"></a>
<a id="trace-25107"></a>
<a id="trace-25123"></a>
<a id="trace-25142"></a>
<a id="trace-25157"></a>
<a id="trace-25232"></a>
<a id="trace-25247"></a>
<a id="trace-25262"></a>
<a id="trace-25277"></a>
<a id="trace-25296"></a>
<a id="trace-25372"></a>
<a id="trace-25447"></a>
<a id="trace-25468"></a>
<a id="trace-25483"></a>
<a id="trace-25572"></a>
<a id="trace-25605"></a>
<a id="trace-25620"></a>
<a id="trace-25635"></a>
<a id="trace-25723"></a>
<a id="trace-25736"></a>
<a id="trace-25758"></a>
<a id="trace-25868"></a>
<a id="trace-25940"></a>
<a id="trace-25962"></a>
<a id="trace-25978"></a>
<a id="trace-26110"></a>
<a id="trace-26190"></a>
<a id="trace-26233"></a>
<a id="trace-26249"></a>
<a id="trace-26326"></a>
<a id="trace-26537"></a>
<a id="trace-26570"></a>
<a id="trace-26601"></a>
<a id="trace-26776"></a>
<a id="trace-26865"></a>
<a id="trace-26899"></a>
<a id="trace-26913"></a>
<a id="trace-26927"></a>
<a id="trace-26947"></a>
<a id="trace-27025"></a>
<a id="trace-27174"></a>
<a id="trace-27197"></a>
<a id="trace-27216"></a>
<a id="trace-27318"></a>
<a id="trace-27376"></a>
<a id="trace-27392"></a>
<a id="trace-27406"></a>
<a id="trace-27486"></a>
<a id="trace-27499"></a>
<a id="trace-27509"></a>
<a id="trace-27522"></a>
<a id="trace-27590"></a>
<a id="trace-27597"></a>
<a id="trace-27609"></a>
<a id="trace-27617"></a>
<a id="trace-27703"></a>
<a id="trace-27720"></a>
<a id="trace-27734"></a>
<a id="trace-27742"></a>
<a id="trace-27762"></a>
<a id="trace-27830"></a>
<a id="trace-27867"></a>
<a id="trace-27878"></a>
- 136.30s–359.30s (×173), actor 5, squad 0 (trace 19056): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.60s, trace 19044. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19074}.
<a id="trace-19229"></a>
- 141.60s–141.60s (×1), actor 8, squad 1 (trace 19229): Blocked: support lost beyond 30 s recovery allowance; report cause, Reorganise then supported closure. Knowledge: actor memory at 140.00s, trace 19137. Next observer evidence: None.
<a id="trace-19230"></a>
- 141.65s–141.65s (×1), actor 8, squad 1 (trace 19230): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 19137. Next observer evidence: None.
<a id="trace-19233"></a>
- 141.65s–141.65s (×1), actor 8, squad 1 (trace 19233): MoveTactically. Knowledge: actor memory at 140.00s, trace 19137. Next observer evidence: None.
<a id="trace-19234"></a>
- 141.65s–141.65s (×1), actor 8, squad 1 (trace 19234): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 140.00s, trace 19137. Next observer evidence: None.
<a id="trace-19240"></a>
- 141.70s–141.70s (×1), actor 8, squad 1 (trace 19240): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 19137. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.000000147266666, 'next_transition': 19627}.
<a id="trace-19627"></a>
- 151.90s–151.90s (×1), actor 8, squad 1 (trace 19627): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 150.00s, trace 19533. Next observer evidence: {'until': 162, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.65936974686132, 'next_transition': 20003}.
<a id="trace-20003"></a>
- 162.10s–162.10s (×1), actor 8, squad 1 (trace 20003): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 19900. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6236973625284932, 'next_transition': 1827}.
<a id="trace-1827"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (events line 1827): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 174.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.37627069379333, 'next_transition': 20470}.
<a id="trace-20082"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 20082): renew committed intent (75 s lifetime). Knowledge: actor memory at 163.25s, trace 20082. Next observer evidence: {'until': 174.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.37627069379333, 'next_transition': 20470}.
<a id="trace-20470"></a>
- 174.70s–174.70s (×1), actor 8, squad 1 (trace 20470): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 170.00s, trace 20300. Next observer evidence: None.
<a id="trace-20534"></a>
- 174.75s–174.75s (×1), actor 8, squad 1 (trace 20534): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 170.00s, trace 20300. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20608}.
<a id="trace-20599"></a>
- 174.75s–174.75s (×1), actor 8, squad 1 (trace 20599): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 170.00s, trace 20300. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20608}.
<a id="trace-20608"></a>
- 174.80s–174.80s (×1), actor 8, squad 1 (trace 20608): recovering: retry accepted element corridor in column. Knowledge: actor memory at 170.00s, trace 20300. Next observer evidence: None.
<a id="trace-20673"></a>
- 174.80s–174.80s (×1), actor 8, squad 1 (trace 20673): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 170.00s, trace 20300. Next observer evidence: None.
<a id="trace-20679"></a>
- 174.85s–174.85s (×1), actor 8, squad 1 (trace 20679): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 170.00s, trace 20300. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1934}.
<a id="trace-1934"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (events line 1934): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21252"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (trace 21252): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.588093 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 190.85s, trace 21252. Next observer evidence: {'until': 196, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21423}.
<a id="trace-21253"></a>
- 190.85s–190.85s (×1), actor 5, squad 1 (trace 21253): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.588093 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 190.85s, trace 21253. Next observer evidence: {'until': 196, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21423}.
<a id="trace-21423"></a>
- 196.05s–196.05s (×1), actor 8, squad 1 (trace 21423): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 21343. Next observer evidence: {'until': 199.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.706459172799427, 'next_transition': 21693}.
<a id="trace-21424"></a>
- 196.05s–196.05s (×1), actor 8, squad 1 (trace 21424): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 21343. Next observer evidence: {'until': 199.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.706459172799427, 'next_transition': 21693}.
<a id="trace-21693"></a>
- 199.40s–199.40s (×1), actor 8, squad 1 (trace 21693): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 195.00s, trace 21343. Next observer evidence: {'until': 203.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.978193958540541, 'next_transition': 21868}.
<a id="trace-21868"></a>
- 203.40s–203.40s (×1), actor 8, squad 1 (trace 21868): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 21711. Next observer evidence: {'until': 219.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.583472353766595, 'next_transition': 22995}.
<a id="trace-21869"></a>
- 203.40s–203.40s (×1), actor 8, squad 1 (trace 21869): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 21711. Next observer evidence: {'until': 219.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 18.583472353766595, 'next_transition': 22995}.
<a id="trace-22995"></a>
- 219.35s–219.35s (×1), actor 8, squad 1 (trace 22995): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 215.00s, trace 22602. Next observer evidence: {'until': 222.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0329039351228206, 'next_transition': 23301}.
<a id="trace-23017"></a>
- 219.35s–219.35s (×1), actor 8, squad 1 (trace 23017): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 215.00s, trace 22602. Next observer evidence: {'until': 222.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0329039351228206, 'next_transition': 23301}.
<a id="trace-23301"></a>
- 222.50s–222.50s (×1), actor 8, squad 1 (trace 23301): NeedSupport. Knowledge: actor memory at 220.00s, trace 23112. Next observer evidence: {'until': 234.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.400664306537168, 'next_transition': 23588}.
<a id="trace-23424"></a>
<a id="trace-23426"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23521"></a>
<a id="trace-23523"></a>
<a id="trace-23536"></a>
<a id="trace-23538"></a>
<a id="trace-23555"></a>
<a id="trace-23557"></a>
<a id="trace-23567"></a>
<a id="trace-23569"></a>
<a id="trace-23580"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23743"></a>
<a id="trace-23745"></a>
<a id="trace-23765"></a>
<a id="trace-23767"></a>
<a id="trace-23777"></a>
<a id="trace-23779"></a>
<a id="trace-23791"></a>
<a id="trace-23793"></a>
<a id="trace-23870"></a>
<a id="trace-23872"></a>
<a id="trace-23898"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
<a id="trace-23915"></a>
<a id="trace-23927"></a>
<a id="trace-23929"></a>
<a id="trace-23996"></a>
<a id="trace-23998"></a>
<a id="trace-24020"></a>
<a id="trace-24022"></a>
<a id="trace-24037"></a>
<a id="trace-24039"></a>
<a id="trace-24057"></a>
<a id="trace-24059"></a>
<a id="trace-24076"></a>
<a id="trace-24078"></a>
<a id="trace-24154"></a>
<a id="trace-24156"></a>
<a id="trace-24171"></a>
<a id="trace-24173"></a>
<a id="trace-24191"></a>
<a id="trace-24193"></a>
<a id="trace-24208"></a>
<a id="trace-24210"></a>
<a id="trace-24228"></a>
<a id="trace-24230"></a>
<a id="trace-24303"></a>
<a id="trace-24305"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24323"></a>
<a id="trace-24325"></a>
<a id="trace-24332"></a>
<a id="trace-24334"></a>
<a id="trace-24346"></a>
<a id="trace-24415"></a>
<a id="trace-24417"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24450"></a>
<a id="trace-24452"></a>
<a id="trace-24460"></a>
<a id="trace-24462"></a>
<a id="trace-24470"></a>
<a id="trace-24472"></a>
<a id="trace-24619"></a>
<a id="trace-24621"></a>
<a id="trace-24639"></a>
<a id="trace-24641"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24706"></a>
<a id="trace-24708"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24798"></a>
<a id="trace-24800"></a>
<a id="trace-24813"></a>
<a id="trace-24815"></a>
<a id="trace-24826"></a>
<a id="trace-24828"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24917"></a>
<a id="trace-24919"></a>
<a id="trace-24937"></a>
<a id="trace-24939"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24965"></a>
<a id="trace-24967"></a>
<a id="trace-25015"></a>
<a id="trace-25017"></a>
<a id="trace-25091"></a>
<a id="trace-25093"></a>
<a id="trace-25109"></a>
<a id="trace-25111"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25144"></a>
<a id="trace-25146"></a>
<a id="trace-25159"></a>
<a id="trace-25161"></a>
<a id="trace-25234"></a>
<a id="trace-25236"></a>
<a id="trace-25249"></a>
<a id="trace-25251"></a>
<a id="trace-25264"></a>
<a id="trace-25266"></a>
<a id="trace-25279"></a>
<a id="trace-25281"></a>
<a id="trace-25298"></a>
<a id="trace-25300"></a>
<a id="trace-25374"></a>
<a id="trace-25376"></a>
<a id="trace-25449"></a>
<a id="trace-25451"></a>
<a id="trace-25470"></a>
<a id="trace-25485"></a>
<a id="trace-25487"></a>
<a id="trace-25501"></a>
<a id="trace-25503"></a>
<a id="trace-25574"></a>
<a id="trace-25576"></a>
<a id="trace-25594"></a>
<a id="trace-25607"></a>
<a id="trace-25622"></a>
<a id="trace-25624"></a>
<a id="trace-25637"></a>
<a id="trace-25639"></a>
<a id="trace-25710"></a>
<a id="trace-25712"></a>
<a id="trace-25725"></a>
<a id="trace-25727"></a>
<a id="trace-25738"></a>
<a id="trace-25740"></a>
<a id="trace-25761"></a>
<a id="trace-25870"></a>
<a id="trace-25872"></a>
<a id="trace-25942"></a>
<a id="trace-25944"></a>
<a id="trace-25964"></a>
<a id="trace-25966"></a>
<a id="trace-25980"></a>
<a id="trace-25982"></a>
<a id="trace-25992"></a>
<a id="trace-25994"></a>
<a id="trace-26112"></a>
<a id="trace-26114"></a>
<a id="trace-26192"></a>
<a id="trace-26194"></a>
<a id="trace-26207"></a>
<a id="trace-26209"></a>
<a id="trace-26224"></a>
<a id="trace-26235"></a>
<a id="trace-26237"></a>
<a id="trace-26251"></a>
<a id="trace-26253"></a>
<a id="trace-26328"></a>
<a id="trace-26330"></a>
<a id="trace-26539"></a>
<a id="trace-26541"></a>
<a id="trace-26572"></a>
<a id="trace-26574"></a>
<a id="trace-26603"></a>
<a id="trace-26778"></a>
<a id="trace-26780"></a>
<a id="trace-26867"></a>
<a id="trace-26869"></a>
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26915"></a>
<a id="trace-26917"></a>
<a id="trace-26929"></a>
<a id="trace-26931"></a>
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
<a id="trace-27042"></a>
<a id="trace-27044"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27080"></a>
<a id="trace-27096"></a>
<a id="trace-27098"></a>
<a id="trace-27176"></a>
<a id="trace-27199"></a>
<a id="trace-27201"></a>
<a id="trace-27218"></a>
<a id="trace-27220"></a>
<a id="trace-27231"></a>
<a id="trace-27245"></a>
<a id="trace-27247"></a>
<a id="trace-27320"></a>
<a id="trace-27355"></a>
<a id="trace-27357"></a>
<a id="trace-27379"></a>
<a id="trace-27394"></a>
<a id="trace-27396"></a>
<a id="trace-27408"></a>
<a id="trace-27410"></a>
<a id="trace-27477"></a>
<a id="trace-27479"></a>
<a id="trace-27488"></a>
<a id="trace-27490"></a>
<a id="trace-27501"></a>
<a id="trace-27503"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27525"></a>
<a id="trace-27592"></a>
<a id="trace-27594"></a>
<a id="trace-27599"></a>
<a id="trace-27601"></a>
<a id="trace-27611"></a>
<a id="trace-27613"></a>
<a id="trace-27619"></a>
<a id="trace-27621"></a>
<a id="trace-27635"></a>
<a id="trace-27705"></a>
<a id="trace-27707"></a>
<a id="trace-27722"></a>
<a id="trace-27724"></a>
<a id="trace-27736"></a>
<a id="trace-27738"></a>
<a id="trace-27744"></a>
<a id="trace-27746"></a>
<a id="trace-27764"></a>
<a id="trace-27766"></a>
<a id="trace-27832"></a>
<a id="trace-27834"></a>
<a id="trace-27846"></a>
<a id="trace-27848"></a>
<a id="trace-27856"></a>
<a id="trace-27858"></a>
<a id="trace-27869"></a>
<a id="trace-27871"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
- 227.30s–359.30s (×249), actor 38, squad 4 (trace 23424): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 225.00s, trace 23344. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4500040919632548, 'next_transition': 23438}.
<a id="trace-23588"></a>
- 234.70s–234.70s (×1), actor 8, squad 1 (trace 23588): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 230.00s, trace 23459. Next observer evidence: {'until': 249, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.912154324366584, 'next_transition': 24066}.
<a id="trace-23610"></a>
- 234.70s–234.70s (×1), actor 8, squad 1 (trace 23610): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 230.00s, trace 23459. Next observer evidence: {'until': 249, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.912154324366584, 'next_transition': 24066}.
<a id="trace-24066"></a>
- 249.00s–249.00s (×1), actor 8, squad 1 (trace 24066): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 245.00s, trace 23937. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3814151485198893, 'next_transition': 24353}.
<a id="trace-24353"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 24353): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.527131 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 259.90s, trace 24353. Next observer evidence: None.
<a id="trace-24354"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (trace 24354): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.527131 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 259.90s, trace 24354. Next observer evidence: None.
<a id="trace-2330"></a>
- 259.90s–259.90s (×1), actor 5, squad 1 (events line 2330): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 265, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24490}.
<a id="trace-24490"></a>
- 265.10s–265.10s (×1), actor 8, squad 1 (trace 24490): MoveTactically. Knowledge: actor memory at 265.00s, trace 24479. Next observer evidence: None.
<a id="trace-24491"></a>
- 265.10s–265.10s (×1), actor 8, squad 1 (trace 24491): received platoon directive. Knowledge: actor memory at 265.00s, trace 24479. Next observer evidence: None.
<a id="trace-24517"></a>
- 265.15s–265.15s (×1), actor 8, squad 1 (trace 24517): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 24479. Next observer evidence: {'until': 278.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.999999065454654, 'next_transition': 24973}.
<a id="trace-24973"></a>
- 278.50s–278.50s (×1), actor 8, squad 1 (trace 24973): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 275.00s, trace 24858. Next observer evidence: {'until': 291, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.074698513220557, 'next_transition': 25392}.
<a id="trace-25392"></a>
- 291.10s–291.10s (×1), actor 8, squad 1 (trace 25392): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 290.00s, trace 25313. Next observer evidence: {'until': 303.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.00000398430038, 'next_transition': 25766}.
<a id="trace-25766"></a>
- 303.70s–303.70s (×1), actor 8, squad 1 (trace 25766): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 300.00s, trace 25648. Next observer evidence: {'until': 308.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.285473717073177, 'next_transition': 25999}.
<a id="trace-25999"></a>
- 308.50s–308.50s (×1), actor 8, squad 1 (trace 25999): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 305.00s, trace 25881. Next observer evidence: {'until': 315.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 10.508342231227957, 'next_transition': 26334}.
<a id="trace-26093"></a>
- 308.50s–308.50s (×1), actor 8, squad 1 (trace 26093): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 305.00s, trace 25881. Next observer evidence: {'until': 315.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 10.508342231227957, 'next_transition': 26334}.
<a id="trace-26334"></a>
- 315.55s–315.55s (×1), actor 8, squad 1 (trace 26334): ReactToContact: cover and return fire. Knowledge: actor memory at 315.00s, trace 26267. Next observer evidence: {'until': 318.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.43277547308162, 'next_transition': 26615}.
<a id="trace-26335"></a>
- 315.55s–315.55s (×1), actor 8, squad 1 (trace 26335): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 315.00s, trace 26267. Next observer evidence: {'until': 318.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.43277547308162, 'next_transition': 26615}.
<a id="trace-26615"></a>
- 318.90s–318.90s (×1), actor 8, squad 1 (trace 26615): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 315.00s, trace 26267. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 9.771851577442808, 'next_transition': 27089}.
<a id="trace-26616"></a>
- 318.90s–318.90s (×1), actor 8, squad 1 (trace 26616): rearward bound: one stationary suppressing element. Knowledge: actor memory at 315.00s, trace 26267. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 9.771851577442808, 'next_transition': 27089}.
<a id="trace-27089"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (trace 27089): renew committed intent (75 s lifetime). Knowledge: actor memory at 328.90s, trace 27089. Next observer evidence: None.
<a id="trace-2604"></a>
- 328.90s–328.90s (×1), actor 5, squad 1 (events line 2604): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 330.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.628799828882821, 'next_transition': 27180}.
<a id="trace-27180"></a>
- 330.55s–330.55s (×1), actor 9, squad 1 (trace 27180): NeedSupport. Knowledge: actor memory at 330.00s, trace 27111. Next observer evidence: {'until': 334.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.979124198550695, 'next_transition': 27257}.
<a id="trace-27257"></a>
- 334.90s–334.90s (×1), actor 9, squad 1 (trace 27257): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 330.00s, trace 27111. Next observer evidence: {'until': 336, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13146992051416004, 'next_transition': 27329}.
<a id="trace-27329"></a>
- 336.00s–336.00s (×1), actor 9, squad 1 (trace 27329): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 335.00s, trace 27259. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27699}.
<a id="trace-27346"></a>
- 336.00s–336.00s (×1), actor 9, squad 1 (trace 27346): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 335.00s, trace 27259. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27699}.
<a id="trace-27699"></a>
- 350.25s–350.25s (×1), actor 9, squad 1 (trace 27699): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 350.00s, trace 27645. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

230 matched order/radio deliveries; 268 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.689s; maximum 5.450s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3938: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3946: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3948: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3949: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3950: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3951: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3953: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3954: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3956: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3957: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4815: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4821: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4823: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4824: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4825: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4826: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4827: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4828: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4830: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4831: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4832: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4833: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4834: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5158: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5163: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5164: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5166: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5167: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5168: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5169: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5170: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5171: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5173: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5174: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5175: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5176: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5177: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6249: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6250: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6252: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6254: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6255: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6257: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6258: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6259: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6260: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6261: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6262: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6263: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6264: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6265: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6266: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6267: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6268: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 9403: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 9404: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 9475: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9476: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9478: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9480: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9481: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 9483: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9484: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9485: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9486: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9487: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9488: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9489: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9490: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9491: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9492: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9493: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9494: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10443: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10444: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10445: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10447: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10448: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 10450: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10451: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10452: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10453: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10454: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10455: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10456: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10457: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10458: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10459: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10460: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10461: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 12709: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 12710: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 12711: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 12712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 12713: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 12714: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 12715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 12716: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 12717: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 12718: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 12719: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 12720: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 12721: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 12722: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 12723: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 12724: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 12725: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 12726: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 12727: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12996: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12997: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12998: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 13000: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 13001: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 13002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 13003: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 13004: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 13005: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 13006: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 13007: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 13008: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 13009: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 13010: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 13011: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 13012: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 13013: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 13014: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 13364: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13366: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13367: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 13369: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13370: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13371: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13372: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13373: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13374: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13375: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13376: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13377: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13378: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13379: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13380: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 14333: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 14334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 14335: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 14336: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 14337: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 14338: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 14339: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 14340: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 14341: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 14342: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 14343: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 14344: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 14345: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 14346: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 14347: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 14348: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 14349: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 14458: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 14459: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14659: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14661: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14662: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14663: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 14664: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14665: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14666: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14667: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14668: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14669: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14670: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14671: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14672: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14673: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14674: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14675: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 15152: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 15153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15154: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 15155: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 15156: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 15157: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15158: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15159: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15160: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15161: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15162: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 15163: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 15164: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15165: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15166: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15167: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 15168: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 15427: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 15428: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15429: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 15430: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 15431: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 15432: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15433: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15434: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15435: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15436: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 15437: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 15438: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15439: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15440: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 15441: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 15442: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 15508: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 15785: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 15786: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 15787: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 15788: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 15789: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 15790: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15791: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15792: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15793: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15794: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 15795: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 15796: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15797: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 15798: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 15799: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 15800: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 16132: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 16133: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 16134: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 16135: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 16136: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 16137: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 16138: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 16139: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 16140: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 16141: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 16142: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 16143: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 16144: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 16145: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 16146: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 16147: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 16421: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.15s leader 5, trace 16422: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 16469: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 16470: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16471: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16472: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 16473: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 16474: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16475: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16476: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16477: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16478: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16479: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16480: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16481: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16482: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16483: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16484: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 17140: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 17141: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 17142: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 17143: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 17144: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 17145: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 17146: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 17147: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 17148: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 17149: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 17150: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 17151: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 17152: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 17153: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 17154: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 17155: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 17402: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 17403: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 17404: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 17405: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 17406: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 17407: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 17408: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 17409: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 17410: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 17411: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 17412: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 17413: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 17414: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 17415: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 17416: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 17417: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 17658: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 17659: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 17660: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 17661: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 17662: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 17663: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 17664: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 17665: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 17666: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 17667: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 17668: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 17669: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 17670: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 17671: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 17672: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 17673: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17948: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17949: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17950: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 17951: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 17952: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17953: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17954: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17955: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17956: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17957: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17958: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17959: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17960: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17961: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17962: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 18308: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 18309: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 18310: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 18311: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 18312: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 18313: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 18314: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 18315: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 18316: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 18317: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 18318: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 18319: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 18320: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 18321: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 18322: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 18604: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 18605: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 18606: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 18607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 18608: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 18609: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 18610: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 18611: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 18612: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 18613: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 18614: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 18615: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 18616: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 18617: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18803: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18804: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 18805: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 18806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18807: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18808: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18809: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18810: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18811: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18812: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18813: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18814: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18815: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18816: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18976: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 18977: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18979: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18980: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18981: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18982: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18983: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18984: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18985: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18986: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18987: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 19044: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 19136: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 19137: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 19138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 19139: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 19140: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 19141: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 19142: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 19143: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 19144: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 19145: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 19146: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 19147: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 19148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19377: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 19378: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 19379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19380: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19381: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19382: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19383: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19384: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19385: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19386: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19387: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19388: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19532: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 19533: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 19534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19535: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19536: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19537: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19538: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19539: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19540: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19541: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19542: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19543: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 19727: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 19728: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 19729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19730: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19731: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19732: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19733: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19734: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19735: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19736: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19737: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19738: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 19899: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 19900: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 19901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19902: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 19903: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 19904: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 19905: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 19906: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 19907: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19908: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 19909: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 19910: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 20082: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20129: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 20130: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 20131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20132: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20133: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20134: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20135: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20136: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20137: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20138: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20139: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20140: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 20299: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 20300: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 20301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20302: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20303: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20304: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20305: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 20306: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 20307: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20308: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20309: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20310: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 20681: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 20682: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 20683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 20684: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 20685: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 20686: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 20687: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 20688: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 20689: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 20690: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 20691: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 20692: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 20693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 20866: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 20867: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 20868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20869: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20870: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20871: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20872: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 20873: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20874: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20875: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20876: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20877: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 21018: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 21019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 21020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21021: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21022: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21023: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21024: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21025: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21026: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21027: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21028: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21029: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21178: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 21179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 21181: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21182: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21184: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21185: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21186: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21187: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21188: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21189: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 21252: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 21253: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21342: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 21343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 21344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21345: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21346: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21348: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21349: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21350: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21351: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21352: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21353: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21710: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 21711: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 21712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21713: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21714: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21716: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21717: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21718: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21719: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21720: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21721: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22071: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 22072: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22073: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22074: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22075: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22077: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22078: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22079: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22080: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22081: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22082: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22268: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 22269: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22270: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22271: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22272: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22273: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22274: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22275: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22276: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22277: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22278: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22279: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22601: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 22602: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 22603: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22604: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22605: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22606: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22607: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22608: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22609: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22610: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22611: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22612: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23111: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 23112: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 23113: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23114: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23115: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23116: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23117: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23118: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23119: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23120: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23121: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23122: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23336: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 23337: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23338: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23339: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23340: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23341: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23342: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23343: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23344: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23345: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23346: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23458: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 23459: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 23460: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23461: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23462: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23463: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23464: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23465: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23466: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23467: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23468: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23665: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 23666: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 23667: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23668: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23669: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23670: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23671: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23673: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23674: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23675: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23803: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 23804: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 23805: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23806: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23807: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23808: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23809: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23811: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23812: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23813: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23936: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 23937: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 23938: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23939: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23940: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23941: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23942: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23944: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23945: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23946: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24088: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 24089: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 24090: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24091: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24092: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24093: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24094: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24096: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24097: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24098: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24238: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 24239: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24240: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24241: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24242: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24243: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24244: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24246: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24247: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24248: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 24353: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 24354: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24356: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 24357: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 24358: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24359: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24360: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24361: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24362: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24364: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24365: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24366: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24478: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 24479: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 24480: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24481: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24482: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24483: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24484: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24486: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24487: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24488: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24723: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 24724: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 24725: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24726: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24727: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24728: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24729: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24731: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24732: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24733: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24857: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 24858: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 24859: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24860: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24861: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24862: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24863: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24865: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24866: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24867: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25028: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 25029: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 25030: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 25031: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25032: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25033: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25034: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25036: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25037: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25038: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25170: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 25171: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 25172: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25173: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25174: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25175: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25176: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25178: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25179: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25180: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25312: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 25313: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 25314: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25315: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25316: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25317: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25318: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25320: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25321: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25322: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25512: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 8, trace 25513: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 25514: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25515: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25516: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25517: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25518: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25520: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25521: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25522: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25647: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 8, trace 25648: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25649: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25650: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25651: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25652: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25653: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25655: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25656: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25657: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25880: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 8, trace 25881: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 25882: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25883: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25884: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25885: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25886: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25888: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25889: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25890: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26131: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 8, trace 26132: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 26133: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 26134: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26135: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26136: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26137: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26139: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26140: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26141: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26266: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 8, trace 26267: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 26268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26269: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26270: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26271: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26272: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26274: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26275: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26276: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26799: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 8, trace 26800: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 26801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26802: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26803: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26804: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26805: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26807: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26808: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26809: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26961: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 8, trace 26962: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26964: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26965: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26967: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26969: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26970: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26971: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.90s leader 5, trace 27089: estimate 6.73; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 27110: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 27111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 27112: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 27113: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 27114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 27115: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 27116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 27117: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 27118: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 27119: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 27120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 27258: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 27259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 27260: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 27261: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 27262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 27263: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 27264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 27265: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 27266: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 27267: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 27268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27418: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 27419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27420: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27421: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27423: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27425: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27426: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27427: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27534: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 27535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27536: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27537: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27539: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27541: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27542: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27543: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27644: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 27645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27646: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27647: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27649: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27651: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27652: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27653: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27772: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 27773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27774: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27775: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27777: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27779: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27780: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27781: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27887: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 27888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27889: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27890: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27892: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27894: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27895: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27896: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Soren killed in action
- 1: Reed incapacitated
- 1: Ash incapacitated
- 1: Moss incapacitated
- 1: Tern incapacitated
- 1: Lark incapacitated
- 1: Bren killed in action

## Outcome attribution

- 174.85s, evidence 20679: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1934}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
