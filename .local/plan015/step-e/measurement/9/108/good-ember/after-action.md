# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/9/108/good-ember/battle-108-1789673825028918268`

## Battle summary

**Ember** · 360 s · 362 shots.

### Turning points

- 28.4s, squad 4: contact (events line 261). First recorded contact.
- 41.3s, squad 0: withdrawal ([trace 5079](#trace-5079)). 73.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 53.4s, squad 0: help call ([trace 6773](#trace-6773)). No completion observed before termination.
- 162.9s, squad 0: help call ([trace 16018](#trace-16018)). No completion observed before termination.
- 217.9s, squad 1: withdrawal ([trace 20006](#trace-20006)). 238.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 237.6s, squad 0: withdrawal ([trace 21268](#trace-21268)). No completion observed before termination.
- 249.2s, squad 0: help call ([trace 21830](#trace-21830)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 31 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 247 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 84 shots, 0/2 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.8s, squad 1 chose FightHere: next 60 m leg in own advance lane ([trace 1361](#trace-1361)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1360](#trace-1360)). Following evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175536032535128, 'next_transition': 2135}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 3035](#trace-3035)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300040745641153, 'next_transition': 3057}.

### Communication

237 matched deliveries (mean 0.41s, max 5.35s); 352 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.35s, squad 4, contact, evidence events line 261: First recorded contact; .
- 41.30s, squad 0, withdrawal, evidence 5079: BreakContact: believed ratio at least two without superiority; 73.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 53.35s, squad 0, help call, evidence 6773: NeedSupport; No completion observed before termination.
- 162.95s, squad 0, help call, evidence 16018: NeedSupport; No completion observed before termination.
- 217.95s, squad 1, withdrawal, evidence 20006: BreakContact: believed ratio at least two without superiority; 238.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 237.55s, squad 0, withdrawal, evidence 21268: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 249.20s, squad 0, help call, evidence 21830: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.469706205923774, 'next_transition': 936}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.469706205923774, 'next_transition': 936}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.469706205923774, 'next_transition': 936}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1134}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1134}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004744041103216, 'next_transition': 1134}.
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
<a id="trace-938"></a>
<a id="trace-940"></a>
<a id="trace-967"></a>
<a id="trace-969"></a>
<a id="trace-994"></a>
<a id="trace-996"></a>
<a id="trace-1023"></a>
<a id="trace-1025"></a>
<a id="trace-1040"></a>
<a id="trace-1042"></a>
<a id="trace-1131"></a>
<a id="trace-1133"></a>
<a id="trace-1254"></a>
<a id="trace-1256"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1300"></a>
<a id="trace-1302"></a>
<a id="trace-1335"></a>
<a id="trace-1337"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
<a id="trace-1696"></a>
<a id="trace-1698"></a>
<a id="trace-1719"></a>
<a id="trace-1721"></a>
<a id="trace-1757"></a>
<a id="trace-1759"></a>
<a id="trace-1779"></a>
<a id="trace-1781"></a>
<a id="trace-1866"></a>
<a id="trace-1868"></a>
<a id="trace-1906"></a>
<a id="trace-1908"></a>
<a id="trace-1942"></a>
<a id="trace-1944"></a>
<a id="trace-1977"></a>
<a id="trace-1979"></a>
<a id="trace-1998"></a>
<a id="trace-2000"></a>
<a id="trace-2021"></a>
<a id="trace-2023"></a>
<a id="trace-2049"></a>
<a id="trace-2051"></a>
<a id="trace-2080"></a>
<a id="trace-2082"></a>
<a id="trace-2105"></a>
<a id="trace-2107"></a>
<a id="trace-2130"></a>
<a id="trace-2132"></a>
<a id="trace-2312"></a>
<a id="trace-2314"></a>
<a id="trace-2342"></a>
<a id="trace-2344"></a>
<a id="trace-2368"></a>
<a id="trace-2370"></a>
<a id="trace-2403"></a>
<a id="trace-2405"></a>
<a id="trace-2432"></a>
<a id="trace-2434"></a>
<a id="trace-2453"></a>
<a id="trace-2455"></a>
<a id="trace-2480"></a>
<a id="trace-2482"></a>
<a id="trace-2822"></a>
<a id="trace-2824"></a>
<a id="trace-2841"></a>
<a id="trace-2843"></a>
<a id="trace-2873"></a>
<a id="trace-2875"></a>
<a id="trace-2959"></a>
<a id="trace-2961"></a>
<a id="trace-2976"></a>
<a id="trace-2978"></a>
<a id="trace-3016"></a>
<a id="trace-3018"></a>
<a id="trace-3044"></a>
<a id="trace-3046"></a>
<a id="trace-3061"></a>
<a id="trace-3063"></a>
<a id="trace-3079"></a>
<a id="trace-3081"></a>
<a id="trace-3104"></a>
<a id="trace-3106"></a>
<a id="trace-3186"></a>
<a id="trace-3188"></a>
<a id="trace-3211"></a>
<a id="trace-3213"></a>
<a id="trace-3236"></a>
<a id="trace-3238"></a>
<a id="trace-3344"></a>
<a id="trace-3346"></a>
<a id="trace-3360"></a>
<a id="trace-3362"></a>
<a id="trace-3381"></a>
<a id="trace-3383"></a>
<a id="trace-3392"></a>
<a id="trace-3394"></a>
<a id="trace-3417"></a>
<a id="trace-3419"></a>
<a id="trace-3438"></a>
<a id="trace-3440"></a>
<a id="trace-3459"></a>
<a id="trace-3461"></a>
<a id="trace-3638"></a>
<a id="trace-3640"></a>
<a id="trace-3661"></a>
<a id="trace-3663"></a>
<a id="trace-3693"></a>
<a id="trace-3695"></a>
<a id="trace-3780"></a>
<a id="trace-3782"></a>
<a id="trace-3797"></a>
<a id="trace-3799"></a>
<a id="trace-3826"></a>
<a id="trace-3828"></a>
<a id="trace-4285"></a>
<a id="trace-4287"></a>
<a id="trace-4311"></a>
<a id="trace-4313"></a>
<a id="trace-4341"></a>
<a id="trace-4343"></a>
<a id="trace-4797"></a>
<a id="trace-4799"></a>
<a id="trace-4822"></a>
<a id="trace-4824"></a>
<a id="trace-4883"></a>
<a id="trace-4885"></a>
<a id="trace-4916"></a>
<a id="trace-4918"></a>
<a id="trace-5005"></a>
<a id="trace-5007"></a>
<a id="trace-5040"></a>
<a id="trace-5042"></a>
<a id="trace-5074"></a>
<a id="trace-5076"></a>
<a id="trace-5553"></a>
<a id="trace-5555"></a>
<a id="trace-5580"></a>
<a id="trace-5582"></a>
<a id="trace-5618"></a>
<a id="trace-5620"></a>
<a id="trace-5652"></a>
<a id="trace-5654"></a>
<a id="trace-5689"></a>
<a id="trace-5691"></a>
<a id="trace-5770"></a>
<a id="trace-5772"></a>
<a id="trace-5832"></a>
<a id="trace-5834"></a>
<a id="trace-5963"></a>
<a id="trace-5965"></a>
<a id="trace-6019"></a>
<a id="trace-6021"></a>
<a id="trace-6093"></a>
<a id="trace-6095"></a>
<a id="trace-6157"></a>
<a id="trace-6159"></a>
<a id="trace-6210"></a>
<a id="trace-6212"></a>
<a id="trace-6254"></a>
<a id="trace-6256"></a>
<a id="trace-6320"></a>
<a id="trace-6322"></a>
<a id="trace-6361"></a>
<a id="trace-6363"></a>
<a id="trace-6411"></a>
<a id="trace-6413"></a>
<a id="trace-6466"></a>
<a id="trace-6468"></a>
<a id="trace-6599"></a>
<a id="trace-6601"></a>
<a id="trace-6641"></a>
<a id="trace-6643"></a>
<a id="trace-6680"></a>
<a id="trace-6682"></a>
<a id="trace-6707"></a>
<a id="trace-6709"></a>
<a id="trace-6733"></a>
<a id="trace-6735"></a>
<a id="trace-6751"></a>
<a id="trace-6753"></a>
<a id="trace-6768"></a>
<a id="trace-6770"></a>
<a id="trace-6786"></a>
<a id="trace-6788"></a>
<a id="trace-6810"></a>
<a id="trace-6812"></a>
<a id="trace-6824"></a>
<a id="trace-6826"></a>
<a id="trace-6903"></a>
<a id="trace-6905"></a>
<a id="trace-6916"></a>
<a id="trace-6918"></a>
<a id="trace-6944"></a>
<a id="trace-6946"></a>
<a id="trace-7072"></a>
<a id="trace-7074"></a>
<a id="trace-7092"></a>
<a id="trace-7094"></a>
<a id="trace-7112"></a>
<a id="trace-7114"></a>
<a id="trace-7150"></a>
<a id="trace-7152"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
<a id="trace-7187"></a>
<a id="trace-7189"></a>
<a id="trace-7206"></a>
<a id="trace-7208"></a>
<a id="trace-7289"></a>
<a id="trace-7291"></a>
<a id="trace-7310"></a>
<a id="trace-7312"></a>
<a id="trace-7331"></a>
<a id="trace-7333"></a>
<a id="trace-7342"></a>
<a id="trace-7344"></a>
<a id="trace-7363"></a>
<a id="trace-7365"></a>
<a id="trace-7378"></a>
<a id="trace-7380"></a>
<a id="trace-7400"></a>
<a id="trace-7402"></a>
<a id="trace-7414"></a>
<a id="trace-7416"></a>
<a id="trace-7435"></a>
<a id="trace-7437"></a>
<a id="trace-7451"></a>
<a id="trace-7453"></a>
<a id="trace-7534"></a>
<a id="trace-7536"></a>
<a id="trace-7573"></a>
<a id="trace-7575"></a>
<a id="trace-7584"></a>
<a id="trace-7586"></a>
<a id="trace-7600"></a>
<a id="trace-7602"></a>
<a id="trace-7614"></a>
<a id="trace-7616"></a>
<a id="trace-7637"></a>
<a id="trace-7639"></a>
<a id="trace-7649"></a>
<a id="trace-7651"></a>
<a id="trace-7668"></a>
<a id="trace-7670"></a>
<a id="trace-7680"></a>
<a id="trace-7682"></a>
<a id="trace-7763"></a>
<a id="trace-7765"></a>
<a id="trace-7775"></a>
<a id="trace-7777"></a>
<a id="trace-7969"></a>
<a id="trace-7971"></a>
<a id="trace-7980"></a>
<a id="trace-7982"></a>
<a id="trace-8017"></a>
<a id="trace-8019"></a>
<a id="trace-8034"></a>
<a id="trace-8036"></a>
<a id="trace-8061"></a>
<a id="trace-8063"></a>
<a id="trace-8086"></a>
<a id="trace-8088"></a>
<a id="trace-8110"></a>
<a id="trace-8112"></a>
<a id="trace-8131"></a>
<a id="trace-8133"></a>
<a id="trace-8223"></a>
<a id="trace-8225"></a>
<a id="trace-8237"></a>
<a id="trace-8239"></a>
<a id="trace-8269"></a>
<a id="trace-8271"></a>
<a id="trace-8287"></a>
<a id="trace-8289"></a>
<a id="trace-8312"></a>
<a id="trace-8314"></a>
<a id="trace-8331"></a>
<a id="trace-8333"></a>
<a id="trace-8350"></a>
<a id="trace-8352"></a>
<a id="trace-8361"></a>
<a id="trace-8363"></a>
<a id="trace-8375"></a>
<a id="trace-8377"></a>
<a id="trace-8382"></a>
<a id="trace-8384"></a>
<a id="trace-8471"></a>
<a id="trace-8473"></a>
<a id="trace-8487"></a>
<a id="trace-8489"></a>
<a id="trace-8506"></a>
<a id="trace-8508"></a>
<a id="trace-8512"></a>
<a id="trace-8514"></a>
<a id="trace-8530"></a>
<a id="trace-8532"></a>
<a id="trace-8541"></a>
<a id="trace-8543"></a>
<a id="trace-8553"></a>
<a id="trace-8555"></a>
<a id="trace-8563"></a>
<a id="trace-8565"></a>
<a id="trace-8577"></a>
<a id="trace-8579"></a>
<a id="trace-8587"></a>
<a id="trace-8589"></a>
<a id="trace-8665"></a>
<a id="trace-8667"></a>
<a id="trace-8677"></a>
<a id="trace-8679"></a>
<a id="trace-8694"></a>
<a id="trace-8696"></a>
<a id="trace-8707"></a>
<a id="trace-8709"></a>
<a id="trace-8723"></a>
<a id="trace-8725"></a>
<a id="trace-8735"></a>
<a id="trace-8737"></a>
<a id="trace-8747"></a>
<a id="trace-8749"></a>
<a id="trace-8754"></a>
<a id="trace-8756"></a>
<a id="trace-8767"></a>
<a id="trace-8769"></a>
<a id="trace-8776"></a>
<a id="trace-8778"></a>
<a id="trace-8852"></a>
<a id="trace-8854"></a>
<a id="trace-8867"></a>
<a id="trace-8869"></a>
<a id="trace-8884"></a>
<a id="trace-8886"></a>
<a id="trace-8893"></a>
<a id="trace-8895"></a>
<a id="trace-8911"></a>
<a id="trace-8913"></a>
<a id="trace-8922"></a>
<a id="trace-8924"></a>
<a id="trace-8937"></a>
<a id="trace-8939"></a>
<a id="trace-8951"></a>
<a id="trace-8953"></a>
<a id="trace-8962"></a>
<a id="trace-8964"></a>
<a id="trace-8972"></a>
<a id="trace-8974"></a>
<a id="trace-9048"></a>
<a id="trace-9050"></a>
<a id="trace-9064"></a>
<a id="trace-9066"></a>
<a id="trace-9080"></a>
<a id="trace-9082"></a>
<a id="trace-9089"></a>
<a id="trace-9091"></a>
<a id="trace-9105"></a>
<a id="trace-9107"></a>
<a id="trace-9116"></a>
<a id="trace-9118"></a>
<a id="trace-9130"></a>
<a id="trace-9132"></a>
<a id="trace-9141"></a>
<a id="trace-9143"></a>
<a id="trace-9155"></a>
<a id="trace-9157"></a>
<a id="trace-9165"></a>
<a id="trace-9167"></a>
<a id="trace-9241"></a>
<a id="trace-9243"></a>
<a id="trace-9252"></a>
<a id="trace-9254"></a>
<a id="trace-9284"></a>
<a id="trace-9286"></a>
<a id="trace-9295"></a>
<a id="trace-9297"></a>
<a id="trace-9476"></a>
<a id="trace-9478"></a>
<a id="trace-9501"></a>
<a id="trace-9503"></a>
<a id="trace-9518"></a>
<a id="trace-9520"></a>
<a id="trace-9538"></a>
<a id="trace-9540"></a>
<a id="trace-9569"></a>
<a id="trace-9571"></a>
<a id="trace-9585"></a>
<a id="trace-9587"></a>
<a id="trace-9672"></a>
<a id="trace-9674"></a>
<a id="trace-9688"></a>
<a id="trace-9690"></a>
<a id="trace-9711"></a>
<a id="trace-9713"></a>
<a id="trace-9724"></a>
<a id="trace-9726"></a>
<a id="trace-9743"></a>
<a id="trace-9745"></a>
<a id="trace-9756"></a>
<a id="trace-9758"></a>
<a id="trace-9781"></a>
<a id="trace-9783"></a>
<a id="trace-9796"></a>
<a id="trace-9798"></a>
<a id="trace-9816"></a>
<a id="trace-9818"></a>
<a id="trace-9829"></a>
<a id="trace-9831"></a>
<a id="trace-9910"></a>
<a id="trace-9912"></a>
<a id="trace-9927"></a>
<a id="trace-9929"></a>
<a id="trace-9950"></a>
<a id="trace-9952"></a>
<a id="trace-9965"></a>
<a id="trace-9967"></a>
<a id="trace-9987"></a>
<a id="trace-9989"></a>
<a id="trace-10002"></a>
<a id="trace-10004"></a>
<a id="trace-10025"></a>
<a id="trace-10027"></a>
<a id="trace-10081"></a>
<a id="trace-10083"></a>
<a id="trace-10097"></a>
<a id="trace-10099"></a>
<a id="trace-10118"></a>
<a id="trace-10120"></a>
<a id="trace-10202"></a>
<a id="trace-10204"></a>
<a id="trace-10216"></a>
<a id="trace-10218"></a>
<a id="trace-10248"></a>
<a id="trace-10250"></a>
<a id="trace-10259"></a>
<a id="trace-10261"></a>
<a id="trace-10281"></a>
<a id="trace-10283"></a>
<a id="trace-10293"></a>
<a id="trace-10295"></a>
<a id="trace-10312"></a>
<a id="trace-10314"></a>
<a id="trace-10321"></a>
<a id="trace-10323"></a>
<a id="trace-10333"></a>
<a id="trace-10335"></a>
<a id="trace-10347"></a>
<a id="trace-10349"></a>
<a id="trace-10431"></a>
<a id="trace-10433"></a>
<a id="trace-10447"></a>
<a id="trace-10449"></a>
<a id="trace-10470"></a>
<a id="trace-10472"></a>
<a id="trace-10481"></a>
<a id="trace-10483"></a>
<a id="trace-10611"></a>
<a id="trace-10613"></a>
<a id="trace-10624"></a>
<a id="trace-10626"></a>
<a id="trace-10642"></a>
<a id="trace-10644"></a>
<a id="trace-10663"></a>
<a id="trace-10665"></a>
<a id="trace-10680"></a>
<a id="trace-10682"></a>
<a id="trace-10697"></a>
<a id="trace-10699"></a>
<a id="trace-10782"></a>
<a id="trace-10784"></a>
<a id="trace-10800"></a>
<a id="trace-10802"></a>
<a id="trace-10823"></a>
<a id="trace-10825"></a>
<a id="trace-10837"></a>
<a id="trace-10839"></a>
<a id="trace-10852"></a>
<a id="trace-10854"></a>
<a id="trace-10864"></a>
<a id="trace-10866"></a>
<a id="trace-10886"></a>
<a id="trace-10888"></a>
<a id="trace-10910"></a>
<a id="trace-10912"></a>
<a id="trace-10928"></a>
<a id="trace-10930"></a>
<a id="trace-10948"></a>
<a id="trace-10950"></a>
<a id="trace-11035"></a>
<a id="trace-11037"></a>
<a id="trace-11047"></a>
<a id="trace-11049"></a>
<a id="trace-11065"></a>
<a id="trace-11067"></a>
<a id="trace-11083"></a>
<a id="trace-11085"></a>
<a id="trace-11103"></a>
<a id="trace-11105"></a>
<a id="trace-11121"></a>
<a id="trace-11123"></a>
<a id="trace-11137"></a>
<a id="trace-11139"></a>
<a id="trace-11146"></a>
<a id="trace-11148"></a>
<a id="trace-11370"></a>
<a id="trace-11372"></a>
<a id="trace-11382"></a>
<a id="trace-11384"></a>
<a id="trace-11462"></a>
<a id="trace-11464"></a>
<a id="trace-11483"></a>
<a id="trace-11485"></a>
<a id="trace-11503"></a>
<a id="trace-11505"></a>
<a id="trace-11525"></a>
<a id="trace-11527"></a>
<a id="trace-11545"></a>
<a id="trace-11547"></a>
<a id="trace-11561"></a>
<a id="trace-11563"></a>
<a id="trace-11582"></a>
<a id="trace-11584"></a>
<a id="trace-11595"></a>
<a id="trace-11597"></a>
<a id="trace-11615"></a>
<a id="trace-11617"></a>
<a id="trace-11628"></a>
<a id="trace-11630"></a>
<a id="trace-11714"></a>
<a id="trace-11716"></a>
<a id="trace-11735"></a>
<a id="trace-11737"></a>
<a id="trace-11755"></a>
<a id="trace-11757"></a>
<a id="trace-11771"></a>
<a id="trace-11773"></a>
<a id="trace-11799"></a>
<a id="trace-11801"></a>
<a id="trace-11944"></a>
<a id="trace-11946"></a>
<a id="trace-11970"></a>
<a id="trace-11972"></a>
<a id="trace-11993"></a>
<a id="trace-11995"></a>
<a id="trace-12015"></a>
<a id="trace-12017"></a>
<a id="trace-12039"></a>
<a id="trace-12041"></a>
<a id="trace-12131"></a>
<a id="trace-12133"></a>
<a id="trace-12143"></a>
<a id="trace-12145"></a>
<a id="trace-12532"></a>
<a id="trace-12534"></a>
<a id="trace-12556"></a>
<a id="trace-12558"></a>
<a id="trace-12586"></a>
<a id="trace-12588"></a>
<a id="trace-12610"></a>
<a id="trace-12612"></a>
<a id="trace-13058"></a>
<a id="trace-13060"></a>
<a id="trace-13104"></a>
<a id="trace-13106"></a>
<a id="trace-13144"></a>
<a id="trace-13146"></a>
<a id="trace-13170"></a>
<a id="trace-13172"></a>
<a id="trace-13266"></a>
<a id="trace-13268"></a>
<a id="trace-13290"></a>
<a id="trace-13292"></a>
<a id="trace-13320"></a>
<a id="trace-13322"></a>
<a id="trace-13332"></a>
<a id="trace-13334"></a>
<a id="trace-13359"></a>
<a id="trace-13361"></a>
<a id="trace-13387"></a>
<a id="trace-13389"></a>
<a id="trace-13407"></a>
<a id="trace-13409"></a>
<a id="trace-13430"></a>
<a id="trace-13432"></a>
<a id="trace-13456"></a>
<a id="trace-13458"></a>
<a id="trace-13473"></a>
<a id="trace-13475"></a>
<a id="trace-13555"></a>
<a id="trace-13557"></a>
<a id="trace-13570"></a>
<a id="trace-13572"></a>
<a id="trace-13595"></a>
<a id="trace-13597"></a>
<a id="trace-13623"></a>
<a id="trace-13625"></a>
<a id="trace-13647"></a>
<a id="trace-13649"></a>
<a id="trace-13661"></a>
<a id="trace-13663"></a>
<a id="trace-15724"></a>
<a id="trace-15726"></a>
<a id="trace-15745"></a>
<a id="trace-15747"></a>
<a id="trace-15775"></a>
<a id="trace-15777"></a>
<a id="trace-15791"></a>
<a id="trace-15793"></a>
<a id="trace-15882"></a>
<a id="trace-15884"></a>
<a id="trace-15910"></a>
<a id="trace-15912"></a>
<a id="trace-15935"></a>
<a id="trace-15937"></a>
<a id="trace-15956"></a>
<a id="trace-15958"></a>
<a id="trace-15989"></a>
<a id="trace-15991"></a>
<a id="trace-16009"></a>
<a id="trace-16011"></a>
<a id="trace-16039"></a>
<a id="trace-16041"></a>
<a id="trace-16394"></a>
<a id="trace-16396"></a>
<a id="trace-16425"></a>
<a id="trace-16427"></a>
<a id="trace-16455"></a>
<a id="trace-16457"></a>
<a id="trace-16537"></a>
<a id="trace-16539"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16606"></a>
<a id="trace-16608"></a>
<a id="trace-17087"></a>
<a id="trace-17089"></a>
<a id="trace-17104"></a>
<a id="trace-17106"></a>
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17167"></a>
<a id="trace-17169"></a>
<a id="trace-17185"></a>
<a id="trace-17187"></a>
<a id="trace-17215"></a>
<a id="trace-17217"></a>
<a id="trace-17310"></a>
<a id="trace-17312"></a>
<a id="trace-17334"></a>
<a id="trace-17336"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17378"></a>
<a id="trace-17380"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17448"></a>
<a id="trace-17450"></a>
<a id="trace-17479"></a>
<a id="trace-17481"></a>
<a id="trace-17500"></a>
<a id="trace-17502"></a>
<a id="trace-17526"></a>
<a id="trace-17528"></a>
<a id="trace-17552"></a>
<a id="trace-17554"></a>
<a id="trace-17648"></a>
<a id="trace-17650"></a>
<a id="trace-17711"></a>
<a id="trace-17713"></a>
<a id="trace-17735"></a>
<a id="trace-17737"></a>
<a id="trace-17756"></a>
<a id="trace-17758"></a>
<a id="trace-17775"></a>
<a id="trace-17777"></a>
<a id="trace-17787"></a>
<a id="trace-17789"></a>
<a id="trace-17808"></a>
<a id="trace-17810"></a>
<a id="trace-17816"></a>
<a id="trace-17818"></a>
<a id="trace-17838"></a>
<a id="trace-17840"></a>
<a id="trace-17852"></a>
<a id="trace-17854"></a>
<a id="trace-17938"></a>
<a id="trace-17940"></a>
<a id="trace-17976"></a>
<a id="trace-17978"></a>
<a id="trace-18015"></a>
<a id="trace-18017"></a>
<a id="trace-18048"></a>
<a id="trace-18050"></a>
<a id="trace-18081"></a>
<a id="trace-18083"></a>
<a id="trace-18108"></a>
<a id="trace-18110"></a>
<a id="trace-18161"></a>
<a id="trace-18163"></a>
<a id="trace-18184"></a>
<a id="trace-18186"></a>
<a id="trace-18208"></a>
<a id="trace-18210"></a>
<a id="trace-18228"></a>
<a id="trace-18230"></a>
<a id="trace-18316"></a>
<a id="trace-18318"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18354"></a>
<a id="trace-18356"></a>
<a id="trace-18372"></a>
<a id="trace-18374"></a>
<a id="trace-18394"></a>
<a id="trace-18396"></a>
<a id="trace-18412"></a>
<a id="trace-18414"></a>
<a id="trace-18446"></a>
<a id="trace-18448"></a>
<a id="trace-18480"></a>
<a id="trace-18482"></a>
<a id="trace-18524"></a>
<a id="trace-18526"></a>
<a id="trace-18543"></a>
<a id="trace-18545"></a>
<a id="trace-18629"></a>
<a id="trace-18631"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18689"></a>
<a id="trace-18691"></a>
<a id="trace-18710"></a>
<a id="trace-18712"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18755"></a>
<a id="trace-18757"></a>
<a id="trace-18793"></a>
<a id="trace-18795"></a>
<a id="trace-18831"></a>
<a id="trace-18833"></a>
<a id="trace-18871"></a>
<a id="trace-18873"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18994"></a>
<a id="trace-18996"></a>
<a id="trace-19027"></a>
<a id="trace-19029"></a>
<a id="trace-19062"></a>
<a id="trace-19064"></a>
<a id="trace-19081"></a>
<a id="trace-19083"></a>
<a id="trace-19105"></a>
<a id="trace-19107"></a>
<a id="trace-19129"></a>
<a id="trace-19131"></a>
<a id="trace-19146"></a>
<a id="trace-19148"></a>
<a id="trace-19163"></a>
<a id="trace-19165"></a>
<a id="trace-19182"></a>
<a id="trace-19184"></a>
<a id="trace-19194"></a>
<a id="trace-19196"></a>
<a id="trace-19274"></a>
<a id="trace-19276"></a>
<a id="trace-19294"></a>
<a id="trace-19296"></a>
<a id="trace-19322"></a>
<a id="trace-19324"></a>
<a id="trace-19333"></a>
<a id="trace-19335"></a>
<a id="trace-19350"></a>
<a id="trace-19352"></a>
<a id="trace-19365"></a>
<a id="trace-19367"></a>
<a id="trace-19385"></a>
<a id="trace-19387"></a>
<a id="trace-19405"></a>
<a id="trace-19407"></a>
<a id="trace-19423"></a>
<a id="trace-19425"></a>
<a id="trace-19434"></a>
<a id="trace-19436"></a>
<a id="trace-19509"></a>
<a id="trace-19511"></a>
<a id="trace-19520"></a>
<a id="trace-19522"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19583"></a>
<a id="trace-19585"></a>
<a id="trace-19601"></a>
<a id="trace-19603"></a>
<a id="trace-19613"></a>
<a id="trace-19615"></a>
<a id="trace-19631"></a>
<a id="trace-19633"></a>
<a id="trace-19647"></a>
<a id="trace-19649"></a>
<a id="trace-19718"></a>
<a id="trace-19720"></a>
<a id="trace-19733"></a>
<a id="trace-19735"></a>
<a id="trace-19745"></a>
<a id="trace-19747"></a>
<a id="trace-19754"></a>
<a id="trace-19756"></a>
<a id="trace-19768"></a>
<a id="trace-19770"></a>
<a id="trace-19783"></a>
<a id="trace-19785"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19815"></a>
<a id="trace-19817"></a>
<a id="trace-19833"></a>
<a id="trace-19835"></a>
<a id="trace-19847"></a>
<a id="trace-19849"></a>
<a id="trace-19922"></a>
<a id="trace-19924"></a>
<a id="trace-19940"></a>
<a id="trace-19942"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-19972"></a>
<a id="trace-19974"></a>
<a id="trace-19987"></a>
<a id="trace-19989"></a>
<a id="trace-19997"></a>
<a id="trace-19999"></a>
<a id="trace-20071"></a>
<a id="trace-20073"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20101"></a>
<a id="trace-20103"></a>
<a id="trace-20117"></a>
<a id="trace-20119"></a>
<a id="trace-20194"></a>
<a id="trace-20196"></a>
<a id="trace-20210"></a>
<a id="trace-20212"></a>
<a id="trace-20225"></a>
<a id="trace-20227"></a>
<a id="trace-20237"></a>
<a id="trace-20239"></a>
<a id="trace-20248"></a>
<a id="trace-20250"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20283"></a>
<a id="trace-20285"></a>
<a id="trace-20296"></a>
<a id="trace-20298"></a>
<a id="trace-20492"></a>
<a id="trace-20494"></a>
<a id="trace-20569"></a>
<a id="trace-20571"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20731"></a>
<a id="trace-20733"></a>
<a id="trace-20744"></a>
<a id="trace-20746"></a>
<a id="trace-20758"></a>
<a id="trace-20760"></a>
<a id="trace-20779"></a>
<a id="trace-20781"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20822"></a>
<a id="trace-20824"></a>
<a id="trace-20835"></a>
<a id="trace-20837"></a>
<a id="trace-20907"></a>
<a id="trace-20909"></a>
<a id="trace-20925"></a>
<a id="trace-20927"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20944"></a>
<a id="trace-20946"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-20967"></a>
<a id="trace-20969"></a>
<a id="trace-20977"></a>
<a id="trace-20979"></a>
<a id="trace-20989"></a>
<a id="trace-20991"></a>
<a id="trace-21113"></a>
<a id="trace-21115"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21203"></a>
<a id="trace-21205"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21238"></a>
<a id="trace-21240"></a>
<a id="trace-21251"></a>
<a id="trace-21253"></a>
<a id="trace-21263"></a>
<a id="trace-21265"></a>
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21399"></a>
<a id="trace-21401"></a>
<a id="trace-21417"></a>
<a id="trace-21419"></a>
<a id="trace-21432"></a>
<a id="trace-21434"></a>
<a id="trace-21449"></a>
<a id="trace-21451"></a>
<a id="trace-21524"></a>
<a id="trace-21526"></a>
<a id="trace-21537"></a>
<a id="trace-21539"></a>
<a id="trace-21549"></a>
<a id="trace-21551"></a>
<a id="trace-21557"></a>
<a id="trace-21559"></a>
<a id="trace-21579"></a>
<a id="trace-21581"></a>
<a id="trace-21588"></a>
<a id="trace-21590"></a>
<a id="trace-21606"></a>
<a id="trace-21608"></a>
<a id="trace-21619"></a>
<a id="trace-21621"></a>
<a id="trace-21634"></a>
<a id="trace-21636"></a>
<a id="trace-21648"></a>
<a id="trace-21650"></a>
<a id="trace-21721"></a>
<a id="trace-21723"></a>
<a id="trace-21732"></a>
<a id="trace-21734"></a>
<a id="trace-21748"></a>
<a id="trace-21750"></a>
<a id="trace-21761"></a>
<a id="trace-21763"></a>
<a id="trace-21774"></a>
<a id="trace-21776"></a>
<a id="trace-21785"></a>
<a id="trace-21787"></a>
<a id="trace-21802"></a>
<a id="trace-21804"></a>
<a id="trace-21821"></a>
<a id="trace-21823"></a>
<a id="trace-21844"></a>
<a id="trace-21846"></a>
<a id="trace-21853"></a>
<a id="trace-21855"></a>
<a id="trace-21923"></a>
<a id="trace-21925"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-21950"></a>
<a id="trace-21952"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-21985"></a>
<a id="trace-21987"></a>
<a id="trace-21999"></a>
<a id="trace-22001"></a>
<a id="trace-22010"></a>
<a id="trace-22012"></a>
<a id="trace-22026"></a>
<a id="trace-22028"></a>
<a id="trace-22041"></a>
<a id="trace-22043"></a>
<a id="trace-22111"></a>
<a id="trace-22113"></a>
<a id="trace-22124"></a>
<a id="trace-22126"></a>
<a id="trace-22135"></a>
<a id="trace-22137"></a>
<a id="trace-22144"></a>
<a id="trace-22146"></a>
<a id="trace-22157"></a>
<a id="trace-22159"></a>
<a id="trace-22163"></a>
<a id="trace-22165"></a>
<a id="trace-22174"></a>
<a id="trace-22176"></a>
<a id="trace-22184"></a>
<a id="trace-22186"></a>
<a id="trace-22195"></a>
<a id="trace-22197"></a>
<a id="trace-22203"></a>
<a id="trace-22205"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22280"></a>
<a id="trace-22282"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22303"></a>
<a id="trace-22305"></a>
<a id="trace-22318"></a>
<a id="trace-22320"></a>
<a id="trace-22324"></a>
<a id="trace-22326"></a>
<a id="trace-22335"></a>
<a id="trace-22337"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
<a id="trace-22365"></a>
<a id="trace-22367"></a>
<a id="trace-22432"></a>
<a id="trace-22434"></a>
<a id="trace-22439"></a>
<a id="trace-22441"></a>
<a id="trace-22448"></a>
<a id="trace-22450"></a>
<a id="trace-22455"></a>
<a id="trace-22457"></a>
<a id="trace-22466"></a>
<a id="trace-22468"></a>
<a id="trace-22470"></a>
<a id="trace-22472"></a>
<a id="trace-22479"></a>
<a id="trace-22481"></a>
<a id="trace-22487"></a>
<a id="trace-22489"></a>
<a id="trace-22498"></a>
<a id="trace-22500"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22569"></a>
<a id="trace-22571"></a>
<a id="trace-22576"></a>
<a id="trace-22578"></a>
<a id="trace-22585"></a>
<a id="trace-22587"></a>
<a id="trace-22592"></a>
<a id="trace-22594"></a>
<a id="trace-22603"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22609"></a>
<a id="trace-22616"></a>
<a id="trace-22618"></a>
<a id="trace-22624"></a>
<a id="trace-22626"></a>
<a id="trace-22635"></a>
<a id="trace-22637"></a>
<a id="trace-22642"></a>
<a id="trace-22644"></a>
<a id="trace-22709"></a>
<a id="trace-22711"></a>
<a id="trace-22719"></a>
<a id="trace-22721"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22762"></a>
<a id="trace-22764"></a>
<a id="trace-22768"></a>
<a id="trace-22770"></a>
<a id="trace-22775"></a>
<a id="trace-22777"></a>
<a id="trace-22781"></a>
<a id="trace-22783"></a>
<a id="trace-22789"></a>
<a id="trace-22791"></a>
<a id="trace-22795"></a>
<a id="trace-22797"></a>
<a id="trace-22860"></a>
<a id="trace-22862"></a>
<a id="trace-22868"></a>
<a id="trace-22870"></a>
<a id="trace-22877"></a>
<a id="trace-22879"></a>
<a id="trace-22887"></a>
<a id="trace-22889"></a>
<a id="trace-22898"></a>
<a id="trace-22900"></a>
<a id="trace-22909"></a>
<a id="trace-22911"></a>
<a id="trace-22927"></a>
<a id="trace-22929"></a>
<a id="trace-22935"></a>
<a id="trace-22937"></a>
<a id="trace-22950"></a>
<a id="trace-22952"></a>
<a id="trace-22957"></a>
<a id="trace-22959"></a>
<a id="trace-23023"></a>
<a id="trace-23025"></a>
<a id="trace-23030"></a>
<a id="trace-23032"></a>
<a id="trace-23039"></a>
<a id="trace-23041"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23076"></a>
<a id="trace-23078"></a>
<a id="trace-23091"></a>
<a id="trace-23093"></a>
<a id="trace-23098"></a>
<a id="trace-23100"></a>
<a id="trace-23173"></a>
<a id="trace-23175"></a>
<a id="trace-23188"></a>
<a id="trace-23190"></a>
<a id="trace-23201"></a>
<a id="trace-23203"></a>
<a id="trace-23207"></a>
<a id="trace-23209"></a>
<a id="trace-23216"></a>
<a id="trace-23218"></a>
<a id="trace-23220"></a>
<a id="trace-23222"></a>
<a id="trace-23227"></a>
<a id="trace-23229"></a>
<a id="trace-23234"></a>
<a id="trace-23236"></a>
<a id="trace-23243"></a>
<a id="trace-23245"></a>
<a id="trace-23250"></a>
<a id="trace-23252"></a>
<a id="trace-23320"></a>
<a id="trace-23322"></a>
<a id="trace-23329"></a>
<a id="trace-23331"></a>
<a id="trace-23342"></a>
<a id="trace-23344"></a>
<a id="trace-23357"></a>
<a id="trace-23359"></a>
<a id="trace-23371"></a>
<a id="trace-23373"></a>
<a id="trace-23377"></a>
<a id="trace-23379"></a>
<a id="trace-23386"></a>
<a id="trace-23388"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23402"></a>
<a id="trace-23404"></a>
<a id="trace-23408"></a>
<a id="trace-23410"></a>
<a id="trace-23474"></a>
<a id="trace-23476"></a>
<a id="trace-23481"></a>
<a id="trace-23483"></a>
<a id="trace-23491"></a>
<a id="trace-23493"></a>
<a id="trace-23500"></a>
<a id="trace-23502"></a>
<a id="trace-23512"></a>
<a id="trace-23514"></a>
<a id="trace-23521"></a>
<a id="trace-23523"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23546"></a>
<a id="trace-23548"></a>
<a id="trace-23558"></a>
<a id="trace-23560"></a>
<a id="trace-23565"></a>
<a id="trace-23567"></a>
<a id="trace-23632"></a>
<a id="trace-23634"></a>
<a id="trace-23641"></a>
<a id="trace-23643"></a>
<a id="trace-23651"></a>
<a id="trace-23653"></a>
<a id="trace-23656"></a>
<a id="trace-23658"></a>
<a id="trace-23666"></a>
<a id="trace-23668"></a>
<a id="trace-23671"></a>
<a id="trace-23673"></a>
<a id="trace-23685"></a>
<a id="trace-23687"></a>
<a id="trace-23693"></a>
<a id="trace-23695"></a>
<a id="trace-23706"></a>
<a id="trace-23708"></a>
<a id="trace-23721"></a>
<a id="trace-23723"></a>
<a id="trace-23786"></a>
<a id="trace-23788"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23807"></a>
<a id="trace-23809"></a>
<a id="trace-23815"></a>
<a id="trace-23817"></a>
<a id="trace-23828"></a>
<a id="trace-23830"></a>
<a id="trace-23832"></a>
<a id="trace-23834"></a>
<a id="trace-23841"></a>
<a id="trace-23843"></a>
<a id="trace-23848"></a>
<a id="trace-23850"></a>
<a id="trace-23856"></a>
<a id="trace-23858"></a>
<a id="trace-23867"></a>
<a id="trace-23869"></a>
<a id="trace-23934"></a>
<a id="trace-23936"></a>
<a id="trace-23945"></a>
<a id="trace-23947"></a>
<a id="trace-23962"></a>
<a id="trace-23964"></a>
<a id="trace-23967"></a>
<a id="trace-23969"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-23985"></a>
<a id="trace-23987"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24014"></a>
<a id="trace-24016"></a>
<a id="trace-24020"></a>
<a id="trace-24022"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24092"></a>
<a id="trace-24094"></a>
<a id="trace-24106"></a>
<a id="trace-24108"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24124"></a>
<a id="trace-24126"></a>
<a id="trace-24129"></a>
<a id="trace-24131"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24154"></a>
<a id="trace-24156"></a>
<a id="trace-24167"></a>
<a id="trace-24169"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24246"></a>
<a id="trace-24248"></a>
<a id="trace-24253"></a>
<a id="trace-24255"></a>
<a id="trace-24262"></a>
<a id="trace-24264"></a>
<a id="trace-24267"></a>
<a id="trace-24269"></a>
<a id="trace-24275"></a>
<a id="trace-24277"></a>
<a id="trace-24280"></a>
<a id="trace-24282"></a>
<a id="trace-24294"></a>
<a id="trace-24296"></a>
<a id="trace-24300"></a>
<a id="trace-24302"></a>
<a id="trace-24312"></a>
<a id="trace-24314"></a>
<a id="trace-24327"></a>
<a id="trace-24329"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24404"></a>
<a id="trace-24406"></a>
<a id="trace-24416"></a>
<a id="trace-24418"></a>
<a id="trace-24421"></a>
<a id="trace-24423"></a>
<a id="trace-24432"></a>
<a id="trace-24434"></a>
<a id="trace-24441"></a>
<a id="trace-24443"></a>
<a id="trace-24450"></a>
<a id="trace-24452"></a>
<a id="trace-24456"></a>
<a id="trace-24458"></a>
<a id="trace-24466"></a>
<a id="trace-24468"></a>
<a id="trace-24476"></a>
<a id="trace-24478"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24554"></a>
<a id="trace-24556"></a>
<a id="trace-24571"></a>
<a id="trace-24573"></a>
<a id="trace-24575"></a>
<a id="trace-24577"></a>
<a id="trace-24585"></a>
<a id="trace-24587"></a>
<a id="trace-24591"></a>
<a id="trace-24593"></a>
<a id="trace-24599"></a>
<a id="trace-24601"></a>
<a id="trace-24611"></a>
<a id="trace-24613"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24632"></a>
<a id="trace-24634"></a>
<a id="trace-24699"></a>
<a id="trace-24701"></a>
<a id="trace-24706"></a>
<a id="trace-24708"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24729"></a>
<a id="trace-24731"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24754"></a>
<a id="trace-24756"></a>
<a id="trace-24762"></a>
<a id="trace-24764"></a>
<a id="trace-24769"></a>
<a id="trace-24771"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24787"></a>
<a id="trace-24789"></a>
<a id="trace-24853"></a>
<a id="trace-24855"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24876"></a>
<a id="trace-24878"></a>
<a id="trace-24882"></a>
<a id="trace-24884"></a>
<a id="trace-24892"></a>
<a id="trace-24894"></a>
<a id="trace-24901"></a>
<a id="trace-24903"></a>
<a id="trace-24911"></a>
<a id="trace-24913"></a>
<a id="trace-24921"></a>
<a id="trace-24923"></a>
<a id="trace-24938"></a>
<a id="trace-24940"></a>
<a id="trace-24944"></a>
<a id="trace-24946"></a>
<a id="trace-25009"></a>
<a id="trace-25011"></a>
<a id="trace-25017"></a>
<a id="trace-25019"></a>
<a id="trace-25026"></a>
<a id="trace-25028"></a>
<a id="trace-25032"></a>
<a id="trace-25034"></a>
<a id="trace-25045"></a>
<a id="trace-25047"></a>
<a id="trace-25049"></a>
<a id="trace-25051"></a>
<a id="trace-25059"></a>
<a id="trace-25061"></a>
<a id="trace-25071"></a>
<a id="trace-25073"></a>
<a id="trace-25086"></a>
<a id="trace-25088"></a>
<a id="trace-25094"></a>
<a id="trace-25096"></a>
<a id="trace-25162"></a>
<a id="trace-25164"></a>
<a id="trace-25169"></a>
<a id="trace-25171"></a>
<a id="trace-25186"></a>
<a id="trace-25188"></a>
<a id="trace-25191"></a>
<a id="trace-25193"></a>
<a id="trace-25200"></a>
<a id="trace-25202"></a>
<a id="trace-25205"></a>
<a id="trace-25207"></a>
<a id="trace-25219"></a>
<a id="trace-25221"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
<a id="trace-25247"></a>
<a id="trace-25249"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079378314521077, 'next_transition': 608}.
<a id="trace-936"></a>
<a id="trace-965"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1019"></a>
<a id="trace-1021"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1127"></a>
<a id="trace-1129"></a>
<a id="trace-1250"></a>
<a id="trace-1252"></a>
<a id="trace-1274"></a>
<a id="trace-1276"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 936): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5200726552337436, 'next_transition': 965}.
<a id="trace-1134"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1134): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1056. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.825099817378927, 'next_transition': 139}.
<a id="trace-139"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 139): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175536032535128, 'next_transition': 2135}.
<a id="trace-1360"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1360): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1360. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175536032535128, 'next_transition': 2135}.
<a id="trace-1361"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1361): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1361. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.175536032535128, 'next_transition': 2135}.
<a id="trace-1362"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1362): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1048. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663605439545, 'next_transition': 1692}.
<a id="trace-1692"></a>
<a id="trace-1694"></a>
<a id="trace-1753"></a>
<a id="trace-1755"></a>
<a id="trace-1775"></a>
<a id="trace-1777"></a>
<a id="trace-1862"></a>
<a id="trace-1864"></a>
<a id="trace-1902"></a>
<a id="trace-1904"></a>
<a id="trace-1938"></a>
<a id="trace-1940"></a>
<a id="trace-1973"></a>
<a id="trace-1975"></a>
<a id="trace-1994"></a>
<a id="trace-1996"></a>
<a id="trace-2017"></a>
<a id="trace-2019"></a>
<a id="trace-2076"></a>
<a id="trace-2078"></a>
<a id="trace-2101"></a>
<a id="trace-2103"></a>
<a id="trace-2126"></a>
<a id="trace-2128"></a>
<a id="trace-2308"></a>
<a id="trace-2310"></a>
<a id="trace-2338"></a>
<a id="trace-2340"></a>
<a id="trace-2399"></a>
<a id="trace-2401"></a>
<a id="trace-2476"></a>
<a id="trace-2478"></a>
- 13.20s–23.25s (×32), actor 5, squad 0 (trace 1692): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1361. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5553395772223495, 'next_transition': 1753}.
<a id="trace-2135"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2135): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1799. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.155904023955284, 'next_transition': 3110}.
<a id="trace-2136"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2136): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1799. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.155904023955284, 'next_transition': 3110}.
<a id="trace-2487"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2487): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2228. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6496881631022998, 'next_transition': 2837}.
<a id="trace-2488"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2488): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2228. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6496881631022998, 'next_transition': 2837}.
<a id="trace-2837"></a>
<a id="trace-2839"></a>
<a id="trace-2869"></a>
<a id="trace-2871"></a>
<a id="trace-2955"></a>
<a id="trace-2957"></a>
<a id="trace-2972"></a>
<a id="trace-2974"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 2837): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2233. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331454145742496, 'next_transition': 2869}.
<a id="trace-252"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3035"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3035): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3035. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300040745641153, 'next_transition': 3057}.
<a id="trace-3036"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3036): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3036. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300040745641153, 'next_transition': 3057}.
<a id="trace-3057"></a>
<a id="trace-3059"></a>
<a id="trace-3100"></a>
<a id="trace-3102"></a>
<a id="trace-3232"></a>
<a id="trace-3234"></a>
<a id="trace-3340"></a>
<a id="trace-3342"></a>
<a id="trace-3356"></a>
<a id="trace-3358"></a>
<a id="trace-3388"></a>
<a id="trace-3390"></a>
<a id="trace-3413"></a>
<a id="trace-3415"></a>
<a id="trace-3455"></a>
<a id="trace-3457"></a>
- 27.25s–33.25s (×16), actor 5, squad 0 (trace 3057): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 3036. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7749442486018497, 'next_transition': 3100}.
<a id="trace-3110"></a>
- 28.40s–28.40s (×1), actor 8, squad 1 (trace 3110): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2890. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.746402355798021, 'next_transition': 734}.
<a id="trace-3463"></a>
- 33.25s–33.25s (×1), actor 0, squad 0 (trace 3463): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3247. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13534819495642858, 'next_transition': 3634}.
<a id="trace-3634"></a>
<a id="trace-3636"></a>
<a id="trace-3657"></a>
<a id="trace-3659"></a>
<a id="trace-3689"></a>
<a id="trace-3691"></a>
<a id="trace-3776"></a>
<a id="trace-3778"></a>
<a id="trace-3793"></a>
<a id="trace-3795"></a>
- 33.75s–35.75s (×10), actor 5, squad 0 (trace 3634): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3252. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3657}.
<a id="trace-3831"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 3831): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3705. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40401712872782736, 'next_transition': 4281}.
<a id="trace-3832"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 3832): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3705. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40401712872782736, 'next_transition': 4281}.
<a id="trace-3833"></a>
- 36.25s–36.25s (×1), actor 0, squad 0 (trace 3833): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3705. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40401712872782736, 'next_transition': 4281}.
<a id="trace-4281"></a>
<a id="trace-4283"></a>
<a id="trace-4307"></a>
<a id="trace-4309"></a>
- 36.75s–37.25s (×4), actor 5, squad 0 (trace 4281): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3710. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9887016992781337, 'next_transition': 4307}.
<a id="trace-4346"></a>
- 37.75s–37.75s (×1), actor 0, squad 0 (trace 4346): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3705. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250175006038087, 'next_transition': 4793}.
<a id="trace-4793"></a>
<a id="trace-4795"></a>
<a id="trace-4818"></a>
<a id="trace-4820"></a>
<a id="trace-4912"></a>
<a id="trace-4914"></a>
<a id="trace-5003"></a>
<a id="trace-5038"></a>
<a id="trace-5072"></a>
- 38.25s–41.25s (×9), actor 5, squad 0 (trace 4793): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3710. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499440177312454, 'next_transition': 4818}.
<a id="trace-5079"></a>
- 41.30s–41.30s (×1), actor 0, squad 0 (trace 5079): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 4926. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575029989248222, 'next_transition': 5551}.
<a id="trace-5080"></a>
- 41.30s–41.30s (×1), actor 0, squad 0 (trace 5080): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 4926. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575029989248222, 'next_transition': 5551}.
<a id="trace-5551"></a>
<a id="trace-5578"></a>
<a id="trace-5616"></a>
<a id="trace-5650"></a>
<a id="trace-5685"></a>
<a id="trace-5687"></a>
<a id="trace-6015"></a>
<a id="trace-6017"></a>
<a id="trace-6089"></a>
<a id="trace-6091"></a>
<a id="trace-6153"></a>
<a id="trace-6155"></a>
<a id="trace-6206"></a>
<a id="trace-6208"></a>
<a id="trace-6250"></a>
<a id="trace-6252"></a>
<a id="trace-6357"></a>
<a id="trace-6359"></a>
<a id="trace-6407"></a>
<a id="trace-6409"></a>
<a id="trace-6462"></a>
<a id="trace-6464"></a>
<a id="trace-6595"></a>
<a id="trace-6597"></a>
<a id="trace-6637"></a>
<a id="trace-6639"></a>
<a id="trace-6676"></a>
<a id="trace-6678"></a>
<a id="trace-6729"></a>
<a id="trace-6731"></a>
<a id="trace-6747"></a>
<a id="trace-6749"></a>
<a id="trace-6764"></a>
<a id="trace-6766"></a>
- 41.75s–53.25s (×34), actor 5, squad 0 (trace 5551): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4931. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21695325488742942, 'next_transition': 5578}.
<a id="trace-6773"></a>
- 53.35s–53.35s (×1), actor 1, squad 0 (trace 6773): NeedSupport. Knowledge: actor memory at 50.00s, trace 6496. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5400121948705503, 'next_transition': 6782}.
<a id="trace-6782"></a>
<a id="trace-6784"></a>
<a id="trace-6806"></a>
<a id="trace-6808"></a>
<a id="trace-6820"></a>
<a id="trace-6822"></a>
<a id="trace-6912"></a>
<a id="trace-6914"></a>
<a id="trace-6940"></a>
<a id="trace-6942"></a>
- 53.75s–56.25s (×10), actor 5, squad 0 (trace 6782): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6500. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.809989086574164, 'next_transition': 6806}.
<a id="trace-734"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (events line 734): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6796"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (trace 6796): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.483216 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 6796. Next observer evidence: {'until': 84, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1117}.
<a id="trace-6797"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (trace 6797): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.483216 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 6797. Next observer evidence: {'until': 84, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1117}.
<a id="trace-6952"></a>
- 56.65s–56.65s (×1), actor 1, squad 0 (trace 6952): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 6831. Next observer evidence: None.
<a id="trace-6953"></a>
- 56.65s–56.65s (×1), actor 1, squad 0 (trace 6953): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 6831. Next observer evidence: None.
<a id="trace-7068"></a>
<a id="trace-7070"></a>
<a id="trace-7090"></a>
<a id="trace-7110"></a>
<a id="trace-7148"></a>
<a id="trace-7161"></a>
<a id="trace-7185"></a>
<a id="trace-7202"></a>
<a id="trace-7204"></a>
<a id="trace-7285"></a>
<a id="trace-7287"></a>
<a id="trace-7306"></a>
<a id="trace-7308"></a>
<a id="trace-7327"></a>
<a id="trace-7329"></a>
<a id="trace-7338"></a>
<a id="trace-7340"></a>
<a id="trace-7359"></a>
<a id="trace-7361"></a>
<a id="trace-7374"></a>
<a id="trace-7376"></a>
<a id="trace-7396"></a>
<a id="trace-7398"></a>
<a id="trace-7410"></a>
<a id="trace-7412"></a>
<a id="trace-7431"></a>
<a id="trace-7433"></a>
<a id="trace-7447"></a>
<a id="trace-7449"></a>
<a id="trace-7530"></a>
<a id="trace-7532"></a>
<a id="trace-7545"></a>
<a id="trace-7547"></a>
<a id="trace-7596"></a>
<a id="trace-7598"></a>
<a id="trace-7610"></a>
<a id="trace-7612"></a>
<a id="trace-7664"></a>
<a id="trace-7666"></a>
<a id="trace-7676"></a>
<a id="trace-7678"></a>
<a id="trace-7759"></a>
<a id="trace-7761"></a>
<a id="trace-7771"></a>
<a id="trace-7773"></a>
- 56.75s–70.75s (×45), actor 5, squad 0 (trace 7068): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 6835. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8100031716381739, 'next_transition': 7090}.
<a id="trace-7785"></a>
- 71.05s–71.05s (×1), actor 1, squad 0 (trace 7785): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 7684. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000721908688836, 'next_transition': 7965}.
<a id="trace-7802"></a>
- 71.05s–71.05s (×1), actor 1, squad 0 (trace 7802): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 7684. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000721908688836, 'next_transition': 7965}.
<a id="trace-7965"></a>
<a id="trace-7967"></a>
<a id="trace-8013"></a>
<a id="trace-8015"></a>
<a id="trace-8057"></a>
<a id="trace-8059"></a>
- 71.25s–73.25s (×6), actor 5, squad 0 (trace 7965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 7688. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3049185992632486, 'next_transition': 8013}.
<a id="trace-8071"></a>
- 73.65s–73.65s (×1), actor 1, squad 0 (trace 8071): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 7684. Next observer evidence: None.
<a id="trace-8082"></a>
<a id="trace-8084"></a>
<a id="trace-8106"></a>
<a id="trace-8108"></a>
<a id="trace-8127"></a>
<a id="trace-8129"></a>
<a id="trace-8219"></a>
<a id="trace-8221"></a>
<a id="trace-8233"></a>
<a id="trace-8235"></a>
<a id="trace-8265"></a>
<a id="trace-8267"></a>
<a id="trace-8283"></a>
<a id="trace-8285"></a>
<a id="trace-8308"></a>
<a id="trace-8310"></a>
<a id="trace-8327"></a>
<a id="trace-8329"></a>
<a id="trace-8357"></a>
<a id="trace-8359"></a>
<a id="trace-8467"></a>
<a id="trace-8469"></a>
<a id="trace-8502"></a>
<a id="trace-8504"></a>
<a id="trace-8526"></a>
<a id="trace-8528"></a>
<a id="trace-8537"></a>
<a id="trace-8539"></a>
<a id="trace-8549"></a>
<a id="trace-8551"></a>
<a id="trace-8559"></a>
<a id="trace-8561"></a>
<a id="trace-8573"></a>
<a id="trace-8575"></a>
<a id="trace-8583"></a>
<a id="trace-8585"></a>
<a id="trace-8661"></a>
<a id="trace-8663"></a>
<a id="trace-8703"></a>
<a id="trace-8705"></a>
<a id="trace-8731"></a>
<a id="trace-8733"></a>
<a id="trace-8743"></a>
<a id="trace-8745"></a>
<a id="trace-8763"></a>
<a id="trace-8765"></a>
<a id="trace-8772"></a>
<a id="trace-8774"></a>
<a id="trace-8848"></a>
<a id="trace-8850"></a>
<a id="trace-8863"></a>
<a id="trace-8865"></a>
<a id="trace-8880"></a>
<a id="trace-8882"></a>
<a id="trace-8889"></a>
<a id="trace-8891"></a>
<a id="trace-8907"></a>
<a id="trace-8909"></a>
<a id="trace-8918"></a>
<a id="trace-8920"></a>
<a id="trace-8933"></a>
<a id="trace-8935"></a>
<a id="trace-8947"></a>
<a id="trace-8949"></a>
<a id="trace-8968"></a>
<a id="trace-8970"></a>
- 73.75s–94.75s (×66), actor 5, squad 0 (trace 8082): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 7688. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0800087611485223, 'next_transition': 8106}.
<a id="trace-950"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 950): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9054"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 9054): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.527230 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 9054. Next observer evidence: None.
<a id="trace-9055"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 9055): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.527230 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 9055. Next observer evidence: None.
<a id="trace-9060"></a>
<a id="trace-9062"></a>
<a id="trace-9076"></a>
<a id="trace-9078"></a>
<a id="trace-9085"></a>
<a id="trace-9087"></a>
<a id="trace-9101"></a>
<a id="trace-9103"></a>
<a id="trace-9112"></a>
<a id="trace-9114"></a>
<a id="trace-9126"></a>
<a id="trace-9128"></a>
<a id="trace-9137"></a>
<a id="trace-9139"></a>
<a id="trace-9151"></a>
<a id="trace-9153"></a>
- 95.75s–99.25s (×16), actor 5, squad 0 (trace 9060): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 9055. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9076}.
<a id="trace-9262"></a>
- 101.20s–101.20s (×1), actor 1, squad 0 (trace 9262): MoveTactically. Knowledge: actor memory at 100.00s, trace 9169. Next observer evidence: None.
<a id="trace-9263"></a>
- 101.20s–101.20s (×1), actor 1, squad 0 (trace 9263): received platoon directive. Knowledge: actor memory at 100.00s, trace 9169. Next observer evidence: None.
<a id="trace-9280"></a>
<a id="trace-9282"></a>
<a id="trace-9291"></a>
<a id="trace-9293"></a>
- 101.25s–101.75s (×4), actor 5, squad 0 (trace 9280): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 9173. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9291}.
<a id="trace-9309"></a>
- 102.20s–102.20s (×1), actor 1, squad 0 (trace 9309): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 9169. Next observer evidence: None.
<a id="trace-9472"></a>
<a id="trace-9474"></a>
<a id="trace-9497"></a>
<a id="trace-9499"></a>
<a id="trace-9534"></a>
<a id="trace-9536"></a>
<a id="trace-9565"></a>
<a id="trace-9567"></a>
<a id="trace-9707"></a>
<a id="trace-9709"></a>
<a id="trace-9739"></a>
<a id="trace-9741"></a>
<a id="trace-9752"></a>
<a id="trace-9754"></a>
<a id="trace-9777"></a>
<a id="trace-9779"></a>
<a id="trace-9812"></a>
<a id="trace-9814"></a>
<a id="trace-9825"></a>
<a id="trace-9827"></a>
<a id="trace-9923"></a>
<a id="trace-9925"></a>
<a id="trace-9946"></a>
<a id="trace-9948"></a>
<a id="trace-9961"></a>
<a id="trace-9963"></a>
<a id="trace-9998"></a>
<a id="trace-10000"></a>
<a id="trace-10021"></a>
<a id="trace-10023"></a>
- 102.25s–113.25s (×30), actor 5, squad 0 (trace 9472): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 9173. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9497}.
<a id="trace-10032"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 10032): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 9836. Next observer evidence: None.
<a id="trace-10077"></a>
<a id="trace-10079"></a>
<a id="trace-10093"></a>
<a id="trace-10095"></a>
<a id="trace-10198"></a>
<a id="trace-10200"></a>
<a id="trace-10212"></a>
<a id="trace-10214"></a>
<a id="trace-10244"></a>
<a id="trace-10246"></a>
<a id="trace-10277"></a>
<a id="trace-10279"></a>
<a id="trace-10289"></a>
<a id="trace-10291"></a>
<a id="trace-10308"></a>
<a id="trace-10310"></a>
<a id="trace-10343"></a>
<a id="trace-10345"></a>
<a id="trace-10427"></a>
<a id="trace-10429"></a>
<a id="trace-10443"></a>
<a id="trace-10445"></a>
<a id="trace-10466"></a>
<a id="trace-10468"></a>
<a id="trace-10477"></a>
<a id="trace-10479"></a>
- 113.75s–121.75s (×26), actor 5, squad 0 (trace 10077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 9840. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399984187429588, 'next_transition': 10093}.
<a id="trace-10490"></a>
- 122.05s–122.05s (×1), actor 1, squad 0 (trace 10490): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 10352. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.005488856986696479, 'next_transition': 10607}.
<a id="trace-10607"></a>
<a id="trace-10609"></a>
<a id="trace-10638"></a>
<a id="trace-10640"></a>
<a id="trace-10659"></a>
<a id="trace-10661"></a>
<a id="trace-10676"></a>
<a id="trace-10678"></a>
<a id="trace-10693"></a>
<a id="trace-10695"></a>
<a id="trace-10796"></a>
<a id="trace-10798"></a>
<a id="trace-10819"></a>
<a id="trace-10821"></a>
<a id="trace-10833"></a>
<a id="trace-10835"></a>
<a id="trace-10848"></a>
<a id="trace-10850"></a>
<a id="trace-10860"></a>
<a id="trace-10862"></a>
<a id="trace-10906"></a>
<a id="trace-10908"></a>
<a id="trace-10924"></a>
<a id="trace-10926"></a>
<a id="trace-10944"></a>
<a id="trace-10946"></a>
<a id="trace-11031"></a>
<a id="trace-11033"></a>
<a id="trace-11061"></a>
<a id="trace-11063"></a>
<a id="trace-11079"></a>
<a id="trace-11081"></a>
<a id="trace-11099"></a>
<a id="trace-11101"></a>
<a id="trace-11133"></a>
<a id="trace-11135"></a>
<a id="trace-11142"></a>
<a id="trace-11144"></a>
- 122.25s–133.80s (×38), actor 5, squad 0 (trace 10607): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 10356. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11265043819040335, 'next_transition': 10638}.
<a id="trace-1117"></a>
- 123.30s–123.30s (×1), actor 5, squad 1 (events line 1117): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10873}.
<a id="trace-10648"></a>
- 123.30s–123.30s (×1), actor 5, squad 1 (trace 10648): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.30s, trace 10648. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10873}.
<a id="trace-10873"></a>
- 128.25s–128.25s (×1), actor 9, squad 1 (trace 10873): ReactToContact: cover and return fire. Knowledge: actor memory at 125.00s, trace 10718. Next observer evidence: {'until': 131.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11071}.
<a id="trace-10874"></a>
- 128.25s–128.25s (×1), actor 9, squad 1 (trace 10874): bounding overwatch. Knowledge: actor memory at 125.00s, trace 10718. Next observer evidence: {'until': 131.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11071}.
<a id="trace-10875"></a>
- 128.25s–128.25s (×1), actor 9, squad 1 (trace 10875): new contact inside 100 m. Knowledge: actor memory at 125.00s, trace 10718. Next observer evidence: {'until': 131.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11071}.
<a id="trace-11071"></a>
- 131.55s–131.55s (×1), actor 9, squad 1 (trace 11071): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 130.00s, trace 10961. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13074}.
<a id="trace-11073"></a>
- 131.55s–131.55s (×1), actor 9, squad 1 (trace 11073): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 130.00s, trace 10961. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13074}.
<a id="trace-11155"></a>
- 134.05s–134.05s (×1), actor 1, squad 0 (trace 11155): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 10954. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11378}.
<a id="trace-11378"></a>
<a id="trace-11380"></a>
<a id="trace-11479"></a>
<a id="trace-11481"></a>
<a id="trace-11499"></a>
<a id="trace-11501"></a>
<a id="trace-11521"></a>
<a id="trace-11523"></a>
<a id="trace-11557"></a>
<a id="trace-11559"></a>
<a id="trace-11578"></a>
<a id="trace-11580"></a>
<a id="trace-11591"></a>
<a id="trace-11593"></a>
<a id="trace-11611"></a>
<a id="trace-11613"></a>
<a id="trace-11624"></a>
<a id="trace-11626"></a>
<a id="trace-11710"></a>
<a id="trace-11712"></a>
<a id="trace-11731"></a>
<a id="trace-11733"></a>
<a id="trace-11751"></a>
<a id="trace-11753"></a>
<a id="trace-11767"></a>
<a id="trace-11769"></a>
<a id="trace-11795"></a>
<a id="trace-11797"></a>
- 134.80s–142.30s (×28), actor 5, squad 0 (trace 11378): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 10958. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45000533940319765, 'next_transition': 11479}.
<a id="trace-11804"></a>
- 142.45s–142.45s (×1), actor 1, squad 0 (trace 11804): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 11636. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022501196525554656, 'next_transition': 11966}.
<a id="trace-11966"></a>
<a id="trace-11968"></a>
<a id="trace-11989"></a>
<a id="trace-11991"></a>
<a id="trace-12035"></a>
<a id="trace-12037"></a>
<a id="trace-12127"></a>
<a id="trace-12129"></a>
- 143.30s–145.30s (×8), actor 5, squad 0 (trace 11966): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 11640. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49498760273707354, 'next_transition': 11989}.
<a id="trace-12154"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 12154): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 12046. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32592562930541147, 'next_transition': 12528}.
<a id="trace-12155"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 12155): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 12046. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32592562930541147, 'next_transition': 12528}.
<a id="trace-12528"></a>
<a id="trace-12530"></a>
<a id="trace-12552"></a>
<a id="trace-12554"></a>
<a id="trace-12582"></a>
<a id="trace-12584"></a>
- 146.30s–147.30s (×6), actor 5, squad 0 (trace 12528): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 12050. Next observer evidence: {'until': 146.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9289288870491065, 'next_transition': 12552}.
<a id="trace-12615"></a>
- 147.80s–147.80s (×1), actor 1, squad 0 (trace 12615): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 145.00s, trace 12046. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6837437256191079, 'next_transition': 13054}.
<a id="trace-13054"></a>
<a id="trace-13056"></a>
<a id="trace-13100"></a>
<a id="trace-13102"></a>
<a id="trace-13166"></a>
<a id="trace-13168"></a>
<a id="trace-13262"></a>
<a id="trace-13264"></a>
<a id="trace-13286"></a>
<a id="trace-13288"></a>
- 148.30s–150.80s (×10), actor 5, squad 0 (trace 13054): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 12050. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0309019559501194, 'next_transition': 13100}.
<a id="trace-13074"></a>
- 148.65s–148.65s (×1), actor 9, squad 1 (trace 13074): MoveTactically. Knowledge: actor memory at 145.00s, trace 12053. Next observer evidence: None.
<a id="trace-13075"></a>
- 148.65s–148.65s (×1), actor 9, squad 1 (trace 13075): traveling overwatch. Knowledge: actor memory at 145.00s, trace 12053. Next observer evidence: None.
<a id="trace-13076"></a>
- 148.65s–148.65s (×1), actor 9, squad 1 (trace 13076): current contact unknown for 10 s. Knowledge: actor memory at 145.00s, trace 12053. Next observer evidence: None.
<a id="trace-13080"></a>
- 148.70s–148.70s (×1), actor 9, squad 1 (trace 13080): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 12053. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1755}.
<a id="trace-1754"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (events line 1754): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1755"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (events line 1755): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13297"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 13297): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 13297. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6189362843705318, 'next_transition': 13316}.
<a id="trace-13298"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 13298): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 13298. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6189362843705318, 'next_transition': 13316}.
<a id="trace-13299"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 13299): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 13299. Next observer evidence: {'until': 164.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1911}.
<a id="trace-13300"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 13300): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 13300. Next observer evidence: {'until': 164.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1911}.
<a id="trace-13316"></a>
<a id="trace-13318"></a>
- 151.30s–151.30s (×2), actor 5, squad 0 (trace 13316): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 13300. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3225074730126993, 'next_transition': 13350}.
<a id="trace-13350"></a>
- 152.20s–152.20s (×1), actor 1, squad 0 (trace 13350): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 150.00s, trace 13180. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2365451392095343, 'next_transition': 13383}.
<a id="trace-13383"></a>
<a id="trace-13385"></a>
<a id="trace-13403"></a>
<a id="trace-13405"></a>
<a id="trace-13426"></a>
<a id="trace-13428"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13469"></a>
<a id="trace-13471"></a>
<a id="trace-13551"></a>
<a id="trace-13553"></a>
<a id="trace-13566"></a>
<a id="trace-13568"></a>
<a id="trace-13591"></a>
<a id="trace-13593"></a>
- 152.80s–156.30s (×16), actor 5, squad 0 (trace 13383): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 13300. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9816903020110876, 'next_transition': 13403}.
<a id="trace-13613"></a>
- 156.75s–156.75s (×1), actor 1, squad 0 (trace 13613): received platoon directive; retain contact cover stage. Knowledge: actor memory at 155.00s, trace 13479. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27858437530229047, 'next_transition': 13619}.
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13643"></a>
<a id="trace-13645"></a>
- 156.80s–157.30s (×4), actor 5, squad 0 (trace 13619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 13483. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5271670084513593, 'next_transition': 13643}.
<a id="trace-13671"></a>
- 158.05s–158.05s (×1), actor 1, squad 0 (trace 13671): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 155.00s, trace 13479. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21030770236190507, 'next_transition': 15720}.
<a id="trace-15410"></a>
- 158.05s–158.05s (×1), actor 1, squad 0 (trace 15410): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 155.00s, trace 13479. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21030770236190507, 'next_transition': 15720}.
<a id="trace-15411"></a>
- 158.05s–158.05s (×1), actor 1, squad 0 (trace 15411): MoveTactically. Knowledge: actor memory at 155.00s, trace 13479. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21030770236190507, 'next_transition': 15720}.
<a id="trace-15412"></a>
- 158.05s–158.05s (×1), actor 1, squad 0 (trace 15412): contact cover complete: assessment resumes closure. Knowledge: actor memory at 155.00s, trace 13479. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21030770236190507, 'next_transition': 15720}.
<a id="trace-15720"></a>
<a id="trace-15722"></a>
<a id="trace-15741"></a>
<a id="trace-15743"></a>
<a id="trace-15771"></a>
<a id="trace-15773"></a>
<a id="trace-15787"></a>
<a id="trace-15789"></a>
<a id="trace-15878"></a>
<a id="trace-15880"></a>
<a id="trace-15906"></a>
<a id="trace-15908"></a>
<a id="trace-15931"></a>
<a id="trace-15933"></a>
<a id="trace-15985"></a>
<a id="trace-15987"></a>
<a id="trace-16005"></a>
<a id="trace-16007"></a>
- 158.30s–162.80s (×18), actor 5, squad 0 (trace 15720): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 13483. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6613734700691489, 'next_transition': 15741}.
<a id="trace-16018"></a>
- 162.95s–162.95s (×1), actor 1, squad 0 (trace 16018): NeedSupport. Knowledge: actor memory at 160.00s, trace 15797. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19724743064180225, 'next_transition': 16035}.
<a id="trace-16035"></a>
<a id="trace-16037"></a>
- 163.30s–163.30s (×2), actor 5, squad 0 (trace 16035): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 15801. Next observer evidence: {'until': 163.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08731380844344139, 'next_transition': 16047}.
<a id="trace-16047"></a>
- 163.45s–163.45s (×1), actor 1, squad 0 (trace 16047): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 160.00s, trace 15797. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31310705927420307, 'next_transition': 16421}.
<a id="trace-16421"></a>
<a id="trace-16423"></a>
- 164.30s–164.30s (×2), actor 5, squad 0 (trace 16421): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 15801. Next observer evidence: {'until': 164.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20250714285714277, 'next_transition': 1910}.
<a id="trace-1910"></a>
- 164.75s–164.75s (×1), actor 5, squad 0 (events line 1910): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9793509938728172, 'next_transition': 16533}.
<a id="trace-1911"></a>
- 164.75s–164.75s (×1), actor 5, squad 1 (events line 1911): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 169.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17203}.
<a id="trace-16442"></a>
- 164.75s–164.75s (×1), actor 5, squad 0 (trace 16442): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.375456 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.75s, trace 16442. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9793509938728172, 'next_transition': 16533}.
<a id="trace-16443"></a>
- 164.75s–164.75s (×1), actor 5, squad 0 (trace 16443): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.375456 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.75s, trace 16443. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9793509938728172, 'next_transition': 16533}.
<a id="trace-16444"></a>
- 164.75s–164.75s (×1), actor 5, squad 1 (trace 16444): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.375456 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.75s, trace 16444. Next observer evidence: {'until': 169.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17203}.
<a id="trace-16445"></a>
- 164.75s–164.75s (×1), actor 5, squad 1 (trace 16445): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.375456 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.75s, trace 16445. Next observer evidence: {'until': 169.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17203}.
<a id="trace-16533"></a>
<a id="trace-16535"></a>
<a id="trace-16559"></a>
<a id="trace-16561"></a>
- 165.30s–165.80s (×4), actor 5, squad 0 (trace 16533): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16467. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7961042489739629, 'next_transition': 16559}.
<a id="trace-16600"></a>
- 166.75s–166.75s (×1), actor 1, squad 0 (trace 16600): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 165.00s, trace 16463. Next observer evidence: {'until': 167, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3177568802424172, 'next_transition': 16614}.
<a id="trace-16614"></a>
- 167.00s–167.00s (×1), actor 1, squad 0 (trace 16614): Reorganise: completed/failed drill. Knowledge: actor memory at 165.00s, trace 16463. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1578182178045823, 'next_transition': 17083}.
<a id="trace-16619"></a>
- 167.00s–167.00s (×1), actor 1, squad 0 (trace 16619): MoveTactically. Knowledge: actor memory at 165.00s, trace 16463. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1578182178045823, 'next_transition': 17083}.
<a id="trace-16620"></a>
- 167.00s–167.00s (×1), actor 1, squad 0 (trace 16620): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 165.00s, trace 16463. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1578182178045823, 'next_transition': 17083}.
<a id="trace-17083"></a>
<a id="trace-17085"></a>
<a id="trace-17100"></a>
<a id="trace-17102"></a>
<a id="trace-17136"></a>
<a id="trace-17138"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17211"></a>
<a id="trace-17213"></a>
<a id="trace-17306"></a>
<a id="trace-17308"></a>
<a id="trace-17330"></a>
<a id="trace-17332"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17444"></a>
<a id="trace-17446"></a>
<a id="trace-17475"></a>
<a id="trace-17477"></a>
<a id="trace-17522"></a>
<a id="trace-17524"></a>
<a id="trace-17548"></a>
<a id="trace-17550"></a>
<a id="trace-17644"></a>
<a id="trace-17646"></a>
- 167.30s–175.30s (×28), actor 5, squad 0 (trace 17083): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16467. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4880832277857907, 'next_transition': 17100}.
<a id="trace-17203"></a>
- 169.70s–169.70s (×1), actor 9, squad 1 (trace 17203): ReactToContact: cover and return fire. Knowledge: actor memory at 165.00s, trace 16470. Next observer evidence: {'until': 173, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17464}.
<a id="trace-17204"></a>
- 169.70s–169.70s (×1), actor 9, squad 1 (trace 17204): bounding overwatch. Knowledge: actor memory at 165.00s, trace 16470. Next observer evidence: {'until': 173, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17464}.
<a id="trace-17205"></a>
- 169.70s–169.70s (×1), actor 9, squad 1 (trace 17205): new contact inside 100 m. Knowledge: actor memory at 165.00s, trace 16470. Next observer evidence: {'until': 173, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17464}.
<a id="trace-17464"></a>
- 173.00s–173.00s (×1), actor 9, squad 1 (trace 17464): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 170.00s, trace 17233. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3054}.
<a id="trace-17466"></a>
- 173.00s–173.00s (×1), actor 9, squad 1 (trace 17466): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 170.00s, trace 17233. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3054}.
<a id="trace-17656"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 17656): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 17569. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.13443868782829405, 'next_transition': 17707}.
<a id="trace-17698"></a>
- 175.45s–175.45s (×1), actor 1, squad 0 (trace 17698): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 175.00s, trace 17569. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.13443868782829405, 'next_transition': 17707}.
<a id="trace-17707"></a>
<a id="trace-17709"></a>
<a id="trace-17731"></a>
<a id="trace-17733"></a>
<a id="trace-17752"></a>
<a id="trace-17754"></a>
<a id="trace-17783"></a>
<a id="trace-17785"></a>
<a id="trace-17804"></a>
<a id="trace-17806"></a>
<a id="trace-17834"></a>
<a id="trace-17836"></a>
<a id="trace-17848"></a>
<a id="trace-17850"></a>
<a id="trace-17934"></a>
<a id="trace-17936"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-18011"></a>
<a id="trace-18013"></a>
<a id="trace-18044"></a>
<a id="trace-18046"></a>
<a id="trace-18077"></a>
<a id="trace-18079"></a>
<a id="trace-18104"></a>
<a id="trace-18106"></a>
<a id="trace-18157"></a>
<a id="trace-18159"></a>
<a id="trace-18180"></a>
<a id="trace-18182"></a>
<a id="trace-18204"></a>
<a id="trace-18206"></a>
<a id="trace-18224"></a>
<a id="trace-18226"></a>
<a id="trace-18312"></a>
<a id="trace-18314"></a>
<a id="trace-18330"></a>
<a id="trace-18332"></a>
<a id="trace-18350"></a>
<a id="trace-18352"></a>
<a id="trace-18368"></a>
<a id="trace-18370"></a>
<a id="trace-18390"></a>
<a id="trace-18392"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18476"></a>
<a id="trace-18478"></a>
<a id="trace-18520"></a>
<a id="trace-18522"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18625"></a>
<a id="trace-18627"></a>
<a id="trace-18650"></a>
<a id="trace-18652"></a>
<a id="trace-18685"></a>
<a id="trace-18687"></a>
<a id="trace-18706"></a>
<a id="trace-18708"></a>
<a id="trace-18732"></a>
<a id="trace-18734"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18789"></a>
<a id="trace-18791"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18867"></a>
<a id="trace-18869"></a>
<a id="trace-18896"></a>
<a id="trace-18898"></a>
<a id="trace-18990"></a>
<a id="trace-18992"></a>
<a id="trace-19023"></a>
<a id="trace-19025"></a>
<a id="trace-19058"></a>
<a id="trace-19060"></a>
<a id="trace-19077"></a>
<a id="trace-19079"></a>
<a id="trace-19142"></a>
<a id="trace-19144"></a>
<a id="trace-19159"></a>
<a id="trace-19161"></a>
<a id="trace-19178"></a>
<a id="trace-19180"></a>
<a id="trace-19190"></a>
<a id="trace-19192"></a>
<a id="trace-19290"></a>
<a id="trace-19292"></a>
<a id="trace-19318"></a>
<a id="trace-19320"></a>
<a id="trace-19329"></a>
<a id="trace-19331"></a>
<a id="trace-19346"></a>
<a id="trace-19348"></a>
<a id="trace-19361"></a>
<a id="trace-19363"></a>
<a id="trace-19381"></a>
<a id="trace-19383"></a>
<a id="trace-19418"></a>
<a id="trace-19503"></a>
<a id="trace-19505"></a>
<a id="trace-19532"></a>
<a id="trace-19534"></a>
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19596"></a>
<a id="trace-19627"></a>
<a id="trace-19714"></a>
<a id="trace-19741"></a>
<a id="trace-19762"></a>
<a id="trace-19764"></a>
<a id="trace-19792"></a>
<a id="trace-19794"></a>
<a id="trace-19828"></a>
<a id="trace-19916"></a>
<a id="trace-19918"></a>
<a id="trace-19954"></a>
<a id="trace-19956"></a>
<a id="trace-19981"></a>
<a id="trace-19983"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20095"></a>
<a id="trace-20097"></a>
<a id="trace-20190"></a>
<a id="trace-20221"></a>
<a id="trace-20244"></a>
<a id="trace-20265"></a>
<a id="trace-20267"></a>
<a id="trace-20290"></a>
<a id="trace-20292"></a>
- 175.80s–224.30s (×133), actor 5, squad 0 (trace 17707): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17572. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200023639671454, 'next_transition': 17731}.
<a id="trace-3054"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (events line 3054): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18743"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 18743): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.872022 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 18743. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19110}.
<a id="trace-18744"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 18744): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.872022 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 18744. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19110}.
<a id="trace-19110"></a>
- 197.30s–197.30s (×1), actor 9, squad 1 (trace 19110): MoveTactically. Knowledge: actor memory at 195.00s, trace 18913. Next observer evidence: None.
<a id="trace-19111"></a>
- 197.30s–197.30s (×1), actor 9, squad 1 (trace 19111): received platoon directive. Knowledge: actor memory at 195.00s, trace 18913. Next observer evidence: None.
<a id="trace-19115"></a>
- 197.35s–197.35s (×1), actor 9, squad 1 (trace 19115): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 195.00s, trace 18913. Next observer evidence: {'until': 214.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19841}.
<a id="trace-19841"></a>
- 214.65s–214.65s (×1), actor 9, squad 1 (trace 19841): ReactToContact: cover and return fire. Knowledge: actor memory at 210.00s, trace 19656. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20006}.
<a id="trace-19842"></a>
- 214.65s–214.65s (×1), actor 9, squad 1 (trace 19842): new contact inside 100 m. Knowledge: actor memory at 210.00s, trace 19656. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20006}.
<a id="trace-20006"></a>
- 217.95s–217.95s (×1), actor 9, squad 1 (trace 20006): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 215.00s, trace 19856. Next observer evidence: {'until': 229, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999966180347666, 'next_transition': 20807}.
<a id="trace-20007"></a>
- 217.95s–217.95s (×1), actor 9, squad 1 (trace 20007): rearward bound: one stationary suppressing element. Knowledge: actor memory at 215.00s, trace 19856. Next observer evidence: {'until': 229, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999966180347666, 'next_transition': 20807}.
<a id="trace-20310"></a>
- 224.35s–224.35s (×1), actor 7, squad 0 (trace 20310): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 220.00s, trace 20125. Next observer evidence: {'until': 224.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20313}.
<a id="trace-20313"></a>
- 224.40s–224.40s (×1), actor 7, squad 0 (trace 20313): Reorganise: completed/failed drill. Knowledge: actor memory at 220.00s, trace 20125. Next observer evidence: {'until': 224.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20403}.
<a id="trace-20315"></a>
- 224.40s–224.40s (×1), actor 7, squad 0 (trace 20315): MoveTactically. Knowledge: actor memory at 220.00s, trace 20125. Next observer evidence: {'until': 224.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20403}.
<a id="trace-20316"></a>
- 224.40s–224.40s (×1), actor 7, squad 0 (trace 20316): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 220.00s, trace 20125. Next observer evidence: {'until': 224.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20403}.
<a id="trace-20403"></a>
- 224.60s–224.60s (×1), actor 7, squad 0 (trace 20403): traveling overwatch. Knowledge: actor memory at 220.00s, trace 20125. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087409105060893, 'next_transition': 20563}.
<a id="trace-20404"></a>
- 224.60s–224.60s (×1), actor 7, squad 0 (trace 20404): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 220.00s, trace 20125. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087409105060893, 'next_transition': 20563}.
<a id="trace-20563"></a>
<a id="trace-20565"></a>
- 225.30s–225.30s (×2), actor 5, squad 0 (trace 20563): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 20500. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450233978584872, 'next_transition': 20589}.
<a id="trace-20589"></a>
- 225.90s–225.90s (×1), actor 7, squad 0 (trace 20589): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 225.00s, trace 20501. Next observer evidence: None.
<a id="trace-20590"></a>
- 225.90s–225.90s (×1), actor 7, squad 0 (trace 20590): MoveTactically. Knowledge: actor memory at 225.00s, trace 20501. Next observer evidence: None.
<a id="trace-20591"></a>
- 225.90s–225.90s (×1), actor 7, squad 0 (trace 20591): . Knowledge: actor memory at 225.00s, trace 20501. Next observer evidence: None.
<a id="trace-20696"></a>
- 225.95s–225.95s (×1), actor 7, squad 0 (trace 20696): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 20501. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300010679356017, 'next_transition': 20708}.
<a id="trace-20708"></a>
<a id="trace-20710"></a>
<a id="trace-20739"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20816"></a>
<a id="trace-20818"></a>
<a id="trace-20933"></a>
<a id="trace-20953"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
- 226.30s–233.30s (×11), actor 5, squad 0 (trace 20708): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 20500. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7860013282590572, 'next_transition': 20739}.
<a id="trace-20807"></a>
- 229.10s–229.10s (×1), actor 9, squad 1 (trace 20807): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 225.00s, trace 20502. Next observer evidence: {'until': 238, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21384}.
<a id="trace-20808"></a>
- 229.10s–229.10s (×1), actor 9, squad 1 (trace 20808): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 225.00s, trace 20502. Next observer evidence: {'until': 238, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21384}.
<a id="trace-3961"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (events line 3961): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599935712683714, 'next_transition': 20998}.
<a id="trace-20993"></a>
- 233.80s–233.80s (×1), actor 5, squad 0 (trace 20993): renew committed intent (75 s lifetime). Knowledge: actor memory at 233.80s, trace 20993. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599935712683714, 'next_transition': 20998}.
<a id="trace-20998"></a>
- 234.20s–234.20s (×1), actor 7, squad 0 (trace 20998): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 20843. Next observer evidence: None.
<a id="trace-20999"></a>
- 234.20s–234.20s (×1), actor 7, squad 0 (trace 20999): bounding overwatch. Knowledge: actor memory at 230.00s, trace 20843. Next observer evidence: None.
<a id="trace-21000"></a>
- 234.20s–234.20s (×1), actor 7, squad 0 (trace 21000): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 230.00s, trace 20843. Next observer evidence: None.
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21197"></a>
<a id="trace-21199"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
- 234.30s–236.30s (×6), actor 5, squad 0 (trace 21107): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 233.80s, trace 20993. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.355295761174277, 'next_transition': 21197}.
<a id="trace-21268"></a>
- 237.55s–237.55s (×1), actor 7, squad 0 (trace 21268): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 235.00s, trace 21138. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599469234852714, 'next_transition': 21393}.
<a id="trace-21269"></a>
- 237.55s–237.55s (×1), actor 7, squad 0 (trace 21269): rearward bound: one stationary suppressing element. Knowledge: actor memory at 235.00s, trace 21138. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599469234852714, 'next_transition': 21393}.
<a id="trace-21384"></a>
- 238.00s–238.00s (×1), actor 9, squad 1 (trace 21384): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 235.00s, trace 21139. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22297}.
<a id="trace-21393"></a>
<a id="trace-21395"></a>
<a id="trace-21426"></a>
<a id="trace-21428"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21543"></a>
<a id="trace-21545"></a>
<a id="trace-21573"></a>
<a id="trace-21575"></a>
<a id="trace-21600"></a>
<a id="trace-21602"></a>
<a id="trace-21630"></a>
<a id="trace-21715"></a>
<a id="trace-21717"></a>
<a id="trace-21742"></a>
<a id="trace-21744"></a>
<a id="trace-21769"></a>
- 238.30s–247.30s (×18), actor 5, squad 0 (trace 21393): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 21137. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8259580658907906, 'next_transition': 21426}.
<a id="trace-21830"></a>
- 249.20s–249.20s (×1), actor 7, squad 0 (trace 21830): NeedSupport. Knowledge: actor memory at 245.00s, trace 21656. Next observer evidence: None.
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21946"></a>
<a id="trace-21972"></a>
<a id="trace-21995"></a>
<a id="trace-22020"></a>
<a id="trace-22022"></a>
<a id="trace-22107"></a>
<a id="trace-22131"></a>
<a id="trace-22153"></a>
<a id="trace-22170"></a>
<a id="trace-22191"></a>
<a id="trace-22266"></a>
<a id="trace-22287"></a>
<a id="trace-22314"></a>
<a id="trace-22331"></a>
- 249.30s–263.30s (×18), actor 5, squad 0 (trace 21838): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 21655. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749689530670123, 'next_transition': 21917}.
<a id="trace-22297"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (trace 22297): renew committed intent (75 s lifetime). Knowledge: actor memory at 261.40s, trace 22297. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4057}.
<a id="trace-4057"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (events line 4057): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 291.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24399}.
<a id="trace-22351"></a>
- 264.25s–264.25s (×1), actor 5, squad 0 (trace 22351): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 264.25s, trace 22351. Next observer evidence: None.
<a id="trace-22353"></a>
<a id="trace-22428"></a>
<a id="trace-22444"></a>
<a id="trace-22494"></a>
<a id="trace-22565"></a>
<a id="trace-22581"></a>
<a id="trace-22599"></a>
<a id="trace-22612"></a>
<a id="trace-22631"></a>
<a id="trace-22705"></a>
<a id="trace-22732"></a>
<a id="trace-22758"></a>
<a id="trace-22873"></a>
<a id="trace-22894"></a>
<a id="trace-22923"></a>
<a id="trace-22946"></a>
<a id="trace-23019"></a>
<a id="trace-23035"></a>
<a id="trace-23049"></a>
<a id="trace-23064"></a>
<a id="trace-23087"></a>
<a id="trace-23169"></a>
<a id="trace-23197"></a>
<a id="trace-23212"></a>
<a id="trace-23239"></a>
<a id="trace-23338"></a>
<a id="trace-23367"></a>
<a id="trace-23398"></a>
<a id="trace-23470"></a>
<a id="trace-23487"></a>
<a id="trace-23508"></a>
<a id="trace-23554"></a>
<a id="trace-23628"></a>
<a id="trace-23647"></a>
<a id="trace-23662"></a>
<a id="trace-23702"></a>
<a id="trace-23803"></a>
<a id="trace-23824"></a>
<a id="trace-23837"></a>
<a id="trace-23930"></a>
<a id="trace-24102"></a>
<a id="trace-24142"></a>
<a id="trace-24163"></a>
<a id="trace-24290"></a>
<a id="trace-24390"></a>
<a id="trace-24412"></a>
<a id="trace-24446"></a>
<a id="trace-24462"></a>
<a id="trace-24567"></a>
<a id="trace-24581"></a>
<a id="trace-24595"></a>
<a id="trace-24620"></a>
<a id="trace-24695"></a>
<a id="trace-24718"></a>
<a id="trace-24738"></a>
<a id="trace-24758"></a>
<a id="trace-24774"></a>
<a id="trace-24872"></a>
<a id="trace-24907"></a>
<a id="trace-24934"></a>
<a id="trace-25005"></a>
<a id="trace-25022"></a>
<a id="trace-25041"></a>
<a id="trace-25082"></a>
<a id="trace-25182"></a>
<a id="trace-25196"></a>
<a id="trace-25215"></a>
- 264.30s–358.30s (×67), actor 5, squad 0 (trace 22353): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 264.25s, trace 22351. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22428}.
<a id="trace-24399"></a>
- 330.40s–330.40s (×1), actor 5, squad 1 (trace 24399): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.40s, trace 24399. Next observer evidence: {'until': 330.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4289}.
<a id="trace-4289"></a>
<a id="trace-4395"></a>
- 330.40s–358.00s (×2), actor 5, squad 1 (events line 4289): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 358, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4395}.
<a id="trace-25210"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 25210): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 25210. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-25211"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 25211): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 25211. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

237 matched order/radio deliveries; 352 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.411s; maximum 5.350s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3257: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3258: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3259: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3260: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3261: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3262: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3263: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3264: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3265: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3266: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3714: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3715: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3716: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3717: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3718: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3719: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3720: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3721: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3722: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3723: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4926: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4935: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4936: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4937: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4938: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4939: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4940: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4941: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4942: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4943: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4944: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 5863: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5866: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5869: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5872: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5873: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5874: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5875: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5876: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5877: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5878: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5879: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5880: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5881: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6495: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6496: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6498: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6500: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6501: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6504: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6505: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6506: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6507: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6508: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6509: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6510: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6511: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6512: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6513: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 6796: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 6797: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6831: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6833: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6835: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6836: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6839: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6840: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6841: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6842: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6843: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6844: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6845: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6846: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6847: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6848: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7213: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7215: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7217: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7218: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 7220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7221: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7222: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7223: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7224: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7225: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7226: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7227: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7228: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 7229: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 7230: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7462: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7464: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7466: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7467: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 7469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7470: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7471: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7472: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7473: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7474: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7475: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7476: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7477: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7478: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7479: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 7684: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 7685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 7686: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 7687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 7688: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 7689: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 7690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 7691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 7692: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 7693: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 7694: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 7695: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 7696: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 7697: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 7698: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 7699: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 7700: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 7701: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 8146: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 8147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 8148: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 8149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 8150: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 8151: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 8152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 8153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 8154: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 8155: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 8156: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 8157: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 8158: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 8159: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 8160: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 8161: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 8162: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 8163: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 8393: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 8394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 8395: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 8396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 8397: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 8398: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 8399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 8400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 8401: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 8402: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 8403: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 8404: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 8405: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 8406: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 8407: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 8408: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 8409: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 8410: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 8592: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 8593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 8594: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 8595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 8596: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 8597: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 8598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 8599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 8600: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 8601: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 8602: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 8603: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 8604: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 8605: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 8606: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 8607: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 8608: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 8609: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 8779: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 8780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 8781: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 8782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 8783: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 8784: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 8785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 8786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 8787: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 8788: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 8789: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 8790: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 8791: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 8792: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 8793: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 8794: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 8795: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 8796: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 8978: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 8979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 8980: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 8981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 8982: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 8983: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 8984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 8985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 8986: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 8987: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 8988: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 8989: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 8990: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 8991: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 8992: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 8993: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 8994: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 8995: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 9054: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 9055: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 9169: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 9170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 9171: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 9172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 9173: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 9174: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 9175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 9176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 9177: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 9178: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 9179: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 9180: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 9181: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 9182: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 9183: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 9184: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 9185: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 9186: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 9599: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 9600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 9601: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 9602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 9603: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 9604: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 9605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 9606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 9607: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 9608: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 9609: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 9610: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 9611: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 9612: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 9613: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 9614: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 9615: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 9616: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 9836: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 9837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 9838: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 9839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 9840: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 9841: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 9842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 9843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 9844: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 9845: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 9846: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 9847: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 9848: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 9849: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 9850: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 9851: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 9852: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 9853: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 10129: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 10130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 10131: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 10132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 10133: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 10134: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 10135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 10136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 10137: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 10138: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 10139: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 10140: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 10141: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 10142: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 10143: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 10144: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 10145: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 10146: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 10352: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 10353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 10354: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 10355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 10356: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 10357: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 10358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 10359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 10360: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 10361: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 10362: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 10363: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 10364: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 10365: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 10366: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 10367: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 10368: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 10369: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 10648: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 10711: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 10712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 10713: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 10714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 10715: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 10716: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 10717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 10718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 10719: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 10720: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 10721: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 10722: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 10723: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 10724: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 10725: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 10726: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 10727: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 10728: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 10954: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 10955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 10956: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 10957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 10958: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 10959: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 10960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 10961: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 10962: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 10963: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 10964: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 10965: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 10966: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 10967: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 10968: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 10969: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 10970: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 10971: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 11386: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 11387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 11388: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 11389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 11390: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 11391: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 11392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 11393: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 11394: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 11395: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 11396: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 11397: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 11398: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 11399: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 11400: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 11401: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 11402: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 11403: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 11636: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 11637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 11638: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 11639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11640: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 11641: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 11642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 11643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 11644: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 11645: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 11646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 11647: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 11648: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 11649: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 11650: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 11651: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 11652: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 11653: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 12046: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 12047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 12048: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 12049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 12050: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12051: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 12052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 12053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 12054: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 12055: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 12056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 12057: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12058: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12059: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12060: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12061: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 12062: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 12063: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13180: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 13181: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 13182: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 13185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 13187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13188: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13189: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13191: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 13192: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 13193: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 13194: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13195: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 13196: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 13197: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 13297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 13298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 13299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 13300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 13479: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 13480: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 13481: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 13483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 13484: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 13485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 13486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 13487: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 13488: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 13489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 13490: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 13491: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 13492: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 13493: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13494: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 13495: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 13496: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 15797: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 15798: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 15799: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 15800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15801: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 15802: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 15803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 15805: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 15806: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 15807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 15808: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 15809: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15810: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15811: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 15812: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 15813: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 15814: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.75s leader 5, trace 16442: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.75s leader 5, trace 16443: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.75s leader 5, trace 16444: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.75s leader 5, trace 16445: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16463: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 16464: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 16465: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16467: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16468: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16471: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16472: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16474: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16475: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16476: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16477: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16478: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16479: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16480: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 17227: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 17228: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17230: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 17231: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 17232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17233: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17234: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17235: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17237: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17238: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17239: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17240: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17241: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17242: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 17243: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 17569: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 17570: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17571: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17572: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17573: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17575: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17576: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17577: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17579: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17580: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17581: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17582: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17583: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17584: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17585: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 17861: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17862: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17863: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17864: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17866: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17867: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17868: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17870: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17871: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17872: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17873: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17874: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17875: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17876: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18236: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18237: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18238: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18239: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 18240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18241: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18242: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18243: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18245: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18246: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18247: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18248: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18249: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18250: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18251: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 18548: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18549: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18550: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18551: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 18552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18553: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18554: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18555: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18557: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18558: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18559: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18560: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18561: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18562: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18563: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 18743: estimate 11.47; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 18744: estimate 11.47; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 18908: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18909: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 18910: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 18911: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 18912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 18913: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 18914: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 18915: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 18916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18917: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 18918: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18919: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18920: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18921: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18922: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 18923: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19203: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19204: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19205: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19206: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 19207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19208: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19209: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19210: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19212: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19213: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19214: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19215: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19216: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19217: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19218: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 19439: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19440: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19441: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 19442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19443: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19444: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19445: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19447: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19448: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19449: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19450: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19451: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19452: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19453: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19653: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19654: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 19655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 19656: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19657: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19658: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19660: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19661: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19662: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19663: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19664: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19665: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19666: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19853: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 19854: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 19855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 19856: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19857: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19858: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19860: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19861: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19862: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19863: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19864: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19865: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19866: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 20123: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 20124: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 20125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20126: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20127: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20128: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20130: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20131: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20132: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20133: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20134: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20135: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20136: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20500: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 20501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20502: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20503: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20504: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20506: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20507: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20508: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20509: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20510: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20511: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20512: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20842: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 20843: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 20844: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20845: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20846: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20848: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20849: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20850: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20851: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20852: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20853: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20854: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.80s leader 5, trace 20993: estimate 11.41; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 21137: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 21138: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 21139: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 21140: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 21141: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 21142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 21143: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 21144: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 21145: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 21146: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 21147: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 21148: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21149: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 21455: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 21456: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21457: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21458: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 21459: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 21460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 21461: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 21462: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 21463: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 21464: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 21465: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 21466: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21467: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 21655: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 21656: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21657: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21658: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21659: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21661: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21662: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21663: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21664: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 21665: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21666: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21667: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21858: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 21859: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21860: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21861: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21862: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21864: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21865: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21866: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21867: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21868: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21869: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21870: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 22046: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 22047: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 22048: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 22049: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 22050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 22051: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 22052: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 22053: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 22054: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 22055: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 22056: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 22057: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 22208: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 22209: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 22210: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 22211: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 22212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 22213: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 22214: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 22215: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 22216: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 22217: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 22218: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 22219: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 22297: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 264.25s leader 5, trace 22351: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 22370: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 22371: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 22372: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 22373: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 22374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 22375: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 22376: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 22377: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 22378: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 22379: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 22380: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 22381: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 22507: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 22508: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22509: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22510: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22512: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22513: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22514: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22515: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22516: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22517: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22518: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 22647: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 22648: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22649: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22650: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22652: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22653: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22654: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22655: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22656: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22657: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22658: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 22799: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 22800: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22801: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22802: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22804: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 22805: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22806: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22807: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22808: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22809: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22810: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 22961: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22962: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22963: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22964: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22966: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22967: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22968: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22969: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22970: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22971: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22972: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 23110: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 23111: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 23112: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 23113: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 23114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 23115: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 23116: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 23117: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 23118: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 23119: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 23120: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 23121: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 23257: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 23258: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23259: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 23260: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 23261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23262: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 23263: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23264: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23265: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23266: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23267: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23268: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 23411: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 23412: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23413: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23414: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 23415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23416: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23417: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23418: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23419: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23420: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23421: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23422: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 23569: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 23570: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23571: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23572: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 23573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23574: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 23575: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23576: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23577: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 23578: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23579: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23580: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 23725: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 23726: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 23727: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23728: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 23729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23730: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 23731: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23732: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23733: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 23734: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23735: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23736: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23870: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 23871: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23872: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23873: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23875: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23876: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23877: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23878: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23879: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23880: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23881: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 24023: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 24024: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24025: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24026: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24028: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 24029: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24030: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24031: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24032: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24033: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24034: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 24180: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 24181: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24182: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 24183: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 24184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24185: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 24186: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24187: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24188: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24189: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24190: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24191: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 24331: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 24332: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 24333: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 24334: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 24335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24336: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 24337: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24338: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24339: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 24340: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24341: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24342: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.40s leader 5, trace 24399: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 24482: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 24483: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24484: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24485: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24487: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24488: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24489: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24490: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 24491: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24492: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24493: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24637: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 24638: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24639: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24640: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24642: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24643: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24644: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24645: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24646: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24647: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24648: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24790: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 24791: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24792: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24793: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24795: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24796: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24797: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24798: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24799: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24800: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24801: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24949: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24950: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24952: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24953: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24954: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24955: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24956: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24957: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24958: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 25097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 25098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25099: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25100: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25102: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25103: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25104: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25105: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25106: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25107: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25108: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 25210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 25211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 25251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 25252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Soren killed in action
- 1: Ash killed in action
- 1: Moss incapacitated
- 1: Rook killed in action
- 1: Tern incapacitated
- 1: Reed killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
