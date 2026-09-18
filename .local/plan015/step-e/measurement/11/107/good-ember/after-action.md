# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/11/107/good-ember/battle-107-1789673868594676087`

## Battle summary

**Ember** · 360 s · 503 shots.

### Turning points

- 26.9s, squad 4: contact (events line 253). First recorded contact.
- 38.7s, squad 0: withdrawal ([trace 4069](#trace-4069)). 109.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 152.5s, squad 0: withdrawal ([trace 10706](#trace-10706)). 190.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 163.8s, squad 0: help call ([trace 11597](#trace-11597)). No completion observed before termination.
- 228.3s, squad 0: help call ([trace 14559](#trace-14559)). No completion observed before termination.
- 269.2s, squad 0: help call ([trace 18288](#trace-18288)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 62 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 441 shots, 1/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1006](#trace-1006)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 30.9s, squad 0 chose took cover and returned fire ([trace 2225](#trace-2225)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1005](#trace-1005)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687612523838112, 'next_transition': 1023}.
- 122.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.112148 retreat threshold=0.220000 initiative=requires intent ([trace 8691](#trace-8691)). Following evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8706}.

### Communication

255 matched deliveries (mean 0.35s, max 5.35s); 235 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.95s, squad 4, contact, evidence events line 253: First recorded contact; .
- 38.65s, squad 0, withdrawal, evidence 4069: BreakContact: believed ratio at least two without superiority; 109.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 152.50s, squad 0, withdrawal, evidence 10706: BreakContact: believed ratio at least two without superiority; 190.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 163.80s, squad 0, help call, evidence 11597: NeedSupport; No completion observed before termination.
- 228.30s, squad 0, help call, evidence 14559: NeedSupport; No completion observed before termination.
- 269.20s, squad 0, help call, evidence 18288: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.947585126437595, 'next_transition': 513}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.947585126437595, 'next_transition': 513}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.947585126437595, 'next_transition': 513}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-515"></a>
<a id="trace-538"></a>
<a id="trace-557"></a>
<a id="trace-570"></a>
<a id="trace-587"></a>
<a id="trace-609"></a>
<a id="trace-630"></a>
<a id="trace-641"></a>
<a id="trace-650"></a>
<a id="trace-732"></a>
<a id="trace-741"></a>
<a id="trace-958"></a>
<a id="trace-981"></a>
<a id="trace-1004"></a>
<a id="trace-1025"></a>
<a id="trace-1045"></a>
<a id="trace-1064"></a>
<a id="trace-1089"></a>
<a id="trace-1106"></a>
<a id="trace-1187"></a>
<a id="trace-1201"></a>
<a id="trace-1224"></a>
<a id="trace-1243"></a>
<a id="trace-1258"></a>
<a id="trace-1271"></a>
<a id="trace-1291"></a>
<a id="trace-1305"></a>
<a id="trace-1321"></a>
<a id="trace-1331"></a>
<a id="trace-1414"></a>
<a id="trace-1435"></a>
<a id="trace-1447"></a>
<a id="trace-1458"></a>
<a id="trace-1480"></a>
<a id="trace-1490"></a>
<a id="trace-1837"></a>
<a id="trace-1855"></a>
<a id="trace-1876"></a>
<a id="trace-1896"></a>
<a id="trace-1979"></a>
<a id="trace-1994"></a>
<a id="trace-2025"></a>
<a id="trace-2041"></a>
<a id="trace-2060"></a>
<a id="trace-2075"></a>
<a id="trace-2092"></a>
<a id="trace-2105"></a>
<a id="trace-2119"></a>
<a id="trace-2130"></a>
<a id="trace-2209"></a>
<a id="trace-2219"></a>
<a id="trace-2727"></a>
<a id="trace-3239"></a>
<a id="trace-3264"></a>
<a id="trace-3305"></a>
<a id="trace-3321"></a>
<a id="trace-3339"></a>
<a id="trace-3367"></a>
<a id="trace-3383"></a>
<a id="trace-3949"></a>
<a id="trace-3963"></a>
<a id="trace-3979"></a>
<a id="trace-3994"></a>
<a id="trace-4005"></a>
<a id="trace-4016"></a>
<a id="trace-4043"></a>
<a id="trace-4407"></a>
<a id="trace-4433"></a>
<a id="trace-4464"></a>
<a id="trace-4599"></a>
<a id="trace-4654"></a>
<a id="trace-4701"></a>
<a id="trace-4733"></a>
<a id="trace-4770"></a>
<a id="trace-4781"></a>
<a id="trace-4793"></a>
<a id="trace-4799"></a>
<a id="trace-4814"></a>
<a id="trace-4827"></a>
<a id="trace-4907"></a>
<a id="trace-4917"></a>
<a id="trace-4935"></a>
<a id="trace-4944"></a>
<a id="trace-4959"></a>
<a id="trace-4964"></a>
<a id="trace-4982"></a>
<a id="trace-4995"></a>
<a id="trace-5009"></a>
<a id="trace-5026"></a>
<a id="trace-5119"></a>
<a id="trace-5137"></a>
<a id="trace-5158"></a>
<a id="trace-5276"></a>
<a id="trace-5311"></a>
<a id="trace-5340"></a>
<a id="trace-5354"></a>
<a id="trace-5372"></a>
<a id="trace-5399"></a>
<a id="trace-5421"></a>
<a id="trace-5502"></a>
<a id="trace-5510"></a>
<a id="trace-5521"></a>
<a id="trace-5534"></a>
<a id="trace-5544"></a>
<a id="trace-5553"></a>
<a id="trace-5567"></a>
<a id="trace-5579"></a>
<a id="trace-5588"></a>
<a id="trace-5595"></a>
<a id="trace-5671"></a>
<a id="trace-5682"></a>
<a id="trace-5696"></a>
<a id="trace-5703"></a>
<a id="trace-5721"></a>
<a id="trace-5736"></a>
<a id="trace-5748"></a>
<a id="trace-5756"></a>
<a id="trace-5771"></a>
<a id="trace-5781"></a>
<a id="trace-5863"></a>
<a id="trace-5870"></a>
<a id="trace-5898"></a>
<a id="trace-5907"></a>
<a id="trace-5916"></a>
<a id="trace-5927"></a>
<a id="trace-5942"></a>
<a id="trace-5952"></a>
<a id="trace-5965"></a>
<a id="trace-6189"></a>
<a id="trace-6276"></a>
<a id="trace-6291"></a>
<a id="trace-6307"></a>
<a id="trace-6321"></a>
<a id="trace-6347"></a>
<a id="trace-6357"></a>
<a id="trace-6373"></a>
<a id="trace-6379"></a>
<a id="trace-6405"></a>
<a id="trace-6416"></a>
<a id="trace-6498"></a>
<a id="trace-6508"></a>
<a id="trace-6525"></a>
<a id="trace-6535"></a>
<a id="trace-6552"></a>
<a id="trace-6563"></a>
<a id="trace-6586"></a>
<a id="trace-6595"></a>
<a id="trace-6614"></a>
<a id="trace-6624"></a>
<a id="trace-6705"></a>
<a id="trace-6723"></a>
<a id="trace-6739"></a>
<a id="trace-6753"></a>
<a id="trace-6885"></a>
<a id="trace-6897"></a>
<a id="trace-6916"></a>
<a id="trace-6934"></a>
<a id="trace-6955"></a>
<a id="trace-6976"></a>
<a id="trace-7053"></a>
<a id="trace-7061"></a>
<a id="trace-7083"></a>
<a id="trace-7090"></a>
<a id="trace-7104"></a>
<a id="trace-7112"></a>
<a id="trace-7127"></a>
<a id="trace-7138"></a>
<a id="trace-7153"></a>
<a id="trace-7162"></a>
<a id="trace-7243"></a>
<a id="trace-7253"></a>
<a id="trace-7260"></a>
<a id="trace-7267"></a>
<a id="trace-7283"></a>
<a id="trace-7294"></a>
<a id="trace-7306"></a>
<a id="trace-7315"></a>
<a id="trace-7440"></a>
<a id="trace-7455"></a>
<a id="trace-7539"></a>
<a id="trace-7552"></a>
<a id="trace-7573"></a>
<a id="trace-7593"></a>
<a id="trace-7615"></a>
<a id="trace-7619"></a>
<a id="trace-7634"></a>
<a id="trace-7641"></a>
<a id="trace-7649"></a>
<a id="trace-7656"></a>
<a id="trace-7728"></a>
<a id="trace-7735"></a>
<a id="trace-7744"></a>
<a id="trace-7748"></a>
<a id="trace-7760"></a>
<a id="trace-7765"></a>
<a id="trace-7773"></a>
<a id="trace-7779"></a>
<a id="trace-7789"></a>
<a id="trace-7802"></a>
<a id="trace-7874"></a>
<a id="trace-7884"></a>
<a id="trace-7892"></a>
<a id="trace-7897"></a>
<a id="trace-7907"></a>
<a id="trace-7912"></a>
<a id="trace-7921"></a>
<a id="trace-7927"></a>
<a id="trace-7935"></a>
<a id="trace-7948"></a>
<a id="trace-8027"></a>
<a id="trace-8056"></a>
<a id="trace-8084"></a>
<a id="trace-8215"></a>
<a id="trace-8247"></a>
<a id="trace-8269"></a>
<a id="trace-8295"></a>
<a id="trace-8305"></a>
<a id="trace-8332"></a>
<a id="trace-8339"></a>
<a id="trace-8415"></a>
<a id="trace-8422"></a>
<a id="trace-8441"></a>
<a id="trace-8452"></a>
<a id="trace-8467"></a>
<a id="trace-8482"></a>
<a id="trace-8506"></a>
<a id="trace-8514"></a>
<a id="trace-8529"></a>
<a id="trace-8540"></a>
<a id="trace-8623"></a>
<a id="trace-8630"></a>
<a id="trace-8648"></a>
<a id="trace-8654"></a>
<a id="trace-8672"></a>
<a id="trace-8690"></a>
<a id="trace-8701"></a>
<a id="trace-8823"></a>
<a id="trace-8844"></a>
<a id="trace-8857"></a>
<a id="trace-8947"></a>
<a id="trace-8967"></a>
<a id="trace-8992"></a>
<a id="trace-8999"></a>
<a id="trace-9010"></a>
<a id="trace-9018"></a>
<a id="trace-9033"></a>
<a id="trace-9156"></a>
<a id="trace-9170"></a>
<a id="trace-9183"></a>
<a id="trace-9269"></a>
<a id="trace-9283"></a>
<a id="trace-9300"></a>
<a id="trace-9311"></a>
<a id="trace-9335"></a>
<a id="trace-9350"></a>
<a id="trace-9362"></a>
<a id="trace-9368"></a>
<a id="trace-9385"></a>
<a id="trace-9543"></a>
<a id="trace-9624"></a>
<a id="trace-9635"></a>
<a id="trace-9648"></a>
<a id="trace-9666"></a>
<a id="trace-9683"></a>
<a id="trace-9695"></a>
<a id="trace-9719"></a>
<a id="trace-9730"></a>
<a id="trace-9746"></a>
<a id="trace-9755"></a>
<a id="trace-9836"></a>
<a id="trace-9855"></a>
<a id="trace-9867"></a>
<a id="trace-9877"></a>
<a id="trace-9893"></a>
<a id="trace-9902"></a>
<a id="trace-9912"></a>
<a id="trace-10027"></a>
<a id="trace-10040"></a>
<a id="trace-10060"></a>
<a id="trace-10141"></a>
<a id="trace-10150"></a>
<a id="trace-10167"></a>
<a id="trace-10180"></a>
<a id="trace-10200"></a>
<a id="trace-10213"></a>
<a id="trace-10231"></a>
<a id="trace-10248"></a>
<a id="trace-10504"></a>
<a id="trace-10517"></a>
<a id="trace-10612"></a>
<a id="trace-10635"></a>
<a id="trace-10646"></a>
<a id="trace-10670"></a>
<a id="trace-10702"></a>
<a id="trace-11047"></a>
<a id="trace-11064"></a>
<a id="trace-11084"></a>
<a id="trace-11108"></a>
<a id="trace-11123"></a>
<a id="trace-11205"></a>
<a id="trace-11225"></a>
<a id="trace-11238"></a>
<a id="trace-11251"></a>
<a id="trace-11260"></a>
<a id="trace-11268"></a>
<a id="trace-11287"></a>
<a id="trace-11300"></a>
<a id="trace-11315"></a>
<a id="trace-11322"></a>
<a id="trace-11403"></a>
<a id="trace-11421"></a>
<a id="trace-11429"></a>
<a id="trace-11436"></a>
<a id="trace-11451"></a>
<a id="trace-11568"></a>
<a id="trace-11581"></a>
<a id="trace-11596"></a>
<a id="trace-11621"></a>
<a id="trace-11639"></a>
<a id="trace-11723"></a>
<a id="trace-11735"></a>
<a id="trace-11757"></a>
<a id="trace-11762"></a>
<a id="trace-11770"></a>
<a id="trace-11775"></a>
<a id="trace-11790"></a>
<a id="trace-11804"></a>
<a id="trace-11818"></a>
<a id="trace-11824"></a>
<a id="trace-11906"></a>
<a id="trace-11917"></a>
<a id="trace-11927"></a>
<a id="trace-11936"></a>
<a id="trace-11951"></a>
<a id="trace-11965"></a>
<a id="trace-11977"></a>
<a id="trace-11993"></a>
<a id="trace-12009"></a>
<a id="trace-12018"></a>
<a id="trace-12094"></a>
<a id="trace-12101"></a>
<a id="trace-12115"></a>
<a id="trace-12129"></a>
<a id="trace-12140"></a>
<a id="trace-12145"></a>
<a id="trace-12168"></a>
<a id="trace-12176"></a>
<a id="trace-12185"></a>
<a id="trace-12197"></a>
<a id="trace-12271"></a>
<a id="trace-12284"></a>
<a id="trace-12298"></a>
<a id="trace-12306"></a>
<a id="trace-12547"></a>
<a id="trace-12567"></a>
<a id="trace-12585"></a>
<a id="trace-12596"></a>
<a id="trace-12616"></a>
<a id="trace-12640"></a>
<a id="trace-12718"></a>
<a id="trace-12728"></a>
<a id="trace-12753"></a>
<a id="trace-12761"></a>
<a id="trace-12776"></a>
<a id="trace-12787"></a>
<a id="trace-12804"></a>
<a id="trace-12820"></a>
<a id="trace-12830"></a>
<a id="trace-12840"></a>
<a id="trace-12926"></a>
<a id="trace-12940"></a>
<a id="trace-12961"></a>
<a id="trace-12986"></a>
<a id="trace-13006"></a>
<a id="trace-13028"></a>
<a id="trace-13055"></a>
<a id="trace-13064"></a>
<a id="trace-13083"></a>
<a id="trace-13095"></a>
<a id="trace-13172"></a>
<a id="trace-13180"></a>
<a id="trace-13200"></a>
<a id="trace-13217"></a>
<a id="trace-13225"></a>
<a id="trace-13232"></a>
<a id="trace-13253"></a>
<a id="trace-13264"></a>
<a id="trace-13274"></a>
<a id="trace-13283"></a>
<a id="trace-13355"></a>
<a id="trace-13362"></a>
<a id="trace-13369"></a>
<a id="trace-13376"></a>
<a id="trace-13384"></a>
<a id="trace-13390"></a>
<a id="trace-13401"></a>
<a id="trace-13406"></a>
<a id="trace-13417"></a>
<a id="trace-13423"></a>
<a id="trace-13499"></a>
<a id="trace-13508"></a>
<a id="trace-13519"></a>
<a id="trace-13527"></a>
<a id="trace-13534"></a>
<a id="trace-13541"></a>
<a id="trace-13552"></a>
<a id="trace-13557"></a>
<a id="trace-13564"></a>
<a id="trace-13570"></a>
<a id="trace-13643"></a>
<a id="trace-13649"></a>
<a id="trace-13658"></a>
<a id="trace-13793"></a>
<a id="trace-13811"></a>
<a id="trace-13833"></a>
<a id="trace-13851"></a>
<a id="trace-13858"></a>
<a id="trace-13890"></a>
<a id="trace-13905"></a>
<a id="trace-13978"></a>
<a id="trace-13983"></a>
<a id="trace-13998"></a>
<a id="trace-14009"></a>
<a id="trace-14024"></a>
<a id="trace-14032"></a>
<a id="trace-14053"></a>
<a id="trace-14068"></a>
<a id="trace-14077"></a>
<a id="trace-14086"></a>
<a id="trace-14165"></a>
<a id="trace-14176"></a>
<a id="trace-14187"></a>
<a id="trace-14197"></a>
<a id="trace-14215"></a>
<a id="trace-14224"></a>
<a id="trace-14241"></a>
<a id="trace-14247"></a>
<a id="trace-14264"></a>
<a id="trace-14278"></a>
<a id="trace-14357"></a>
<a id="trace-14476"></a>
<a id="trace-14495"></a>
<a id="trace-14510"></a>
<a id="trace-14522"></a>
<a id="trace-14529"></a>
<a id="trace-14556"></a>
<a id="trace-14626"></a>
<a id="trace-14638"></a>
<a id="trace-14654"></a>
<a id="trace-14738"></a>
<a id="trace-14744"></a>
<a id="trace-14766"></a>
<a id="trace-14780"></a>
<a id="trace-14798"></a>
<a id="trace-16668"></a>
<a id="trace-16681"></a>
<a id="trace-16706"></a>
<a id="trace-16724"></a>
<a id="trace-16732"></a>
<a id="trace-16813"></a>
<a id="trace-16822"></a>
<a id="trace-16835"></a>
<a id="trace-16850"></a>
<a id="trace-16857"></a>
<a id="trace-16864"></a>
<a id="trace-16883"></a>
<a id="trace-16893"></a>
<a id="trace-16907"></a>
<a id="trace-16916"></a>
<a id="trace-16993"></a>
<a id="trace-17006"></a>
<a id="trace-17015"></a>
<a id="trace-17022"></a>
<a id="trace-17039"></a>
<a id="trace-17047"></a>
<a id="trace-17061"></a>
<a id="trace-17072"></a>
<a id="trace-17084"></a>
<a id="trace-17106"></a>
<a id="trace-17176"></a>
<a id="trace-17288"></a>
<a id="trace-17309"></a>
<a id="trace-17327"></a>
<a id="trace-17336"></a>
<a id="trace-17349"></a>
<a id="trace-17377"></a>
<a id="trace-17395"></a>
<a id="trace-17407"></a>
<a id="trace-17418"></a>
<a id="trace-17501"></a>
<a id="trace-17510"></a>
<a id="trace-17520"></a>
<a id="trace-17529"></a>
<a id="trace-17544"></a>
<a id="trace-17556"></a>
<a id="trace-17574"></a>
<a id="trace-17581"></a>
<a id="trace-17599"></a>
<a id="trace-17611"></a>
<a id="trace-17681"></a>
<a id="trace-17686"></a>
<a id="trace-17699"></a>
<a id="trace-17707"></a>
<a id="trace-17720"></a>
<a id="trace-17817"></a>
<a id="trace-17838"></a>
<a id="trace-17856"></a>
<a id="trace-17870"></a>
<a id="trace-17881"></a>
<a id="trace-17961"></a>
<a id="trace-17977"></a>
<a id="trace-17991"></a>
<a id="trace-18002"></a>
<a id="trace-18018"></a>
<a id="trace-18027"></a>
<a id="trace-18042"></a>
<a id="trace-18054"></a>
<a id="trace-18071"></a>
<a id="trace-18081"></a>
<a id="trace-18161"></a>
<a id="trace-18221"></a>
<a id="trace-18240"></a>
<a id="trace-18250"></a>
<a id="trace-18256"></a>
<a id="trace-18262"></a>
<a id="trace-18273"></a>
<a id="trace-18280"></a>
<a id="trace-18299"></a>
<a id="trace-18303"></a>
<a id="trace-18385"></a>
<a id="trace-18444"></a>
<a id="trace-18459"></a>
<a id="trace-18468"></a>
<a id="trace-18477"></a>
<a id="trace-18492"></a>
<a id="trace-18505"></a>
<a id="trace-18510"></a>
<a id="trace-18521"></a>
<a id="trace-18531"></a>
<a id="trace-18600"></a>
<a id="trace-18606"></a>
<a id="trace-18676"></a>
<a id="trace-18685"></a>
<a id="trace-18699"></a>
<a id="trace-18704"></a>
<a id="trace-18717"></a>
<a id="trace-18729"></a>
<a id="trace-18741"></a>
<a id="trace-18749"></a>
<a id="trace-18822"></a>
<a id="trace-18833"></a>
<a id="trace-18847"></a>
<a id="trace-18911"></a>
<a id="trace-18930"></a>
<a id="trace-18938"></a>
<a id="trace-18950"></a>
<a id="trace-18961"></a>
<a id="trace-18975"></a>
<a id="trace-18986"></a>
<a id="trace-19059"></a>
<a id="trace-19068"></a>
<a id="trace-19082"></a>
<a id="trace-19090"></a>
<a id="trace-19102"></a>
<a id="trace-19112"></a>
<a id="trace-19129"></a>
<a id="trace-19138"></a>
<a id="trace-19149"></a>
<a id="trace-19154"></a>
<a id="trace-19222"></a>
<a id="trace-19234"></a>
<a id="trace-19241"></a>
<a id="trace-19249"></a>
<a id="trace-19257"></a>
<a id="trace-19263"></a>
<a id="trace-19273"></a>
<a id="trace-19278"></a>
<a id="trace-19283"></a>
<a id="trace-19294"></a>
<a id="trace-19360"></a>
<a id="trace-19366"></a>
<a id="trace-19373"></a>
<a id="trace-19380"></a>
<a id="trace-19384"></a>
<a id="trace-19386"></a>
<a id="trace-19393"></a>
<a id="trace-19396"></a>
<a id="trace-19400"></a>
<a id="trace-19406"></a>
<a id="trace-19476"></a>
<a id="trace-19484"></a>
<a id="trace-19491"></a>
<a id="trace-19497"></a>
<a id="trace-19504"></a>
<a id="trace-19511"></a>
<a id="trace-19518"></a>
<a id="trace-19527"></a>
<a id="trace-19534"></a>
<a id="trace-19539"></a>
<a id="trace-19610"></a>
<a id="trace-19616"></a>
<a id="trace-19626"></a>
<a id="trace-19633"></a>
<a id="trace-19641"></a>
<a id="trace-19646"></a>
<a id="trace-19653"></a>
<a id="trace-19662"></a>
<a id="trace-19669"></a>
<a id="trace-19675"></a>
<a id="trace-19745"></a>
<a id="trace-19751"></a>
<a id="trace-19760"></a>
<a id="trace-19767"></a>
<a id="trace-19782"></a>
<a id="trace-19790"></a>
<a id="trace-19801"></a>
<a id="trace-19807"></a>
<a id="trace-19814"></a>
<a id="trace-19821"></a>
<a id="trace-19889"></a>
<a id="trace-19897"></a>
<a id="trace-19905"></a>
<a id="trace-19912"></a>
<a id="trace-19920"></a>
<a id="trace-19926"></a>
<a id="trace-19938"></a>
<a id="trace-19947"></a>
<a id="trace-19956"></a>
<a id="trace-19962"></a>
<a id="trace-20034"></a>
<a id="trace-20041"></a>
<a id="trace-20049"></a>
<a id="trace-20058"></a>
<a id="trace-20065"></a>
<a id="trace-20070"></a>
<a id="trace-20080"></a>
<a id="trace-20086"></a>
<a id="trace-20100"></a>
<a id="trace-20173"></a>
<a id="trace-20179"></a>
<a id="trace-20187"></a>
<a id="trace-20197"></a>
<a id="trace-20206"></a>
<a id="trace-20213"></a>
<a id="trace-20222"></a>
<a id="trace-20228"></a>
<a id="trace-20237"></a>
<a id="trace-20241"></a>
<a id="trace-20312"></a>
<a id="trace-20319"></a>
<a id="trace-20327"></a>
<a id="trace-20335"></a>
<a id="trace-20345"></a>
<a id="trace-20353"></a>
<a id="trace-20361"></a>
<a id="trace-20369"></a>
<a id="trace-20380"></a>
<a id="trace-20385"></a>
<a id="trace-20455"></a>
<a id="trace-20469"></a>
<a id="trace-20476"></a>
<a id="trace-20485"></a>
<a id="trace-20489"></a>
<a id="trace-20498"></a>
<a id="trace-20509"></a>
<a id="trace-20516"></a>
<a id="trace-20523"></a>
<a id="trace-20592"></a>
<a id="trace-20598"></a>
<a id="trace-20608"></a>
<a id="trace-20617"></a>
<a id="trace-20627"></a>
<a id="trace-20632"></a>
<a id="trace-20641"></a>
<a id="trace-20648"></a>
<a id="trace-20656"></a>
<a id="trace-20663"></a>
<a id="trace-20736"></a>
<a id="trace-20752"></a>
<a id="trace-20758"></a>
<a id="trace-20769"></a>
<a id="trace-20774"></a>
<a id="trace-20783"></a>
<a id="trace-20792"></a>
<a id="trace-20800"></a>
<a id="trace-20805"></a>
<a id="trace-20874"></a>
<a id="trace-20883"></a>
<a id="trace-20891"></a>
<a id="trace-20903"></a>
<a id="trace-20965"></a>
<a id="trace-20974"></a>
<a id="trace-20983"></a>
<a id="trace-20993"></a>
<a id="trace-21002"></a>
<a id="trace-21009"></a>
<a id="trace-21081"></a>
<a id="trace-21089"></a>
<a id="trace-21103"></a>
<a id="trace-21116"></a>
<a id="trace-21136"></a>
<a id="trace-21151"></a>
<a id="trace-21160"></a>
<a id="trace-21168"></a>
<a id="trace-21175"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48299323775023906, 'next_transition': 351}.
<a id="trace-513"></a>
<a id="trace-568"></a>
<a id="trace-585"></a>
<a id="trace-607"></a>
<a id="trace-628"></a>
<a id="trace-648"></a>
<a id="trace-730"></a>
<a id="trace-739"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 513): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.8104064467114167, 'next_transition': 568}.
<a id="trace-745"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 745): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3999941401966107, 'next_transition': 956}.
<a id="trace-956"></a>
<a id="trace-979"></a>
<a id="trace-1002"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 956): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 655. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33926284563284353, 'next_transition': 979}.
<a id="trace-131"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 131): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687612523838112, 'next_transition': 1023}.
<a id="trace-1005"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1005): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1005. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687612523838112, 'next_transition': 1023}.
<a id="trace-1006"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1006): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1006. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687612523838112, 'next_transition': 1023}.
<a id="trace-1023"></a>
<a id="trace-1043"></a>
<a id="trace-1062"></a>
<a id="trace-1185"></a>
<a id="trace-1222"></a>
<a id="trace-1269"></a>
<a id="trace-1303"></a>
<a id="trace-1319"></a>
<a id="trace-1329"></a>
<a id="trace-1412"></a>
<a id="trace-1433"></a>
<a id="trace-1456"></a>
<a id="trace-1478"></a>
<a id="trace-1488"></a>
- 12.70s–22.75s (×14), actor 5, squad 0 (trace 1023): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1006. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8300023690502882, 'next_transition': 1043}.
<a id="trace-1494"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1494): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1337. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23243177663516337, 'next_transition': 1835}.
<a id="trace-1495"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1495): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1337. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23243177663516337, 'next_transition': 1835}.
<a id="trace-1835"></a>
<a id="trace-1853"></a>
<a id="trace-1874"></a>
<a id="trace-1977"></a>
<a id="trace-1992"></a>
<a id="trace-2023"></a>
<a id="trace-2039"></a>
<a id="trace-2058"></a>
<a id="trace-2073"></a>
<a id="trace-2090"></a>
<a id="trace-2103"></a>
<a id="trace-2207"></a>
- 23.25s–30.25s (×12), actor 5, squad 0 (trace 1835): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1340. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574958387423926, 'next_transition': 1853}.
<a id="trace-2225"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2225): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2132. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0291069724891566, 'next_transition': 2734}.
<a id="trace-2226"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2226): bounding overwatch. Knowledge: actor memory at 30.00s, trace 2132. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0291069724891566, 'next_transition': 2734}.
<a id="trace-2227"></a>
<a id="trace-2734"></a>
- 30.85s–31.50s (×2), actor 0, squad 0 (trace 2227): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2132. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0291069724891566, 'next_transition': 2734}.
<a id="trace-3303"></a>
<a id="trace-3337"></a>
- 32.75s–33.75s (×2), actor 5, squad 0 (trace 3303): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2135. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9975005063051969, 'next_transition': 3337}.
<a id="trace-3398"></a>
- 34.95s–34.95s (×1), actor 0, squad 0 (trace 3398): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2132. Next observer evidence: {'until': 35.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3947}.
<a id="trace-3947"></a>
<a id="trace-3961"></a>
<a id="trace-3977"></a>
<a id="trace-3992"></a>
<a id="trace-4003"></a>
<a id="trace-4014"></a>
- 35.25s–37.75s (×6), actor 5, squad 0 (trace 3947): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3875. Next observer evidence: {'until': 35.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3961}.
<a id="trace-4069"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4069): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 3872. Next observer evidence: None.
<a id="trace-4070"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4070): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 3872. Next observer evidence: None.
<a id="trace-4405"></a>
<a id="trace-4431"></a>
<a id="trace-4462"></a>
- 38.75s–39.75s (×3), actor 5, squad 0 (trace 4405): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3875. Next observer evidence: {'until': 39.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.31553271793723875, 'next_transition': 4431}.
<a id="trace-4507"></a>
- 40.00s–40.00s (×1), actor 0, squad 0 (trace 4507): Fixing. Knowledge: actor memory at 40.00s, trace 4493. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2626783993123457, 'next_transition': 4597}.
<a id="trace-4597"></a>
<a id="trace-4652"></a>
- 40.25s–40.75s (×2), actor 5, squad 0 (trace 4597): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4496. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6303530014878366, 'next_transition': 4652}.
<a id="trace-4670"></a>
- 40.90s–40.90s (×1), actor 0, squad 0 (trace 4670): support established: element delivered fire on threat area. Knowledge: actor memory at 40.00s, trace 4493. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7816392801210781, 'next_transition': 4699}.
<a id="trace-4699"></a>
<a id="trace-4768"></a>
<a id="trace-4779"></a>
<a id="trace-4791"></a>
<a id="trace-4825"></a>
<a id="trace-4905"></a>
<a id="trace-4915"></a>
<a id="trace-4933"></a>
<a id="trace-4942"></a>
<a id="trace-4957"></a>
<a id="trace-4993"></a>
<a id="trace-5007"></a>
<a id="trace-5024"></a>
<a id="trace-5117"></a>
<a id="trace-5135"></a>
<a id="trace-5156"></a>
- 41.25s–51.25s (×16), actor 5, squad 0 (trace 4699): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4496. Next observer evidence: {'until': 42.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.7352308026184868, 'next_transition': 4768}.
<a id="trace-5161"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 5161): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 5037. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3291378912601323, 'next_transition': 5274}.
<a id="trace-5162"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 5162): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 5037. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3291378912601323, 'next_transition': 5274}.
<a id="trace-5274"></a>
<a id="trace-5309"></a>
<a id="trace-5338"></a>
<a id="trace-5352"></a>
<a id="trace-5397"></a>
<a id="trace-5419"></a>
<a id="trace-5500"></a>
<a id="trace-5508"></a>
<a id="trace-5519"></a>
<a id="trace-5542"></a>
<a id="trace-5551"></a>
<a id="trace-5565"></a>
<a id="trace-5577"></a>
<a id="trace-5593"></a>
<a id="trace-5669"></a>
- 51.75s–60.25s (×15), actor 5, squad 0 (trace 5274): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5040. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08816666666666666, 'next_transition': 5309}.
<a id="trace-5684"></a>
- 60.95s–60.95s (×1), actor 0, squad 0 (trace 5684): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 60.00s, trace 5597. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5874596403777885, 'next_transition': 5694}.
<a id="trace-5694"></a>
<a id="trace-5701"></a>
<a id="trace-5719"></a>
<a id="trace-5734"></a>
<a id="trace-5746"></a>
<a id="trace-5754"></a>
<a id="trace-5769"></a>
<a id="trace-5779"></a>
<a id="trace-5861"></a>
<a id="trace-5868"></a>
<a id="trace-5896"></a>
<a id="trace-5905"></a>
<a id="trace-5914"></a>
<a id="trace-5925"></a>
<a id="trace-5940"></a>
<a id="trace-5950"></a>
<a id="trace-5963"></a>
- 61.25s–69.25s (×17), actor 5, squad 0 (trace 5694): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 5600. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47712827771987915, 'next_transition': 5701}.
<a id="trace-5966"></a>
- 69.35s–69.35s (×1), actor 0, squad 0 (trace 5966): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 5791. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5710909721733805, 'next_transition': 6187}.
<a id="trace-6074"></a>
- 69.35s–69.35s (×1), actor 0, squad 0 (trace 6074): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 5791. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5710909721733805, 'next_transition': 6187}.
<a id="trace-6187"></a>
<a id="trace-6274"></a>
<a id="trace-6289"></a>
<a id="trace-6305"></a>
<a id="trace-6319"></a>
<a id="trace-6345"></a>
<a id="trace-6371"></a>
<a id="trace-6414"></a>
<a id="trace-6496"></a>
<a id="trace-6523"></a>
<a id="trace-6533"></a>
<a id="trace-6550"></a>
<a id="trace-6561"></a>
<a id="trace-6584"></a>
<a id="trace-6593"></a>
<a id="trace-6612"></a>
<a id="trace-6622"></a>
<a id="trace-6703"></a>
<a id="trace-6721"></a>
- 69.75s–80.75s (×19), actor 5, squad 0 (trace 6187): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5794. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0854365424029891, 'next_transition': 6274}.
<a id="trace-726"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (events line 726): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6741"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 6741): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.30s, trace 6741. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.603567422417132, 'next_transition': 6751}.
<a id="trace-6751"></a>
- 81.75s–81.75s (×1), actor 5, squad 0 (trace 6751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 6741. Next observer evidence: {'until': 82.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5774781121393274, 'next_transition': 6883}.
<a id="trace-6754"></a>
- 81.75s–81.75s (×1), actor 0, squad 0 (trace 6754): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 6628. Next observer evidence: {'until': 82.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5774781121393274, 'next_transition': 6883}.
<a id="trace-6755"></a>
- 81.75s–81.75s (×1), actor 0, squad 0 (trace 6755): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 6628. Next observer evidence: {'until': 82.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5774781121393274, 'next_transition': 6883}.
<a id="trace-6883"></a>
<a id="trace-6895"></a>
<a id="trace-6953"></a>
<a id="trace-6974"></a>
<a id="trace-7051"></a>
<a id="trace-7059"></a>
<a id="trace-7081"></a>
<a id="trace-7102"></a>
<a id="trace-7110"></a>
<a id="trace-7125"></a>
<a id="trace-7136"></a>
<a id="trace-7151"></a>
<a id="trace-7160"></a>
<a id="trace-7241"></a>
<a id="trace-7251"></a>
<a id="trace-7258"></a>
<a id="trace-7265"></a>
<a id="trace-7281"></a>
<a id="trace-7292"></a>
<a id="trace-7304"></a>
- 82.25s–93.25s (×20), actor 5, squad 0 (trace 6883): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 6741. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13125035670850996, 'next_transition': 6895}.
<a id="trace-7317"></a>
- 93.95s–93.95s (×1), actor 0, squad 0 (trace 7317): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 7164. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4467232211472374, 'next_transition': 7453}.
<a id="trace-7318"></a>
- 93.95s–93.95s (×1), actor 0, squad 0 (trace 7318): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 7164. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4467232211472374, 'next_transition': 7453}.
<a id="trace-7453"></a>
<a id="trace-7550"></a>
<a id="trace-7571"></a>
<a id="trace-7591"></a>
<a id="trace-7613"></a>
<a id="trace-7632"></a>
<a id="trace-7647"></a>
<a id="trace-7654"></a>
<a id="trace-7726"></a>
<a id="trace-7742"></a>
<a id="trace-7758"></a>
<a id="trace-7763"></a>
<a id="trace-7771"></a>
<a id="trace-7777"></a>
<a id="trace-7787"></a>
<a id="trace-7800"></a>
<a id="trace-7872"></a>
<a id="trace-7882"></a>
<a id="trace-7890"></a>
<a id="trace-7895"></a>
<a id="trace-7905"></a>
<a id="trace-7910"></a>
<a id="trace-7919"></a>
<a id="trace-7925"></a>
<a id="trace-7933"></a>
- 94.75s–109.25s (×25), actor 5, squad 0 (trace 7453): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 7167. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4188260259935512, 'next_transition': 7550}.
<a id="trace-7936"></a>
- 109.25s–109.25s (×1), actor 0, squad 0 (trace 7936): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 105.00s, trace 7803. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7946}.
<a id="trace-7946"></a>
<a id="trace-8025"></a>
- 109.75s–110.25s (×2), actor 5, squad 0 (trace 7946): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 7806. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8025}.
<a id="trace-8028"></a>
- 110.25s–110.25s (×1), actor 0, squad 0 (trace 8028): MoveTactically. Knowledge: actor memory at 110.00s, trace 7954. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8054}.
<a id="trace-8029"></a>
- 110.25s–110.25s (×1), actor 0, squad 0 (trace 8029): received platoon directive. Knowledge: actor memory at 110.00s, trace 7954. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8054}.
<a id="trace-8054"></a>
<a id="trace-8082"></a>
- 110.75s–111.25s (×2), actor 5, squad 0 (trace 8054): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7957. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8082}.
<a id="trace-8085"></a>
- 111.25s–111.25s (×1), actor 0, squad 0 (trace 8085): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 7954. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8213}.
<a id="trace-8213"></a>
<a id="trace-8245"></a>
<a id="trace-8267"></a>
<a id="trace-8293"></a>
<a id="trace-8303"></a>
<a id="trace-8330"></a>
<a id="trace-8337"></a>
<a id="trace-8413"></a>
<a id="trace-8420"></a>
<a id="trace-8439"></a>
<a id="trace-8465"></a>
<a id="trace-8504"></a>
<a id="trace-8512"></a>
<a id="trace-8527"></a>
<a id="trace-8538"></a>
<a id="trace-8621"></a>
<a id="trace-8628"></a>
<a id="trace-8646"></a>
<a id="trace-8652"></a>
<a id="trace-8670"></a>
- 111.75s–122.25s (×20), actor 5, squad 0 (trace 8213): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7957. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8245}.
<a id="trace-8681"></a>
- 122.55s–122.55s (×1), actor 0, squad 0 (trace 8681): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 8544. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8688}.
<a id="trace-8688"></a>
- 122.75s–122.75s (×1), actor 5, squad 0 (trace 8688): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 8547. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 994}.
<a id="trace-994"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 994): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8706}.
<a id="trace-8691"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 8691): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.112148 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 122.80s, trace 8691. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8706}.
<a id="trace-8692"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 8692): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.112148 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 122.80s, trace 8692. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8706}.
<a id="trace-8706"></a>
- 123.55s–123.55s (×1), actor 0, squad 0 (trace 8706): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 8544. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8821}.
<a id="trace-8821"></a>
<a id="trace-8842"></a>
<a id="trace-8945"></a>
<a id="trace-8965"></a>
<a id="trace-8990"></a>
<a id="trace-9008"></a>
<a id="trace-9016"></a>
<a id="trace-9031"></a>
- 123.75s–128.30s (×8), actor 5, squad 0 (trace 8821): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 8692. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13384370414974495, 'next_transition': 8842}.
<a id="trace-9034"></a>
- 128.30s–128.30s (×1), actor 0, squad 0 (trace 9034): received platoon directive. Knowledge: actor memory at 125.00s, trace 8871. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6749738884179334, 'next_transition': 9154}.
<a id="trace-9154"></a>
<a id="trace-9168"></a>
<a id="trace-9181"></a>
<a id="trace-9267"></a>
<a id="trace-9281"></a>
<a id="trace-9309"></a>
<a id="trace-9333"></a>
<a id="trace-9348"></a>
<a id="trace-9360"></a>
- 128.80s–133.30s (×9), actor 5, squad 0 (trace 9154): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 8874. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7943111382004894, 'next_transition': 9168}.
<a id="trace-9392"></a>
- 134.55s–134.55s (×1), actor 0, squad 0 (trace 9392): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 9186. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026250910883666823, 'next_transition': 9622}.
<a id="trace-9622"></a>
<a id="trace-9633"></a>
<a id="trace-9646"></a>
<a id="trace-9664"></a>
<a id="trace-9681"></a>
<a id="trace-9693"></a>
<a id="trace-9728"></a>
<a id="trace-9753"></a>
<a id="trace-9853"></a>
<a id="trace-9865"></a>
<a id="trace-9891"></a>
<a id="trace-9910"></a>
- 135.30s–143.30s (×12), actor 5, squad 0 (trace 9622): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 9548. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37873517775560034, 'next_transition': 9633}.
<a id="trace-9915"></a>
- 143.60s–143.60s (×1), actor 0, squad 0 (trace 9915): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 9760. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25499647963256267, 'next_transition': 10038}.
<a id="trace-10038"></a>
<a id="trace-10148"></a>
<a id="trace-10178"></a>
<a id="trace-10198"></a>
<a id="trace-10211"></a>
<a id="trace-10229"></a>
<a id="trace-10246"></a>
- 144.30s–148.80s (×7), actor 5, squad 0 (trace 10038): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9763. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.460013251357309, 'next_transition': 10148}.
<a id="trace-10249"></a>
- 148.80s–148.80s (×1), actor 0, squad 0 (trace 10249): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 10064. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8712005670984789, 'next_transition': 10502}.
<a id="trace-10250"></a>
- 148.80s–148.80s (×1), actor 0, squad 0 (trace 10250): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 145.00s, trace 10064. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8712005670984789, 'next_transition': 10502}.
<a id="trace-10502"></a>
<a id="trace-10515"></a>
<a id="trace-10610"></a>
<a id="trace-10668"></a>
<a id="trace-10700"></a>
- 149.30s–152.30s (×5), actor 5, squad 0 (trace 10502): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 10067. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2753940569813542, 'next_transition': 10515}.
<a id="trace-10706"></a>
- 152.50s–152.50s (×1), actor 0, squad 0 (trace 10706): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 10525. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6762139005182468, 'next_transition': 11045}.
<a id="trace-10707"></a>
- 152.50s–152.50s (×1), actor 0, squad 0 (trace 10707): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 10525. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6762139005182468, 'next_transition': 11045}.
<a id="trace-11045"></a>
<a id="trace-11062"></a>
<a id="trace-11082"></a>
<a id="trace-11121"></a>
<a id="trace-11203"></a>
<a id="trace-11223"></a>
<a id="trace-11236"></a>
<a id="trace-11249"></a>
<a id="trace-11258"></a>
<a id="trace-11266"></a>
<a id="trace-11285"></a>
<a id="trace-11298"></a>
<a id="trace-11320"></a>
<a id="trace-11401"></a>
<a id="trace-11419"></a>
<a id="trace-11427"></a>
<a id="trace-11434"></a>
<a id="trace-11449"></a>
- 152.80s–162.30s (×18), actor 5, squad 0 (trace 11045): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 10528. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7163197144430864, 'next_transition': 11062}.
<a id="trace-11453"></a>
- 162.55s–162.55s (×1), actor 0, squad 0 (trace 11453): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 11327. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.047763537929633615, 'next_transition': 11566}.
<a id="trace-11454"></a>
- 162.55s–162.55s (×1), actor 0, squad 0 (trace 11454): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 11327. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.047763537929633615, 'next_transition': 11566}.
<a id="trace-11566"></a>
<a id="trace-11579"></a>
<a id="trace-11594"></a>
- 162.80s–163.80s (×3), actor 5, squad 0 (trace 11566): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 11330. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12441178406360427, 'next_transition': 11579}.
<a id="trace-11597"></a>
- 163.80s–163.80s (×1), actor 0, squad 0 (trace 11597): NeedSupport. Knowledge: actor memory at 160.00s, trace 11327. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20476493313493027, 'next_transition': 11619}.
<a id="trace-11619"></a>
<a id="trace-11637"></a>
<a id="trace-11721"></a>
<a id="trace-11733"></a>
<a id="trace-11755"></a>
<a id="trace-11760"></a>
<a id="trace-11768"></a>
<a id="trace-11788"></a>
<a id="trace-11802"></a>
<a id="trace-11816"></a>
<a id="trace-11904"></a>
<a id="trace-11915"></a>
<a id="trace-11925"></a>
<a id="trace-11934"></a>
<a id="trace-11949"></a>
<a id="trace-11963"></a>
<a id="trace-11975"></a>
<a id="trace-11991"></a>
<a id="trace-12016"></a>
<a id="trace-12092"></a>
<a id="trace-12099"></a>
<a id="trace-12113"></a>
<a id="trace-12127"></a>
<a id="trace-12138"></a>
<a id="trace-12166"></a>
<a id="trace-12174"></a>
<a id="trace-12183"></a>
<a id="trace-12195"></a>
<a id="trace-12269"></a>
<a id="trace-12282"></a>
<a id="trace-12296"></a>
<a id="trace-12304"></a>
- 164.30s–181.80s (×32), actor 5, squad 0 (trace 11619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 11330. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33181347116218135, 'next_transition': 11637}.
<a id="trace-12309"></a>
- 181.90s–181.90s (×1), actor 0, squad 0 (trace 12309): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 12199. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.306007430011466, 'next_transition': 12565}.
<a id="trace-12427"></a>
- 181.90s–181.90s (×1), actor 0, squad 0 (trace 12427): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 12199. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.306007430011466, 'next_transition': 12565}.
<a id="trace-12565"></a>
<a id="trace-12583"></a>
<a id="trace-12594"></a>
<a id="trace-12614"></a>
<a id="trace-12716"></a>
<a id="trace-12726"></a>
<a id="trace-12751"></a>
<a id="trace-12759"></a>
<a id="trace-12774"></a>
<a id="trace-12818"></a>
<a id="trace-12828"></a>
<a id="trace-12838"></a>
<a id="trace-12924"></a>
- 182.80s–190.30s (×13), actor 5, squad 0 (trace 12565): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 12202. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19678186259514516, 'next_transition': 12583}.
<a id="trace-12927"></a>
- 190.30s–190.30s (×1), actor 0, squad 0 (trace 12927): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 190.00s, trace 12844. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299862842405987, 'next_transition': 12938}.
<a id="trace-12938"></a>
<a id="trace-12959"></a>
- 190.80s–191.30s (×2), actor 5, squad 0 (trace 12938): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 12847. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41998311273189076, 'next_transition': 12959}.
<a id="trace-1465"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 1465): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12991"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 12991): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.85s, trace 12991. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199831127318907, 'next_transition': 13004}.
<a id="trace-13004"></a>
<a id="trace-13026"></a>
<a id="trace-13053"></a>
<a id="trace-13062"></a>
<a id="trace-13170"></a>
<a id="trace-13178"></a>
<a id="trace-13198"></a>
<a id="trace-13215"></a>
<a id="trace-13230"></a>
<a id="trace-13262"></a>
<a id="trace-13272"></a>
<a id="trace-13353"></a>
<a id="trace-13360"></a>
<a id="trace-13374"></a>
<a id="trace-13382"></a>
<a id="trace-13388"></a>
<a id="trace-13399"></a>
<a id="trace-13404"></a>
<a id="trace-13415"></a>
<a id="trace-13421"></a>
<a id="trace-13497"></a>
- 192.30s–205.30s (×21), actor 5, squad 0 (trace 13004): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 12991. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7349641382968124, 'next_transition': 13026}.
<a id="trace-1545"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (events line 1545): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13503"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 13503): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.307436 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 13503. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13517}.
<a id="trace-13504"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 13504): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.307436 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 13504. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13517}.
<a id="trace-13517"></a>
<a id="trace-13525"></a>
<a id="trace-13532"></a>
<a id="trace-13539"></a>
<a id="trace-13550"></a>
<a id="trace-13555"></a>
<a id="trace-13568"></a>
<a id="trace-13641"></a>
<a id="trace-13656"></a>
- 206.30s–211.30s (×9), actor 5, squad 0 (trace 13517): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.65s, trace 13504. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13525}.
<a id="trace-13662"></a>
- 211.55s–211.55s (×1), actor 0, squad 0 (trace 13662): MoveTactically. Knowledge: actor memory at 210.00s, trace 13572. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13791}.
<a id="trace-13663"></a>
- 211.55s–211.55s (×1), actor 0, squad 0 (trace 13663): received platoon directive. Knowledge: actor memory at 210.00s, trace 13572. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13791}.
<a id="trace-13791"></a>
<a id="trace-13809"></a>
<a id="trace-13831"></a>
<a id="trace-13849"></a>
<a id="trace-13856"></a>
<a id="trace-13888"></a>
<a id="trace-13903"></a>
<a id="trace-13976"></a>
<a id="trace-13996"></a>
<a id="trace-14022"></a>
<a id="trace-14051"></a>
<a id="trace-14075"></a>
<a id="trace-14084"></a>
<a id="trace-14163"></a>
<a id="trace-14185"></a>
<a id="trace-14195"></a>
<a id="trace-14222"></a>
<a id="trace-14239"></a>
<a id="trace-14262"></a>
<a id="trace-14276"></a>
<a id="trace-14355"></a>
- 211.80s–225.30s (×21), actor 5, squad 0 (trace 13791): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 13575. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13809}.
<a id="trace-14361"></a>
- 225.35s–225.35s (×1), actor 0, squad 0 (trace 14361): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 14282. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06904386739602598, 'next_transition': 14474}.
<a id="trace-14474"></a>
<a id="trace-14493"></a>
<a id="trace-14520"></a>
<a id="trace-14527"></a>
<a id="trace-14554"></a>
- 225.80s–228.30s (×5), actor 5, squad 0 (trace 14474): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 14285. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0917611709820663, 'next_transition': 14493}.
<a id="trace-14557"></a>
- 228.30s–228.30s (×1), actor 0, squad 0 (trace 14557): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 225.00s, trace 14282. Next observer evidence: {'until': 228.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199068530466456, 'next_transition': 14568}.
<a id="trace-14559"></a>
- 228.30s–228.30s (×1), actor 0, squad 0 (trace 14559): NeedSupport. Knowledge: actor memory at 225.00s, trace 14282. Next observer evidence: {'until': 228.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199068530466456, 'next_transition': 14568}.
<a id="trace-14568"></a>
- 228.55s–228.55s (×1), actor 0, squad 0 (trace 14568): Reorganise: completed/failed drill. Knowledge: actor memory at 225.00s, trace 14282. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6379916879336194, 'next_transition': 14636}.
<a id="trace-14572"></a>
- 228.55s–228.55s (×1), actor 0, squad 0 (trace 14572): ReactToContact: cover and return fire. Knowledge: actor memory at 225.00s, trace 14282. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6379916879336194, 'next_transition': 14636}.
<a id="trace-14573"></a>
- 228.55s–228.55s (×1), actor 0, squad 0 (trace 14573): Reorganise complete: known contact. Knowledge: actor memory at 225.00s, trace 14282. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6379916879336194, 'next_transition': 14636}.
<a id="trace-14636"></a>
<a id="trace-14652"></a>
<a id="trace-14736"></a>
<a id="trace-14742"></a>
<a id="trace-14764"></a>
<a id="trace-14778"></a>
<a id="trace-14796"></a>
- 229.30s–232.30s (×7), actor 5, squad 0 (trace 14636): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 14285. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3229911000981853, 'next_transition': 14652}.
<a id="trace-14801"></a>
- 232.60s–232.60s (×1), actor 0, squad 0 (trace 14801): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 230.00s, trace 14657. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06301745789858497, 'next_transition': 16666}.
<a id="trace-14803"></a>
- 232.60s–232.60s (×1), actor 0, squad 0 (trace 14803): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 230.00s, trace 14657. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06301745789858497, 'next_transition': 16666}.
<a id="trace-16601"></a>
- 232.60s–232.60s (×1), actor 0, squad 0 (trace 16601): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 230.00s, trace 14657. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06301745789858497, 'next_transition': 16666}.
<a id="trace-16602"></a>
- 232.60s–232.60s (×1), actor 0, squad 0 (trace 16602): MoveTactically. Knowledge: actor memory at 230.00s, trace 14657. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06301745789858497, 'next_transition': 16666}.
<a id="trace-16603"></a>
- 232.60s–232.60s (×1), actor 0, squad 0 (trace 16603): contact cover complete: assessment resumes closure. Knowledge: actor memory at 230.00s, trace 14657. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06301745789858497, 'next_transition': 16666}.
<a id="trace-16666"></a>
<a id="trace-16679"></a>
<a id="trace-16704"></a>
<a id="trace-16722"></a>
<a id="trace-16730"></a>
<a id="trace-16811"></a>
<a id="trace-16833"></a>
<a id="trace-16848"></a>
<a id="trace-16855"></a>
<a id="trace-16881"></a>
<a id="trace-16891"></a>
<a id="trace-16905"></a>
<a id="trace-16914"></a>
<a id="trace-16991"></a>
<a id="trace-17004"></a>
<a id="trace-17013"></a>
<a id="trace-17037"></a>
<a id="trace-17045"></a>
<a id="trace-17059"></a>
<a id="trace-17070"></a>
<a id="trace-17082"></a>
- 232.80s–244.30s (×21), actor 5, squad 0 (trace 16666): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 14660. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16679}.
<a id="trace-17094"></a>
- 244.65s–244.65s (×1), actor 0, squad 0 (trace 17094): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 240.00s, trace 16918. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21674027896653447, 'next_transition': 17104}.
<a id="trace-17104"></a>
- 244.80s–244.80s (×1), actor 5, squad 0 (trace 17104): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 16921. Next observer evidence: {'until': 245.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.364759264815669, 'next_transition': 17180}.
<a id="trace-17180"></a>
- 245.65s–245.65s (×1), actor 0, squad 0 (trace 17180): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 17108. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0281728143027624, 'next_transition': 17307}.
<a id="trace-17307"></a>
<a id="trace-17325"></a>
<a id="trace-17347"></a>
<a id="trace-17375"></a>
<a id="trace-17393"></a>
<a id="trace-17416"></a>
<a id="trace-17499"></a>
<a id="trace-17527"></a>
<a id="trace-17554"></a>
<a id="trace-17572"></a>
<a id="trace-17579"></a>
<a id="trace-17597"></a>
<a id="trace-17609"></a>
<a id="trace-17684"></a>
<a id="trace-17697"></a>
<a id="trace-17718"></a>
- 246.30s–257.30s (×16), actor 5, squad 0 (trace 17307): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 17111. Next observer evidence: {'until': 246.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5244677980374671, 'next_transition': 17325}.
<a id="trace-17723"></a>
- 257.75s–257.75s (×1), actor 0, squad 0 (trace 17723): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 255.00s, trace 17613. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8190195014251891, 'next_transition': 17836}.
<a id="trace-17836"></a>
<a id="trace-17854"></a>
<a id="trace-17868"></a>
<a id="trace-17975"></a>
<a id="trace-17989"></a>
<a id="trace-18016"></a>
<a id="trace-18040"></a>
<a id="trace-18052"></a>
<a id="trace-18069"></a>
<a id="trace-18079"></a>
<a id="trace-18159"></a>
- 258.30s–265.30s (×11), actor 5, squad 0 (trace 17836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 17616. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49139644871892696, 'next_transition': 17854}.
<a id="trace-18165"></a>
- 265.55s–265.55s (×1), actor 0, squad 0 (trace 18165): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 18087. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18219}.
<a id="trace-18219"></a>
<a id="trace-18248"></a>
<a id="trace-18260"></a>
<a id="trace-18271"></a>
- 265.80s–268.30s (×4), actor 5, squad 0 (trace 18219): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 18090. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 18248}.
<a id="trace-18286"></a>
- 269.20s–269.20s (×1), actor 1, squad 0 (trace 18286): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 265.00s, trace 18088. Next observer evidence: None.
<a id="trace-18288"></a>
- 269.20s–269.20s (×1), actor 1, squad 0 (trace 18288): NeedSupport. Knowledge: actor memory at 265.00s, trace 18088. Next observer evidence: None.
<a id="trace-18297"></a>
<a id="trace-18301"></a>
- 269.30s–269.80s (×2), actor 5, squad 0 (trace 18297): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 18090. Next observer evidence: {'until': 269.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945031556351426, 'next_transition': 18301}.
<a id="trace-18313"></a>
- 270.20s–270.20s (×1), actor 1, squad 0 (trace 18313): Reorganise: completed/failed drill. Knowledge: actor memory at 270.00s, trace 18304. Next observer evidence: None.
<a id="trace-18316"></a>
- 270.20s–270.20s (×1), actor 1, squad 0 (trace 18316): MoveTactically. Knowledge: actor memory at 270.00s, trace 18304. Next observer evidence: None.
<a id="trace-18317"></a>
- 270.20s–270.20s (×1), actor 1, squad 0 (trace 18317): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 270.00s, trace 18304. Next observer evidence: None.
<a id="trace-18383"></a>
- 270.30s–270.30s (×1), actor 5, squad 0 (trace 18383): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 18306. Next observer evidence: {'until': 270.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150220208155945, 'next_transition': 18386}.
<a id="trace-18386"></a>
- 270.45s–270.45s (×1), actor 1, squad 0 (trace 18386): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 270.00s, trace 18304. Next observer evidence: {'until': 270.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629994874402268, 'next_transition': 18442}.
<a id="trace-18442"></a>
<a id="trace-18466"></a>
- 270.80s–271.80s (×2), actor 5, squad 0 (trace 18442): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 18306. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.086855583293552, 'next_transition': 18466}.
<a id="trace-1949"></a>
- 274.70s–274.70s (×1), actor 5, squad 0 (events line 1949): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18525"></a>
- 274.70s–274.70s (×1), actor 5, squad 0 (trace 18525): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 274.70s, trace 18525. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750966835404107, 'next_transition': 18529}.
<a id="trace-18526"></a>
- 274.70s–274.70s (×1), actor 5, squad 0 (trace 18526): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 274.70s, trace 18526. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750966835404107, 'next_transition': 18529}.
<a id="trace-18529"></a>
<a id="trace-18598"></a>
<a id="trace-18604"></a>
- 274.80s–275.80s (×3), actor 5, squad 0 (trace 18529): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 274.70s, trace 18526. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501161188914906, 'next_transition': 18598}.
<a id="trace-18616"></a>
- 276.25s–276.25s (×1), actor 1, squad 0 (trace 18616): traveling overwatch. Knowledge: actor memory at 275.00s, trace 18532. Next observer evidence: None.
<a id="trace-18617"></a>
- 276.25s–276.25s (×1), actor 1, squad 0 (trace 18617): current contact unknown for 10 s. Knowledge: actor memory at 275.00s, trace 18532. Next observer evidence: None.
<a id="trace-18674"></a>
<a id="trace-18683"></a>
<a id="trace-18697"></a>
<a id="trace-18702"></a>
<a id="trace-18715"></a>
<a id="trace-18727"></a>
<a id="trace-18739"></a>
<a id="trace-18820"></a>
<a id="trace-18831"></a>
<a id="trace-18845"></a>
- 276.30s–281.30s (×10), actor 5, squad 0 (trace 18674): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 18534. Next observer evidence: {'until': 276.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512780733016381, 'next_transition': 18683}.
<a id="trace-18851"></a>
- 281.45s–281.45s (×1), actor 1, squad 0 (trace 18851): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 280.00s, trace 18750. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450184061870033, 'next_transition': 18909}.
<a id="trace-18852"></a>
- 281.45s–281.45s (×1), actor 1, squad 0 (trace 18852): MoveTactically. Knowledge: actor memory at 280.00s, trace 18750. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450184061870033, 'next_transition': 18909}.
<a id="trace-18853"></a>
- 281.45s–281.45s (×1), actor 1, squad 0 (trace 18853): . Knowledge: actor memory at 280.00s, trace 18750. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450184061870033, 'next_transition': 18909}.
<a id="trace-18909"></a>
<a id="trace-18928"></a>
<a id="trace-18936"></a>
<a id="trace-18948"></a>
<a id="trace-18959"></a>
<a id="trace-18973"></a>
<a id="trace-18984"></a>
<a id="trace-19057"></a>
<a id="trace-19066"></a>
<a id="trace-19088"></a>
<a id="trace-19100"></a>
<a id="trace-19110"></a>
<a id="trace-19127"></a>
<a id="trace-19147"></a>
<a id="trace-19220"></a>
<a id="trace-19232"></a>
<a id="trace-19239"></a>
<a id="trace-19247"></a>
<a id="trace-19261"></a>
<a id="trace-19271"></a>
<a id="trace-19276"></a>
<a id="trace-19292"></a>
<a id="trace-19364"></a>
<a id="trace-19371"></a>
<a id="trace-19378"></a>
<a id="trace-19482"></a>
<a id="trace-19489"></a>
<a id="trace-19495"></a>
<a id="trace-19502"></a>
<a id="trace-19509"></a>
<a id="trace-19525"></a>
<a id="trace-19532"></a>
<a id="trace-19537"></a>
<a id="trace-19608"></a>
<a id="trace-19624"></a>
<a id="trace-19631"></a>
<a id="trace-19639"></a>
<a id="trace-19644"></a>
<a id="trace-19660"></a>
<a id="trace-19667"></a>
<a id="trace-19743"></a>
<a id="trace-19758"></a>
<a id="trace-19765"></a>
<a id="trace-19780"></a>
<a id="trace-19788"></a>
<a id="trace-19799"></a>
<a id="trace-19805"></a>
<a id="trace-19812"></a>
<a id="trace-19819"></a>
<a id="trace-19895"></a>
<a id="trace-19903"></a>
<a id="trace-19910"></a>
<a id="trace-19918"></a>
<a id="trace-19924"></a>
<a id="trace-19936"></a>
<a id="trace-19945"></a>
<a id="trace-19954"></a>
<a id="trace-19960"></a>
<a id="trace-20032"></a>
<a id="trace-20047"></a>
<a id="trace-20056"></a>
<a id="trace-20063"></a>
<a id="trace-20068"></a>
<a id="trace-20078"></a>
<a id="trace-20084"></a>
<a id="trace-20094"></a>
<a id="trace-20098"></a>
<a id="trace-20185"></a>
<a id="trace-20195"></a>
<a id="trace-20204"></a>
<a id="trace-20220"></a>
<a id="trace-20226"></a>
<a id="trace-20310"></a>
<a id="trace-20317"></a>
<a id="trace-20333"></a>
<a id="trace-20343"></a>
<a id="trace-20351"></a>
<a id="trace-20359"></a>
<a id="trace-20367"></a>
<a id="trace-20378"></a>
<a id="trace-20453"></a>
<a id="trace-20467"></a>
<a id="trace-20474"></a>
<a id="trace-20483"></a>
<a id="trace-20496"></a>
<a id="trace-20507"></a>
<a id="trace-20590"></a>
<a id="trace-20596"></a>
<a id="trace-20606"></a>
<a id="trace-20615"></a>
<a id="trace-20625"></a>
<a id="trace-20630"></a>
<a id="trace-20639"></a>
<a id="trace-20646"></a>
<a id="trace-20654"></a>
<a id="trace-20661"></a>
<a id="trace-20743"></a>
<a id="trace-20750"></a>
- 281.80s–346.30s (×98), actor 5, squad 0 (trace 18909): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 18752. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9292165310252672, 'next_transition': 18928}.
<a id="trace-2255"></a>
- 347.25s–347.25s (×1), actor 5, squad 0 (events line 2255): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20762"></a>
- 347.25s–347.25s (×1), actor 5, squad 0 (trace 20762): renew committed intent (75 s lifetime). Knowledge: actor memory at 347.25s, trace 20762. Next observer evidence: None.
<a id="trace-20766"></a>
<a id="trace-20772"></a>
<a id="trace-20790"></a>
<a id="trace-20803"></a>
<a id="trace-20881"></a>
<a id="trace-20889"></a>
<a id="trace-20901"></a>
- 347.30s–351.80s (×7), actor 5, squad 0 (trace 20766): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 347.25s, trace 20762. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20772}.
<a id="trace-20906"></a>
- 352.25s–352.25s (×1), actor 4, squad 0 (trace 20906): traveling. Knowledge: actor memory at 350.00s, trace 20807. Next observer evidence: None.
<a id="trace-20907"></a>
- 352.25s–352.25s (×1), actor 4, squad 0 (trace 20907): received platoon directive. Knowledge: actor memory at 350.00s, trace 20807. Next observer evidence: None.
<a id="trace-20963"></a>
<a id="trace-20972"></a>
<a id="trace-20981"></a>
<a id="trace-20991"></a>
<a id="trace-21007"></a>
<a id="trace-21079"></a>
<a id="trace-21087"></a>
<a id="trace-21101"></a>
<a id="trace-21114"></a>
<a id="trace-21134"></a>
<a id="trace-21149"></a>
<a id="trace-21158"></a>
<a id="trace-21166"></a>
<a id="trace-21173"></a>
- 352.30s–359.80s (×14), actor 5, squad 0 (trace 20963): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 20808. Next observer evidence: {'until': 352.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001069284946183, 'next_transition': 20972}.

## Net delivery

255 matched order/radio deliveries; 235 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.354s; maximum 5.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2138: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2139: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2140: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2141: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2142: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2143: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3872: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3877: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3878: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3879: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3880: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3881: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3882: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3883: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4493: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4497: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4498: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4499: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4500: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4501: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4502: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4503: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4504: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4831: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4834: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4835: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4836: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4837: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4838: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4839: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4840: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4841: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4842: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 5037: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5040: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5041: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5042: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5043: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5044: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5045: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5046: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5047: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5048: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 5432: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5435: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5436: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5437: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5438: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5439: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5440: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5441: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5442: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5443: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 5597: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5600: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5601: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5602: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5603: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5604: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5605: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5606: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5607: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5608: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 5791: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5794: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5795: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5796: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5797: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5798: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5799: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5800: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5801: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5802: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 6191: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 6192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 6193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 6194: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 6195: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 6196: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 6197: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 6198: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 6199: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 6200: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 6201: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 6202: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 6420: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 6423: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 6424: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 6425: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6426: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6427: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6428: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6429: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6430: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6431: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 6628: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 6631: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 6632: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 6633: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6634: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6635: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6636: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6637: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6638: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6639: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 6741: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 6984: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 6985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 6986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 6987: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 6988: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 6989: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 6990: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 6991: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 6992: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 6993: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 6994: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 7164: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 7165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 7166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 7167: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 7168: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 7169: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 7170: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 7171: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 7172: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 7173: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 7174: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 7461: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 7462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 7463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 7464: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 7465: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 7466: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 7467: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 7468: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 7469: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 7470: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 7471: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 7657: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 7660: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 7661: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 7662: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7663: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7664: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7665: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7666: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7667: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 7803: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 7804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 7805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 7806: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 7807: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 7808: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 7809: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 7810: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 7811: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 7812: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 7813: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 7954: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 7956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7957: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7958: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 7959: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7960: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7961: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7962: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7963: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7964: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 8342: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 8343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 8344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 8345: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 8346: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 8347: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 8348: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 8349: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 8350: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 8351: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 8352: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 8544: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 8545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 8546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 8547: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 8548: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 8549: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 8550: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 8551: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 8552: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 8553: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 8554: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 8691: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 8692: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 8871: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 8872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8874: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8875: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 8876: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8877: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8878: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8879: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8880: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8881: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 9186: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 9187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 9188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 9189: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 9190: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 9191: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 9192: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 9193: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9194: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9195: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9196: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 9545: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 9546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9548: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9549: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 9550: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9551: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9552: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9553: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9554: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9555: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 9760: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 9761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 9762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 9763: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 9764: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 9765: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 9766: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 9767: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 9768: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 9769: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 9770: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 10064: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 10065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 10066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 10067: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 10068: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 10069: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 10070: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 10071: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 10072: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 10073: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 10074: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 10525: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 10526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 10527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 10528: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 10529: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 10530: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 10531: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 10532: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 10533: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 10534: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 10535: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 11129: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 11130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 11131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 11132: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 11133: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 11134: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 11135: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 11136: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 11137: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 11138: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 11139: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 11327: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 11328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 11329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 11330: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 11331: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 11332: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 11333: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 11334: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 11335: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 11336: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 11337: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 11640: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 11641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 11642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 11643: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 11644: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 11645: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 11646: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 11647: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 11648: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 11649: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 11650: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 11827: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 11828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 11829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 11830: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 11831: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 11832: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 11833: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 11834: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 11835: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 11836: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 11837: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 12024: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 12025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 12026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 12027: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 12028: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 12029: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 12030: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 12031: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 12032: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 12033: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 12034: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 12199: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 12200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 12201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 12202: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 12203: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 12204: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 12205: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 12206: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 12207: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 12208: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 12209: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 12648: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 12649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 12650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 12651: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 12652: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 12653: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 12654: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 12655: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 12656: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 12657: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 12658: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 12844: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 12845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 12846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 12847: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 12848: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 12849: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 12850: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 12851: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 12852: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 12853: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 12854: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 12991: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 13098: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 13099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 13100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 13101: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 13102: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 13103: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 13104: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 13105: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 13106: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 13107: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 13108: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 13285: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 13286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 13287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 13288: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 13289: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 13290: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 13291: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 13292: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 13293: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 13294: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 13295: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 13424: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 13425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 13426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 13427: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 13428: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 13429: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 13430: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 13431: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 13432: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 13433: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 13434: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 13503: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 13504: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 13572: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 13573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 13574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 13575: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 13576: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 13577: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 13578: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 13579: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 13580: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 13581: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 13582: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 13908: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 13909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 13910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 13911: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 13912: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 13913: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 13914: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 13915: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 13916: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 13917: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 13918: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 14089: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 14090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 14091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 14092: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 14093: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 14094: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 14095: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 14096: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 14097: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 14098: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 14099: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 14282: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 14283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 14284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 14285: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 14286: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 14287: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 14288: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 14289: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 14290: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 14291: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 14292: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 14657: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 14658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 14659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 14660: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 14661: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 14662: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 14663: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 14664: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 14665: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 14666: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 16736: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 16737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 16738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 16739: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 16740: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 16741: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 16742: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 16743: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 16744: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 16745: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 16918: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 16919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 16920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 16921: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 16922: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 16923: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 16924: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 16925: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 16926: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 16927: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 0, trace 17108: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 17109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 17110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 17111: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 17112: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 17113: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 17114: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 17115: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 17116: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 17117: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 0, trace 17422: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 17423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 17424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 17425: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 17426: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 17427: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 17428: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 17429: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 17430: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 17431: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 0, trace 17613: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 17614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 17615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 17616: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 17617: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 17618: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 17619: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 17620: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 17621: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 17622: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 0, trace 17883: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 17884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 17885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 17886: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 17887: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 17888: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 17889: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 17890: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 17891: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 17892: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 0, trace 18087: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 18088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 18089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 18090: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 18091: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 18092: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 18093: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 18094: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 18095: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 18096: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 18304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 18305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 18306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 18307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 18308: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 18309: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 18310: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 18311: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 18312: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.70s leader 5, trace 18525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.70s leader 5, trace 18526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 18532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 18533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 18534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 18535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 18536: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 18537: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 18538: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 18539: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 18540: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 18750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 18751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 18752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 18753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 18754: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 18755: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 18756: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 18757: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 18758: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 18991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 18992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 18993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 18994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 18995: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 18996: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 18997: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 18998: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 18999: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 19155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 19156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 19157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 19158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 19159: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 19160: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 19161: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 19162: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 19163: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 19296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 19297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 19298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 19299: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 19300: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 19301: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 19302: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 19303: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 19409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 19410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 19411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 19412: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 19413: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 19414: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 19415: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 19416: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 19543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 19544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 19545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 19546: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 19547: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 19548: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 19549: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 19550: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 19677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 19678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 19679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 19680: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 19681: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 19682: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 19683: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 19684: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 19822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 19823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 19824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 19825: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 19826: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 19827: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 19828: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 19829: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 19969: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 19970: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 19971: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 19972: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 19973: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 20101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 20102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 20103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 20104: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 20105: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 20106: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 20107: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 20108: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 20243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 20244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 20245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 20246: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 20247: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 20248: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 20249: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 20250: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 20388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 20389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 20390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 20391: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 20392: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 20393: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 20394: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 20395: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 20524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 20525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 20526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 20527: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 20528: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 20529: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 20530: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 20531: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 20666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 20667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 20668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 20669: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 20670: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 20671: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 20672: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 20673: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.25s leader 5, trace 20762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 20807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 20808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 20809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 20810: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 20811: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 20812: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 20813: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 20814: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 21010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 21011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 21012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 21013: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 21014: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 21015: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 21016: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 21017: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 21177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 21178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 21179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 21180: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 21181: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 21182: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 21183: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 21184: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bram incapacitated
- 1: Reed killed in action
- 1: Vale incapacitated
- 1: Rook incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
