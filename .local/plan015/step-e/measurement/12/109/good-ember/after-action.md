# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/12/109/good-ember/battle-109-1789673905440134929`

## Battle summary

**Ember** · 262.95 s · 289 shots.

### Turning points

- 50.0s, squad 4: contact (events line 474). First recorded contact.
- 54.2s, squad 0: withdrawal ([trace 3396](#trace-3396)). 96.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 71.9s, squad 0: help call ([trace 4300](#trace-4300)). No completion observed before termination.
- 163.2s, squad 0: withdrawal ([trace 7853](#trace-7853)). 201.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 174.7s, squad 0: help call ([trace 8723](#trace-8723)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 46 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 243 shots, 0/4 lost.

### Decisions and attribution

At 246.1s, squad 0 chose renewed the existing objective ([trace 11390](#trace-11390)), followed by 3 shots and 1 own casualties; estimate 5.4 against 0 distinct squad-reported contacts; At 54.2s, squad 0 chose broke contact ([trace 3396](#trace-3396)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 705](#trace-705)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547630541564429, 'next_transition': 719}.
- 38.9s: renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1842](#trace-1842)). Following evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1853}.

### Communication

121 matched deliveries (mean 0.23s, max 5.10s); 118 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 50.00s, squad 4, contact, evidence events line 474: First recorded contact; .
- 54.20s, squad 0, withdrawal, evidence 3396: BreakContact: believed ratio at least two without superiority; 96.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 71.90s, squad 0, help call, evidence 4300: NeedSupport; No completion observed before termination.
- 163.15s, squad 0, withdrawal, evidence 7853: BreakContact: believed ratio at least two without superiority; 201.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 174.65s, squad 0, help call, evidence 8723: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.526505421339973, 'next_transition': 361}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.526505421339973, 'next_transition': 361}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.526505421339973, 'next_transition': 361}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
<a id="trace-276"></a>
<a id="trace-287"></a>
<a id="trace-363"></a>
<a id="trace-372"></a>
<a id="trace-393"></a>
<a id="trace-403"></a>
<a id="trace-418"></a>
<a id="trace-429"></a>
<a id="trace-450"></a>
<a id="trace-474"></a>
<a id="trace-486"></a>
<a id="trace-493"></a>
<a id="trace-576"></a>
<a id="trace-584"></a>
<a id="trace-703"></a>
<a id="trace-721"></a>
<a id="trace-740"></a>
<a id="trace-758"></a>
<a id="trace-774"></a>
<a id="trace-786"></a>
<a id="trace-810"></a>
<a id="trace-823"></a>
<a id="trace-907"></a>
<a id="trace-917"></a>
<a id="trace-939"></a>
<a id="trace-1039"></a>
<a id="trace-1058"></a>
<a id="trace-1066"></a>
<a id="trace-1092"></a>
<a id="trace-1105"></a>
<a id="trace-1119"></a>
<a id="trace-1132"></a>
<a id="trace-1214"></a>
<a id="trace-1235"></a>
<a id="trace-1248"></a>
<a id="trace-1266"></a>
<a id="trace-1290"></a>
<a id="trace-1299"></a>
<a id="trace-1312"></a>
<a id="trace-1323"></a>
<a id="trace-1341"></a>
<a id="trace-1360"></a>
<a id="trace-1433"></a>
<a id="trace-1442"></a>
<a id="trace-1465"></a>
<a id="trace-1472"></a>
<a id="trace-1484"></a>
<a id="trace-1495"></a>
<a id="trace-1509"></a>
<a id="trace-1517"></a>
<a id="trace-1535"></a>
<a id="trace-1543"></a>
<a id="trace-1618"></a>
<a id="trace-1625"></a>
<a id="trace-1636"></a>
<a id="trace-1642"></a>
<a id="trace-1652"></a>
<a id="trace-1660"></a>
<a id="trace-1672"></a>
<a id="trace-1680"></a>
<a id="trace-1693"></a>
<a id="trace-1699"></a>
<a id="trace-1775"></a>
<a id="trace-1782"></a>
<a id="trace-1796"></a>
<a id="trace-1803"></a>
<a id="trace-1814"></a>
<a id="trace-1820"></a>
<a id="trace-1833"></a>
<a id="trace-1840"></a>
<a id="trace-1855"></a>
<a id="trace-1862"></a>
<a id="trace-1937"></a>
<a id="trace-1943"></a>
<a id="trace-1954"></a>
<a id="trace-1964"></a>
<a id="trace-1975"></a>
<a id="trace-1986"></a>
<a id="trace-2000"></a>
<a id="trace-2006"></a>
<a id="trace-2165"></a>
<a id="trace-2173"></a>
<a id="trace-2249"></a>
<a id="trace-2258"></a>
<a id="trace-2273"></a>
<a id="trace-2281"></a>
<a id="trace-2297"></a>
<a id="trace-2307"></a>
<a id="trace-2330"></a>
<a id="trace-2346"></a>
<a id="trace-2363"></a>
<a id="trace-2373"></a>
<a id="trace-2848"></a>
<a id="trace-3248"></a>
<a id="trace-3273"></a>
<a id="trace-3292"></a>
<a id="trace-3325"></a>
<a id="trace-3346"></a>
<a id="trace-3375"></a>
<a id="trace-3387"></a>
<a id="trace-3557"></a>
<a id="trace-3567"></a>
<a id="trace-3641"></a>
<a id="trace-3654"></a>
<a id="trace-3668"></a>
<a id="trace-3681"></a>
<a id="trace-3696"></a>
<a id="trace-3703"></a>
<a id="trace-3722"></a>
<a id="trace-3727"></a>
<a id="trace-3740"></a>
<a id="trace-3747"></a>
<a id="trace-3822"></a>
<a id="trace-3836"></a>
<a id="trace-3846"></a>
<a id="trace-3851"></a>
<a id="trace-3866"></a>
<a id="trace-3873"></a>
<a id="trace-3888"></a>
<a id="trace-3894"></a>
<a id="trace-3907"></a>
<a id="trace-3917"></a>
<a id="trace-3992"></a>
<a id="trace-4008"></a>
<a id="trace-4021"></a>
<a id="trace-4035"></a>
<a id="trace-4062"></a>
<a id="trace-4082"></a>
<a id="trace-4091"></a>
<a id="trace-4110"></a>
<a id="trace-4121"></a>
<a id="trace-4196"></a>
<a id="trace-4270"></a>
<a id="trace-4278"></a>
<a id="trace-4290"></a>
<a id="trace-4326"></a>
<a id="trace-4332"></a>
<a id="trace-4350"></a>
<a id="trace-4376"></a>
<a id="trace-4386"></a>
<a id="trace-4402"></a>
<a id="trace-4473"></a>
<a id="trace-4481"></a>
<a id="trace-4492"></a>
<a id="trace-4500"></a>
<a id="trace-4513"></a>
<a id="trace-4524"></a>
<a id="trace-4534"></a>
<a id="trace-4543"></a>
<a id="trace-4557"></a>
<a id="trace-4566"></a>
<a id="trace-4641"></a>
<a id="trace-4650"></a>
<a id="trace-4665"></a>
<a id="trace-4672"></a>
<a id="trace-4688"></a>
<a id="trace-4702"></a>
<a id="trace-4709"></a>
<a id="trace-4717"></a>
<a id="trace-4731"></a>
<a id="trace-4738"></a>
<a id="trace-4816"></a>
<a id="trace-4823"></a>
<a id="trace-4834"></a>
<a id="trace-4852"></a>
<a id="trace-4862"></a>
<a id="trace-4870"></a>
<a id="trace-4959"></a>
<a id="trace-4965"></a>
<a id="trace-4982"></a>
<a id="trace-4992"></a>
<a id="trace-5069"></a>
<a id="trace-5085"></a>
<a id="trace-5098"></a>
<a id="trace-5103"></a>
<a id="trace-5115"></a>
<a id="trace-5120"></a>
<a id="trace-5129"></a>
<a id="trace-5137"></a>
<a id="trace-5151"></a>
<a id="trace-5164"></a>
<a id="trace-5239"></a>
<a id="trace-5246"></a>
<a id="trace-5261"></a>
<a id="trace-5266"></a>
<a id="trace-5279"></a>
<a id="trace-5286"></a>
<a id="trace-5295"></a>
<a id="trace-5307"></a>
<a id="trace-5321"></a>
<a id="trace-5327"></a>
<a id="trace-5404"></a>
<a id="trace-5407"></a>
<a id="trace-5417"></a>
<a id="trace-5420"></a>
<a id="trace-5427"></a>
<a id="trace-5431"></a>
<a id="trace-5435"></a>
<a id="trace-5437"></a>
<a id="trace-5444"></a>
<a id="trace-5448"></a>
<a id="trace-5520"></a>
<a id="trace-5524"></a>
<a id="trace-5532"></a>
<a id="trace-5537"></a>
<a id="trace-5545"></a>
<a id="trace-5552"></a>
<a id="trace-5562"></a>
<a id="trace-5569"></a>
<a id="trace-5577"></a>
<a id="trace-5583"></a>
<a id="trace-5657"></a>
<a id="trace-5661"></a>
<a id="trace-5672"></a>
<a id="trace-5677"></a>
<a id="trace-5687"></a>
<a id="trace-5691"></a>
<a id="trace-5699"></a>
<a id="trace-5735"></a>
<a id="trace-5745"></a>
<a id="trace-5756"></a>
<a id="trace-5831"></a>
<a id="trace-5840"></a>
<a id="trace-5857"></a>
<a id="trace-5874"></a>
<a id="trace-5889"></a>
<a id="trace-5896"></a>
<a id="trace-5907"></a>
<a id="trace-5917"></a>
<a id="trace-5925"></a>
<a id="trace-5936"></a>
<a id="trace-6009"></a>
<a id="trace-6019"></a>
<a id="trace-6037"></a>
<a id="trace-6050"></a>
<a id="trace-6061"></a>
<a id="trace-6078"></a>
<a id="trace-6087"></a>
<a id="trace-6099"></a>
<a id="trace-6107"></a>
<a id="trace-6183"></a>
<a id="trace-6191"></a>
<a id="trace-6203"></a>
<a id="trace-6267"></a>
<a id="trace-6276"></a>
<a id="trace-6282"></a>
<a id="trace-6298"></a>
<a id="trace-6306"></a>
<a id="trace-6321"></a>
<a id="trace-6334"></a>
<a id="trace-6414"></a>
<a id="trace-6422"></a>
<a id="trace-6432"></a>
<a id="trace-6441"></a>
<a id="trace-6451"></a>
<a id="trace-6463"></a>
<a id="trace-6472"></a>
<a id="trace-6478"></a>
<a id="trace-6493"></a>
<a id="trace-6501"></a>
<a id="trace-6578"></a>
<a id="trace-6585"></a>
<a id="trace-6602"></a>
<a id="trace-6611"></a>
<a id="trace-6621"></a>
<a id="trace-6632"></a>
<a id="trace-6645"></a>
<a id="trace-6656"></a>
<a id="trace-6665"></a>
<a id="trace-6671"></a>
<a id="trace-6749"></a>
<a id="trace-6759"></a>
<a id="trace-6772"></a>
<a id="trace-6778"></a>
<a id="trace-6878"></a>
<a id="trace-6883"></a>
<a id="trace-6895"></a>
<a id="trace-6906"></a>
<a id="trace-6918"></a>
<a id="trace-6932"></a>
<a id="trace-7011"></a>
<a id="trace-7017"></a>
<a id="trace-7033"></a>
<a id="trace-7040"></a>
<a id="trace-7052"></a>
<a id="trace-7057"></a>
<a id="trace-7071"></a>
<a id="trace-7080"></a>
<a id="trace-7092"></a>
<a id="trace-7105"></a>
<a id="trace-7182"></a>
<a id="trace-7193"></a>
<a id="trace-7261"></a>
<a id="trace-7269"></a>
<a id="trace-7284"></a>
<a id="trace-7292"></a>
<a id="trace-7303"></a>
<a id="trace-7312"></a>
<a id="trace-7323"></a>
<a id="trace-7331"></a>
<a id="trace-7404"></a>
<a id="trace-7409"></a>
<a id="trace-7417"></a>
<a id="trace-7425"></a>
<a id="trace-7435"></a>
<a id="trace-7442"></a>
<a id="trace-7455"></a>
<a id="trace-7465"></a>
<a id="trace-7475"></a>
<a id="trace-7694"></a>
<a id="trace-7773"></a>
<a id="trace-7787"></a>
<a id="trace-7796"></a>
<a id="trace-7828"></a>
<a id="trace-7837"></a>
<a id="trace-7846"></a>
<a id="trace-8023"></a>
<a id="trace-8034"></a>
<a id="trace-8056"></a>
<a id="trace-8063"></a>
<a id="trace-8141"></a>
<a id="trace-8144"></a>
<a id="trace-8156"></a>
<a id="trace-8167"></a>
<a id="trace-8180"></a>
<a id="trace-8188"></a>
<a id="trace-8215"></a>
<a id="trace-8242"></a>
<a id="trace-8258"></a>
<a id="trace-8286"></a>
<a id="trace-8399"></a>
<a id="trace-8429"></a>
<a id="trace-8457"></a>
<a id="trace-8500"></a>
<a id="trace-8544"></a>
<a id="trace-8582"></a>
<a id="trace-8629"></a>
<a id="trace-8672"></a>
<a id="trace-8703"></a>
<a id="trace-8743"></a>
<a id="trace-8846"></a>
<a id="trace-8878"></a>
<a id="trace-8910"></a>
<a id="trace-8930"></a>
<a id="trace-8961"></a>
<a id="trace-8974"></a>
<a id="trace-9071"></a>
<a id="trace-9077"></a>
<a id="trace-9086"></a>
<a id="trace-9096"></a>
<a id="trace-9165"></a>
<a id="trace-9167"></a>
<a id="trace-9179"></a>
<a id="trace-9185"></a>
<a id="trace-9194"></a>
<a id="trace-9197"></a>
<a id="trace-9203"></a>
<a id="trace-9209"></a>
<a id="trace-9215"></a>
<a id="trace-9220"></a>
<a id="trace-9292"></a>
<a id="trace-9299"></a>
<a id="trace-9303"></a>
<a id="trace-9311"></a>
<a id="trace-9316"></a>
<a id="trace-9326"></a>
<a id="trace-9331"></a>
<a id="trace-9344"></a>
<a id="trace-9348"></a>
<a id="trace-9418"></a>
<a id="trace-9428"></a>
<a id="trace-9434"></a>
<a id="trace-9437"></a>
<a id="trace-9448"></a>
<a id="trace-9451"></a>
<a id="trace-9461"></a>
<a id="trace-9466"></a>
<a id="trace-9474"></a>
<a id="trace-9487"></a>
<a id="trace-9558"></a>
<a id="trace-9562"></a>
<a id="trace-9571"></a>
<a id="trace-9575"></a>
<a id="trace-9588"></a>
<a id="trace-9592"></a>
<a id="trace-9599"></a>
<a id="trace-9608"></a>
<a id="trace-9692"></a>
<a id="trace-9699"></a>
<a id="trace-9772"></a>
<a id="trace-9778"></a>
<a id="trace-9787"></a>
<a id="trace-9850"></a>
<a id="trace-9862"></a>
<a id="trace-9876"></a>
<a id="trace-9897"></a>
<a id="trace-9900"></a>
<a id="trace-9923"></a>
<a id="trace-9938"></a>
<a id="trace-10011"></a>
<a id="trace-10015"></a>
<a id="trace-10021"></a>
<a id="trace-10032"></a>
<a id="trace-10038"></a>
<a id="trace-10043"></a>
<a id="trace-10054"></a>
<a id="trace-10060"></a>
<a id="trace-10067"></a>
<a id="trace-10074"></a>
<a id="trace-10146"></a>
<a id="trace-10150"></a>
<a id="trace-10160"></a>
<a id="trace-10168"></a>
<a id="trace-10178"></a>
<a id="trace-10185"></a>
<a id="trace-10196"></a>
<a id="trace-10204"></a>
<a id="trace-10210"></a>
<a id="trace-10261"></a>
<a id="trace-10330"></a>
<a id="trace-10334"></a>
<a id="trace-10347"></a>
<a id="trace-10351"></a>
<a id="trace-10361"></a>
<a id="trace-10370"></a>
<a id="trace-10376"></a>
<a id="trace-10389"></a>
<a id="trace-10398"></a>
<a id="trace-10402"></a>
<a id="trace-10476"></a>
<a id="trace-10480"></a>
<a id="trace-10491"></a>
<a id="trace-10600"></a>
<a id="trace-10607"></a>
<a id="trace-10617"></a>
<a id="trace-10627"></a>
<a id="trace-10629"></a>
<a id="trace-10639"></a>
<a id="trace-10647"></a>
<a id="trace-10723"></a>
<a id="trace-10728"></a>
<a id="trace-10734"></a>
<a id="trace-10786"></a>
<a id="trace-10793"></a>
<a id="trace-10800"></a>
<a id="trace-10808"></a>
<a id="trace-10810"></a>
<a id="trace-10823"></a>
<a id="trace-10829"></a>
<a id="trace-10897"></a>
<a id="trace-10899"></a>
<a id="trace-10912"></a>
<a id="trace-10918"></a>
<a id="trace-10924"></a>
<a id="trace-10927"></a>
<a id="trace-10936"></a>
<a id="trace-10942"></a>
<a id="trace-10949"></a>
<a id="trace-10953"></a>
<a id="trace-11025"></a>
<a id="trace-11029"></a>
<a id="trace-11037"></a>
<a id="trace-11043"></a>
<a id="trace-11056"></a>
<a id="trace-11059"></a>
<a id="trace-11066"></a>
<a id="trace-11072"></a>
<a id="trace-11079"></a>
<a id="trace-11086"></a>
<a id="trace-11158"></a>
<a id="trace-11161"></a>
<a id="trace-11174"></a>
<a id="trace-11198"></a>
<a id="trace-11226"></a>
<a id="trace-11248"></a>
<a id="trace-11276"></a>
<a id="trace-11289"></a>
<a id="trace-11306"></a>
<a id="trace-11317"></a>
<a id="trace-11387"></a>
<a id="trace-11389"></a>
<a id="trace-11398"></a>
<a id="trace-11401"></a>
<a id="trace-11405"></a>
<a id="trace-11407"></a>
<a id="trace-11411"></a>
<a id="trace-11413"></a>
<a id="trace-11417"></a>
<a id="trace-11420"></a>
<a id="trace-11485"></a>
<a id="trace-11487"></a>
<a id="trace-11492"></a>
<a id="trace-11495"></a>
<a id="trace-11499"></a>
<a id="trace-11503"></a>
<a id="trace-11509"></a>
<a id="trace-11511"></a>
<a id="trace-11516"></a>
<a id="trace-11520"></a>
<a id="trace-11585"></a>
<a id="trace-11587"></a>
<a id="trace-11590"></a>
<a id="trace-11594"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11603"></a>
<a id="trace-11606"></a>
<a id="trace-11613"></a>
<a id="trace-11616"></a>
<a id="trace-11682"></a>
<a id="trace-11684"></a>
<a id="trace-11687"></a>
<a id="trace-11691"></a>
<a id="trace-11694"></a>
<a id="trace-11696"></a>
- 1.60s–262.80s (×520), actor 37, squad 4 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6015953836021876, 'next_transition': 232}.
<a id="trace-361"></a>
<a id="trace-370"></a>
<a id="trace-391"></a>
<a id="trace-401"></a>
<a id="trace-416"></a>
<a id="trace-427"></a>
<a id="trace-448"></a>
<a id="trace-472"></a>
<a id="trace-574"></a>
<a id="trace-582"></a>
- 5.20s–10.70s (×10), actor 5, squad 0 (trace 361): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 293. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599690354806408, 'next_transition': 370}.
<a id="trace-589"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 589): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 496. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724963650723586, 'next_transition': 701}.
<a id="trace-701"></a>
- 11.20s–11.20s (×1), actor 5, squad 0 (trace 701): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 498. Next observer evidence: None.
<a id="trace-111"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 111): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547630541564429, 'next_transition': 719}.
<a id="trace-705"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 705): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 705. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547630541564429, 'next_transition': 719}.
<a id="trace-706"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 706): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 706. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547630541564429, 'next_transition': 719}.
<a id="trace-719"></a>
<a id="trace-738"></a>
<a id="trace-756"></a>
<a id="trace-772"></a>
<a id="trace-808"></a>
<a id="trace-905"></a>
<a id="trace-915"></a>
<a id="trace-937"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 719): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 706. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8401273567891017, 'next_transition': 738}.
<a id="trace-941"></a>
- 16.50s–16.50s (×1), actor 0, squad 0 (trace 941): received platoon directive. Knowledge: actor memory at 15.00s, trace 829. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.111384311486866, 'next_transition': 1056}.
<a id="trace-1056"></a>
<a id="trace-1103"></a>
<a id="trace-1117"></a>
<a id="trace-1212"></a>
<a id="trace-1233"></a>
<a id="trace-1246"></a>
<a id="trace-1264"></a>
<a id="trace-1288"></a>
<a id="trace-1321"></a>
<a id="trace-1339"></a>
<a id="trace-1358"></a>
- 17.25s–24.75s (×11), actor 5, squad 0 (trace 1056): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 831. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.257771962248912, 'next_transition': 1103}.
<a id="trace-1435"></a>
- 25.35s–25.35s (×1), actor 0, squad 0 (trace 1435): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 1362. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299846858514833, 'next_transition': 1440}.
<a id="trace-1440"></a>
<a id="trace-1463"></a>
<a id="trace-1482"></a>
<a id="trace-1493"></a>
<a id="trace-1507"></a>
<a id="trace-1515"></a>
<a id="trace-1533"></a>
<a id="trace-1541"></a>
<a id="trace-1616"></a>
<a id="trace-1623"></a>
<a id="trace-1634"></a>
<a id="trace-1640"></a>
<a id="trace-1658"></a>
<a id="trace-1678"></a>
<a id="trace-1691"></a>
<a id="trace-1780"></a>
<a id="trace-1794"></a>
<a id="trace-1812"></a>
<a id="trace-1831"></a>
<a id="trace-1838"></a>
- 25.75s–38.75s (×20), actor 5, squad 0 (trace 1440): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1364. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450071721188965, 'next_transition': 1463}.
<a id="trace-370"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 370): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1842"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 1842): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 1842. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1853}.
<a id="trace-1843"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 1843): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 1843. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1853}.
<a id="trace-1853"></a>
<a id="trace-1860"></a>
<a id="trace-1941"></a>
<a id="trace-1962"></a>
<a id="trace-1973"></a>
<a id="trace-1984"></a>
<a id="trace-1998"></a>
<a id="trace-2004"></a>
- 39.25s–43.75s (×8), actor 5, squad 0 (trace 1853): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 1843. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1860}.
<a id="trace-2011"></a>
- 44.10s–44.10s (×1), actor 0, squad 0 (trace 2011): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 1865. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2163}.
<a id="trace-2014"></a>
- 44.10s–44.10s (×1), actor 0, squad 0 (trace 2014): MoveTactically. Knowledge: actor memory at 40.00s, trace 1865. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2163}.
<a id="trace-2015"></a>
- 44.10s–44.10s (×1), actor 0, squad 0 (trace 2015): traveling overwatch. Knowledge: actor memory at 40.00s, trace 1865. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2163}.
<a id="trace-2016"></a>
- 44.10s–44.10s (×1), actor 0, squad 0 (trace 2016): Reorganise complete. Knowledge: actor memory at 40.00s, trace 1865. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2163}.
<a id="trace-2163"></a>
<a id="trace-2171"></a>
<a id="trace-2271"></a>
<a id="trace-2279"></a>
<a id="trace-2305"></a>
<a id="trace-2328"></a>
<a id="trace-2344"></a>
- 44.25s–48.75s (×7), actor 5, squad 0 (trace 2163): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 1867. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2171}.
<a id="trace-2393"></a>
- 50.05s–50.05s (×1), actor 0, squad 0 (trace 2393): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 2378. Next observer evidence: None.
<a id="trace-2394"></a>
- 50.05s–50.05s (×1), actor 0, squad 0 (trace 2394): bounding overwatch. Knowledge: actor memory at 50.00s, trace 2378. Next observer evidence: None.
<a id="trace-2395"></a>
<a id="trace-2648"></a>
- 50.05s–50.15s (×2), actor 0, squad 0 (trace 2395): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 2378. Next observer evidence: None.
<a id="trace-2846"></a>
- 50.25s–50.25s (×1), actor 5, squad 0 (trace 2846): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 2380. Next observer evidence: None.
<a id="trace-2851"></a>
<a id="trace-3050"></a>
- 50.35s–50.70s (×2), actor 0, squad 0 (trace 2851): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 2378. Next observer evidence: {'until': 50.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450099594940988, 'next_transition': 3050}.
<a id="trace-3290"></a>
<a id="trace-3344"></a>
<a id="trace-3373"></a>
- 51.75s–53.25s (×3), actor 5, squad 0 (trace 3290): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 2380. Next observer evidence: {'until': 52.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7875095336010224, 'next_transition': 3344}.
<a id="trace-3396"></a>
- 54.20s–54.20s (×1), actor 0, squad 0 (trace 3396): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 2378. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4526981958958423, 'next_transition': 3639}.
<a id="trace-3397"></a>
- 54.20s–54.20s (×1), actor 0, squad 0 (trace 3397): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 2378. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4526981958958423, 'next_transition': 3639}.
<a id="trace-3639"></a>
<a id="trace-3652"></a>
<a id="trace-3666"></a>
<a id="trace-3694"></a>
<a id="trace-3720"></a>
<a id="trace-3725"></a>
<a id="trace-3738"></a>
<a id="trace-3745"></a>
<a id="trace-3834"></a>
<a id="trace-3844"></a>
<a id="trace-3864"></a>
<a id="trace-3892"></a>
<a id="trace-3905"></a>
<a id="trace-3915"></a>
<a id="trace-4006"></a>
<a id="trace-4019"></a>
<a id="trace-4047"></a>
<a id="trace-4060"></a>
<a id="trace-4080"></a>
<a id="trace-4108"></a>
<a id="trace-4119"></a>
<a id="trace-4194"></a>
- 55.25s–70.25s (×22), actor 5, squad 0 (trace 3639): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3573. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46117194224737135, 'next_transition': 3652}.
<a id="trace-4210"></a>
- 70.55s–70.55s (×1), actor 0, squad 0 (trace 4210): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 4122. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574976289504072, 'next_transition': 4268}.
<a id="trace-4211"></a>
- 70.55s–70.55s (×1), actor 0, squad 0 (trace 4211): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 4122. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574976289504072, 'next_transition': 4268}.
<a id="trace-4268"></a>
<a id="trace-4276"></a>
<a id="trace-4288"></a>
- 70.75s–71.75s (×3), actor 5, squad 0 (trace 4268): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4124. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3597925308214812, 'next_transition': 4276}.
<a id="trace-4300"></a>
- 71.90s–71.90s (×1), actor 0, squad 0 (trace 4300): NeedSupport. Knowledge: actor memory at 70.00s, trace 4122. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05937670523867098, 'next_transition': 4324}.
<a id="trace-4324"></a>
<a id="trace-4374"></a>
<a id="trace-4384"></a>
<a id="trace-4400"></a>
<a id="trace-4471"></a>
<a id="trace-4479"></a>
<a id="trace-4490"></a>
<a id="trace-4498"></a>
<a id="trace-4511"></a>
<a id="trace-4522"></a>
<a id="trace-4541"></a>
<a id="trace-4555"></a>
<a id="trace-4564"></a>
<a id="trace-4639"></a>
<a id="trace-4648"></a>
<a id="trace-4663"></a>
<a id="trace-4670"></a>
<a id="trace-4686"></a>
<a id="trace-4700"></a>
<a id="trace-4707"></a>
<a id="trace-4715"></a>
<a id="trace-4729"></a>
<a id="trace-4814"></a>
<a id="trace-4832"></a>
<a id="trace-4850"></a>
<a id="trace-4860"></a>
<a id="trace-4868"></a>
- 72.25s–87.75s (×27), actor 5, squad 0 (trace 4324): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4124. Next observer evidence: {'until': 73.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7912137043601737, 'next_transition': 4374}.
<a id="trace-4873"></a>
- 87.95s–87.95s (×1), actor 0, squad 0 (trace 4873): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 4747. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15048499999999976, 'next_transition': 4957}.
<a id="trace-4895"></a>
- 87.95s–87.95s (×1), actor 0, squad 0 (trace 4895): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 4747. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15048499999999976, 'next_transition': 4957}.
<a id="trace-4957"></a>
<a id="trace-4980"></a>
<a id="trace-4990"></a>
<a id="trace-5083"></a>
<a id="trace-5101"></a>
<a id="trace-5113"></a>
<a id="trace-5149"></a>
<a id="trace-5236"></a>
- 88.25s–95.25s (×8), actor 5, squad 0 (trace 4957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4749. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5476784031713666, 'next_transition': 4980}.
<a id="trace-5251"></a>
- 96.00s–96.00s (×1), actor 0, squad 0 (trace 5251): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 5169. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100094944943612, 'next_transition': 5258}.
<a id="trace-5258"></a>
<a id="trace-5276"></a>
<a id="trace-5292"></a>
<a id="trace-5401"></a>
<a id="trace-5441"></a>
<a id="trace-5517"></a>
- 96.25s–105.25s (×6), actor 5, squad 0 (trace 5258): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 5171. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.574983120537697, 'next_transition': 5276}.
<a id="trace-717"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (events line 717): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5559}.
<a id="trace-5553"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 5553): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.925144 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 5553. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5559}.
<a id="trace-5554"></a>
- 107.95s–107.95s (×1), actor 5, squad 0 (trace 5554): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.925144 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 5554. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5559}.
<a id="trace-5559"></a>
<a id="trace-5574"></a>
<a id="trace-5654"></a>
<a id="trace-5669"></a>
<a id="trace-5684"></a>
<a id="trace-5696"></a>
- 108.25s–113.25s (×6), actor 5, squad 0 (trace 5559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.95s, trace 5554. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5574}.
<a id="trace-5701"></a>
- 113.40s–113.40s (×1), actor 0, squad 0 (trace 5701): MoveTactically. Knowledge: actor memory at 110.00s, trace 5587. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5742}.
<a id="trace-5702"></a>
- 113.40s–113.40s (×1), actor 0, squad 0 (trace 5702): traveling overwatch. Knowledge: actor memory at 110.00s, trace 5587. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5742}.
<a id="trace-5703"></a>
- 113.40s–113.40s (×1), actor 0, squad 0 (trace 5703): received platoon directive. Knowledge: actor memory at 110.00s, trace 5587. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5742}.
<a id="trace-5742"></a>
<a id="trace-5854"></a>
<a id="trace-5886"></a>
<a id="trace-6027"></a>
<a id="trace-6047"></a>
<a id="trace-6075"></a>
<a id="trace-6096"></a>
<a id="trace-6200"></a>
- 114.25s–126.25s (×8), actor 5, squad 0 (trace 5742): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 5589. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5119955856784477, 'next_transition': 5854}.
<a id="trace-6208"></a>
- 126.40s–126.40s (×1), actor 0, squad 0 (trace 6208): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 6115. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6273}.
<a id="trace-6273"></a>
<a id="trace-6295"></a>
<a id="trace-6318"></a>
<a id="trace-6429"></a>
<a id="trace-6448"></a>
<a id="trace-6490"></a>
<a id="trace-6575"></a>
<a id="trace-6599"></a>
<a id="trace-6618"></a>
<a id="trace-6746"></a>
<a id="trace-6769"></a>
- 127.25s–141.30s (×11), actor 5, squad 0 (trace 6273): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6117. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36751300052590713, 'next_transition': 6295}.
<a id="trace-6781"></a>
- 141.95s–141.95s (×1), actor 0, squad 0 (trace 6781): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 140.00s, trace 6676. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999503833048135, 'next_transition': 6875}.
<a id="trace-6875"></a>
<a id="trace-6915"></a>
<a id="trace-7008"></a>
<a id="trace-7030"></a>
<a id="trace-7068"></a>
<a id="trace-7089"></a>
- 142.30s–149.30s (×6), actor 5, squad 0 (trace 6875): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 6678. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4174906608490898, 'next_transition': 6915}.
<a id="trace-7197"></a>
- 150.95s–150.95s (×1), actor 0, squad 0 (trace 7197): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 7107. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7258}.
<a id="trace-7258"></a>
<a id="trace-7281"></a>
<a id="trace-7320"></a>
<a id="trace-7401"></a>
<a id="trace-7432"></a>
<a id="trace-7452"></a>
<a id="trace-7472"></a>
- 151.30s–159.30s (×7), actor 5, squad 0 (trace 7258): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 7109. Next observer evidence: {'until': 152.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3402011753074283, 'next_transition': 7281}.
<a id="trace-7482"></a>
- 159.65s–159.65s (×1), actor 0, squad 0 (trace 7482): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 7334. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.350280342526552, 'next_transition': 7770}.
<a id="trace-7483"></a>
- 159.65s–159.65s (×1), actor 0, squad 0 (trace 7483): bounding overwatch. Knowledge: actor memory at 155.00s, trace 7334. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.350280342526552, 'next_transition': 7770}.
<a id="trace-7484"></a>
- 159.65s–159.65s (×1), actor 0, squad 0 (trace 7484): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 155.00s, trace 7334. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.350280342526552, 'next_transition': 7770}.
<a id="trace-7770"></a>
<a id="trace-7793"></a>
<a id="trace-7834"></a>
- 160.30s–162.30s (×3), actor 5, squad 0 (trace 7770): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 7699. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.586767639939949, 'next_transition': 7793}.
<a id="trace-7853"></a>
- 163.15s–163.15s (×1), actor 0, squad 0 (trace 7853): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 160.00s, trace 7697. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38349695120240906, 'next_transition': 8020}.
<a id="trace-7854"></a>
- 163.15s–163.15s (×1), actor 0, squad 0 (trace 7854): rearward bound: one stationary suppressing element. Knowledge: actor memory at 160.00s, trace 7697. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38349695120240906, 'next_transition': 8020}.
<a id="trace-8020"></a>
<a id="trace-8053"></a>
<a id="trace-8138"></a>
<a id="trace-8153"></a>
<a id="trace-8177"></a>
<a id="trace-8212"></a>
<a id="trace-8255"></a>
<a id="trace-8396"></a>
<a id="trace-8454"></a>
<a id="trace-8541"></a>
<a id="trace-8626"></a>
- 163.30s–173.30s (×11), actor 5, squad 0 (trace 8020): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 7699. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9600246850861165, 'next_transition': 8053}.
<a id="trace-8723"></a>
- 174.65s–174.65s (×1), actor 0, squad 0 (trace 8723): NeedSupport. Knowledge: actor memory at 170.00s, trace 8301. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.254570310217476, 'next_transition': 8843}.
<a id="trace-8843"></a>
<a id="trace-8907"></a>
- 175.30s–176.30s (×2), actor 5, squad 0 (trace 8843): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 8760. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.490445905051106, 'next_transition': 8907}.
<a id="trace-1357"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (events line 1357): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000013091636127, 'next_transition': 8958}.
<a id="trace-8942"></a>
- 177.05s–177.05s (×1), actor 5, squad 0 (trace 8942): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.05s, trace 8942. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000013091636127, 'next_transition': 8958}.
<a id="trace-8958"></a>
- 177.30s–177.30s (×1), actor 5, squad 0 (trace 8958): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.05s, trace 8942. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400006488992203, 'next_transition': 8983}.
<a id="trace-8983"></a>
- 178.10s–178.10s (×1), actor 0, squad 0 (trace 8983): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 8758. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999824946148693, 'next_transition': 9068}.
<a id="trace-9005"></a>
- 178.10s–178.10s (×1), actor 0, squad 0 (trace 9005): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 8758. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999824946148693, 'next_transition': 9068}.
<a id="trace-9068"></a>
<a id="trace-9176"></a>
<a id="trace-9191"></a>
- 178.30s–182.30s (×3), actor 5, squad 0 (trace 9068): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.05s, trace 8942. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.063121220659665, 'next_transition': 9176}.
<a id="trace-9198"></a>
- 183.00s–183.00s (×1), actor 0, squad 0 (trace 9198): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 9099. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9200}.
<a id="trace-9200"></a>
<a id="trace-9212"></a>
<a id="trace-9286"></a>
<a id="trace-9296"></a>
<a id="trace-9323"></a>
<a id="trace-9415"></a>
<a id="trace-9445"></a>
<a id="trace-9471"></a>
<a id="trace-9555"></a>
<a id="trace-9568"></a>
<a id="trace-9585"></a>
- 183.30s–197.30s (×11), actor 5, squad 0 (trace 9200): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9101. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42174303899939436, 'next_transition': 9212}.
<a id="trace-9611"></a>
- 198.95s–198.95s (×1), actor 0, squad 0 (trace 9611): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 9488. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9689}.
<a id="trace-9633"></a>
- 198.95s–198.95s (×1), actor 0, squad 0 (trace 9633): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 9488. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9689}.
<a id="trace-9689"></a>
<a id="trace-9769"></a>
<a id="trace-9784"></a>
- 199.30s–201.30s (×3), actor 5, squad 0 (trace 9689): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 9490. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08405666666666652, 'next_transition': 9769}.
<a id="trace-9796"></a>
- 201.60s–201.60s (×1), actor 0, squad 0 (trace 9796): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 200.00s, trace 9702. Next observer evidence: None.
<a id="trace-9800"></a>
- 201.65s–201.65s (×1), actor 0, squad 0 (trace 9800): MoveTactically. Knowledge: actor memory at 200.00s, trace 9702. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7820436142122473, 'next_transition': 9894}.
<a id="trace-9801"></a>
- 201.65s–201.65s (×1), actor 0, squad 0 (trace 9801): received platoon directive. Knowledge: actor memory at 200.00s, trace 9702. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7820436142122473, 'next_transition': 9894}.
<a id="trace-9894"></a>
<a id="trace-9920"></a>
<a id="trace-10008"></a>
<a id="trace-10018"></a>
<a id="trace-10051"></a>
<a id="trace-10064"></a>
<a id="trace-10157"></a>
<a id="trace-10175"></a>
<a id="trace-10193"></a>
<a id="trace-10207"></a>
- 203.30s–214.30s (×10), actor 5, squad 0 (trace 9894): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 9704. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500125480731695, 'next_transition': 9920}.
<a id="trace-10222"></a>
- 214.75s–214.75s (×1), actor 0, squad 0 (trace 10222): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 210.00s, trace 10079. Next observer evidence: {'until': 216.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.38679666666666684, 'next_transition': 10344}.
<a id="trace-10344"></a>
<a id="trace-10358"></a>
<a id="trace-10373"></a>
<a id="trace-10395"></a>
<a id="trace-10473"></a>
<a id="trace-10488"></a>
- 216.30s–221.30s (×6), actor 5, squad 0 (trace 10344): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 10266. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0499944952765756, 'next_transition': 10358}.
<a id="trace-10495"></a>
- 221.75s–221.75s (×1), actor 0, squad 0 (trace 10495): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 220.00s, trace 10403. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10604}.
<a id="trace-10604"></a>
<a id="trace-10624"></a>
<a id="trace-10636"></a>
- 222.30s–224.30s (×3), actor 5, squad 0 (trace 10604): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 10405. Next observer evidence: {'until': 223.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10624}.
<a id="trace-10743"></a>
- 226.55s–226.55s (×1), actor 0, squad 0 (trace 10743): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 10653. Next observer evidence: {'until': 227.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10790}.
<a id="trace-10790"></a>
<a id="trace-10805"></a>
<a id="trace-10820"></a>
<a id="trace-10909"></a>
<a id="trace-10921"></a>
<a id="trace-10933"></a>
<a id="trace-10946"></a>
<a id="trace-11022"></a>
<a id="trace-11053"></a>
<a id="trace-11063"></a>
<a id="trace-11171"></a>
<a id="trace-11223"></a>
<a id="trace-11273"></a>
- 227.30s–243.30s (×13), actor 5, squad 0 (trace 10790): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 10655. Next observer evidence: {'until': 228.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10805}.
<a id="trace-1565"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (events line 1565): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11390"></a>
- 246.10s–246.10s (×1), actor 5, squad 0 (trace 11390): renew committed intent (75 s lifetime). Knowledge: actor memory at 246.10s, trace 11390. Next observer evidence: {'until': 262.95, 'shots': 3, 'casualties': 1, 'mean_displacement': 1.1340000000000003, 'next_transition': None}.

## Net delivery

121 matched order/radio deliveries; 118 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.233s; maximum 5.100s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 1704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 1842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 1843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 2178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 2378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3571: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3575: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3576: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3577: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3578: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3748: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3751: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3752: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3753: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3754: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3755: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 3922: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3924: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3925: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3926: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3927: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3928: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3929: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4122: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4124: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4125: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4126: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4127: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4128: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4129: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4404: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4406: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4407: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4408: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4409: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4410: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4411: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4568: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4570: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4571: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4572: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4573: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4574: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4575: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 4747: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4749: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4750: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4751: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4752: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4753: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4754: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 4993: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 4994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4995: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4996: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4997: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4998: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4999: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5000: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5169: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5171: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5172: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5173: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5174: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5175: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5331: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5333: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5334: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5335: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5336: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5337: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5449: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5451: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5452: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5453: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5454: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5455: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 5553: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 5554: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 5587: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5589: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5590: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5591: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5592: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5593: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 5762: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 5763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5764: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5765: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5766: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5767: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5768: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 5939: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 5940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 5941: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 5942: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5943: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5944: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5945: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 6115: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6117: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6118: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6119: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6120: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6121: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 6337: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6339: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6340: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6341: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6342: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6343: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 6505: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6507: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6508: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6509: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6510: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6511: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 6676: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6678: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6679: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6680: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6681: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6682: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 6937: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 6938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6939: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6940: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6941: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6942: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6943: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 7107: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7109: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7110: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7111: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7112: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7113: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 7334: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7335: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7336: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7337: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7338: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7339: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7340: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 7697: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7698: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7699: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7700: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7701: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7702: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7703: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 8069: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8070: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8071: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8072: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8073: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8074: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8075: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 8301: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8302: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8303: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8304: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8305: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8306: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8307: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 8758: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8759: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8760: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8761: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8762: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8763: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8764: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 8942: estimate 5.84; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 9099: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9100: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9101: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9102: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9103: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9104: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9105: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 9221: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9222: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9223: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9224: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9225: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9226: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9227: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 9349: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9350: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9351: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9352: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9353: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9354: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9355: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 9488: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9489: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9490: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9491: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9492: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9493: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9494: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 9702: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9703: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9704: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9705: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9706: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9707: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9708: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 9943: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 9944: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 9945: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 9946: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 9947: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 9948: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 9949: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 10079: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10080: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10081: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10082: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10083: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10084: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10085: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 10264: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10265: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10266: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10267: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10268: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10269: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10270: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 10403: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10404: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10405: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10406: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10407: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10408: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10409: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 10653: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 10654: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10655: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10656: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10657: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10658: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10659: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 10831: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10832: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10833: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10834: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10835: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10836: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10837: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 10955: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10956: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10957: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10958: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10959: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10960: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10961: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 11087: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11088: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11089: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11090: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11091: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11092: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11093: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11323: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11324: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11325: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11326: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11327: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 246.10s leader 5, trace 11390: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11422: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11423: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11424: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11425: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11426: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11522: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11523: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11524: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11525: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11526: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11619: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11620: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11621: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11622: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11623: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Moss incapacitated
- 1: Rook killed in action
- 1: Vale incapacitated
- 1: Iven killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
