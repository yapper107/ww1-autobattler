# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/8/107/good-ember/battle-107-1789673791570402330`

## Battle summary

**Ember** · 360 s · 166 shots.

### Turning points

- 18.6s, squad 5: contact (events line 210). First recorded contact.
- 28.7s, squad 0: withdrawal ([trace 3869](#trace-3869)). 72.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 44.6s, squad 0: help call ([trace 5507](#trace-5507)). No completion observed before termination.
- 159.8s, squad 0: withdrawal ([trace 13580](#trace-13580)). 182.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 159.8s, squad 0: help call ([trace 13732](#trace-13732)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 9 shots, 3/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 1 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 127 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 29 shots, 0/2 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1317](#trace-1317)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1316](#trace-1316)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1336}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1318](#trace-1318)). Following evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.875005123363413, 'next_transition': 1965}.

### Communication

243 matched deliveries (mean 0.38s, max 5.35s); 327 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.60s, squad 5, contact, evidence events line 210: First recorded contact; .
- 28.70s, squad 0, withdrawal, evidence 3869: BreakContact: believed ratio at least two without superiority; 72.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 44.60s, squad 0, help call, evidence 5507: NeedSupport; No completion observed before termination.
- 159.75s, squad 0, withdrawal, evidence 13580: BreakContact: believed ratio at least two without superiority; 182.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 159.75s, squad 0, help call, evidence 13732: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.9484903240279, 'next_transition': 833}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.9484903240279, 'next_transition': 833}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.9484903240279, 'next_transition': 833}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1147}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1147}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.146887879093754, 'next_transition': 1147}.
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
<a id="trace-837"></a>
<a id="trace-839"></a>
<a id="trace-868"></a>
<a id="trace-870"></a>
<a id="trace-899"></a>
<a id="trace-901"></a>
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-951"></a>
<a id="trace-953"></a>
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1009"></a>
<a id="trace-1011"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1053"></a>
<a id="trace-1055"></a>
<a id="trace-1144"></a>
<a id="trace-1146"></a>
<a id="trace-1229"></a>
<a id="trace-1231"></a>
<a id="trace-1252"></a>
<a id="trace-1254"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1313"></a>
<a id="trace-1315"></a>
<a id="trace-1340"></a>
<a id="trace-1342"></a>
<a id="trace-1510"></a>
<a id="trace-1512"></a>
<a id="trace-1690"></a>
<a id="trace-1692"></a>
<a id="trace-1732"></a>
<a id="trace-1734"></a>
<a id="trace-1754"></a>
<a id="trace-1756"></a>
<a id="trace-1840"></a>
<a id="trace-1842"></a>
<a id="trace-1880"></a>
<a id="trace-1882"></a>
<a id="trace-1922"></a>
<a id="trace-1924"></a>
<a id="trace-1945"></a>
<a id="trace-1947"></a>
<a id="trace-1962"></a>
<a id="trace-1964"></a>
<a id="trace-2145"></a>
<a id="trace-2147"></a>
<a id="trace-2178"></a>
<a id="trace-2180"></a>
<a id="trace-2198"></a>
<a id="trace-2200"></a>
<a id="trace-2737"></a>
<a id="trace-2739"></a>
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-2882"></a>
<a id="trace-2884"></a>
<a id="trace-2925"></a>
<a id="trace-2927"></a>
<a id="trace-2961"></a>
<a id="trace-2963"></a>
<a id="trace-2978"></a>
<a id="trace-2980"></a>
<a id="trace-3328"></a>
<a id="trace-3330"></a>
<a id="trace-3354"></a>
<a id="trace-3356"></a>
<a id="trace-3392"></a>
<a id="trace-3394"></a>
<a id="trace-3410"></a>
<a id="trace-3412"></a>
<a id="trace-3445"></a>
<a id="trace-3447"></a>
<a id="trace-3480"></a>
<a id="trace-3482"></a>
<a id="trace-3583"></a>
<a id="trace-3585"></a>
<a id="trace-3710"></a>
<a id="trace-3712"></a>
<a id="trace-3739"></a>
<a id="trace-3741"></a>
<a id="trace-3767"></a>
<a id="trace-3769"></a>
<a id="trace-3796"></a>
<a id="trace-3798"></a>
<a id="trace-3824"></a>
<a id="trace-3826"></a>
<a id="trace-3851"></a>
<a id="trace-3853"></a>
<a id="trace-4328"></a>
<a id="trace-4330"></a>
<a id="trace-4350"></a>
<a id="trace-4352"></a>
<a id="trace-4375"></a>
<a id="trace-4377"></a>
<a id="trace-4479"></a>
<a id="trace-4481"></a>
<a id="trace-4503"></a>
<a id="trace-4505"></a>
<a id="trace-4528"></a>
<a id="trace-4530"></a>
<a id="trace-4557"></a>
<a id="trace-4559"></a>
<a id="trace-4602"></a>
<a id="trace-4604"></a>
<a id="trace-4626"></a>
<a id="trace-4628"></a>
<a id="trace-4642"></a>
<a id="trace-4644"></a>
<a id="trace-4661"></a>
<a id="trace-4663"></a>
<a id="trace-4691"></a>
<a id="trace-4693"></a>
<a id="trace-4709"></a>
<a id="trace-4711"></a>
<a id="trace-4798"></a>
<a id="trace-4800"></a>
<a id="trace-4818"></a>
<a id="trace-4820"></a>
<a id="trace-4842"></a>
<a id="trace-4844"></a>
<a id="trace-4870"></a>
<a id="trace-4872"></a>
<a id="trace-4889"></a>
<a id="trace-4891"></a>
<a id="trace-4904"></a>
<a id="trace-4906"></a>
<a id="trace-4924"></a>
<a id="trace-4926"></a>
<a id="trace-4942"></a>
<a id="trace-4944"></a>
<a id="trace-4962"></a>
<a id="trace-4964"></a>
<a id="trace-5049"></a>
<a id="trace-5051"></a>
<a id="trace-5142"></a>
<a id="trace-5144"></a>
<a id="trace-5172"></a>
<a id="trace-5174"></a>
<a id="trace-5198"></a>
<a id="trace-5200"></a>
<a id="trace-5217"></a>
<a id="trace-5219"></a>
<a id="trace-5241"></a>
<a id="trace-5243"></a>
<a id="trace-5258"></a>
<a id="trace-5260"></a>
<a id="trace-5288"></a>
<a id="trace-5290"></a>
<a id="trace-5464"></a>
<a id="trace-5466"></a>
<a id="trace-5487"></a>
<a id="trace-5489"></a>
<a id="trace-5534"></a>
<a id="trace-5536"></a>
<a id="trace-5645"></a>
<a id="trace-5647"></a>
<a id="trace-5664"></a>
<a id="trace-5666"></a>
<a id="trace-5695"></a>
<a id="trace-5697"></a>
<a id="trace-5743"></a>
<a id="trace-5745"></a>
<a id="trace-5760"></a>
<a id="trace-5762"></a>
<a id="trace-5774"></a>
<a id="trace-5776"></a>
<a id="trace-5793"></a>
<a id="trace-5795"></a>
<a id="trace-5815"></a>
<a id="trace-5817"></a>
<a id="trace-5832"></a>
<a id="trace-5834"></a>
<a id="trace-5851"></a>
<a id="trace-5853"></a>
<a id="trace-5952"></a>
<a id="trace-5954"></a>
<a id="trace-5972"></a>
<a id="trace-5974"></a>
<a id="trace-5993"></a>
<a id="trace-5995"></a>
<a id="trace-6013"></a>
<a id="trace-6015"></a>
<a id="trace-6034"></a>
<a id="trace-6036"></a>
<a id="trace-6056"></a>
<a id="trace-6058"></a>
<a id="trace-6073"></a>
<a id="trace-6075"></a>
<a id="trace-6087"></a>
<a id="trace-6089"></a>
<a id="trace-6116"></a>
<a id="trace-6118"></a>
<a id="trace-6134"></a>
<a id="trace-6136"></a>
<a id="trace-6223"></a>
<a id="trace-6225"></a>
<a id="trace-6247"></a>
<a id="trace-6249"></a>
<a id="trace-6270"></a>
<a id="trace-6272"></a>
<a id="trace-6290"></a>
<a id="trace-6292"></a>
<a id="trace-6305"></a>
<a id="trace-6307"></a>
<a id="trace-6320"></a>
<a id="trace-6322"></a>
<a id="trace-6345"></a>
<a id="trace-6347"></a>
<a id="trace-6357"></a>
<a id="trace-6359"></a>
<a id="trace-6371"></a>
<a id="trace-6373"></a>
<a id="trace-6389"></a>
<a id="trace-6391"></a>
<a id="trace-6476"></a>
<a id="trace-6478"></a>
<a id="trace-6496"></a>
<a id="trace-6498"></a>
<a id="trace-6512"></a>
<a id="trace-6514"></a>
<a id="trace-6524"></a>
<a id="trace-6526"></a>
<a id="trace-6707"></a>
<a id="trace-6709"></a>
<a id="trace-6720"></a>
<a id="trace-6722"></a>
<a id="trace-6742"></a>
<a id="trace-6744"></a>
<a id="trace-6770"></a>
<a id="trace-6772"></a>
<a id="trace-6787"></a>
<a id="trace-6789"></a>
<a id="trace-6808"></a>
<a id="trace-6810"></a>
<a id="trace-6921"></a>
<a id="trace-6923"></a>
<a id="trace-6938"></a>
<a id="trace-6940"></a>
<a id="trace-6965"></a>
<a id="trace-6967"></a>
<a id="trace-6987"></a>
<a id="trace-6989"></a>
<a id="trace-7012"></a>
<a id="trace-7014"></a>
<a id="trace-7027"></a>
<a id="trace-7029"></a>
<a id="trace-7054"></a>
<a id="trace-7056"></a>
<a id="trace-7072"></a>
<a id="trace-7074"></a>
<a id="trace-7094"></a>
<a id="trace-7096"></a>
<a id="trace-7106"></a>
<a id="trace-7108"></a>
<a id="trace-7193"></a>
<a id="trace-7195"></a>
<a id="trace-7209"></a>
<a id="trace-7211"></a>
<a id="trace-7233"></a>
<a id="trace-7235"></a>
<a id="trace-7248"></a>
<a id="trace-7250"></a>
<a id="trace-7273"></a>
<a id="trace-7275"></a>
<a id="trace-7300"></a>
<a id="trace-7302"></a>
<a id="trace-7335"></a>
<a id="trace-7337"></a>
<a id="trace-7362"></a>
<a id="trace-7364"></a>
<a id="trace-7404"></a>
<a id="trace-7406"></a>
<a id="trace-7429"></a>
<a id="trace-7431"></a>
<a id="trace-7536"></a>
<a id="trace-7538"></a>
<a id="trace-7560"></a>
<a id="trace-7562"></a>
<a id="trace-7580"></a>
<a id="trace-7582"></a>
<a id="trace-7595"></a>
<a id="trace-7597"></a>
<a id="trace-7609"></a>
<a id="trace-7611"></a>
<a id="trace-7619"></a>
<a id="trace-7621"></a>
<a id="trace-7634"></a>
<a id="trace-7636"></a>
<a id="trace-7645"></a>
<a id="trace-7647"></a>
<a id="trace-7663"></a>
<a id="trace-7665"></a>
<a id="trace-7673"></a>
<a id="trace-7675"></a>
<a id="trace-7760"></a>
<a id="trace-7762"></a>
<a id="trace-7773"></a>
<a id="trace-7775"></a>
<a id="trace-7788"></a>
<a id="trace-7790"></a>
<a id="trace-7802"></a>
<a id="trace-7804"></a>
<a id="trace-7814"></a>
<a id="trace-7816"></a>
<a id="trace-7825"></a>
<a id="trace-7827"></a>
<a id="trace-7837"></a>
<a id="trace-7839"></a>
<a id="trace-7844"></a>
<a id="trace-7846"></a>
<a id="trace-7859"></a>
<a id="trace-7861"></a>
<a id="trace-7871"></a>
<a id="trace-7873"></a>
<a id="trace-7953"></a>
<a id="trace-7955"></a>
<a id="trace-7964"></a>
<a id="trace-7966"></a>
<a id="trace-7980"></a>
<a id="trace-7982"></a>
<a id="trace-7989"></a>
<a id="trace-7991"></a>
<a id="trace-8004"></a>
<a id="trace-8006"></a>
<a id="trace-8019"></a>
<a id="trace-8021"></a>
<a id="trace-8033"></a>
<a id="trace-8035"></a>
<a id="trace-8046"></a>
<a id="trace-8048"></a>
<a id="trace-8069"></a>
<a id="trace-8071"></a>
<a id="trace-8079"></a>
<a id="trace-8081"></a>
<a id="trace-8159"></a>
<a id="trace-8161"></a>
<a id="trace-8170"></a>
<a id="trace-8172"></a>
<a id="trace-8184"></a>
<a id="trace-8186"></a>
<a id="trace-8194"></a>
<a id="trace-8196"></a>
<a id="trace-8208"></a>
<a id="trace-8210"></a>
<a id="trace-8219"></a>
<a id="trace-8221"></a>
<a id="trace-8235"></a>
<a id="trace-8237"></a>
<a id="trace-8245"></a>
<a id="trace-8247"></a>
<a id="trace-8260"></a>
<a id="trace-8262"></a>
<a id="trace-8270"></a>
<a id="trace-8272"></a>
<a id="trace-8352"></a>
<a id="trace-8354"></a>
<a id="trace-8368"></a>
<a id="trace-8370"></a>
<a id="trace-8384"></a>
<a id="trace-8386"></a>
<a id="trace-8394"></a>
<a id="trace-8396"></a>
<a id="trace-8407"></a>
<a id="trace-8409"></a>
<a id="trace-8414"></a>
<a id="trace-8416"></a>
<a id="trace-8430"></a>
<a id="trace-8432"></a>
<a id="trace-8439"></a>
<a id="trace-8441"></a>
<a id="trace-8456"></a>
<a id="trace-8458"></a>
<a id="trace-8468"></a>
<a id="trace-8470"></a>
<a id="trace-8549"></a>
<a id="trace-8551"></a>
<a id="trace-8559"></a>
<a id="trace-8561"></a>
<a id="trace-8573"></a>
<a id="trace-8575"></a>
<a id="trace-8581"></a>
<a id="trace-8583"></a>
<a id="trace-8596"></a>
<a id="trace-8598"></a>
<a id="trace-8610"></a>
<a id="trace-8612"></a>
<a id="trace-8626"></a>
<a id="trace-8628"></a>
<a id="trace-8639"></a>
<a id="trace-8641"></a>
<a id="trace-8655"></a>
<a id="trace-8657"></a>
<a id="trace-8667"></a>
<a id="trace-8669"></a>
<a id="trace-8748"></a>
<a id="trace-8750"></a>
<a id="trace-8762"></a>
<a id="trace-8764"></a>
<a id="trace-8776"></a>
<a id="trace-8778"></a>
<a id="trace-8785"></a>
<a id="trace-8787"></a>
<a id="trace-8799"></a>
<a id="trace-8801"></a>
<a id="trace-8808"></a>
<a id="trace-8810"></a>
<a id="trace-8821"></a>
<a id="trace-8823"></a>
<a id="trace-8833"></a>
<a id="trace-8835"></a>
<a id="trace-8853"></a>
<a id="trace-8855"></a>
<a id="trace-8866"></a>
<a id="trace-8868"></a>
<a id="trace-8954"></a>
<a id="trace-8956"></a>
<a id="trace-8968"></a>
<a id="trace-8970"></a>
<a id="trace-8983"></a>
<a id="trace-8985"></a>
<a id="trace-8993"></a>
<a id="trace-8995"></a>
<a id="trace-9008"></a>
<a id="trace-9010"></a>
<a id="trace-9017"></a>
<a id="trace-9019"></a>
<a id="trace-9033"></a>
<a id="trace-9035"></a>
<a id="trace-9044"></a>
<a id="trace-9046"></a>
<a id="trace-9121"></a>
<a id="trace-9123"></a>
<a id="trace-9132"></a>
<a id="trace-9134"></a>
<a id="trace-9230"></a>
<a id="trace-9232"></a>
<a id="trace-9243"></a>
<a id="trace-9245"></a>
<a id="trace-9430"></a>
<a id="trace-9432"></a>
<a id="trace-9465"></a>
<a id="trace-9467"></a>
<a id="trace-9491"></a>
<a id="trace-9493"></a>
<a id="trace-9529"></a>
<a id="trace-9531"></a>
<a id="trace-9574"></a>
<a id="trace-9576"></a>
<a id="trace-9598"></a>
<a id="trace-9600"></a>
<a id="trace-9626"></a>
<a id="trace-9628"></a>
<a id="trace-9646"></a>
<a id="trace-9648"></a>
<a id="trace-9732"></a>
<a id="trace-9734"></a>
<a id="trace-9750"></a>
<a id="trace-9752"></a>
<a id="trace-9772"></a>
<a id="trace-9774"></a>
<a id="trace-9789"></a>
<a id="trace-9791"></a>
<a id="trace-9818"></a>
<a id="trace-9820"></a>
<a id="trace-9844"></a>
<a id="trace-9846"></a>
<a id="trace-10504"></a>
<a id="trace-10506"></a>
<a id="trace-10543"></a>
<a id="trace-10545"></a>
<a id="trace-10567"></a>
<a id="trace-10569"></a>
<a id="trace-10579"></a>
<a id="trace-10581"></a>
<a id="trace-10684"></a>
<a id="trace-10686"></a>
<a id="trace-10696"></a>
<a id="trace-10698"></a>
<a id="trace-10721"></a>
<a id="trace-10723"></a>
<a id="trace-10750"></a>
<a id="trace-10752"></a>
<a id="trace-10775"></a>
<a id="trace-10777"></a>
<a id="trace-10796"></a>
<a id="trace-10798"></a>
<a id="trace-10824"></a>
<a id="trace-10826"></a>
<a id="trace-10846"></a>
<a id="trace-10848"></a>
<a id="trace-10866"></a>
<a id="trace-10868"></a>
<a id="trace-10989"></a>
<a id="trace-10991"></a>
<a id="trace-11083"></a>
<a id="trace-11085"></a>
<a id="trace-11100"></a>
<a id="trace-11102"></a>
<a id="trace-11125"></a>
<a id="trace-11127"></a>
<a id="trace-11138"></a>
<a id="trace-11140"></a>
<a id="trace-11167"></a>
<a id="trace-11169"></a>
<a id="trace-11188"></a>
<a id="trace-11190"></a>
<a id="trace-11207"></a>
<a id="trace-11209"></a>
<a id="trace-11226"></a>
<a id="trace-11228"></a>
<a id="trace-11252"></a>
<a id="trace-11254"></a>
<a id="trace-11408"></a>
<a id="trace-11410"></a>
<a id="trace-11505"></a>
<a id="trace-11507"></a>
<a id="trace-11527"></a>
<a id="trace-11529"></a>
<a id="trace-11553"></a>
<a id="trace-11555"></a>
<a id="trace-11589"></a>
<a id="trace-11591"></a>
<a id="trace-11620"></a>
<a id="trace-11622"></a>
<a id="trace-11638"></a>
<a id="trace-11640"></a>
<a id="trace-11666"></a>
<a id="trace-11668"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11702"></a>
<a id="trace-11704"></a>
<a id="trace-11725"></a>
<a id="trace-11727"></a>
<a id="trace-11817"></a>
<a id="trace-11819"></a>
<a id="trace-11839"></a>
<a id="trace-11841"></a>
<a id="trace-11859"></a>
<a id="trace-11861"></a>
<a id="trace-11872"></a>
<a id="trace-11874"></a>
<a id="trace-11901"></a>
<a id="trace-11903"></a>
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-11935"></a>
<a id="trace-11937"></a>
<a id="trace-11953"></a>
<a id="trace-11955"></a>
<a id="trace-11975"></a>
<a id="trace-11977"></a>
<a id="trace-11995"></a>
<a id="trace-11997"></a>
<a id="trace-12080"></a>
<a id="trace-12082"></a>
<a id="trace-12097"></a>
<a id="trace-12099"></a>
<a id="trace-12121"></a>
<a id="trace-12123"></a>
<a id="trace-12137"></a>
<a id="trace-12139"></a>
<a id="trace-12154"></a>
<a id="trace-12156"></a>
<a id="trace-12171"></a>
<a id="trace-12173"></a>
<a id="trace-12199"></a>
<a id="trace-12201"></a>
<a id="trace-12374"></a>
<a id="trace-12376"></a>
<a id="trace-12392"></a>
<a id="trace-12394"></a>
<a id="trace-12413"></a>
<a id="trace-12415"></a>
<a id="trace-12508"></a>
<a id="trace-12510"></a>
<a id="trace-12523"></a>
<a id="trace-12525"></a>
<a id="trace-12542"></a>
<a id="trace-12544"></a>
<a id="trace-12561"></a>
<a id="trace-12563"></a>
<a id="trace-12583"></a>
<a id="trace-12585"></a>
<a id="trace-12601"></a>
<a id="trace-12603"></a>
<a id="trace-12615"></a>
<a id="trace-12617"></a>
<a id="trace-12633"></a>
<a id="trace-12635"></a>
<a id="trace-12652"></a>
<a id="trace-12654"></a>
<a id="trace-12670"></a>
<a id="trace-12672"></a>
<a id="trace-12755"></a>
<a id="trace-12757"></a>
<a id="trace-13090"></a>
<a id="trace-13092"></a>
<a id="trace-13111"></a>
<a id="trace-13113"></a>
<a id="trace-13467"></a>
<a id="trace-13469"></a>
<a id="trace-13494"></a>
<a id="trace-13496"></a>
<a id="trace-13507"></a>
<a id="trace-13509"></a>
<a id="trace-13536"></a>
<a id="trace-13538"></a>
<a id="trace-13557"></a>
<a id="trace-13559"></a>
<a id="trace-13571"></a>
<a id="trace-13573"></a>
<a id="trace-13742"></a>
<a id="trace-13744"></a>
<a id="trace-13821"></a>
<a id="trace-13823"></a>
<a id="trace-13843"></a>
<a id="trace-13845"></a>
<a id="trace-13863"></a>
<a id="trace-13865"></a>
<a id="trace-13873"></a>
<a id="trace-13875"></a>
<a id="trace-13892"></a>
<a id="trace-13894"></a>
<a id="trace-13905"></a>
<a id="trace-13907"></a>
<a id="trace-13920"></a>
<a id="trace-13922"></a>
<a id="trace-13932"></a>
<a id="trace-13934"></a>
<a id="trace-13949"></a>
<a id="trace-13951"></a>
<a id="trace-13969"></a>
<a id="trace-13971"></a>
<a id="trace-14045"></a>
<a id="trace-14047"></a>
<a id="trace-14059"></a>
<a id="trace-14061"></a>
<a id="trace-14082"></a>
<a id="trace-14084"></a>
<a id="trace-14095"></a>
<a id="trace-14097"></a>
<a id="trace-14110"></a>
<a id="trace-14112"></a>
<a id="trace-14120"></a>
<a id="trace-14122"></a>
<a id="trace-14141"></a>
<a id="trace-14143"></a>
<a id="trace-14161"></a>
<a id="trace-14163"></a>
<a id="trace-14175"></a>
<a id="trace-14177"></a>
<a id="trace-14185"></a>
<a id="trace-14187"></a>
<a id="trace-14265"></a>
<a id="trace-14267"></a>
<a id="trace-14280"></a>
<a id="trace-14282"></a>
<a id="trace-14293"></a>
<a id="trace-14295"></a>
<a id="trace-14306"></a>
<a id="trace-14308"></a>
<a id="trace-14322"></a>
<a id="trace-14324"></a>
<a id="trace-14336"></a>
<a id="trace-14338"></a>
<a id="trace-14355"></a>
<a id="trace-14357"></a>
<a id="trace-14362"></a>
<a id="trace-14364"></a>
<a id="trace-14390"></a>
<a id="trace-14392"></a>
<a id="trace-14398"></a>
<a id="trace-14400"></a>
<a id="trace-14472"></a>
<a id="trace-14474"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14498"></a>
<a id="trace-14500"></a>
<a id="trace-14508"></a>
<a id="trace-14510"></a>
<a id="trace-14518"></a>
<a id="trace-14520"></a>
<a id="trace-14525"></a>
<a id="trace-14527"></a>
<a id="trace-14538"></a>
<a id="trace-14540"></a>
<a id="trace-14548"></a>
<a id="trace-14550"></a>
<a id="trace-14566"></a>
<a id="trace-14568"></a>
<a id="trace-14577"></a>
<a id="trace-14579"></a>
<a id="trace-14659"></a>
<a id="trace-14661"></a>
<a id="trace-14667"></a>
<a id="trace-14669"></a>
<a id="trace-14676"></a>
<a id="trace-14678"></a>
<a id="trace-14688"></a>
<a id="trace-14690"></a>
<a id="trace-14697"></a>
<a id="trace-14699"></a>
<a id="trace-14708"></a>
<a id="trace-14710"></a>
<a id="trace-14724"></a>
<a id="trace-14726"></a>
<a id="trace-14738"></a>
<a id="trace-14740"></a>
<a id="trace-14749"></a>
<a id="trace-14751"></a>
<a id="trace-14759"></a>
<a id="trace-14761"></a>
<a id="trace-14840"></a>
<a id="trace-14842"></a>
<a id="trace-14854"></a>
<a id="trace-14856"></a>
<a id="trace-14870"></a>
<a id="trace-14872"></a>
<a id="trace-14889"></a>
<a id="trace-14891"></a>
<a id="trace-14899"></a>
<a id="trace-14901"></a>
<a id="trace-14904"></a>
<a id="trace-14906"></a>
<a id="trace-14914"></a>
<a id="trace-14916"></a>
<a id="trace-14922"></a>
<a id="trace-14924"></a>
<a id="trace-14931"></a>
<a id="trace-14933"></a>
<a id="trace-14937"></a>
<a id="trace-14939"></a>
<a id="trace-15008"></a>
<a id="trace-15010"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15027"></a>
<a id="trace-15029"></a>
<a id="trace-15041"></a>
<a id="trace-15043"></a>
<a id="trace-15054"></a>
<a id="trace-15056"></a>
<a id="trace-15069"></a>
<a id="trace-15071"></a>
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15101"></a>
<a id="trace-15103"></a>
<a id="trace-15110"></a>
<a id="trace-15112"></a>
<a id="trace-15115"></a>
<a id="trace-15117"></a>
<a id="trace-15186"></a>
<a id="trace-15188"></a>
<a id="trace-15193"></a>
<a id="trace-15195"></a>
<a id="trace-15202"></a>
<a id="trace-15204"></a>
<a id="trace-15211"></a>
<a id="trace-15213"></a>
<a id="trace-15221"></a>
<a id="trace-15223"></a>
<a id="trace-15228"></a>
<a id="trace-15230"></a>
<a id="trace-15243"></a>
<a id="trace-15245"></a>
<a id="trace-15255"></a>
<a id="trace-15257"></a>
<a id="trace-15270"></a>
<a id="trace-15272"></a>
<a id="trace-15275"></a>
<a id="trace-15277"></a>
<a id="trace-15353"></a>
<a id="trace-15355"></a>
<a id="trace-15367"></a>
<a id="trace-15369"></a>
<a id="trace-15376"></a>
<a id="trace-15378"></a>
<a id="trace-15385"></a>
<a id="trace-15387"></a>
<a id="trace-15395"></a>
<a id="trace-15397"></a>
<a id="trace-15401"></a>
<a id="trace-15403"></a>
<a id="trace-15413"></a>
<a id="trace-15415"></a>
<a id="trace-15422"></a>
<a id="trace-15424"></a>
<a id="trace-15432"></a>
<a id="trace-15434"></a>
<a id="trace-15439"></a>
<a id="trace-15441"></a>
<a id="trace-15515"></a>
<a id="trace-15517"></a>
<a id="trace-15523"></a>
<a id="trace-15525"></a>
<a id="trace-15537"></a>
<a id="trace-15539"></a>
<a id="trace-15552"></a>
<a id="trace-15554"></a>
<a id="trace-15566"></a>
<a id="trace-15568"></a>
<a id="trace-15578"></a>
<a id="trace-15580"></a>
<a id="trace-15590"></a>
<a id="trace-15592"></a>
<a id="trace-15598"></a>
<a id="trace-15600"></a>
<a id="trace-15606"></a>
<a id="trace-15608"></a>
<a id="trace-15614"></a>
<a id="trace-15616"></a>
<a id="trace-15687"></a>
<a id="trace-15689"></a>
<a id="trace-15693"></a>
<a id="trace-15695"></a>
<a id="trace-15704"></a>
<a id="trace-15706"></a>
<a id="trace-15715"></a>
<a id="trace-15717"></a>
<a id="trace-15728"></a>
<a id="trace-15730"></a>
<a id="trace-15741"></a>
<a id="trace-15743"></a>
<a id="trace-15756"></a>
<a id="trace-15758"></a>
<a id="trace-15766"></a>
<a id="trace-15768"></a>
<a id="trace-15782"></a>
<a id="trace-15784"></a>
<a id="trace-15789"></a>
<a id="trace-15791"></a>
<a id="trace-15863"></a>
<a id="trace-15865"></a>
<a id="trace-15869"></a>
<a id="trace-15871"></a>
<a id="trace-15878"></a>
<a id="trace-15880"></a>
<a id="trace-15886"></a>
<a id="trace-15888"></a>
<a id="trace-15897"></a>
<a id="trace-15899"></a>
<a id="trace-15903"></a>
<a id="trace-15905"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-15927"></a>
<a id="trace-15929"></a>
<a id="trace-15940"></a>
<a id="trace-15942"></a>
<a id="trace-15951"></a>
<a id="trace-15953"></a>
<a id="trace-16025"></a>
<a id="trace-16027"></a>
<a id="trace-16031"></a>
<a id="trace-16033"></a>
<a id="trace-16042"></a>
<a id="trace-16044"></a>
<a id="trace-16059"></a>
<a id="trace-16061"></a>
<a id="trace-16070"></a>
<a id="trace-16072"></a>
<a id="trace-16076"></a>
<a id="trace-16078"></a>
<a id="trace-16087"></a>
<a id="trace-16089"></a>
<a id="trace-16095"></a>
<a id="trace-16097"></a>
<a id="trace-16105"></a>
<a id="trace-16107"></a>
<a id="trace-16114"></a>
<a id="trace-16116"></a>
<a id="trace-16189"></a>
<a id="trace-16191"></a>
<a id="trace-16200"></a>
<a id="trace-16202"></a>
<a id="trace-16214"></a>
<a id="trace-16216"></a>
<a id="trace-16225"></a>
<a id="trace-16227"></a>
<a id="trace-16237"></a>
<a id="trace-16239"></a>
<a id="trace-16244"></a>
<a id="trace-16246"></a>
<a id="trace-16258"></a>
<a id="trace-16260"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16282"></a>
<a id="trace-16284"></a>
<a id="trace-16288"></a>
<a id="trace-16290"></a>
<a id="trace-16360"></a>
<a id="trace-16362"></a>
<a id="trace-16368"></a>
<a id="trace-16370"></a>
<a id="trace-16380"></a>
<a id="trace-16382"></a>
<a id="trace-16393"></a>
<a id="trace-16395"></a>
<a id="trace-16407"></a>
<a id="trace-16409"></a>
<a id="trace-16413"></a>
<a id="trace-16415"></a>
<a id="trace-16428"></a>
<a id="trace-16430"></a>
<a id="trace-16438"></a>
<a id="trace-16440"></a>
<a id="trace-16448"></a>
<a id="trace-16450"></a>
<a id="trace-16455"></a>
<a id="trace-16457"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
<a id="trace-16539"></a>
<a id="trace-16541"></a>
<a id="trace-16552"></a>
<a id="trace-16554"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16574"></a>
<a id="trace-16576"></a>
<a id="trace-16580"></a>
<a id="trace-16582"></a>
<a id="trace-16596"></a>
<a id="trace-16598"></a>
<a id="trace-16604"></a>
<a id="trace-16606"></a>
<a id="trace-16617"></a>
<a id="trace-16619"></a>
<a id="trace-16627"></a>
<a id="trace-16629"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16706"></a>
<a id="trace-16708"></a>
<a id="trace-16717"></a>
<a id="trace-16719"></a>
<a id="trace-16726"></a>
<a id="trace-16728"></a>
<a id="trace-16737"></a>
<a id="trace-16739"></a>
<a id="trace-16750"></a>
<a id="trace-16752"></a>
<a id="trace-16767"></a>
<a id="trace-16769"></a>
<a id="trace-16777"></a>
<a id="trace-16779"></a>
<a id="trace-16788"></a>
<a id="trace-16790"></a>
<a id="trace-16796"></a>
<a id="trace-16798"></a>
<a id="trace-16869"></a>
<a id="trace-16871"></a>
<a id="trace-16879"></a>
<a id="trace-16881"></a>
<a id="trace-16892"></a>
<a id="trace-16894"></a>
<a id="trace-16901"></a>
<a id="trace-16903"></a>
<a id="trace-16912"></a>
<a id="trace-16914"></a>
<a id="trace-16919"></a>
<a id="trace-16921"></a>
<a id="trace-16931"></a>
<a id="trace-16933"></a>
<a id="trace-16942"></a>
<a id="trace-16944"></a>
<a id="trace-16952"></a>
<a id="trace-16954"></a>
<a id="trace-16963"></a>
<a id="trace-16965"></a>
<a id="trace-17038"></a>
<a id="trace-17040"></a>
<a id="trace-17046"></a>
<a id="trace-17048"></a>
<a id="trace-17057"></a>
<a id="trace-17059"></a>
<a id="trace-17069"></a>
<a id="trace-17071"></a>
<a id="trace-17082"></a>
<a id="trace-17084"></a>
<a id="trace-17092"></a>
<a id="trace-17094"></a>
<a id="trace-17103"></a>
<a id="trace-17105"></a>
<a id="trace-17112"></a>
<a id="trace-17114"></a>
<a id="trace-17121"></a>
<a id="trace-17123"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17199"></a>
<a id="trace-17201"></a>
<a id="trace-17208"></a>
<a id="trace-17210"></a>
<a id="trace-17222"></a>
<a id="trace-17224"></a>
<a id="trace-17232"></a>
<a id="trace-17234"></a>
<a id="trace-17245"></a>
<a id="trace-17247"></a>
<a id="trace-17255"></a>
<a id="trace-17257"></a>
<a id="trace-17270"></a>
<a id="trace-17272"></a>
<a id="trace-17283"></a>
<a id="trace-17285"></a>
<a id="trace-17296"></a>
<a id="trace-17298"></a>
<a id="trace-17302"></a>
<a id="trace-17304"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17381"></a>
<a id="trace-17383"></a>
<a id="trace-17393"></a>
<a id="trace-17395"></a>
<a id="trace-17402"></a>
<a id="trace-17404"></a>
<a id="trace-17413"></a>
<a id="trace-17415"></a>
<a id="trace-17418"></a>
<a id="trace-17420"></a>
<a id="trace-17432"></a>
<a id="trace-17434"></a>
<a id="trace-17447"></a>
<a id="trace-17449"></a>
<a id="trace-17460"></a>
<a id="trace-17462"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17556"></a>
<a id="trace-17558"></a>
<a id="trace-17568"></a>
<a id="trace-17570"></a>
<a id="trace-17577"></a>
<a id="trace-17579"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17756"></a>
<a id="trace-17758"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-17788"></a>
<a id="trace-17790"></a>
<a id="trace-17808"></a>
<a id="trace-17810"></a>
<a id="trace-17822"></a>
<a id="trace-17824"></a>
<a id="trace-17905"></a>
<a id="trace-17907"></a>
<a id="trace-17919"></a>
<a id="trace-17921"></a>
<a id="trace-17937"></a>
<a id="trace-17939"></a>
<a id="trace-17948"></a>
<a id="trace-17950"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-17987"></a>
<a id="trace-17989"></a>
<a id="trace-18008"></a>
<a id="trace-18010"></a>
<a id="trace-18017"></a>
<a id="trace-18019"></a>
<a id="trace-18034"></a>
<a id="trace-18036"></a>
<a id="trace-18042"></a>
<a id="trace-18044"></a>
<a id="trace-18114"></a>
<a id="trace-18116"></a>
<a id="trace-18281"></a>
<a id="trace-18283"></a>
<a id="trace-18298"></a>
<a id="trace-18300"></a>
<a id="trace-18320"></a>
<a id="trace-18322"></a>
<a id="trace-18346"></a>
<a id="trace-18348"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18389"></a>
<a id="trace-18391"></a>
<a id="trace-18401"></a>
<a id="trace-18403"></a>
<a id="trace-18423"></a>
<a id="trace-18425"></a>
<a id="trace-18430"></a>
<a id="trace-18432"></a>
<a id="trace-18509"></a>
<a id="trace-18511"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18536"></a>
<a id="trace-18538"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18571"></a>
<a id="trace-18573"></a>
<a id="trace-18578"></a>
<a id="trace-18580"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18763"></a>
<a id="trace-18765"></a>
<a id="trace-18786"></a>
<a id="trace-18788"></a>
<a id="trace-18809"></a>
<a id="trace-18811"></a>
<a id="trace-18892"></a>
<a id="trace-18894"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-18942"></a>
<a id="trace-18944"></a>
<a id="trace-18958"></a>
<a id="trace-18960"></a>
<a id="trace-18969"></a>
<a id="trace-18971"></a>
<a id="trace-18986"></a>
<a id="trace-18988"></a>
<a id="trace-18999"></a>
<a id="trace-19001"></a>
<a id="trace-19017"></a>
<a id="trace-19019"></a>
<a id="trace-19026"></a>
<a id="trace-19028"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19276"></a>
<a id="trace-19278"></a>
<a id="trace-19298"></a>
<a id="trace-19300"></a>
<a id="trace-19316"></a>
<a id="trace-19318"></a>
<a id="trace-19340"></a>
<a id="trace-19342"></a>
<a id="trace-19354"></a>
<a id="trace-19356"></a>
<a id="trace-19375"></a>
<a id="trace-19377"></a>
<a id="trace-19391"></a>
<a id="trace-19393"></a>
<a id="trace-19409"></a>
<a id="trace-19411"></a>
<a id="trace-19419"></a>
<a id="trace-19421"></a>
<a id="trace-19492"></a>
<a id="trace-19494"></a>
<a id="trace-19499"></a>
<a id="trace-19501"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19529"></a>
<a id="trace-19531"></a>
<a id="trace-19547"></a>
<a id="trace-19549"></a>
<a id="trace-19560"></a>
<a id="trace-19562"></a>
<a id="trace-19586"></a>
<a id="trace-19588"></a>
<a id="trace-19595"></a>
<a id="trace-19597"></a>
<a id="trace-19613"></a>
<a id="trace-19615"></a>
<a id="trace-19618"></a>
<a id="trace-19620"></a>
<a id="trace-19689"></a>
<a id="trace-19691"></a>
<a id="trace-19697"></a>
<a id="trace-19699"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
<a id="trace-19728"></a>
<a id="trace-19730"></a>
<a id="trace-19736"></a>
<a id="trace-19738"></a>
<a id="trace-19749"></a>
<a id="trace-19751"></a>
<a id="trace-19760"></a>
<a id="trace-19762"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19782"></a>
<a id="trace-19784"></a>
<a id="trace-19858"></a>
<a id="trace-19860"></a>
<a id="trace-19873"></a>
<a id="trace-19875"></a>
<a id="trace-19885"></a>
<a id="trace-19887"></a>
<a id="trace-19894"></a>
<a id="trace-19896"></a>
<a id="trace-19905"></a>
<a id="trace-19907"></a>
<a id="trace-19913"></a>
<a id="trace-19915"></a>
<a id="trace-19928"></a>
<a id="trace-19930"></a>
<a id="trace-19937"></a>
<a id="trace-19939"></a>
<a id="trace-19948"></a>
<a id="trace-19950"></a>
<a id="trace-19953"></a>
<a id="trace-19955"></a>
<a id="trace-20028"></a>
<a id="trace-20030"></a>
<a id="trace-20037"></a>
<a id="trace-20039"></a>
<a id="trace-20051"></a>
<a id="trace-20053"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20094"></a>
<a id="trace-20096"></a>
<a id="trace-20108"></a>
<a id="trace-20110"></a>
<a id="trace-20116"></a>
<a id="trace-20118"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20133"></a>
<a id="trace-20135"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20213"></a>
<a id="trace-20215"></a>
<a id="trace-20227"></a>
<a id="trace-20229"></a>
<a id="trace-20237"></a>
<a id="trace-20239"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-20263"></a>
<a id="trace-20265"></a>
<a id="trace-20280"></a>
<a id="trace-20282"></a>
<a id="trace-20293"></a>
<a id="trace-20295"></a>
<a id="trace-20308"></a>
<a id="trace-20310"></a>
<a id="trace-20315"></a>
<a id="trace-20317"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20394"></a>
<a id="trace-20396"></a>
<a id="trace-20404"></a>
<a id="trace-20406"></a>
<a id="trace-20413"></a>
<a id="trace-20415"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20436"></a>
<a id="trace-20438"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-20461"></a>
<a id="trace-20463"></a>
<a id="trace-20483"></a>
<a id="trace-20485"></a>
<a id="trace-20558"></a>
<a id="trace-20560"></a>
<a id="trace-20564"></a>
<a id="trace-20566"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20591"></a>
<a id="trace-20593"></a>
<a id="trace-20605"></a>
<a id="trace-20607"></a>
<a id="trace-20612"></a>
<a id="trace-20614"></a>
<a id="trace-20625"></a>
<a id="trace-20627"></a>
<a id="trace-20633"></a>
<a id="trace-20635"></a>
<a id="trace-20644"></a>
<a id="trace-20646"></a>
<a id="trace-20652"></a>
<a id="trace-20654"></a>
<a id="trace-20727"></a>
<a id="trace-20729"></a>
<a id="trace-20736"></a>
<a id="trace-20738"></a>
<a id="trace-20749"></a>
<a id="trace-20751"></a>
<a id="trace-20759"></a>
<a id="trace-20761"></a>
<a id="trace-20776"></a>
<a id="trace-20778"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20799"></a>
<a id="trace-20801"></a>
<a id="trace-20812"></a>
<a id="trace-20814"></a>
<a id="trace-20822"></a>
<a id="trace-20824"></a>
<a id="trace-20827"></a>
<a id="trace-20829"></a>
<a id="trace-20899"></a>
<a id="trace-20901"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-20985"></a>
<a id="trace-20987"></a>
<a id="trace-20990"></a>
<a id="trace-20992"></a>
<a id="trace-21011"></a>
<a id="trace-21013"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21043"></a>
<a id="trace-21045"></a>
<a id="trace-21124"></a>
<a id="trace-21126"></a>
<a id="trace-21133"></a>
<a id="trace-21135"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21158"></a>
<a id="trace-21160"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21190"></a>
<a id="trace-21192"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21217"></a>
<a id="trace-21219"></a>
<a id="trace-21238"></a>
<a id="trace-21240"></a>
<a id="trace-21254"></a>
<a id="trace-21256"></a>
<a id="trace-21334"></a>
<a id="trace-21336"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21488"></a>
<a id="trace-21490"></a>
<a id="trace-21502"></a>
<a id="trace-21504"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21548"></a>
<a id="trace-21550"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21640"></a>
<a id="trace-21642"></a>
<a id="trace-21653"></a>
<a id="trace-21655"></a>
<a id="trace-21672"></a>
<a id="trace-21674"></a>
<a id="trace-21688"></a>
<a id="trace-21690"></a>
<a id="trace-21706"></a>
<a id="trace-21708"></a>
<a id="trace-21717"></a>
<a id="trace-21719"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21743"></a>
<a id="trace-21745"></a>
<a id="trace-21760"></a>
<a id="trace-21762"></a>
<a id="trace-21773"></a>
<a id="trace-21775"></a>
<a id="trace-21847"></a>
<a id="trace-21849"></a>
<a id="trace-21857"></a>
<a id="trace-21859"></a>
<a id="trace-21875"></a>
<a id="trace-21877"></a>
<a id="trace-21894"></a>
<a id="trace-21896"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-21947"></a>
<a id="trace-21949"></a>
<a id="trace-21955"></a>
<a id="trace-21957"></a>
<a id="trace-21968"></a>
<a id="trace-21970"></a>
<a id="trace-21984"></a>
<a id="trace-21986"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000646765797464, 'next_transition': 608}.
<a id="trace-833"></a>
<a id="trace-835"></a>
<a id="trace-918"></a>
<a id="trace-920"></a>
<a id="trace-947"></a>
<a id="trace-949"></a>
<a id="trace-978"></a>
<a id="trace-980"></a>
<a id="trace-1005"></a>
<a id="trace-1007"></a>
<a id="trace-1049"></a>
<a id="trace-1051"></a>
<a id="trace-1140"></a>
<a id="trace-1142"></a>
<a id="trace-1225"></a>
<a id="trace-1227"></a>
<a id="trace-1248"></a>
<a id="trace-1250"></a>
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1309"></a>
<a id="trace-1311"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 833): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.671608635565914, 'next_transition': 918}.
<a id="trace-1147"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1147): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2217273659055747, 'next_transition': 138}.
<a id="trace-1148"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1148): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.2217273659055747, 'next_transition': 138}.
<a id="trace-137"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 137): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1336}.
<a id="trace-138"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 138): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.875005123363413, 'next_transition': 1965}.
<a id="trace-1316"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1316): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1316. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1336}.
<a id="trace-1317"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1317): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1317. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1336}.
<a id="trace-1318"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1318): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1318. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.875005123363413, 'next_transition': 1965}.
<a id="trace-1319"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1319): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1319. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.875005123363413, 'next_transition': 1965}.
<a id="trace-1336"></a>
<a id="trace-1338"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1336): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1319. Next observer evidence: None.
<a id="trace-1346"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1346): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663370309085, 'next_transition': 1506}.
<a id="trace-1347"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1347): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663370309085, 'next_transition': 1506}.
<a id="trace-1506"></a>
<a id="trace-1508"></a>
- 13.20s–13.20s (×2), actor 5, squad 0 (trace 1506): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1319. Next observer evidence: None.
<a id="trace-1516"></a>
- 13.35s–13.35s (×1), actor 0, squad 0 (trace 1516): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150100349226173, 'next_transition': 1686}.
<a id="trace-1686"></a>
<a id="trace-1688"></a>
<a id="trace-1836"></a>
<a id="trace-1838"></a>
<a id="trace-1918"></a>
<a id="trace-1920"></a>
<a id="trace-2141"></a>
<a id="trace-2143"></a>
<a id="trace-2194"></a>
<a id="trace-2196"></a>
<a id="trace-2733"></a>
<a id="trace-2735"></a>
<a id="trace-2769"></a>
<a id="trace-2771"></a>
<a id="trace-2878"></a>
<a id="trace-2880"></a>
<a id="trace-2921"></a>
<a id="trace-2923"></a>
<a id="trace-2974"></a>
<a id="trace-2976"></a>
- 13.70s–21.75s (×20), actor 5, squad 0 (trace 1686): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1319. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5074604651130192, 'next_transition': 1836}.
<a id="trace-1965"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 1965): received platoon directive. Knowledge: actor memory at 15.00s, trace 1774. Next observer evidence: None.
<a id="trace-2073"></a>
- 17.35s–17.35s (×1), actor 8, squad 1 (trace 2073): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1774. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6717863729032492, 'next_transition': 2201}.
<a id="trace-2201"></a>
- 18.75s–18.75s (×1), actor 8, squad 1 (trace 2201): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1774. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000004, 'next_transition': 2328}.
<a id="trace-2202"></a>
- 18.75s–18.75s (×1), actor 8, squad 1 (trace 2202): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1774. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000004, 'next_transition': 2328}.
<a id="trace-2203"></a>
<a id="trace-2328"></a>
<a id="trace-2456"></a>
<a id="trace-2592"></a>
- 18.75s–19.00s (×4), actor 8, squad 1 (trace 2203): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1774. Next observer evidence: {'until': 18.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000004, 'next_transition': 2328}.
<a id="trace-2981"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2981): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2793. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1652695757130604, 'next_transition': 3324}.
<a id="trace-2982"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2982): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2793. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1652695757130604, 'next_transition': 3324}.
<a id="trace-2983"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2983): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2793. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1652695757130604, 'next_transition': 3324}.
<a id="trace-3324"></a>
<a id="trace-3326"></a>
<a id="trace-3350"></a>
<a id="trace-3352"></a>
<a id="trace-3388"></a>
<a id="trace-3390"></a>
<a id="trace-3406"></a>
<a id="trace-3408"></a>
<a id="trace-3441"></a>
<a id="trace-3443"></a>
<a id="trace-3579"></a>
<a id="trace-3581"></a>
- 22.25s–25.25s (×12), actor 5, squad 0 (trace 3324): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2798. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6168568410315387, 'next_transition': 3350}.
<a id="trace-3334"></a>
- 22.35s–22.35s (×1), actor 8, squad 1 (trace 3334): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2801. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.273397074561547, 'next_transition': 3590}.
<a id="trace-3588"></a>
- 25.35s–25.35s (×1), actor 0, squad 0 (trace 3588): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3498. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5326440495478613, 'next_transition': 3706}.
<a id="trace-3590"></a>
- 25.35s–25.35s (×1), actor 8, squad 1 (trace 3590): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3506. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9502715926673595, 'next_transition': 4321}.
<a id="trace-3706"></a>
<a id="trace-3708"></a>
<a id="trace-3735"></a>
<a id="trace-3737"></a>
<a id="trace-3763"></a>
<a id="trace-3765"></a>
<a id="trace-3792"></a>
<a id="trace-3794"></a>
<a id="trace-3820"></a>
<a id="trace-3822"></a>
<a id="trace-3847"></a>
<a id="trace-3849"></a>
- 25.75s–28.25s (×12), actor 5, squad 0 (trace 3706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3503. Next observer evidence: {'until': 26.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.33315754555593613, 'next_transition': 3735}.
<a id="trace-3869"></a>
- 28.70s–28.70s (×1), actor 0, squad 0 (trace 3869): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3498. Next observer evidence: None.
<a id="trace-3870"></a>
- 28.70s–28.70s (×1), actor 0, squad 0 (trace 3870): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3498. Next observer evidence: None.
<a id="trace-4321"></a>
- 28.70s–28.70s (×1), actor 8, squad 1 (trace 4321): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3506. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3631707071061767, 'next_transition': 4464}.
<a id="trace-4324"></a>
<a id="trace-4326"></a>
<a id="trace-4475"></a>
<a id="trace-4477"></a>
<a id="trace-4622"></a>
<a id="trace-4624"></a>
<a id="trace-4657"></a>
<a id="trace-4659"></a>
<a id="trace-4794"></a>
<a id="trace-4796"></a>
<a id="trace-4814"></a>
<a id="trace-4816"></a>
<a id="trace-4838"></a>
<a id="trace-4840"></a>
<a id="trace-4866"></a>
<a id="trace-4868"></a>
<a id="trace-4887"></a>
<a id="trace-4902"></a>
<a id="trace-4940"></a>
<a id="trace-4960"></a>
<a id="trace-5045"></a>
<a id="trace-5047"></a>
- 28.75s–39.75s (×22), actor 5, squad 0 (trace 4324): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3503. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.7270709805600688, 'next_transition': 4475}.
<a id="trace-4464"></a>
- 30.10s–30.10s (×1), actor 8, squad 1 (trace 4464): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 4398. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.03270000000000017, 'next_transition': 4974}.
<a id="trace-4974"></a>
- 39.35s–39.35s (×1), actor 9, squad 1 (trace 4974): MoveTactically. Knowledge: actor memory at 35.00s, trace 4727. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252130280020244, 'next_transition': 630}.
<a id="trace-4975"></a>
- 39.35s–39.35s (×1), actor 9, squad 1 (trace 4975): traveling. Knowledge: actor memory at 35.00s, trace 4727. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252130280020244, 'next_transition': 630}.
<a id="trace-4976"></a>
- 39.35s–39.35s (×1), actor 9, squad 1 (trace 4976): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4727. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47252130280020244, 'next_transition': 630}.
<a id="trace-629"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 629): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-630"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 630): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5056"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 5056): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.683098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5056. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25504513092844044, 'next_transition': 5138}.
<a id="trace-5057"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 5057): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.683098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5057. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25504513092844044, 'next_transition': 5138}.
<a id="trace-5058"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 5058): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.683098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5058. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.527506702996218, 'next_transition': 5656}.
<a id="trace-5059"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 5059): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.683098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5059. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.527506702996218, 'next_transition': 5656}.
<a id="trace-5138"></a>
<a id="trace-5140"></a>
<a id="trace-5168"></a>
<a id="trace-5170"></a>
<a id="trace-5194"></a>
<a id="trace-5196"></a>
<a id="trace-5237"></a>
<a id="trace-5239"></a>
<a id="trace-5254"></a>
<a id="trace-5256"></a>
<a id="trace-5284"></a>
<a id="trace-5286"></a>
- 40.25s–43.25s (×12), actor 5, squad 0 (trace 5138): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5068. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.33209837914126744, 'next_transition': 5168}.
<a id="trace-5299"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 5299): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 5063. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08563749999999981, 'next_transition': 5507}.
<a id="trace-5300"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 5300): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 5063. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08563749999999981, 'next_transition': 5507}.
<a id="trace-5507"></a>
- 44.60s–44.60s (×1), actor 0, squad 0 (trace 5507): NeedSupport. Knowledge: actor memory at 40.00s, trace 5063. Next observer evidence: None.
<a id="trace-5530"></a>
<a id="trace-5532"></a>
<a id="trace-5641"></a>
<a id="trace-5643"></a>
<a id="trace-5660"></a>
<a id="trace-5662"></a>
<a id="trace-5691"></a>
<a id="trace-5693"></a>
<a id="trace-5739"></a>
<a id="trace-5741"></a>
<a id="trace-5756"></a>
<a id="trace-5758"></a>
<a id="trace-5811"></a>
<a id="trace-5813"></a>
<a id="trace-5828"></a>
<a id="trace-5830"></a>
<a id="trace-5847"></a>
<a id="trace-5849"></a>
<a id="trace-5948"></a>
<a id="trace-5950"></a>
<a id="trace-5968"></a>
<a id="trace-5970"></a>
<a id="trace-5989"></a>
<a id="trace-5991"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
<a id="trace-6030"></a>
<a id="trace-6032"></a>
<a id="trace-6052"></a>
<a id="trace-6054"></a>
<a id="trace-6069"></a>
<a id="trace-6071"></a>
<a id="trace-6112"></a>
<a id="trace-6114"></a>
<a id="trace-6130"></a>
<a id="trace-6132"></a>
<a id="trace-6219"></a>
<a id="trace-6221"></a>
<a id="trace-6243"></a>
<a id="trace-6245"></a>
<a id="trace-6266"></a>
<a id="trace-6268"></a>
<a id="trace-6301"></a>
<a id="trace-6303"></a>
<a id="trace-6316"></a>
<a id="trace-6318"></a>
<a id="trace-6341"></a>
<a id="trace-6343"></a>
<a id="trace-6353"></a>
<a id="trace-6355"></a>
<a id="trace-6385"></a>
<a id="trace-6387"></a>
<a id="trace-6472"></a>
<a id="trace-6474"></a>
<a id="trace-6508"></a>
<a id="trace-6510"></a>
<a id="trace-6520"></a>
<a id="trace-6522"></a>
- 44.75s–61.75s (×58), actor 5, squad 0 (trace 5530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5068. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5863098589613699, 'next_transition': 5641}.
<a id="trace-5656"></a>
- 45.50s–45.50s (×1), actor 9, squad 1 (trace 5656): traveling overwatch. Knowledge: actor memory at 45.00s, trace 5569. Next observer evidence: {'until': 75.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8007}.
<a id="trace-5657"></a>
- 45.50s–45.50s (×1), actor 9, squad 1 (trace 5657): matching received arrivals: traveling stage complete. Knowledge: actor memory at 45.00s, trace 5569. Next observer evidence: {'until': 75.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8007}.
<a id="trace-6535"></a>
- 62.15s–62.15s (×1), actor 0, squad 0 (trace 6535): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 6397. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6703}.
<a id="trace-6536"></a>
- 62.15s–62.15s (×1), actor 0, squad 0 (trace 6536): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 6397. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6703}.
<a id="trace-6703"></a>
<a id="trace-6705"></a>
<a id="trace-6716"></a>
<a id="trace-6718"></a>
<a id="trace-6738"></a>
<a id="trace-6740"></a>
<a id="trace-6766"></a>
<a id="trace-6768"></a>
<a id="trace-6783"></a>
<a id="trace-6785"></a>
<a id="trace-6804"></a>
<a id="trace-6806"></a>
<a id="trace-6917"></a>
<a id="trace-6919"></a>
<a id="trace-6934"></a>
<a id="trace-6936"></a>
<a id="trace-6961"></a>
<a id="trace-6963"></a>
<a id="trace-6983"></a>
<a id="trace-6985"></a>
<a id="trace-7008"></a>
<a id="trace-7010"></a>
<a id="trace-7023"></a>
<a id="trace-7025"></a>
<a id="trace-7050"></a>
<a id="trace-7052"></a>
<a id="trace-7068"></a>
<a id="trace-7070"></a>
<a id="trace-7090"></a>
<a id="trace-7092"></a>
<a id="trace-7102"></a>
<a id="trace-7104"></a>
<a id="trace-7189"></a>
<a id="trace-7191"></a>
<a id="trace-7205"></a>
<a id="trace-7207"></a>
<a id="trace-7229"></a>
<a id="trace-7231"></a>
<a id="trace-7244"></a>
<a id="trace-7246"></a>
<a id="trace-7269"></a>
<a id="trace-7271"></a>
- 62.25s–72.25s (×42), actor 5, squad 0 (trace 6703): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 6402. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6716}.
<a id="trace-7281"></a>
- 72.55s–72.55s (×1), actor 0, squad 0 (trace 7281): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 7114. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9730229908137675, 'next_transition': 7331}.
<a id="trace-7331"></a>
<a id="trace-7333"></a>
<a id="trace-7425"></a>
<a id="trace-7427"></a>
<a id="trace-7532"></a>
<a id="trace-7534"></a>
<a id="trace-7576"></a>
<a id="trace-7578"></a>
<a id="trace-7591"></a>
<a id="trace-7593"></a>
<a id="trace-7605"></a>
<a id="trace-7607"></a>
<a id="trace-7615"></a>
<a id="trace-7617"></a>
<a id="trace-7630"></a>
<a id="trace-7632"></a>
<a id="trace-7641"></a>
<a id="trace-7643"></a>
<a id="trace-7659"></a>
<a id="trace-7661"></a>
<a id="trace-7669"></a>
<a id="trace-7671"></a>
<a id="trace-7756"></a>
<a id="trace-7758"></a>
<a id="trace-7769"></a>
<a id="trace-7771"></a>
<a id="trace-7798"></a>
<a id="trace-7800"></a>
<a id="trace-7810"></a>
<a id="trace-7812"></a>
<a id="trace-7821"></a>
<a id="trace-7823"></a>
<a id="trace-7855"></a>
<a id="trace-7857"></a>
<a id="trace-7867"></a>
<a id="trace-7869"></a>
<a id="trace-7949"></a>
<a id="trace-7951"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-7976"></a>
<a id="trace-7978"></a>
<a id="trace-8000"></a>
<a id="trace-8002"></a>
<a id="trace-8015"></a>
<a id="trace-8017"></a>
<a id="trace-8029"></a>
<a id="trace-8031"></a>
<a id="trace-8042"></a>
<a id="trace-8044"></a>
<a id="trace-8065"></a>
<a id="trace-8067"></a>
<a id="trace-8075"></a>
<a id="trace-8077"></a>
<a id="trace-8155"></a>
<a id="trace-8157"></a>
<a id="trace-8166"></a>
<a id="trace-8168"></a>
<a id="trace-8180"></a>
<a id="trace-8182"></a>
<a id="trace-8190"></a>
<a id="trace-8192"></a>
<a id="trace-8204"></a>
<a id="trace-8206"></a>
<a id="trace-8215"></a>
<a id="trace-8217"></a>
<a id="trace-8231"></a>
<a id="trace-8233"></a>
<a id="trace-8266"></a>
<a id="trace-8268"></a>
<a id="trace-8364"></a>
<a id="trace-8366"></a>
<a id="trace-8380"></a>
<a id="trace-8382"></a>
<a id="trace-8390"></a>
<a id="trace-8392"></a>
<a id="trace-8403"></a>
<a id="trace-8405"></a>
<a id="trace-8426"></a>
<a id="trace-8428"></a>
<a id="trace-8452"></a>
<a id="trace-8454"></a>
<a id="trace-8464"></a>
<a id="trace-8466"></a>
<a id="trace-8545"></a>
<a id="trace-8547"></a>
<a id="trace-8569"></a>
<a id="trace-8571"></a>
<a id="trace-8592"></a>
<a id="trace-8594"></a>
<a id="trace-8606"></a>
<a id="trace-8608"></a>
<a id="trace-8622"></a>
<a id="trace-8624"></a>
<a id="trace-8635"></a>
<a id="trace-8637"></a>
<a id="trace-8651"></a>
<a id="trace-8653"></a>
<a id="trace-8663"></a>
<a id="trace-8665"></a>
<a id="trace-8744"></a>
<a id="trace-8746"></a>
<a id="trace-8758"></a>
<a id="trace-8760"></a>
<a id="trace-8772"></a>
<a id="trace-8774"></a>
<a id="trace-8781"></a>
<a id="trace-8783"></a>
<a id="trace-8795"></a>
<a id="trace-8797"></a>
<a id="trace-8804"></a>
<a id="trace-8806"></a>
<a id="trace-8817"></a>
<a id="trace-8819"></a>
<a id="trace-8829"></a>
<a id="trace-8831"></a>
- 73.25s–108.75s (×116), actor 5, squad 0 (trace 7331): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 7119. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.086885097880513, 'next_transition': 7425}.
<a id="trace-8007"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 8007): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 7883. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1022}.
<a id="trace-8008"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 8008): MoveTactically. Knowledge: actor memory at 85.00s, trace 7883. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1022}.
<a id="trace-8009"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 8009): . Knowledge: actor memory at 85.00s, trace 7883. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1022}.
<a id="trace-1021"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1021): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8849}.
<a id="trace-1022"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (events line 1022): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 113.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9048}.
<a id="trace-8839"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 8839): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 8839. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8849}.
<a id="trace-8840"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (trace 8840): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 8840. Next observer evidence: {'until': 113.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9048}.
<a id="trace-8849"></a>
<a id="trace-8851"></a>
<a id="trace-8862"></a>
<a id="trace-8864"></a>
<a id="trace-8950"></a>
<a id="trace-8952"></a>
<a id="trace-8964"></a>
<a id="trace-8966"></a>
<a id="trace-8979"></a>
<a id="trace-8981"></a>
<a id="trace-8989"></a>
<a id="trace-8991"></a>
<a id="trace-9004"></a>
<a id="trace-9006"></a>
<a id="trace-9013"></a>
<a id="trace-9015"></a>
<a id="trace-9029"></a>
<a id="trace-9031"></a>
<a id="trace-9040"></a>
<a id="trace-9042"></a>
<a id="trace-9117"></a>
<a id="trace-9119"></a>
<a id="trace-9128"></a>
<a id="trace-9130"></a>
- 109.25s–114.75s (×24), actor 5, squad 0 (trace 8849): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 8840. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8862}.
<a id="trace-9048"></a>
- 113.90s–113.90s (×1), actor 9, squad 1 (trace 9048): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 8885. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.449986990853478, 'next_transition': 9480}.
<a id="trace-9049"></a>
- 113.90s–113.90s (×1), actor 9, squad 1 (trace 9049): bounding overwatch. Knowledge: actor memory at 110.00s, trace 8885. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.449986990853478, 'next_transition': 9480}.
<a id="trace-9050"></a>
- 113.90s–113.90s (×1), actor 9, squad 1 (trace 9050): new contact inside 100 m. Knowledge: actor memory at 110.00s, trace 8885. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.449986990853478, 'next_transition': 9480}.
<a id="trace-9161"></a>
- 115.15s–115.15s (×1), actor 0, squad 0 (trace 9161): MoveTactically. Knowledge: actor memory at 115.00s, trace 9138. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9226}.
<a id="trace-9162"></a>
- 115.15s–115.15s (×1), actor 0, squad 0 (trace 9162): traveling overwatch. Knowledge: actor memory at 115.00s, trace 9138. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9226}.
<a id="trace-9163"></a>
- 115.15s–115.15s (×1), actor 0, squad 0 (trace 9163): received platoon directive. Knowledge: actor memory at 115.00s, trace 9138. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9226}.
<a id="trace-9226"></a>
<a id="trace-9228"></a>
<a id="trace-9239"></a>
<a id="trace-9241"></a>
- 115.25s–115.75s (×4), actor 5, squad 0 (trace 9226): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 9143. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9239}.
<a id="trace-9264"></a>
- 116.15s–116.15s (×1), actor 0, squad 0 (trace 9264): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 9138. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9426}.
<a id="trace-9426"></a>
<a id="trace-9428"></a>
<a id="trace-9487"></a>
<a id="trace-9489"></a>
<a id="trace-9570"></a>
<a id="trace-9572"></a>
<a id="trace-9594"></a>
<a id="trace-9596"></a>
<a id="trace-9622"></a>
<a id="trace-9624"></a>
<a id="trace-9642"></a>
<a id="trace-9644"></a>
<a id="trace-9728"></a>
<a id="trace-9730"></a>
<a id="trace-9746"></a>
<a id="trace-9748"></a>
<a id="trace-9768"></a>
<a id="trace-9770"></a>
<a id="trace-9785"></a>
<a id="trace-9787"></a>
<a id="trace-9814"></a>
<a id="trace-9816"></a>
<a id="trace-9840"></a>
<a id="trace-9842"></a>
<a id="trace-10539"></a>
<a id="trace-10541"></a>
<a id="trace-10563"></a>
<a id="trace-10565"></a>
<a id="trace-10680"></a>
<a id="trace-10682"></a>
<a id="trace-10692"></a>
<a id="trace-10694"></a>
<a id="trace-10717"></a>
<a id="trace-10719"></a>
<a id="trace-10771"></a>
<a id="trace-10773"></a>
<a id="trace-10792"></a>
<a id="trace-10794"></a>
<a id="trace-10820"></a>
<a id="trace-10822"></a>
<a id="trace-10842"></a>
<a id="trace-10844"></a>
<a id="trace-10862"></a>
<a id="trace-10864"></a>
<a id="trace-10985"></a>
<a id="trace-10987"></a>
<a id="trace-11079"></a>
<a id="trace-11081"></a>
<a id="trace-11096"></a>
<a id="trace-11098"></a>
<a id="trace-11134"></a>
<a id="trace-11136"></a>
<a id="trace-11163"></a>
<a id="trace-11165"></a>
<a id="trace-11184"></a>
<a id="trace-11186"></a>
<a id="trace-11203"></a>
<a id="trace-11205"></a>
- 116.25s–133.30s (×58), actor 5, squad 0 (trace 9426): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 9143. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9487}.
<a id="trace-9480"></a>
- 117.20s–117.20s (×1), actor 9, squad 1 (trace 9480): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 9146. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.319096541730557, 'next_transition': 9850}.
<a id="trace-9850"></a>
<a id="trace-9956"></a>
<a id="trace-10061"></a>
<a id="trace-10166"></a>
<a id="trace-10274"></a>
<a id="trace-10382"></a>
- 122.85s–123.15s (×6), actor 9, squad 1 (trace 9850): new contact inside 100 m. Knowledge: actor memory at 120.00s, trace 9659. Next observer evidence: None.
<a id="trace-10733"></a>
- 126.45s–126.45s (×1), actor 9, squad 1 (trace 10733): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 125.00s, trace 10601. Next observer evidence: {'until': 129.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10879}.
<a id="trace-10735"></a>
- 126.45s–126.45s (×1), actor 9, squad 1 (trace 10735): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 125.00s, trace 10601. Next observer evidence: {'until': 129.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10879}.
<a id="trace-10879"></a>
- 129.75s–129.75s (×1), actor 9, squad 1 (trace 10879): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 125.00s, trace 10601. Next observer evidence: {'until': 133, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11193}.
<a id="trace-11193"></a>
- 133.05s–133.05s (×1), actor 9, squad 1 (trace 11193): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 130.00s, trace 11004. Next observer evidence: {'until': 163, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.0952, 'next_transition': None}.
<a id="trace-11215"></a>
- 133.65s–133.65s (×1), actor 0, squad 0 (trace 11215): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 10996. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1181297576101758, 'next_transition': 11257}.
<a id="trace-11257"></a>
- 134.30s–134.30s (×1), actor 0, squad 0 (trace 11257): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 10996. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02835516101611817, 'next_transition': 11501}.
<a id="trace-11501"></a>
<a id="trace-11503"></a>
<a id="trace-11523"></a>
<a id="trace-11525"></a>
<a id="trace-11549"></a>
<a id="trace-11551"></a>
<a id="trace-11585"></a>
<a id="trace-11587"></a>
<a id="trace-11616"></a>
<a id="trace-11618"></a>
<a id="trace-11634"></a>
<a id="trace-11636"></a>
<a id="trace-11677"></a>
<a id="trace-11679"></a>
<a id="trace-11721"></a>
<a id="trace-11723"></a>
<a id="trace-11835"></a>
<a id="trace-11837"></a>
<a id="trace-11855"></a>
<a id="trace-11857"></a>
<a id="trace-11897"></a>
<a id="trace-11899"></a>
<a id="trace-11931"></a>
<a id="trace-11933"></a>
<a id="trace-11971"></a>
<a id="trace-11973"></a>
<a id="trace-12093"></a>
<a id="trace-12095"></a>
<a id="trace-12135"></a>
<a id="trace-12152"></a>
<a id="trace-12169"></a>
<a id="trace-12197"></a>
- 135.30s–148.30s (×32), actor 5, squad 0 (trace 11501): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 11422. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3669833964362058, 'next_transition': 11523}.
<a id="trace-12208"></a>
- 148.70s–148.70s (×1), actor 0, squad 0 (trace 12208): current contact unknown for 10 s. Knowledge: actor memory at 145.00s, trace 12004. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13544729187442753, 'next_transition': 12372}.
<a id="trace-12372"></a>
<a id="trace-12390"></a>
<a id="trace-12411"></a>
<a id="trace-12506"></a>
<a id="trace-12559"></a>
<a id="trace-12581"></a>
<a id="trace-12599"></a>
<a id="trace-12613"></a>
<a id="trace-12631"></a>
<a id="trace-12668"></a>
<a id="trace-12753"></a>
- 148.80s–155.30s (×11), actor 5, squad 0 (trace 12372): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 12009. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838822176828234, 'next_transition': 12390}.
<a id="trace-12768"></a>
- 155.65s–155.65s (×1), actor 0, squad 0 (trace 12768): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 12680. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09141114718995881, 'next_transition': 13088}.
<a id="trace-12769"></a>
- 155.65s–155.65s (×1), actor 0, squad 0 (trace 12769): bounding overwatch. Knowledge: actor memory at 155.00s, trace 12680. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09141114718995881, 'next_transition': 13088}.
<a id="trace-12770"></a>
- 155.65s–155.65s (×1), actor 0, squad 0 (trace 12770): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 12680. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09141114718995881, 'next_transition': 13088}.
<a id="trace-13088"></a>
<a id="trace-13109"></a>
- 155.80s–156.30s (×2), actor 5, squad 0 (trace 13088): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 12685. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14840098035756624, 'next_transition': 13109}.
<a id="trace-13116"></a>
- 156.30s–156.30s (×1), actor 0, squad 0 (trace 13116): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 12680. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.30119025261276966, 'next_transition': 13465}.
<a id="trace-13465"></a>
<a id="trace-13492"></a>
<a id="trace-13505"></a>
<a id="trace-13534"></a>
<a id="trace-13555"></a>
- 156.80s–158.80s (×5), actor 5, squad 0 (trace 13465): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 12685. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.46209831290692344, 'next_transition': 13492}.
<a id="trace-13580"></a>
- 159.75s–159.75s (×1), actor 1, squad 0 (trace 13580): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 155.00s, trace 12681. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13740}.
<a id="trace-13581"></a>
- 159.75s–159.75s (×1), actor 1, squad 0 (trace 13581): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 12681. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13740}.
<a id="trace-13732"></a>
- 159.75s–159.75s (×1), actor 1, squad 0 (trace 13732): NeedSupport. Knowledge: actor memory at 155.00s, trace 12681. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13740}.
<a id="trace-13740"></a>
<a id="trace-13819"></a>
<a id="trace-13841"></a>
<a id="trace-13861"></a>
<a id="trace-13871"></a>
<a id="trace-14057"></a>
<a id="trace-14080"></a>
<a id="trace-14093"></a>
<a id="trace-14108"></a>
<a id="trace-14139"></a>
<a id="trace-14159"></a>
<a id="trace-14173"></a>
<a id="trace-14263"></a>
<a id="trace-14278"></a>
<a id="trace-14291"></a>
<a id="trace-14304"></a>
<a id="trace-14320"></a>
<a id="trace-14334"></a>
- 159.80s–172.80s (×18), actor 5, squad 0 (trace 13740): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 12685. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13819}.
<a id="trace-14342"></a>
- 173.10s–173.10s (×1), actor 1, squad 0 (trace 14342): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 170.00s, trace 14193. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519710819722545, 'next_transition': 14353}.
<a id="trace-14343"></a>
- 173.10s–173.10s (×1), actor 1, squad 0 (trace 14343): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 170.00s, trace 14193. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519710819722545, 'next_transition': 14353}.
<a id="trace-14353"></a>
<a id="trace-14360"></a>
<a id="trace-14396"></a>
<a id="trace-14470"></a>
<a id="trace-14484"></a>
<a id="trace-14496"></a>
<a id="trace-14506"></a>
<a id="trace-14516"></a>
- 173.30s–177.30s (×8), actor 5, squad 0 (trace 14353): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 14195. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560355879505979, 'next_transition': 14360}.
<a id="trace-1598"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 1598): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24951990879591346, 'next_transition': 14536}.
<a id="trace-14529"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 14529): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 14529. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24951990879591346, 'next_transition': 14536}.
<a id="trace-14536"></a>
<a id="trace-14546"></a>
<a id="trace-14564"></a>
<a id="trace-14575"></a>
<a id="trace-14657"></a>
<a id="trace-14665"></a>
<a id="trace-14674"></a>
<a id="trace-14686"></a>
- 178.30s–181.80s (×8), actor 5, squad 0 (trace 14536): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 14529. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7365057296186862, 'next_transition': 14546}.
<a id="trace-14700"></a>
- 182.45s–182.45s (×1), actor 1, squad 0 (trace 14700): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 180.00s, trace 14584. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14706}.
<a id="trace-14706"></a>
<a id="trace-14722"></a>
<a id="trace-14736"></a>
<a id="trace-14747"></a>
<a id="trace-14838"></a>
<a id="trace-14852"></a>
<a id="trace-14868"></a>
<a id="trace-14887"></a>
<a id="trace-14897"></a>
<a id="trace-14920"></a>
<a id="trace-14929"></a>
<a id="trace-14935"></a>
<a id="trace-15006"></a>
<a id="trace-15014"></a>
<a id="trace-15025"></a>
<a id="trace-15052"></a>
<a id="trace-15067"></a>
<a id="trace-15090"></a>
<a id="trace-15099"></a>
<a id="trace-15184"></a>
<a id="trace-15191"></a>
<a id="trace-15200"></a>
<a id="trace-15209"></a>
<a id="trace-15226"></a>
<a id="trace-15253"></a>
<a id="trace-15268"></a>
<a id="trace-15351"></a>
<a id="trace-15365"></a>
<a id="trace-15383"></a>
<a id="trace-15393"></a>
<a id="trace-15399"></a>
<a id="trace-15411"></a>
<a id="trace-15420"></a>
<a id="trace-15430"></a>
<a id="trace-15437"></a>
<a id="trace-15513"></a>
<a id="trace-15535"></a>
<a id="trace-15550"></a>
<a id="trace-15564"></a>
<a id="trace-15576"></a>
<a id="trace-15588"></a>
<a id="trace-15596"></a>
<a id="trace-15612"></a>
<a id="trace-15685"></a>
<a id="trace-15702"></a>
<a id="trace-15713"></a>
<a id="trace-15726"></a>
<a id="trace-15739"></a>
<a id="trace-15754"></a>
<a id="trace-15764"></a>
<a id="trace-15780"></a>
<a id="trace-15787"></a>
<a id="trace-15861"></a>
<a id="trace-15876"></a>
<a id="trace-15895"></a>
<a id="trace-15915"></a>
<a id="trace-15938"></a>
<a id="trace-15949"></a>
<a id="trace-16023"></a>
<a id="trace-16040"></a>
<a id="trace-16057"></a>
<a id="trace-16074"></a>
<a id="trace-16085"></a>
<a id="trace-16103"></a>
<a id="trace-16112"></a>
<a id="trace-16187"></a>
<a id="trace-16198"></a>
<a id="trace-16212"></a>
<a id="trace-16235"></a>
<a id="trace-16242"></a>
<a id="trace-16256"></a>
<a id="trace-16280"></a>
<a id="trace-16286"></a>
<a id="trace-16358"></a>
<a id="trace-16366"></a>
<a id="trace-16378"></a>
<a id="trace-16391"></a>
<a id="trace-16405"></a>
<a id="trace-16411"></a>
<a id="trace-16426"></a>
<a id="trace-16436"></a>
<a id="trace-16446"></a>
<a id="trace-16453"></a>
<a id="trace-16529"></a>
<a id="trace-16550"></a>
<a id="trace-16561"></a>
<a id="trace-16572"></a>
<a id="trace-16594"></a>
<a id="trace-16602"></a>
<a id="trace-16615"></a>
<a id="trace-16625"></a>
<a id="trace-16696"></a>
<a id="trace-16704"></a>
<a id="trace-16715"></a>
<a id="trace-16735"></a>
<a id="trace-16748"></a>
<a id="trace-16765"></a>
<a id="trace-16775"></a>
<a id="trace-16786"></a>
<a id="trace-16794"></a>
<a id="trace-16890"></a>
<a id="trace-16899"></a>
- 182.80s–246.80s (×102), actor 5, squad 0 (trace 14706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14586. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14722}.
<a id="trace-1850"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 1850): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16905"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 16905): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.10s, trace 16905. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16917}.
<a id="trace-16917"></a>
<a id="trace-16929"></a>
<a id="trace-16940"></a>
<a id="trace-16961"></a>
<a id="trace-17036"></a>
<a id="trace-17067"></a>
<a id="trace-17090"></a>
<a id="trace-17101"></a>
<a id="trace-17110"></a>
<a id="trace-17119"></a>
<a id="trace-17127"></a>
<a id="trace-17206"></a>
<a id="trace-17220"></a>
<a id="trace-17243"></a>
<a id="trace-17268"></a>
<a id="trace-17281"></a>
<a id="trace-17294"></a>
<a id="trace-17379"></a>
- 247.80s–260.80s (×18), actor 5, squad 0 (trace 16917): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 16905. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16929}.
<a id="trace-17384"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 17384): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 17384. Next observer evidence: None.
<a id="trace-17385"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 17385): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 17385. Next observer evidence: None.
<a id="trace-1899"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 1899): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17391}.
<a id="trace-17391"></a>
<a id="trace-17411"></a>
<a id="trace-17430"></a>
<a id="trace-17445"></a>
<a id="trace-17458"></a>
<a id="trace-17470"></a>
<a id="trace-17547"></a>
<a id="trace-17554"></a>
<a id="trace-17575"></a>
- 261.30s–266.80s (×9), actor 5, squad 0 (trace 17391): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 17385. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17411}.
<a id="trace-17581"></a>
- 267.05s–267.05s (×1), actor 1, squad 0 (trace 17581): MoveTactically. Knowledge: actor memory at 265.00s, trace 17476. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0314930405010372, 'next_transition': 17754}.
<a id="trace-17582"></a>
- 267.05s–267.05s (×1), actor 1, squad 0 (trace 17582): traveling. Knowledge: actor memory at 265.00s, trace 17476. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0314930405010372, 'next_transition': 17754}.
<a id="trace-17583"></a>
- 267.05s–267.05s (×1), actor 1, squad 0 (trace 17583): received platoon directive. Knowledge: actor memory at 265.00s, trace 17476. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0314930405010372, 'next_transition': 17754}.
<a id="trace-17754"></a>
<a id="trace-17778"></a>
<a id="trace-17806"></a>
<a id="trace-17820"></a>
<a id="trace-17903"></a>
<a id="trace-17917"></a>
<a id="trace-17946"></a>
<a id="trace-17970"></a>
<a id="trace-17985"></a>
<a id="trace-18006"></a>
<a id="trace-18015"></a>
<a id="trace-18032"></a>
<a id="trace-18040"></a>
<a id="trace-18112"></a>
- 267.80s–275.30s (×14), actor 5, squad 0 (trace 17754): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 17478. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499866190279135, 'next_transition': 17778}.
<a id="trace-18119"></a>
- 275.65s–275.65s (×1), actor 1, squad 0 (trace 18119): matching received arrivals: traveling stage complete. Knowledge: actor memory at 275.00s, trace 18046. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520144326914143, 'next_transition': 18279}.
<a id="trace-18279"></a>
<a id="trace-18296"></a>
<a id="trace-18318"></a>
<a id="trace-18344"></a>
<a id="trace-18357"></a>
<a id="trace-18387"></a>
<a id="trace-18399"></a>
<a id="trace-18421"></a>
<a id="trace-18507"></a>
<a id="trace-18516"></a>
<a id="trace-18534"></a>
<a id="trace-18547"></a>
<a id="trace-18569"></a>
<a id="trace-18576"></a>
- 275.80s–282.80s (×14), actor 5, squad 0 (trace 18279): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 18048. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3465037319651994, 'next_transition': 18296}.
<a id="trace-18584"></a>
- 282.85s–282.85s (×1), actor 1, squad 0 (trace 18584): matching received arrivals: traveling stage complete. Knowledge: actor memory at 280.00s, trace 18437. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039955085115515, 'next_transition': 18749}.
<a id="trace-18749"></a>
<a id="trace-18761"></a>
<a id="trace-18784"></a>
<a id="trace-18807"></a>
<a id="trace-18890"></a>
<a id="trace-18906"></a>
<a id="trace-18940"></a>
<a id="trace-18956"></a>
<a id="trace-18967"></a>
<a id="trace-18984"></a>
<a id="trace-19015"></a>
- 283.30s–289.30s (×11), actor 5, squad 0 (trace 18749): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 18439. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9135031385945813, 'next_transition': 18761}.
<a id="trace-19048"></a>
- 290.05s–290.05s (×1), actor 1, squad 0 (trace 19048): matching received arrivals: traveling stage complete. Knowledge: actor memory at 290.00s, trace 19030. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25202000000000024, 'next_transition': 19261}.
<a id="trace-19261"></a>
<a id="trace-19274"></a>
<a id="trace-19296"></a>
<a id="trace-19314"></a>
<a id="trace-19352"></a>
<a id="trace-19373"></a>
<a id="trace-19389"></a>
<a id="trace-19417"></a>
- 290.30s–294.80s (×8), actor 5, squad 0 (trace 19261): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 19032. Next observer evidence: {'until': 290.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875000005290997, 'next_transition': 19274}.
<a id="trace-19425"></a>
- 294.85s–294.85s (×1), actor 1, squad 0 (trace 19425): matching received arrivals: deployment leg complete. Knowledge: actor memory at 290.00s, trace 19030. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19497}.
<a id="trace-19497"></a>
<a id="trace-19513"></a>
<a id="trace-19527"></a>
<a id="trace-19545"></a>
<a id="trace-19558"></a>
<a id="trace-19584"></a>
<a id="trace-19611"></a>
<a id="trace-19695"></a>
<a id="trace-19706"></a>
<a id="trace-19715"></a>
<a id="trace-19726"></a>
<a id="trace-19734"></a>
<a id="trace-19758"></a>
<a id="trace-19774"></a>
<a id="trace-19780"></a>
<a id="trace-19856"></a>
<a id="trace-19883"></a>
<a id="trace-19892"></a>
<a id="trace-19903"></a>
<a id="trace-19911"></a>
<a id="trace-19935"></a>
<a id="trace-19946"></a>
<a id="trace-20026"></a>
<a id="trace-20049"></a>
<a id="trace-20063"></a>
<a id="trace-20080"></a>
<a id="trace-20092"></a>
<a id="trace-20106"></a>
<a id="trace-20114"></a>
<a id="trace-20124"></a>
<a id="trace-20131"></a>
<a id="trace-20211"></a>
- 295.80s–315.80s (×32), actor 5, squad 0 (trace 19497): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 19428. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19513}.
<a id="trace-2201"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (events line 2201): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20217"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 20217): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 20217. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20225}.
<a id="trace-20218"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 20218): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 20218. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20225}.
<a id="trace-20225"></a>
<a id="trace-20235"></a>
<a id="trace-20249"></a>
<a id="trace-20261"></a>
<a id="trace-20278"></a>
<a id="trace-20291"></a>
<a id="trace-20306"></a>
<a id="trace-20313"></a>
<a id="trace-20385"></a>
<a id="trace-20402"></a>
<a id="trace-20411"></a>
<a id="trace-20425"></a>
<a id="trace-20434"></a>
<a id="trace-20448"></a>
<a id="trace-20459"></a>
<a id="trace-20472"></a>
<a id="trace-20481"></a>
<a id="trace-20573"></a>
<a id="trace-20589"></a>
<a id="trace-20603"></a>
<a id="trace-20623"></a>
<a id="trace-20631"></a>
<a id="trace-20725"></a>
<a id="trace-20734"></a>
<a id="trace-20757"></a>
<a id="trace-20774"></a>
<a id="trace-20782"></a>
<a id="trace-20797"></a>
<a id="trace-20810"></a>
<a id="trace-20820"></a>
<a id="trace-20897"></a>
- 316.30s–335.30s (×31), actor 5, squad 0 (trace 20225): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.10s, trace 20218. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20235}.
<a id="trace-20906"></a>
- 336.05s–336.05s (×1), actor 1, squad 0 (trace 20906): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 20831. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20936}.
<a id="trace-20907"></a>
- 336.05s–336.05s (×1), actor 1, squad 0 (trace 20907): Reorganise: completed/failed drill. Knowledge: actor memory at 335.00s, trace 20831. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20936}.
<a id="trace-20911"></a>
- 336.05s–336.05s (×1), actor 1, squad 0 (trace 20911): MoveTactically. Knowledge: actor memory at 335.00s, trace 20831. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20936}.
<a id="trace-20912"></a>
- 336.05s–336.05s (×1), actor 1, squad 0 (trace 20912): traveling overwatch. Knowledge: actor memory at 335.00s, trace 20831. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20936}.
<a id="trace-20913"></a>
- 336.05s–336.05s (×1), actor 1, squad 0 (trace 20913): Reorganise complete. Knowledge: actor memory at 335.00s, trace 20831. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20936}.
<a id="trace-20936"></a>
<a id="trace-20954"></a>
<a id="trace-20983"></a>
<a id="trace-21009"></a>
<a id="trace-21025"></a>
<a id="trace-21122"></a>
<a id="trace-21131"></a>
<a id="trace-21147"></a>
<a id="trace-21156"></a>
<a id="trace-21182"></a>
<a id="trace-21188"></a>
<a id="trace-21203"></a>
<a id="trace-21215"></a>
<a id="trace-21236"></a>
<a id="trace-21252"></a>
<a id="trace-21340"></a>
- 336.30s–345.80s (×16), actor 5, squad 0 (trace 20936): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 20833. Next observer evidence: {'until': 336.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03148974436225228, 'next_transition': 20954}.
<a id="trace-21344"></a>
- 345.85s–345.85s (×1), actor 1, squad 0 (trace 21344): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 345.00s, trace 21263. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3569846137179127, 'next_transition': 21456}.
<a id="trace-21456"></a>
<a id="trace-21486"></a>
<a id="trace-21500"></a>
<a id="trace-21530"></a>
<a id="trace-21556"></a>
<a id="trace-21651"></a>
<a id="trace-21670"></a>
<a id="trace-21686"></a>
<a id="trace-21704"></a>
<a id="trace-21715"></a>
<a id="trace-21732"></a>
<a id="trace-21741"></a>
<a id="trace-21771"></a>
<a id="trace-21845"></a>
<a id="trace-21855"></a>
<a id="trace-21873"></a>
<a id="trace-21892"></a>
<a id="trace-21923"></a>
<a id="trace-21945"></a>
<a id="trace-21953"></a>
<a id="trace-21966"></a>
<a id="trace-21982"></a>
- 346.30s–359.80s (×22), actor 5, squad 0 (trace 21456): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 21265. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498514747322254, 'next_transition': 21486}.

## Net delivery

243 matched order/radio deliveries; 327 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.382s; maximum 5.350s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2801: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2803: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2804: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2805: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2806: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2807: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2811: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2812: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3498: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3501: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3504: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3506: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3508: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3509: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3510: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3511: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3512: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3513: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3514: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3515: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3516: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3517: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4390: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4391: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4393: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4396: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4398: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4400: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4401: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4402: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4403: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4404: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4405: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4406: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4407: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4408: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4409: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4719: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4720: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4722: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4724: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4725: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4728: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4729: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4730: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4731: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4732: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4733: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4734: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4735: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4736: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4737: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5056: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5057: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5058: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5059: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5063: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5064: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5066: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5068: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5069: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5072: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5073: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5074: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5075: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5076: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5077: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5078: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5079: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5080: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5081: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 5561: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5562: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5564: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5566: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5567: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5570: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5571: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5572: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5573: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5574: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5575: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5576: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5577: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5578: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5579: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 5869: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5870: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5872: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5874: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5875: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5878: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5879: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5880: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5881: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5882: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5883: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5884: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5885: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 5886: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 5887: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 6149: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6150: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6152: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6154: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6155: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6158: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6159: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6160: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6161: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6162: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6163: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6164: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6165: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6166: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6167: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 6397: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 6398: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 6399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 6400: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 6401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 6402: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 6403: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 6404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 6405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 6406: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 6407: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 6408: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 6409: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 6410: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 6411: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 6412: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 6413: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 6414: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 6415: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 6838: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 6839: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 6840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 6841: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 6842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 6843: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 6844: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 6845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 6846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 6847: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 6848: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 6849: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 6850: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 6851: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 6852: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 6853: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 6854: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 6855: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 6856: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 7114: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 7115: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 7116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 7117: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 7118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 7119: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 7120: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 7121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 7122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 7123: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 7124: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 7125: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 7126: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 7127: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 7128: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 7129: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 7130: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 7131: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 7132: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 7441: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 7442: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 7443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 7444: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 7445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 7446: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 7447: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 7448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 7449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 7450: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 7451: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 7452: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 7453: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 7454: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 7455: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 7456: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 7457: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 7458: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 7459: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 7683: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 7684: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 7685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 7686: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 7687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 7688: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 7689: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 7690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 7691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 7692: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 7693: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 7694: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 7695: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 7696: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 7697: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 7698: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 7699: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 7700: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 7701: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 7875: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 7876: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 7877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 7878: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 7879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 7880: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 7881: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 7882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 7883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 7884: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 7885: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 7886: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 7887: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 7888: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 7889: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 7890: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 7891: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 7892: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 7893: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 8082: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 8083: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 8084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 8085: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 8086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 8087: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 8088: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 8089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 8090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 8091: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 8092: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 8093: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 8094: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 8095: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 8096: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 8097: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 8098: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 8099: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 8100: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 8274: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 8275: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 8276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 8277: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 8278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 8279: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 8280: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 8281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 8282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 8283: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 8284: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 8285: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 8286: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 8287: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 8288: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 8289: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 8290: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 8291: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 8292: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 8471: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 8472: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 8473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 8474: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 8475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 8476: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 8477: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 8478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 8479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 8480: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 8481: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 8482: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 8483: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 8484: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 8485: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 8486: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 8487: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 8488: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 8489: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 8670: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 8671: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 8672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 8673: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 8675: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 8676: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 8678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8679: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8680: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 8681: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 8682: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8683: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8684: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8685: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8686: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 8687: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 8688: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 8839: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 8840: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 8877: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 8878: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 8879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 8880: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 8881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 8882: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 8883: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 8884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 8885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 8886: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 8887: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 8888: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 8889: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 8890: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 8891: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 8892: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 8893: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 8894: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 8895: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 9138: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 9139: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 9140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 9141: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 9142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 9143: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 9144: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 9145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 9146: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 9147: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 9148: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 9149: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 9150: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 9151: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 9152: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 9153: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 9154: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 9155: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 9156: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 9651: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 9652: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 9653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 9654: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 9656: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 9657: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 9658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 9659: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 9660: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9661: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 9662: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 9663: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 9664: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9665: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9666: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9667: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 9668: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 9669: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 10593: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 10594: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 10595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 10596: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 10597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 10598: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 10599: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 10600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 10601: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 10602: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 10603: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 10604: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 10605: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 10606: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 10607: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 10608: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 10609: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 10610: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 10611: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 10996: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 10997: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 10998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 10999: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 11000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 11001: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 11002: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 11003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 11004: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 11005: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 11006: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 11007: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 11008: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 11009: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 11010: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 11011: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 11012: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 11013: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 11014: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 11417: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 11418: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 11419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 11420: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 11421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 11422: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 11423: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 11424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 11425: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 11426: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 11427: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 11428: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 11429: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 11430: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 11431: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 11432: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 11433: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 11434: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 11435: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 11736: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 11737: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 11738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 11739: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 11740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 11741: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 11742: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 11743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 11744: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 11745: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 11746: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 11747: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 11748: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 11749: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 11750: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 11751: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 11752: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 11753: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 12004: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 12005: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 12006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 12007: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 12008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 12009: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12010: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 12011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 12012: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 12013: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 12014: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 12015: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12016: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12017: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12018: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12019: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 12020: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 12021: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 12426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 12427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 12428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 12429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 12430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 12431: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 12432: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 12433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 12434: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 12435: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 12436: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 12437: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 12438: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 12439: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 12440: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 12441: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 12442: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 12443: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 12680: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 12681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 12682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 12683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 12684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 12685: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 12686: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 12687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 12688: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 12689: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 12690: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 12691: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 12692: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 12693: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 12694: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 12695: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 12696: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 12697: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 13751: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 13752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 13753: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 13754: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 13755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 13756: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 13757: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 13758: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 13759: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 13760: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 13761: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13762: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13763: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 13764: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 13765: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 13980: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 13981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 13982: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 13983: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 13984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 13985: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 13986: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 13987: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 13988: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 13989: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 13990: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 13991: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 13992: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 13993: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 13994: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14193: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14195: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 14196: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14198: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14199: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 14200: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14201: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 14202: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14203: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14204: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14205: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 14206: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 14207: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 14403: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 14405: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 14406: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14408: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 14409: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 14410: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 14411: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 14412: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14413: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14414: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14415: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 14416: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 14417: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 14529: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 14584: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 14586: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 14587: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 14588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 14589: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 14590: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 14591: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 14592: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 14593: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 14594: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 14595: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14596: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 14597: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 14598: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 14765: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 14766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 14767: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 14768: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 14769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 14770: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 14771: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 14772: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 14773: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 14774: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 14775: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 14776: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 14777: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 14778: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 14779: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 14941: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 14942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 14943: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 14944: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 14945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 14946: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 14947: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 14948: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 14949: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 14950: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 14951: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 14952: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 14953: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 14954: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 14955: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 15119: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 15121: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 15122: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 15123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 15124: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 15125: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 15126: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 15127: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 15128: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 15129: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 15130: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15131: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 15132: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 15133: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 15286: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 15288: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 15289: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 15290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 15291: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 15292: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 15293: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 15294: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 15295: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 15296: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 15297: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15298: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 15299: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 15300: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 15445: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 15447: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 15448: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 15449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 15450: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 15451: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 15452: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 15453: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 15454: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 15455: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 15456: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15457: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 15458: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 15459: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 15618: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 15619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 15620: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 15621: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 15622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 15623: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 15624: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 15625: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 15626: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 15627: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 15628: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 15629: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 15630: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 15631: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 15632: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 15795: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 15796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 15797: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 15798: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 15799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 15800: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 15801: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 15802: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 15803: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 15804: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 15805: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 15806: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 15807: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 15808: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 15809: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 15957: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 15958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 15959: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 15960: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 15961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 15962: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 15963: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 15964: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 15965: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 15966: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 15967: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 15968: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 15969: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 15970: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 15971: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 16118: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 16119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 16120: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 16121: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 16122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 16123: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 16124: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 16125: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 16126: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 16127: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 16128: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 16129: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 16130: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 16131: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 16132: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 16292: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 16293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 16294: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 16295: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 16296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 16297: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 16298: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 16299: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 16300: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 16301: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 16302: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 16303: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 16304: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 16305: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 16306: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 16460: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 16461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 16462: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 16463: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 16464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 16465: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 16466: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 16467: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 16468: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 16469: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 16470: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 16471: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 16472: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 16473: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 16474: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 16631: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 16632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 16633: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 16634: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 16635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 16636: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 16637: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 16638: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 16639: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 16640: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 16641: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 16642: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 16643: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 16644: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 16645: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 16803: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 16804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 16805: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 16806: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 16807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 16808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 16809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 16810: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 16811: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 16812: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 16813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 16814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 16815: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 16816: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 16817: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 16905: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 16969: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 16970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 16971: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 16972: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 16973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 16974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 16975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 16976: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 16977: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 16978: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 16979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 16980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 16981: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 16982: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 16983: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 17133: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 17134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 17135: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 17136: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 17137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 17138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 17139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 17140: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 17141: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 17142: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 17143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 17144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 17145: estimate 1.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 17146: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 17147: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 17307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 17308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 17309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 17310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 17311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 17312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 17313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 17314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 17315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 17316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 17317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 17318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 17319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 17320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 17321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 17384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 17385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 17476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 17477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 17478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 17479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 17480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 17481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 17482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 17483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 17484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 17485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 17486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 17487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 17488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 17489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 17490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 17827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 17828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 17829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 17830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 17831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 17832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 17833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 17834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 17835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 17836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 17837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 17838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 17839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 17840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 17841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 18046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 18047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 18048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 18049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 18050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 18051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 18052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 18053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 18054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 18055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 18056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 18057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 18058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 18059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 18060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 18437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 18438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 18439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 18440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 18441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 18442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 18443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 18444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 18445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 18446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 18447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 18448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 18449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 18450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 18451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 18817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 18818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 18819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 18820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 18821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 18822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 18823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 18824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 18825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 18826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 18827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 18828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 18829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 18830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 18831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 19030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 19031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 19032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 19033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 19034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 19035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 19036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 19037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 19038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 19039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 19040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 19041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 19042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 19043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 19044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 19426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 19427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 19428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 19429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 19430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 19431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 19432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 19433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 19434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 19435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 19436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 19437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 19438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 19439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 19440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 19622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 19623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 19624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 19625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 19626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 19627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 19628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 19629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 19630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 19631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 19632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 19633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 19634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 19635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 19636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 19791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 19792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 19793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 19794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 19795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 19796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 19797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 19798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 19799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 19800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 19801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 19802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 19803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 19804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 19805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 19959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 19960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 19961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 19962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 19963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 19964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 19965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 19971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 19972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 19973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 20137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 20138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 20139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 20140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 20142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 20144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 20145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 20149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 20150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 20151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 20217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 20218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 20320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 20321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 20322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 20323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 20324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 20325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 20326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 20328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 20329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 20330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 20331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 20332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 20333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 20334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 20488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 20489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 20490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 20491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 20492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 20493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 20494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 20495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 20496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 20497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 20498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 20499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 20500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 20501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 20502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 20656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 20657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 20658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 20659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 20660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 20661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 20662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 20663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 20664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 20665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 20666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 20667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 20668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 20669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 20670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 20831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 20832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 20833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 20834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 20835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 20836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 20837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 20838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 20839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 20840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 20841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 20842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 20843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 20844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 20845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 21049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 21050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 21051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 21052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 21053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 21054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 21055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 21056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 21057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 21058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 21059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 21060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 21061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 21062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 21063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 21263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 21264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 21265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 21266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 21267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 21268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 21269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 21270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 21271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 21272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 21273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 21274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 21275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 21276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 21277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 21567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 21568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 21569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 21570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 21571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 21572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 21573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 21574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 21575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 21576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 21577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 21578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 21579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 21580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 21581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 21777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 21778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 21779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 21780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 21781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 21782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 21783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 21784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 21785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 21786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 21787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 21788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 21789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 21790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 21791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 21988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 21989: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 21990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 21991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 21992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 21993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 21994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 21995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 21996: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 21997: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 21998: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 21999: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 22000: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 22001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 22002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Cole killed in action
- 1: Vale killed in action
- 1: Ash killed in action
- 1: Soren incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
