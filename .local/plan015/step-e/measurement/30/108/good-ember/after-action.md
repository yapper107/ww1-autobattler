# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/30/108/good-ember/battle-108-1789674343483520827`

## Battle summary

**Ember** · 360 s · 349 shots.

### Turning points

- 27.0s, squad 4: contact (events line 253). First recorded contact.
- 55.2s, squad 0: help call ([trace 5718](#trace-5718)). No completion observed before termination.
- 153.1s, squad 0: help call ([trace 15597](#trace-15597)). No completion observed before termination.
- 159.4s, squad 0: help call ([trace 16337](#trace-16337)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 54 shots, 5/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 220 shots, 4/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 75 shots, 0/2 lost.

### Decisions and attribution

At 141.5s, squad 0 chose prepared a base of fire ([trace 12065](#trace-12065)), followed by 1 shots and 0 own casualties; estimate 6.8 against 0 distinct squad-reported contacts; At 141.5s, squad 0 chose advanced tactically ([trace 14245](#trace-14245)), followed by 1 shots and 0 own casualties; estimate 6.8 against 0 distinct squad-reported contacts; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1360](#trace-1360)). Following evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.070683593854728, 'next_transition': 2135}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 2948](#trace-2948)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149994827446398, 'next_transition': 3027}.

### Communication

202 matched deliveries (mean 0.50s, max 5.25s); 507 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 27.00s, squad 4, contact, evidence events line 253: First recorded contact; .
- 55.15s, squad 0, help call, evidence 5718: NeedSupport; No completion observed before termination.
- 153.10s, squad 0, help call, evidence 15597: NeedSupport; No completion observed before termination.
- 159.40s, squad 0, help call, evidence 16337: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.51847206350385, 'next_transition': 937}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.51847206350385, 'next_transition': 937}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.51847206350385, 'next_transition': 937}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1135}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1135}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1135}.
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
<a id="trace-1255"></a>
<a id="trace-1257"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1299"></a>
<a id="trace-1301"></a>
<a id="trace-1334"></a>
<a id="trace-1336"></a>
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
<a id="trace-2050"></a>
<a id="trace-2052"></a>
<a id="trace-2080"></a>
<a id="trace-2082"></a>
<a id="trace-2107"></a>
<a id="trace-2109"></a>
<a id="trace-2131"></a>
<a id="trace-2133"></a>
<a id="trace-2322"></a>
<a id="trace-2324"></a>
<a id="trace-2352"></a>
<a id="trace-2354"></a>
<a id="trace-2378"></a>
<a id="trace-2380"></a>
<a id="trace-2413"></a>
<a id="trace-2415"></a>
<a id="trace-2442"></a>
<a id="trace-2444"></a>
<a id="trace-2463"></a>
<a id="trace-2465"></a>
<a id="trace-2490"></a>
<a id="trace-2492"></a>
<a id="trace-2735"></a>
<a id="trace-2737"></a>
<a id="trace-2754"></a>
<a id="trace-2756"></a>
<a id="trace-2784"></a>
<a id="trace-2786"></a>
<a id="trace-2870"></a>
<a id="trace-2872"></a>
<a id="trace-2887"></a>
<a id="trace-2889"></a>
<a id="trace-2928"></a>
<a id="trace-2930"></a>
<a id="trace-2957"></a>
<a id="trace-2959"></a>
<a id="trace-3031"></a>
<a id="trace-3033"></a>
<a id="trace-3056"></a>
<a id="trace-3058"></a>
<a id="trace-3083"></a>
<a id="trace-3085"></a>
<a id="trace-3103"></a>
<a id="trace-3105"></a>
<a id="trace-3122"></a>
<a id="trace-3124"></a>
<a id="trace-3142"></a>
<a id="trace-3144"></a>
<a id="trace-3234"></a>
<a id="trace-3236"></a>
<a id="trace-3246"></a>
<a id="trace-3248"></a>
<a id="trace-3419"></a>
<a id="trace-3421"></a>
<a id="trace-3437"></a>
<a id="trace-3439"></a>
<a id="trace-3471"></a>
<a id="trace-3473"></a>
<a id="trace-3489"></a>
<a id="trace-3491"></a>
<a id="trace-3515"></a>
<a id="trace-3517"></a>
<a id="trace-3535"></a>
<a id="trace-3537"></a>
<a id="trace-3562"></a>
<a id="trace-3564"></a>
<a id="trace-3581"></a>
<a id="trace-3583"></a>
<a id="trace-3662"></a>
<a id="trace-3664"></a>
<a id="trace-3672"></a>
<a id="trace-3674"></a>
<a id="trace-3973"></a>
<a id="trace-3975"></a>
<a id="trace-4278"></a>
<a id="trace-4280"></a>
<a id="trace-4320"></a>
<a id="trace-4322"></a>
<a id="trace-4359"></a>
<a id="trace-4361"></a>
<a id="trace-4395"></a>
<a id="trace-4397"></a>
<a id="trace-4430"></a>
<a id="trace-4432"></a>
<a id="trace-4468"></a>
<a id="trace-4470"></a>
<a id="trace-4817"></a>
<a id="trace-4819"></a>
<a id="trace-4921"></a>
<a id="trace-4923"></a>
<a id="trace-4963"></a>
<a id="trace-4965"></a>
<a id="trace-4991"></a>
<a id="trace-4993"></a>
<a id="trace-5006"></a>
<a id="trace-5008"></a>
<a id="trace-5048"></a>
<a id="trace-5050"></a>
<a id="trace-5073"></a>
<a id="trace-5075"></a>
<a id="trace-5109"></a>
<a id="trace-5111"></a>
<a id="trace-5127"></a>
<a id="trace-5129"></a>
<a id="trace-5150"></a>
<a id="trace-5152"></a>
<a id="trace-5168"></a>
<a id="trace-5170"></a>
<a id="trace-5253"></a>
<a id="trace-5255"></a>
<a id="trace-5270"></a>
<a id="trace-5272"></a>
<a id="trace-5291"></a>
<a id="trace-5293"></a>
<a id="trace-5309"></a>
<a id="trace-5311"></a>
<a id="trace-5329"></a>
<a id="trace-5331"></a>
<a id="trace-5343"></a>
<a id="trace-5345"></a>
<a id="trace-5361"></a>
<a id="trace-5363"></a>
<a id="trace-5379"></a>
<a id="trace-5381"></a>
<a id="trace-5397"></a>
<a id="trace-5399"></a>
<a id="trace-5410"></a>
<a id="trace-5412"></a>
<a id="trace-5498"></a>
<a id="trace-5500"></a>
<a id="trace-5516"></a>
<a id="trace-5518"></a>
<a id="trace-5531"></a>
<a id="trace-5533"></a>
<a id="trace-5543"></a>
<a id="trace-5545"></a>
<a id="trace-5566"></a>
<a id="trace-5568"></a>
<a id="trace-5585"></a>
<a id="trace-5587"></a>
<a id="trace-5599"></a>
<a id="trace-5601"></a>
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-5638"></a>
<a id="trace-5640"></a>
<a id="trace-5650"></a>
<a id="trace-5652"></a>
<a id="trace-5733"></a>
<a id="trace-5735"></a>
<a id="trace-5750"></a>
<a id="trace-5752"></a>
<a id="trace-5766"></a>
<a id="trace-5768"></a>
<a id="trace-5776"></a>
<a id="trace-5778"></a>
<a id="trace-5793"></a>
<a id="trace-5795"></a>
<a id="trace-5804"></a>
<a id="trace-5806"></a>
<a id="trace-5818"></a>
<a id="trace-5820"></a>
<a id="trace-5828"></a>
<a id="trace-5830"></a>
<a id="trace-5844"></a>
<a id="trace-5846"></a>
<a id="trace-5855"></a>
<a id="trace-5857"></a>
<a id="trace-5933"></a>
<a id="trace-5935"></a>
<a id="trace-5950"></a>
<a id="trace-5952"></a>
<a id="trace-5967"></a>
<a id="trace-5969"></a>
<a id="trace-5975"></a>
<a id="trace-5977"></a>
<a id="trace-5992"></a>
<a id="trace-5994"></a>
<a id="trace-6002"></a>
<a id="trace-6004"></a>
<a id="trace-6015"></a>
<a id="trace-6017"></a>
<a id="trace-6025"></a>
<a id="trace-6027"></a>
<a id="trace-6040"></a>
<a id="trace-6042"></a>
<a id="trace-6048"></a>
<a id="trace-6050"></a>
<a id="trace-6125"></a>
<a id="trace-6127"></a>
<a id="trace-6149"></a>
<a id="trace-6151"></a>
<a id="trace-6155"></a>
<a id="trace-6157"></a>
<a id="trace-6171"></a>
<a id="trace-6173"></a>
<a id="trace-6181"></a>
<a id="trace-6183"></a>
<a id="trace-6194"></a>
<a id="trace-6196"></a>
<a id="trace-6204"></a>
<a id="trace-6206"></a>
<a id="trace-6218"></a>
<a id="trace-6220"></a>
<a id="trace-6226"></a>
<a id="trace-6228"></a>
<a id="trace-6301"></a>
<a id="trace-6303"></a>
<a id="trace-6314"></a>
<a id="trace-6316"></a>
<a id="trace-6328"></a>
<a id="trace-6330"></a>
<a id="trace-6336"></a>
<a id="trace-6338"></a>
<a id="trace-6366"></a>
<a id="trace-6368"></a>
<a id="trace-6377"></a>
<a id="trace-6379"></a>
<a id="trace-6391"></a>
<a id="trace-6393"></a>
<a id="trace-6401"></a>
<a id="trace-6403"></a>
<a id="trace-6415"></a>
<a id="trace-6417"></a>
<a id="trace-6424"></a>
<a id="trace-6426"></a>
<a id="trace-6500"></a>
<a id="trace-6502"></a>
<a id="trace-6511"></a>
<a id="trace-6513"></a>
<a id="trace-6525"></a>
<a id="trace-6527"></a>
<a id="trace-6533"></a>
<a id="trace-6535"></a>
<a id="trace-6549"></a>
<a id="trace-6551"></a>
<a id="trace-6562"></a>
<a id="trace-6564"></a>
<a id="trace-6577"></a>
<a id="trace-6579"></a>
<a id="trace-6598"></a>
<a id="trace-6600"></a>
<a id="trace-6614"></a>
<a id="trace-6616"></a>
<a id="trace-6621"></a>
<a id="trace-6623"></a>
<a id="trace-6697"></a>
<a id="trace-6699"></a>
<a id="trace-6706"></a>
<a id="trace-6708"></a>
<a id="trace-6721"></a>
<a id="trace-6723"></a>
<a id="trace-6729"></a>
<a id="trace-6731"></a>
<a id="trace-6742"></a>
<a id="trace-6744"></a>
<a id="trace-6752"></a>
<a id="trace-6754"></a>
<a id="trace-6766"></a>
<a id="trace-6768"></a>
<a id="trace-6778"></a>
<a id="trace-6780"></a>
<a id="trace-6794"></a>
<a id="trace-6796"></a>
<a id="trace-6805"></a>
<a id="trace-6807"></a>
<a id="trace-6887"></a>
<a id="trace-6889"></a>
<a id="trace-6903"></a>
<a id="trace-6905"></a>
<a id="trace-6916"></a>
<a id="trace-6918"></a>
<a id="trace-6927"></a>
<a id="trace-6929"></a>
<a id="trace-6939"></a>
<a id="trace-6941"></a>
<a id="trace-6950"></a>
<a id="trace-6952"></a>
<a id="trace-6967"></a>
<a id="trace-6969"></a>
<a id="trace-6975"></a>
<a id="trace-6977"></a>
<a id="trace-6989"></a>
<a id="trace-6991"></a>
<a id="trace-6997"></a>
<a id="trace-6999"></a>
<a id="trace-7071"></a>
<a id="trace-7073"></a>
<a id="trace-7087"></a>
<a id="trace-7089"></a>
<a id="trace-7104"></a>
<a id="trace-7106"></a>
<a id="trace-7112"></a>
<a id="trace-7114"></a>
<a id="trace-7133"></a>
<a id="trace-7135"></a>
<a id="trace-7147"></a>
<a id="trace-7149"></a>
<a id="trace-7164"></a>
<a id="trace-7166"></a>
<a id="trace-7177"></a>
<a id="trace-7179"></a>
<a id="trace-7191"></a>
<a id="trace-7193"></a>
<a id="trace-7199"></a>
<a id="trace-7201"></a>
<a id="trace-7273"></a>
<a id="trace-7275"></a>
<a id="trace-7284"></a>
<a id="trace-7286"></a>
<a id="trace-7298"></a>
<a id="trace-7300"></a>
<a id="trace-7306"></a>
<a id="trace-7308"></a>
<a id="trace-7321"></a>
<a id="trace-7323"></a>
<a id="trace-7331"></a>
<a id="trace-7333"></a>
<a id="trace-7351"></a>
<a id="trace-7353"></a>
<a id="trace-7366"></a>
<a id="trace-7368"></a>
<a id="trace-7381"></a>
<a id="trace-7383"></a>
<a id="trace-7393"></a>
<a id="trace-7395"></a>
<a id="trace-7468"></a>
<a id="trace-7470"></a>
<a id="trace-7478"></a>
<a id="trace-7480"></a>
<a id="trace-7495"></a>
<a id="trace-7497"></a>
<a id="trace-7506"></a>
<a id="trace-7508"></a>
<a id="trace-7518"></a>
<a id="trace-7520"></a>
<a id="trace-7528"></a>
<a id="trace-7530"></a>
<a id="trace-7541"></a>
<a id="trace-7543"></a>
<a id="trace-7553"></a>
<a id="trace-7555"></a>
<a id="trace-7569"></a>
<a id="trace-7571"></a>
<a id="trace-7578"></a>
<a id="trace-7580"></a>
<a id="trace-7658"></a>
<a id="trace-7660"></a>
<a id="trace-7667"></a>
<a id="trace-7669"></a>
<a id="trace-7685"></a>
<a id="trace-7687"></a>
<a id="trace-7697"></a>
<a id="trace-7699"></a>
<a id="trace-7709"></a>
<a id="trace-7711"></a>
<a id="trace-7721"></a>
<a id="trace-7723"></a>
<a id="trace-7739"></a>
<a id="trace-7741"></a>
<a id="trace-7747"></a>
<a id="trace-7749"></a>
<a id="trace-7762"></a>
<a id="trace-7764"></a>
<a id="trace-7770"></a>
<a id="trace-7772"></a>
<a id="trace-7845"></a>
<a id="trace-7847"></a>
<a id="trace-7856"></a>
<a id="trace-7858"></a>
<a id="trace-7873"></a>
<a id="trace-7875"></a>
<a id="trace-7889"></a>
<a id="trace-7891"></a>
<a id="trace-7899"></a>
<a id="trace-7901"></a>
<a id="trace-7909"></a>
<a id="trace-7911"></a>
<a id="trace-7926"></a>
<a id="trace-7928"></a>
<a id="trace-7940"></a>
<a id="trace-7942"></a>
<a id="trace-7958"></a>
<a id="trace-7960"></a>
<a id="trace-7966"></a>
<a id="trace-7968"></a>
<a id="trace-8042"></a>
<a id="trace-8044"></a>
<a id="trace-8054"></a>
<a id="trace-8056"></a>
<a id="trace-8069"></a>
<a id="trace-8071"></a>
<a id="trace-8078"></a>
<a id="trace-8080"></a>
<a id="trace-8090"></a>
<a id="trace-8092"></a>
<a id="trace-8103"></a>
<a id="trace-8105"></a>
<a id="trace-8120"></a>
<a id="trace-8122"></a>
<a id="trace-8130"></a>
<a id="trace-8132"></a>
<a id="trace-8145"></a>
<a id="trace-8147"></a>
<a id="trace-8154"></a>
<a id="trace-8156"></a>
<a id="trace-8230"></a>
<a id="trace-8232"></a>
<a id="trace-8248"></a>
<a id="trace-8250"></a>
<a id="trace-8266"></a>
<a id="trace-8268"></a>
<a id="trace-8275"></a>
<a id="trace-8277"></a>
<a id="trace-8288"></a>
<a id="trace-8290"></a>
<a id="trace-8298"></a>
<a id="trace-8300"></a>
<a id="trace-8313"></a>
<a id="trace-8315"></a>
<a id="trace-8329"></a>
<a id="trace-8331"></a>
<a id="trace-8346"></a>
<a id="trace-8348"></a>
<a id="trace-8354"></a>
<a id="trace-8356"></a>
<a id="trace-8433"></a>
<a id="trace-8435"></a>
<a id="trace-8444"></a>
<a id="trace-8446"></a>
<a id="trace-8460"></a>
<a id="trace-8462"></a>
<a id="trace-8469"></a>
<a id="trace-8471"></a>
<a id="trace-8486"></a>
<a id="trace-8488"></a>
<a id="trace-8500"></a>
<a id="trace-8502"></a>
<a id="trace-8515"></a>
<a id="trace-8517"></a>
<a id="trace-8524"></a>
<a id="trace-8526"></a>
<a id="trace-8539"></a>
<a id="trace-8541"></a>
<a id="trace-8763"></a>
<a id="trace-8765"></a>
<a id="trace-8850"></a>
<a id="trace-8852"></a>
<a id="trace-8874"></a>
<a id="trace-8876"></a>
<a id="trace-8892"></a>
<a id="trace-8894"></a>
<a id="trace-8910"></a>
<a id="trace-8912"></a>
<a id="trace-8939"></a>
<a id="trace-8941"></a>
<a id="trace-8954"></a>
<a id="trace-8956"></a>
<a id="trace-8974"></a>
<a id="trace-8976"></a>
<a id="trace-8986"></a>
<a id="trace-8988"></a>
<a id="trace-9008"></a>
<a id="trace-9010"></a>
<a id="trace-9025"></a>
<a id="trace-9027"></a>
<a id="trace-9107"></a>
<a id="trace-9109"></a>
<a id="trace-9121"></a>
<a id="trace-9123"></a>
<a id="trace-9141"></a>
<a id="trace-9143"></a>
<a id="trace-11499"></a>
<a id="trace-11501"></a>
<a id="trace-11513"></a>
<a id="trace-11515"></a>
<a id="trace-11749"></a>
<a id="trace-11751"></a>
<a id="trace-11793"></a>
<a id="trace-11795"></a>
<a id="trace-11818"></a>
<a id="trace-11820"></a>
<a id="trace-11866"></a>
<a id="trace-11868"></a>
<a id="trace-11894"></a>
<a id="trace-11896"></a>
<a id="trace-11991"></a>
<a id="trace-11993"></a>
<a id="trace-12035"></a>
<a id="trace-12037"></a>
<a id="trace-12057"></a>
<a id="trace-12059"></a>
<a id="trace-14410"></a>
<a id="trace-14412"></a>
<a id="trace-14452"></a>
<a id="trace-14454"></a>
<a id="trace-14469"></a>
<a id="trace-14471"></a>
<a id="trace-14492"></a>
<a id="trace-14494"></a>
<a id="trace-14771"></a>
<a id="trace-14773"></a>
<a id="trace-15050"></a>
<a id="trace-15052"></a>
<a id="trace-15081"></a>
<a id="trace-15083"></a>
<a id="trace-15191"></a>
<a id="trace-15193"></a>
<a id="trace-15211"></a>
<a id="trace-15213"></a>
<a id="trace-15257"></a>
<a id="trace-15259"></a>
<a id="trace-15280"></a>
<a id="trace-15282"></a>
<a id="trace-15310"></a>
<a id="trace-15312"></a>
<a id="trace-15325"></a>
<a id="trace-15327"></a>
<a id="trace-15350"></a>
<a id="trace-15352"></a>
<a id="trace-15371"></a>
<a id="trace-15373"></a>
<a id="trace-15387"></a>
<a id="trace-15389"></a>
<a id="trace-15405"></a>
<a id="trace-15407"></a>
<a id="trace-15491"></a>
<a id="trace-15493"></a>
<a id="trace-15507"></a>
<a id="trace-15509"></a>
<a id="trace-15534"></a>
<a id="trace-15536"></a>
<a id="trace-15549"></a>
<a id="trace-15551"></a>
<a id="trace-15569"></a>
<a id="trace-15571"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15615"></a>
<a id="trace-15617"></a>
<a id="trace-15629"></a>
<a id="trace-15631"></a>
<a id="trace-15874"></a>
<a id="trace-15876"></a>
<a id="trace-15887"></a>
<a id="trace-15889"></a>
<a id="trace-15978"></a>
<a id="trace-15980"></a>
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16023"></a>
<a id="trace-16025"></a>
<a id="trace-16205"></a>
<a id="trace-16207"></a>
<a id="trace-16232"></a>
<a id="trace-16234"></a>
<a id="trace-16250"></a>
<a id="trace-16252"></a>
<a id="trace-16287"></a>
<a id="trace-16289"></a>
<a id="trace-16307"></a>
<a id="trace-16309"></a>
<a id="trace-16329"></a>
<a id="trace-16331"></a>
<a id="trace-16356"></a>
<a id="trace-16358"></a>
<a id="trace-16438"></a>
<a id="trace-16440"></a>
<a id="trace-16458"></a>
<a id="trace-16460"></a>
<a id="trace-16475"></a>
<a id="trace-16477"></a>
<a id="trace-16493"></a>
<a id="trace-16495"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16601"></a>
<a id="trace-16603"></a>
<a id="trace-16626"></a>
<a id="trace-16628"></a>
<a id="trace-16658"></a>
<a id="trace-16660"></a>
<a id="trace-16683"></a>
<a id="trace-16685"></a>
<a id="trace-16866"></a>
<a id="trace-16868"></a>
<a id="trace-16884"></a>
<a id="trace-16886"></a>
<a id="trace-16905"></a>
<a id="trace-16907"></a>
<a id="trace-16915"></a>
<a id="trace-16917"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
<a id="trace-16948"></a>
<a id="trace-16950"></a>
<a id="trace-16967"></a>
<a id="trace-16969"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-16996"></a>
<a id="trace-16998"></a>
<a id="trace-17007"></a>
<a id="trace-17009"></a>
<a id="trace-17082"></a>
<a id="trace-17084"></a>
<a id="trace-17097"></a>
<a id="trace-17099"></a>
<a id="trace-17115"></a>
<a id="trace-17117"></a>
<a id="trace-17128"></a>
<a id="trace-17130"></a>
<a id="trace-17252"></a>
<a id="trace-17254"></a>
<a id="trace-17275"></a>
<a id="trace-17277"></a>
<a id="trace-17291"></a>
<a id="trace-17293"></a>
<a id="trace-17306"></a>
<a id="trace-17308"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17332"></a>
<a id="trace-17334"></a>
<a id="trace-17703"></a>
<a id="trace-17705"></a>
<a id="trace-17716"></a>
<a id="trace-17718"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17757"></a>
<a id="trace-17759"></a>
<a id="trace-17774"></a>
<a id="trace-17776"></a>
<a id="trace-17788"></a>
<a id="trace-17790"></a>
<a id="trace-17814"></a>
<a id="trace-17816"></a>
<a id="trace-17857"></a>
<a id="trace-17859"></a>
<a id="trace-17897"></a>
<a id="trace-17899"></a>
<a id="trace-17913"></a>
<a id="trace-17915"></a>
<a id="trace-18005"></a>
<a id="trace-18007"></a>
<a id="trace-18044"></a>
<a id="trace-18046"></a>
<a id="trace-18072"></a>
<a id="trace-18074"></a>
<a id="trace-18093"></a>
<a id="trace-18095"></a>
<a id="trace-18113"></a>
<a id="trace-18115"></a>
<a id="trace-18130"></a>
<a id="trace-18132"></a>
<a id="trace-18154"></a>
<a id="trace-18156"></a>
<a id="trace-18174"></a>
<a id="trace-18176"></a>
<a id="trace-18204"></a>
<a id="trace-18206"></a>
<a id="trace-18224"></a>
<a id="trace-18226"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18321"></a>
<a id="trace-18323"></a>
<a id="trace-18341"></a>
<a id="trace-18343"></a>
<a id="trace-18361"></a>
<a id="trace-18363"></a>
<a id="trace-18380"></a>
<a id="trace-18382"></a>
<a id="trace-18390"></a>
<a id="trace-18392"></a>
<a id="trace-18411"></a>
<a id="trace-18413"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18446"></a>
<a id="trace-18448"></a>
<a id="trace-18470"></a>
<a id="trace-18472"></a>
<a id="trace-18554"></a>
<a id="trace-18556"></a>
<a id="trace-18568"></a>
<a id="trace-18570"></a>
<a id="trace-18899"></a>
<a id="trace-18901"></a>
<a id="trace-18922"></a>
<a id="trace-18924"></a>
<a id="trace-18953"></a>
<a id="trace-18955"></a>
<a id="trace-18977"></a>
<a id="trace-18979"></a>
<a id="trace-19317"></a>
<a id="trace-19319"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19362"></a>
<a id="trace-19364"></a>
<a id="trace-19396"></a>
<a id="trace-19398"></a>
<a id="trace-19495"></a>
<a id="trace-19497"></a>
<a id="trace-19521"></a>
<a id="trace-19523"></a>
<a id="trace-19544"></a>
<a id="trace-19546"></a>
<a id="trace-19575"></a>
<a id="trace-19577"></a>
<a id="trace-19603"></a>
<a id="trace-19605"></a>
<a id="trace-19632"></a>
<a id="trace-19634"></a>
<a id="trace-19652"></a>
<a id="trace-19654"></a>
<a id="trace-19672"></a>
<a id="trace-19674"></a>
<a id="trace-19690"></a>
<a id="trace-19692"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19791"></a>
<a id="trace-19793"></a>
<a id="trace-19817"></a>
<a id="trace-19819"></a>
<a id="trace-19836"></a>
<a id="trace-19838"></a>
<a id="trace-19861"></a>
<a id="trace-19863"></a>
<a id="trace-19885"></a>
<a id="trace-19887"></a>
<a id="trace-19899"></a>
<a id="trace-19901"></a>
<a id="trace-19933"></a>
<a id="trace-19935"></a>
<a id="trace-19965"></a>
<a id="trace-19967"></a>
<a id="trace-19987"></a>
<a id="trace-19989"></a>
<a id="trace-20017"></a>
<a id="trace-20019"></a>
<a id="trace-22522"></a>
<a id="trace-22524"></a>
<a id="trace-22556"></a>
<a id="trace-22558"></a>
<a id="trace-22601"></a>
<a id="trace-22603"></a>
<a id="trace-22650"></a>
<a id="trace-22652"></a>
<a id="trace-22696"></a>
<a id="trace-22698"></a>
<a id="trace-22744"></a>
<a id="trace-22746"></a>
<a id="trace-22795"></a>
<a id="trace-22797"></a>
<a id="trace-22842"></a>
<a id="trace-22844"></a>
<a id="trace-22870"></a>
<a id="trace-22872"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22969"></a>
<a id="trace-22971"></a>
<a id="trace-22985"></a>
<a id="trace-22987"></a>
<a id="trace-23000"></a>
<a id="trace-23002"></a>
<a id="trace-23012"></a>
<a id="trace-23014"></a>
<a id="trace-23033"></a>
<a id="trace-23035"></a>
<a id="trace-23045"></a>
<a id="trace-23047"></a>
<a id="trace-23059"></a>
<a id="trace-23061"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23087"></a>
<a id="trace-23089"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23170"></a>
<a id="trace-23172"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23199"></a>
<a id="trace-23201"></a>
<a id="trace-23212"></a>
<a id="trace-23214"></a>
<a id="trace-23231"></a>
<a id="trace-23233"></a>
<a id="trace-23243"></a>
<a id="trace-23245"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23318"></a>
<a id="trace-23320"></a>
<a id="trace-23343"></a>
<a id="trace-23345"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23483"></a>
<a id="trace-23485"></a>
<a id="trace-23528"></a>
<a id="trace-23530"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23590"></a>
<a id="trace-23592"></a>
<a id="trace-23614"></a>
<a id="trace-23616"></a>
<a id="trace-23659"></a>
<a id="trace-23661"></a>
<a id="trace-23690"></a>
<a id="trace-23692"></a>
<a id="trace-23735"></a>
<a id="trace-23737"></a>
<a id="trace-23773"></a>
<a id="trace-23775"></a>
<a id="trace-23878"></a>
<a id="trace-23880"></a>
<a id="trace-23922"></a>
<a id="trace-23924"></a>
<a id="trace-23970"></a>
<a id="trace-23972"></a>
<a id="trace-24013"></a>
<a id="trace-24015"></a>
<a id="trace-24051"></a>
<a id="trace-24053"></a>
<a id="trace-24077"></a>
<a id="trace-24079"></a>
<a id="trace-24103"></a>
<a id="trace-24105"></a>
<a id="trace-24125"></a>
<a id="trace-24127"></a>
<a id="trace-24160"></a>
<a id="trace-24162"></a>
<a id="trace-24190"></a>
<a id="trace-24192"></a>
<a id="trace-24291"></a>
<a id="trace-24293"></a>
<a id="trace-24339"></a>
<a id="trace-24341"></a>
<a id="trace-24385"></a>
<a id="trace-24387"></a>
<a id="trace-24428"></a>
<a id="trace-24430"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24489"></a>
<a id="trace-24491"></a>
<a id="trace-24512"></a>
<a id="trace-24514"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24561"></a>
<a id="trace-24563"></a>
<a id="trace-24636"></a>
<a id="trace-24638"></a>
<a id="trace-24649"></a>
<a id="trace-24651"></a>
<a id="trace-24665"></a>
<a id="trace-24667"></a>
<a id="trace-24678"></a>
<a id="trace-24680"></a>
<a id="trace-24695"></a>
<a id="trace-24697"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24721"></a>
<a id="trace-24723"></a>
<a id="trace-24762"></a>
<a id="trace-24764"></a>
<a id="trace-24879"></a>
<a id="trace-24881"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-25023"></a>
<a id="trace-25059"></a>
<a id="trace-25081"></a>
<a id="trace-25178"></a>
<a id="trace-25180"></a>
<a id="trace-25205"></a>
<a id="trace-25207"></a>
<a id="trace-25232"></a>
<a id="trace-25234"></a>
<a id="trace-25254"></a>
<a id="trace-25256"></a>
<a id="trace-25292"></a>
<a id="trace-25294"></a>
<a id="trace-25371"></a>
<a id="trace-25373"></a>
<a id="trace-25390"></a>
<a id="trace-25392"></a>
<a id="trace-25415"></a>
<a id="trace-25417"></a>
<a id="trace-25456"></a>
<a id="trace-25458"></a>
<a id="trace-25553"></a>
<a id="trace-25555"></a>
<a id="trace-25632"></a>
<a id="trace-25634"></a>
<a id="trace-25659"></a>
<a id="trace-25661"></a>
<a id="trace-25684"></a>
<a id="trace-25686"></a>
<a id="trace-25712"></a>
<a id="trace-25714"></a>
<a id="trace-25734"></a>
<a id="trace-25736"></a>
<a id="trace-25801"></a>
<a id="trace-25803"></a>
<a id="trace-25819"></a>
<a id="trace-25821"></a>
<a id="trace-25839"></a>
<a id="trace-25841"></a>
<a id="trace-25858"></a>
<a id="trace-25860"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25948"></a>
<a id="trace-25950"></a>
<a id="trace-25962"></a>
<a id="trace-25964"></a>
<a id="trace-25985"></a>
<a id="trace-25987"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26023"></a>
<a id="trace-26025"></a>
<a id="trace-26095"></a>
<a id="trace-26097"></a>
<a id="trace-26118"></a>
<a id="trace-26120"></a>
<a id="trace-26136"></a>
<a id="trace-26138"></a>
<a id="trace-26159"></a>
<a id="trace-26161"></a>
<a id="trace-26176"></a>
<a id="trace-26178"></a>
<a id="trace-26247"></a>
<a id="trace-26249"></a>
<a id="trace-26266"></a>
<a id="trace-26268"></a>
<a id="trace-26289"></a>
<a id="trace-26291"></a>
<a id="trace-26313"></a>
<a id="trace-26315"></a>
<a id="trace-26334"></a>
<a id="trace-26336"></a>
<a id="trace-26407"></a>
<a id="trace-26409"></a>
<a id="trace-26421"></a>
<a id="trace-26423"></a>
<a id="trace-26439"></a>
<a id="trace-26441"></a>
<a id="trace-26463"></a>
<a id="trace-26465"></a>
<a id="trace-26485"></a>
<a id="trace-26487"></a>
<a id="trace-26563"></a>
<a id="trace-26565"></a>
<a id="trace-26580"></a>
<a id="trace-26582"></a>
<a id="trace-26601"></a>
<a id="trace-26603"></a>
<a id="trace-26621"></a>
<a id="trace-26623"></a>
<a id="trace-26641"></a>
<a id="trace-26643"></a>
<a id="trace-26715"></a>
<a id="trace-26717"></a>
<a id="trace-26737"></a>
<a id="trace-26739"></a>
<a id="trace-26759"></a>
<a id="trace-26761"></a>
<a id="trace-26780"></a>
<a id="trace-26782"></a>
<a id="trace-26798"></a>
<a id="trace-26800"></a>
<a id="trace-26866"></a>
<a id="trace-26868"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26905"></a>
<a id="trace-26907"></a>
<a id="trace-26926"></a>
<a id="trace-26928"></a>
<a id="trace-26945"></a>
<a id="trace-26947"></a>
<a id="trace-27017"></a>
<a id="trace-27019"></a>
<a id="trace-27038"></a>
<a id="trace-27040"></a>
<a id="trace-27056"></a>
<a id="trace-27058"></a>
<a id="trace-27080"></a>
<a id="trace-27082"></a>
<a id="trace-27101"></a>
<a id="trace-27103"></a>
<a id="trace-27169"></a>
<a id="trace-27171"></a>
<a id="trace-27189"></a>
<a id="trace-27191"></a>
<a id="trace-27204"></a>
<a id="trace-27206"></a>
<a id="trace-27225"></a>
<a id="trace-27227"></a>
<a id="trace-27243"></a>
<a id="trace-27245"></a>
<a id="trace-27315"></a>
<a id="trace-27317"></a>
<a id="trace-27336"></a>
<a id="trace-27338"></a>
<a id="trace-27356"></a>
<a id="trace-27358"></a>
<a id="trace-27375"></a>
<a id="trace-27377"></a>
<a id="trace-27392"></a>
<a id="trace-27394"></a>
<a id="trace-27466"></a>
<a id="trace-27468"></a>
<a id="trace-27485"></a>
<a id="trace-27487"></a>
<a id="trace-27506"></a>
<a id="trace-27508"></a>
<a id="trace-27527"></a>
<a id="trace-27529"></a>
<a id="trace-27542"></a>
<a id="trace-27544"></a>
<a id="trace-27613"></a>
<a id="trace-27615"></a>
<a id="trace-27633"></a>
<a id="trace-27635"></a>
<a id="trace-27656"></a>
<a id="trace-27658"></a>
<a id="trace-27678"></a>
<a id="trace-27680"></a>
<a id="trace-27701"></a>
<a id="trace-27769"></a>
<a id="trace-27771"></a>
<a id="trace-27787"></a>
<a id="trace-27789"></a>
<a id="trace-27808"></a>
<a id="trace-27810"></a>
<a id="trace-27829"></a>
<a id="trace-27831"></a>
<a id="trace-27851"></a>
<a id="trace-27853"></a>
<a id="trace-27924"></a>
<a id="trace-27926"></a>
<a id="trace-27946"></a>
<a id="trace-27948"></a>
<a id="trace-27962"></a>
<a id="trace-27964"></a>
<a id="trace-27981"></a>
<a id="trace-27983"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28072"></a>
<a id="trace-28074"></a>
<a id="trace-28099"></a>
<a id="trace-28101"></a>
<a id="trace-28124"></a>
<a id="trace-28126"></a>
<a id="trace-28141"></a>
<a id="trace-28143"></a>
<a id="trace-28157"></a>
<a id="trace-28159"></a>
<a id="trace-28225"></a>
<a id="trace-28227"></a>
<a id="trace-28243"></a>
<a id="trace-28245"></a>
<a id="trace-28268"></a>
<a id="trace-28270"></a>
<a id="trace-28292"></a>
<a id="trace-28294"></a>
<a id="trace-28312"></a>
<a id="trace-28314"></a>
<a id="trace-28380"></a>
<a id="trace-28382"></a>
<a id="trace-28395"></a>
<a id="trace-28397"></a>
<a id="trace-28415"></a>
<a id="trace-28417"></a>
<a id="trace-28439"></a>
<a id="trace-28441"></a>
<a id="trace-28464"></a>
<a id="trace-28466"></a>
<a id="trace-28538"></a>
<a id="trace-28540"></a>
<a id="trace-28559"></a>
<a id="trace-28561"></a>
<a id="trace-28577"></a>
<a id="trace-28579"></a>
<a id="trace-28594"></a>
<a id="trace-28596"></a>
<a id="trace-28612"></a>
<a id="trace-28614"></a>
<a id="trace-28684"></a>
<a id="trace-28686"></a>
<a id="trace-28703"></a>
<a id="trace-28705"></a>
<a id="trace-28730"></a>
<a id="trace-28732"></a>
<a id="trace-28754"></a>
<a id="trace-28756"></a>
<a id="trace-28771"></a>
<a id="trace-28773"></a>
- 1.60s–359.30s (×1184), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079417449960735, 'next_transition': 608}.
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
<a id="trace-1251"></a>
<a id="trace-1253"></a>
<a id="trace-1274"></a>
<a id="trace-1276"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 937): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5240291709407372, 'next_transition': 966}.
<a id="trace-1135"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1135): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1057. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.825186869439914, 'next_transition': 141}.
<a id="trace-141"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 141): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.070683593854728, 'next_transition': 2135}.
<a id="trace-1360"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1360): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1360. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.070683593854728, 'next_transition': 2135}.
<a id="trace-1361"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1361): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1361. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.070683593854728, 'next_transition': 2135}.
<a id="trace-1362"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1362): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1049. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724913369205297, 'next_transition': 1692}.
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
<a id="trace-2103"></a>
<a id="trace-2105"></a>
<a id="trace-2127"></a>
<a id="trace-2129"></a>
<a id="trace-2318"></a>
<a id="trace-2320"></a>
<a id="trace-2348"></a>
<a id="trace-2350"></a>
<a id="trace-2409"></a>
<a id="trace-2411"></a>
<a id="trace-2486"></a>
<a id="trace-2488"></a>
- 13.20s–23.25s (×32), actor 5, squad 0 (trace 1692): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1361. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5553180525826757, 'next_transition': 1753}.
<a id="trace-2135"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2135): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1799. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.856263589744593, 'next_transition': 2967}.
<a id="trace-2136"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2136): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1799. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.856263589744593, 'next_transition': 2967}.
<a id="trace-2497"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2497): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2238. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.649683284160894, 'next_transition': 2750}.
<a id="trace-2498"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2498): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2238. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.649683284160894, 'next_transition': 2750}.
<a id="trace-2750"></a>
<a id="trace-2752"></a>
<a id="trace-2780"></a>
<a id="trace-2782"></a>
<a id="trace-2866"></a>
<a id="trace-2868"></a>
<a id="trace-2883"></a>
<a id="trace-2885"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 2750): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2243. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724841810742467, 'next_transition': 2780}.
<a id="trace-252"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2948"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 2948): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 2948. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149994827446398, 'next_transition': 3027}.
<a id="trace-2949"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 2949): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 2949. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149994827446398, 'next_transition': 3027}.
<a id="trace-2967"></a>
- 27.20s–27.20s (×1), actor 8, squad 1 (trace 2967): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2801. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5885568954867489, 'next_transition': 507}.
<a id="trace-3027"></a>
<a id="trace-3029"></a>
<a id="trace-3079"></a>
<a id="trace-3081"></a>
<a id="trace-3138"></a>
<a id="trace-3140"></a>
<a id="trace-3230"></a>
<a id="trace-3232"></a>
<a id="trace-3242"></a>
<a id="trace-3244"></a>
- 27.25s–30.75s (×10), actor 5, squad 0 (trace 3027): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 2949. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3673237246851585, 'next_transition': 3079}.
<a id="trace-3249"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 3249): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3148. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05857027932588764, 'next_transition': 3433}.
<a id="trace-3433"></a>
<a id="trace-3435"></a>
<a id="trace-3467"></a>
<a id="trace-3469"></a>
<a id="trace-3511"></a>
<a id="trace-3513"></a>
<a id="trace-3531"></a>
<a id="trace-3533"></a>
<a id="trace-3558"></a>
<a id="trace-3560"></a>
<a id="trace-3577"></a>
<a id="trace-3579"></a>
<a id="trace-3660"></a>
<a id="trace-3670"></a>
- 31.75s–35.75s (×14), actor 5, squad 0 (trace 3433): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3153. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1934353574929226, 'next_transition': 3467}.
<a id="trace-3677"></a>
- 35.75s–35.75s (×1), actor 0, squad 0 (trace 3677): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3586. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5150684484908261, 'next_transition': 3978}.
<a id="trace-3678"></a>
- 35.75s–35.75s (×1), actor 0, squad 0 (trace 3678): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3586. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5150684484908261, 'next_transition': 3978}.
<a id="trace-3679"></a>
<a id="trace-3978"></a>
- 35.75s–36.25s (×2), actor 0, squad 0 (trace 3679): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3586. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5150684484908261, 'next_transition': 3978}.
<a id="trace-4274"></a>
<a id="trace-4276"></a>
<a id="trace-4316"></a>
<a id="trace-4318"></a>
<a id="trace-4391"></a>
<a id="trace-4393"></a>
<a id="trace-4426"></a>
<a id="trace-4428"></a>
- 36.75s–38.75s (×8), actor 5, squad 0 (trace 4274): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3591. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8601176638352611, 'next_transition': 4316}.
<a id="trace-4473"></a>
- 39.25s–39.25s (×1), actor 0, squad 0 (trace 4473): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 3586. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500016953852095, 'next_transition': 4813}.
<a id="trace-4813"></a>
<a id="trace-4815"></a>
<a id="trace-4917"></a>
<a id="trace-4919"></a>
<a id="trace-4959"></a>
<a id="trace-4961"></a>
<a id="trace-4987"></a>
<a id="trace-4989"></a>
<a id="trace-5002"></a>
<a id="trace-5004"></a>
<a id="trace-5044"></a>
<a id="trace-5046"></a>
<a id="trace-5069"></a>
<a id="trace-5071"></a>
- 39.75s–42.75s (×14), actor 5, squad 0 (trace 4813): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3591. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250533049427046, 'next_transition': 4917}.
<a id="trace-5081"></a>
- 42.85s–42.85s (×1), actor 0, squad 0 (trace 5081): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4832. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5105}.
<a id="trace-5105"></a>
<a id="trace-5107"></a>
<a id="trace-5123"></a>
<a id="trace-5125"></a>
<a id="trace-5266"></a>
<a id="trace-5268"></a>
<a id="trace-5287"></a>
<a id="trace-5289"></a>
<a id="trace-5305"></a>
<a id="trace-5307"></a>
<a id="trace-5325"></a>
<a id="trace-5327"></a>
<a id="trace-5339"></a>
<a id="trace-5341"></a>
<a id="trace-5375"></a>
<a id="trace-5377"></a>
<a id="trace-5393"></a>
<a id="trace-5395"></a>
<a id="trace-5406"></a>
<a id="trace-5408"></a>
<a id="trace-5494"></a>
<a id="trace-5496"></a>
<a id="trace-5512"></a>
<a id="trace-5514"></a>
<a id="trace-5527"></a>
<a id="trace-5529"></a>
<a id="trace-5562"></a>
<a id="trace-5564"></a>
<a id="trace-5581"></a>
<a id="trace-5583"></a>
<a id="trace-5595"></a>
<a id="trace-5597"></a>
<a id="trace-5606"></a>
<a id="trace-5608"></a>
- 43.25s–53.75s (×34), actor 5, squad 0 (trace 5105): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4837. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5123}.
<a id="trace-506"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (events line 506): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-507"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (events line 507): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5623"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 5623): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.301031 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 5623. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5634}.
<a id="trace-5624"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 5624): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.301031 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 5624. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5634}.
<a id="trace-5625"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (trace 5625): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.301031 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 5625. Next observer evidence: {'until': 84, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 704}.
<a id="trace-5626"></a>
- 54.15s–54.15s (×1), actor 5, squad 1 (trace 5626): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.301031 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 5626. Next observer evidence: {'until': 84, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 704}.
<a id="trace-5634"></a>
<a id="trace-5636"></a>
<a id="trace-5646"></a>
<a id="trace-5648"></a>
- 54.25s–54.75s (×4), actor 5, squad 0 (trace 5634): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 54.15s, trace 5626. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5646}.
<a id="trace-5718"></a>
- 55.15s–55.15s (×1), actor 1, squad 0 (trace 5718): NeedSupport. Knowledge: actor memory at 55.00s, trace 5656. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5746}.
<a id="trace-5746"></a>
<a id="trace-5748"></a>
<a id="trace-5762"></a>
<a id="trace-5764"></a>
<a id="trace-5772"></a>
<a id="trace-5774"></a>
<a id="trace-5791"></a>
<a id="trace-5802"></a>
<a id="trace-5816"></a>
<a id="trace-5826"></a>
<a id="trace-5842"></a>
- 55.75s–59.25s (×11), actor 5, squad 0 (trace 5746): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 5660. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5762}.
<a id="trace-5849"></a>
- 59.45s–59.45s (×1), actor 1, squad 0 (trace 5849): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 55.00s, trace 5656. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5851}.
<a id="trace-5851"></a>
<a id="trace-5853"></a>
<a id="trace-5929"></a>
<a id="trace-5931"></a>
<a id="trace-5946"></a>
<a id="trace-5948"></a>
<a id="trace-5963"></a>
<a id="trace-5965"></a>
<a id="trace-5971"></a>
<a id="trace-5973"></a>
<a id="trace-5988"></a>
<a id="trace-5990"></a>
<a id="trace-5998"></a>
<a id="trace-6000"></a>
<a id="trace-6011"></a>
<a id="trace-6013"></a>
<a id="trace-6021"></a>
<a id="trace-6023"></a>
<a id="trace-6036"></a>
<a id="trace-6038"></a>
<a id="trace-6044"></a>
<a id="trace-6046"></a>
<a id="trace-6121"></a>
<a id="trace-6123"></a>
<a id="trace-6135"></a>
<a id="trace-6137"></a>
<a id="trace-6167"></a>
<a id="trace-6169"></a>
<a id="trace-6177"></a>
<a id="trace-6179"></a>
<a id="trace-6214"></a>
<a id="trace-6216"></a>
<a id="trace-6222"></a>
<a id="trace-6224"></a>
<a id="trace-6297"></a>
<a id="trace-6299"></a>
<a id="trace-6310"></a>
<a id="trace-6312"></a>
<a id="trace-6324"></a>
<a id="trace-6326"></a>
<a id="trace-6362"></a>
<a id="trace-6364"></a>
<a id="trace-6387"></a>
<a id="trace-6389"></a>
<a id="trace-6397"></a>
<a id="trace-6399"></a>
<a id="trace-6411"></a>
<a id="trace-6413"></a>
<a id="trace-6420"></a>
<a id="trace-6422"></a>
<a id="trace-6496"></a>
<a id="trace-6498"></a>
<a id="trace-6507"></a>
<a id="trace-6509"></a>
<a id="trace-6521"></a>
<a id="trace-6523"></a>
<a id="trace-6529"></a>
<a id="trace-6531"></a>
<a id="trace-6545"></a>
<a id="trace-6547"></a>
<a id="trace-6558"></a>
<a id="trace-6560"></a>
<a id="trace-6594"></a>
<a id="trace-6596"></a>
<a id="trace-6693"></a>
<a id="trace-6695"></a>
<a id="trace-6717"></a>
<a id="trace-6719"></a>
<a id="trace-6738"></a>
<a id="trace-6740"></a>
<a id="trace-6748"></a>
<a id="trace-6750"></a>
<a id="trace-6762"></a>
<a id="trace-6764"></a>
<a id="trace-6774"></a>
<a id="trace-6776"></a>
<a id="trace-6790"></a>
<a id="trace-6792"></a>
<a id="trace-6801"></a>
<a id="trace-6803"></a>
<a id="trace-6883"></a>
<a id="trace-6885"></a>
<a id="trace-6923"></a>
<a id="trace-6925"></a>
<a id="trace-6946"></a>
<a id="trace-6948"></a>
<a id="trace-6963"></a>
<a id="trace-6965"></a>
<a id="trace-6985"></a>
<a id="trace-6987"></a>
<a id="trace-6993"></a>
<a id="trace-6995"></a>
<a id="trace-7067"></a>
<a id="trace-7069"></a>
<a id="trace-7083"></a>
<a id="trace-7085"></a>
<a id="trace-7100"></a>
<a id="trace-7102"></a>
<a id="trace-7108"></a>
<a id="trace-7110"></a>
<a id="trace-7129"></a>
<a id="trace-7131"></a>
<a id="trace-7143"></a>
<a id="trace-7145"></a>
<a id="trace-7160"></a>
<a id="trace-7162"></a>
<a id="trace-7173"></a>
<a id="trace-7175"></a>
<a id="trace-7195"></a>
<a id="trace-7197"></a>
<a id="trace-7280"></a>
<a id="trace-7282"></a>
<a id="trace-7294"></a>
<a id="trace-7296"></a>
<a id="trace-7302"></a>
<a id="trace-7304"></a>
<a id="trace-7317"></a>
<a id="trace-7319"></a>
<a id="trace-7327"></a>
<a id="trace-7329"></a>
<a id="trace-7347"></a>
<a id="trace-7349"></a>
<a id="trace-7362"></a>
<a id="trace-7364"></a>
<a id="trace-7377"></a>
<a id="trace-7379"></a>
<a id="trace-7491"></a>
<a id="trace-7493"></a>
<a id="trace-7502"></a>
<a id="trace-7504"></a>
<a id="trace-7514"></a>
<a id="trace-7516"></a>
<a id="trace-7524"></a>
<a id="trace-7526"></a>
<a id="trace-7549"></a>
<a id="trace-7551"></a>
<a id="trace-7565"></a>
<a id="trace-7567"></a>
<a id="trace-7681"></a>
<a id="trace-7683"></a>
<a id="trace-7705"></a>
<a id="trace-7707"></a>
<a id="trace-7717"></a>
<a id="trace-7719"></a>
<a id="trace-7735"></a>
<a id="trace-7737"></a>
<a id="trace-7758"></a>
<a id="trace-7760"></a>
<a id="trace-7766"></a>
<a id="trace-7768"></a>
<a id="trace-7852"></a>
<a id="trace-7854"></a>
<a id="trace-7869"></a>
<a id="trace-7871"></a>
<a id="trace-7885"></a>
<a id="trace-7887"></a>
<a id="trace-7905"></a>
<a id="trace-7907"></a>
<a id="trace-7922"></a>
<a id="trace-7924"></a>
<a id="trace-7936"></a>
<a id="trace-7938"></a>
<a id="trace-7954"></a>
<a id="trace-7956"></a>
<a id="trace-8038"></a>
<a id="trace-8040"></a>
<a id="trace-8050"></a>
<a id="trace-8052"></a>
<a id="trace-8065"></a>
<a id="trace-8067"></a>
<a id="trace-8086"></a>
<a id="trace-8088"></a>
<a id="trace-8099"></a>
<a id="trace-8101"></a>
<a id="trace-8116"></a>
<a id="trace-8118"></a>
<a id="trace-8150"></a>
<a id="trace-8152"></a>
<a id="trace-8226"></a>
<a id="trace-8228"></a>
<a id="trace-8244"></a>
<a id="trace-8246"></a>
<a id="trace-8262"></a>
<a id="trace-8264"></a>
<a id="trace-8271"></a>
<a id="trace-8273"></a>
<a id="trace-8284"></a>
<a id="trace-8286"></a>
<a id="trace-8309"></a>
<a id="trace-8311"></a>
- 59.75s–123.25s (×190), actor 5, squad 0 (trace 5851): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 5660. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5929}.
<a id="trace-703"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (events line 703): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8325}.
<a id="trace-704"></a>
- 123.30s–123.30s (×1), actor 5, squad 1 (events line 704): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16264}.
<a id="trace-8319"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 8319): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.30s, trace 8319. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8325}.
<a id="trace-8320"></a>
- 123.30s–123.30s (×1), actor 5, squad 1 (trace 8320): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.30s, trace 8320. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16264}.
<a id="trace-8325"></a>
<a id="trace-8327"></a>
<a id="trace-8342"></a>
<a id="trace-8344"></a>
<a id="trace-8350"></a>
<a id="trace-8352"></a>
<a id="trace-8440"></a>
<a id="trace-8442"></a>
<a id="trace-8456"></a>
<a id="trace-8458"></a>
<a id="trace-8465"></a>
<a id="trace-8467"></a>
<a id="trace-8482"></a>
<a id="trace-8484"></a>
<a id="trace-8496"></a>
<a id="trace-8498"></a>
<a id="trace-8520"></a>
<a id="trace-8522"></a>
<a id="trace-8535"></a>
<a id="trace-8537"></a>
- 123.75s–129.30s (×20), actor 5, squad 0 (trace 8325): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.30s, trace 8320. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8342}.
<a id="trace-8542"></a>
- 129.45s–129.45s (×1), actor 1, squad 0 (trace 8542): new contact inside 100 m. Knowledge: actor memory at 125.00s, trace 8364. Next observer evidence: {'until': 129.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8759}.
<a id="trace-8759"></a>
<a id="trace-8761"></a>
<a id="trace-8846"></a>
<a id="trace-8848"></a>
- 129.80s–130.30s (×4), actor 5, squad 0 (trace 8759): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 8368. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8846}.
<a id="trace-8856"></a>
- 130.45s–130.45s (×1), actor 1, squad 0 (trace 8856): received platoon directive; retain contact cover stage. Knowledge: actor memory at 130.00s, trace 8770. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44999896502453535, 'next_transition': 8888}.
<a id="trace-8888"></a>
<a id="trace-8890"></a>
<a id="trace-8906"></a>
<a id="trace-8908"></a>
<a id="trace-8935"></a>
<a id="trace-8937"></a>
<a id="trace-8970"></a>
<a id="trace-8972"></a>
- 131.30s–133.30s (×8), actor 5, squad 0 (trace 8888): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 8774. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399998006430108, 'next_transition': 8906}.
<a id="trace-8977"></a>
- 133.30s–133.30s (×1), actor 1, squad 0 (trace 8977): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 130.00s, trace 8770. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5394686072746191, 'next_transition': 8982}.
<a id="trace-8982"></a>
<a id="trace-8984"></a>
<a id="trace-9021"></a>
<a id="trace-9023"></a>
<a id="trace-9117"></a>
<a id="trace-9119"></a>
<a id="trace-9137"></a>
<a id="trace-9139"></a>
- 133.80s–136.30s (×8), actor 5, squad 0 (trace 8982): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 8774. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8519200979723747, 'next_transition': 9021}.
<a id="trace-9154"></a>
- 136.75s–136.75s (×1), actor 1, squad 0 (trace 9154): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 135.00s, trace 9031. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14855068035130617, 'next_transition': 11495}.
<a id="trace-11330"></a>
- 136.75s–136.75s (×1), actor 1, squad 0 (trace 11330): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 135.00s, trace 9031. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14855068035130617, 'next_transition': 11495}.
<a id="trace-11331"></a>
- 136.75s–136.75s (×1), actor 1, squad 0 (trace 11331): MoveTactically. Knowledge: actor memory at 135.00s, trace 9031. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14855068035130617, 'next_transition': 11495}.
<a id="trace-11332"></a>
- 136.75s–136.75s (×1), actor 1, squad 0 (trace 11332): contact cover complete: assessment resumes closure. Knowledge: actor memory at 135.00s, trace 9031. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14855068035130617, 'next_transition': 11495}.
<a id="trace-11495"></a>
<a id="trace-11497"></a>
- 136.80s–136.80s (×2), actor 5, squad 0 (trace 11495): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 9035. Next observer evidence: {'until': 137.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9959669372283921, 'next_transition': 11529}.
<a id="trace-11529"></a>
- 137.75s–137.75s (×1), actor 1, squad 0 (trace 11529): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 9031. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24899992957201555, 'next_transition': 11745}.
<a id="trace-11530"></a>
- 137.75s–137.75s (×1), actor 1, squad 0 (trace 11530): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 9031. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24899992957201555, 'next_transition': 11745}.
<a id="trace-11745"></a>
<a id="trace-11747"></a>
<a id="trace-11789"></a>
<a id="trace-11791"></a>
<a id="trace-11814"></a>
<a id="trace-11816"></a>
<a id="trace-11862"></a>
<a id="trace-11864"></a>
<a id="trace-11890"></a>
<a id="trace-11892"></a>
<a id="trace-11987"></a>
<a id="trace-11989"></a>
<a id="trace-12031"></a>
<a id="trace-12033"></a>
<a id="trace-12053"></a>
<a id="trace-12055"></a>
- 137.80s–141.30s (×16), actor 5, squad 0 (trace 11745): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 9035. Next observer evidence: {'until': 138.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5615087601859444, 'next_transition': 11789}.
<a id="trace-12063"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 12063): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05185672825493449, 'next_transition': 14406}.
<a id="trace-12065"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 12065): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05185672825493449, 'next_transition': 14406}.
<a id="trace-14244"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14244): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05185672825493449, 'next_transition': 14406}.
<a id="trace-14245"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14245): MoveTactically. Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05185672825493449, 'next_transition': 14406}.
<a id="trace-14246"></a>
- 141.50s–141.50s (×1), actor 1, squad 0 (trace 14246): contact cover complete: assessment resumes closure. Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.05185672825493449, 'next_transition': 14406}.
<a id="trace-14406"></a>
<a id="trace-14408"></a>
<a id="trace-14448"></a>
<a id="trace-14450"></a>
<a id="trace-14488"></a>
<a id="trace-14490"></a>
- 141.80s–143.30s (×6), actor 5, squad 0 (trace 14406): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 11914. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.013542496077163926, 'next_transition': 14448}.
<a id="trace-14515"></a>
- 143.70s–143.70s (×1), actor 1, squad 0 (trace 14515): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27000276083967495, 'next_transition': 14767}.
<a id="trace-14516"></a>
- 143.70s–143.70s (×1), actor 1, squad 0 (trace 14516): new contact inside 100 m. Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 143.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27000276083967495, 'next_transition': 14767}.
<a id="trace-14767"></a>
<a id="trace-14769"></a>
- 143.80s–143.80s (×2), actor 5, squad 0 (trace 14767): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 11914. Next observer evidence: {'until': 144, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27001701514341686, 'next_transition': 14784}.
<a id="trace-14784"></a>
- 144.10s–144.10s (×1), actor 1, squad 0 (trace 14784): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 140.00s, trace 11910. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1833986683923712, 'next_transition': 15077}.
<a id="trace-15077"></a>
<a id="trace-15079"></a>
<a id="trace-15187"></a>
<a id="trace-15189"></a>
<a id="trace-15253"></a>
<a id="trace-15255"></a>
<a id="trace-15276"></a>
<a id="trace-15278"></a>
<a id="trace-15306"></a>
<a id="trace-15308"></a>
- 144.80s–147.30s (×10), actor 5, squad 0 (trace 15077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 11914. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9925728330268998, 'next_transition': 15187}.
<a id="trace-15332"></a>
- 147.85s–147.85s (×1), actor 1, squad 0 (trace 15332): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 15106. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3526082114053043, 'next_transition': 15346}.
<a id="trace-15346"></a>
<a id="trace-15348"></a>
<a id="trace-15367"></a>
<a id="trace-15369"></a>
<a id="trace-15401"></a>
<a id="trace-15403"></a>
<a id="trace-15487"></a>
<a id="trace-15489"></a>
<a id="trace-15503"></a>
<a id="trace-15505"></a>
- 148.30s–150.80s (×10), actor 5, squad 0 (trace 15346): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 15110. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45122725213792086, 'next_transition': 15367}.
<a id="trace-1007"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (events line 1007): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15514"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 15514): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.421784 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 15514. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35026673925654483, 'next_transition': 15530}.
<a id="trace-15515"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 15515): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.421784 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 15515. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35026673925654483, 'next_transition': 15530}.
<a id="trace-15530"></a>
<a id="trace-15532"></a>
<a id="trace-15583"></a>
<a id="trace-15585"></a>
- 151.30s–152.80s (×4), actor 5, squad 0 (trace 15530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 15515. Next observer evidence: {'until': 152.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.8627054939975939, 'next_transition': 15583}.
<a id="trace-15595"></a>
- 153.10s–153.10s (×1), actor 1, squad 0 (trace 15595): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 150.00s, trace 15413. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3033724381040874, 'next_transition': 15611}.
<a id="trace-15597"></a>
- 153.10s–153.10s (×1), actor 1, squad 0 (trace 15597): NeedSupport. Knowledge: actor memory at 150.00s, trace 15413. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3033724381040874, 'next_transition': 15611}.
<a id="trace-15611"></a>
<a id="trace-15613"></a>
<a id="trace-15625"></a>
<a id="trace-15627"></a>
- 153.30s–153.80s (×4), actor 5, squad 0 (trace 15611): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 15515. Next observer evidence: {'until': 153.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9185996560869828, 'next_transition': 15625}.
<a id="trace-15637"></a>
- 154.10s–154.10s (×1), actor 1, squad 0 (trace 15637): Reorganise: completed/failed drill. Knowledge: actor memory at 150.00s, trace 15413. Next observer evidence: {'until': 154.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25794273571140597, 'next_transition': 15870}.
<a id="trace-15642"></a>
- 154.10s–154.10s (×1), actor 1, squad 0 (trace 15642): MoveTactically. Knowledge: actor memory at 150.00s, trace 15413. Next observer evidence: {'until': 154.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25794273571140597, 'next_transition': 15870}.
<a id="trace-15643"></a>
- 154.10s–154.10s (×1), actor 1, squad 0 (trace 15643): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 150.00s, trace 15413. Next observer evidence: {'until': 154.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25794273571140597, 'next_transition': 15870}.
<a id="trace-15870"></a>
<a id="trace-15872"></a>
<a id="trace-15883"></a>
<a id="trace-15885"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15991"></a>
<a id="trace-15993"></a>
<a id="trace-16019"></a>
<a id="trace-16021"></a>
- 154.30s–156.30s (×10), actor 5, squad 0 (trace 15870): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 15515. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30979812310689575, 'next_transition': 15883}.
<a id="trace-16028"></a>
- 156.30s–156.30s (×1), actor 1, squad 0 (trace 16028): received platoon directive. Knowledge: actor memory at 155.00s, trace 15899. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46093880675557836, 'next_transition': 16201}.
<a id="trace-16201"></a>
<a id="trace-16203"></a>
<a id="trace-16228"></a>
<a id="trace-16230"></a>
<a id="trace-16283"></a>
<a id="trace-16285"></a>
<a id="trace-16303"></a>
<a id="trace-16305"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
- 156.80s–159.30s (×10), actor 5, squad 0 (trace 16201): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15902. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079131850503816, 'next_transition': 16228}.
<a id="trace-16264"></a>
- 158.05s–158.05s (×1), actor 9, squad 1 (trace 16264): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 15905. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16480}.
<a id="trace-16265"></a>
- 158.05s–158.05s (×1), actor 9, squad 1 (trace 16265): bounding overwatch. Knowledge: actor memory at 155.00s, trace 15905. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16480}.
<a id="trace-16266"></a>
- 158.05s–158.05s (×1), actor 9, squad 1 (trace 16266): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 15905. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16480}.
<a id="trace-16337"></a>
- 159.40s–159.40s (×1), actor 1, squad 0 (trace 16337): NeedSupport. Knowledge: actor memory at 155.00s, trace 15899. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27006820319094316, 'next_transition': 16352}.
<a id="trace-16352"></a>
<a id="trace-16354"></a>
<a id="trace-16434"></a>
<a id="trace-16436"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16527"></a>
<a id="trace-16529"></a>
<a id="trace-16559"></a>
<a id="trace-16561"></a>
<a id="trace-16597"></a>
<a id="trace-16599"></a>
<a id="trace-16654"></a>
<a id="trace-16656"></a>
- 159.80s–164.30s (×16), actor 5, squad 0 (trace 16352): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15902. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3272782001964498, 'next_transition': 16434}.
<a id="trace-16480"></a>
- 161.35s–161.35s (×1), actor 9, squad 1 (trace 16480): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 160.00s, trace 16367. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1946}.
<a id="trace-16482"></a>
- 161.35s–161.35s (×1), actor 9, squad 1 (trace 16482): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 160.00s, trace 16367. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1946}.
<a id="trace-16688"></a>
- 164.80s–164.80s (×1), actor 1, squad 0 (trace 16688): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 16361. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16862}.
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16880"></a>
<a id="trace-16882"></a>
<a id="trace-16930"></a>
<a id="trace-16932"></a>
<a id="trace-16944"></a>
<a id="trace-16946"></a>
<a id="trace-16963"></a>
<a id="trace-16965"></a>
<a id="trace-16977"></a>
<a id="trace-16979"></a>
<a id="trace-17003"></a>
<a id="trace-17005"></a>
<a id="trace-17078"></a>
<a id="trace-17080"></a>
<a id="trace-17093"></a>
<a id="trace-17095"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
- 165.30s–171.80s (×20), actor 5, squad 0 (trace 16862): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16797. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2667846769282623, 'next_transition': 16880}.
<a id="trace-17132"></a>
- 171.85s–171.85s (×1), actor 1, squad 0 (trace 17132): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 170.00s, trace 17010. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17248}.
<a id="trace-17248"></a>
<a id="trace-17250"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17287"></a>
<a id="trace-17289"></a>
<a id="trace-17318"></a>
<a id="trace-17320"></a>
<a id="trace-17328"></a>
<a id="trace-17330"></a>
- 172.30s–174.80s (×10), actor 5, squad 0 (trace 17248): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 17013. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499712749640594, 'next_transition': 17271}.
<a id="trace-17338"></a>
- 174.95s–174.95s (×1), actor 1, squad 0 (trace 17338): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 170.00s, trace 17010. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17699}.
<a id="trace-17699"></a>
<a id="trace-17701"></a>
<a id="trace-17712"></a>
<a id="trace-17714"></a>
<a id="trace-17742"></a>
<a id="trace-17744"></a>
<a id="trace-17753"></a>
<a id="trace-17755"></a>
<a id="trace-17784"></a>
<a id="trace-17786"></a>
<a id="trace-17810"></a>
<a id="trace-17812"></a>
<a id="trace-17893"></a>
<a id="trace-17895"></a>
<a id="trace-17909"></a>
<a id="trace-17911"></a>
<a id="trace-18001"></a>
<a id="trace-18003"></a>
<a id="trace-18040"></a>
<a id="trace-18042"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18089"></a>
<a id="trace-18091"></a>
<a id="trace-18109"></a>
<a id="trace-18111"></a>
<a id="trace-18126"></a>
<a id="trace-18128"></a>
<a id="trace-18150"></a>
<a id="trace-18152"></a>
<a id="trace-18170"></a>
<a id="trace-18172"></a>
<a id="trace-18200"></a>
<a id="trace-18202"></a>
<a id="trace-18220"></a>
<a id="trace-18222"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18317"></a>
<a id="trace-18319"></a>
<a id="trace-18337"></a>
<a id="trace-18339"></a>
<a id="trace-18357"></a>
<a id="trace-18359"></a>
<a id="trace-18376"></a>
<a id="trace-18378"></a>
<a id="trace-18407"></a>
<a id="trace-18409"></a>
<a id="trace-18425"></a>
<a id="trace-18427"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18466"></a>
<a id="trace-18468"></a>
<a id="trace-18550"></a>
<a id="trace-18552"></a>
<a id="trace-18564"></a>
<a id="trace-18566"></a>
- 175.30s–190.80s (×58), actor 5, squad 0 (trace 17699): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17631. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17712}.
<a id="trace-18577"></a>
- 190.85s–190.85s (×1), actor 3, squad 0 (trace 18577): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 190.00s, trace 18477. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18897}.
<a id="trace-18897"></a>
<a id="trace-18920"></a>
<a id="trace-18951"></a>
<a id="trace-18975"></a>
- 191.30s–192.80s (×4), actor 5, squad 0 (trace 18897): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 18479. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150002622538592, 'next_transition': 18920}.
<a id="trace-1946"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (events line 1946): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18958"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 18958): renew committed intent (75 s lifetime). Knowledge: actor memory at 192.35s, trace 18958. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19608}.
<a id="trace-18998"></a>
- 193.25s–193.25s (×1), actor 3, squad 0 (trace 18998): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 18477. Next observer evidence: None.
<a id="trace-18999"></a>
- 193.25s–193.25s (×1), actor 3, squad 0 (trace 18999): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 18477. Next observer evidence: None.
<a id="trace-19315"></a>
<a id="trace-19333"></a>
<a id="trace-19335"></a>
<a id="trace-19358"></a>
<a id="trace-19360"></a>
<a id="trace-19392"></a>
<a id="trace-19394"></a>
<a id="trace-19491"></a>
<a id="trace-19493"></a>
<a id="trace-19517"></a>
<a id="trace-19519"></a>
<a id="trace-19540"></a>
<a id="trace-19542"></a>
<a id="trace-19571"></a>
<a id="trace-19573"></a>
- 193.30s–196.80s (×15), actor 5, squad 0 (trace 19315): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 192.35s, trace 18958. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43260054975623446, 'next_transition': 19333}.
<a id="trace-19580"></a>
- 196.80s–196.80s (×1), actor 3, squad 0 (trace 19580): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 195.00s, trace 19410. Next observer evidence: {'until': 198.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.488513610222131, 'next_transition': 19648}.
<a id="trace-19608"></a>
- 197.30s–197.30s (×1), actor 9, squad 1 (trace 19608): MoveTactically. Knowledge: actor memory at 195.00s, trace 19415. Next observer evidence: None.
<a id="trace-19609"></a>
- 197.30s–197.30s (×1), actor 9, squad 1 (trace 19609): received platoon directive. Knowledge: actor memory at 195.00s, trace 19415. Next observer evidence: None.
<a id="trace-19615"></a>
- 197.35s–197.35s (×1), actor 9, squad 1 (trace 19615): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 195.00s, trace 19415. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25814}.
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19668"></a>
<a id="trace-19670"></a>
<a id="trace-19686"></a>
<a id="trace-19688"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-19813"></a>
<a id="trace-19815"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
- 198.30s–201.30s (×12), actor 5, squad 0 (trace 19648): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 19412. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40767643493406985, 'next_transition': 19668}.
<a id="trace-19841"></a>
- 201.30s–201.30s (×1), actor 3, squad 0 (trace 19841): Fixing. Knowledge: actor memory at 200.00s, trace 19713. Next observer evidence: {'until': 201.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8668968451035284, 'next_transition': 19857}.
<a id="trace-19857"></a>
<a id="trace-19859"></a>
<a id="trace-19881"></a>
<a id="trace-19883"></a>
<a id="trace-19895"></a>
<a id="trace-19897"></a>
<a id="trace-19929"></a>
<a id="trace-19931"></a>
<a id="trace-19961"></a>
<a id="trace-19963"></a>
<a id="trace-20013"></a>
<a id="trace-20015"></a>
- 201.80s–204.80s (×12), actor 5, squad 0 (trace 19857): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 19715. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.48767942811629306, 'next_transition': 19881}.
<a id="trace-20049"></a>
- 205.10s–205.10s (×1), actor 4, squad 0 (trace 20049): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 205.00s, trace 20030. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152710956990574, 'next_transition': 22518}.
<a id="trace-22453"></a>
- 205.10s–205.10s (×1), actor 4, squad 0 (trace 22453): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 205.00s, trace 20030. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152710956990574, 'next_transition': 22518}.
<a id="trace-22454"></a>
- 205.10s–205.10s (×1), actor 4, squad 0 (trace 22454): MoveTactically. Knowledge: actor memory at 205.00s, trace 20030. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152710956990574, 'next_transition': 22518}.
<a id="trace-22455"></a>
- 205.10s–205.10s (×1), actor 4, squad 0 (trace 22455): contact cover complete: assessment resumes closure. Knowledge: actor memory at 205.00s, trace 20030. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152710956990574, 'next_transition': 22518}.
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-22552"></a>
<a id="trace-22554"></a>
<a id="trace-22597"></a>
<a id="trace-22599"></a>
<a id="trace-22646"></a>
<a id="trace-22648"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22740"></a>
<a id="trace-22742"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22868"></a>
<a id="trace-22967"></a>
<a id="trace-22983"></a>
<a id="trace-22998"></a>
<a id="trace-23008"></a>
<a id="trace-23010"></a>
<a id="trace-23029"></a>
<a id="trace-23031"></a>
<a id="trace-23041"></a>
<a id="trace-23043"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23166"></a>
<a id="trace-23168"></a>
<a id="trace-23208"></a>
<a id="trace-23210"></a>
<a id="trace-23227"></a>
<a id="trace-23229"></a>
<a id="trace-23239"></a>
<a id="trace-23241"></a>
<a id="trace-23261"></a>
<a id="trace-23263"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23339"></a>
<a id="trace-23341"></a>
- 205.30s–219.80s (×44), actor 5, squad 0 (trace 22518): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 20031. Next observer evidence: {'until': 205.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9457918160145505, 'next_transition': 22552}.
<a id="trace-2370"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (events line 2370): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002649999999999597, 'next_transition': 23445}.
<a id="trace-23374"></a>
- 220.00s–220.00s (×1), actor 5, squad 0 (trace 23374): renew committed intent (75 s lifetime). Knowledge: actor memory at 220.00s, trace 23374. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002649999999999597, 'next_transition': 23445}.
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23566"></a>
<a id="trace-23568"></a>
<a id="trace-23610"></a>
<a id="trace-23612"></a>
<a id="trace-23655"></a>
<a id="trace-23657"></a>
<a id="trace-23686"></a>
<a id="trace-23688"></a>
<a id="trace-23731"></a>
<a id="trace-23733"></a>
<a id="trace-23769"></a>
<a id="trace-23771"></a>
<a id="trace-23874"></a>
<a id="trace-23876"></a>
<a id="trace-23918"></a>
<a id="trace-23920"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-24047"></a>
<a id="trace-24049"></a>
<a id="trace-24073"></a>
<a id="trace-24075"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24121"></a>
<a id="trace-24123"></a>
<a id="trace-24186"></a>
<a id="trace-24188"></a>
<a id="trace-24335"></a>
<a id="trace-24337"></a>
<a id="trace-24381"></a>
<a id="trace-24383"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
<a id="trace-24460"></a>
<a id="trace-24462"></a>
<a id="trace-24485"></a>
<a id="trace-24487"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24546"></a>
<a id="trace-24548"></a>
<a id="trace-24557"></a>
<a id="trace-24559"></a>
<a id="trace-24632"></a>
<a id="trace-24634"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24674"></a>
<a id="trace-24676"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24725"></a>
<a id="trace-24727"></a>
<a id="trace-24733"></a>
<a id="trace-24735"></a>
<a id="trace-24766"></a>
<a id="trace-24768"></a>
<a id="trace-24792"></a>
<a id="trace-24794"></a>
<a id="trace-24883"></a>
<a id="trace-24885"></a>
<a id="trace-24924"></a>
<a id="trace-24926"></a>
<a id="trace-25002"></a>
<a id="trace-25004"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25071"></a>
<a id="trace-25073"></a>
<a id="trace-25083"></a>
<a id="trace-25085"></a>
<a id="trace-25096"></a>
<a id="trace-25098"></a>
<a id="trace-25182"></a>
<a id="trace-25184"></a>
<a id="trace-25194"></a>
<a id="trace-25196"></a>
<a id="trace-25209"></a>
<a id="trace-25211"></a>
<a id="trace-25236"></a>
<a id="trace-25238"></a>
<a id="trace-25258"></a>
<a id="trace-25260"></a>
<a id="trace-25272"></a>
<a id="trace-25274"></a>
<a id="trace-25296"></a>
<a id="trace-25298"></a>
<a id="trace-25307"></a>
<a id="trace-25309"></a>
<a id="trace-25375"></a>
<a id="trace-25377"></a>
<a id="trace-25383"></a>
<a id="trace-25385"></a>
<a id="trace-25394"></a>
<a id="trace-25396"></a>
<a id="trace-25402"></a>
<a id="trace-25404"></a>
<a id="trace-25419"></a>
<a id="trace-25421"></a>
<a id="trace-25434"></a>
<a id="trace-25436"></a>
- 220.30s–252.80s (×108), actor 5, squad 0 (trace 23445): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 23374. Next observer evidence: {'until': 220.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0007975000000000065, 'next_transition': 23479}.
<a id="trace-25450"></a>
- 253.25s–253.25s (×1), actor 7, squad 0 (trace 25450): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 250.00s, trace 25314. Next observer evidence: None.
<a id="trace-25460"></a>
<a id="trace-25462"></a>
- 253.30s–253.30s (×2), actor 5, squad 0 (trace 25460): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 25312. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599917274883659, 'next_transition': 25539}.
<a id="trace-25465"></a>
- 253.30s–253.30s (×1), actor 7, squad 0 (trace 25465): Reorganise: completed/failed drill. Knowledge: actor memory at 250.00s, trace 25314. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599917274883659, 'next_transition': 25539}.
<a id="trace-25467"></a>
- 253.30s–253.30s (×1), actor 7, squad 0 (trace 25467): MoveTactically. Knowledge: actor memory at 250.00s, trace 25314. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599917274883659, 'next_transition': 25539}.
<a id="trace-25468"></a>
- 253.30s–253.30s (×1), actor 7, squad 0 (trace 25468): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 250.00s, trace 25314. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599917274883659, 'next_transition': 25539}.
<a id="trace-25539"></a>
<a id="trace-25541"></a>
<a id="trace-25557"></a>
<a id="trace-25559"></a>
<a id="trace-25564"></a>
<a id="trace-25566"></a>
- 253.80s–254.80s (×6), actor 5, squad 0 (trace 25539): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 25312. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399972805807424, 'next_transition': 25557}.
<a id="trace-25572"></a>
- 254.90s–254.90s (×1), actor 7, squad 0 (trace 25572): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 25314. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399845762093333, 'next_transition': 25636}.
<a id="trace-25636"></a>
<a id="trace-25638"></a>
<a id="trace-25644"></a>
<a id="trace-25646"></a>
<a id="trace-25671"></a>
<a id="trace-25688"></a>
<a id="trace-25696"></a>
<a id="trace-25698"></a>
<a id="trace-25716"></a>
<a id="trace-25718"></a>
<a id="trace-25725"></a>
<a id="trace-25727"></a>
- 255.30s–258.80s (×12), actor 5, squad 0 (trace 25636): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 25573. Next observer evidence: {'until': 255.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600096425692058, 'next_transition': 25644}.
<a id="trace-25730"></a>
- 259.25s–259.25s (×1), actor 7, squad 0 (trace 25730): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 255.00s, trace 25575. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300169474704624, 'next_transition': 25740}.
<a id="trace-25740"></a>
<a id="trace-25742"></a>
<a id="trace-25810"></a>
<a id="trace-25812"></a>
<a id="trace-25823"></a>
<a id="trace-25825"></a>
<a id="trace-25848"></a>
<a id="trace-25850"></a>
<a id="trace-25862"></a>
<a id="trace-25864"></a>
<a id="trace-25871"></a>
<a id="trace-25873"></a>
<a id="trace-25883"></a>
<a id="trace-25885"></a>
<a id="trace-25887"></a>
<a id="trace-25889"></a>
<a id="trace-25966"></a>
<a id="trace-25968"></a>
<a id="trace-25976"></a>
<a id="trace-25978"></a>
<a id="trace-25997"></a>
<a id="trace-25999"></a>
<a id="trace-26015"></a>
<a id="trace-26017"></a>
<a id="trace-26027"></a>
<a id="trace-26029"></a>
<a id="trace-26032"></a>
<a id="trace-26034"></a>
<a id="trace-26105"></a>
<a id="trace-26107"></a>
<a id="trace-26127"></a>
<a id="trace-26129"></a>
<a id="trace-26140"></a>
<a id="trace-26142"></a>
<a id="trace-26146"></a>
<a id="trace-26148"></a>
<a id="trace-26163"></a>
<a id="trace-26165"></a>
<a id="trace-26168"></a>
<a id="trace-26170"></a>
<a id="trace-26180"></a>
<a id="trace-26182"></a>
<a id="trace-26185"></a>
<a id="trace-26187"></a>
<a id="trace-26251"></a>
<a id="trace-26253"></a>
<a id="trace-26270"></a>
<a id="trace-26272"></a>
<a id="trace-26279"></a>
<a id="trace-26281"></a>
<a id="trace-26293"></a>
<a id="trace-26295"></a>
<a id="trace-26300"></a>
<a id="trace-26302"></a>
<a id="trace-26317"></a>
<a id="trace-26319"></a>
<a id="trace-26326"></a>
<a id="trace-26328"></a>
<a id="trace-26338"></a>
<a id="trace-26340"></a>
<a id="trace-26345"></a>
<a id="trace-26347"></a>
<a id="trace-26411"></a>
<a id="trace-26413"></a>
<a id="trace-26425"></a>
<a id="trace-26427"></a>
<a id="trace-26443"></a>
<a id="trace-26445"></a>
<a id="trace-26450"></a>
<a id="trace-26452"></a>
<a id="trace-26467"></a>
<a id="trace-26469"></a>
<a id="trace-26473"></a>
<a id="trace-26475"></a>
<a id="trace-26489"></a>
<a id="trace-26491"></a>
<a id="trace-26498"></a>
<a id="trace-26500"></a>
<a id="trace-26567"></a>
<a id="trace-26569"></a>
<a id="trace-26573"></a>
<a id="trace-26575"></a>
<a id="trace-26584"></a>
<a id="trace-26586"></a>
<a id="trace-26591"></a>
<a id="trace-26593"></a>
<a id="trace-26605"></a>
<a id="trace-26607"></a>
<a id="trace-26612"></a>
<a id="trace-26614"></a>
<a id="trace-26625"></a>
<a id="trace-26627"></a>
<a id="trace-26630"></a>
<a id="trace-26632"></a>
- 259.80s–288.80s (×94), actor 5, squad 0 (trace 25740): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 25573. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8194552838183292, 'next_transition': 25810}.
<a id="trace-25814"></a>
- 261.05s–261.05s (×1), actor 9, squad 1 (trace 25814): traveling overwatch. Knowledge: actor memory at 260.00s, trace 25746. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25826}.
<a id="trace-25815"></a>
- 261.05s–261.05s (×1), actor 9, squad 1 (trace 25815): current contact unknown for 10 s. Knowledge: actor memory at 260.00s, trace 25746. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25826}.
<a id="trace-25826"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (trace 25826): renew committed intent (75 s lifetime). Knowledge: actor memory at 261.40s, trace 25826. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2756}.
<a id="trace-2756"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (events line 2756): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25990}.
<a id="trace-25990"></a>
- 267.35s–267.35s (×1), actor 9, squad 1 (trace 25990): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 265.00s, trace 25893. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27932}.
<a id="trace-25991"></a>
- 267.35s–267.35s (×1), actor 9, squad 1 (trace 25991): MoveTactically. Knowledge: actor memory at 265.00s, trace 25893. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27932}.
<a id="trace-25992"></a>
- 267.35s–267.35s (×1), actor 9, squad 1 (trace 25992): . Knowledge: actor memory at 265.00s, trace 25893. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27932}.
<a id="trace-2816"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (events line 2816): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26645}.
<a id="trace-26633"></a>
- 289.00s–289.00s (×1), actor 5, squad 0 (trace 26633): renew committed intent (75 s lifetime). Knowledge: actor memory at 289.00s, trace 26633. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26645}.
<a id="trace-26645"></a>
<a id="trace-26647"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26719"></a>
<a id="trace-26721"></a>
<a id="trace-26741"></a>
<a id="trace-26743"></a>
<a id="trace-26748"></a>
<a id="trace-26750"></a>
<a id="trace-26763"></a>
<a id="trace-26765"></a>
<a id="trace-26771"></a>
<a id="trace-26773"></a>
<a id="trace-26804"></a>
<a id="trace-26806"></a>
<a id="trace-26873"></a>
<a id="trace-26875"></a>
<a id="trace-26887"></a>
<a id="trace-26889"></a>
<a id="trace-26895"></a>
<a id="trace-26897"></a>
<a id="trace-26909"></a>
<a id="trace-26911"></a>
<a id="trace-26930"></a>
<a id="trace-26932"></a>
<a id="trace-26936"></a>
<a id="trace-26938"></a>
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-27021"></a>
<a id="trace-27023"></a>
<a id="trace-27029"></a>
<a id="trace-27031"></a>
<a id="trace-27042"></a>
<a id="trace-27044"></a>
<a id="trace-27060"></a>
<a id="trace-27062"></a>
<a id="trace-27070"></a>
<a id="trace-27072"></a>
<a id="trace-27084"></a>
<a id="trace-27086"></a>
<a id="trace-27108"></a>
<a id="trace-27110"></a>
<a id="trace-27173"></a>
<a id="trace-27175"></a>
<a id="trace-27179"></a>
<a id="trace-27181"></a>
<a id="trace-27208"></a>
<a id="trace-27210"></a>
<a id="trace-27251"></a>
<a id="trace-27253"></a>
<a id="trace-27319"></a>
<a id="trace-27321"></a>
<a id="trace-27325"></a>
<a id="trace-27327"></a>
<a id="trace-27340"></a>
<a id="trace-27342"></a>
<a id="trace-27348"></a>
<a id="trace-27350"></a>
<a id="trace-27360"></a>
<a id="trace-27362"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27396"></a>
<a id="trace-27398"></a>
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27474"></a>
<a id="trace-27476"></a>
<a id="trace-27489"></a>
<a id="trace-27491"></a>
<a id="trace-27496"></a>
<a id="trace-27498"></a>
<a id="trace-27510"></a>
<a id="trace-27512"></a>
<a id="trace-27546"></a>
<a id="trace-27548"></a>
<a id="trace-27551"></a>
<a id="trace-27553"></a>
<a id="trace-27625"></a>
<a id="trace-27627"></a>
<a id="trace-27637"></a>
<a id="trace-27639"></a>
<a id="trace-27646"></a>
<a id="trace-27648"></a>
<a id="trace-27660"></a>
<a id="trace-27662"></a>
<a id="trace-27668"></a>
<a id="trace-27670"></a>
<a id="trace-27682"></a>
<a id="trace-27684"></a>
<a id="trace-27689"></a>
<a id="trace-27691"></a>
<a id="trace-27704"></a>
<a id="trace-27706"></a>
<a id="trace-27708"></a>
<a id="trace-27710"></a>
<a id="trace-27773"></a>
<a id="trace-27775"></a>
<a id="trace-27780"></a>
<a id="trace-27782"></a>
<a id="trace-27796"></a>
<a id="trace-27798"></a>
<a id="trace-27812"></a>
<a id="trace-27814"></a>
<a id="trace-27819"></a>
<a id="trace-27821"></a>
<a id="trace-27833"></a>
<a id="trace-27835"></a>
<a id="trace-27855"></a>
<a id="trace-27857"></a>
<a id="trace-27928"></a>
<a id="trace-27930"></a>
<a id="trace-27939"></a>
<a id="trace-27941"></a>
<a id="trace-27950"></a>
<a id="trace-27952"></a>
<a id="trace-27966"></a>
<a id="trace-27968"></a>
<a id="trace-27973"></a>
<a id="trace-27975"></a>
<a id="trace-27989"></a>
<a id="trace-27991"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28010"></a>
<a id="trace-28012"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
<a id="trace-28085"></a>
<a id="trace-28087"></a>
<a id="trace-28103"></a>
<a id="trace-28105"></a>
<a id="trace-28111"></a>
<a id="trace-28113"></a>
<a id="trace-28133"></a>
<a id="trace-28135"></a>
<a id="trace-28149"></a>
<a id="trace-28151"></a>
<a id="trace-28163"></a>
<a id="trace-28165"></a>
<a id="trace-28229"></a>
<a id="trace-28231"></a>
<a id="trace-28234"></a>
<a id="trace-28236"></a>
<a id="trace-28247"></a>
<a id="trace-28249"></a>
<a id="trace-28257"></a>
<a id="trace-28259"></a>
<a id="trace-28281"></a>
<a id="trace-28283"></a>
<a id="trace-28300"></a>
<a id="trace-28302"></a>
<a id="trace-28316"></a>
<a id="trace-28318"></a>
<a id="trace-28384"></a>
<a id="trace-28386"></a>
<a id="trace-28399"></a>
<a id="trace-28401"></a>
<a id="trace-28407"></a>
<a id="trace-28409"></a>
<a id="trace-28419"></a>
<a id="trace-28421"></a>
<a id="trace-28428"></a>
<a id="trace-28430"></a>
<a id="trace-28443"></a>
<a id="trace-28445"></a>
<a id="trace-28450"></a>
<a id="trace-28452"></a>
- 289.30s–348.80s (×170), actor 5, squad 0 (trace 26645): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 289.00s, trace 26633. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26651}.
<a id="trace-27932"></a>
- 330.40s–330.40s (×1), actor 5, squad 1 (trace 27932): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.40s, trace 27932. Next observer evidence: {'until': 330.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2929}.
<a id="trace-2929"></a>
- 330.40s–330.40s (×1), actor 5, squad 1 (events line 2929): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28080}.
<a id="trace-28080"></a>
- 335.35s–335.35s (×1), actor 9, squad 1 (trace 28080): received platoon directive. Knowledge: actor memory at 335.00s, trace 28017. Next observer evidence: {'until': 358, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3006}.
<a id="trace-28458"></a>
- 349.25s–349.25s (×1), actor 7, squad 0 (trace 28458): traveling overwatch. Knowledge: actor memory at 345.00s, trace 28323. Next observer evidence: None.
<a id="trace-28459"></a>
- 349.25s–349.25s (×1), actor 7, squad 0 (trace 28459): current contact unknown for 10 s. Knowledge: actor memory at 345.00s, trace 28323. Next observer evidence: None.
<a id="trace-28468"></a>
<a id="trace-28470"></a>
<a id="trace-28473"></a>
<a id="trace-28475"></a>
<a id="trace-28542"></a>
<a id="trace-28544"></a>
<a id="trace-28552"></a>
<a id="trace-28554"></a>
<a id="trace-28563"></a>
<a id="trace-28565"></a>
<a id="trace-28569"></a>
<a id="trace-28571"></a>
<a id="trace-28581"></a>
<a id="trace-28583"></a>
<a id="trace-28598"></a>
<a id="trace-28600"></a>
<a id="trace-28619"></a>
<a id="trace-28621"></a>
<a id="trace-28707"></a>
<a id="trace-28709"></a>
<a id="trace-28734"></a>
<a id="trace-28736"></a>
<a id="trace-28740"></a>
<a id="trace-28742"></a>
- 349.30s–357.80s (×24), actor 5, squad 0 (trace 28468): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 28321. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28473}.
<a id="trace-3005"></a>
- 358.00s–358.00s (×1), actor 5, squad 0 (events line 3005): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28758}.
<a id="trace-3006"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (events line 3006): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-28744"></a>
- 358.00s–358.00s (×1), actor 5, squad 0 (trace 28744): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 28744. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28758}.
<a id="trace-28745"></a>
- 358.00s–358.00s (×1), actor 5, squad 0 (trace 28745): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 28745. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28758}.
<a id="trace-28746"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 28746): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 28746. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-28747"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 28747): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 358.00s, trace 28747. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-28758"></a>
<a id="trace-28760"></a>
<a id="trace-28763"></a>
<a id="trace-28765"></a>
<a id="trace-28775"></a>
<a id="trace-28777"></a>
<a id="trace-28779"></a>
<a id="trace-28781"></a>
- 358.30s–359.80s (×8), actor 5, squad 0 (trace 28758): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.00s, trace 28747. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28763}.

## Net delivery

202 matched order/radio deliveries; 507 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.497s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 20.00s leader 0, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 2948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 2949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3157: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3158: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3159: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3160: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3161: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3162: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3163: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3164: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3165: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3166: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3595: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3596: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3597: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3598: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3599: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3600: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3601: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3602: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3603: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3604: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4832: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4841: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4842: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4843: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4844: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4845: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4846: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4847: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4848: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4849: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4850: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 5174: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5180: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5183: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5184: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5185: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5186: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5187: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5188: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5189: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5190: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5191: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5192: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 5416: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5421: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5422: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5425: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5426: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5427: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5428: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5429: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5430: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5431: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5432: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 5433: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 5434: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 5623: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 5624: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 5625: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 5626: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 5657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 5658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5660: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5661: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 5663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5664: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5665: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 5666: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 5667: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5668: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5669: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5670: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5671: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 5672: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 5673: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 5863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 5864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5866: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5867: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 5869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5870: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5871: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 5872: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 5873: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5874: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5875: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5876: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5877: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 5878: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 5879: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 6054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 6055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 6056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 6057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 6058: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 6059: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 6060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 6061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 6062: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 6063: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 6064: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 6065: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 6066: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 6067: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 6068: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 6069: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 6070: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 6071: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 6230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 6231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 6232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 6233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 6234: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 6235: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 6236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 6237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 6238: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 6239: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 6240: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 6241: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 6242: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 6243: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 6244: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 6245: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 6246: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 6247: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 6428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 6429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 6431: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 6432: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 6433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 6434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6435: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6436: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 6437: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 6438: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6439: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6440: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6441: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6442: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 6443: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 6444: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 6626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 6627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 6629: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 6630: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 6631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 6632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6633: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6634: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 6635: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 6636: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6637: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6638: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6639: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6640: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 6641: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 6642: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 6811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 6812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 6813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 6814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 6815: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 6816: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 6817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 6818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 6819: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 6820: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 6821: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 6822: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 6823: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 6824: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 6825: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 6826: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 6827: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 6828: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 7000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 7001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 7002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 7003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 7004: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 7005: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 7006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 7007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 7008: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 7009: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 7010: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 7011: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 7012: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 7013: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 7014: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 7015: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 7016: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 7017: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 7204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 7205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 7206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 7207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 7208: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 7209: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 7210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 7211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 7212: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 7213: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 7214: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 7215: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 7216: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 7217: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 7218: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 7219: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 7220: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 7221: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 7400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 7401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 7403: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 7404: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 7405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 7406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7407: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7408: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 7409: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 7410: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 7411: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7412: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7413: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7414: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 7415: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 7416: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 7583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 7584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 7585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 7586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 7587: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 7588: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 7589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 7590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 7591: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 7592: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 7593: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 7594: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 7595: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 7596: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 7597: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 7598: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 7599: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 7600: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 7774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 7775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 7776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7777: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7778: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 7779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 7780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7781: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7782: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 7783: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 7784: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7785: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7786: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7787: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7788: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 7789: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 7790: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 7970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 7971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 7972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 7973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7974: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7975: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 7976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 7977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 7978: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7979: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 7980: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 7981: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7982: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7983: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7984: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7985: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 7986: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 7987: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 8159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 8160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 8161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 8162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 8163: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 8164: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 8165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 8166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 8167: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 8168: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 8169: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 8170: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 8171: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 8172: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 8173: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 8174: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 8175: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 8176: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 8319: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 8320: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 8364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 8365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 8366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8368: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8369: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 8370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 8371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8372: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8373: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 8374: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 8375: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8376: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8377: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8378: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8379: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 8380: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 8381: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 8770: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 8771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 8772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8774: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8775: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 8776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 8777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 8778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 8779: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 8780: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 8781: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 8782: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 8783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 8784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 8785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 8786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 8787: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 9031: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 9032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 9033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9035: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9036: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 9037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 9038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9040: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 9041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 9042: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9043: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 9047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 9048: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 11910: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 11911: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 11912: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 11913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 11915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 11916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 11917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 11918: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 11919: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 11920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 11921: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 11922: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 11923: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 11924: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 11925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 11926: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 11927: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 15106: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 15107: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 15108: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15111: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 15112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 15113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15114: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15115: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 15116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15117: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15118: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15119: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15120: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 15122: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 15123: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 15413: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 15414: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 15415: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 15416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15417: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15418: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 15419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 15420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 15421: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 15422: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 15423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15424: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15425: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15426: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15427: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 15429: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15430: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 15514: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 15515: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 15899: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 15900: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 15901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15902: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 15903: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 15904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15906: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15907: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15909: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15910: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15911: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15912: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15914: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15915: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 16361: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 16362: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16364: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16365: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 16366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 16367: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16368: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16369: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 16370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16371: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16372: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16373: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16374: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 16376: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 16377: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16794: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 16795: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16797: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16798: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16800: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16801: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16802: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16804: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16805: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16806: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16807: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16809: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16810: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 17010: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 17011: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17013: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 17014: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 17015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17016: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17017: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17018: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17020: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17021: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17022: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17023: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17025: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 17026: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 17628: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 17629: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17631: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17632: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17634: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17635: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17636: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17638: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17639: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17640: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17641: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17643: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17644: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 17918: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 17919: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17921: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17922: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 17924: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17925: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17926: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17928: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17929: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17930: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17931: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17933: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17934: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18233: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 18234: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18236: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18237: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 18238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18239: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18240: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18241: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18243: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18244: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18245: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18247: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18248: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 18477: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18479: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18480: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 18481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18482: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18483: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18484: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18486: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18487: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18488: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18490: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18491: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 18958: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 19410: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 19412: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 19413: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 19414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19415: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19416: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19417: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19419: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19420: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19421: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19423: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19424: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 19713: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19714: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19715: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19716: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 19717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19718: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19719: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19720: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19721: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19722: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19723: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19725: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19726: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 20030: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 20031: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20032: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 20033: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20034: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20035: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 20036: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 20037: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 20038: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 20039: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 20040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 20041: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20042: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 22900: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22901: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22902: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 22903: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22904: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22905: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22906: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22907: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22908: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22909: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22911: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22912: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 23102: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 23103: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 23104: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 23105: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 23106: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 23107: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23108: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23109: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23110: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 23111: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23113: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23114: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 23360: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23361: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23362: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 23363: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 23364: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23365: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23366: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23367: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23368: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23369: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23371: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23372: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23374: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 23789: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23790: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 23791: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 23792: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23793: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23794: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23795: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23796: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23797: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23798: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23800: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23801: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 24204: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 24205: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 24206: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 24207: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 24208: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 24209: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24210: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24211: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 24212: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 24213: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 24214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24215: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24216: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 24566: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 24567: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 24568: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 24569: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 24570: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 24571: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 24572: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 24573: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 24574: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 24575: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 24576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 24577: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 24578: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 24805: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 24806: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 24807: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 24808: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 24809: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 24810: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24811: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24812: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24813: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24815: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24816: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 25105: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25106: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 25107: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 25108: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 25109: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25110: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25111: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 25112: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 25114: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25115: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 25312: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 25313: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 25314: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 25315: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 25316: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25317: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 25318: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 25319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 25320: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25321: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25573: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 25574: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 25575: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 25576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 25577: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25578: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25579: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 25581: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25582: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25743: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 25744: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 25745: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 25746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25747: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25748: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25749: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25751: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25752: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25826: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 25890: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 25891: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 25892: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 25893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25894: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25895: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25896: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25898: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25899: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26035: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 26036: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 26037: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 26038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26039: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26040: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26041: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26043: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26044: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26188: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 26189: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 26190: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26192: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26193: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26194: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26196: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26197: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26348: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 26349: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 26350: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 26351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26352: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26353: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26354: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26356: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26357: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26502: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 26503: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 26504: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 26505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26506: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26507: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26508: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26510: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26511: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 26633: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 26657: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 26658: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 26659: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 26660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 26661: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26662: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26663: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26665: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26666: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 26808: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 26809: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 26810: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 26811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 26812: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26813: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26814: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26816: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26817: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 26958: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 26959: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 26960: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 26961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 26962: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 26963: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 26964: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 26965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 26966: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 26967: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27111: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 27112: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 27113: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 27114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27115: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27116: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27117: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27119: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27120: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27254: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 27255: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 27256: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 27257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27258: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27259: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27260: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27262: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27263: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 27405: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 27406: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 27407: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 27408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 27409: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 27410: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 27411: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 27412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 27413: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 27414: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 27554: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 27555: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 27556: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 27557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 27558: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 27559: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 27560: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 27561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 27562: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 27563: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 27711: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 27712: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 27713: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 27714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 27715: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 27716: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 27717: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 27718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 27719: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 27720: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 27864: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 27865: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 27866: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 27867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 27868: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 27869: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 27870: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 27871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 27872: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 27873: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.40s leader 5, trace 27932: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 28014: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 28015: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 28016: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 28017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 28018: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 28019: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 28020: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 28021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 28022: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 28023: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 28167: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 28168: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 28169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 28170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 28171: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 28172: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 28173: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 28174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 28175: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 28176: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 28321: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 28322: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 28323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 28324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 28325: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 28326: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 28327: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 28328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 28329: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 28330: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 28480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 28481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 28482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 28483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 28484: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 28485: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 28486: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 28487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 28488: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 28489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 28622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 28623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 28624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 28625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 28626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 28627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 28628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 28629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 28630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 28631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 28744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 28745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 28746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 28747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 28782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 28783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 28784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 28785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 28786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 28787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 28788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 28789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 28790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 28791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Bram killed in action
- 1: Rook incapacitated
- 1: Orin killed in action
- 1: Ash incapacitated
- 1: Holt killed in action
- 1: Voss incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
