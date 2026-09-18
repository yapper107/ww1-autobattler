# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/3/107/good-ember/battle-107-1789673683070459932`

## Battle summary

**Ember** · 360 s · 116 shots.

### Turning points

- 14.7s, squad 0: contact (events line 151). First recorded contact.
- 19.6s, squad 0: help call ([trace 2100](#trace-2100)). No completion observed before termination.
- 26.6s, squad 0: help call ([trace 3288](#trace-3288)). No completion observed before termination.
- 30.4s, squad 0: withdrawal ([trace 3639](#trace-3639)). 50.5s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 5 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 111 shots, 0/6 lost.

### Decisions and attribution

At 15.1s, squad 0 chose took cover and returned fire ([trace 1226](#trace-1226)), followed by 1 shots and 0 own casualties; estimate 1.5 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1050](#trace-1050)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1049](#trace-1049)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687646630227632, 'next_transition': 1067}.
- 39.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.651457 retreat threshold=0.220000 initiative=requires intent ([trace 3986](#trace-3986)). Following evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600128802009587, 'next_transition': 4061}.

### Communication

68 matched deliveries (mean 0.47s, max 5.25s); 228 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.65s, squad 0, contact, evidence events line 151: First recorded contact; .
- 19.60s, squad 0, help call, evidence 2100: NeedSupport; No completion observed before termination.
- 26.55s, squad 0, help call, evidence 3288: NeedSupport; No completion observed before termination.
- 30.40s, squad 0, withdrawal, evidence 3639: BreakContact: believed ratio at least two without superiority; 50.5s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.94431142841396, 'next_transition': 503}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.94431142841396, 'next_transition': 503}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.94431142841396, 'next_transition': 503}.
<a id="trace-323"></a>
<a id="trace-341"></a>
<a id="trace-357"></a>
<a id="trace-372"></a>
<a id="trace-383"></a>
<a id="trace-399"></a>
<a id="trace-418"></a>
<a id="trace-505"></a>
<a id="trace-528"></a>
<a id="trace-547"></a>
<a id="trace-560"></a>
<a id="trace-577"></a>
<a id="trace-599"></a>
<a id="trace-620"></a>
<a id="trace-631"></a>
<a id="trace-640"></a>
<a id="trace-722"></a>
<a id="trace-731"></a>
<a id="trace-1003"></a>
<a id="trace-1025"></a>
<a id="trace-1048"></a>
<a id="trace-1069"></a>
<a id="trace-1089"></a>
<a id="trace-1108"></a>
<a id="trace-1136"></a>
<a id="trace-1153"></a>
<a id="trace-1581"></a>
<a id="trace-1940"></a>
<a id="trace-1980"></a>
<a id="trace-2016"></a>
<a id="trace-2031"></a>
<a id="trace-2049"></a>
<a id="trace-2071"></a>
<a id="trace-2081"></a>
<a id="trace-2093"></a>
<a id="trace-2109"></a>
<a id="trace-2189"></a>
<a id="trace-2486"></a>
<a id="trace-2493"></a>
<a id="trace-2517"></a>
<a id="trace-2537"></a>
<a id="trace-2543"></a>
<a id="trace-2562"></a>
<a id="trace-2838"></a>
<a id="trace-2848"></a>
<a id="trace-2873"></a>
<a id="trace-2947"></a>
<a id="trace-3259"></a>
<a id="trace-3278"></a>
<a id="trace-3299"></a>
<a id="trace-3484"></a>
<a id="trace-3502"></a>
<a id="trace-3516"></a>
<a id="trace-3534"></a>
<a id="trace-3546"></a>
<a id="trace-3558"></a>
<a id="trace-3635"></a>
<a id="trace-3758"></a>
<a id="trace-3769"></a>
<a id="trace-3777"></a>
<a id="trace-3791"></a>
<a id="trace-3804"></a>
<a id="trace-3812"></a>
<a id="trace-3818"></a>
<a id="trace-3828"></a>
<a id="trace-3834"></a>
<a id="trace-3902"></a>
<a id="trace-3908"></a>
<a id="trace-3923"></a>
<a id="trace-3940"></a>
<a id="trace-3949"></a>
<a id="trace-3955"></a>
<a id="trace-3966"></a>
<a id="trace-3972"></a>
<a id="trace-3979"></a>
<a id="trace-3985"></a>
<a id="trace-4063"></a>
<a id="trace-4076"></a>
<a id="trace-4085"></a>
<a id="trace-4093"></a>
<a id="trace-4107"></a>
<a id="trace-4119"></a>
<a id="trace-4131"></a>
<a id="trace-4136"></a>
<a id="trace-4148"></a>
<a id="trace-4165"></a>
<a id="trace-4237"></a>
<a id="trace-4245"></a>
<a id="trace-4260"></a>
<a id="trace-4269"></a>
<a id="trace-4277"></a>
<a id="trace-4283"></a>
<a id="trace-4290"></a>
<a id="trace-4298"></a>
<a id="trace-4307"></a>
<a id="trace-4313"></a>
<a id="trace-4384"></a>
<a id="trace-4401"></a>
<a id="trace-4417"></a>
<a id="trace-4426"></a>
<a id="trace-4442"></a>
<a id="trace-4462"></a>
<a id="trace-4470"></a>
<a id="trace-4476"></a>
<a id="trace-4488"></a>
<a id="trace-4496"></a>
<a id="trace-4565"></a>
<a id="trace-4571"></a>
<a id="trace-4580"></a>
<a id="trace-4589"></a>
<a id="trace-4598"></a>
<a id="trace-4606"></a>
<a id="trace-4615"></a>
<a id="trace-4621"></a>
<a id="trace-4632"></a>
<a id="trace-4642"></a>
<a id="trace-4711"></a>
<a id="trace-4718"></a>
<a id="trace-4725"></a>
<a id="trace-4734"></a>
<a id="trace-4742"></a>
<a id="trace-4750"></a>
<a id="trace-4761"></a>
<a id="trace-4766"></a>
<a id="trace-4776"></a>
<a id="trace-4782"></a>
<a id="trace-4852"></a>
<a id="trace-4862"></a>
<a id="trace-4871"></a>
<a id="trace-4883"></a>
<a id="trace-4890"></a>
<a id="trace-4898"></a>
<a id="trace-4907"></a>
<a id="trace-4912"></a>
<a id="trace-4923"></a>
<a id="trace-4931"></a>
<a id="trace-5000"></a>
<a id="trace-5006"></a>
<a id="trace-5014"></a>
<a id="trace-5024"></a>
<a id="trace-5032"></a>
<a id="trace-5043"></a>
<a id="trace-5050"></a>
<a id="trace-5056"></a>
<a id="trace-5067"></a>
<a id="trace-5074"></a>
<a id="trace-5144"></a>
<a id="trace-5150"></a>
<a id="trace-5159"></a>
<a id="trace-5168"></a>
<a id="trace-5175"></a>
<a id="trace-5184"></a>
<a id="trace-5191"></a>
<a id="trace-5199"></a>
<a id="trace-5208"></a>
<a id="trace-5215"></a>
<a id="trace-5287"></a>
<a id="trace-5294"></a>
<a id="trace-5304"></a>
<a id="trace-5314"></a>
<a id="trace-5323"></a>
<a id="trace-5330"></a>
<a id="trace-5338"></a>
<a id="trace-5344"></a>
<a id="trace-5352"></a>
<a id="trace-5360"></a>
<a id="trace-5429"></a>
<a id="trace-5435"></a>
<a id="trace-5443"></a>
<a id="trace-5452"></a>
<a id="trace-5463"></a>
<a id="trace-5471"></a>
<a id="trace-5482"></a>
<a id="trace-5489"></a>
<a id="trace-5498"></a>
<a id="trace-5508"></a>
<a id="trace-5576"></a>
<a id="trace-5584"></a>
<a id="trace-5591"></a>
<a id="trace-5599"></a>
<a id="trace-5607"></a>
<a id="trace-5615"></a>
<a id="trace-5624"></a>
<a id="trace-5629"></a>
<a id="trace-5639"></a>
<a id="trace-5648"></a>
<a id="trace-5716"></a>
<a id="trace-5727"></a>
<a id="trace-5737"></a>
<a id="trace-5747"></a>
<a id="trace-5754"></a>
<a id="trace-5760"></a>
<a id="trace-5768"></a>
<a id="trace-5772"></a>
<a id="trace-5782"></a>
<a id="trace-5789"></a>
<a id="trace-5858"></a>
<a id="trace-5863"></a>
<a id="trace-5873"></a>
<a id="trace-5884"></a>
<a id="trace-5893"></a>
<a id="trace-5907"></a>
<a id="trace-5915"></a>
<a id="trace-5920"></a>
<a id="trace-5929"></a>
<a id="trace-5935"></a>
<a id="trace-6005"></a>
<a id="trace-6011"></a>
<a id="trace-6019"></a>
<a id="trace-6027"></a>
<a id="trace-6035"></a>
<a id="trace-6045"></a>
<a id="trace-6053"></a>
<a id="trace-6064"></a>
<a id="trace-6077"></a>
<a id="trace-6084"></a>
<a id="trace-6155"></a>
<a id="trace-6162"></a>
<a id="trace-6171"></a>
<a id="trace-6179"></a>
<a id="trace-6187"></a>
<a id="trace-6194"></a>
<a id="trace-6201"></a>
<a id="trace-6208"></a>
<a id="trace-6217"></a>
<a id="trace-6226"></a>
<a id="trace-6296"></a>
<a id="trace-6303"></a>
<a id="trace-6315"></a>
<a id="trace-6323"></a>
<a id="trace-6335"></a>
<a id="trace-6342"></a>
<a id="trace-6350"></a>
<a id="trace-6355"></a>
<a id="trace-6363"></a>
<a id="trace-6371"></a>
<a id="trace-6439"></a>
<a id="trace-6447"></a>
<a id="trace-6455"></a>
<a id="trace-6464"></a>
<a id="trace-6473"></a>
<a id="trace-6483"></a>
<a id="trace-6494"></a>
<a id="trace-6501"></a>
<a id="trace-6511"></a>
<a id="trace-6517"></a>
<a id="trace-6586"></a>
<a id="trace-6594"></a>
<a id="trace-6601"></a>
<a id="trace-6610"></a>
<a id="trace-6617"></a>
<a id="trace-6625"></a>
<a id="trace-6633"></a>
<a id="trace-6640"></a>
<a id="trace-6652"></a>
<a id="trace-6659"></a>
<a id="trace-6732"></a>
<a id="trace-6737"></a>
<a id="trace-6746"></a>
<a id="trace-6757"></a>
<a id="trace-6765"></a>
<a id="trace-6774"></a>
<a id="trace-6781"></a>
<a id="trace-6785"></a>
<a id="trace-6794"></a>
<a id="trace-6799"></a>
<a id="trace-6871"></a>
<a id="trace-6880"></a>
<a id="trace-6890"></a>
<a id="trace-6900"></a>
<a id="trace-6909"></a>
<a id="trace-6920"></a>
<a id="trace-6928"></a>
<a id="trace-6937"></a>
<a id="trace-6945"></a>
<a id="trace-6951"></a>
<a id="trace-7020"></a>
<a id="trace-7026"></a>
<a id="trace-7036"></a>
<a id="trace-7043"></a>
<a id="trace-7054"></a>
<a id="trace-7060"></a>
<a id="trace-7068"></a>
<a id="trace-7074"></a>
<a id="trace-7084"></a>
<a id="trace-7093"></a>
<a id="trace-7162"></a>
<a id="trace-7168"></a>
<a id="trace-7179"></a>
<a id="trace-7186"></a>
<a id="trace-7196"></a>
<a id="trace-7203"></a>
<a id="trace-7212"></a>
<a id="trace-7217"></a>
<a id="trace-7227"></a>
<a id="trace-7235"></a>
<a id="trace-7305"></a>
<a id="trace-7311"></a>
<a id="trace-7319"></a>
<a id="trace-7327"></a>
<a id="trace-7338"></a>
<a id="trace-7346"></a>
<a id="trace-7357"></a>
<a id="trace-7363"></a>
<a id="trace-7372"></a>
<a id="trace-7378"></a>
<a id="trace-7448"></a>
<a id="trace-7457"></a>
<a id="trace-7465"></a>
<a id="trace-7474"></a>
<a id="trace-7482"></a>
<a id="trace-7489"></a>
<a id="trace-7497"></a>
<a id="trace-7504"></a>
<a id="trace-7515"></a>
<a id="trace-7522"></a>
<a id="trace-7595"></a>
<a id="trace-7602"></a>
<a id="trace-7610"></a>
<a id="trace-7620"></a>
<a id="trace-7629"></a>
<a id="trace-7638"></a>
<a id="trace-7645"></a>
<a id="trace-7650"></a>
<a id="trace-7659"></a>
<a id="trace-7666"></a>
<a id="trace-7737"></a>
<a id="trace-7743"></a>
<a id="trace-7755"></a>
<a id="trace-7763"></a>
<a id="trace-7772"></a>
<a id="trace-7782"></a>
<a id="trace-7791"></a>
<a id="trace-7800"></a>
<a id="trace-7808"></a>
<a id="trace-7813"></a>
<a id="trace-7883"></a>
<a id="trace-7888"></a>
<a id="trace-7898"></a>
<a id="trace-7906"></a>
<a id="trace-7914"></a>
<a id="trace-7921"></a>
<a id="trace-7930"></a>
<a id="trace-7940"></a>
<a id="trace-7948"></a>
<a id="trace-7960"></a>
<a id="trace-8032"></a>
<a id="trace-8037"></a>
<a id="trace-8046"></a>
<a id="trace-8053"></a>
<a id="trace-8062"></a>
<a id="trace-8068"></a>
<a id="trace-8076"></a>
<a id="trace-8081"></a>
<a id="trace-8090"></a>
<a id="trace-8098"></a>
<a id="trace-8169"></a>
<a id="trace-8179"></a>
<a id="trace-8190"></a>
<a id="trace-8197"></a>
<a id="trace-8208"></a>
<a id="trace-8216"></a>
<a id="trace-8225"></a>
<a id="trace-8230"></a>
<a id="trace-8239"></a>
<a id="trace-8244"></a>
<a id="trace-8313"></a>
<a id="trace-8320"></a>
<a id="trace-8329"></a>
<a id="trace-8338"></a>
<a id="trace-8347"></a>
<a id="trace-8354"></a>
<a id="trace-8364"></a>
<a id="trace-8373"></a>
<a id="trace-8385"></a>
<a id="trace-8392"></a>
<a id="trace-8462"></a>
<a id="trace-8467"></a>
<a id="trace-8475"></a>
<a id="trace-8483"></a>
<a id="trace-8490"></a>
<a id="trace-8499"></a>
<a id="trace-8506"></a>
<a id="trace-8513"></a>
<a id="trace-8521"></a>
<a id="trace-8529"></a>
<a id="trace-8604"></a>
<a id="trace-8611"></a>
<a id="trace-8622"></a>
<a id="trace-8629"></a>
<a id="trace-8636"></a>
<a id="trace-8645"></a>
<a id="trace-8651"></a>
<a id="trace-8658"></a>
<a id="trace-8666"></a>
<a id="trace-8671"></a>
<a id="trace-8742"></a>
<a id="trace-8748"></a>
<a id="trace-8758"></a>
<a id="trace-8768"></a>
<a id="trace-8779"></a>
<a id="trace-8786"></a>
<a id="trace-8795"></a>
<a id="trace-8804"></a>
<a id="trace-8813"></a>
<a id="trace-8821"></a>
<a id="trace-8890"></a>
<a id="trace-8896"></a>
<a id="trace-8905"></a>
<a id="trace-8913"></a>
<a id="trace-8922"></a>
<a id="trace-8930"></a>
<a id="trace-8941"></a>
<a id="trace-8946"></a>
<a id="trace-8955"></a>
<a id="trace-8965"></a>
<a id="trace-9036"></a>
<a id="trace-9044"></a>
<a id="trace-9053"></a>
<a id="trace-9063"></a>
<a id="trace-9075"></a>
<a id="trace-9086"></a>
<a id="trace-9096"></a>
<a id="trace-9101"></a>
<a id="trace-9115"></a>
<a id="trace-9121"></a>
<a id="trace-9193"></a>
<a id="trace-9199"></a>
<a id="trace-9209"></a>
<a id="trace-9219"></a>
<a id="trace-9227"></a>
<a id="trace-9234"></a>
<a id="trace-9245"></a>
<a id="trace-9249"></a>
<a id="trace-9259"></a>
<a id="trace-9265"></a>
<a id="trace-9336"></a>
<a id="trace-9340"></a>
<a id="trace-9349"></a>
<a id="trace-9360"></a>
<a id="trace-9367"></a>
<a id="trace-9376"></a>
<a id="trace-9384"></a>
<a id="trace-9389"></a>
<a id="trace-9401"></a>
<a id="trace-9408"></a>
<a id="trace-9481"></a>
<a id="trace-9487"></a>
<a id="trace-9496"></a>
<a id="trace-9503"></a>
<a id="trace-9510"></a>
<a id="trace-9520"></a>
<a id="trace-9529"></a>
<a id="trace-9535"></a>
<a id="trace-9544"></a>
<a id="trace-9550"></a>
<a id="trace-9620"></a>
<a id="trace-9627"></a>
<a id="trace-9639"></a>
<a id="trace-9647"></a>
<a id="trace-9658"></a>
<a id="trace-9666"></a>
<a id="trace-9674"></a>
<a id="trace-9681"></a>
<a id="trace-9690"></a>
<a id="trace-9700"></a>
<a id="trace-9769"></a>
<a id="trace-9773"></a>
<a id="trace-9782"></a>
<a id="trace-9790"></a>
<a id="trace-9799"></a>
<a id="trace-9806"></a>
<a id="trace-9817"></a>
<a id="trace-9823"></a>
<a id="trace-9832"></a>
<a id="trace-9843"></a>
<a id="trace-9913"></a>
<a id="trace-9921"></a>
<a id="trace-9931"></a>
<a id="trace-9937"></a>
<a id="trace-9945"></a>
<a id="trace-9952"></a>
<a id="trace-9961"></a>
<a id="trace-9967"></a>
<a id="trace-9976"></a>
<a id="trace-9982"></a>
<a id="trace-10052"></a>
<a id="trace-10060"></a>
<a id="trace-10070"></a>
<a id="trace-10082"></a>
<a id="trace-10090"></a>
<a id="trace-10097"></a>
<a id="trace-10107"></a>
<a id="trace-10112"></a>
<a id="trace-10121"></a>
<a id="trace-10127"></a>
<a id="trace-10197"></a>
<a id="trace-10201"></a>
<a id="trace-10209"></a>
<a id="trace-10218"></a>
<a id="trace-10225"></a>
<a id="trace-10237"></a>
<a id="trace-10247"></a>
<a id="trace-10252"></a>
<a id="trace-10264"></a>
<a id="trace-10273"></a>
<a id="trace-10343"></a>
<a id="trace-10348"></a>
<a id="trace-10357"></a>
<a id="trace-10363"></a>
<a id="trace-10370"></a>
<a id="trace-10378"></a>
<a id="trace-10386"></a>
<a id="trace-10393"></a>
<a id="trace-10402"></a>
<a id="trace-10409"></a>
<a id="trace-10480"></a>
<a id="trace-10488"></a>
<a id="trace-10502"></a>
<a id="trace-10509"></a>
<a id="trace-10517"></a>
<a id="trace-10523"></a>
<a id="trace-10530"></a>
<a id="trace-10537"></a>
<a id="trace-10545"></a>
<a id="trace-10553"></a>
<a id="trace-10622"></a>
<a id="trace-10628"></a>
<a id="trace-10637"></a>
<a id="trace-10646"></a>
<a id="trace-10657"></a>
<a id="trace-10668"></a>
<a id="trace-10678"></a>
<a id="trace-10682"></a>
<a id="trace-10691"></a>
<a id="trace-10699"></a>
<a id="trace-10768"></a>
<a id="trace-10775"></a>
<a id="trace-10782"></a>
<a id="trace-10789"></a>
<a id="trace-10797"></a>
<a id="trace-10806"></a>
<a id="trace-10815"></a>
<a id="trace-10822"></a>
<a id="trace-10836"></a>
<a id="trace-10844"></a>
<a id="trace-10915"></a>
<a id="trace-10924"></a>
<a id="trace-10933"></a>
<a id="trace-10942"></a>
<a id="trace-10949"></a>
<a id="trace-10956"></a>
<a id="trace-10964"></a>
<a id="trace-10969"></a>
<a id="trace-10980"></a>
<a id="trace-10985"></a>
<a id="trace-11058"></a>
<a id="trace-11063"></a>
<a id="trace-11075"></a>
<a id="trace-11086"></a>
<a id="trace-11095"></a>
<a id="trace-11106"></a>
<a id="trace-11114"></a>
<a id="trace-11119"></a>
<a id="trace-11128"></a>
<a id="trace-11134"></a>
<a id="trace-11205"></a>
<a id="trace-11210"></a>
<a id="trace-11219"></a>
<a id="trace-11226"></a>
<a id="trace-11235"></a>
<a id="trace-11246"></a>
<a id="trace-11255"></a>
<a id="trace-11263"></a>
<a id="trace-11272"></a>
<a id="trace-11278"></a>
<a id="trace-11351"></a>
<a id="trace-11356"></a>
<a id="trace-11366"></a>
<a id="trace-11373"></a>
<a id="trace-11380"></a>
<a id="trace-11388"></a>
<a id="trace-11395"></a>
<a id="trace-11403"></a>
<a id="trace-11413"></a>
<a id="trace-11421"></a>
<a id="trace-11490"></a>
<a id="trace-11496"></a>
<a id="trace-11508"></a>
<a id="trace-11516"></a>
<a id="trace-11527"></a>
<a id="trace-11535"></a>
<a id="trace-11543"></a>
<a id="trace-11547"></a>
<a id="trace-11556"></a>
<a id="trace-11563"></a>
<a id="trace-11632"></a>
<a id="trace-11641"></a>
<a id="trace-11651"></a>
<a id="trace-11658"></a>
<a id="trace-11667"></a>
<a id="trace-11676"></a>
<a id="trace-11686"></a>
<a id="trace-11692"></a>
<a id="trace-11704"></a>
<a id="trace-11710"></a>
<a id="trace-11779"></a>
<a id="trace-11786"></a>
<a id="trace-11794"></a>
<a id="trace-11804"></a>
<a id="trace-11814"></a>
<a id="trace-11821"></a>
<a id="trace-11828"></a>
<a id="trace-11834"></a>
<a id="trace-11844"></a>
<a id="trace-11849"></a>
<a id="trace-11922"></a>
<a id="trace-11927"></a>
<a id="trace-11936"></a>
<a id="trace-11947"></a>
<a id="trace-11957"></a>
<a id="trace-11966"></a>
<a id="trace-11974"></a>
<a id="trace-11979"></a>
<a id="trace-11990"></a>
<a id="trace-11995"></a>
<a id="trace-12065"></a>
<a id="trace-12071"></a>
<a id="trace-12080"></a>
<a id="trace-12087"></a>
<a id="trace-12097"></a>
<a id="trace-12108"></a>
<a id="trace-12116"></a>
<a id="trace-12126"></a>
<a id="trace-12136"></a>
<a id="trace-12141"></a>
<a id="trace-12212"></a>
<a id="trace-12218"></a>
<a id="trace-12228"></a>
<a id="trace-12235"></a>
<a id="trace-12244"></a>
<a id="trace-12251"></a>
<a id="trace-12259"></a>
<a id="trace-12266"></a>
<a id="trace-12284"></a>
<a id="trace-12354"></a>
<a id="trace-12359"></a>
<a id="trace-12370"></a>
<a id="trace-12379"></a>
<a id="trace-12391"></a>
<a id="trace-12397"></a>
<a id="trace-12405"></a>
<a id="trace-12410"></a>
<a id="trace-12417"></a>
<a id="trace-12423"></a>
<a id="trace-12493"></a>
<a id="trace-12500"></a>
<a id="trace-12508"></a>
<a id="trace-12516"></a>
<a id="trace-12528"></a>
<a id="trace-12537"></a>
<a id="trace-12549"></a>
<a id="trace-12557"></a>
<a id="trace-12566"></a>
<a id="trace-12570"></a>
<a id="trace-12639"></a>
<a id="trace-12652"></a>
<a id="trace-12661"></a>
<a id="trace-12669"></a>
<a id="trace-12676"></a>
<a id="trace-12684"></a>
<a id="trace-12692"></a>
<a id="trace-12703"></a>
<a id="trace-12710"></a>
<a id="trace-12784"></a>
<a id="trace-12789"></a>
<a id="trace-12798"></a>
<a id="trace-12807"></a>
<a id="trace-12815"></a>
<a id="trace-12824"></a>
<a id="trace-12831"></a>
<a id="trace-12838"></a>
<a id="trace-12847"></a>
<a id="trace-12853"></a>
<a id="trace-12924"></a>
<a id="trace-12942"></a>
<a id="trace-12948"></a>
<a id="trace-12960"></a>
<a id="trace-12971"></a>
<a id="trace-12978"></a>
<a id="trace-12985"></a>
<a id="trace-12992"></a>
<a id="trace-12997"></a>
<a id="trace-13066"></a>
<a id="trace-13071"></a>
<a id="trace-13081"></a>
<a id="trace-13088"></a>
<a id="trace-13099"></a>
<a id="trace-13106"></a>
<a id="trace-13116"></a>
<a id="trace-13127"></a>
<a id="trace-13136"></a>
<a id="trace-13145"></a>
<a id="trace-13215"></a>
<a id="trace-13220"></a>
<a id="trace-13229"></a>
<a id="trace-13236"></a>
<a id="trace-13251"></a>
<a id="trace-13259"></a>
<a id="trace-13265"></a>
<a id="trace-13274"></a>
<a id="trace-13282"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830039667229699, 'next_transition': 341}.
<a id="trace-503"></a>
<a id="trace-558"></a>
<a id="trace-575"></a>
<a id="trace-597"></a>
<a id="trace-618"></a>
<a id="trace-638"></a>
<a id="trace-720"></a>
<a id="trace-729"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 503): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 425. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7492843814597645, 'next_transition': 558}.
<a id="trace-735"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 735): traveling overwatch. Knowledge: actor memory at 10.00s, trace 642. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 1001}.
<a id="trace-736"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 736): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 642. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39999761208728524, 'next_transition': 1001}.
<a id="trace-1001"></a>
<a id="trace-1023"></a>
<a id="trace-1046"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 1001): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 645. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5325922839466203, 'next_transition': 1023}.
<a id="trace-129"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 129): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687646630227632, 'next_transition': 1067}.
<a id="trace-1049"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1049): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1049. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687646630227632, 'next_transition': 1067}.
<a id="trace-1050"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1050): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1050. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6687646630227632, 'next_transition': 1067}.
<a id="trace-1067"></a>
<a id="trace-1087"></a>
<a id="trace-1106"></a>
- 12.70s–13.70s (×3), actor 5, squad 0 (trace 1067): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1050. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8299910237840302, 'next_transition': 1087}.
<a id="trace-1226"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1226): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1156. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1579}.
<a id="trace-1227"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1227): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1156. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1579}.
<a id="trace-1228"></a>
- 15.10s–15.10s (×1), actor 0, squad 0 (trace 1228): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1156. Next observer evidence: {'until': 15.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29498694760321703, 'next_transition': 1579}.
<a id="trace-1579"></a>
- 15.20s–15.20s (×1), actor 5, squad 0 (trace 1579): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1159. Next observer evidence: None.
<a id="trace-1583"></a>
- 15.35s–15.35s (×1), actor 0, squad 0 (trace 1583): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1156. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.570161214471031, 'next_transition': 1978}.
<a id="trace-1978"></a>
<a id="trace-2047"></a>
<a id="trace-2079"></a>
<a id="trace-2091"></a>
- 16.25s–19.25s (×4), actor 5, squad 0 (trace 1978): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1159. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 3.1462262279001845, 'next_transition': 2047}.
<a id="trace-2098"></a>
- 19.60s–19.60s (×1), actor 1, squad 0 (trace 2098): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 15.00s, trace 1157. Next observer evidence: None.
<a id="trace-2100"></a>
- 19.60s–19.60s (×1), actor 1, squad 0 (trace 2100): NeedSupport. Knowledge: actor memory at 15.00s, trace 1157. Next observer evidence: None.
<a id="trace-2107"></a>
<a id="trace-2187"></a>
- 19.75s–20.25s (×2), actor 5, squad 0 (trace 2107): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1159. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6525097517273042, 'next_transition': 2187}.
<a id="trace-2192"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2192): Reorganise: completed/failed drill. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: None.
<a id="trace-2196"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2196): MoveTactically. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: None.
<a id="trace-2197"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2197): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: None.
<a id="trace-2198"></a>
- 20.60s–20.60s (×1), actor 1, squad 0 (trace 2198): Reorganise complete. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: None.
<a id="trace-2484"></a>
<a id="trace-2515"></a>
<a id="trace-2535"></a>
<a id="trace-2541"></a>
- 20.75s–22.75s (×4), actor 5, squad 0 (trace 2484): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2116. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8450073895765393, 'next_transition': 2515}.
<a id="trace-2564"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 2564): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: {'until': 25.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6282942518927284, 'next_transition': 2953}.
<a id="trace-2565"></a>
- 23.55s–23.55s (×1), actor 1, squad 0 (trace 2565): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: {'until': 25.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6282942518927284, 'next_transition': 2953}.
<a id="trace-2566"></a>
<a id="trace-2953"></a>
- 23.55s–25.50s (×2), actor 1, squad 0 (trace 2566): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2114. Next observer evidence: {'until': 25.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6282942518927284, 'next_transition': 2953}.
<a id="trace-3257"></a>
<a id="trace-3276"></a>
- 25.75s–26.25s (×2), actor 5, squad 0 (trace 3257): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2877. Next observer evidence: {'until': 26.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07381530811423848, 'next_transition': 3276}.
<a id="trace-3286"></a>
- 26.55s–26.55s (×1), actor 1, squad 0 (trace 3286): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 25.00s, trace 2875. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3297}.
<a id="trace-3288"></a>
- 26.55s–26.55s (×1), actor 1, squad 0 (trace 3288): NeedSupport. Knowledge: actor memory at 25.00s, trace 2875. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3297}.
<a id="trace-3297"></a>
- 26.75s–26.75s (×1), actor 5, squad 0 (trace 3297): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2877. Next observer evidence: {'until': 26.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3300}.
<a id="trace-3300"></a>
- 26.80s–26.80s (×1), actor 1, squad 0 (trace 3300): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2875. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3482}.
<a id="trace-3303"></a>
- 26.80s–26.80s (×1), actor 1, squad 0 (trace 3303): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2875. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3482}.
<a id="trace-3304"></a>
- 26.80s–26.80s (×1), actor 1, squad 0 (trace 3304): Reorganise complete: known contact. Knowledge: actor memory at 25.00s, trace 2875. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3482}.
<a id="trace-3482"></a>
<a id="trace-3500"></a>
<a id="trace-3514"></a>
<a id="trace-3532"></a>
<a id="trace-3633"></a>
- 27.25s–30.25s (×5), actor 5, squad 0 (trace 3482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2877. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11222499999999958, 'next_transition': 3500}.
<a id="trace-3639"></a>
- 30.40s–30.40s (×1), actor 1, squad 0 (trace 3639): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 3562. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.777500555594383, 'next_transition': 3802}.
<a id="trace-3640"></a>
- 30.40s–30.40s (×1), actor 1, squad 0 (trace 3640): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 3562. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.777500555594383, 'next_transition': 3802}.
<a id="trace-3802"></a>
<a id="trace-3816"></a>
<a id="trace-3900"></a>
<a id="trace-3906"></a>
<a id="trace-3921"></a>
<a id="trace-3938"></a>
<a id="trace-3947"></a>
<a id="trace-3953"></a>
<a id="trace-3970"></a>
<a id="trace-3977"></a>
<a id="trace-3983"></a>
- 32.75s–39.75s (×11), actor 5, squad 0 (trace 3802): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3563. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.369318230170884, 'next_transition': 3816}.
<a id="trace-342"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 342): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3986"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 3986): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.651457 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 3986. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600128802009587, 'next_transition': 4061}.
<a id="trace-3987"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 3987): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.651457 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 3987. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600128802009587, 'next_transition': 4061}.
<a id="trace-4061"></a>
<a id="trace-4074"></a>
<a id="trace-4083"></a>
<a id="trace-4105"></a>
- 40.25s–42.25s (×4), actor 5, squad 0 (trace 4061): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3990. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.27961206883386, 'next_transition': 4074}.
<a id="trace-4108"></a>
- 42.25s–42.25s (×1), actor 1, squad 0 (trace 4108): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 3989. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400283275646793, 'next_transition': 4117}.
<a id="trace-4109"></a>
- 42.25s–42.25s (×1), actor 1, squad 0 (trace 4109): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 3989. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400283275646793, 'next_transition': 4117}.
<a id="trace-4117"></a>
<a id="trace-4129"></a>
<a id="trace-4163"></a>
<a id="trace-4235"></a>
<a id="trace-4243"></a>
<a id="trace-4258"></a>
<a id="trace-4267"></a>
<a id="trace-4275"></a>
<a id="trace-4296"></a>
<a id="trace-4305"></a>
<a id="trace-4311"></a>
<a id="trace-4382"></a>
- 42.75s–50.25s (×12), actor 5, squad 0 (trace 4117): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3990. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2399730771977222, 'next_transition': 4129}.
<a id="trace-4387"></a>
- 50.45s–50.45s (×1), actor 1, squad 0 (trace 4387): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 50.00s, trace 4318. Next observer evidence: None.
<a id="trace-4390"></a>
- 50.50s–50.50s (×1), actor 1, squad 0 (trace 4390): MoveTactically. Knowledge: actor memory at 50.00s, trace 4318. Next observer evidence: None.
<a id="trace-4391"></a>
- 50.50s–50.50s (×1), actor 1, squad 0 (trace 4391): received platoon directive. Knowledge: actor memory at 50.00s, trace 4318. Next observer evidence: None.
<a id="trace-4395"></a>
- 50.55s–50.55s (×1), actor 1, squad 0 (trace 4395): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 4318. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4399}.
<a id="trace-4399"></a>
<a id="trace-4415"></a>
<a id="trace-4424"></a>
<a id="trace-4440"></a>
<a id="trace-4460"></a>
<a id="trace-4468"></a>
<a id="trace-4486"></a>
<a id="trace-4494"></a>
<a id="trace-4563"></a>
<a id="trace-4569"></a>
<a id="trace-4578"></a>
<a id="trace-4596"></a>
<a id="trace-4604"></a>
<a id="trace-4613"></a>
<a id="trace-4619"></a>
<a id="trace-4640"></a>
<a id="trace-4709"></a>
<a id="trace-4723"></a>
<a id="trace-4732"></a>
<a id="trace-4740"></a>
<a id="trace-4748"></a>
<a id="trace-4759"></a>
<a id="trace-4764"></a>
<a id="trace-4774"></a>
<a id="trace-4780"></a>
<a id="trace-4850"></a>
<a id="trace-4860"></a>
<a id="trace-4869"></a>
<a id="trace-4881"></a>
<a id="trace-4888"></a>
<a id="trace-4896"></a>
<a id="trace-4905"></a>
<a id="trace-4910"></a>
<a id="trace-4921"></a>
<a id="trace-4929"></a>
<a id="trace-4998"></a>
<a id="trace-5004"></a>
<a id="trace-5012"></a>
<a id="trace-5022"></a>
<a id="trace-5030"></a>
<a id="trace-5048"></a>
<a id="trace-5072"></a>
<a id="trace-5142"></a>
<a id="trace-5157"></a>
<a id="trace-5166"></a>
<a id="trace-5173"></a>
<a id="trace-5182"></a>
<a id="trace-5189"></a>
<a id="trace-5197"></a>
<a id="trace-5206"></a>
<a id="trace-5213"></a>
<a id="trace-5285"></a>
<a id="trace-5292"></a>
<a id="trace-5312"></a>
<a id="trace-5321"></a>
<a id="trace-5328"></a>
<a id="trace-5350"></a>
<a id="trace-5358"></a>
<a id="trace-5427"></a>
<a id="trace-5433"></a>
<a id="trace-5441"></a>
<a id="trace-5461"></a>
<a id="trace-5469"></a>
<a id="trace-5480"></a>
<a id="trace-5487"></a>
<a id="trace-5496"></a>
<a id="trace-5506"></a>
<a id="trace-5574"></a>
<a id="trace-5582"></a>
<a id="trace-5589"></a>
<a id="trace-5597"></a>
<a id="trace-5605"></a>
<a id="trace-5613"></a>
<a id="trace-5622"></a>
<a id="trace-5646"></a>
<a id="trace-5725"></a>
<a id="trace-5735"></a>
<a id="trace-5745"></a>
<a id="trace-5752"></a>
<a id="trace-5766"></a>
<a id="trace-5780"></a>
<a id="trace-5787"></a>
<a id="trace-5856"></a>
<a id="trace-5871"></a>
<a id="trace-5891"></a>
<a id="trace-5905"></a>
<a id="trace-5913"></a>
<a id="trace-5918"></a>
<a id="trace-5927"></a>
<a id="trace-5933"></a>
<a id="trace-6003"></a>
<a id="trace-6009"></a>
<a id="trace-6017"></a>
<a id="trace-6025"></a>
<a id="trace-6033"></a>
<a id="trace-6043"></a>
<a id="trace-6051"></a>
<a id="trace-6062"></a>
- 50.75s–108.75s (×98), actor 5, squad 0 (trace 4399): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4319. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4415}.
<a id="trace-675"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 675): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6075}.
<a id="trace-6066"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 6066): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 6066. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6075}.
<a id="trace-6075"></a>
<a id="trace-6082"></a>
<a id="trace-6153"></a>
<a id="trace-6160"></a>
<a id="trace-6169"></a>
<a id="trace-6177"></a>
<a id="trace-6185"></a>
<a id="trace-6192"></a>
<a id="trace-6199"></a>
<a id="trace-6206"></a>
<a id="trace-6215"></a>
<a id="trace-6224"></a>
<a id="trace-6294"></a>
<a id="trace-6301"></a>
<a id="trace-6313"></a>
<a id="trace-6333"></a>
<a id="trace-6348"></a>
<a id="trace-6353"></a>
<a id="trace-6361"></a>
<a id="trace-6369"></a>
<a id="trace-6437"></a>
<a id="trace-6445"></a>
<a id="trace-6453"></a>
<a id="trace-6462"></a>
<a id="trace-6471"></a>
<a id="trace-6481"></a>
<a id="trace-6499"></a>
<a id="trace-6509"></a>
<a id="trace-6584"></a>
<a id="trace-6592"></a>
<a id="trace-6599"></a>
<a id="trace-6615"></a>
<a id="trace-6623"></a>
<a id="trace-6631"></a>
<a id="trace-6638"></a>
<a id="trace-6650"></a>
<a id="trace-6657"></a>
<a id="trace-6730"></a>
<a id="trace-6735"></a>
<a id="trace-6755"></a>
<a id="trace-6763"></a>
<a id="trace-6772"></a>
<a id="trace-6779"></a>
<a id="trace-6869"></a>
- 109.25s–135.30s (×44), actor 5, squad 0 (trace 6075): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 6066. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6082}.
<a id="trace-6872"></a>
- 135.40s–135.40s (×1), actor 1, squad 0 (trace 6872): traveling overwatch. Knowledge: actor memory at 135.00s, trace 6801. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6878}.
<a id="trace-6873"></a>
- 135.40s–135.40s (×1), actor 1, squad 0 (trace 6873): current contact unknown for 10 s. Knowledge: actor memory at 135.00s, trace 6801. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6878}.
<a id="trace-6878"></a>
<a id="trace-6888"></a>
- 135.80s–136.30s (×2), actor 5, squad 0 (trace 6878): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 6802. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6888}.
<a id="trace-806"></a>
- 136.60s–136.60s (×1), actor 5, squad 0 (events line 806): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6893"></a>
- 136.60s–136.60s (×1), actor 5, squad 0 (trace 6893): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 136.60s, trace 6893. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6898}.
<a id="trace-6894"></a>
- 136.60s–136.60s (×1), actor 5, squad 0 (trace 6894): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 136.60s, trace 6894. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6898}.
<a id="trace-6898"></a>
<a id="trace-6907"></a>
<a id="trace-6918"></a>
<a id="trace-6935"></a>
<a id="trace-6949"></a>
<a id="trace-7024"></a>
<a id="trace-7034"></a>
- 136.80s–141.30s (×7), actor 5, squad 0 (trace 6898): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.60s, trace 6894. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6907}.
<a id="trace-7044"></a>
- 141.95s–141.95s (×1), actor 1, squad 0 (trace 7044): received platoon directive. Knowledge: actor memory at 140.00s, trace 6954. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7052}.
<a id="trace-7052"></a>
<a id="trace-7066"></a>
<a id="trace-7082"></a>
<a id="trace-7166"></a>
<a id="trace-7184"></a>
<a id="trace-7194"></a>
<a id="trace-7201"></a>
<a id="trace-7210"></a>
<a id="trace-7215"></a>
<a id="trace-7225"></a>
<a id="trace-7233"></a>
<a id="trace-7303"></a>
<a id="trace-7325"></a>
<a id="trace-7336"></a>
<a id="trace-7344"></a>
<a id="trace-7355"></a>
<a id="trace-7361"></a>
<a id="trace-7376"></a>
<a id="trace-7446"></a>
<a id="trace-7455"></a>
<a id="trace-7463"></a>
<a id="trace-7472"></a>
<a id="trace-7480"></a>
<a id="trace-7487"></a>
<a id="trace-7495"></a>
<a id="trace-7502"></a>
<a id="trace-7520"></a>
<a id="trace-7593"></a>
<a id="trace-7600"></a>
<a id="trace-7608"></a>
<a id="trace-7618"></a>
<a id="trace-7627"></a>
<a id="trace-7636"></a>
<a id="trace-7643"></a>
<a id="trace-7648"></a>
<a id="trace-7657"></a>
<a id="trace-7664"></a>
<a id="trace-7735"></a>
<a id="trace-7741"></a>
<a id="trace-7753"></a>
<a id="trace-7761"></a>
<a id="trace-7770"></a>
<a id="trace-7789"></a>
<a id="trace-7798"></a>
<a id="trace-7806"></a>
<a id="trace-7881"></a>
<a id="trace-7886"></a>
<a id="trace-7896"></a>
<a id="trace-7904"></a>
<a id="trace-7912"></a>
<a id="trace-7919"></a>
<a id="trace-7928"></a>
<a id="trace-7938"></a>
<a id="trace-7958"></a>
<a id="trace-8030"></a>
<a id="trace-8035"></a>
<a id="trace-8044"></a>
<a id="trace-8051"></a>
<a id="trace-8060"></a>
<a id="trace-8074"></a>
<a id="trace-8079"></a>
<a id="trace-8088"></a>
<a id="trace-8096"></a>
<a id="trace-8167"></a>
<a id="trace-8177"></a>
<a id="trace-8188"></a>
<a id="trace-8195"></a>
<a id="trace-8214"></a>
<a id="trace-8223"></a>
<a id="trace-8228"></a>
<a id="trace-8237"></a>
<a id="trace-8311"></a>
<a id="trace-8318"></a>
<a id="trace-8327"></a>
<a id="trace-8336"></a>
<a id="trace-8345"></a>
<a id="trace-8371"></a>
<a id="trace-8383"></a>
<a id="trace-8390"></a>
<a id="trace-8460"></a>
<a id="trace-8465"></a>
<a id="trace-8473"></a>
<a id="trace-8488"></a>
<a id="trace-8497"></a>
<a id="trace-8504"></a>
<a id="trace-8511"></a>
<a id="trace-8602"></a>
<a id="trace-8609"></a>
<a id="trace-8620"></a>
<a id="trace-8627"></a>
<a id="trace-8643"></a>
<a id="trace-8656"></a>
<a id="trace-8664"></a>
<a id="trace-8740"></a>
<a id="trace-8746"></a>
<a id="trace-8766"></a>
<a id="trace-8777"></a>
<a id="trace-8784"></a>
<a id="trace-8793"></a>
<a id="trace-8802"></a>
<a id="trace-8811"></a>
<a id="trace-8819"></a>
<a id="trace-8888"></a>
- 142.30s–205.30s (×103), actor 5, squad 0 (trace 7052): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 6955. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7066}.
<a id="trace-1128"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (events line 1128): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8891"></a>
- 205.65s–205.65s (×1), actor 5, squad 0 (trace 8891): renew committed intent (75 s lifetime). Knowledge: actor memory at 205.65s, trace 8891. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8903}.
<a id="trace-8903"></a>
<a id="trace-8911"></a>
<a id="trace-8920"></a>
<a id="trace-8928"></a>
<a id="trace-8939"></a>
<a id="trace-8944"></a>
<a id="trace-8963"></a>
<a id="trace-9034"></a>
<a id="trace-9051"></a>
- 206.30s–211.30s (×9), actor 5, squad 0 (trace 8903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.65s, trace 8891. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8911}.
<a id="trace-9055"></a>
- 211.60s–211.60s (×1), actor 1, squad 0 (trace 9055): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 210.00s, trace 8967. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9061}.
<a id="trace-9056"></a>
- 211.60s–211.60s (×1), actor 1, squad 0 (trace 9056): MoveTactically. Knowledge: actor memory at 210.00s, trace 8967. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9061}.
<a id="trace-9057"></a>
- 211.60s–211.60s (×1), actor 1, squad 0 (trace 9057): . Knowledge: actor memory at 210.00s, trace 8967. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9061}.
<a id="trace-9061"></a>
<a id="trace-9073"></a>
<a id="trace-9084"></a>
<a id="trace-9094"></a>
<a id="trace-9099"></a>
<a id="trace-9113"></a>
<a id="trace-9119"></a>
<a id="trace-9191"></a>
<a id="trace-9207"></a>
<a id="trace-9225"></a>
<a id="trace-9243"></a>
<a id="trace-9257"></a>
<a id="trace-9263"></a>
<a id="trace-9334"></a>
<a id="trace-9347"></a>
<a id="trace-9358"></a>
<a id="trace-9374"></a>
<a id="trace-9382"></a>
<a id="trace-9399"></a>
<a id="trace-9406"></a>
<a id="trace-9479"></a>
<a id="trace-9485"></a>
<a id="trace-9494"></a>
<a id="trace-9508"></a>
<a id="trace-9518"></a>
<a id="trace-9527"></a>
<a id="trace-9542"></a>
<a id="trace-9548"></a>
<a id="trace-9618"></a>
<a id="trace-9625"></a>
<a id="trace-9637"></a>
<a id="trace-9645"></a>
<a id="trace-9656"></a>
<a id="trace-9664"></a>
<a id="trace-9672"></a>
<a id="trace-9679"></a>
<a id="trace-9688"></a>
<a id="trace-9698"></a>
<a id="trace-9767"></a>
<a id="trace-9780"></a>
<a id="trace-9788"></a>
<a id="trace-9797"></a>
<a id="trace-9815"></a>
<a id="trace-9821"></a>
<a id="trace-9830"></a>
<a id="trace-9841"></a>
<a id="trace-9911"></a>
<a id="trace-9919"></a>
<a id="trace-9929"></a>
<a id="trace-9943"></a>
<a id="trace-9950"></a>
<a id="trace-9959"></a>
<a id="trace-9965"></a>
<a id="trace-9974"></a>
<a id="trace-9980"></a>
<a id="trace-10068"></a>
<a id="trace-10080"></a>
<a id="trace-10095"></a>
<a id="trace-10105"></a>
<a id="trace-10110"></a>
<a id="trace-10125"></a>
<a id="trace-10195"></a>
<a id="trace-10216"></a>
<a id="trace-10235"></a>
<a id="trace-10245"></a>
<a id="trace-10250"></a>
<a id="trace-10262"></a>
<a id="trace-10271"></a>
<a id="trace-10346"></a>
<a id="trace-10355"></a>
<a id="trace-10368"></a>
<a id="trace-10384"></a>
<a id="trace-10391"></a>
<a id="trace-10400"></a>
<a id="trace-10486"></a>
<a id="trace-10500"></a>
<a id="trace-10515"></a>
<a id="trace-10528"></a>
<a id="trace-10535"></a>
<a id="trace-10543"></a>
<a id="trace-10551"></a>
<a id="trace-10620"></a>
<a id="trace-10626"></a>
<a id="trace-10644"></a>
<a id="trace-10666"></a>
<a id="trace-10676"></a>
<a id="trace-10689"></a>
<a id="trace-10697"></a>
<a id="trace-10766"></a>
<a id="trace-10773"></a>
<a id="trace-10787"></a>
<a id="trace-10795"></a>
<a id="trace-10804"></a>
<a id="trace-10813"></a>
<a id="trace-10820"></a>
<a id="trace-10834"></a>
- 211.80s–274.30s (×96), actor 5, squad 0 (trace 9061): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 8968. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9073}.
<a id="trace-1453"></a>
- 274.70s–274.70s (×1), actor 5, squad 0 (events line 1453): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10839"></a>
- 274.70s–274.70s (×1), actor 5, squad 0 (trace 10839): renew committed intent (75 s lifetime). Knowledge: actor memory at 274.70s, trace 10839. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10842}.
<a id="trace-10842"></a>
<a id="trace-10913"></a>
<a id="trace-10922"></a>
<a id="trace-10931"></a>
<a id="trace-10940"></a>
<a id="trace-10947"></a>
<a id="trace-10954"></a>
<a id="trace-10962"></a>
<a id="trace-10967"></a>
<a id="trace-10978"></a>
- 274.80s–279.30s (×10), actor 5, squad 0 (trace 10842): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 274.70s, trace 10839. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10913}.
<a id="trace-10996"></a>
- 280.05s–280.05s (×1), actor 1, squad 0 (trace 10996): received platoon directive. Knowledge: actor memory at 280.00s, trace 10987. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11056}.
<a id="trace-11056"></a>
<a id="trace-11061"></a>
<a id="trace-11073"></a>
<a id="trace-11084"></a>
<a id="trace-11093"></a>
<a id="trace-11104"></a>
<a id="trace-11112"></a>
<a id="trace-11117"></a>
<a id="trace-11126"></a>
<a id="trace-11132"></a>
<a id="trace-11203"></a>
<a id="trace-11208"></a>
<a id="trace-11224"></a>
<a id="trace-11233"></a>
<a id="trace-11244"></a>
<a id="trace-11253"></a>
<a id="trace-11270"></a>
<a id="trace-11349"></a>
<a id="trace-11354"></a>
<a id="trace-11364"></a>
<a id="trace-11371"></a>
<a id="trace-11386"></a>
<a id="trace-11393"></a>
<a id="trace-11401"></a>
<a id="trace-11419"></a>
<a id="trace-11494"></a>
<a id="trace-11506"></a>
<a id="trace-11514"></a>
<a id="trace-11525"></a>
<a id="trace-11533"></a>
<a id="trace-11541"></a>
<a id="trace-11554"></a>
<a id="trace-11639"></a>
<a id="trace-11649"></a>
<a id="trace-11656"></a>
<a id="trace-11665"></a>
<a id="trace-11674"></a>
<a id="trace-11690"></a>
<a id="trace-11702"></a>
<a id="trace-11708"></a>
<a id="trace-11777"></a>
<a id="trace-11792"></a>
<a id="trace-11802"></a>
<a id="trace-11812"></a>
<a id="trace-11819"></a>
<a id="trace-11832"></a>
<a id="trace-11842"></a>
<a id="trace-11920"></a>
<a id="trace-11934"></a>
<a id="trace-11945"></a>
<a id="trace-11955"></a>
<a id="trace-11964"></a>
<a id="trace-11972"></a>
<a id="trace-11977"></a>
<a id="trace-11988"></a>
<a id="trace-11993"></a>
<a id="trace-12069"></a>
<a id="trace-12078"></a>
<a id="trace-12085"></a>
<a id="trace-12095"></a>
<a id="trace-12106"></a>
<a id="trace-12114"></a>
<a id="trace-12124"></a>
<a id="trace-12134"></a>
<a id="trace-12139"></a>
<a id="trace-12210"></a>
<a id="trace-12226"></a>
<a id="trace-12233"></a>
<a id="trace-12242"></a>
<a id="trace-12249"></a>
<a id="trace-12257"></a>
<a id="trace-12264"></a>
<a id="trace-12273"></a>
<a id="trace-12282"></a>
<a id="trace-12368"></a>
<a id="trace-12377"></a>
<a id="trace-12389"></a>
<a id="trace-12403"></a>
<a id="trace-12408"></a>
<a id="trace-12491"></a>
<a id="trace-12498"></a>
<a id="trace-12514"></a>
<a id="trace-12526"></a>
<a id="trace-12535"></a>
<a id="trace-12547"></a>
<a id="trace-12555"></a>
<a id="trace-12564"></a>
<a id="trace-12637"></a>
<a id="trace-12650"></a>
<a id="trace-12659"></a>
<a id="trace-12667"></a>
<a id="trace-12682"></a>
<a id="trace-12690"></a>
<a id="trace-12782"></a>
<a id="trace-12787"></a>
<a id="trace-12796"></a>
<a id="trace-12805"></a>
<a id="trace-12813"></a>
<a id="trace-12822"></a>
<a id="trace-12829"></a>
- 280.30s–343.30s (×100), actor 5, squad 0 (trace 11056): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 10988. Next observer evidence: {'until': 280.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11061}.
<a id="trace-1775"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (events line 1775): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12832"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (trace 12832): renew committed intent (75 s lifetime). Knowledge: actor memory at 343.70s, trace 12832. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12836}.
<a id="trace-12836"></a>
<a id="trace-12845"></a>
<a id="trace-12851"></a>
<a id="trace-12928"></a>
<a id="trace-12940"></a>
<a id="trace-12958"></a>
<a id="trace-12969"></a>
<a id="trace-12983"></a>
<a id="trace-12995"></a>
<a id="trace-13069"></a>
<a id="trace-13079"></a>
<a id="trace-13086"></a>
<a id="trace-13097"></a>
<a id="trace-13104"></a>
<a id="trace-13114"></a>
<a id="trace-13125"></a>
<a id="trace-13143"></a>
<a id="trace-13213"></a>
<a id="trace-13218"></a>
<a id="trace-13227"></a>
<a id="trace-13234"></a>
<a id="trace-13249"></a>
<a id="trace-13257"></a>
<a id="trace-13263"></a>
<a id="trace-13272"></a>
<a id="trace-13280"></a>
- 343.80s–359.80s (×26), actor 5, squad 0 (trace 12836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 343.70s, trace 12832. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12845}.

## Net delivery

68 matched order/radio deliveries; 228 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.470s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1156: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1165: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2119: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2120: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2121: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2122: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2123: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2124: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2875: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2879: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2880: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2881: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2882: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2883: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2884: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2885: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3562: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3564: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3565: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3566: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3567: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3568: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3569: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3570: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3571: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3835: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3836: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3837: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3838: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3839: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3840: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3841: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3842: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3843: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 3986: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 3987: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3989: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3990: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3991: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3992: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3993: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3994: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3995: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3996: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3997: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4167: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4168: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4169: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4170: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4171: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4172: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4173: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4174: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4175: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4318: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4319: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4320: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4321: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4322: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4323: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4324: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4325: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4326: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4498: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4499: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4500: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4501: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4502: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4503: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4504: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4505: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4506: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4644: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4645: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4646: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4647: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4648: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4649: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4650: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4651: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4652: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4785: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4786: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4787: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4788: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4789: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4790: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4791: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4792: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4793: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4932: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4933: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4934: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4935: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4936: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4937: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4938: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4939: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4940: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5076: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5077: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5078: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5079: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5080: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5081: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5082: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5083: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5084: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5220: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5221: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5222: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5223: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5224: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5225: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5226: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5227: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5228: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5361: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5362: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5363: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5364: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5365: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5366: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5367: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5368: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5369: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5509: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5510: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5511: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5512: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5513: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5514: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5515: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5516: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5517: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5651: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5652: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5653: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5654: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5655: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5656: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5657: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5658: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5659: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5790: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5791: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5792: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5793: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5794: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5795: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5796: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5797: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5798: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5937: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5938: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5939: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5940: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5941: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5942: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5943: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5944: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5945: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 6066: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6089: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6090: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6091: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6092: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6093: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6094: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6095: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6096: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6097: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6227: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6228: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6229: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6230: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6231: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6232: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6233: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6234: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6235: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6372: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6373: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6374: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6375: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6376: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6378: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6379: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6380: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6520: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6521: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6522: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6523: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6524: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6526: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6527: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6528: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6664: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6665: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6667: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6668: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6669: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 6893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 6894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 7668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 7816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 8104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 8393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 8531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 8674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 8891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 8967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 8972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 8975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 9129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 9131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 9134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 9410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 9553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 9701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 9706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 9985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 9990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 9993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 10128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 10131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 10275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 10414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 10554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 10705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.70s leader 5, trace 10839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 10852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 10987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 10992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 10995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 11136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 11139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 11141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 11283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 11286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 11422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 11425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 11717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 11856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 11997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 12002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 12145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 12285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 12288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 12424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 12716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 12719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 12832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 12860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 12863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 13005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 13146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 13283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Tern killed in action
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
