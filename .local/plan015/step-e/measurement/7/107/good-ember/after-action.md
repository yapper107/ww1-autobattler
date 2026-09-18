# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/7/107/good-ember/battle-107-1789673769502008379`

## Battle summary

**Ember** · 360 s · 398 shots.

### Turning points

- 28.8s, squad 4: contact (events line 268). First recorded contact.
- 40.3s, squad 0: withdrawal ([trace 3712](#trace-3712)). 53.8s, squad 0: advanced tactically.
- 52.8s, squad 0: help call ([trace 4958](#trace-4958)). No completion observed before termination.
- 69.7s, squad 0: withdrawal ([trace 5776](#trace-5776)). 90.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 141.4s, squad 0: withdrawal ([trace 9188](#trace-9188)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 3 shots, 4/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 395 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 991](#trace-991)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 36.1s, squad 0 chose took cover and returned fire ([trace 2315](#trace-2315)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 990](#trace-990)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687499272509863, 'next_transition': 1008}.
- 67.5s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.902926 retreat threshold=0.220000 initiative=requires intent ([trace 5722](#trace-5722)). Following evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34361401865016417, 'next_transition': 5729}.

### Communication

131 matched deliveries (mean 0.27s, max 5.10s); 101 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.80s, squad 4, contact, evidence events line 268: First recorded contact; .
- 40.30s, squad 0, withdrawal, evidence 3712: BreakContact: believed ratio at least two without superiority; 53.8s, squad 0: advanced tactically.
- 52.80s, squad 0, help call, evidence 4958: NeedSupport; No completion observed before termination.
- 69.65s, squad 0, withdrawal, evidence 5776: BreakContact: believed ratio at least two without superiority; 90.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 141.40s, squad 0, withdrawal, evidence 9188: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.950334428296634, 'next_transition': 513}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.950334428296634, 'next_transition': 513}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.950334428296634, 'next_transition': 513}.
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
<a id="trace-943"></a>
<a id="trace-966"></a>
<a id="trace-989"></a>
<a id="trace-1010"></a>
<a id="trace-1030"></a>
<a id="trace-1049"></a>
<a id="trace-1074"></a>
<a id="trace-1091"></a>
<a id="trace-1172"></a>
<a id="trace-1186"></a>
<a id="trace-1209"></a>
<a id="trace-1228"></a>
<a id="trace-1243"></a>
<a id="trace-1256"></a>
<a id="trace-1278"></a>
<a id="trace-1290"></a>
<a id="trace-1306"></a>
<a id="trace-1318"></a>
<a id="trace-1399"></a>
<a id="trace-1420"></a>
<a id="trace-1432"></a>
<a id="trace-1443"></a>
<a id="trace-1465"></a>
<a id="trace-1475"></a>
<a id="trace-1737"></a>
<a id="trace-1753"></a>
<a id="trace-1775"></a>
<a id="trace-1795"></a>
<a id="trace-1879"></a>
<a id="trace-1894"></a>
<a id="trace-1919"></a>
<a id="trace-1933"></a>
<a id="trace-1948"></a>
<a id="trace-1961"></a>
<a id="trace-1981"></a>
<a id="trace-1996"></a>
<a id="trace-2014"></a>
<a id="trace-2027"></a>
<a id="trace-2114"></a>
<a id="trace-2124"></a>
<a id="trace-2137"></a>
<a id="trace-2145"></a>
<a id="trace-2162"></a>
<a id="trace-2175"></a>
<a id="trace-2188"></a>
<a id="trace-2198"></a>
<a id="trace-2213"></a>
<a id="trace-2217"></a>
<a id="trace-2295"></a>
<a id="trace-2306"></a>
<a id="trace-2697"></a>
<a id="trace-3457"></a>
<a id="trace-3479"></a>
<a id="trace-3507"></a>
<a id="trace-3539"></a>
<a id="trace-3561"></a>
<a id="trace-3586"></a>
<a id="trace-3603"></a>
<a id="trace-3709"></a>
<a id="trace-4096"></a>
<a id="trace-4109"></a>
<a id="trace-4129"></a>
<a id="trace-4171"></a>
<a id="trace-4184"></a>
<a id="trace-4218"></a>
<a id="trace-4254"></a>
<a id="trace-4280"></a>
<a id="trace-4309"></a>
<a id="trace-4405"></a>
<a id="trace-4435"></a>
<a id="trace-4475"></a>
<a id="trace-4517"></a>
<a id="trace-4557"></a>
<a id="trace-4598"></a>
<a id="trace-4656"></a>
<a id="trace-4705"></a>
<a id="trace-4755"></a>
<a id="trace-4799"></a>
<a id="trace-4890"></a>
<a id="trace-4906"></a>
<a id="trace-4927"></a>
<a id="trace-4932"></a>
<a id="trace-4945"></a>
<a id="trace-4956"></a>
<a id="trace-4972"></a>
<a id="trace-4975"></a>
<a id="trace-5127"></a>
<a id="trace-5139"></a>
<a id="trace-5216"></a>
<a id="trace-5221"></a>
<a id="trace-5243"></a>
<a id="trace-5256"></a>
<a id="trace-5267"></a>
<a id="trace-5273"></a>
<a id="trace-5283"></a>
<a id="trace-5288"></a>
<a id="trace-5294"></a>
<a id="trace-5302"></a>
<a id="trace-5379"></a>
<a id="trace-5390"></a>
<a id="trace-5400"></a>
<a id="trace-5406"></a>
<a id="trace-5419"></a>
<a id="trace-5426"></a>
<a id="trace-5437"></a>
<a id="trace-5447"></a>
<a id="trace-5460"></a>
<a id="trace-5468"></a>
<a id="trace-5552"></a>
<a id="trace-5687"></a>
<a id="trace-5703"></a>
<a id="trace-5712"></a>
<a id="trace-5721"></a>
<a id="trace-5731"></a>
<a id="trace-5747"></a>
<a id="trace-5758"></a>
<a id="trace-5770"></a>
<a id="trace-5834"></a>
<a id="trace-5914"></a>
<a id="trace-5925"></a>
<a id="trace-5941"></a>
<a id="trace-5947"></a>
<a id="trace-5964"></a>
<a id="trace-5970"></a>
<a id="trace-5982"></a>
<a id="trace-5988"></a>
<a id="trace-5998"></a>
<a id="trace-6003"></a>
<a id="trace-6075"></a>
<a id="trace-6080"></a>
<a id="trace-6093"></a>
<a id="trace-6100"></a>
<a id="trace-6112"></a>
<a id="trace-6117"></a>
<a id="trace-6129"></a>
<a id="trace-6140"></a>
<a id="trace-6147"></a>
<a id="trace-6152"></a>
<a id="trace-6230"></a>
<a id="trace-6238"></a>
<a id="trace-6250"></a>
<a id="trace-6259"></a>
<a id="trace-6270"></a>
<a id="trace-6274"></a>
<a id="trace-6363"></a>
<a id="trace-6369"></a>
<a id="trace-6393"></a>
<a id="trace-6401"></a>
<a id="trace-6486"></a>
<a id="trace-6494"></a>
<a id="trace-6508"></a>
<a id="trace-6516"></a>
<a id="trace-6524"></a>
<a id="trace-6531"></a>
<a id="trace-6544"></a>
<a id="trace-6554"></a>
<a id="trace-6569"></a>
<a id="trace-6576"></a>
<a id="trace-6659"></a>
<a id="trace-6667"></a>
<a id="trace-6712"></a>
<a id="trace-6722"></a>
<a id="trace-6741"></a>
<a id="trace-6757"></a>
<a id="trace-6779"></a>
<a id="trace-6798"></a>
<a id="trace-6813"></a>
<a id="trace-6821"></a>
<a id="trace-6897"></a>
<a id="trace-6903"></a>
<a id="trace-6917"></a>
<a id="trace-6925"></a>
<a id="trace-6939"></a>
<a id="trace-6944"></a>
<a id="trace-6958"></a>
<a id="trace-6967"></a>
<a id="trace-6981"></a>
<a id="trace-6996"></a>
<a id="trace-7075"></a>
<a id="trace-7140"></a>
<a id="trace-7156"></a>
<a id="trace-7166"></a>
<a id="trace-7181"></a>
<a id="trace-7189"></a>
<a id="trace-7200"></a>
<a id="trace-7209"></a>
<a id="trace-7222"></a>
<a id="trace-7233"></a>
<a id="trace-7310"></a>
<a id="trace-7321"></a>
<a id="trace-7340"></a>
<a id="trace-7350"></a>
<a id="trace-7361"></a>
<a id="trace-7368"></a>
<a id="trace-7384"></a>
<a id="trace-7394"></a>
<a id="trace-7407"></a>
<a id="trace-7414"></a>
<a id="trace-7491"></a>
<a id="trace-7501"></a>
<a id="trace-7511"></a>
<a id="trace-7521"></a>
<a id="trace-7538"></a>
<a id="trace-7545"></a>
<a id="trace-7562"></a>
<a id="trace-7575"></a>
<a id="trace-7636"></a>
<a id="trace-7647"></a>
<a id="trace-7731"></a>
<a id="trace-7738"></a>
<a id="trace-7752"></a>
<a id="trace-7761"></a>
<a id="trace-7893"></a>
<a id="trace-7902"></a>
<a id="trace-7911"></a>
<a id="trace-7918"></a>
<a id="trace-7931"></a>
<a id="trace-7942"></a>
<a id="trace-8021"></a>
<a id="trace-8033"></a>
<a id="trace-8049"></a>
<a id="trace-8056"></a>
<a id="trace-8076"></a>
<a id="trace-8130"></a>
<a id="trace-8141"></a>
<a id="trace-8150"></a>
<a id="trace-8168"></a>
<a id="trace-8175"></a>
<a id="trace-8248"></a>
<a id="trace-8255"></a>
<a id="trace-8262"></a>
<a id="trace-8266"></a>
<a id="trace-8273"></a>
<a id="trace-8277"></a>
<a id="trace-8295"></a>
<a id="trace-8308"></a>
<a id="trace-8316"></a>
<a id="trace-8320"></a>
<a id="trace-8395"></a>
<a id="trace-8398"></a>
<a id="trace-8404"></a>
<a id="trace-8409"></a>
<a id="trace-8420"></a>
<a id="trace-8558"></a>
<a id="trace-8571"></a>
<a id="trace-8577"></a>
<a id="trace-8591"></a>
<a id="trace-8596"></a>
<a id="trace-8668"></a>
<a id="trace-8676"></a>
<a id="trace-8692"></a>
<a id="trace-8705"></a>
<a id="trace-8773"></a>
<a id="trace-8784"></a>
<a id="trace-9053"></a>
<a id="trace-9069"></a>
<a id="trace-9081"></a>
<a id="trace-9088"></a>
<a id="trace-9168"></a>
<a id="trace-9181"></a>
<a id="trace-9187"></a>
<a id="trace-9320"></a>
<a id="trace-9335"></a>
<a id="trace-9341"></a>
<a id="trace-9349"></a>
<a id="trace-9353"></a>
<a id="trace-9368"></a>
<a id="trace-9380"></a>
<a id="trace-9448"></a>
<a id="trace-9454"></a>
<a id="trace-9460"></a>
<a id="trace-9468"></a>
<a id="trace-9475"></a>
<a id="trace-9483"></a>
<a id="trace-9488"></a>
<a id="trace-9493"></a>
<a id="trace-9502"></a>
<a id="trace-9508"></a>
<a id="trace-9574"></a>
<a id="trace-9579"></a>
<a id="trace-9584"></a>
<a id="trace-9588"></a>
<a id="trace-9593"></a>
<a id="trace-9598"></a>
<a id="trace-9603"></a>
<a id="trace-9608"></a>
<a id="trace-9616"></a>
<a id="trace-9620"></a>
<a id="trace-9683"></a>
<a id="trace-9687"></a>
<a id="trace-9691"></a>
<a id="trace-9693"></a>
<a id="trace-9696"></a>
<a id="trace-9701"></a>
<a id="trace-9704"></a>
<a id="trace-9707"></a>
<a id="trace-9717"></a>
<a id="trace-9722"></a>
<a id="trace-9787"></a>
<a id="trace-9791"></a>
<a id="trace-9797"></a>
<a id="trace-9801"></a>
<a id="trace-9805"></a>
<a id="trace-9810"></a>
<a id="trace-9815"></a>
<a id="trace-9819"></a>
<a id="trace-9829"></a>
<a id="trace-9834"></a>
<a id="trace-9900"></a>
<a id="trace-9904"></a>
<a id="trace-9910"></a>
<a id="trace-9913"></a>
<a id="trace-9918"></a>
<a id="trace-9923"></a>
<a id="trace-9927"></a>
<a id="trace-9932"></a>
<a id="trace-9943"></a>
<a id="trace-9949"></a>
<a id="trace-10020"></a>
<a id="trace-10025"></a>
<a id="trace-10032"></a>
<a id="trace-10035"></a>
<a id="trace-10040"></a>
<a id="trace-10044"></a>
<a id="trace-10049"></a>
<a id="trace-10054"></a>
<a id="trace-10061"></a>
<a id="trace-10067"></a>
<a id="trace-10133"></a>
<a id="trace-10138"></a>
<a id="trace-10145"></a>
<a id="trace-10152"></a>
<a id="trace-10162"></a>
<a id="trace-10168"></a>
<a id="trace-10173"></a>
<a id="trace-10177"></a>
<a id="trace-10185"></a>
<a id="trace-10191"></a>
<a id="trace-10255"></a>
<a id="trace-10259"></a>
<a id="trace-10265"></a>
<a id="trace-10269"></a>
<a id="trace-10274"></a>
<a id="trace-10281"></a>
<a id="trace-10289"></a>
<a id="trace-10295"></a>
<a id="trace-10307"></a>
<a id="trace-10312"></a>
<a id="trace-10379"></a>
<a id="trace-10383"></a>
<a id="trace-10388"></a>
<a id="trace-10392"></a>
<a id="trace-10397"></a>
<a id="trace-10401"></a>
<a id="trace-10407"></a>
<a id="trace-10411"></a>
<a id="trace-10421"></a>
<a id="trace-10428"></a>
<a id="trace-10495"></a>
<a id="trace-10498"></a>
<a id="trace-10506"></a>
<a id="trace-10514"></a>
<a id="trace-10520"></a>
<a id="trace-10525"></a>
<a id="trace-10530"></a>
<a id="trace-10534"></a>
<a id="trace-10542"></a>
<a id="trace-10548"></a>
<a id="trace-10614"></a>
<a id="trace-10618"></a>
<a id="trace-10626"></a>
<a id="trace-10629"></a>
<a id="trace-10636"></a>
<a id="trace-10641"></a>
<a id="trace-10647"></a>
<a id="trace-10656"></a>
<a id="trace-10666"></a>
<a id="trace-10671"></a>
<a id="trace-10736"></a>
<a id="trace-10739"></a>
<a id="trace-10747"></a>
<a id="trace-10750"></a>
<a id="trace-10756"></a>
<a id="trace-10760"></a>
<a id="trace-10767"></a>
<a id="trace-10772"></a>
<a id="trace-10781"></a>
<a id="trace-10787"></a>
<a id="trace-10852"></a>
<a id="trace-10857"></a>
<a id="trace-10869"></a>
<a id="trace-10872"></a>
<a id="trace-10878"></a>
<a id="trace-10882"></a>
<a id="trace-10888"></a>
<a id="trace-10892"></a>
<a id="trace-10901"></a>
<a id="trace-10909"></a>
<a id="trace-10973"></a>
<a id="trace-10977"></a>
<a id="trace-10985"></a>
<a id="trace-10988"></a>
<a id="trace-10993"></a>
<a id="trace-10999"></a>
<a id="trace-11009"></a>
<a id="trace-11015"></a>
<a id="trace-11023"></a>
<a id="trace-11029"></a>
<a id="trace-11094"></a>
<a id="trace-11099"></a>
<a id="trace-11106"></a>
<a id="trace-11110"></a>
<a id="trace-11115"></a>
<a id="trace-11119"></a>
<a id="trace-11124"></a>
<a id="trace-11130"></a>
<a id="trace-11139"></a>
<a id="trace-11144"></a>
<a id="trace-11215"></a>
<a id="trace-11220"></a>
<a id="trace-11227"></a>
<a id="trace-11231"></a>
<a id="trace-11236"></a>
<a id="trace-11243"></a>
<a id="trace-11248"></a>
<a id="trace-11252"></a>
<a id="trace-11260"></a>
<a id="trace-11265"></a>
<a id="trace-11331"></a>
<a id="trace-11336"></a>
<a id="trace-11342"></a>
<a id="trace-11345"></a>
<a id="trace-11352"></a>
<a id="trace-11362"></a>
<a id="trace-11368"></a>
<a id="trace-11374"></a>
<a id="trace-11384"></a>
<a id="trace-11389"></a>
<a id="trace-11454"></a>
<a id="trace-11457"></a>
<a id="trace-11464"></a>
<a id="trace-11467"></a>
<a id="trace-11472"></a>
<a id="trace-11476"></a>
<a id="trace-11483"></a>
<a id="trace-11488"></a>
<a id="trace-11496"></a>
<a id="trace-11508"></a>
<a id="trace-11576"></a>
<a id="trace-11579"></a>
<a id="trace-11587"></a>
<a id="trace-11590"></a>
<a id="trace-11596"></a>
<a id="trace-11600"></a>
<a id="trace-11605"></a>
<a id="trace-11609"></a>
<a id="trace-11617"></a>
<a id="trace-11623"></a>
<a id="trace-11689"></a>
<a id="trace-11693"></a>
<a id="trace-11702"></a>
<a id="trace-11705"></a>
<a id="trace-11715"></a>
<a id="trace-11723"></a>
<a id="trace-11729"></a>
<a id="trace-11733"></a>
<a id="trace-11741"></a>
<a id="trace-11746"></a>
<a id="trace-11811"></a>
<a id="trace-11815"></a>
<a id="trace-11820"></a>
<a id="trace-11824"></a>
<a id="trace-11829"></a>
<a id="trace-11836"></a>
<a id="trace-11841"></a>
<a id="trace-11848"></a>
<a id="trace-11863"></a>
<a id="trace-11870"></a>
<a id="trace-11935"></a>
<a id="trace-11938"></a>
<a id="trace-11944"></a>
<a id="trace-11948"></a>
<a id="trace-11952"></a>
<a id="trace-11957"></a>
<a id="trace-11962"></a>
<a id="trace-11966"></a>
<a id="trace-11975"></a>
<a id="trace-11982"></a>
<a id="trace-12049"></a>
<a id="trace-12056"></a>
<a id="trace-12066"></a>
<a id="trace-12069"></a>
<a id="trace-12076"></a>
<a id="trace-12081"></a>
<a id="trace-12085"></a>
<a id="trace-12090"></a>
<a id="trace-12098"></a>
<a id="trace-12103"></a>
<a id="trace-12168"></a>
<a id="trace-12172"></a>
<a id="trace-12179"></a>
<a id="trace-12183"></a>
<a id="trace-12192"></a>
<a id="trace-12196"></a>
<a id="trace-12203"></a>
<a id="trace-12212"></a>
<a id="trace-12221"></a>
<a id="trace-12227"></a>
<a id="trace-12292"></a>
<a id="trace-12295"></a>
<a id="trace-12301"></a>
<a id="trace-12304"></a>
<a id="trace-12311"></a>
<a id="trace-12315"></a>
<a id="trace-12321"></a>
<a id="trace-12325"></a>
<a id="trace-12337"></a>
<a id="trace-12343"></a>
<a id="trace-12409"></a>
<a id="trace-12417"></a>
<a id="trace-12425"></a>
<a id="trace-12428"></a>
<a id="trace-12433"></a>
<a id="trace-12437"></a>
<a id="trace-12443"></a>
<a id="trace-12447"></a>
<a id="trace-12456"></a>
<a id="trace-12461"></a>
<a id="trace-12527"></a>
<a id="trace-12533"></a>
<a id="trace-12540"></a>
<a id="trace-12544"></a>
<a id="trace-12549"></a>
<a id="trace-12555"></a>
<a id="trace-12566"></a>
<a id="trace-12570"></a>
<a id="trace-12579"></a>
<a id="trace-12584"></a>
<a id="trace-12649"></a>
<a id="trace-12653"></a>
<a id="trace-12659"></a>
<a id="trace-12664"></a>
<a id="trace-12670"></a>
<a id="trace-12675"></a>
<a id="trace-12682"></a>
<a id="trace-12686"></a>
<a id="trace-12694"></a>
<a id="trace-12701"></a>
<a id="trace-12771"></a>
<a id="trace-12776"></a>
<a id="trace-12782"></a>
<a id="trace-12785"></a>
<a id="trace-12791"></a>
<a id="trace-12796"></a>
<a id="trace-12801"></a>
<a id="trace-12808"></a>
<a id="trace-12816"></a>
<a id="trace-12821"></a>
<a id="trace-12886"></a>
<a id="trace-12891"></a>
<a id="trace-12898"></a>
<a id="trace-12901"></a>
<a id="trace-12912"></a>
<a id="trace-12918"></a>
<a id="trace-12923"></a>
<a id="trace-12929"></a>
<a id="trace-12936"></a>
<a id="trace-12943"></a>
<a id="trace-13010"></a>
<a id="trace-13013"></a>
<a id="trace-13019"></a>
<a id="trace-13022"></a>
<a id="trace-13028"></a>
<a id="trace-13034"></a>
<a id="trace-13039"></a>
<a id="trace-13043"></a>
<a id="trace-13053"></a>
<a id="trace-13063"></a>
<a id="trace-13130"></a>
<a id="trace-13134"></a>
<a id="trace-13142"></a>
<a id="trace-13146"></a>
<a id="trace-13154"></a>
<a id="trace-13158"></a>
<a id="trace-13164"></a>
<a id="trace-13168"></a>
<a id="trace-13175"></a>
<a id="trace-13180"></a>
<a id="trace-13247"></a>
<a id="trace-13251"></a>
<a id="trace-13256"></a>
<a id="trace-13266"></a>
<a id="trace-13275"></a>
<a id="trace-13279"></a>
<a id="trace-13285"></a>
<a id="trace-13291"></a>
<a id="trace-13299"></a>
<a id="trace-13304"></a>
<a id="trace-13369"></a>
<a id="trace-13372"></a>
<a id="trace-13378"></a>
<a id="trace-13382"></a>
<a id="trace-13389"></a>
<a id="trace-13394"></a>
<a id="trace-13401"></a>
<a id="trace-13406"></a>
<a id="trace-13417"></a>
<a id="trace-13425"></a>
<a id="trace-13493"></a>
<a id="trace-13496"></a>
<a id="trace-13502"></a>
<a id="trace-13505"></a>
<a id="trace-13511"></a>
<a id="trace-13516"></a>
<a id="trace-13522"></a>
<a id="trace-13527"></a>
<a id="trace-13534"></a>
<a id="trace-13541"></a>
<a id="trace-13607"></a>
<a id="trace-13612"></a>
<a id="trace-13624"></a>
<a id="trace-13631"></a>
<a id="trace-13636"></a>
<a id="trace-13640"></a>
<a id="trace-13646"></a>
<a id="trace-13651"></a>
<a id="trace-13662"></a>
<a id="trace-13727"></a>
<a id="trace-13730"></a>
<a id="trace-13736"></a>
<a id="trace-13742"></a>
<a id="trace-13748"></a>
<a id="trace-13755"></a>
<a id="trace-13767"></a>
<a id="trace-13771"></a>
<a id="trace-13780"></a>
<a id="trace-13786"></a>
<a id="trace-13850"></a>
<a id="trace-13854"></a>
<a id="trace-13860"></a>
<a id="trace-13863"></a>
<a id="trace-13868"></a>
<a id="trace-13872"></a>
<a id="trace-13880"></a>
<a id="trace-13884"></a>
<a id="trace-13896"></a>
<a id="trace-13901"></a>
<a id="trace-13970"></a>
<a id="trace-13984"></a>
<a id="trace-13988"></a>
<a id="trace-13993"></a>
<a id="trace-13997"></a>
<a id="trace-14002"></a>
<a id="trace-14006"></a>
<a id="trace-14015"></a>
<a id="trace-14020"></a>
<a id="trace-14086"></a>
<a id="trace-14089"></a>
<a id="trace-14098"></a>
<a id="trace-14104"></a>
<a id="trace-14110"></a>
<a id="trace-14119"></a>
<a id="trace-14126"></a>
<a id="trace-14130"></a>
<a id="trace-14138"></a>
<a id="trace-14143"></a>
<a id="trace-14209"></a>
<a id="trace-14217"></a>
<a id="trace-14221"></a>
<a id="trace-14226"></a>
<a id="trace-14232"></a>
<a id="trace-14240"></a>
<a id="trace-14245"></a>
<a id="trace-14253"></a>
<a id="trace-14260"></a>
<a id="trace-14333"></a>
<a id="trace-14336"></a>
<a id="trace-14343"></a>
<a id="trace-14346"></a>
<a id="trace-14351"></a>
<a id="trace-14355"></a>
<a id="trace-14361"></a>
<a id="trace-14366"></a>
<a id="trace-14373"></a>
<a id="trace-14381"></a>
<a id="trace-14449"></a>
<a id="trace-14452"></a>
<a id="trace-14458"></a>
<a id="trace-14463"></a>
<a id="trace-14478"></a>
<a id="trace-14483"></a>
<a id="trace-14487"></a>
<a id="trace-14494"></a>
<a id="trace-14501"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48299101370162295, 'next_transition': 351}.
<a id="trace-513"></a>
<a id="trace-568"></a>
<a id="trace-585"></a>
<a id="trace-607"></a>
<a id="trace-628"></a>
<a id="trace-648"></a>
<a id="trace-730"></a>
<a id="trace-739"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 513): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.846727056046636, 'next_transition': 568}.
<a id="trace-745"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 745): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36162161238151275, 'next_transition': 941}.
<a id="trace-941"></a>
<a id="trace-964"></a>
<a id="trace-987"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 941): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 655. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275016915707186, 'next_transition': 964}.
<a id="trace-131"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 131): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687499272509863, 'next_transition': 1008}.
<a id="trace-990"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 990): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 990. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687499272509863, 'next_transition': 1008}.
<a id="trace-991"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 991): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 991. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687499272509863, 'next_transition': 1008}.
<a id="trace-1008"></a>
<a id="trace-1028"></a>
<a id="trace-1047"></a>
<a id="trace-1170"></a>
<a id="trace-1207"></a>
<a id="trace-1254"></a>
<a id="trace-1288"></a>
<a id="trace-1304"></a>
<a id="trace-1316"></a>
<a id="trace-1397"></a>
<a id="trace-1418"></a>
<a id="trace-1441"></a>
<a id="trace-1463"></a>
<a id="trace-1473"></a>
- 12.70s–22.75s (×14), actor 5, squad 0 (trace 1008): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 991. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8299769486992714, 'next_transition': 1028}.
<a id="trace-1480"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1480): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1323. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2950079221871468, 'next_transition': 1735}.
<a id="trace-1481"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1481): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1323. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2950079221871468, 'next_transition': 1735}.
<a id="trace-1735"></a>
<a id="trace-1751"></a>
<a id="trace-1773"></a>
<a id="trace-1877"></a>
<a id="trace-1892"></a>
<a id="trace-1917"></a>
<a id="trace-1931"></a>
<a id="trace-1946"></a>
<a id="trace-1959"></a>
<a id="trace-1979"></a>
<a id="trace-1994"></a>
<a id="trace-2112"></a>
<a id="trace-2173"></a>
<a id="trace-2196"></a>
<a id="trace-2293"></a>
<a id="trace-2304"></a>
- 23.25s–35.75s (×16), actor 5, squad 0 (trace 1735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1326. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3267542172181514, 'next_transition': 1751}.
<a id="trace-2315"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2315): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2222. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2695}.
<a id="trace-2316"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2316): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2222. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2695}.
<a id="trace-2317"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2317): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2222. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2695}.
<a id="trace-2695"></a>
- 36.25s–36.25s (×1), actor 5, squad 0 (trace 2695): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2225. Next observer evidence: None.
<a id="trace-2701"></a>
<a id="trace-3075"></a>
- 36.35s–36.60s (×2), actor 0, squad 0 (trace 2701): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2222. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08488333172982522, 'next_transition': 3075}.
<a id="trace-3455"></a>
<a id="trace-3477"></a>
<a id="trace-3505"></a>
<a id="trace-3559"></a>
<a id="trace-3584"></a>
<a id="trace-3601"></a>
<a id="trace-3707"></a>
- 36.75s–40.25s (×7), actor 5, squad 0 (trace 3455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2225. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547089545104364, 'next_transition': 3477}.
<a id="trace-3712"></a>
- 40.30s–40.30s (×1), actor 0, squad 0 (trace 3712): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 3616. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22513847816059088, 'next_transition': 4094}.
<a id="trace-3713"></a>
- 40.30s–40.30s (×1), actor 0, squad 0 (trace 3713): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 3616. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22513847816059088, 'next_transition': 4094}.
<a id="trace-4094"></a>
<a id="trace-4107"></a>
- 40.75s–41.25s (×2), actor 5, squad 0 (trace 4094): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3619. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8924901847175617, 'next_transition': 4107}.
<a id="trace-4149"></a>
- 42.05s–42.05s (×1), actor 0, squad 0 (trace 4149): Fixing. Knowledge: actor memory at 40.00s, trace 3616. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22544246556857905, 'next_transition': 4169}.
<a id="trace-4169"></a>
<a id="trace-4182"></a>
<a id="trace-4216"></a>
<a id="trace-4307"></a>
<a id="trace-4403"></a>
<a id="trace-4433"></a>
<a id="trace-4473"></a>
<a id="trace-4515"></a>
<a id="trace-4555"></a>
<a id="trace-4703"></a>
<a id="trace-4753"></a>
<a id="trace-4797"></a>
<a id="trace-4888"></a>
<a id="trace-4904"></a>
<a id="trace-4925"></a>
<a id="trace-4930"></a>
<a id="trace-4943"></a>
<a id="trace-4954"></a>
- 42.25s–52.75s (×18), actor 5, squad 0 (trace 4169): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3619. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41998723819903, 'next_transition': 4182}.
<a id="trace-4957"></a>
- 52.80s–52.80s (×1), actor 1, squad 0 (trace 4957): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 4811. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710139769150184, 'next_transition': 4970}.
<a id="trace-4958"></a>
- 52.80s–52.80s (×1), actor 1, squad 0 (trace 4958): NeedSupport. Knowledge: actor memory at 50.00s, trace 4811. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710139769150184, 'next_transition': 4970}.
<a id="trace-4970"></a>
- 53.25s–53.25s (×1), actor 5, squad 0 (trace 4970): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4813. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560118213575227, 'next_transition': 4976}.
<a id="trace-4976"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 4976): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 4811. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339961099185225, 'next_transition': 5125}.
<a id="trace-4980"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 4980): MoveTactically. Knowledge: actor memory at 50.00s, trace 4811. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339961099185225, 'next_transition': 5125}.
<a id="trace-4981"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 4981): Reorganise complete. Knowledge: actor memory at 50.00s, trace 4811. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339961099185225, 'next_transition': 5125}.
<a id="trace-5125"></a>
<a id="trace-5137"></a>
<a id="trace-5214"></a>
<a id="trace-5219"></a>
<a id="trace-5286"></a>
<a id="trace-5300"></a>
<a id="trace-5377"></a>
<a id="trace-5398"></a>
<a id="trace-5404"></a>
<a id="trace-5417"></a>
<a id="trace-5424"></a>
<a id="trace-5435"></a>
<a id="trace-5445"></a>
<a id="trace-5458"></a>
<a id="trace-5466"></a>
- 54.25s–64.75s (×15), actor 5, squad 0 (trace 5125): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4813. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6306804353664347, 'next_transition': 5137}.
<a id="trace-5489"></a>
- 65.05s–65.05s (×1), actor 1, squad 0 (trace 5489): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 65.00s, trace 5476. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150104847661381, 'next_transition': 5550}.
<a id="trace-5550"></a>
- 65.25s–65.25s (×1), actor 5, squad 0 (trace 5550): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5478. Next observer evidence: None.
<a id="trace-5553"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 5553): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 5476. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629981063977631, 'next_transition': 5685}.
<a id="trace-5556"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 5556): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 5476. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629981063977631, 'next_transition': 5685}.
<a id="trace-5557"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 5557): Reorganise complete: known contact. Knowledge: actor memory at 65.00s, trace 5476. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629981063977631, 'next_transition': 5685}.
<a id="trace-5685"></a>
<a id="trace-5701"></a>
<a id="trace-5710"></a>
<a id="trace-5719"></a>
- 65.75s–67.25s (×4), actor 5, squad 0 (trace 5685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5478. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1024927116055243, 'next_transition': 5701}.
<a id="trace-635"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (events line 635): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5722"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 5722): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.902926 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 5722. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34361401865016417, 'next_transition': 5729}.
<a id="trace-5723"></a>
- 67.45s–67.45s (×1), actor 5, squad 0 (trace 5723): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.902926 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 5723. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34361401865016417, 'next_transition': 5729}.
<a id="trace-5729"></a>
<a id="trace-5745"></a>
<a id="trace-5756"></a>
<a id="trace-5768"></a>
- 67.75s–69.25s (×4), actor 5, squad 0 (trace 5729): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.45s, trace 5723. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250206635791553, 'next_transition': 5745}.
<a id="trace-5776"></a>
- 69.65s–69.65s (×1), actor 1, squad 0 (trace 5776): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 5476. Next observer evidence: None.
<a id="trace-5777"></a>
- 69.65s–69.65s (×1), actor 1, squad 0 (trace 5777): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 5476. Next observer evidence: None.
<a id="trace-5832"></a>
<a id="trace-5912"></a>
<a id="trace-5923"></a>
<a id="trace-5939"></a>
<a id="trace-5945"></a>
<a id="trace-5962"></a>
<a id="trace-5980"></a>
<a id="trace-6001"></a>
<a id="trace-6073"></a>
<a id="trace-6091"></a>
<a id="trace-6098"></a>
<a id="trace-6110"></a>
<a id="trace-6115"></a>
<a id="trace-6127"></a>
<a id="trace-6138"></a>
<a id="trace-6145"></a>
<a id="trace-6150"></a>
<a id="trace-6228"></a>
<a id="trace-6236"></a>
<a id="trace-6257"></a>
<a id="trace-6268"></a>
<a id="trace-6272"></a>
- 69.75s–82.75s (×22), actor 5, squad 0 (trace 5832): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.45s, trace 5723. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5609919362972261, 'next_transition': 5912}.
<a id="trace-6283"></a>
- 83.05s–83.05s (×1), actor 1, squad 0 (trace 6283): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 6156. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0393869461243204, 'next_transition': 6391}.
<a id="trace-6305"></a>
- 83.05s–83.05s (×1), actor 1, squad 0 (trace 6305): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 6156. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0393869461243204, 'next_transition': 6391}.
<a id="trace-6391"></a>
<a id="trace-6399"></a>
<a id="trace-6484"></a>
<a id="trace-6492"></a>
<a id="trace-6506"></a>
<a id="trace-6522"></a>
<a id="trace-6529"></a>
<a id="trace-6542"></a>
<a id="trace-6552"></a>
<a id="trace-6567"></a>
<a id="trace-6574"></a>
- 84.25s–89.75s (×11), actor 5, squad 0 (trace 6391): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 6158. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149955993343396, 'next_transition': 6399}.
<a id="trace-6648"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 6648): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 6580. Next observer evidence: None.
<a id="trace-6657"></a>
<a id="trace-6665"></a>
- 90.25s–90.75s (×2), actor 5, squad 0 (trace 6657): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 6582. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449791120650298, 'next_transition': 6665}.
<a id="trace-6675"></a>
- 91.20s–91.20s (×1), actor 1, squad 0 (trace 6675): MoveTactically. Knowledge: actor memory at 90.00s, trace 6580. Next observer evidence: None.
<a id="trace-6676"></a>
- 91.20s–91.20s (×1), actor 1, squad 0 (trace 6676): received platoon directive. Knowledge: actor memory at 90.00s, trace 6580. Next observer evidence: None.
<a id="trace-6710"></a>
<a id="trace-6720"></a>
<a id="trace-6739"></a>
<a id="trace-6755"></a>
<a id="trace-6777"></a>
<a id="trace-6819"></a>
<a id="trace-6901"></a>
<a id="trace-6915"></a>
<a id="trace-6923"></a>
<a id="trace-6937"></a>
<a id="trace-6956"></a>
<a id="trace-6979"></a>
<a id="trace-6994"></a>
<a id="trace-7073"></a>
- 91.25s–100.25s (×14), actor 5, squad 0 (trace 6710): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 6582. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15752273052245666, 'next_transition': 6720}.
<a id="trace-7081"></a>
- 100.55s–100.55s (×1), actor 1, squad 0 (trace 7081): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 7001. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875041730633547, 'next_transition': 7154}.
<a id="trace-7154"></a>
<a id="trace-7179"></a>
<a id="trace-7187"></a>
<a id="trace-7198"></a>
<a id="trace-7207"></a>
<a id="trace-7220"></a>
<a id="trace-7231"></a>
<a id="trace-7308"></a>
<a id="trace-7319"></a>
<a id="trace-7338"></a>
<a id="trace-7348"></a>
<a id="trace-7359"></a>
<a id="trace-7366"></a>
<a id="trace-7382"></a>
<a id="trace-7392"></a>
<a id="trace-7405"></a>
<a id="trace-7412"></a>
<a id="trace-7489"></a>
<a id="trace-7499"></a>
<a id="trace-7509"></a>
<a id="trace-7519"></a>
<a id="trace-7536"></a>
<a id="trace-7543"></a>
<a id="trace-7560"></a>
- 101.25s–113.25s (×24), actor 5, squad 0 (trace 7154): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 7003. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.008112925513637, 'next_transition': 7179}.
<a id="trace-7567"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 7567): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 7417. Next observer evidence: None.
<a id="trace-7573"></a>
- 113.75s–113.75s (×1), actor 5, squad 0 (trace 7573): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7419. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450458901819205, 'next_transition': 7583}.
<a id="trace-7583"></a>
- 114.20s–114.20s (×1), actor 1, squad 0 (trace 7583): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 7417. Next observer evidence: None.
<a id="trace-7634"></a>
<a id="trace-7645"></a>
<a id="trace-7729"></a>
<a id="trace-7736"></a>
<a id="trace-7750"></a>
- 114.25s–116.25s (×5), actor 5, squad 0 (trace 7634): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7419. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512141290367434, 'next_transition': 7645}.
<a id="trace-7762"></a>
- 116.80s–116.80s (×1), actor 1, squad 0 (trace 7762): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 7658. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7891}.
<a id="trace-7891"></a>
<a id="trace-7909"></a>
<a id="trace-7916"></a>
<a id="trace-7929"></a>
<a id="trace-7940"></a>
<a id="trace-8019"></a>
<a id="trace-8031"></a>
<a id="trace-8047"></a>
<a id="trace-8054"></a>
<a id="trace-8074"></a>
- 117.25s–122.25s (×10), actor 5, squad 0 (trace 7891): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 7660. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512575221992442, 'next_transition': 7909}.
<a id="trace-8081"></a>
- 122.65s–122.65s (×1), actor 1, squad 0 (trace 8081): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 7945. Next observer evidence: None.
<a id="trace-8128"></a>
<a id="trace-8148"></a>
<a id="trace-8166"></a>
<a id="trace-8246"></a>
<a id="trace-8253"></a>
<a id="trace-8260"></a>
<a id="trace-8271"></a>
<a id="trace-8275"></a>
<a id="trace-8293"></a>
<a id="trace-8306"></a>
- 122.75s–128.80s (×10), actor 5, squad 0 (trace 8128): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7947. Next observer evidence: {'until': 123.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8148}.
<a id="trace-8422"></a>
- 132.55s–132.55s (×1), actor 4, squad 0 (trace 8422): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 8330. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21006221744937434, 'next_transition': 8556}.
<a id="trace-8556"></a>
<a id="trace-8569"></a>
<a id="trace-8666"></a>
<a id="trace-8674"></a>
<a id="trace-8690"></a>
<a id="trace-8703"></a>
- 132.80s–136.80s (×6), actor 5, squad 0 (trace 8556): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 8331. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1549948035046353, 'next_transition': 8569}.
<a id="trace-8710"></a>
- 137.05s–137.05s (×1), actor 4, squad 0 (trace 8710): traveling overwatch. Knowledge: actor memory at 135.00s, trace 8599. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299993723738068, 'next_transition': 8771}.
<a id="trace-8711"></a>
- 137.05s–137.05s (×1), actor 4, squad 0 (trace 8711): current contact unknown for 10 s. Knowledge: actor memory at 135.00s, trace 8599. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299993723738068, 'next_transition': 8771}.
<a id="trace-8771"></a>
<a id="trace-8782"></a>
- 137.30s–137.80s (×2), actor 5, squad 0 (trace 8771): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 8600. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6944589555890097, 'next_transition': 8782}.
<a id="trace-1066"></a>
- 137.85s–137.85s (×1), actor 5, squad 0 (events line 1066): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8785"></a>
- 137.85s–137.85s (×1), actor 5, squad 0 (trace 8785): renew committed intent (75 s lifetime). Knowledge: actor memory at 137.85s, trace 8785. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299961117334322, 'next_transition': 8792}.
<a id="trace-8792"></a>
- 138.00s–138.00s (×1), actor 4, squad 0 (trace 8792): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 8599. Next observer evidence: None.
<a id="trace-8793"></a>
- 138.00s–138.00s (×1), actor 4, squad 0 (trace 8793): bounding overwatch. Knowledge: actor memory at 135.00s, trace 8599. Next observer evidence: None.
<a id="trace-8794"></a>
<a id="trace-8921"></a>
- 138.00s–138.05s (×2), actor 4, squad 0 (trace 8794): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 8599. Next observer evidence: None.
<a id="trace-9067"></a>
<a id="trace-9086"></a>
<a id="trace-9179"></a>
<a id="trace-9185"></a>
- 138.80s–141.30s (×4), actor 5, squad 0 (trace 9067): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.85s, trace 8785. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2863800397728646, 'next_transition': 9086}.
<a id="trace-9188"></a>
- 141.40s–141.40s (×1), actor 4, squad 0 (trace 9188): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 9096. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24558732232932734, 'next_transition': 9333}.
<a id="trace-9189"></a>
- 141.40s–141.40s (×1), actor 4, squad 0 (trace 9189): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 9096. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24558732232932734, 'next_transition': 9333}.
<a id="trace-9333"></a>
- 142.30s–142.30s (×1), actor 5, squad 0 (trace 9333): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9097. Next observer evidence: {'until': 142.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9338}.
<a id="trace-9338"></a>
- 142.50s–142.50s (×1), actor 4, squad 0 (trace 9338): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 140.00s, trace 9096. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9347}.
<a id="trace-9347"></a>
<a id="trace-9366"></a>
<a id="trace-9452"></a>
<a id="trace-9466"></a>
<a id="trace-9473"></a>
<a id="trace-9481"></a>
<a id="trace-9486"></a>
<a id="trace-9491"></a>
<a id="trace-9500"></a>
<a id="trace-9506"></a>
<a id="trace-9572"></a>
<a id="trace-9586"></a>
<a id="trace-9591"></a>
<a id="trace-9596"></a>
<a id="trace-9601"></a>
<a id="trace-9606"></a>
- 143.30s–153.80s (×16), actor 5, squad 0 (trace 9347): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9097. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9366}.

## Net delivery

131 matched order/radio deliveries; 101 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.273s; maximum 5.100s. Message-level evidence is in the companion JSON.

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
- 12.25s leader 5, trace 990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2036: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2037: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2038: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2039: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2040: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2041: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2228: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2229: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2230: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2231: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2232: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2233: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3616: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3621: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3622: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3623: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3624: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3625: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3626: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3627: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4327: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4331: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4332: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4333: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4334: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4335: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4336: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4337: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4338: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4813: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4814: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4815: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4816: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4817: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4818: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4819: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4820: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4821: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5148: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5149: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5150: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5151: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5152: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5153: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5154: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5155: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5156: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5306: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5308: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5309: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5310: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5311: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5312: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5313: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5314: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5315: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5316: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5476: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5478: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5479: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5480: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5481: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5482: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5483: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5484: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5485: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 5722: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 5723: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5838: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5840: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5841: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5842: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5843: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5844: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5845: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5846: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5847: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6007: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 6009: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 6010: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6011: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6012: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6013: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6014: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6015: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6016: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6156: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 6158: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 6159: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6160: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6161: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6162: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6163: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6164: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6165: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 6408: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 6409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 6410: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 6411: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 6412: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 6413: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 6414: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 6415: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 6416: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 6417: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 6580: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 6581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 6582: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 6583: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 6584: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 6585: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 6586: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 6587: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 6588: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 6589: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6826: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6828: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6829: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6830: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6831: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6832: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6833: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6834: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6835: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7001: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 7003: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 7004: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7005: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7006: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 7007: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7008: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7009: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7010: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 7240: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 7241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 7242: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 7243: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 7244: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 7245: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 7246: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 7247: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 7248: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 7249: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7417: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 7418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7419: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7420: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7421: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7422: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7423: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7424: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7425: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7426: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 7658: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 7659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7660: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7661: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 7662: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7663: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7664: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7665: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7666: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7667: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7945: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7947: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7948: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7949: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7950: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7951: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7952: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7953: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7954: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8183: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8184: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8185: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8186: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8187: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8188: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8189: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8190: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8331: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8332: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 8333: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 8334: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 8335: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 8336: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 8337: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 8338: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 8599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 8600: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 8601: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 8602: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 8603: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 8604: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 8605: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 8606: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 8607: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.85s leader 5, trace 8785: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 9096: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 9097: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 9098: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 9099: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 9100: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 9101: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 9102: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 9103: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 9104: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 9382: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 9383: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 9384: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 9385: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 9386: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 9387: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 9388: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 9389: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 9390: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 9510: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 9511: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 9512: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 9513: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 9514: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 9515: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 9516: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 9517: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 9621: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 9622: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 9623: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 9624: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 9625: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 9626: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 9627: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 9628: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9723: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9724: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 9725: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9726: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 9727: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9728: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9729: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9730: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9836: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9837: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9838: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9839: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 9840: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9841: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9842: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9843: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9957: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9958: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9959: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9960: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 9961: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9962: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9963: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9964: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 10070: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 10071: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 10072: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 10073: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 10074: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 10075: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 10076: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 10077: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 10192: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 10193: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 10194: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 10195: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 10196: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 10197: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 10198: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 10199: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10316: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10317: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 10318: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10319: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 10320: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10321: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10322: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 10323: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10431: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10432: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10433: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10434: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 10435: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10436: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10437: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10438: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10550: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10551: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10552: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10553: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 10554: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10555: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10556: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10557: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10673: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10674: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10675: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10676: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 10677: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10678: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10679: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10680: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10789: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10790: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10791: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10792: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 10793: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10794: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10795: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10796: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10910: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10911: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10912: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10913: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 10914: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10915: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10916: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10917: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11031: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11032: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11033: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11034: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 11035: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11036: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11037: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11038: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11147: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11148: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11149: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11150: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 11151: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11152: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11153: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11154: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11267: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11268: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11269: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11270: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 11271: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11272: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11273: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11274: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11391: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11392: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11393: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11394: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 11395: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11396: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11397: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11398: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11510: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 11511: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 11512: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11513: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 11514: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11515: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11516: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 11517: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11624: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11625: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11626: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11627: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 11628: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11629: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11630: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 11631: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11750: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11751: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 11752: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11753: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11754: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 11755: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 11875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 11988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 12109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 12229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 12230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 12231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 12233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 12344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 12345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 12346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 12348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 12351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 12468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 12471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 12589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 12592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 12707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 12827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 12830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 12949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 12952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 13066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 13068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 13182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 13183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 13184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 13186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 13189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 13309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 13312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 13429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 13431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 13434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 13547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 13550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 13668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 13671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 13787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 13791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 13794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 13905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 13909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 13912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 14024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 14026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 14029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 14147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 14149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 14152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 14268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 14270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 14273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 14387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 14506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Reed killed in action
- 1: Rook incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
