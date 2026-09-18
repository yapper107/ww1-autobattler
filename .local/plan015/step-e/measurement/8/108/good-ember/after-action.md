# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/8/108/good-ember/battle-108-1789673799837217295`

## Battle summary

**Ember** · 360 s · 262 shots.

### Turning points

- 18.6s, squad 5: contact (events line 200). First recorded contact.
- 32.0s, squad 0: withdrawal ([trace 5846](#trace-5846)). 50.1s, squad 0: took cover and returned fire.
- 43.5s, squad 0: help call ([trace 7057](#trace-7057)). No completion observed before termination.
- 54.2s, squad 0: withdrawal ([trace 7872](#trace-7872)). 111.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 151.2s, squad 0: withdrawal ([trace 13155](#trace-13155)). 172.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 225.5s, squad 0: withdrawal ([trace 17567](#trace-17567)). 230.1s, squad 0: took cover and returned fire.
- 229.1s, squad 0: help call ([trace 17938](#trace-17938)). No completion observed before termination.
- 233.9s, squad 0: withdrawal ([trace 18307](#trace-18307)). 274.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 245.1s, squad 0: help call ([trace 19753](#trace-19753)). No completion observed before termination.
- 314.2s, squad 0: withdrawal ([trace 22952](#trace-22952)). 338.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 16 shots, 5/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 1 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 203 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 42 shots, 0/2 lost.

### Decisions and attribution

At 21.8s, squad 0 chose took cover and returned fire ([trace 2716](#trace-2716)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1322](#trace-1322)). Following evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.858503067653851, 'next_transition': 2004}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 5241](#trace-5241)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3901391618895075, 'next_transition': 5276}.

### Communication

303 matched deliveries (mean 0.40s, max 5.25s); 418 explicit drops; 4 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.60s, squad 5, contact, evidence events line 200: First recorded contact; .
- 32.05s, squad 0, withdrawal, evidence 5846: BreakContact: believed ratio at least two without superiority; 50.1s, squad 0: took cover and returned fire.
- 43.45s, squad 0, help call, evidence 7057: NeedSupport; No completion observed before termination.
- 54.15s, squad 0, withdrawal, evidence 7872: BreakContact: believed ratio at least two without superiority; 111.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 151.20s, squad 0, withdrawal, evidence 13155: BreakContact: believed ratio at least two without superiority; 172.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 225.50s, squad 0, withdrawal, evidence 17567: BreakContact: believed ratio at least two without superiority; 230.1s, squad 0: took cover and returned fire.
- 229.05s, squad 0, help call, evidence 17938: NeedSupport; No completion observed before termination.
- 233.85s, squad 0, withdrawal, evidence 18307: BreakContact: believed ratio at least two without superiority; 274.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 245.10s, squad 0, help call, evidence 19753: NeedSupport; No completion observed before termination.
- 314.25s, squad 0, withdrawal, evidence 22952: BreakContact: believed ratio at least two without superiority; 338.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 325.25s, squad 0, help call, evidence 23628: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.504901653502078, 'next_transition': 937}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.504901653502078, 'next_transition': 937}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.504901653502078, 'next_transition': 937}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1135}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1135}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1135}.
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
<a id="trace-1217"></a>
<a id="trace-1219"></a>
<a id="trace-1240"></a>
<a id="trace-1242"></a>
<a id="trace-1262"></a>
<a id="trace-1264"></a>
<a id="trace-1297"></a>
<a id="trace-1299"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
<a id="trace-1489"></a>
<a id="trace-1491"></a>
<a id="trace-1667"></a>
<a id="trace-1669"></a>
<a id="trace-1711"></a>
<a id="trace-1713"></a>
<a id="trace-1735"></a>
<a id="trace-1737"></a>
<a id="trace-1821"></a>
<a id="trace-1823"></a>
<a id="trace-1863"></a>
<a id="trace-1865"></a>
<a id="trace-1905"></a>
<a id="trace-1907"></a>
<a id="trace-1930"></a>
<a id="trace-1932"></a>
<a id="trace-1949"></a>
<a id="trace-1951"></a>
<a id="trace-1969"></a>
<a id="trace-1971"></a>
<a id="trace-1996"></a>
<a id="trace-1998"></a>
<a id="trace-2049"></a>
<a id="trace-2051"></a>
<a id="trace-2519"></a>
<a id="trace-2521"></a>
<a id="trace-2549"></a>
<a id="trace-2551"></a>
<a id="trace-2642"></a>
<a id="trace-2644"></a>
<a id="trace-2678"></a>
<a id="trace-2680"></a>
<a id="trace-2694"></a>
<a id="trace-2696"></a>
<a id="trace-2713"></a>
<a id="trace-2715"></a>
<a id="trace-3049"></a>
<a id="trace-3051"></a>
<a id="trace-3068"></a>
<a id="trace-3070"></a>
<a id="trace-3109"></a>
<a id="trace-3111"></a>
<a id="trace-3124"></a>
<a id="trace-3126"></a>
<a id="trace-3151"></a>
<a id="trace-3153"></a>
<a id="trace-3189"></a>
<a id="trace-3191"></a>
<a id="trace-3273"></a>
<a id="trace-3275"></a>
<a id="trace-3286"></a>
<a id="trace-3288"></a>
<a id="trace-5228"></a>
<a id="trace-5230"></a>
<a id="trace-5250"></a>
<a id="trace-5252"></a>
<a id="trace-5278"></a>
<a id="trace-5280"></a>
<a id="trace-5300"></a>
<a id="trace-5302"></a>
<a id="trace-5325"></a>
<a id="trace-5327"></a>
<a id="trace-5578"></a>
<a id="trace-5580"></a>
<a id="trace-5608"></a>
<a id="trace-5610"></a>
<a id="trace-5643"></a>
<a id="trace-5645"></a>
<a id="trace-5725"></a>
<a id="trace-5727"></a>
<a id="trace-5748"></a>
<a id="trace-5750"></a>
<a id="trace-5781"></a>
<a id="trace-5783"></a>
<a id="trace-5821"></a>
<a id="trace-5823"></a>
<a id="trace-6228"></a>
<a id="trace-6230"></a>
<a id="trace-6275"></a>
<a id="trace-6277"></a>
<a id="trace-6346"></a>
<a id="trace-6348"></a>
<a id="trace-6392"></a>
<a id="trace-6394"></a>
<a id="trace-6455"></a>
<a id="trace-6457"></a>
<a id="trace-6504"></a>
<a id="trace-6506"></a>
<a id="trace-6619"></a>
<a id="trace-6621"></a>
<a id="trace-6652"></a>
<a id="trace-6654"></a>
<a id="trace-6685"></a>
<a id="trace-6687"></a>
<a id="trace-6716"></a>
<a id="trace-6718"></a>
<a id="trace-6738"></a>
<a id="trace-6740"></a>
<a id="trace-6752"></a>
<a id="trace-6754"></a>
<a id="trace-6783"></a>
<a id="trace-6785"></a>
<a id="trace-6800"></a>
<a id="trace-6802"></a>
<a id="trace-6821"></a>
<a id="trace-6823"></a>
<a id="trace-6837"></a>
<a id="trace-6839"></a>
<a id="trace-6923"></a>
<a id="trace-6925"></a>
<a id="trace-6949"></a>
<a id="trace-6951"></a>
<a id="trace-6968"></a>
<a id="trace-6970"></a>
<a id="trace-6984"></a>
<a id="trace-6986"></a>
<a id="trace-7009"></a>
<a id="trace-7011"></a>
<a id="trace-7026"></a>
<a id="trace-7028"></a>
<a id="trace-7050"></a>
<a id="trace-7052"></a>
<a id="trace-7069"></a>
<a id="trace-7071"></a>
<a id="trace-7091"></a>
<a id="trace-7093"></a>
<a id="trace-7112"></a>
<a id="trace-7114"></a>
<a id="trace-7189"></a>
<a id="trace-7191"></a>
<a id="trace-7213"></a>
<a id="trace-7215"></a>
<a id="trace-7344"></a>
<a id="trace-7346"></a>
<a id="trace-7367"></a>
<a id="trace-7369"></a>
<a id="trace-7399"></a>
<a id="trace-7401"></a>
<a id="trace-7415"></a>
<a id="trace-7417"></a>
<a id="trace-7438"></a>
<a id="trace-7440"></a>
<a id="trace-7471"></a>
<a id="trace-7473"></a>
<a id="trace-7492"></a>
<a id="trace-7494"></a>
<a id="trace-7505"></a>
<a id="trace-7507"></a>
<a id="trace-7703"></a>
<a id="trace-7705"></a>
<a id="trace-7716"></a>
<a id="trace-7718"></a>
<a id="trace-7744"></a>
<a id="trace-7746"></a>
<a id="trace-7766"></a>
<a id="trace-7768"></a>
<a id="trace-7788"></a>
<a id="trace-7790"></a>
<a id="trace-7818"></a>
<a id="trace-7820"></a>
<a id="trace-7839"></a>
<a id="trace-7841"></a>
<a id="trace-7857"></a>
<a id="trace-7859"></a>
<a id="trace-8041"></a>
<a id="trace-8043"></a>
<a id="trace-8053"></a>
<a id="trace-8055"></a>
<a id="trace-8141"></a>
<a id="trace-8143"></a>
<a id="trace-8167"></a>
<a id="trace-8169"></a>
<a id="trace-8188"></a>
<a id="trace-8190"></a>
<a id="trace-8213"></a>
<a id="trace-8215"></a>
<a id="trace-8235"></a>
<a id="trace-8237"></a>
<a id="trace-8251"></a>
<a id="trace-8253"></a>
<a id="trace-8275"></a>
<a id="trace-8277"></a>
<a id="trace-8285"></a>
<a id="trace-8287"></a>
<a id="trace-8303"></a>
<a id="trace-8305"></a>
<a id="trace-8318"></a>
<a id="trace-8320"></a>
<a id="trace-8398"></a>
<a id="trace-8400"></a>
<a id="trace-8424"></a>
<a id="trace-8426"></a>
<a id="trace-8440"></a>
<a id="trace-8442"></a>
<a id="trace-8453"></a>
<a id="trace-8455"></a>
<a id="trace-8479"></a>
<a id="trace-8481"></a>
<a id="trace-8495"></a>
<a id="trace-8497"></a>
<a id="trace-8518"></a>
<a id="trace-8520"></a>
<a id="trace-8527"></a>
<a id="trace-8529"></a>
<a id="trace-8547"></a>
<a id="trace-8549"></a>
<a id="trace-8560"></a>
<a id="trace-8562"></a>
<a id="trace-8641"></a>
<a id="trace-8643"></a>
<a id="trace-8850"></a>
<a id="trace-8852"></a>
<a id="trace-8885"></a>
<a id="trace-8887"></a>
<a id="trace-8931"></a>
<a id="trace-8933"></a>
<a id="trace-8958"></a>
<a id="trace-8960"></a>
<a id="trace-9002"></a>
<a id="trace-9004"></a>
<a id="trace-9026"></a>
<a id="trace-9028"></a>
<a id="trace-9053"></a>
<a id="trace-9055"></a>
<a id="trace-9069"></a>
<a id="trace-9071"></a>
<a id="trace-9157"></a>
<a id="trace-9159"></a>
<a id="trace-9174"></a>
<a id="trace-9176"></a>
<a id="trace-9194"></a>
<a id="trace-9196"></a>
<a id="trace-9205"></a>
<a id="trace-9207"></a>
<a id="trace-9225"></a>
<a id="trace-9227"></a>
<a id="trace-9240"></a>
<a id="trace-9242"></a>
<a id="trace-9261"></a>
<a id="trace-9263"></a>
<a id="trace-9275"></a>
<a id="trace-9277"></a>
<a id="trace-9301"></a>
<a id="trace-9303"></a>
<a id="trace-9314"></a>
<a id="trace-9316"></a>
<a id="trace-9393"></a>
<a id="trace-9395"></a>
<a id="trace-9521"></a>
<a id="trace-9523"></a>
<a id="trace-9548"></a>
<a id="trace-9550"></a>
<a id="trace-9570"></a>
<a id="trace-9572"></a>
<a id="trace-9594"></a>
<a id="trace-9596"></a>
<a id="trace-9614"></a>
<a id="trace-9616"></a>
<a id="trace-9644"></a>
<a id="trace-9646"></a>
<a id="trace-9655"></a>
<a id="trace-9657"></a>
<a id="trace-9671"></a>
<a id="trace-9673"></a>
<a id="trace-9680"></a>
<a id="trace-9682"></a>
<a id="trace-9760"></a>
<a id="trace-9762"></a>
<a id="trace-9773"></a>
<a id="trace-9775"></a>
<a id="trace-9791"></a>
<a id="trace-9793"></a>
<a id="trace-9799"></a>
<a id="trace-9801"></a>
<a id="trace-9818"></a>
<a id="trace-9820"></a>
<a id="trace-9828"></a>
<a id="trace-9830"></a>
<a id="trace-9846"></a>
<a id="trace-9848"></a>
<a id="trace-9861"></a>
<a id="trace-9863"></a>
<a id="trace-9879"></a>
<a id="trace-9881"></a>
<a id="trace-9890"></a>
<a id="trace-9892"></a>
<a id="trace-9973"></a>
<a id="trace-9975"></a>
<a id="trace-9983"></a>
<a id="trace-9985"></a>
<a id="trace-10010"></a>
<a id="trace-10012"></a>
<a id="trace-10028"></a>
<a id="trace-10030"></a>
<a id="trace-10050"></a>
<a id="trace-10052"></a>
<a id="trace-10060"></a>
<a id="trace-10062"></a>
<a id="trace-10077"></a>
<a id="trace-10079"></a>
<a id="trace-10089"></a>
<a id="trace-10091"></a>
<a id="trace-10104"></a>
<a id="trace-10106"></a>
<a id="trace-10115"></a>
<a id="trace-10117"></a>
<a id="trace-10191"></a>
<a id="trace-10193"></a>
<a id="trace-10205"></a>
<a id="trace-10207"></a>
<a id="trace-10226"></a>
<a id="trace-10228"></a>
<a id="trace-10239"></a>
<a id="trace-10241"></a>
<a id="trace-10259"></a>
<a id="trace-10261"></a>
<a id="trace-10274"></a>
<a id="trace-10276"></a>
<a id="trace-10293"></a>
<a id="trace-10295"></a>
<a id="trace-10306"></a>
<a id="trace-10308"></a>
<a id="trace-10321"></a>
<a id="trace-10323"></a>
<a id="trace-10332"></a>
<a id="trace-10334"></a>
<a id="trace-10405"></a>
<a id="trace-10407"></a>
<a id="trace-10417"></a>
<a id="trace-10419"></a>
<a id="trace-10441"></a>
<a id="trace-10443"></a>
<a id="trace-10455"></a>
<a id="trace-10457"></a>
<a id="trace-10476"></a>
<a id="trace-10478"></a>
<a id="trace-10488"></a>
<a id="trace-10490"></a>
<a id="trace-10510"></a>
<a id="trace-10512"></a>
<a id="trace-10523"></a>
<a id="trace-10525"></a>
<a id="trace-10538"></a>
<a id="trace-10540"></a>
<a id="trace-10547"></a>
<a id="trace-10549"></a>
<a id="trace-10620"></a>
<a id="trace-10622"></a>
<a id="trace-10630"></a>
<a id="trace-10632"></a>
<a id="trace-10648"></a>
<a id="trace-10650"></a>
<a id="trace-10660"></a>
<a id="trace-10662"></a>
<a id="trace-10680"></a>
<a id="trace-10682"></a>
<a id="trace-10692"></a>
<a id="trace-10694"></a>
<a id="trace-10711"></a>
<a id="trace-10713"></a>
<a id="trace-10721"></a>
<a id="trace-10723"></a>
<a id="trace-10735"></a>
<a id="trace-10737"></a>
<a id="trace-10744"></a>
<a id="trace-10746"></a>
<a id="trace-10815"></a>
<a id="trace-10817"></a>
<a id="trace-10823"></a>
<a id="trace-10825"></a>
<a id="trace-10840"></a>
<a id="trace-10842"></a>
<a id="trace-10848"></a>
<a id="trace-10850"></a>
<a id="trace-10865"></a>
<a id="trace-10867"></a>
<a id="trace-10879"></a>
<a id="trace-10881"></a>
<a id="trace-10896"></a>
<a id="trace-10898"></a>
<a id="trace-10903"></a>
<a id="trace-10905"></a>
<a id="trace-10917"></a>
<a id="trace-10919"></a>
<a id="trace-10928"></a>
<a id="trace-10930"></a>
<a id="trace-10999"></a>
<a id="trace-11001"></a>
<a id="trace-11009"></a>
<a id="trace-11011"></a>
<a id="trace-11025"></a>
<a id="trace-11027"></a>
<a id="trace-11040"></a>
<a id="trace-11042"></a>
<a id="trace-11053"></a>
<a id="trace-11055"></a>
<a id="trace-11071"></a>
<a id="trace-11073"></a>
<a id="trace-11096"></a>
<a id="trace-11098"></a>
<a id="trace-11107"></a>
<a id="trace-11109"></a>
<a id="trace-11142"></a>
<a id="trace-11144"></a>
<a id="trace-11158"></a>
<a id="trace-11160"></a>
<a id="trace-11231"></a>
<a id="trace-11233"></a>
<a id="trace-11252"></a>
<a id="trace-11254"></a>
<a id="trace-11267"></a>
<a id="trace-11269"></a>
<a id="trace-11284"></a>
<a id="trace-11286"></a>
<a id="trace-11306"></a>
<a id="trace-11308"></a>
<a id="trace-11378"></a>
<a id="trace-11380"></a>
<a id="trace-11396"></a>
<a id="trace-11398"></a>
<a id="trace-11405"></a>
<a id="trace-11407"></a>
<a id="trace-11426"></a>
<a id="trace-11428"></a>
<a id="trace-11440"></a>
<a id="trace-11442"></a>
<a id="trace-11519"></a>
<a id="trace-11521"></a>
<a id="trace-11538"></a>
<a id="trace-11540"></a>
<a id="trace-11562"></a>
<a id="trace-11564"></a>
<a id="trace-11575"></a>
<a id="trace-11577"></a>
<a id="trace-11602"></a>
<a id="trace-11604"></a>
<a id="trace-11615"></a>
<a id="trace-11617"></a>
<a id="trace-11630"></a>
<a id="trace-11632"></a>
<a id="trace-11639"></a>
<a id="trace-11641"></a>
<a id="trace-11657"></a>
<a id="trace-11659"></a>
<a id="trace-11670"></a>
<a id="trace-11672"></a>
<a id="trace-11745"></a>
<a id="trace-11747"></a>
<a id="trace-11756"></a>
<a id="trace-11758"></a>
<a id="trace-11778"></a>
<a id="trace-11780"></a>
<a id="trace-11791"></a>
<a id="trace-11793"></a>
<a id="trace-11811"></a>
<a id="trace-11813"></a>
<a id="trace-11828"></a>
<a id="trace-11830"></a>
<a id="trace-11849"></a>
<a id="trace-11851"></a>
<a id="trace-11870"></a>
<a id="trace-11872"></a>
<a id="trace-11887"></a>
<a id="trace-11889"></a>
<a id="trace-11899"></a>
<a id="trace-11901"></a>
<a id="trace-11982"></a>
<a id="trace-11984"></a>
<a id="trace-11991"></a>
<a id="trace-11993"></a>
<a id="trace-12008"></a>
<a id="trace-12010"></a>
<a id="trace-12019"></a>
<a id="trace-12021"></a>
<a id="trace-12043"></a>
<a id="trace-12045"></a>
<a id="trace-12059"></a>
<a id="trace-12061"></a>
<a id="trace-12185"></a>
<a id="trace-12187"></a>
<a id="trace-12194"></a>
<a id="trace-12196"></a>
<a id="trace-12219"></a>
<a id="trace-12221"></a>
<a id="trace-12243"></a>
<a id="trace-12245"></a>
<a id="trace-12319"></a>
<a id="trace-12321"></a>
<a id="trace-12333"></a>
<a id="trace-12335"></a>
<a id="trace-12360"></a>
<a id="trace-12362"></a>
<a id="trace-12378"></a>
<a id="trace-12380"></a>
<a id="trace-12448"></a>
<a id="trace-12450"></a>
<a id="trace-12464"></a>
<a id="trace-12466"></a>
<a id="trace-12488"></a>
<a id="trace-12490"></a>
<a id="trace-12502"></a>
<a id="trace-12504"></a>
<a id="trace-12518"></a>
<a id="trace-12520"></a>
<a id="trace-12536"></a>
<a id="trace-12538"></a>
<a id="trace-12617"></a>
<a id="trace-12619"></a>
<a id="trace-12641"></a>
<a id="trace-12643"></a>
<a id="trace-12659"></a>
<a id="trace-12661"></a>
<a id="trace-12676"></a>
<a id="trace-12678"></a>
<a id="trace-12700"></a>
<a id="trace-12702"></a>
<a id="trace-12712"></a>
<a id="trace-12714"></a>
<a id="trace-12735"></a>
<a id="trace-12737"></a>
<a id="trace-12750"></a>
<a id="trace-12752"></a>
<a id="trace-12768"></a>
<a id="trace-12770"></a>
<a id="trace-12786"></a>
<a id="trace-12788"></a>
<a id="trace-12863"></a>
<a id="trace-12865"></a>
<a id="trace-12871"></a>
<a id="trace-12873"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12912"></a>
<a id="trace-12914"></a>
<a id="trace-12944"></a>
<a id="trace-12946"></a>
<a id="trace-12970"></a>
<a id="trace-12972"></a>
<a id="trace-13001"></a>
<a id="trace-13003"></a>
<a id="trace-13030"></a>
<a id="trace-13032"></a>
<a id="trace-13042"></a>
<a id="trace-13044"></a>
<a id="trace-13056"></a>
<a id="trace-13058"></a>
<a id="trace-13139"></a>
<a id="trace-13141"></a>
<a id="trace-13150"></a>
<a id="trace-13152"></a>
<a id="trace-13221"></a>
<a id="trace-13223"></a>
<a id="trace-13227"></a>
<a id="trace-13229"></a>
<a id="trace-13251"></a>
<a id="trace-13253"></a>
<a id="trace-13276"></a>
<a id="trace-13278"></a>
<a id="trace-13293"></a>
<a id="trace-13295"></a>
<a id="trace-13316"></a>
<a id="trace-13318"></a>
<a id="trace-13335"></a>
<a id="trace-13337"></a>
<a id="trace-13346"></a>
<a id="trace-13348"></a>
<a id="trace-13423"></a>
<a id="trace-13425"></a>
<a id="trace-13432"></a>
<a id="trace-13434"></a>
<a id="trace-13453"></a>
<a id="trace-13455"></a>
<a id="trace-13470"></a>
<a id="trace-13472"></a>
<a id="trace-13487"></a>
<a id="trace-13489"></a>
<a id="trace-13499"></a>
<a id="trace-13501"></a>
<a id="trace-13524"></a>
<a id="trace-13526"></a>
<a id="trace-13536"></a>
<a id="trace-13538"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13564"></a>
<a id="trace-13566"></a>
<a id="trace-13647"></a>
<a id="trace-13649"></a>
<a id="trace-13662"></a>
<a id="trace-13664"></a>
<a id="trace-13680"></a>
<a id="trace-13682"></a>
<a id="trace-13692"></a>
<a id="trace-13694"></a>
<a id="trace-13717"></a>
<a id="trace-13719"></a>
<a id="trace-13731"></a>
<a id="trace-13733"></a>
<a id="trace-13852"></a>
<a id="trace-13854"></a>
<a id="trace-13868"></a>
<a id="trace-13870"></a>
<a id="trace-13896"></a>
<a id="trace-13898"></a>
<a id="trace-13912"></a>
<a id="trace-13914"></a>
<a id="trace-13993"></a>
<a id="trace-13995"></a>
<a id="trace-14012"></a>
<a id="trace-14014"></a>
<a id="trace-14032"></a>
<a id="trace-14034"></a>
<a id="trace-14041"></a>
<a id="trace-14043"></a>
<a id="trace-14065"></a>
<a id="trace-14067"></a>
<a id="trace-14079"></a>
<a id="trace-14081"></a>
<a id="trace-14101"></a>
<a id="trace-14103"></a>
<a id="trace-14119"></a>
<a id="trace-14121"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14146"></a>
<a id="trace-14148"></a>
<a id="trace-14225"></a>
<a id="trace-14227"></a>
<a id="trace-14238"></a>
<a id="trace-14240"></a>
<a id="trace-14254"></a>
<a id="trace-14256"></a>
<a id="trace-14267"></a>
<a id="trace-14269"></a>
<a id="trace-14292"></a>
<a id="trace-14294"></a>
<a id="trace-14318"></a>
<a id="trace-14320"></a>
<a id="trace-14342"></a>
<a id="trace-14344"></a>
<a id="trace-14366"></a>
<a id="trace-14368"></a>
<a id="trace-14384"></a>
<a id="trace-14386"></a>
<a id="trace-14404"></a>
<a id="trace-14406"></a>
<a id="trace-14491"></a>
<a id="trace-14493"></a>
<a id="trace-14499"></a>
<a id="trace-14501"></a>
<a id="trace-14520"></a>
<a id="trace-14522"></a>
<a id="trace-14538"></a>
<a id="trace-14540"></a>
<a id="trace-14552"></a>
<a id="trace-14554"></a>
<a id="trace-14564"></a>
<a id="trace-14566"></a>
<a id="trace-14585"></a>
<a id="trace-14587"></a>
<a id="trace-14596"></a>
<a id="trace-14598"></a>
<a id="trace-14610"></a>
<a id="trace-14612"></a>
<a id="trace-14624"></a>
<a id="trace-14626"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14714"></a>
<a id="trace-14716"></a>
<a id="trace-14733"></a>
<a id="trace-14735"></a>
<a id="trace-14745"></a>
<a id="trace-14747"></a>
<a id="trace-14759"></a>
<a id="trace-14761"></a>
<a id="trace-14769"></a>
<a id="trace-14771"></a>
<a id="trace-14784"></a>
<a id="trace-14786"></a>
<a id="trace-14793"></a>
<a id="trace-14795"></a>
<a id="trace-14815"></a>
<a id="trace-14817"></a>
<a id="trace-14825"></a>
<a id="trace-14827"></a>
<a id="trace-15015"></a>
<a id="trace-15017"></a>
<a id="trace-15032"></a>
<a id="trace-15034"></a>
<a id="trace-15050"></a>
<a id="trace-15052"></a>
<a id="trace-15086"></a>
<a id="trace-15088"></a>
<a id="trace-15103"></a>
<a id="trace-15105"></a>
<a id="trace-15120"></a>
<a id="trace-15122"></a>
<a id="trace-15141"></a>
<a id="trace-15143"></a>
<a id="trace-15159"></a>
<a id="trace-15161"></a>
<a id="trace-15171"></a>
<a id="trace-15173"></a>
<a id="trace-15184"></a>
<a id="trace-15186"></a>
<a id="trace-15266"></a>
<a id="trace-15268"></a>
<a id="trace-15278"></a>
<a id="trace-15280"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15313"></a>
<a id="trace-15315"></a>
<a id="trace-15334"></a>
<a id="trace-15336"></a>
<a id="trace-15362"></a>
<a id="trace-15364"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15395"></a>
<a id="trace-15397"></a>
<a id="trace-15419"></a>
<a id="trace-15421"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-15510"></a>
<a id="trace-15512"></a>
<a id="trace-15524"></a>
<a id="trace-15526"></a>
<a id="trace-15541"></a>
<a id="trace-15543"></a>
<a id="trace-15564"></a>
<a id="trace-15566"></a>
<a id="trace-15577"></a>
<a id="trace-15579"></a>
<a id="trace-15591"></a>
<a id="trace-15593"></a>
<a id="trace-15772"></a>
<a id="trace-15774"></a>
<a id="trace-15788"></a>
<a id="trace-15790"></a>
<a id="trace-15815"></a>
<a id="trace-15817"></a>
<a id="trace-15836"></a>
<a id="trace-15838"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-15947"></a>
<a id="trace-15949"></a>
<a id="trace-15966"></a>
<a id="trace-15968"></a>
<a id="trace-15981"></a>
<a id="trace-15983"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16015"></a>
<a id="trace-16017"></a>
<a id="trace-16034"></a>
<a id="trace-16036"></a>
<a id="trace-16047"></a>
<a id="trace-16049"></a>
<a id="trace-16066"></a>
<a id="trace-16068"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16165"></a>
<a id="trace-16167"></a>
<a id="trace-16179"></a>
<a id="trace-16181"></a>
<a id="trace-16203"></a>
<a id="trace-16205"></a>
<a id="trace-16224"></a>
<a id="trace-16226"></a>
<a id="trace-16241"></a>
<a id="trace-16243"></a>
<a id="trace-16256"></a>
<a id="trace-16258"></a>
<a id="trace-16284"></a>
<a id="trace-16286"></a>
<a id="trace-16298"></a>
<a id="trace-16300"></a>
<a id="trace-16313"></a>
<a id="trace-16315"></a>
<a id="trace-16323"></a>
<a id="trace-16325"></a>
<a id="trace-16402"></a>
<a id="trace-16404"></a>
<a id="trace-16413"></a>
<a id="trace-16415"></a>
<a id="trace-16534"></a>
<a id="trace-16536"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16571"></a>
<a id="trace-16573"></a>
<a id="trace-16598"></a>
<a id="trace-16600"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16636"></a>
<a id="trace-16638"></a>
<a id="trace-16667"></a>
<a id="trace-16669"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16757"></a>
<a id="trace-16759"></a>
<a id="trace-16898"></a>
<a id="trace-16900"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
<a id="trace-16952"></a>
<a id="trace-16954"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16990"></a>
<a id="trace-16992"></a>
<a id="trace-17004"></a>
<a id="trace-17006"></a>
<a id="trace-17025"></a>
<a id="trace-17027"></a>
<a id="trace-17043"></a>
<a id="trace-17045"></a>
<a id="trace-17134"></a>
<a id="trace-17136"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17174"></a>
<a id="trace-17176"></a>
<a id="trace-17357"></a>
<a id="trace-17359"></a>
<a id="trace-17381"></a>
<a id="trace-17383"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17425"></a>
<a id="trace-17427"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17460"></a>
<a id="trace-17462"></a>
<a id="trace-17480"></a>
<a id="trace-17482"></a>
<a id="trace-17558"></a>
<a id="trace-17560"></a>
<a id="trace-17794"></a>
<a id="trace-17796"></a>
<a id="trace-17824"></a>
<a id="trace-17826"></a>
<a id="trace-17840"></a>
<a id="trace-17842"></a>
<a id="trace-17865"></a>
<a id="trace-17867"></a>
<a id="trace-17884"></a>
<a id="trace-17886"></a>
<a id="trace-17907"></a>
<a id="trace-17909"></a>
<a id="trace-17930"></a>
<a id="trace-17932"></a>
<a id="trace-17955"></a>
<a id="trace-17957"></a>
<a id="trace-17970"></a>
<a id="trace-17972"></a>
<a id="trace-18125"></a>
<a id="trace-18127"></a>
<a id="trace-18140"></a>
<a id="trace-18142"></a>
<a id="trace-18164"></a>
<a id="trace-18166"></a>
<a id="trace-18192"></a>
<a id="trace-18194"></a>
<a id="trace-18226"></a>
<a id="trace-18228"></a>
<a id="trace-18253"></a>
<a id="trace-18255"></a>
<a id="trace-18276"></a>
<a id="trace-18278"></a>
<a id="trace-18296"></a>
<a id="trace-18298"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18605"></a>
<a id="trace-18607"></a>
<a id="trace-18624"></a>
<a id="trace-18626"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18678"></a>
<a id="trace-18680"></a>
<a id="trace-18696"></a>
<a id="trace-18698"></a>
<a id="trace-18720"></a>
<a id="trace-18722"></a>
<a id="trace-18741"></a>
<a id="trace-18743"></a>
<a id="trace-18860"></a>
<a id="trace-18862"></a>
<a id="trace-18892"></a>
<a id="trace-18894"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-19010"></a>
<a id="trace-19012"></a>
<a id="trace-19043"></a>
<a id="trace-19045"></a>
<a id="trace-19076"></a>
<a id="trace-19078"></a>
<a id="trace-19104"></a>
<a id="trace-19106"></a>
<a id="trace-19147"></a>
<a id="trace-19149"></a>
<a id="trace-19180"></a>
<a id="trace-19182"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
<a id="trace-19674"></a>
<a id="trace-19676"></a>
<a id="trace-19706"></a>
<a id="trace-19708"></a>
<a id="trace-19728"></a>
<a id="trace-19730"></a>
<a id="trace-19811"></a>
<a id="trace-19813"></a>
<a id="trace-19881"></a>
<a id="trace-19883"></a>
<a id="trace-19901"></a>
<a id="trace-19903"></a>
<a id="trace-19921"></a>
<a id="trace-19923"></a>
<a id="trace-19936"></a>
<a id="trace-19938"></a>
<a id="trace-19949"></a>
<a id="trace-19951"></a>
<a id="trace-19978"></a>
<a id="trace-19980"></a>
<a id="trace-19996"></a>
<a id="trace-19998"></a>
<a id="trace-20012"></a>
<a id="trace-20014"></a>
<a id="trace-20029"></a>
<a id="trace-20031"></a>
<a id="trace-20108"></a>
<a id="trace-20110"></a>
<a id="trace-20120"></a>
<a id="trace-20122"></a>
<a id="trace-20139"></a>
<a id="trace-20141"></a>
<a id="trace-20150"></a>
<a id="trace-20152"></a>
<a id="trace-20169"></a>
<a id="trace-20171"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
<a id="trace-20203"></a>
<a id="trace-20205"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20229"></a>
<a id="trace-20231"></a>
<a id="trace-20242"></a>
<a id="trace-20244"></a>
<a id="trace-20316"></a>
<a id="trace-20318"></a>
<a id="trace-20325"></a>
<a id="trace-20327"></a>
<a id="trace-20347"></a>
<a id="trace-20349"></a>
<a id="trace-20358"></a>
<a id="trace-20360"></a>
<a id="trace-20376"></a>
<a id="trace-20378"></a>
<a id="trace-20446"></a>
<a id="trace-20448"></a>
<a id="trace-20463"></a>
<a id="trace-20465"></a>
<a id="trace-20480"></a>
<a id="trace-20482"></a>
<a id="trace-20491"></a>
<a id="trace-20493"></a>
<a id="trace-20500"></a>
<a id="trace-20502"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20581"></a>
<a id="trace-20583"></a>
<a id="trace-20592"></a>
<a id="trace-20594"></a>
<a id="trace-20597"></a>
<a id="trace-20599"></a>
<a id="trace-20606"></a>
<a id="trace-20608"></a>
<a id="trace-20618"></a>
<a id="trace-20620"></a>
<a id="trace-20629"></a>
<a id="trace-20631"></a>
<a id="trace-20638"></a>
<a id="trace-20640"></a>
<a id="trace-20649"></a>
<a id="trace-20651"></a>
<a id="trace-20658"></a>
<a id="trace-20660"></a>
<a id="trace-20725"></a>
<a id="trace-20727"></a>
<a id="trace-20731"></a>
<a id="trace-20733"></a>
<a id="trace-20744"></a>
<a id="trace-20746"></a>
<a id="trace-20751"></a>
<a id="trace-20753"></a>
<a id="trace-20764"></a>
<a id="trace-20766"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20785"></a>
<a id="trace-20787"></a>
<a id="trace-20794"></a>
<a id="trace-20796"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20898"></a>
<a id="trace-20900"></a>
<a id="trace-20905"></a>
<a id="trace-20907"></a>
<a id="trace-20915"></a>
<a id="trace-20917"></a>
<a id="trace-20921"></a>
<a id="trace-20923"></a>
<a id="trace-20932"></a>
<a id="trace-20934"></a>
<a id="trace-20941"></a>
<a id="trace-20943"></a>
<a id="trace-20952"></a>
<a id="trace-20954"></a>
<a id="trace-20963"></a>
<a id="trace-20965"></a>
<a id="trace-20973"></a>
<a id="trace-20975"></a>
<a id="trace-20987"></a>
<a id="trace-20989"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21080"></a>
<a id="trace-21082"></a>
<a id="trace-21108"></a>
<a id="trace-21110"></a>
<a id="trace-21181"></a>
<a id="trace-21183"></a>
<a id="trace-21208"></a>
<a id="trace-21210"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21239"></a>
<a id="trace-21241"></a>
<a id="trace-21249"></a>
<a id="trace-21251"></a>
<a id="trace-21259"></a>
<a id="trace-21261"></a>
<a id="trace-21269"></a>
<a id="trace-21271"></a>
<a id="trace-21344"></a>
<a id="trace-21346"></a>
<a id="trace-21352"></a>
<a id="trace-21354"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21378"></a>
<a id="trace-21380"></a>
<a id="trace-21399"></a>
<a id="trace-21401"></a>
<a id="trace-21419"></a>
<a id="trace-21421"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
<a id="trace-21445"></a>
<a id="trace-21447"></a>
<a id="trace-21465"></a>
<a id="trace-21467"></a>
<a id="trace-21476"></a>
<a id="trace-21478"></a>
<a id="trace-21551"></a>
<a id="trace-21553"></a>
<a id="trace-21560"></a>
<a id="trace-21562"></a>
<a id="trace-21575"></a>
<a id="trace-21577"></a>
<a id="trace-21587"></a>
<a id="trace-21589"></a>
<a id="trace-21668"></a>
<a id="trace-21670"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21704"></a>
<a id="trace-21706"></a>
<a id="trace-21725"></a>
<a id="trace-21727"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21811"></a>
<a id="trace-21813"></a>
<a id="trace-21820"></a>
<a id="trace-21822"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21861"></a>
<a id="trace-21863"></a>
<a id="trace-21873"></a>
<a id="trace-21875"></a>
<a id="trace-21889"></a>
<a id="trace-21891"></a>
<a id="trace-21898"></a>
<a id="trace-21900"></a>
<a id="trace-21912"></a>
<a id="trace-21914"></a>
<a id="trace-21924"></a>
<a id="trace-21926"></a>
<a id="trace-22018"></a>
<a id="trace-22020"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22065"></a>
<a id="trace-22067"></a>
<a id="trace-22081"></a>
<a id="trace-22083"></a>
<a id="trace-22096"></a>
<a id="trace-22098"></a>
<a id="trace-22118"></a>
<a id="trace-22120"></a>
<a id="trace-22128"></a>
<a id="trace-22130"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22226"></a>
<a id="trace-22228"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22254"></a>
<a id="trace-22256"></a>
<a id="trace-22263"></a>
<a id="trace-22265"></a>
<a id="trace-22284"></a>
<a id="trace-22286"></a>
<a id="trace-22303"></a>
<a id="trace-22305"></a>
<a id="trace-22375"></a>
<a id="trace-22377"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22407"></a>
<a id="trace-22409"></a>
<a id="trace-22421"></a>
<a id="trace-22423"></a>
<a id="trace-22495"></a>
<a id="trace-22497"></a>
<a id="trace-22512"></a>
<a id="trace-22514"></a>
<a id="trace-22528"></a>
<a id="trace-22530"></a>
<a id="trace-22538"></a>
<a id="trace-22540"></a>
<a id="trace-22558"></a>
<a id="trace-22560"></a>
<a id="trace-22579"></a>
<a id="trace-22581"></a>
<a id="trace-22602"></a>
<a id="trace-22604"></a>
<a id="trace-22618"></a>
<a id="trace-22620"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22815"></a>
<a id="trace-22817"></a>
<a id="trace-22830"></a>
<a id="trace-22832"></a>
<a id="trace-22854"></a>
<a id="trace-22856"></a>
<a id="trace-22869"></a>
<a id="trace-22871"></a>
<a id="trace-22889"></a>
<a id="trace-22891"></a>
<a id="trace-22907"></a>
<a id="trace-22909"></a>
<a id="trace-22929"></a>
<a id="trace-22931"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-23073"></a>
<a id="trace-23075"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23186"></a>
<a id="trace-23188"></a>
<a id="trace-23209"></a>
<a id="trace-23211"></a>
<a id="trace-23232"></a>
<a id="trace-23234"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23321"></a>
<a id="trace-23323"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23361"></a>
<a id="trace-23363"></a>
<a id="trace-23435"></a>
<a id="trace-23437"></a>
<a id="trace-23447"></a>
<a id="trace-23449"></a>
<a id="trace-23461"></a>
<a id="trace-23463"></a>
<a id="trace-23472"></a>
<a id="trace-23474"></a>
<a id="trace-23485"></a>
<a id="trace-23487"></a>
<a id="trace-23500"></a>
<a id="trace-23502"></a>
<a id="trace-23515"></a>
<a id="trace-23517"></a>
<a id="trace-23529"></a>
<a id="trace-23531"></a>
<a id="trace-23545"></a>
<a id="trace-23547"></a>
<a id="trace-23558"></a>
<a id="trace-23560"></a>
<a id="trace-23637"></a>
<a id="trace-23639"></a>
<a id="trace-23649"></a>
<a id="trace-23651"></a>
<a id="trace-23667"></a>
<a id="trace-23669"></a>
<a id="trace-23677"></a>
<a id="trace-23679"></a>
<a id="trace-23688"></a>
<a id="trace-23690"></a>
<a id="trace-23700"></a>
<a id="trace-23702"></a>
<a id="trace-23712"></a>
<a id="trace-23714"></a>
<a id="trace-23719"></a>
<a id="trace-23721"></a>
<a id="trace-23729"></a>
<a id="trace-23731"></a>
<a id="trace-23737"></a>
<a id="trace-23739"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23831"></a>
<a id="trace-23833"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23871"></a>
<a id="trace-23873"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23892"></a>
<a id="trace-23894"></a>
<a id="trace-23901"></a>
<a id="trace-23903"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-23983"></a>
<a id="trace-23985"></a>
<a id="trace-23994"></a>
<a id="trace-23996"></a>
<a id="trace-24002"></a>
<a id="trace-24004"></a>
<a id="trace-24012"></a>
<a id="trace-24014"></a>
<a id="trace-24025"></a>
<a id="trace-24027"></a>
<a id="trace-24038"></a>
<a id="trace-24040"></a>
<a id="trace-24050"></a>
<a id="trace-24052"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24067"></a>
<a id="trace-24069"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24145"></a>
<a id="trace-24147"></a>
<a id="trace-24155"></a>
<a id="trace-24157"></a>
<a id="trace-24163"></a>
<a id="trace-24165"></a>
<a id="trace-24173"></a>
<a id="trace-24175"></a>
<a id="trace-24185"></a>
<a id="trace-24187"></a>
<a id="trace-24195"></a>
<a id="trace-24197"></a>
<a id="trace-24203"></a>
<a id="trace-24205"></a>
<a id="trace-24213"></a>
<a id="trace-24215"></a>
<a id="trace-24219"></a>
<a id="trace-24221"></a>
<a id="trace-24294"></a>
<a id="trace-24296"></a>
<a id="trace-24311"></a>
<a id="trace-24313"></a>
<a id="trace-24322"></a>
<a id="trace-24324"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24342"></a>
<a id="trace-24344"></a>
<a id="trace-24351"></a>
<a id="trace-24353"></a>
<a id="trace-24362"></a>
<a id="trace-24364"></a>
<a id="trace-24370"></a>
<a id="trace-24372"></a>
<a id="trace-24380"></a>
<a id="trace-24382"></a>
<a id="trace-24388"></a>
<a id="trace-24390"></a>
<a id="trace-24457"></a>
<a id="trace-24459"></a>
<a id="trace-24466"></a>
<a id="trace-24468"></a>
<a id="trace-24477"></a>
<a id="trace-24479"></a>
<a id="trace-24489"></a>
<a id="trace-24491"></a>
<a id="trace-24506"></a>
<a id="trace-24508"></a>
<a id="trace-24517"></a>
<a id="trace-24519"></a>
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24551"></a>
<a id="trace-24553"></a>
<a id="trace-24558"></a>
<a id="trace-24560"></a>
<a id="trace-24626"></a>
<a id="trace-24628"></a>
<a id="trace-24631"></a>
<a id="trace-24633"></a>
<a id="trace-24641"></a>
<a id="trace-24643"></a>
<a id="trace-24647"></a>
<a id="trace-24649"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24670"></a>
<a id="trace-24672"></a>
<a id="trace-24686"></a>
<a id="trace-24688"></a>
<a id="trace-24694"></a>
<a id="trace-24696"></a>
<a id="trace-24711"></a>
<a id="trace-24713"></a>
<a id="trace-24724"></a>
<a id="trace-24726"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079396765797464, 'next_transition': 608}.
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
<a id="trace-1213"></a>
<a id="trace-1215"></a>
<a id="trace-1236"></a>
<a id="trace-1238"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 937): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5228231637604177, 'next_transition': 966}.
<a id="trace-1135"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1135): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1057. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.851393731094701, 'next_transition': 141}.
<a id="trace-1136"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1136): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1057. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.851393731094701, 'next_transition': 141}.
<a id="trace-141"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 141): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.858503067653851, 'next_transition': 2004}.
<a id="trace-1322"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1322): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1322. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.858503067653851, 'next_transition': 2004}.
<a id="trace-1323"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1323): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1323. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.858503067653851, 'next_transition': 2004}.
<a id="trace-1324"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1324): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663370309085, 'next_transition': 1485}.
<a id="trace-1325"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1325): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663370309085, 'next_transition': 1485}.
<a id="trace-1485"></a>
<a id="trace-1487"></a>
- 13.20s–13.20s (×2), actor 5, squad 0 (trace 1485): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1323. Next observer evidence: None.
<a id="trace-1495"></a>
- 13.35s–13.35s (×1), actor 0, squad 0 (trace 1495): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8859448546043841, 'next_transition': 1707}.
<a id="trace-1707"></a>
<a id="trace-1709"></a>
<a id="trace-1731"></a>
<a id="trace-1733"></a>
<a id="trace-1817"></a>
<a id="trace-1819"></a>
<a id="trace-1859"></a>
<a id="trace-1861"></a>
<a id="trace-1901"></a>
<a id="trace-1903"></a>
<a id="trace-1926"></a>
<a id="trace-1928"></a>
<a id="trace-1945"></a>
<a id="trace-1947"></a>
<a id="trace-1965"></a>
<a id="trace-1967"></a>
<a id="trace-2045"></a>
<a id="trace-2047"></a>
<a id="trace-2515"></a>
<a id="trace-2517"></a>
<a id="trace-2545"></a>
<a id="trace-2547"></a>
<a id="trace-2638"></a>
<a id="trace-2640"></a>
<a id="trace-2674"></a>
<a id="trace-2676"></a>
<a id="trace-2709"></a>
<a id="trace-2711"></a>
- 14.20s–21.75s (×28), actor 5, squad 0 (trace 1707): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1323. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24745783711018074, 'next_transition': 1731}.
<a id="trace-2004"></a>
- 18.60s–18.60s (×1), actor 8, squad 1 (trace 2004): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1755. Next observer evidence: None.
<a id="trace-2052"></a>
- 18.75s–18.75s (×1), actor 8, squad 1 (trace 2052): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1755. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2164}.
<a id="trace-2053"></a>
- 18.75s–18.75s (×1), actor 8, squad 1 (trace 2053): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1755. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2164}.
<a id="trace-2054"></a>
<a id="trace-2164"></a>
<a id="trace-2273"></a>
<a id="trace-2385"></a>
- 18.75s–19.00s (×4), actor 8, squad 1 (trace 2054): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1755. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2164}.
<a id="trace-2716"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2716): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2556. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.976049772714647, 'next_transition': 3105}.
<a id="trace-2717"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2717): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2556. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.976049772714647, 'next_transition': 3105}.
<a id="trace-2718"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2718): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2556. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.976049772714647, 'next_transition': 3105}.
<a id="trace-3060"></a>
- 22.50s–22.50s (×1), actor 9, squad 1 (trace 3060): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2564. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6251}.
<a id="trace-3105"></a>
<a id="trace-3107"></a>
<a id="trace-3147"></a>
<a id="trace-3149"></a>
<a id="trace-3185"></a>
<a id="trace-3187"></a>
<a id="trace-3269"></a>
<a id="trace-3271"></a>
<a id="trace-3282"></a>
<a id="trace-3284"></a>
- 23.25s–25.75s (×10), actor 5, squad 0 (trace 3105): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2561. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8493139030396178, 'next_transition': 3147}.
<a id="trace-3298"></a>
- 26.10s–26.10s (×1), actor 1, squad 0 (trace 3298): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13577336448627644, 'next_transition': 366}.
<a id="trace-3300"></a>
- 26.10s–26.10s (×1), actor 1, squad 0 (trace 3300): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13577336448627644, 'next_transition': 366}.
<a id="trace-5057"></a>
- 26.10s–26.10s (×1), actor 1, squad 0 (trace 5057): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13577336448627644, 'next_transition': 366}.
<a id="trace-5058"></a>
- 26.10s–26.10s (×1), actor 1, squad 0 (trace 5058): MoveTactically. Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13577336448627644, 'next_transition': 366}.
<a id="trace-5059"></a>
- 26.10s–26.10s (×1), actor 1, squad 0 (trace 5059): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13577336448627644, 'next_transition': 366}.
<a id="trace-366"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 366): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5241"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5241): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5241. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3901391618895075, 'next_transition': 5276}.
<a id="trace-5242"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5242): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5242. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3901391618895075, 'next_transition': 5276}.
<a id="trace-5276"></a>
<a id="trace-5323"></a>
- 27.25s–28.25s (×2), actor 5, squad 0 (trace 5276): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5242. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.775300029904447, 'next_transition': 5323}.
<a id="trace-5337"></a>
- 28.30s–28.30s (×1), actor 1, squad 0 (trace 5337): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7708411340459909, 'next_transition': 5639}.
<a id="trace-5338"></a>
- 28.30s–28.30s (×1), actor 1, squad 0 (trace 5338): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3196. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7708411340459909, 'next_transition': 5639}.
<a id="trace-5639"></a>
<a id="trace-5641"></a>
<a id="trace-5723"></a>
<a id="trace-5746"></a>
<a id="trace-5817"></a>
<a id="trace-5819"></a>
- 29.75s–31.75s (×6), actor 5, squad 0 (trace 5639): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5242. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8885589880917016, 'next_transition': 5723}.
<a id="trace-5846"></a>
- 32.05s–32.05s (×1), actor 1, squad 0 (trace 5846): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 5649. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00015714285714299843, 'next_transition': 6224}.
<a id="trace-5847"></a>
- 32.05s–32.05s (×1), actor 1, squad 0 (trace 5847): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 5649. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00015714285714299843, 'next_transition': 6224}.
<a id="trace-6224"></a>
<a id="trace-6226"></a>
<a id="trace-6342"></a>
<a id="trace-6344"></a>
<a id="trace-6388"></a>
<a id="trace-6390"></a>
<a id="trace-6451"></a>
<a id="trace-6453"></a>
<a id="trace-6500"></a>
<a id="trace-6502"></a>
<a id="trace-6615"></a>
<a id="trace-6617"></a>
<a id="trace-6648"></a>
<a id="trace-6650"></a>
<a id="trace-6712"></a>
<a id="trace-6714"></a>
<a id="trace-6734"></a>
<a id="trace-6736"></a>
<a id="trace-6779"></a>
<a id="trace-6781"></a>
<a id="trace-6796"></a>
<a id="trace-6798"></a>
<a id="trace-6833"></a>
<a id="trace-6835"></a>
<a id="trace-6919"></a>
<a id="trace-6921"></a>
- 32.25s–40.25s (×26), actor 5, squad 0 (trace 6224): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5653. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6832190540719864, 'next_transition': 6342}.
<a id="trace-6251"></a>
- 32.55s–32.55s (×1), actor 9, squad 1 (trace 6251): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 5656. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 620}.
<a id="trace-619"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (events line 619): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-620"></a>
- 40.35s–40.35s (×1), actor 5, squad 1 (events line 620): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6928"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 6928): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.260774 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6928. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6947978370416596, 'next_transition': 6945}.
<a id="trace-6929"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 6929): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.260774 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6929. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6947978370416596, 'next_transition': 6945}.
<a id="trace-6930"></a>
- 40.35s–40.35s (×1), actor 5, squad 1 (trace 6930): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.260774 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6930. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7194}.
<a id="trace-6931"></a>
- 40.35s–40.35s (×1), actor 5, squad 1 (trace 6931): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.260774 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6931. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7194}.
<a id="trace-6945"></a>
<a id="trace-6947"></a>
<a id="trace-6964"></a>
<a id="trace-6966"></a>
<a id="trace-6980"></a>
<a id="trace-6982"></a>
<a id="trace-7005"></a>
<a id="trace-7007"></a>
<a id="trace-7022"></a>
<a id="trace-7024"></a>
<a id="trace-7046"></a>
<a id="trace-7048"></a>
- 40.75s–43.25s (×12), actor 5, squad 0 (trace 6945): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 6931. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4464047742652768, 'next_transition': 6964}.
<a id="trace-7057"></a>
- 43.45s–43.45s (×1), actor 1, squad 0 (trace 7057): NeedSupport. Knowledge: actor memory at 40.00s, trace 6844. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999621222221013, 'next_transition': 7065}.
<a id="trace-7065"></a>
<a id="trace-7067"></a>
<a id="trace-7209"></a>
<a id="trace-7211"></a>
- 43.75s–45.75s (×4), actor 5, squad 0 (trace 7065): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 6931. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7913393305894456, 'next_transition': 7209}.
<a id="trace-7194"></a>
- 45.30s–45.30s (×1), actor 9, squad 1 (trace 7194): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 7125. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7453}.
<a id="trace-7219"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 7219): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 7118. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19253395353886482, 'next_transition': 7340}.
<a id="trace-7220"></a>
- 45.85s–45.85s (×1), actor 1, squad 0 (trace 7220): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 7118. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19253395353886482, 'next_transition': 7340}.
<a id="trace-7340"></a>
<a id="trace-7342"></a>
<a id="trace-7363"></a>
<a id="trace-7365"></a>
<a id="trace-7395"></a>
<a id="trace-7397"></a>
<a id="trace-7411"></a>
<a id="trace-7413"></a>
<a id="trace-7467"></a>
<a id="trace-7469"></a>
- 46.25s–48.75s (×10), actor 5, squad 0 (trace 7340): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7122. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7363}.
<a id="trace-7453"></a>
- 48.60s–48.60s (×1), actor 9, squad 1 (trace 7453): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7125. Next observer evidence: {'until': 67.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1250}.
<a id="trace-7455"></a>
- 48.60s–48.60s (×1), actor 9, squad 1 (trace 7455): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 45.00s, trace 7125. Next observer evidence: {'until': 67.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1250}.
<a id="trace-7479"></a>
- 49.10s–49.10s (×1), actor 1, squad 0 (trace 7479): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 45.00s, trace 7118. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997565290736, 'next_transition': 7488}.
<a id="trace-7488"></a>
<a id="trace-7490"></a>
<a id="trace-7501"></a>
<a id="trace-7503"></a>
- 49.25s–49.75s (×4), actor 5, squad 0 (trace 7488): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7122. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299979117821805, 'next_transition': 7501}.
<a id="trace-7527"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 7527): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 7510. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149987812273485, 'next_transition': 7699}.
<a id="trace-7532"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 7532): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 7510. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149987812273485, 'next_transition': 7699}.
<a id="trace-7533"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 7533): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 7510. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149987812273485, 'next_transition': 7699}.
<a id="trace-7699"></a>
<a id="trace-7701"></a>
<a id="trace-7712"></a>
<a id="trace-7714"></a>
<a id="trace-7740"></a>
<a id="trace-7742"></a>
<a id="trace-7784"></a>
<a id="trace-7786"></a>
<a id="trace-7814"></a>
<a id="trace-7816"></a>
<a id="trace-7835"></a>
<a id="trace-7837"></a>
<a id="trace-7853"></a>
<a id="trace-7855"></a>
- 50.25s–53.75s (×14), actor 5, squad 0 (trace 7699): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7513. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300330622517195, 'next_transition': 7712}.
<a id="trace-7869"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 7869): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 7510. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8037}.
<a id="trace-7872"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 7872): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 7510. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8037}.
<a id="trace-7873"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 7873): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 7510. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8037}.
<a id="trace-8037"></a>
<a id="trace-8039"></a>
<a id="trace-8049"></a>
<a id="trace-8051"></a>
<a id="trace-8163"></a>
<a id="trace-8165"></a>
<a id="trace-8184"></a>
<a id="trace-8186"></a>
<a id="trace-8209"></a>
<a id="trace-8211"></a>
<a id="trace-8231"></a>
<a id="trace-8233"></a>
<a id="trace-8247"></a>
<a id="trace-8249"></a>
<a id="trace-8271"></a>
<a id="trace-8273"></a>
<a id="trace-8281"></a>
<a id="trace-8283"></a>
<a id="trace-8299"></a>
<a id="trace-8301"></a>
<a id="trace-8314"></a>
<a id="trace-8316"></a>
<a id="trace-8394"></a>
<a id="trace-8396"></a>
<a id="trace-8420"></a>
<a id="trace-8422"></a>
<a id="trace-8436"></a>
<a id="trace-8438"></a>
<a id="trace-8449"></a>
<a id="trace-8451"></a>
<a id="trace-8475"></a>
<a id="trace-8477"></a>
<a id="trace-8491"></a>
<a id="trace-8493"></a>
<a id="trace-8514"></a>
<a id="trace-8516"></a>
<a id="trace-8523"></a>
<a id="trace-8525"></a>
<a id="trace-8543"></a>
<a id="trace-8545"></a>
<a id="trace-8556"></a>
<a id="trace-8558"></a>
<a id="trace-8637"></a>
<a id="trace-8639"></a>
- 54.25s–65.25s (×44), actor 5, squad 0 (trace 8037): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7513. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8049}.
<a id="trace-8655"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 8655): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 8570. Next observer evidence: None.
<a id="trace-8656"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 8656): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 8570. Next observer evidence: None.
<a id="trace-8815"></a>
<a id="trace-8817"></a>
<a id="trace-8927"></a>
<a id="trace-8929"></a>
<a id="trace-8954"></a>
<a id="trace-8956"></a>
<a id="trace-9049"></a>
<a id="trace-9051"></a>
<a id="trace-9065"></a>
<a id="trace-9067"></a>
<a id="trace-9153"></a>
<a id="trace-9155"></a>
<a id="trace-9170"></a>
<a id="trace-9172"></a>
<a id="trace-9190"></a>
<a id="trace-9192"></a>
<a id="trace-9221"></a>
<a id="trace-9223"></a>
<a id="trace-9257"></a>
<a id="trace-9259"></a>
<a id="trace-9271"></a>
<a id="trace-9273"></a>
<a id="trace-9297"></a>
<a id="trace-9299"></a>
<a id="trace-9310"></a>
<a id="trace-9312"></a>
<a id="trace-9389"></a>
<a id="trace-9391"></a>
- 65.75s–75.25s (×28), actor 5, squad 0 (trace 8815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 8573. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6168681791319199, 'next_transition': 8927}.
<a id="trace-1250"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (events line 1250): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8973"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 8973): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.139679 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 8973. Next observer evidence: {'until': 97.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11236}.
<a id="trace-8974"></a>
- 67.95s–67.95s (×1), actor 5, squad 1 (trace 8974): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.139679 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.95s, trace 8974. Next observer evidence: {'until': 97.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11236}.
<a id="trace-9398"></a>
- 75.25s–75.25s (×1), actor 1, squad 0 (trace 9398): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 9319. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119947766848343, 'next_transition': 9517}.
<a id="trace-9500"></a>
- 75.25s–75.25s (×1), actor 1, squad 0 (trace 9500): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 9319. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119947766848343, 'next_transition': 9517}.
<a id="trace-9517"></a>
<a id="trace-9519"></a>
<a id="trace-9544"></a>
<a id="trace-9546"></a>
<a id="trace-9566"></a>
<a id="trace-9568"></a>
<a id="trace-9590"></a>
<a id="trace-9592"></a>
<a id="trace-9610"></a>
<a id="trace-9612"></a>
<a id="trace-9651"></a>
<a id="trace-9653"></a>
<a id="trace-9756"></a>
<a id="trace-9758"></a>
<a id="trace-9787"></a>
<a id="trace-9789"></a>
<a id="trace-9814"></a>
<a id="trace-9816"></a>
<a id="trace-9824"></a>
<a id="trace-9826"></a>
<a id="trace-9842"></a>
<a id="trace-9844"></a>
<a id="trace-9857"></a>
<a id="trace-9859"></a>
<a id="trace-9875"></a>
<a id="trace-9877"></a>
<a id="trace-9886"></a>
<a id="trace-9888"></a>
- 75.75s–84.75s (×28), actor 5, squad 0 (trace 9517): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9322. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268005388306846, 'next_transition': 9544}.
<a id="trace-9963"></a>
- 85.20s–85.20s (×1), actor 5, squad 0 (trace 9963): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 85.20s, trace 9963. Next observer evidence: None.
<a id="trace-9969"></a>
<a id="trace-9971"></a>
<a id="trace-10024"></a>
<a id="trace-10026"></a>
<a id="trace-10056"></a>
<a id="trace-10058"></a>
<a id="trace-10073"></a>
<a id="trace-10075"></a>
<a id="trace-10100"></a>
<a id="trace-10102"></a>
<a id="trace-10111"></a>
<a id="trace-10113"></a>
<a id="trace-10187"></a>
<a id="trace-10189"></a>
<a id="trace-10201"></a>
<a id="trace-10203"></a>
<a id="trace-10222"></a>
<a id="trace-10224"></a>
<a id="trace-10235"></a>
<a id="trace-10237"></a>
<a id="trace-10255"></a>
<a id="trace-10257"></a>
<a id="trace-10270"></a>
<a id="trace-10272"></a>
<a id="trace-10289"></a>
<a id="trace-10291"></a>
<a id="trace-10302"></a>
<a id="trace-10304"></a>
<a id="trace-10328"></a>
<a id="trace-10330"></a>
<a id="trace-10413"></a>
<a id="trace-10415"></a>
<a id="trace-10437"></a>
<a id="trace-10439"></a>
<a id="trace-10451"></a>
<a id="trace-10453"></a>
<a id="trace-10472"></a>
<a id="trace-10474"></a>
<a id="trace-10484"></a>
<a id="trace-10486"></a>
<a id="trace-10506"></a>
<a id="trace-10508"></a>
<a id="trace-10519"></a>
<a id="trace-10521"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10644"></a>
<a id="trace-10646"></a>
<a id="trace-10656"></a>
<a id="trace-10658"></a>
<a id="trace-10676"></a>
<a id="trace-10678"></a>
<a id="trace-10688"></a>
<a id="trace-10690"></a>
<a id="trace-10717"></a>
<a id="trace-10719"></a>
<a id="trace-10731"></a>
<a id="trace-10733"></a>
<a id="trace-10836"></a>
<a id="trace-10838"></a>
<a id="trace-10861"></a>
<a id="trace-10863"></a>
<a id="trace-10875"></a>
<a id="trace-10877"></a>
<a id="trace-10892"></a>
<a id="trace-10894"></a>
<a id="trace-10913"></a>
<a id="trace-10915"></a>
- 85.25s–109.25s (×68), actor 5, squad 0 (trace 9969): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.20s, trace 9963. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6840143284196234, 'next_transition': 10024}.
<a id="trace-2229"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (events line 2229): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10924}.
<a id="trace-10920"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 10920): renew committed intent (75 s lifetime). Knowledge: actor memory at 109.45s, trace 10920. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10924}.
<a id="trace-10924"></a>
<a id="trace-10926"></a>
<a id="trace-11005"></a>
<a id="trace-11007"></a>
<a id="trace-11021"></a>
<a id="trace-11023"></a>
- 109.75s–111.25s (×6), actor 5, squad 0 (trace 10924): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.45s, trace 10920. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11005}.
<a id="trace-11030"></a>
- 111.65s–111.65s (×1), actor 1, squad 0 (trace 11030): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 10931. Next observer evidence: None.
<a id="trace-11036"></a>
<a id="trace-11038"></a>
<a id="trace-11067"></a>
<a id="trace-11069"></a>
<a id="trace-11092"></a>
<a id="trace-11094"></a>
<a id="trace-11103"></a>
<a id="trace-11105"></a>
<a id="trace-11138"></a>
<a id="trace-11140"></a>
<a id="trace-11227"></a>
<a id="trace-11229"></a>
<a id="trace-11248"></a>
<a id="trace-11250"></a>
<a id="trace-11263"></a>
<a id="trace-11265"></a>
- 111.75s–116.25s (×16), actor 5, squad 0 (trace 11036): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 10933. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11067}.
<a id="trace-11236"></a>
- 115.40s–115.40s (×1), actor 9, squad 1 (trace 11236): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 115.00s, trace 11166. Next observer evidence: None.
<a id="trace-11237"></a>
- 115.40s–115.40s (×1), actor 9, squad 1 (trace 11237): MoveTactically. Knowledge: actor memory at 115.00s, trace 11166. Next observer evidence: None.
<a id="trace-11238"></a>
- 115.40s–115.40s (×1), actor 9, squad 1 (trace 11238): . Knowledge: actor memory at 115.00s, trace 11166. Next observer evidence: None.
<a id="trace-11242"></a>
- 115.45s–115.45s (×1), actor 9, squad 1 (trace 11242): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 11166. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12384}.
<a id="trace-11270"></a>
- 116.25s–116.25s (×1), actor 1, squad 0 (trace 11270): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 115.00s, trace 11161. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11302}.
<a id="trace-11271"></a>
- 116.25s–116.25s (×1), actor 1, squad 0 (trace 11271): MoveTactically. Knowledge: actor memory at 115.00s, trace 11161. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11302}.
<a id="trace-11272"></a>
- 116.25s–116.25s (×1), actor 1, squad 0 (trace 11272): traveling overwatch. Knowledge: actor memory at 115.00s, trace 11161. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11302}.
<a id="trace-11273"></a>
- 116.25s–116.25s (×1), actor 1, squad 0 (trace 11273): . Knowledge: actor memory at 115.00s, trace 11161. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11302}.
<a id="trace-11302"></a>
<a id="trace-11304"></a>
- 117.25s–117.25s (×2), actor 5, squad 0 (trace 11302): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11163. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11374}.
<a id="trace-11309"></a>
- 117.25s–117.25s (×1), actor 1, squad 0 (trace 11309): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 11161. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11374}.
<a id="trace-11374"></a>
<a id="trace-11376"></a>
<a id="trace-11392"></a>
<a id="trace-11394"></a>
<a id="trace-11436"></a>
<a id="trace-11438"></a>
<a id="trace-11515"></a>
<a id="trace-11517"></a>
<a id="trace-11534"></a>
<a id="trace-11536"></a>
<a id="trace-11558"></a>
<a id="trace-11560"></a>
<a id="trace-11571"></a>
<a id="trace-11573"></a>
<a id="trace-11598"></a>
<a id="trace-11600"></a>
<a id="trace-11626"></a>
<a id="trace-11628"></a>
<a id="trace-11635"></a>
<a id="trace-11637"></a>
<a id="trace-11653"></a>
<a id="trace-11655"></a>
<a id="trace-11666"></a>
<a id="trace-11668"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11787"></a>
<a id="trace-11789"></a>
<a id="trace-11807"></a>
<a id="trace-11809"></a>
<a id="trace-11824"></a>
<a id="trace-11826"></a>
<a id="trace-11866"></a>
<a id="trace-11868"></a>
<a id="trace-11883"></a>
<a id="trace-11885"></a>
<a id="trace-11895"></a>
<a id="trace-11897"></a>
<a id="trace-11978"></a>
<a id="trace-11980"></a>
<a id="trace-12004"></a>
<a id="trace-12006"></a>
<a id="trace-12015"></a>
<a id="trace-12017"></a>
- 117.75s–131.80s (×46), actor 5, squad 0 (trace 11374): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11163. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748743441938332, 'next_transition': 11392}.
<a id="trace-12028"></a>
- 132.25s–132.25s (×1), actor 1, squad 0 (trace 12028): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 11902. Next observer evidence: None.
<a id="trace-12039"></a>
<a id="trace-12041"></a>
- 132.30s–132.30s (×2), actor 5, squad 0 (trace 12039): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 11904. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300047665087206, 'next_transition': 12069}.
<a id="trace-12069"></a>
- 133.25s–133.25s (×1), actor 1, squad 0 (trace 12069): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 11902. Next observer evidence: None.
<a id="trace-12181"></a>
<a id="trace-12183"></a>
<a id="trace-12190"></a>
<a id="trace-12192"></a>
<a id="trace-12239"></a>
<a id="trace-12241"></a>
<a id="trace-12329"></a>
<a id="trace-12331"></a>
<a id="trace-12356"></a>
<a id="trace-12358"></a>
<a id="trace-12374"></a>
<a id="trace-12376"></a>
<a id="trace-12460"></a>
<a id="trace-12462"></a>
<a id="trace-12484"></a>
<a id="trace-12486"></a>
<a id="trace-12498"></a>
<a id="trace-12500"></a>
<a id="trace-12514"></a>
<a id="trace-12516"></a>
<a id="trace-12532"></a>
<a id="trace-12534"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12637"></a>
<a id="trace-12639"></a>
<a id="trace-12655"></a>
<a id="trace-12657"></a>
<a id="trace-12672"></a>
<a id="trace-12674"></a>
<a id="trace-12696"></a>
<a id="trace-12698"></a>
<a id="trace-12731"></a>
<a id="trace-12733"></a>
<a id="trace-12746"></a>
<a id="trace-12748"></a>
<a id="trace-12782"></a>
<a id="trace-12784"></a>
<a id="trace-12859"></a>
<a id="trace-12861"></a>
- 133.30s–145.30s (×40), actor 5, squad 0 (trace 12181): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 11904. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5406187703587808, 'next_transition': 12190}.
<a id="trace-12384"></a>
- 137.05s–137.05s (×1), actor 9, squad 1 (trace 12384): traveling. Knowledge: actor memory at 135.00s, trace 12252. Next observer evidence: None.
<a id="trace-12385"></a>
- 137.05s–137.05s (×1), actor 9, squad 1 (trace 12385): current contact unknown for 10 s. Knowledge: actor memory at 135.00s, trace 12252. Next observer evidence: None.
<a id="trace-2507"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (events line 2507): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12439"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 12439): renew committed intent (75 s lifetime). Knowledge: actor memory at 137.10s, trace 12439. Next observer evidence: {'until': 142, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.6475, 'next_transition': 12683}.
<a id="trace-12683"></a>
- 142.05s–142.05s (×1), actor 9, squad 1 (trace 12683): traveling overwatch. Knowledge: actor memory at 140.00s, trace 12548. Next observer evidence: {'until': 172, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35249999999999915, 'next_transition': 2828}.
<a id="trace-12684"></a>
- 142.05s–142.05s (×1), actor 9, squad 1 (trace 12684): received platoon directive. Knowledge: actor memory at 140.00s, trace 12548. Next observer evidence: {'until': 172, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35249999999999915, 'next_transition': 2828}.
<a id="trace-12879"></a>
- 146.10s–146.10s (×1), actor 1, squad 0 (trace 12879): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 12792. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519833568403291, 'next_transition': 12895}.
<a id="trace-12895"></a>
<a id="trace-12897"></a>
- 146.30s–146.30s (×2), actor 5, squad 0 (trace 12895): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 12794. Next observer evidence: None.
<a id="trace-12902"></a>
- 146.35s–146.35s (×1), actor 1, squad 0 (trace 12902): matching received arrivals: deployment leg complete. Knowledge: actor memory at 145.00s, trace 12792. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6663870762534193, 'next_transition': 12908}.
<a id="trace-12908"></a>
<a id="trace-12910"></a>
<a id="trace-12940"></a>
<a id="trace-12942"></a>
- 146.80s–147.30s (×4), actor 5, squad 0 (trace 12908): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 12794. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12940}.
<a id="trace-12948"></a>
- 147.35s–147.35s (×1), actor 1, squad 0 (trace 12948): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 12792. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12997}.
<a id="trace-12952"></a>
- 147.35s–147.35s (×1), actor 1, squad 0 (trace 12952): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 12792. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12997}.
<a id="trace-12953"></a>
- 147.35s–147.35s (×1), actor 1, squad 0 (trace 12953): bounding overwatch. Knowledge: actor memory at 145.00s, trace 12792. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12997}.
<a id="trace-12954"></a>
- 147.35s–147.35s (×1), actor 1, squad 0 (trace 12954): Reorganise complete: known contact. Knowledge: actor memory at 145.00s, trace 12792. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12997}.
<a id="trace-12997"></a>
<a id="trace-12999"></a>
<a id="trace-13026"></a>
<a id="trace-13028"></a>
<a id="trace-13052"></a>
<a id="trace-13054"></a>
<a id="trace-13135"></a>
<a id="trace-13137"></a>
<a id="trace-13146"></a>
<a id="trace-13148"></a>
- 148.30s–150.80s (×10), actor 5, squad 0 (trace 12997): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 12794. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13026}.
<a id="trace-13155"></a>
- 151.20s–151.20s (×1), actor 1, squad 0 (trace 13155): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 13066. Next observer evidence: None.
<a id="trace-13156"></a>
- 151.20s–151.20s (×1), actor 1, squad 0 (trace 13156): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 13066. Next observer evidence: None.
<a id="trace-13217"></a>
<a id="trace-13219"></a>
<a id="trace-13272"></a>
<a id="trace-13274"></a>
<a id="trace-13289"></a>
<a id="trace-13291"></a>
<a id="trace-13312"></a>
<a id="trace-13314"></a>
<a id="trace-13331"></a>
<a id="trace-13333"></a>
<a id="trace-13342"></a>
<a id="trace-13344"></a>
<a id="trace-13419"></a>
<a id="trace-13421"></a>
<a id="trace-13428"></a>
<a id="trace-13430"></a>
<a id="trace-13449"></a>
<a id="trace-13451"></a>
<a id="trace-13466"></a>
<a id="trace-13468"></a>
<a id="trace-13483"></a>
<a id="trace-13485"></a>
<a id="trace-13520"></a>
<a id="trace-13522"></a>
<a id="trace-13532"></a>
<a id="trace-13534"></a>
<a id="trace-13548"></a>
<a id="trace-13550"></a>
<a id="trace-13560"></a>
<a id="trace-13562"></a>
<a id="trace-13643"></a>
<a id="trace-13645"></a>
<a id="trace-13658"></a>
<a id="trace-13660"></a>
<a id="trace-13676"></a>
<a id="trace-13678"></a>
<a id="trace-13713"></a>
<a id="trace-13715"></a>
<a id="trace-13727"></a>
<a id="trace-13729"></a>
- 151.30s–162.80s (×40), actor 5, squad 0 (trace 13217): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 13068. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670011873003442, 'next_transition': 13272}.
<a id="trace-13735"></a>
- 162.85s–162.85s (×1), actor 1, squad 0 (trace 13735): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 13568. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13848}.
<a id="trace-13736"></a>
- 162.85s–162.85s (×1), actor 1, squad 0 (trace 13736): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 13568. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13848}.
<a id="trace-13848"></a>
<a id="trace-13850"></a>
<a id="trace-13892"></a>
<a id="trace-13894"></a>
<a id="trace-13989"></a>
<a id="trace-13991"></a>
<a id="trace-14008"></a>
<a id="trace-14010"></a>
<a id="trace-14061"></a>
<a id="trace-14063"></a>
<a id="trace-14075"></a>
<a id="trace-14077"></a>
<a id="trace-14097"></a>
<a id="trace-14099"></a>
<a id="trace-14115"></a>
<a id="trace-14117"></a>
<a id="trace-14142"></a>
<a id="trace-14144"></a>
<a id="trace-14221"></a>
<a id="trace-14223"></a>
<a id="trace-14234"></a>
<a id="trace-14236"></a>
<a id="trace-14263"></a>
<a id="trace-14265"></a>
<a id="trace-14288"></a>
<a id="trace-14290"></a>
- 163.30s–172.30s (×26), actor 5, squad 0 (trace 13848): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 13570. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150280681084643, 'next_transition': 13892}.
<a id="trace-14295"></a>
- 172.30s–172.30s (×1), actor 1, squad 0 (trace 14295): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 170.00s, trace 14149. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8820197593955111, 'next_transition': 14314}.
<a id="trace-14314"></a>
<a id="trace-14316"></a>
<a id="trace-14338"></a>
<a id="trace-14340"></a>
<a id="trace-14380"></a>
<a id="trace-14382"></a>
<a id="trace-14400"></a>
<a id="trace-14402"></a>
<a id="trace-14487"></a>
<a id="trace-14489"></a>
<a id="trace-14495"></a>
<a id="trace-14497"></a>
<a id="trace-14516"></a>
<a id="trace-14518"></a>
<a id="trace-14534"></a>
<a id="trace-14536"></a>
<a id="trace-14560"></a>
<a id="trace-14562"></a>
<a id="trace-14581"></a>
<a id="trace-14583"></a>
- 172.80s–178.30s (×20), actor 5, squad 0 (trace 14314): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 14151. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8820633548379251, 'next_transition': 14338}.
<a id="trace-2758"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 2758): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14606}.
<a id="trace-14591"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 14591): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 14591. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14606}.
<a id="trace-14606"></a>
<a id="trace-14608"></a>
<a id="trace-14620"></a>
<a id="trace-14622"></a>
<a id="trace-14700"></a>
<a id="trace-14702"></a>
<a id="trace-14710"></a>
<a id="trace-14712"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14741"></a>
<a id="trace-14743"></a>
<a id="trace-14755"></a>
<a id="trace-14757"></a>
<a id="trace-14765"></a>
<a id="trace-14767"></a>
<a id="trace-14780"></a>
<a id="trace-14782"></a>
<a id="trace-14789"></a>
<a id="trace-14791"></a>
- 179.30s–183.80s (×20), actor 5, squad 0 (trace 14606): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 14591. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14620}.
<a id="trace-14796"></a>
- 184.20s–184.20s (×1), actor 1, squad 0 (trace 14796): MoveTactically. Knowledge: actor memory at 180.00s, trace 14629. Next observer evidence: None.
<a id="trace-14797"></a>
- 184.20s–184.20s (×1), actor 1, squad 0 (trace 14797): traveling overwatch. Knowledge: actor memory at 180.00s, trace 14629. Next observer evidence: None.
<a id="trace-14798"></a>
- 184.20s–184.20s (×1), actor 1, squad 0 (trace 14798): received platoon directive. Knowledge: actor memory at 180.00s, trace 14629. Next observer evidence: None.
<a id="trace-14811"></a>
<a id="trace-14813"></a>
<a id="trace-14821"></a>
<a id="trace-14823"></a>
- 184.30s–184.80s (×4), actor 5, squad 0 (trace 14811): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14631. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14821}.
<a id="trace-14900"></a>
- 185.20s–185.20s (×1), actor 1, squad 0 (trace 14900): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 14838. Next observer evidence: None.
<a id="trace-15011"></a>
<a id="trace-15013"></a>
<a id="trace-15028"></a>
<a id="trace-15030"></a>
<a id="trace-15046"></a>
<a id="trace-15048"></a>
<a id="trace-15082"></a>
<a id="trace-15084"></a>
<a id="trace-15099"></a>
<a id="trace-15101"></a>
<a id="trace-15137"></a>
<a id="trace-15139"></a>
<a id="trace-15155"></a>
<a id="trace-15157"></a>
<a id="trace-15167"></a>
<a id="trace-15169"></a>
<a id="trace-15180"></a>
<a id="trace-15182"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15274"></a>
<a id="trace-15276"></a>
<a id="trace-15288"></a>
<a id="trace-15290"></a>
<a id="trace-15309"></a>
<a id="trace-15311"></a>
<a id="trace-15330"></a>
<a id="trace-15332"></a>
- 185.30s–192.30s (×28), actor 5, squad 0 (trace 15011): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 14840. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15028}.
<a id="trace-2827"></a>
- 192.35s–192.35s (×1), actor 5, squad 0 (events line 2827): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2828"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (events line 2828): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15337"></a>
- 192.35s–192.35s (×1), actor 5, squad 0 (trace 15337): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 15337. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8819776070599306, 'next_transition': 15358}.
<a id="trace-15338"></a>
- 192.35s–192.35s (×1), actor 5, squad 0 (trace 15338): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 15338. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8819776070599306, 'next_transition': 15358}.
<a id="trace-15339"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 15339): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 15339. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15580}.
<a id="trace-15340"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 15340): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 15340. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15580}.
<a id="trace-15358"></a>
<a id="trace-15360"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15391"></a>
<a id="trace-15393"></a>
<a id="trace-15415"></a>
<a id="trace-15417"></a>
<a id="trace-15431"></a>
<a id="trace-15433"></a>
<a id="trace-15506"></a>
<a id="trace-15508"></a>
<a id="trace-15520"></a>
<a id="trace-15522"></a>
<a id="trace-15537"></a>
<a id="trace-15539"></a>
<a id="trace-15560"></a>
<a id="trace-15562"></a>
- 192.80s–196.80s (×18), actor 5, squad 0 (trace 15358): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 192.35s, trace 15340. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079869840305078, 'next_transition': 15378}.
<a id="trace-15580"></a>
- 197.30s–197.30s (×1), actor 9, squad 1 (trace 15580): received platoon directive. Knowledge: actor memory at 195.00s, trace 15444. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3183}.
<a id="trace-15601"></a>
- 198.20s–198.20s (×1), actor 1, squad 0 (trace 15601): traveling. Knowledge: actor memory at 195.00s, trace 15439. Next observer evidence: None.
<a id="trace-15602"></a>
- 198.20s–198.20s (×1), actor 1, squad 0 (trace 15602): current contact unknown for 10 s. Knowledge: actor memory at 195.00s, trace 15439. Next observer evidence: None.
<a id="trace-15768"></a>
<a id="trace-15770"></a>
<a id="trace-15784"></a>
<a id="trace-15786"></a>
<a id="trace-15811"></a>
<a id="trace-15813"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15943"></a>
<a id="trace-15945"></a>
<a id="trace-15962"></a>
<a id="trace-15964"></a>
<a id="trace-15977"></a>
<a id="trace-15979"></a>
<a id="trace-15996"></a>
<a id="trace-15998"></a>
<a id="trace-16011"></a>
<a id="trace-16013"></a>
<a id="trace-16030"></a>
<a id="trace-16032"></a>
<a id="trace-16043"></a>
<a id="trace-16045"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16161"></a>
<a id="trace-16163"></a>
<a id="trace-16175"></a>
<a id="trace-16177"></a>
<a id="trace-16199"></a>
<a id="trace-16201"></a>
<a id="trace-16220"></a>
<a id="trace-16222"></a>
<a id="trace-16237"></a>
<a id="trace-16239"></a>
<a id="trace-16252"></a>
<a id="trace-16254"></a>
<a id="trace-16280"></a>
<a id="trace-16282"></a>
<a id="trace-16309"></a>
<a id="trace-16311"></a>
<a id="trace-16398"></a>
<a id="trace-16400"></a>
<a id="trace-16409"></a>
<a id="trace-16411"></a>
- 198.30s–210.80s (×44), actor 5, squad 0 (trace 15768): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 15441. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2922779775416933, 'next_transition': 15784}.
<a id="trace-16419"></a>
- 211.20s–211.20s (×1), actor 1, squad 0 (trace 16419): traveling overwatch. Knowledge: actor memory at 210.00s, trace 16327. Next observer evidence: None.
<a id="trace-16420"></a>
- 211.20s–211.20s (×1), actor 1, squad 0 (trace 16420): matching received arrivals: traveling stage complete. Knowledge: actor memory at 210.00s, trace 16327. Next observer evidence: None.
<a id="trace-16530"></a>
<a id="trace-16532"></a>
<a id="trace-16542"></a>
<a id="trace-16544"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16594"></a>
<a id="trace-16596"></a>
<a id="trace-16632"></a>
<a id="trace-16634"></a>
<a id="trace-16663"></a>
<a id="trace-16665"></a>
<a id="trace-16678"></a>
<a id="trace-16680"></a>
<a id="trace-16753"></a>
<a id="trace-16755"></a>
- 211.30s–215.30s (×16), actor 5, squad 0 (trace 16530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 16329. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37800330845112945, 'next_transition': 16542}.
<a id="trace-16768"></a>
- 215.65s–215.65s (×1), actor 1, squad 0 (trace 16768): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 215.00s, trace 16686. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1889792789579861, 'next_transition': 16930}.
<a id="trace-16930"></a>
<a id="trace-16932"></a>
<a id="trace-16948"></a>
<a id="trace-16950"></a>
<a id="trace-16958"></a>
<a id="trace-16960"></a>
<a id="trace-16986"></a>
<a id="trace-16988"></a>
<a id="trace-17021"></a>
<a id="trace-17023"></a>
<a id="trace-17039"></a>
<a id="trace-17041"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17150"></a>
<a id="trace-17152"></a>
- 216.80s–220.80s (×16), actor 5, squad 0 (trace 16930): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 16688. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0080159710952734, 'next_transition': 16948}.
<a id="trace-17183"></a>
- 221.65s–221.65s (×1), actor 1, squad 0 (trace 17183): ReactToContact: cover and return fire. Knowledge: actor memory at 220.00s, trace 17050. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03131961047592009, 'next_transition': 17353}.
<a id="trace-17184"></a>
- 221.65s–221.65s (×1), actor 1, squad 0 (trace 17184): bounding overwatch. Knowledge: actor memory at 220.00s, trace 17050. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03131961047592009, 'next_transition': 17353}.
<a id="trace-17185"></a>
- 221.65s–221.65s (×1), actor 1, squad 0 (trace 17185): new contact inside 100 m. Knowledge: actor memory at 220.00s, trace 17050. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03131961047592009, 'next_transition': 17353}.
<a id="trace-17353"></a>
<a id="trace-17355"></a>
<a id="trace-17398"></a>
<a id="trace-17400"></a>
<a id="trace-17421"></a>
<a id="trace-17423"></a>
<a id="trace-17430"></a>
<a id="trace-17432"></a>
<a id="trace-17456"></a>
<a id="trace-17458"></a>
<a id="trace-17476"></a>
<a id="trace-17478"></a>
<a id="trace-17554"></a>
<a id="trace-17556"></a>
- 221.80s–225.30s (×14), actor 5, squad 0 (trace 17353): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 17052. Next observer evidence: {'until': 222.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28758014407870597, 'next_transition': 17398}.
<a id="trace-17567"></a>
- 225.50s–225.50s (×1), actor 1, squad 0 (trace 17567): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 225.00s, trace 17485. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3071587863657096, 'next_transition': 17790}.
<a id="trace-17568"></a>
- 225.50s–225.50s (×1), actor 1, squad 0 (trace 17568): rearward bound: one stationary suppressing element. Knowledge: actor memory at 225.00s, trace 17485. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3071587863657096, 'next_transition': 17790}.
<a id="trace-17790"></a>
<a id="trace-17792"></a>
<a id="trace-17820"></a>
<a id="trace-17822"></a>
<a id="trace-17861"></a>
<a id="trace-17863"></a>
<a id="trace-17880"></a>
<a id="trace-17882"></a>
<a id="trace-17903"></a>
<a id="trace-17905"></a>
<a id="trace-17926"></a>
<a id="trace-17928"></a>
- 225.80s–228.80s (×12), actor 5, squad 0 (trace 17790): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 17487. Next observer evidence: {'until': 226.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19306558943530075, 'next_transition': 17820}.
<a id="trace-17937"></a>
- 229.05s–229.05s (×1), actor 1, squad 0 (trace 17937): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 225.00s, trace 17485. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.948086319438975, 'next_transition': 17966}.
<a id="trace-17938"></a>
- 229.05s–229.05s (×1), actor 1, squad 0 (trace 17938): NeedSupport. Knowledge: actor memory at 225.00s, trace 17485. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.948086319438975, 'next_transition': 17966}.
<a id="trace-17966"></a>
<a id="trace-17968"></a>
- 229.80s–229.80s (×2), actor 5, squad 0 (trace 17966): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 17487. Next observer evidence: {'until': 230, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47303432125030115, 'next_transition': 17995}.
<a id="trace-17995"></a>
- 230.05s–230.05s (×1), actor 1, squad 0 (trace 17995): Reorganise: completed/failed drill. Knowledge: actor memory at 230.00s, trace 17979. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8682194622592747, 'next_transition': 18136}.
<a id="trace-17998"></a>
- 230.05s–230.05s (×1), actor 1, squad 0 (trace 17998): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 17979. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8682194622592747, 'next_transition': 18136}.
<a id="trace-17999"></a>
- 230.05s–230.05s (×1), actor 1, squad 0 (trace 17999): Reorganise complete: known contact. Knowledge: actor memory at 230.00s, trace 17979. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8682194622592747, 'next_transition': 18136}.
<a id="trace-18136"></a>
<a id="trace-18138"></a>
<a id="trace-18160"></a>
<a id="trace-18162"></a>
<a id="trace-18188"></a>
<a id="trace-18190"></a>
<a id="trace-18222"></a>
<a id="trace-18224"></a>
<a id="trace-18249"></a>
<a id="trace-18251"></a>
- 230.80s–232.80s (×10), actor 5, squad 0 (trace 18136): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 17981. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450094215666631, 'next_transition': 18160}.
<a id="trace-3182"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (events line 3182): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3183"></a>
- 233.80s–233.80s (×1), actor 5, squad 1 (events line 3183): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 234, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18421}.
<a id="trace-18292"></a>
<a id="trace-18294"></a>
- 233.80s–233.80s (×2), actor 5, squad 0 (trace 18292): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 17981. Next observer evidence: None.
<a id="trace-18301"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 18301): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.947303 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 18301. Next observer evidence: None.
<a id="trace-18302"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 18302): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.947303 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 18302. Next observer evidence: None.
<a id="trace-18303"></a>
- 233.80s–233.80s (×1), actor 5, squad 1 (trace 18303): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.947303 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 18303. Next observer evidence: {'until': 234, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18421}.
<a id="trace-18304"></a>
- 233.80s–233.80s (×1), actor 5, squad 1 (trace 18304): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.947303 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.80s, trace 18304. Next observer evidence: {'until': 234, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18421}.
<a id="trace-18307"></a>
- 233.85s–233.85s (×1), actor 1, squad 0 (trace 18307): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 230.00s, trace 17979. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18496}.
<a id="trace-18308"></a>
- 233.85s–233.85s (×1), actor 1, squad 0 (trace 18308): rearward bound: one stationary suppressing element. Knowledge: actor memory at 230.00s, trace 17979. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18496}.
<a id="trace-18421"></a>
- 234.00s–234.00s (×1), actor 9, squad 1 (trace 18421): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 17983. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.135024525883878, 'next_transition': 18701}.
<a id="trace-18422"></a>
- 234.00s–234.00s (×1), actor 9, squad 1 (trace 18422): bounding overwatch. Knowledge: actor memory at 230.00s, trace 17983. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.135024525883878, 'next_transition': 18701}.
<a id="trace-18423"></a>
- 234.00s–234.00s (×1), actor 9, squad 1 (trace 18423): new contact inside 100 m. Knowledge: actor memory at 230.00s, trace 17983. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.135024525883878, 'next_transition': 18701}.
<a id="trace-18496"></a>
<a id="trace-18498"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18601"></a>
<a id="trace-18603"></a>
<a id="trace-18650"></a>
<a id="trace-18652"></a>
<a id="trace-18674"></a>
<a id="trace-18676"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
<a id="trace-18716"></a>
<a id="trace-18718"></a>
<a id="trace-18737"></a>
<a id="trace-18739"></a>
<a id="trace-18856"></a>
<a id="trace-18858"></a>
<a id="trace-18888"></a>
<a id="trace-18890"></a>
<a id="trace-18913"></a>
<a id="trace-18915"></a>
<a id="trace-19006"></a>
<a id="trace-19008"></a>
<a id="trace-19039"></a>
<a id="trace-19041"></a>
<a id="trace-19100"></a>
<a id="trace-19102"></a>
<a id="trace-19143"></a>
<a id="trace-19145"></a>
<a id="trace-19670"></a>
<a id="trace-19672"></a>
<a id="trace-19702"></a>
<a id="trace-19704"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
- 234.30s–244.80s (×36), actor 5, squad 0 (trace 18496): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 233.80s, trace 18304. Next observer evidence: {'until': 234.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39375635259458086, 'next_transition': 18518}.
<a id="trace-18701"></a>
- 237.30s–237.30s (×1), actor 9, squad 1 (trace 18701): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 235.00s, trace 18535. Next observer evidence: {'until': 238.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410000691609923, 'next_transition': 18750}.
<a id="trace-18750"></a>
- 238.75s–238.75s (×1), actor 9, squad 1 (trace 18750): new contact inside 100 m. Knowledge: actor memory at 235.00s, trace 18535. Next observer evidence: {'until': 242, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.620930951446436, 'next_transition': 19118}.
<a id="trace-19118"></a>
- 242.05s–242.05s (×1), actor 9, squad 1 (trace 19118): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 240.00s, trace 18930. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.362520297817566, 'next_transition': 19190}.
<a id="trace-19190"></a>
- 242.90s–242.90s (×1), actor 9, squad 1 (trace 19190): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 240.00s, trace 18930. Next observer evidence: {'until': 243, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19194}.
<a id="trace-19194"></a>
<a id="trace-19305"></a>
<a id="trace-19410"></a>
<a id="trace-19521"></a>
- 243.00s–243.25s (×4), actor 9, squad 1 (trace 19194): new contact inside 100 m. Knowledge: actor memory at 240.00s, trace 18930. Next observer evidence: None.
<a id="trace-19753"></a>
- 245.10s–245.10s (×1), actor 1, squad 0 (trace 19753): NeedSupport. Knowledge: actor memory at 245.00s, trace 19736. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315017066997962, 'next_transition': 19807}.
<a id="trace-19807"></a>
<a id="trace-19809"></a>
- 245.30s–245.30s (×2), actor 5, squad 0 (trace 19807): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 19738. Next observer evidence: {'until': 245.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299930733746212, 'next_transition': 19821}.
<a id="trace-19821"></a>
- 245.65s–245.65s (×1), actor 1, squad 0 (trace 19821): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 245.00s, trace 19736. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149885394740588, 'next_transition': 19877}.
<a id="trace-19822"></a>
- 245.65s–245.65s (×1), actor 1, squad 0 (trace 19822): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 245.00s, trace 19736. Next observer evidence: {'until': 245.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149885394740588, 'next_transition': 19877}.
<a id="trace-19877"></a>
<a id="trace-19879"></a>
<a id="trace-19897"></a>
<a id="trace-19899"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-19974"></a>
<a id="trace-19976"></a>
<a id="trace-19992"></a>
<a id="trace-19994"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20025"></a>
<a id="trace-20027"></a>
<a id="trace-20104"></a>
<a id="trace-20106"></a>
<a id="trace-20116"></a>
<a id="trace-20118"></a>
<a id="trace-20135"></a>
<a id="trace-20137"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20167"></a>
<a id="trace-20186"></a>
<a id="trace-20201"></a>
<a id="trace-20209"></a>
<a id="trace-20227"></a>
<a id="trace-20240"></a>
<a id="trace-20314"></a>
<a id="trace-20323"></a>
<a id="trace-20356"></a>
<a id="trace-20374"></a>
- 245.80s–257.30s (×32), actor 5, squad 0 (trace 19877): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 19738. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299930733746206, 'next_transition': 19897}.
<a id="trace-20388"></a>
- 257.65s–257.65s (×1), actor 1, squad 0 (trace 20388): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 255.00s, trace 20249. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499076970603684, 'next_transition': 20444}.
<a id="trace-20389"></a>
- 257.65s–257.65s (×1), actor 1, squad 0 (trace 20389): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 255.00s, trace 20249. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499076970603684, 'next_transition': 20444}.
<a id="trace-20444"></a>
<a id="trace-20461"></a>
<a id="trace-20478"></a>
<a id="trace-20498"></a>
<a id="trace-20579"></a>
<a id="trace-20590"></a>
<a id="trace-20616"></a>
<a id="trace-20627"></a>
<a id="trace-20636"></a>
<a id="trace-20647"></a>
<a id="trace-20656"></a>
<a id="trace-20742"></a>
<a id="trace-20749"></a>
- 257.80s–266.80s (×13), actor 5, squad 0 (trace 20444): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 20251. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300410502499008, 'next_transition': 20461}.
<a id="trace-20768"></a>
- 267.35s–267.35s (×1), actor 1, squad 0 (trace 20768): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 265.00s, trace 20662. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20774}.
<a id="trace-20774"></a>
<a id="trace-20792"></a>
<a id="trace-20806"></a>
<a id="trace-20824"></a>
<a id="trace-20903"></a>
<a id="trace-20919"></a>
<a id="trace-20930"></a>
<a id="trace-20939"></a>
<a id="trace-20950"></a>
<a id="trace-20961"></a>
<a id="trace-20971"></a>
- 267.80s–274.30s (×11), actor 5, squad 0 (trace 20774): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 20664. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20792}.
<a id="trace-20976"></a>
- 274.35s–274.35s (×1), actor 1, squad 0 (trace 20976): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 270.00s, trace 20831. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20985}.
<a id="trace-20985"></a>
<a id="trace-21060"></a>
- 274.80s–275.30s (×2), actor 5, squad 0 (trace 20985): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 20833. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21060}.
<a id="trace-21065"></a>
- 275.35s–275.35s (×1), actor 1, squad 0 (trace 21065): MoveTactically. Knowledge: actor memory at 275.00s, trace 20992. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21106}.
<a id="trace-21066"></a>
- 275.35s–275.35s (×1), actor 1, squad 0 (trace 21066): received platoon directive. Knowledge: actor memory at 275.00s, trace 20992. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21106}.
<a id="trace-21106"></a>
- 276.30s–276.30s (×1), actor 5, squad 0 (trace 21106): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 20994. Next observer evidence: None.
<a id="trace-21111"></a>
- 276.35s–276.35s (×1), actor 1, squad 0 (trace 21111): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 275.00s, trace 20992. Next observer evidence: {'until': 276.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07876257042529788, 'next_transition': 21179}.
<a id="trace-21179"></a>
<a id="trace-21206"></a>
<a id="trace-21219"></a>
<a id="trace-21237"></a>
<a id="trace-21247"></a>
<a id="trace-21257"></a>
<a id="trace-21267"></a>
<a id="trace-21342"></a>
<a id="trace-21368"></a>
<a id="trace-21397"></a>
<a id="trace-21417"></a>
<a id="trace-21432"></a>
<a id="trace-21443"></a>
<a id="trace-21463"></a>
<a id="trace-21474"></a>
<a id="trace-21549"></a>
<a id="trace-21558"></a>
<a id="trace-21573"></a>
- 276.80s–286.30s (×18), actor 5, squad 0 (trace 21179): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 20994. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5516960041990456, 'next_transition': 21206}.
<a id="trace-21579"></a>
- 286.50s–286.50s (×1), actor 1, squad 0 (trace 21579): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 285.00s, trace 21484. Next observer evidence: {'until': 286.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512242828468294, 'next_transition': 21585}.
<a id="trace-21585"></a>
<a id="trace-21605"></a>
- 286.80s–287.30s (×2), actor 5, squad 0 (trace 21585): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 21486. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21605}.
<a id="trace-21610"></a>
- 287.50s–287.50s (×1), actor 1, squad 0 (trace 21610): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 285.00s, trace 21484. Next observer evidence: {'until': 287.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21666}.
<a id="trace-21666"></a>
<a id="trace-21686"></a>
<a id="trace-21702"></a>
<a id="trace-21723"></a>
<a id="trace-21732"></a>
<a id="trace-21809"></a>
<a id="trace-21833"></a>
<a id="trace-21842"></a>
<a id="trace-21859"></a>
<a id="trace-21871"></a>
<a id="trace-21922"></a>
- 287.80s–294.80s (×11), actor 5, squad 0 (trace 21666): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 21486. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21686}.
<a id="trace-21928"></a>
- 294.85s–294.85s (×1), actor 1, squad 0 (trace 21928): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 290.00s, trace 21740. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22025}.
<a id="trace-22025"></a>
<a id="trace-22051"></a>
<a id="trace-22063"></a>
<a id="trace-22079"></a>
<a id="trace-22116"></a>
<a id="trace-22126"></a>
<a id="trace-22139"></a>
<a id="trace-22224"></a>
<a id="trace-22234"></a>
<a id="trace-22252"></a>
<a id="trace-22282"></a>
- 295.80s–302.30s (×11), actor 5, squad 0 (trace 22025): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 21956. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19688649331531066, 'next_transition': 22051}.
<a id="trace-3614"></a>
- 302.80s–302.80s (×1), actor 5, squad 0 (events line 3614): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22301"></a>
- 302.80s–302.80s (×1), actor 5, squad 0 (trace 22301): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 22157. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.034575225957323194, 'next_transition': 22315}.
<a id="trace-22306"></a>
- 302.80s–302.80s (×1), actor 5, squad 0 (trace 22306): renew committed intent (75 s lifetime). Knowledge: actor memory at 302.80s, trace 22306. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.034575225957323194, 'next_transition': 22315}.
<a id="trace-22315"></a>
- 303.25s–303.25s (×1), actor 1, squad 0 (trace 22315): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 300.00s, trace 22155. Next observer evidence: None.
<a id="trace-22373"></a>
<a id="trace-22419"></a>
<a id="trace-22493"></a>
<a id="trace-22510"></a>
<a id="trace-22556"></a>
<a id="trace-22662"></a>
- 303.30s–309.80s (×6), actor 5, squad 0 (trace 22373): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 302.80s, trace 22306. Next observer evidence: {'until': 304.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0127721070913782, 'next_transition': 22419}.
<a id="trace-22734"></a>
- 310.25s–310.25s (×1), actor 1, squad 0 (trace 22734): ReactToContact: cover and return fire. Knowledge: actor memory at 310.00s, trace 22671. Next observer evidence: None.
<a id="trace-22735"></a>
- 310.25s–310.25s (×1), actor 1, squad 0 (trace 22735): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 310.00s, trace 22671. Next observer evidence: None.
<a id="trace-22813"></a>
<a id="trace-22828"></a>
<a id="trace-22852"></a>
<a id="trace-22867"></a>
<a id="trace-22887"></a>
<a id="trace-22927"></a>
- 310.30s–313.30s (×6), actor 5, squad 0 (trace 22813): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 22673. Next observer evidence: {'until': 310.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3788777758464075, 'next_transition': 22828}.
<a id="trace-22952"></a>
- 314.25s–314.25s (×1), actor 1, squad 0 (trace 22952): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 310.00s, trace 22671. Next observer evidence: None.
<a id="trace-22953"></a>
- 314.25s–314.25s (×1), actor 1, squad 0 (trace 22953): rearward bound: one stationary suppressing element. Knowledge: actor memory at 310.00s, trace 22671. Next observer evidence: None.
<a id="trace-23071"></a>
<a id="trace-23086"></a>
<a id="trace-23184"></a>
<a id="trace-23207"></a>
<a id="trace-23230"></a>
<a id="trace-23257"></a>
<a id="trace-23342"></a>
<a id="trace-23359"></a>
<a id="trace-23445"></a>
<a id="trace-23459"></a>
<a id="trace-23470"></a>
<a id="trace-23483"></a>
<a id="trace-23498"></a>
<a id="trace-23513"></a>
<a id="trace-23527"></a>
<a id="trace-23543"></a>
<a id="trace-23556"></a>
- 314.30s–324.80s (×17), actor 5, squad 0 (trace 23071): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 22673. Next observer evidence: {'until': 314.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3830716163633165, 'next_transition': 23086}.
<a id="trace-23628"></a>
- 325.25s–325.25s (×1), actor 1, squad 0 (trace 23628): NeedSupport. Knowledge: actor memory at 325.00s, trace 23568. Next observer evidence: None.
<a id="trace-23635"></a>
<a id="trace-23647"></a>
<a id="trace-23675"></a>
<a id="trace-23686"></a>
<a id="trace-23698"></a>
<a id="trace-23710"></a>
<a id="trace-23727"></a>
<a id="trace-23804"></a>
<a id="trace-23815"></a>
<a id="trace-23829"></a>
<a id="trace-23852"></a>
<a id="trace-23869"></a>
<a id="trace-23890"></a>
<a id="trace-23899"></a>
<a id="trace-23906"></a>
<a id="trace-23974"></a>
<a id="trace-23981"></a>
<a id="trace-23992"></a>
<a id="trace-24000"></a>
<a id="trace-24023"></a>
- 325.30s–337.80s (×20), actor 5, squad 0 (trace 23635): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23569. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599406335220709, 'next_transition': 23647}.
<a id="trace-24028"></a>
- 338.00s–338.00s (×1), actor 1, squad 0 (trace 24028): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 335.00s, trace 23912. Next observer evidence: {'until': 338.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24048}.
<a id="trace-24048"></a>
<a id="trace-24065"></a>
<a id="trace-24136"></a>
<a id="trace-24143"></a>
<a id="trace-24153"></a>
<a id="trace-24161"></a>
<a id="trace-24183"></a>
<a id="trace-24201"></a>
<a id="trace-24211"></a>
<a id="trace-24292"></a>
<a id="trace-24320"></a>
<a id="trace-24329"></a>
<a id="trace-24340"></a>
<a id="trace-24349"></a>
<a id="trace-24360"></a>
<a id="trace-24368"></a>
<a id="trace-24378"></a>
<a id="trace-24386"></a>
<a id="trace-24455"></a>
<a id="trace-24464"></a>
<a id="trace-24475"></a>
<a id="trace-24487"></a>
<a id="trace-24504"></a>
<a id="trace-24534"></a>
<a id="trace-24556"></a>
<a id="trace-24639"></a>
<a id="trace-24659"></a>
<a id="trace-24668"></a>
<a id="trace-24684"></a>
<a id="trace-24692"></a>
<a id="trace-24709"></a>
<a id="trace-24722"></a>
- 338.80s–359.80s (×32), actor 5, squad 0 (trace 24048): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 23913. Next observer evidence: {'until': 339.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24065}.

## Net delivery

303 matched order/radio deliveries; 418 explicitly recorded losses; 4 unmatched orders (not classified as lost).
Matched delay: mean 0.395s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 12.75s leader 5, trace 1322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2565: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2566: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2567: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2568: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2569: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2573: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2574: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3197: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3204: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3205: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3206: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3207: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3208: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3209: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3210: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3211: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3212: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3213: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5649: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5650: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5657: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5658: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5659: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5660: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5661: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5662: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5663: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5664: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5665: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5666: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6525: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6526: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6527: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6530: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6533: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6534: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6535: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6536: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6537: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6538: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6539: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6540: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6541: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6542: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6844: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6845: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6846: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6848: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6849: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6852: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6853: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6854: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6855: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6856: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6857: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6858: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6859: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6860: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6861: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6928: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6929: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6930: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6931: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7118: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7119: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7120: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7122: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7123: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7126: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7127: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7128: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7129: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7130: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7131: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7132: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7133: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7134: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7135: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7510: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7511: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7513: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7514: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7516: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7517: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7518: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7519: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7520: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7521: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7522: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7523: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7524: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7525: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7526: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8070: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8071: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8073: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8074: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8076: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8077: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8078: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8079: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8080: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8081: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8082: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8083: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8084: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8085: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8086: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8323: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8324: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8326: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8327: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8329: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8330: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8331: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8332: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8333: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8334: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8335: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8336: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8337: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8338: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8339: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8570: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8571: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8573: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8574: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8576: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8577: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8578: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8579: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8580: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8581: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8582: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8583: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8584: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8585: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8586: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 8973: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.95s leader 5, trace 8974: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9076: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 9077: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9079: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9080: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9082: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9083: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9084: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9085: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9086: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9087: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9088: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9089: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9090: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9091: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9092: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9319: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9320: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9322: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9323: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9325: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9326: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9327: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9328: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9329: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9330: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9331: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9332: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9333: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9334: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9335: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9685: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 9686: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9688: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9689: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 9691: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9692: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9693: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9694: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9695: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9696: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9697: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9698: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9699: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 9700: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 9701: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9899: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9900: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9902: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9903: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 9905: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9906: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9907: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9908: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9909: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9910: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9911: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9912: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9913: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 9914: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 9915: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.20s leader 5, trace 9963: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10120: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10121: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10123: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10124: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 10126: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10127: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10128: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10129: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10130: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10131: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10132: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10133: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10134: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10135: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10136: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 10337: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10339: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10340: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 10342: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10343: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10344: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10345: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10346: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10347: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10348: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10349: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10350: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 10351: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 10352: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10552: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10554: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10555: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 10557: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10558: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10559: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10560: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10561: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10562: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10563: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10564: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10565: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 10566: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 10567: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 10747: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 10748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 10749: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 10750: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 10751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 10752: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 10753: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 10754: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 10755: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 10756: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 10757: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 10758: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 10759: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 10760: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 10761: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 10762: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 10920: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 10931: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 10932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 10933: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 10934: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 10935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 10936: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 10937: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 10938: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 10939: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 10940: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 10941: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 10942: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 10943: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 10944: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 10945: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 10946: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 11161: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11163: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11164: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 11166: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 11167: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 11168: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11169: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11170: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11171: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11172: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11173: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11174: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 11175: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 11176: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 11443: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 11444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 11445: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 11446: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 11447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 11448: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 11449: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 11450: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 11451: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 11452: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11453: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11454: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11455: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11456: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 11457: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 11458: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 11677: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 11678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 11679: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 11680: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 11681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 11682: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 11683: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 11684: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 11685: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 11686: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 11687: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 11688: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 11689: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 11690: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 11691: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 11692: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 11902: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 11903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 11904: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 11905: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 11906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 11907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 11908: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 11909: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 11910: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 11911: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 11912: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 11913: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 11914: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 11915: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 11916: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 11917: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 12247: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 12248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 12249: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 12250: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 12251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 12252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 12253: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 12254: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 12255: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 12256: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 12257: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 12258: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 12259: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 12260: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 12261: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 12262: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 12439: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 12543: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 12544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 12545: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 12546: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 12547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 12548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 12549: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 12550: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 12551: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 12552: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 12553: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 12554: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 12555: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 12556: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 12557: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 12558: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 12792: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 12793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 12794: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12795: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 12796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 12797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 12798: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 12799: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 12800: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 12801: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12802: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12803: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12804: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12805: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 12806: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 12807: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13066: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13068: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 13069: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 13071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13072: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13073: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13074: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13075: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 13076: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 13077: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 13078: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13079: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 13080: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 13081: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 13353: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 13355: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 13356: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 13357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 13358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 13359: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 13360: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 13361: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 13362: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 13363: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 13364: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 13365: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13366: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 13367: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 13368: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 13568: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 13569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 13570: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 13571: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 13572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 13573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 13574: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 13575: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 13576: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 13577: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 13578: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 13579: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13580: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13581: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 13582: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 13583: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 13915: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 13916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 13917: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 13918: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 13919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 13920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 13921: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 13922: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 13923: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 13924: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 13925: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 13926: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 13927: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 13928: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 13929: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 13930: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14149: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14151: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 14152: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 14154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14155: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14156: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 14157: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14158: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 14159: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14160: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14161: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14162: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 14163: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 14164: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 14415: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 14417: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 14418: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 14420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14421: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 14422: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 14423: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 14424: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 14425: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14426: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14427: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14428: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 14429: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 14430: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 14591: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 14629: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 14631: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 14632: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 14633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 14634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 14635: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 14636: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 14637: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 14638: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 14639: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 14640: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 14641: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14642: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 14643: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 14644: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 14838: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 14839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 14840: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 14841: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 14842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 14843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 14844: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 14845: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 14846: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 14847: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 14848: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 14849: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 14850: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 14851: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 14852: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 14853: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 15189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 15191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 15192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 15193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 15194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 15195: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 15196: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 15197: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 15198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 15199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 15200: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 15201: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15202: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 15203: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 15204: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 15337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 15338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 15339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 15340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 15439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 15441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 15442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 15443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 15444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 15445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 15446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 15447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 15448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 15449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 15450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 15451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 15453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 15454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 15845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 15847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 15848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 15849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 15850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 15851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 15852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 15853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 15854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 15855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 15856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 15857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 15859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 15860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 16095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 16096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 16097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 16098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 16099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 16100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 16101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 16102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 16103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 16104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 16105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 16106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 16107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 16108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 16109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 16110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 16327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 16328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 16329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 16330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 16331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 16332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 16333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 16334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 16335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 16336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 16337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 16338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 16339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 16340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 16341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 16342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 16686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 16687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 16688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 16689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 16690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 16691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 16692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 16693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 16694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 16695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 16696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 16697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 16698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 16699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 16700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 16701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 17050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 17051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 17052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 17053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 17054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 17055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 17056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 17057: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 17058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 17059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 17060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 17061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 17062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 17063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 17064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 17065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 17485: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 17486: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 17487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 17488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 17489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 17490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 17491: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 17492: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 17493: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 17494: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 17495: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 17496: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 17497: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 17498: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 17499: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 17500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 17979: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 17980: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 17981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 17982: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 17983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 17984: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 17985: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 17986: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 17987: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 17988: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 17989: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 17990: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 17991: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 17992: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 17993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 18301: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 18302: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 18303: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 18304: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 18531: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 18532: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 18533: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 18534: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 18535: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 18536: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 18537: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 18538: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 18539: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 18540: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18541: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18542: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 18543: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 18544: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 18545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 18926: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 18927: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 18928: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 18929: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 18930: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 18931: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 18932: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 18933: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 18934: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 18935: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18936: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18937: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 18938: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 18939: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 18940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 19736: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 19737: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 19738: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 19739: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 19740: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 19741: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 19742: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 19743: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 19744: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 19745: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 19746: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 19747: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 19748: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 19749: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 20036: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20037: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20038: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20039: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20040: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20041: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20042: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20043: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20044: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20045: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20046: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20047: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20048: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20049: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 20249: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20250: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20251: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20252: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20253: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20254: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20255: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20256: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20257: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20258: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20259: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20260: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20261: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 20262: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 20507: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20508: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20509: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 20510: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 20511: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 20512: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 20513: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20514: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 20515: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20516: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 20517: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20518: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 20519: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 20520: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 20662: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20663: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20664: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 20665: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 20666: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 20667: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 20668: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20669: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 20670: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20671: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 20672: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20673: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 20674: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 20675: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 20831: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 20832: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 20833: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 20834: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 20835: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 20836: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 20837: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 20838: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 20839: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 20840: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 20841: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 20842: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 20843: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 20844: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 20992: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 20993: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 20994: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 20995: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 20996: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 20997: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 20998: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 20999: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21000: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21001: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21002: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21003: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21004: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21005: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 21273: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21274: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21275: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21276: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21277: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21278: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21279: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21280: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21281: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21282: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21283: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21284: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21285: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21286: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 21484: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21485: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21486: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 21487: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21488: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21489: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21490: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21491: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21492: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21493: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 21494: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21495: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 21496: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 21497: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 21740: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 21741: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21742: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 21743: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 21744: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 21745: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 21746: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21747: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 21748: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21749: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 21750: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21751: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 21752: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 21753: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 21954: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 21955: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 21956: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 21957: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 21958: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 21959: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 21960: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21961: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 21962: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21963: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 21964: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 21965: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 21966: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 21967: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 22155: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22156: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22157: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22158: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22159: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22160: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22161: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22162: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22163: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22164: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22165: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22166: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22167: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22168: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.80s leader 5, trace 22306: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 22429: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22430: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22431: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22432: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22433: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22434: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22435: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22436: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22437: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22438: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22439: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22440: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22441: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22442: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 22671: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22672: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22673: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 22674: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22675: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22676: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22677: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22678: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22679: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22680: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22681: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22682: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22683: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22684: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23094: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 23095: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23096: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 23097: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23098: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23099: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23100: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23101: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23102: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23103: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23104: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23105: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23106: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23107: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 23368: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 23369: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23370: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 23371: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23372: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23373: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23374: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23375: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23376: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23377: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23378: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23379: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23380: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23381: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 23568: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23569: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23570: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23571: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23572: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23573: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23574: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23575: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23576: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23577: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23578: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23579: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23580: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 23742: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23743: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23744: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23745: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23746: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23747: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23748: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23749: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23750: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23751: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23752: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23753: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23754: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 23912: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23913: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 23914: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23915: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23916: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23917: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23918: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23919: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23920: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23921: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23922: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23923: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23924: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 24071: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24072: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 24073: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24074: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24075: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24076: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24077: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24078: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24079: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24080: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24081: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24082: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24083: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24223: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24224: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 24225: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24226: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24227: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24228: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24229: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24230: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24231: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24232: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24233: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24234: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24235: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24393: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24394: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24395: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24396: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24397: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24398: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24399: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24400: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24401: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24402: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24403: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24404: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 24563: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24564: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 24565: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24566: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24567: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24568: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24569: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24570: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24571: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24572: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24573: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24574: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 24730: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 24731: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 24732: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 24733: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24734: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24735: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24736: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24737: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24738: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24739: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24740: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24741: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 24742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Vale incapacitated
- 1: Ash incapacitated
- 1: Soren incapacitated
- 1: Reed killed in action
- 1: Cole incapacitated
- 1: Tern killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
