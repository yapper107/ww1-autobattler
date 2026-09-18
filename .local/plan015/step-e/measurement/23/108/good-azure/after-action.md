# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/23/108/good-azure/battle-108-1789674175968028430`

## Battle summary

**Ember** · 360 s · 230 shots.

### Turning points

- 18.9s, squad 4: contact (events line 199). First recorded contact.
- 22.9s, squad 0: withdrawal ([trace 1885](#trace-1885)). 93.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 41.6s, squad 0: help call ([trace 3102](#trace-3102)). No completion observed before termination.
- 99.3s, squad 0: withdrawal ([trace 6053](#trace-6053)). 167.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 239.2s, squad 0: withdrawal ([trace 13994](#trace-13994)). 242.7s, squad 0: advanced tactically.
- 242.4s, squad 0: help call ([trace 14300](#trace-14300)). No completion observed before termination.
- 256.1s, squad 0: withdrawal ([trace 15052](#trace-15052)). 296.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 268.1s, squad 0: help call ([trace 15540](#trace-15540)). No completion observed before termination.
- 302.5s, squad 0: withdrawal ([trace 16927](#trace-16927)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 10 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 220 shots, 1/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 19.4s, squad 0 chose took cover and returned fire ([trace 1496](#trace-1496)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
- 22.3s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.011923 retreat threshold=0.500000 initiative=delegated ([trace 1869](#trace-1869)). Following evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37998922746327607, 'next_transition': 1878}.

### Communication

282 matched deliveries (mean 0.26s, max 1.60s); 249 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.85s, squad 4, contact, evidence events line 199: First recorded contact; .
- 22.90s, squad 0, withdrawal, evidence 1885: BreakContact: believed ratio at least two without superiority; 93.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 41.60s, squad 0, help call, evidence 3102: NeedSupport; No completion observed before termination.
- 99.30s, squad 0, withdrawal, evidence 6053: Withdraw to received rally; 167.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 239.15s, squad 0, withdrawal, evidence 13994: BreakContact: believed ratio at least two without superiority; 242.7s, squad 0: advanced tactically.
- 242.35s, squad 0, help call, evidence 14300: NeedSupport; No completion observed before termination.
- 256.15s, squad 0, withdrawal, evidence 15052: BreakContact: believed ratio at least two without superiority; 296.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 268.15s, squad 0, help call, evidence 15540: NeedSupport; No completion observed before termination.
- 302.45s, squad 0, withdrawal, evidence 16927: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200132801496435, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000145545374151, 'next_transition': 431}.
<a id="trace-519"></a>
<a id="trace-731"></a>
<a id="trace-755"></a>
<a id="trace-777"></a>
<a id="trace-797"></a>
<a id="trace-822"></a>
<a id="trace-853"></a>
<a id="trace-869"></a>
<a id="trace-965"></a>
<a id="trace-978"></a>
<a id="trace-993"></a>
<a id="trace-1013"></a>
<a id="trace-1032"></a>
<a id="trace-1050"></a>
<a id="trace-1067"></a>
<a id="trace-1097"></a>
<a id="trace-1110"></a>
<a id="trace-1187"></a>
<a id="trace-1200"></a>
<a id="trace-1374"></a>
<a id="trace-1413"></a>
<a id="trace-1429"></a>
<a id="trace-1458"></a>
<a id="trace-1491"></a>
<a id="trace-1697"></a>
<a id="trace-1781"></a>
<a id="trace-1808"></a>
<a id="trace-1825"></a>
<a id="trace-1840"></a>
<a id="trace-1865"></a>
<a id="trace-1880"></a>
<a id="trace-2189"></a>
<a id="trace-2213"></a>
<a id="trace-2311"></a>
<a id="trace-2326"></a>
<a id="trace-2357"></a>
<a id="trace-2377"></a>
<a id="trace-2393"></a>
<a id="trace-2408"></a>
<a id="trace-2425"></a>
<a id="trace-2440"></a>
<a id="trace-2554"></a>
<a id="trace-2590"></a>
<a id="trace-2605"></a>
<a id="trace-2625"></a>
<a id="trace-2661"></a>
<a id="trace-2672"></a>
<a id="trace-2747"></a>
<a id="trace-2756"></a>
<a id="trace-2880"></a>
<a id="trace-2898"></a>
<a id="trace-2914"></a>
<a id="trace-2954"></a>
<a id="trace-2969"></a>
<a id="trace-2991"></a>
<a id="trace-2999"></a>
<a id="trace-3076"></a>
<a id="trace-3088"></a>
<a id="trace-3097"></a>
<a id="trace-3145"></a>
<a id="trace-3152"></a>
<a id="trace-3165"></a>
<a id="trace-3176"></a>
<a id="trace-3252"></a>
<a id="trace-3260"></a>
<a id="trace-3277"></a>
<a id="trace-3290"></a>
<a id="trace-3302"></a>
<a id="trace-3314"></a>
<a id="trace-3328"></a>
<a id="trace-3342"></a>
<a id="trace-3356"></a>
<a id="trace-3364"></a>
<a id="trace-3445"></a>
<a id="trace-3457"></a>
<a id="trace-3464"></a>
<a id="trace-3471"></a>
<a id="trace-3484"></a>
<a id="trace-3712"></a>
<a id="trace-3720"></a>
<a id="trace-3736"></a>
<a id="trace-3763"></a>
<a id="trace-3769"></a>
<a id="trace-3847"></a>
<a id="trace-3871"></a>
<a id="trace-3885"></a>
<a id="trace-3901"></a>
<a id="trace-3913"></a>
<a id="trace-3926"></a>
<a id="trace-3958"></a>
<a id="trace-3970"></a>
<a id="trace-3979"></a>
<a id="trace-4076"></a>
<a id="trace-4095"></a>
<a id="trace-4119"></a>
<a id="trace-4128"></a>
<a id="trace-4138"></a>
<a id="trace-4150"></a>
<a id="trace-4165"></a>
<a id="trace-4391"></a>
<a id="trace-4441"></a>
<a id="trace-4485"></a>
<a id="trace-4498"></a>
<a id="trace-4509"></a>
<a id="trace-4601"></a>
<a id="trace-4615"></a>
<a id="trace-4626"></a>
<a id="trace-4640"></a>
<a id="trace-4650"></a>
<a id="trace-4666"></a>
<a id="trace-4673"></a>
<a id="trace-4688"></a>
<a id="trace-4703"></a>
<a id="trace-4778"></a>
<a id="trace-4788"></a>
<a id="trace-4803"></a>
<a id="trace-4814"></a>
<a id="trace-4830"></a>
<a id="trace-4841"></a>
<a id="trace-4859"></a>
<a id="trace-4872"></a>
<a id="trace-4884"></a>
<a id="trace-4896"></a>
<a id="trace-4986"></a>
<a id="trace-5001"></a>
<a id="trace-5013"></a>
<a id="trace-5028"></a>
<a id="trace-5055"></a>
<a id="trace-5062"></a>
<a id="trace-5183"></a>
<a id="trace-5192"></a>
<a id="trace-5282"></a>
<a id="trace-5315"></a>
<a id="trace-5338"></a>
<a id="trace-5366"></a>
<a id="trace-5394"></a>
<a id="trace-5404"></a>
<a id="trace-5424"></a>
<a id="trace-5438"></a>
<a id="trace-5536"></a>
<a id="trace-5552"></a>
<a id="trace-5574"></a>
<a id="trace-5610"></a>
<a id="trace-5620"></a>
<a id="trace-5660"></a>
<a id="trace-5783"></a>
<a id="trace-5880"></a>
<a id="trace-5909"></a>
<a id="trace-5938"></a>
<a id="trace-5967"></a>
<a id="trace-6003"></a>
<a id="trace-6013"></a>
<a id="trace-6039"></a>
<a id="trace-6052"></a>
<a id="trace-6166"></a>
<a id="trace-6255"></a>
<a id="trace-6273"></a>
<a id="trace-6293"></a>
<a id="trace-6355"></a>
<a id="trace-6369"></a>
<a id="trace-6376"></a>
<a id="trace-6400"></a>
<a id="trace-6411"></a>
<a id="trace-6504"></a>
<a id="trace-6534"></a>
<a id="trace-6550"></a>
<a id="trace-6560"></a>
<a id="trace-6577"></a>
<a id="trace-6587"></a>
<a id="trace-6603"></a>
<a id="trace-6692"></a>
<a id="trace-6708"></a>
<a id="trace-6730"></a>
<a id="trace-6739"></a>
<a id="trace-6761"></a>
<a id="trace-6787"></a>
<a id="trace-6796"></a>
<a id="trace-6810"></a>
<a id="trace-6827"></a>
<a id="trace-6904"></a>
<a id="trace-6928"></a>
<a id="trace-7058"></a>
<a id="trace-7077"></a>
<a id="trace-7103"></a>
<a id="trace-7117"></a>
<a id="trace-7138"></a>
<a id="trace-7161"></a>
<a id="trace-7242"></a>
<a id="trace-7255"></a>
<a id="trace-7297"></a>
<a id="trace-7315"></a>
<a id="trace-7329"></a>
<a id="trace-7338"></a>
<a id="trace-7355"></a>
<a id="trace-7365"></a>
<a id="trace-7446"></a>
<a id="trace-7460"></a>
<a id="trace-7478"></a>
<a id="trace-7505"></a>
<a id="trace-7519"></a>
<a id="trace-7552"></a>
<a id="trace-7564"></a>
<a id="trace-7574"></a>
<a id="trace-7661"></a>
<a id="trace-7669"></a>
<a id="trace-7686"></a>
<a id="trace-7696"></a>
<a id="trace-7710"></a>
<a id="trace-7729"></a>
<a id="trace-7746"></a>
<a id="trace-7945"></a>
<a id="trace-7981"></a>
<a id="trace-7998"></a>
<a id="trace-8017"></a>
<a id="trace-8079"></a>
<a id="trace-8092"></a>
<a id="trace-8187"></a>
<a id="trace-8320"></a>
<a id="trace-8336"></a>
<a id="trace-8364"></a>
<a id="trace-8371"></a>
<a id="trace-8414"></a>
<a id="trace-8442"></a>
<a id="trace-8519"></a>
<a id="trace-8551"></a>
<a id="trace-8562"></a>
<a id="trace-8598"></a>
<a id="trace-8636"></a>
<a id="trace-8645"></a>
<a id="trace-8731"></a>
<a id="trace-8741"></a>
<a id="trace-8752"></a>
<a id="trace-8765"></a>
<a id="trace-8783"></a>
<a id="trace-8801"></a>
<a id="trace-8821"></a>
<a id="trace-8854"></a>
<a id="trace-8863"></a>
<a id="trace-8986"></a>
<a id="trace-8994"></a>
<a id="trace-9015"></a>
<a id="trace-9036"></a>
<a id="trace-9135"></a>
<a id="trace-9219"></a>
<a id="trace-9241"></a>
<a id="trace-9257"></a>
<a id="trace-9276"></a>
<a id="trace-9309"></a>
<a id="trace-9410"></a>
<a id="trace-9423"></a>
<a id="trace-9451"></a>
<a id="trace-9457"></a>
<a id="trace-9546"></a>
<a id="trace-9562"></a>
<a id="trace-9575"></a>
<a id="trace-9584"></a>
<a id="trace-9599"></a>
<a id="trace-9630"></a>
<a id="trace-9783"></a>
<a id="trace-9805"></a>
<a id="trace-9827"></a>
<a id="trace-9849"></a>
<a id="trace-9864"></a>
<a id="trace-9873"></a>
<a id="trace-10094"></a>
<a id="trace-10114"></a>
<a id="trace-10128"></a>
<a id="trace-10214"></a>
<a id="trace-10221"></a>
<a id="trace-10246"></a>
<a id="trace-10278"></a>
<a id="trace-10308"></a>
<a id="trace-10329"></a>
<a id="trace-10341"></a>
<a id="trace-10359"></a>
<a id="trace-10373"></a>
<a id="trace-10457"></a>
<a id="trace-10479"></a>
<a id="trace-10492"></a>
<a id="trace-10506"></a>
<a id="trace-10527"></a>
<a id="trace-10561"></a>
<a id="trace-10575"></a>
<a id="trace-10596"></a>
<a id="trace-10613"></a>
<a id="trace-10704"></a>
<a id="trace-10722"></a>
<a id="trace-10731"></a>
<a id="trace-10754"></a>
<a id="trace-10980"></a>
<a id="trace-10999"></a>
<a id="trace-11015"></a>
<a id="trace-11034"></a>
<a id="trace-11133"></a>
<a id="trace-11158"></a>
<a id="trace-11170"></a>
<a id="trace-11188"></a>
<a id="trace-11207"></a>
<a id="trace-11222"></a>
<a id="trace-11257"></a>
<a id="trace-11271"></a>
<a id="trace-11384"></a>
<a id="trace-11405"></a>
<a id="trace-11422"></a>
<a id="trace-11463"></a>
<a id="trace-11487"></a>
<a id="trace-11496"></a>
<a id="trace-11597"></a>
<a id="trace-11611"></a>
<a id="trace-11620"></a>
<a id="trace-11645"></a>
<a id="trace-11653"></a>
<a id="trace-11667"></a>
<a id="trace-11679"></a>
<a id="trace-11693"></a>
<a id="trace-11788"></a>
<a id="trace-11814"></a>
<a id="trace-12058"></a>
<a id="trace-12087"></a>
<a id="trace-12109"></a>
<a id="trace-12197"></a>
<a id="trace-12217"></a>
<a id="trace-12230"></a>
<a id="trace-12244"></a>
<a id="trace-12268"></a>
<a id="trace-12287"></a>
<a id="trace-12316"></a>
<a id="trace-12351"></a>
<a id="trace-12428"></a>
<a id="trace-12446"></a>
<a id="trace-12463"></a>
<a id="trace-12499"></a>
<a id="trace-12512"></a>
<a id="trace-12532"></a>
<a id="trace-12546"></a>
<a id="trace-12565"></a>
<a id="trace-12580"></a>
<a id="trace-12665"></a>
<a id="trace-12697"></a>
<a id="trace-12736"></a>
<a id="trace-12748"></a>
<a id="trace-12757"></a>
<a id="trace-12809"></a>
<a id="trace-12965"></a>
<a id="trace-13076"></a>
<a id="trace-13103"></a>
<a id="trace-13118"></a>
<a id="trace-13155"></a>
<a id="trace-13170"></a>
<a id="trace-13186"></a>
<a id="trace-13214"></a>
<a id="trace-13307"></a>
<a id="trace-13324"></a>
<a id="trace-13349"></a>
<a id="trace-13371"></a>
<a id="trace-13387"></a>
<a id="trace-13403"></a>
<a id="trace-13419"></a>
<a id="trace-13441"></a>
<a id="trace-13451"></a>
<a id="trace-13851"></a>
<a id="trace-13941"></a>
<a id="trace-13964"></a>
<a id="trace-14282"></a>
<a id="trace-14286"></a>
<a id="trace-14298"></a>
<a id="trace-14400"></a>
<a id="trace-14418"></a>
<a id="trace-14431"></a>
<a id="trace-14505"></a>
<a id="trace-14513"></a>
<a id="trace-14570"></a>
<a id="trace-14602"></a>
<a id="trace-14615"></a>
<a id="trace-14644"></a>
<a id="trace-14746"></a>
<a id="trace-14761"></a>
<a id="trace-14775"></a>
<a id="trace-14899"></a>
<a id="trace-14928"></a>
<a id="trace-14946"></a>
<a id="trace-14962"></a>
<a id="trace-15040"></a>
<a id="trace-15047"></a>
<a id="trace-15178"></a>
<a id="trace-15187"></a>
<a id="trace-15204"></a>
<a id="trace-15209"></a>
<a id="trace-15226"></a>
<a id="trace-15248"></a>
<a id="trace-15255"></a>
<a id="trace-15331"></a>
<a id="trace-15351"></a>
<a id="trace-15372"></a>
<a id="trace-15377"></a>
<a id="trace-15388"></a>
<a id="trace-15393"></a>
<a id="trace-15404"></a>
<a id="trace-15413"></a>
<a id="trace-15486"></a>
<a id="trace-15494"></a>
<a id="trace-15507"></a>
<a id="trace-15514"></a>
<a id="trace-15533"></a>
<a id="trace-15539"></a>
<a id="trace-15555"></a>
<a id="trace-15621"></a>
<a id="trace-15634"></a>
<a id="trace-15649"></a>
<a id="trace-15727"></a>
<a id="trace-15734"></a>
<a id="trace-15749"></a>
<a id="trace-15756"></a>
<a id="trace-15773"></a>
<a id="trace-15785"></a>
<a id="trace-15793"></a>
<a id="trace-15805"></a>
<a id="trace-15812"></a>
<a id="trace-15887"></a>
<a id="trace-15892"></a>
<a id="trace-15905"></a>
<a id="trace-15923"></a>
<a id="trace-15927"></a>
<a id="trace-15939"></a>
<a id="trace-15944"></a>
<a id="trace-15956"></a>
<a id="trace-15965"></a>
<a id="trace-16118"></a>
<a id="trace-16128"></a>
<a id="trace-16145"></a>
<a id="trace-16155"></a>
<a id="trace-16167"></a>
<a id="trace-16175"></a>
<a id="trace-16276"></a>
<a id="trace-16284"></a>
<a id="trace-16301"></a>
<a id="trace-16307"></a>
<a id="trace-16326"></a>
<a id="trace-16339"></a>
<a id="trace-16347"></a>
<a id="trace-16361"></a>
<a id="trace-16368"></a>
<a id="trace-16445"></a>
<a id="trace-16466"></a>
<a id="trace-16474"></a>
<a id="trace-16498"></a>
<a id="trace-16598"></a>
<a id="trace-16608"></a>
<a id="trace-16692"></a>
<a id="trace-16706"></a>
<a id="trace-16731"></a>
<a id="trace-16746"></a>
<a id="trace-16784"></a>
<a id="trace-16803"></a>
<a id="trace-16875"></a>
<a id="trace-16886"></a>
<a id="trace-16896"></a>
<a id="trace-16911"></a>
<a id="trace-16925"></a>
<a id="trace-16990"></a>
<a id="trace-17004"></a>
<a id="trace-17016"></a>
<a id="trace-17031"></a>
<a id="trace-17045"></a>
<a id="trace-17121"></a>
<a id="trace-17130"></a>
<a id="trace-17161"></a>
<a id="trace-17166"></a>
<a id="trace-17175"></a>
<a id="trace-17181"></a>
<a id="trace-17190"></a>
<a id="trace-17267"></a>
<a id="trace-17273"></a>
<a id="trace-17289"></a>
<a id="trace-17297"></a>
<a id="trace-17305"></a>
<a id="trace-17318"></a>
<a id="trace-17324"></a>
<a id="trace-17340"></a>
<a id="trace-17412"></a>
<a id="trace-17426"></a>
<a id="trace-17431"></a>
<a id="trace-17440"></a>
<a id="trace-17455"></a>
<a id="trace-17462"></a>
<a id="trace-17472"></a>
<a id="trace-17551"></a>
<a id="trace-17583"></a>
<a id="trace-17588"></a>
<a id="trace-17598"></a>
<a id="trace-17605"></a>
<a id="trace-17619"></a>
<a id="trace-17690"></a>
<a id="trace-17696"></a>
<a id="trace-17707"></a>
<a id="trace-17722"></a>
<a id="trace-17731"></a>
<a id="trace-17743"></a>
<a id="trace-17756"></a>
<a id="trace-17764"></a>
<a id="trace-17834"></a>
<a id="trace-17841"></a>
<a id="trace-17865"></a>
<a id="trace-17878"></a>
<a id="trace-17884"></a>
<a id="trace-17894"></a>
<a id="trace-17903"></a>
<a id="trace-17980"></a>
<a id="trace-17994"></a>
<a id="trace-18000"></a>
<a id="trace-18008"></a>
<a id="trace-18021"></a>
<a id="trace-18027"></a>
<a id="trace-18037"></a>
<a id="trace-18044"></a>
<a id="trace-18122"></a>
<a id="trace-18138"></a>
<a id="trace-18149"></a>
<a id="trace-18157"></a>
<a id="trace-18166"></a>
<a id="trace-18172"></a>
<a id="trace-18263"></a>
<a id="trace-18272"></a>
<a id="trace-18277"></a>
<a id="trace-18285"></a>
<a id="trace-18293"></a>
<a id="trace-18301"></a>
<a id="trace-18308"></a>
<a id="trace-18323"></a>
<a id="trace-18332"></a>
<a id="trace-18405"></a>
<a id="trace-18411"></a>
<a id="trace-18421"></a>
<a id="trace-18426"></a>
<a id="trace-18438"></a>
<a id="trace-18447"></a>
<a id="trace-18454"></a>
<a id="trace-18461"></a>
<a id="trace-18471"></a>
<a id="trace-18548"></a>
<a id="trace-18559"></a>
<a id="trace-18568"></a>
<a id="trace-18579"></a>
<a id="trace-18597"></a>
<a id="trace-18605"></a>
<a id="trace-18613"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624914977796294, 'next_transition': 731}.
<a id="trace-528"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 528): received platoon directive. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.54263210113952, 'next_transition': 729}.
<a id="trace-729"></a>
<a id="trace-753"></a>
<a id="trace-775"></a>
<a id="trace-795"></a>
<a id="trace-820"></a>
<a id="trace-851"></a>
<a id="trace-867"></a>
<a id="trace-880"></a>
<a id="trace-963"></a>
<a id="trace-976"></a>
<a id="trace-991"></a>
<a id="trace-1011"></a>
<a id="trace-1030"></a>
<a id="trace-1048"></a>
<a id="trace-1065"></a>
<a id="trace-1075"></a>
<a id="trace-1095"></a>
<a id="trace-1108"></a>
<a id="trace-1185"></a>
<a id="trace-1198"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 729): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 438. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8881602511550354, 'next_transition': 753}.
<a id="trace-1202"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1202): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1112. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6534959370887249, 'next_transition': 1372}.
<a id="trace-1203"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1203): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1112. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6534959370887249, 'next_transition': 1372}.
<a id="trace-1372"></a>
<a id="trace-1394"></a>
<a id="trace-1411"></a>
<a id="trace-1427"></a>
<a id="trace-1456"></a>
<a id="trace-1475"></a>
<a id="trace-1489"></a>
- 16.25s–19.25s (×7), actor 5, squad 0 (trace 1372): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1115. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3012286589028082, 'next_transition': 1394}.
<a id="trace-1496"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 1496): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1112. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799901488369171, 'next_transition': 1695}.
<a id="trace-1497"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 1497): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1112. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799901488369171, 'next_transition': 1695}.
<a id="trace-1498"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 1498): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1112. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799901488369171, 'next_transition': 1695}.
<a id="trace-1695"></a>
<a id="trace-1779"></a>
<a id="trace-1806"></a>
<a id="trace-1823"></a>
<a id="trace-1838"></a>
<a id="trace-1863"></a>
- 19.75s–22.25s (×6), actor 5, squad 0 (trace 1695): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1115. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6369636237252944, 'next_transition': 1779}.
<a id="trace-249"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (events line 249): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1869"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 1869): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.011923 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 1869. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37998922746327607, 'next_transition': 1878}.
<a id="trace-1870"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 1870): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.011923 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 1870. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37998922746327607, 'next_transition': 1878}.
<a id="trace-1878"></a>
- 22.75s–22.75s (×1), actor 5, squad 0 (trace 1878): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 22.30s, trace 1870. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1900034913438989, 'next_transition': 1885}.
<a id="trace-1885"></a>
- 22.90s–22.90s (×1), actor 0, squad 0 (trace 1885): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 1700. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19000039139236202, 'next_transition': 2164}.
<a id="trace-1886"></a>
- 22.90s–22.90s (×1), actor 0, squad 0 (trace 1886): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 1700. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19000039139236202, 'next_transition': 2164}.
<a id="trace-2164"></a>
- 23.05s–23.05s (×1), actor 5, squad 0 (trace 2164): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 23.05s, trace 2164. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1705387176495653, 'next_transition': 2174}.
<a id="trace-2174"></a>
<a id="trace-2187"></a>
<a id="trace-2211"></a>
<a id="trace-2234"></a>
<a id="trace-2309"></a>
<a id="trace-2324"></a>
<a id="trace-2355"></a>
<a id="trace-2375"></a>
<a id="trace-2391"></a>
<a id="trace-2406"></a>
<a id="trace-2423"></a>
<a id="trace-2438"></a>
<a id="trace-2455"></a>
<a id="trace-2464"></a>
<a id="trace-2552"></a>
<a id="trace-2563"></a>
<a id="trace-2574"></a>
<a id="trace-2588"></a>
<a id="trace-2603"></a>
<a id="trace-2623"></a>
<a id="trace-2634"></a>
<a id="trace-2639"></a>
<a id="trace-2659"></a>
<a id="trace-2670"></a>
<a id="trace-2745"></a>
<a id="trace-2754"></a>
- 23.25s–35.75s (×26), actor 5, squad 0 (trace 2174): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.05s, trace 2164. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15683431744510584, 'next_transition': 2187}.
<a id="trace-2760"></a>
- 35.90s–35.90s (×1), actor 0, squad 0 (trace 2760): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 2676. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2577327604855972, 'next_transition': 2878}.
<a id="trace-2761"></a>
- 35.90s–35.90s (×1), actor 0, squad 0 (trace 2761): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 2676. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2577327604855972, 'next_transition': 2878}.
<a id="trace-2878"></a>
<a id="trace-2896"></a>
<a id="trace-2912"></a>
<a id="trace-2928"></a>
<a id="trace-2952"></a>
<a id="trace-2967"></a>
<a id="trace-2989"></a>
<a id="trace-2997"></a>
<a id="trace-3074"></a>
<a id="trace-3086"></a>
<a id="trace-3095"></a>
- 36.25s–41.25s (×11), actor 5, squad 0 (trace 2878): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2679. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3529052467182569, 'next_transition': 2896}.
<a id="trace-3102"></a>
- 41.60s–41.60s (×1), actor 0, squad 0 (trace 3102): NeedSupport. Knowledge: actor memory at 40.00s, trace 3001. Next observer evidence: None.
<a id="trace-3108"></a>
<a id="trace-3126"></a>
<a id="trace-3132"></a>
<a id="trace-3143"></a>
<a id="trace-3150"></a>
<a id="trace-3163"></a>
<a id="trace-3174"></a>
<a id="trace-3250"></a>
<a id="trace-3258"></a>
<a id="trace-3275"></a>
<a id="trace-3288"></a>
<a id="trace-3300"></a>
<a id="trace-3312"></a>
<a id="trace-3326"></a>
<a id="trace-3340"></a>
<a id="trace-3354"></a>
<a id="trace-3362"></a>
<a id="trace-3443"></a>
<a id="trace-3455"></a>
<a id="trace-3462"></a>
<a id="trace-3469"></a>
<a id="trace-3482"></a>
- 41.75s–52.25s (×22), actor 5, squad 0 (trace 3108): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3004. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268012498740791, 'next_transition': 3126}.
<a id="trace-3491"></a>
- 52.70s–52.70s (×1), actor 0, squad 0 (trace 3491): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 3367. Next observer evidence: None.
<a id="trace-3599"></a>
- 52.70s–52.70s (×1), actor 0, squad 0 (trace 3599): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 3367. Next observer evidence: None.
<a id="trace-3710"></a>
<a id="trace-3718"></a>
<a id="trace-3734"></a>
<a id="trace-3761"></a>
<a id="trace-3767"></a>
<a id="trace-3845"></a>
<a id="trace-3869"></a>
<a id="trace-3883"></a>
<a id="trace-3899"></a>
<a id="trace-3911"></a>
<a id="trace-3924"></a>
<a id="trace-3942"></a>
<a id="trace-3956"></a>
<a id="trace-3968"></a>
<a id="trace-3977"></a>
<a id="trace-4057"></a>
<a id="trace-4074"></a>
<a id="trace-4084"></a>
<a id="trace-4093"></a>
<a id="trace-4117"></a>
<a id="trace-4126"></a>
<a id="trace-4136"></a>
<a id="trace-4148"></a>
<a id="trace-4163"></a>
<a id="trace-4172"></a>
<a id="trace-4249"></a>
- 52.75s–65.25s (×26), actor 5, squad 0 (trace 3710): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3370. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6751825586564042, 'next_transition': 3718}.
<a id="trace-4252"></a>
- 65.35s–65.35s (×1), actor 0, squad 0 (trace 4252): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 4179. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4620078191768595, 'next_transition': 4369}.
<a id="trace-4253"></a>
- 65.35s–65.35s (×1), actor 0, squad 0 (trace 4253): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 4179. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4620078191768595, 'next_transition': 4369}.
<a id="trace-4369"></a>
<a id="trace-4389"></a>
<a id="trace-4413"></a>
<a id="trace-4430"></a>
<a id="trace-4439"></a>
<a id="trace-4469"></a>
<a id="trace-4483"></a>
<a id="trace-4496"></a>
<a id="trace-4507"></a>
<a id="trace-4587"></a>
<a id="trace-4599"></a>
<a id="trace-4613"></a>
<a id="trace-4624"></a>
<a id="trace-4638"></a>
<a id="trace-4648"></a>
<a id="trace-4664"></a>
<a id="trace-4671"></a>
<a id="trace-4686"></a>
<a id="trace-4701"></a>
<a id="trace-4776"></a>
<a id="trace-4786"></a>
<a id="trace-4801"></a>
<a id="trace-4812"></a>
<a id="trace-4828"></a>
<a id="trace-4839"></a>
<a id="trace-4857"></a>
<a id="trace-4870"></a>
- 65.75s–78.75s (×27), actor 5, squad 0 (trace 4369): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4182. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3338892999358359, 'next_transition': 4389}.
<a id="trace-4876"></a>
- 79.20s–79.20s (×1), actor 0, squad 0 (trace 4876): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 4704. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12240399525977708, 'next_transition': 4894}.
<a id="trace-4894"></a>
<a id="trace-4973"></a>
<a id="trace-4984"></a>
<a id="trace-4999"></a>
<a id="trace-5011"></a>
<a id="trace-5026"></a>
- 79.75s–82.25s (×6), actor 5, squad 0 (trace 4894): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4707. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18359519253570392, 'next_transition': 4973}.
<a id="trace-623"></a>
- 82.45s–82.45s (×1), actor 5, squad 0 (events line 623): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5036"></a>
- 82.45s–82.45s (×1), actor 5, squad 0 (trace 5036): renew committed intent (75 s lifetime). Knowledge: actor memory at 82.45s, trace 5036. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06120591156997113, 'next_transition': 5040}.
<a id="trace-5040"></a>
<a id="trace-5053"></a>
<a id="trace-5060"></a>
- 82.75s–83.75s (×3), actor 5, squad 0 (trace 5040): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.45s, trace 5036. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1835873649126095, 'next_transition': 5053}.
<a id="trace-5070"></a>
- 84.20s–84.20s (×1), actor 0, squad 0 (trace 5070): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 4898. Next observer evidence: None.
<a id="trace-5071"></a>
- 84.20s–84.20s (×1), actor 0, squad 0 (trace 5071): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 4898. Next observer evidence: None.
<a id="trace-5181"></a>
<a id="trace-5190"></a>
<a id="trace-5280"></a>
<a id="trace-5313"></a>
<a id="trace-5336"></a>
<a id="trace-5364"></a>
<a id="trace-5374"></a>
<a id="trace-5392"></a>
<a id="trace-5402"></a>
<a id="trace-5422"></a>
<a id="trace-5436"></a>
<a id="trace-5520"></a>
<a id="trace-5534"></a>
<a id="trace-5550"></a>
<a id="trace-5557"></a>
<a id="trace-5572"></a>
<a id="trace-5584"></a>
- 84.25s–92.75s (×17), actor 5, squad 0 (trace 5181): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.45s, trace 5036. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1224039952597772, 'next_transition': 5190}.
<a id="trace-5593"></a>
- 92.95s–92.95s (×1), actor 0, squad 0 (trace 5593): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 5441. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299981328728733, 'next_transition': 5608}.
<a id="trace-5608"></a>
<a id="trace-5618"></a>
- 93.25s–93.75s (×2), actor 5, squad 0 (trace 5608): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5444. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300143779824063, 'next_transition': 5618}.
<a id="trace-5629"></a>
- 93.95s–93.95s (×1), actor 0, squad 0 (trace 5629): MoveTactically. Knowledge: actor memory at 90.00s, trace 5441. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087582117289578, 'next_transition': 5658}.
<a id="trace-5630"></a>
- 93.95s–93.95s (×1), actor 0, squad 0 (trace 5630): received platoon directive. Knowledge: actor memory at 90.00s, trace 5441. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087582117289578, 'next_transition': 5658}.
<a id="trace-5658"></a>
- 94.25s–94.25s (×1), actor 5, squad 0 (trace 5658): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5444. Next observer evidence: None.
<a id="trace-5667"></a>
- 94.30s–94.30s (×1), actor 0, squad 0 (trace 5667): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 5441. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300081282314904, 'next_transition': 5781}.
<a id="trace-5781"></a>
<a id="trace-5878"></a>
<a id="trace-5907"></a>
<a id="trace-5936"></a>
<a id="trace-5965"></a>
- 94.75s–96.75s (×5), actor 5, squad 0 (trace 5781): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5444. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5775206864362644, 'next_transition': 5878}.
<a id="trace-5977"></a>
- 96.85s–96.85s (×1), actor 5, squad 0 (trace 5977): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.457339 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.85s, trace 5977. Next observer evidence: None.
<a id="trace-5978"></a>
- 96.85s–96.85s (×1), actor 5, squad 0 (trace 5978): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.457339 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.85s, trace 5978. Next observer evidence: None.
<a id="trace-771"></a>
- 96.85s–96.85s (×1), actor 5, squad 0 (events line 771): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420011524852578, 'next_transition': 6001}.
<a id="trace-6001"></a>
<a id="trace-6011"></a>
<a id="trace-6027"></a>
<a id="trace-6037"></a>
<a id="trace-6050"></a>
- 97.25s–99.25s (×5), actor 5, squad 0 (trace 6001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 96.85s, trace 5978. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199880057219962, 'next_transition': 6011}.
<a id="trace-6053"></a>
- 99.30s–99.30s (×1), actor 0, squad 0 (trace 6053): Withdraw to received rally. Knowledge: actor memory at 95.00s, trace 5795. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000731537109787, 'next_transition': 6164}.
<a id="trace-6054"></a>
- 99.30s–99.30s (×1), actor 0, squad 0 (trace 6054): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 5795. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000731537109787, 'next_transition': 6164}.
<a id="trace-6164"></a>
<a id="trace-6253"></a>
<a id="trace-6271"></a>
<a id="trace-6291"></a>
<a id="trace-6307"></a>
<a id="trace-6335"></a>
<a id="trace-6353"></a>
<a id="trace-6367"></a>
<a id="trace-6374"></a>
<a id="trace-6398"></a>
<a id="trace-6409"></a>
<a id="trace-6491"></a>
<a id="trace-6502"></a>
<a id="trace-6521"></a>
<a id="trace-6532"></a>
<a id="trace-6548"></a>
<a id="trace-6558"></a>
<a id="trace-6575"></a>
<a id="trace-6585"></a>
<a id="trace-6601"></a>
<a id="trace-6610"></a>
<a id="trace-6690"></a>
<a id="trace-6706"></a>
<a id="trace-6728"></a>
<a id="trace-6737"></a>
<a id="trace-6759"></a>
<a id="trace-6768"></a>
<a id="trace-6785"></a>
<a id="trace-6794"></a>
<a id="trace-6808"></a>
<a id="trace-6825"></a>
<a id="trace-6902"></a>
<a id="trace-6910"></a>
<a id="trace-6926"></a>
- 99.75s–116.25s (×34), actor 5, squad 0 (trace 6164): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 96.85s, trace 5978. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300061982350029, 'next_transition': 6253}.
<a id="trace-6939"></a>
- 116.75s–116.75s (×1), actor 0, squad 0 (trace 6939): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 6830. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.525004470880432, 'next_transition': 7056}.
<a id="trace-6940"></a>
- 116.75s–116.75s (×1), actor 0, squad 0 (trace 6940): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 6830. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.525004470880432, 'next_transition': 7056}.
<a id="trace-7056"></a>
<a id="trace-7075"></a>
<a id="trace-7101"></a>
<a id="trace-7115"></a>
<a id="trace-7136"></a>
<a id="trace-7159"></a>
<a id="trace-7240"></a>
<a id="trace-7253"></a>
<a id="trace-7273"></a>
<a id="trace-7281"></a>
<a id="trace-7295"></a>
<a id="trace-7313"></a>
<a id="trace-7327"></a>
<a id="trace-7336"></a>
<a id="trace-7353"></a>
<a id="trace-7363"></a>
<a id="trace-7444"></a>
<a id="trace-7458"></a>
<a id="trace-7476"></a>
<a id="trace-7492"></a>
<a id="trace-7503"></a>
<a id="trace-7517"></a>
<a id="trace-7537"></a>
<a id="trace-7550"></a>
<a id="trace-7562"></a>
<a id="trace-7572"></a>
<a id="trace-7659"></a>
<a id="trace-7667"></a>
<a id="trace-7684"></a>
<a id="trace-7694"></a>
<a id="trace-7708"></a>
<a id="trace-7727"></a>
<a id="trace-7744"></a>
<a id="trace-7751"></a>
<a id="trace-7770"></a>
<a id="trace-7782"></a>
- 117.25s–134.80s (×36), actor 5, squad 0 (trace 7056): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6833. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38638990701972026, 'next_transition': 7075}.
<a id="trace-7785"></a>
- 134.85s–134.85s (×1), actor 0, squad 0 (trace 7785): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 7575. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12239289308525118, 'next_transition': 7943}.
<a id="trace-7786"></a>
- 134.85s–134.85s (×1), actor 0, squad 0 (trace 7786): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 7575. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12239289308525118, 'next_transition': 7943}.
<a id="trace-7943"></a>
<a id="trace-7960"></a>
<a id="trace-7979"></a>
<a id="trace-7996"></a>
<a id="trace-8015"></a>
<a id="trace-8041"></a>
<a id="trace-8064"></a>
<a id="trace-8077"></a>
<a id="trace-8090"></a>
<a id="trace-8101"></a>
<a id="trace-8185"></a>
- 135.30s–140.30s (×11), actor 5, squad 0 (trace 7943): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 7875. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06249331075314304, 'next_transition': 7960}.
<a id="trace-8196"></a>
- 140.75s–140.75s (×1), actor 0, squad 0 (trace 8196): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 8109. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499399453725233, 'next_transition': 8308}.
<a id="trace-8197"></a>
- 140.75s–140.75s (×1), actor 0, squad 0 (trace 8197): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 8109. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499399453725233, 'next_transition': 8308}.
<a id="trace-8308"></a>
<a id="trace-8318"></a>
<a id="trace-8334"></a>
<a id="trace-8362"></a>
<a id="trace-8369"></a>
<a id="trace-8388"></a>
<a id="trace-8412"></a>
<a id="trace-8426"></a>
<a id="trace-8440"></a>
<a id="trace-8517"></a>
<a id="trace-8526"></a>
<a id="trace-8549"></a>
<a id="trace-8560"></a>
<a id="trace-8582"></a>
<a id="trace-8596"></a>
<a id="trace-8611"></a>
<a id="trace-8624"></a>
<a id="trace-8634"></a>
<a id="trace-8643"></a>
<a id="trace-8729"></a>
<a id="trace-8739"></a>
<a id="trace-8750"></a>
<a id="trace-8763"></a>
<a id="trace-8781"></a>
<a id="trace-8799"></a>
<a id="trace-8811"></a>
<a id="trace-8819"></a>
<a id="trace-8852"></a>
<a id="trace-8861"></a>
<a id="trace-8936"></a>
<a id="trace-8949"></a>
<a id="trace-8959"></a>
<a id="trace-8971"></a>
- 140.80s–156.80s (×33), actor 5, squad 0 (trace 8308): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 8112. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999071153750284, 'next_transition': 8318}.
<a id="trace-1246"></a>
- 156.85s–156.85s (×1), actor 5, squad 0 (events line 1246): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8974"></a>
- 156.85s–156.85s (×1), actor 5, squad 0 (trace 8974): renew committed intent (75 s lifetime). Knowledge: actor memory at 156.85s, trace 8974. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5425123272884903, 'next_transition': 8984}.
<a id="trace-8984"></a>
<a id="trace-8992"></a>
<a id="trace-9013"></a>
<a id="trace-9020"></a>
<a id="trace-9034"></a>
- 157.30s–159.30s (×5), actor 5, squad 0 (trace 8984): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 156.85s, trace 8974. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6578401772390551, 'next_transition': 8992}.
<a id="trace-9039"></a>
- 159.35s–159.35s (×1), actor 0, squad 0 (trace 9039): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 8865. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9133}.
<a id="trace-9040"></a>
- 159.35s–159.35s (×1), actor 0, squad 0 (trace 9040): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 8865. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9133}.
<a id="trace-9133"></a>
<a id="trace-9217"></a>
<a id="trace-9239"></a>
<a id="trace-9255"></a>
<a id="trace-9274"></a>
<a id="trace-9307"></a>
- 159.80s–162.30s (×6), actor 5, squad 0 (trace 9133): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 156.85s, trace 8974. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9217}.
<a id="trace-9315"></a>
- 162.55s–162.55s (×1), actor 0, squad 0 (trace 9315): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 9136. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9408}.
<a id="trace-9316"></a>
- 162.55s–162.55s (×1), actor 0, squad 0 (trace 9316): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 9136. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9408}.
<a id="trace-9408"></a>
<a id="trace-9421"></a>
<a id="trace-9434"></a>
<a id="trace-9449"></a>
<a id="trace-9455"></a>
<a id="trace-9544"></a>
<a id="trace-9560"></a>
<a id="trace-9573"></a>
<a id="trace-9582"></a>
<a id="trace-9597"></a>
<a id="trace-9608"></a>
- 162.80s–167.80s (×11), actor 5, squad 0 (trace 9408): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 9139. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9421}.
<a id="trace-9613"></a>
- 167.95s–167.95s (×1), actor 0, squad 0 (trace 9613): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 9466. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2735854207488808, 'next_transition': 9628}.
<a id="trace-9628"></a>
<a id="trace-9655"></a>
<a id="trace-9680"></a>
<a id="trace-9689"></a>
<a id="trace-9781"></a>
<a id="trace-9803"></a>
- 168.30s–170.80s (×6), actor 5, squad 0 (trace 9628): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 9469. Next observer evidence: {'until': 168.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4775287244077906, 'next_transition': 9655}.
<a id="trace-1376"></a>
- 171.25s–171.25s (×1), actor 5, squad 0 (events line 1376): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9818"></a>
- 171.25s–171.25s (×1), actor 5, squad 0 (trace 9818): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.25s, trace 9818. Next observer evidence: None.
<a id="trace-9819"></a>
- 171.25s–171.25s (×1), actor 5, squad 0 (trace 9819): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.25s, trace 9819. Next observer evidence: None.
<a id="trace-9824"></a>
<a id="trace-9835"></a>
<a id="trace-9847"></a>
<a id="trace-9862"></a>
<a id="trace-9871"></a>
- 171.30s–173.30s (×5), actor 5, squad 0 (trace 9824): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.25s, trace 9819. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18359939784457022, 'next_transition': 9835}.
<a id="trace-9879"></a>
- 173.75s–173.75s (×1), actor 0, squad 0 (trace 9879): MoveTactically. Knowledge: actor memory at 170.00s, trace 9700. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10092}.
<a id="trace-9880"></a>
- 173.75s–173.75s (×1), actor 0, squad 0 (trace 9880): traveling. Knowledge: actor memory at 170.00s, trace 9700. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10092}.
<a id="trace-9881"></a>
- 173.75s–173.75s (×1), actor 0, squad 0 (trace 9881): received platoon directive. Knowledge: actor memory at 170.00s, trace 9700. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10092}.
<a id="trace-10092"></a>
<a id="trace-10112"></a>
<a id="trace-10126"></a>
<a id="trace-10212"></a>
<a id="trace-10219"></a>
<a id="trace-10244"></a>
<a id="trace-10276"></a>
<a id="trace-10290"></a>
<a id="trace-10306"></a>
<a id="trace-10327"></a>
<a id="trace-10339"></a>
<a id="trace-10357"></a>
<a id="trace-10371"></a>
<a id="trace-10455"></a>
<a id="trace-10477"></a>
<a id="trace-10490"></a>
<a id="trace-10504"></a>
<a id="trace-10525"></a>
<a id="trace-10542"></a>
<a id="trace-10559"></a>
<a id="trace-10573"></a>
<a id="trace-10594"></a>
<a id="trace-10611"></a>
<a id="trace-10687"></a>
<a id="trace-10702"></a>
<a id="trace-10720"></a>
<a id="trace-10729"></a>
<a id="trace-10746"></a>
<a id="trace-10752"></a>
- 173.80s–187.80s (×29), actor 5, squad 0 (trace 10092): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.25s, trace 9819. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10112}.
<a id="trace-10765"></a>
- 188.15s–188.15s (×1), actor 0, squad 0 (trace 10765): matching received arrivals: traveling stage complete. Knowledge: actor memory at 185.00s, trace 10616. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10978}.
<a id="trace-10978"></a>
<a id="trace-10997"></a>
<a id="trace-11013"></a>
<a id="trace-11032"></a>
<a id="trace-11117"></a>
<a id="trace-11131"></a>
<a id="trace-11156"></a>
<a id="trace-11168"></a>
<a id="trace-11186"></a>
<a id="trace-11205"></a>
<a id="trace-11220"></a>
<a id="trace-11231"></a>
<a id="trace-11255"></a>
<a id="trace-11269"></a>
<a id="trace-11352"></a>
<a id="trace-11363"></a>
<a id="trace-11382"></a>
<a id="trace-11403"></a>
<a id="trace-11420"></a>
<a id="trace-11438"></a>
<a id="trace-11461"></a>
<a id="trace-11471"></a>
<a id="trace-11485"></a>
<a id="trace-11494"></a>
<a id="trace-11577"></a>
<a id="trace-11595"></a>
<a id="trace-11609"></a>
<a id="trace-11618"></a>
- 188.30s–201.80s (×28), actor 5, squad 0 (trace 10978): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 10619. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10497950590444839, 'next_transition': 10997}.
<a id="trace-11623"></a>
- 202.00s–202.00s (×1), actor 0, squad 0 (trace 11623): matching received arrivals: deployment leg complete. Knowledge: actor memory at 200.00s, trace 11504. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21869071548087884, 'next_transition': 11643}.
<a id="trace-11643"></a>
<a id="trace-11651"></a>
<a id="trace-11665"></a>
<a id="trace-11677"></a>
<a id="trace-11691"></a>
<a id="trace-11707"></a>
<a id="trace-11786"></a>
<a id="trace-11793"></a>
- 202.30s–205.80s (×8), actor 5, squad 0 (trace 11643): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 11507. Next observer evidence: {'until': 202.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0760999999999991, 'next_transition': 11651}.
<a id="trace-1653"></a>
- 206.05s–206.05s (×1), actor 5, squad 0 (events line 1653): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11812}.
<a id="trace-11797"></a>
- 206.05s–206.05s (×1), actor 5, squad 0 (trace 11797): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 206.05s, trace 11797. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11812}.
<a id="trace-11798"></a>
- 206.05s–206.05s (×1), actor 5, squad 0 (trace 11798): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 206.05s, trace 11798. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11812}.
<a id="trace-11812"></a>
<a id="trace-11822"></a>
<a id="trace-11833"></a>
- 206.30s–207.30s (×3), actor 5, squad 0 (trace 11812): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.05s, trace 11798. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11822}.
<a id="trace-11839"></a>
- 207.75s–207.75s (×1), actor 0, squad 0 (trace 11839): Reorganise: completed/failed drill. Knowledge: actor memory at 205.00s, trace 11711. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12056}.
<a id="trace-11844"></a>
- 207.75s–207.75s (×1), actor 0, squad 0 (trace 11844): MoveTactically. Knowledge: actor memory at 205.00s, trace 11711. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12056}.
<a id="trace-11845"></a>
- 207.75s–207.75s (×1), actor 0, squad 0 (trace 11845): Reorganise complete. Knowledge: actor memory at 205.00s, trace 11711. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12056}.
<a id="trace-12056"></a>
<a id="trace-12069"></a>
<a id="trace-12085"></a>
<a id="trace-12102"></a>
<a id="trace-12195"></a>
<a id="trace-12215"></a>
<a id="trace-12228"></a>
<a id="trace-12242"></a>
<a id="trace-12266"></a>
<a id="trace-12285"></a>
<a id="trace-12300"></a>
<a id="trace-12314"></a>
<a id="trace-12338"></a>
<a id="trace-12349"></a>
<a id="trace-12426"></a>
<a id="trace-12444"></a>
<a id="trace-12461"></a>
<a id="trace-12480"></a>
<a id="trace-12497"></a>
<a id="trace-12510"></a>
<a id="trace-12530"></a>
<a id="trace-12544"></a>
<a id="trace-12563"></a>
<a id="trace-12578"></a>
<a id="trace-12663"></a>
<a id="trace-12679"></a>
<a id="trace-12695"></a>
<a id="trace-12705"></a>
<a id="trace-12721"></a>
<a id="trace-12734"></a>
<a id="trace-12746"></a>
<a id="trace-12755"></a>
- 207.80s–223.80s (×32), actor 5, squad 0 (trace 12056): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 206.05s, trace 11798. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12069}.
<a id="trace-12772"></a>
- 224.15s–224.15s (×1), actor 0, squad 0 (trace 12772): traveling overwatch. Knowledge: actor memory at 220.00s, trace 12582. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12807}.
<a id="trace-12773"></a>
- 224.15s–224.15s (×1), actor 0, squad 0 (trace 12773): matching received arrivals: traveling stage complete. Knowledge: actor memory at 220.00s, trace 12582. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12807}.
<a id="trace-12807"></a>
- 224.30s–224.30s (×1), actor 5, squad 0 (trace 12807): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 12585. Next observer evidence: {'until': 224.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12814}.
<a id="trace-12814"></a>
- 224.60s–224.60s (×1), actor 0, squad 0 (trace 12814): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.00s, trace 12582. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10501010533382882, 'next_transition': 12963}.
<a id="trace-12963"></a>
<a id="trace-13045"></a>
<a id="trace-13074"></a>
<a id="trace-13101"></a>
<a id="trace-13116"></a>
<a id="trace-13153"></a>
<a id="trace-13168"></a>
<a id="trace-13184"></a>
<a id="trace-13200"></a>
<a id="trace-13212"></a>
<a id="trace-13221"></a>
<a id="trace-13305"></a>
<a id="trace-13322"></a>
<a id="trace-13337"></a>
<a id="trace-13347"></a>
<a id="trace-13369"></a>
<a id="trace-13385"></a>
<a id="trace-13401"></a>
<a id="trace-13417"></a>
<a id="trace-13439"></a>
<a id="trace-13449"></a>
- 224.80s–234.80s (×21), actor 5, squad 0 (trace 12963): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 12585. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000741924664003, 'next_transition': 13045}.
<a id="trace-13467"></a>
- 235.00s–235.00s (×1), actor 0, squad 0 (trace 13467): ReactToContact: cover and return fire. Knowledge: actor memory at 235.00s, trace 13454. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21529623405862722, 'next_transition': 13681}.
<a id="trace-13468"></a>
- 235.00s–235.00s (×1), actor 0, squad 0 (trace 13468): bounding overwatch. Knowledge: actor memory at 235.00s, trace 13454. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21529623405862722, 'next_transition': 13681}.
<a id="trace-13469"></a>
- 235.00s–235.00s (×1), actor 0, squad 0 (trace 13469): new contact inside 100 m. Knowledge: actor memory at 235.00s, trace 13454. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21529623405862722, 'next_transition': 13681}.
<a id="trace-13681"></a>
- 235.30s–235.30s (×1), actor 5, squad 0 (trace 13681): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 13457. Next observer evidence: {'until': 235.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44036828182541465, 'next_transition': 13688}.
<a id="trace-13688"></a>
- 235.65s–235.65s (×1), actor 0, squad 0 (trace 13688): new contact inside 100 m. Knowledge: actor memory at 235.00s, trace 13454. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17120918725321901, 'next_transition': 13849}.
<a id="trace-13849"></a>
<a id="trace-13880"></a>
<a id="trace-13903"></a>
<a id="trace-13923"></a>
<a id="trace-13939"></a>
<a id="trace-13962"></a>
- 235.80s–238.30s (×6), actor 5, squad 0 (trace 13849): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 13457. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.15526777086343221, 'next_transition': 13880}.
<a id="trace-1963"></a>
- 238.45s–238.45s (×1), actor 5, squad 0 (events line 1963): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31992744846320165, 'next_transition': 13982}.
<a id="trace-13974"></a>
- 238.45s–238.45s (×1), actor 5, squad 0 (trace 13974): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.577034 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 238.45s, trace 13974. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31992744846320165, 'next_transition': 13982}.
<a id="trace-13975"></a>
- 238.45s–238.45s (×1), actor 5, squad 0 (trace 13975): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.577034 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 238.45s, trace 13975. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31992744846320165, 'next_transition': 13982}.
<a id="trace-13982"></a>
- 238.80s–238.80s (×1), actor 5, squad 0 (trace 13982): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 238.45s, trace 13975. Next observer evidence: {'until': 239, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11190104670977652, 'next_transition': 13993}.
<a id="trace-13993"></a>
- 239.10s–239.10s (×1), actor 5, squad 0 (trace 13993): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 239.10s, trace 13993. Next observer evidence: None.
<a id="trace-13994"></a>
- 239.15s–239.15s (×1), actor 0, squad 0 (trace 13994): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 235.00s, trace 13454. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05342129197239607, 'next_transition': 14179}.
<a id="trace-13995"></a>
- 239.15s–239.15s (×1), actor 0, squad 0 (trace 13995): rearward bound: one stationary suppressing element. Knowledge: actor memory at 235.00s, trace 13454. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05342129197239607, 'next_transition': 14179}.
<a id="trace-14179"></a>
<a id="trace-14187"></a>
<a id="trace-14257"></a>
<a id="trace-14271"></a>
<a id="trace-14280"></a>
<a id="trace-14284"></a>
<a id="trace-14296"></a>
- 239.30s–242.30s (×7), actor 5, squad 0 (trace 14179): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 239.10s, trace 13993. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.02716546513498353, 'next_transition': 14187}.
<a id="trace-14299"></a>
- 242.35s–242.35s (×1), actor 1, squad 0 (trace 14299): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 240.00s, trace 14189. Next observer evidence: {'until': 242.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299740252581859, 'next_transition': 14306}.
<a id="trace-14300"></a>
- 242.35s–242.35s (×1), actor 1, squad 0 (trace 14300): NeedSupport. Knowledge: actor memory at 240.00s, trace 14189. Next observer evidence: {'until': 242.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299740252581859, 'next_transition': 14306}.
<a id="trace-14306"></a>
- 242.65s–242.65s (×1), actor 1, squad 0 (trace 14306): Reorganise: completed/failed drill. Knowledge: actor memory at 240.00s, trace 14189. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150130036998469, 'next_transition': 14380}.
<a id="trace-14309"></a>
- 242.65s–242.65s (×1), actor 1, squad 0 (trace 14309): MoveTactically. Knowledge: actor memory at 240.00s, trace 14189. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150130036998469, 'next_transition': 14380}.
<a id="trace-14310"></a>
- 242.65s–242.65s (×1), actor 1, squad 0 (trace 14310): traveling overwatch. Knowledge: actor memory at 240.00s, trace 14189. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150130036998469, 'next_transition': 14380}.
<a id="trace-14311"></a>
- 242.65s–242.65s (×1), actor 1, squad 0 (trace 14311): Reorganise complete. Knowledge: actor memory at 240.00s, trace 14189. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150130036998469, 'next_transition': 14380}.
<a id="trace-14380"></a>
<a id="trace-14385"></a>
<a id="trace-14398"></a>
<a id="trace-14416"></a>
<a id="trace-14429"></a>
<a id="trace-14503"></a>
<a id="trace-14511"></a>
- 242.80s–245.80s (×7), actor 5, squad 0 (trace 14380): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 14191. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300240154152849, 'next_transition': 14385}.
<a id="trace-14521"></a>
- 246.20s–246.20s (×1), actor 1, squad 0 (trace 14521): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 14436. Next observer evidence: None.
<a id="trace-14568"></a>
<a id="trace-14574"></a>
<a id="trace-14587"></a>
<a id="trace-14600"></a>
<a id="trace-14613"></a>
<a id="trace-14629"></a>
<a id="trace-14642"></a>
<a id="trace-14653"></a>
<a id="trace-14731"></a>
<a id="trace-14744"></a>
<a id="trace-14759"></a>
<a id="trace-14773"></a>
<a id="trace-14792"></a>
- 246.30s–252.30s (×13), actor 5, squad 0 (trace 14568): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 14438. Next observer evidence: {'until': 246.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18852659295176397, 'next_transition': 14574}.
<a id="trace-14796"></a>
- 252.40s–252.40s (×1), actor 1, squad 0 (trace 14796): ReactToContact: cover and return fire. Knowledge: actor memory at 250.00s, trace 14658. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5347692953190918, 'next_transition': 14897}.
<a id="trace-14797"></a>
- 252.40s–252.40s (×1), actor 1, squad 0 (trace 14797): bounding overwatch. Knowledge: actor memory at 250.00s, trace 14658. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5347692953190918, 'next_transition': 14897}.
<a id="trace-14798"></a>
- 252.40s–252.40s (×1), actor 1, squad 0 (trace 14798): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 250.00s, trace 14658. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5347692953190918, 'next_transition': 14897}.
<a id="trace-14897"></a>
<a id="trace-14914"></a>
<a id="trace-14926"></a>
<a id="trace-14944"></a>
<a id="trace-14960"></a>
<a id="trace-15038"></a>
<a id="trace-15045"></a>
- 252.80s–255.80s (×7), actor 5, squad 0 (trace 14897): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 14660. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0686668867448514, 'next_transition': 14914}.
<a id="trace-15052"></a>
- 256.15s–256.15s (×1), actor 1, squad 0 (trace 15052): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 255.00s, trace 14965. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574973729939646, 'next_transition': 15176}.
<a id="trace-15053"></a>
- 256.15s–256.15s (×1), actor 1, squad 0 (trace 15053): rearward bound: one stationary suppressing element. Knowledge: actor memory at 255.00s, trace 14965. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574973729939646, 'next_transition': 15176}.
<a id="trace-15176"></a>
<a id="trace-15185"></a>
<a id="trace-15202"></a>
<a id="trace-15207"></a>
<a id="trace-15224"></a>
<a id="trace-15236"></a>
<a id="trace-15246"></a>
<a id="trace-15253"></a>
<a id="trace-15329"></a>
<a id="trace-15337"></a>
<a id="trace-15349"></a>
<a id="trace-15359"></a>
<a id="trace-15370"></a>
<a id="trace-15375"></a>
<a id="trace-15386"></a>
<a id="trace-15391"></a>
<a id="trace-15402"></a>
<a id="trace-15411"></a>
<a id="trace-15484"></a>
<a id="trace-15492"></a>
<a id="trace-15505"></a>
<a id="trace-15512"></a>
<a id="trace-15531"></a>
<a id="trace-15537"></a>
- 256.30s–267.80s (×24), actor 5, squad 0 (trace 15176): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 14967. Next observer evidence: {'until': 256.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512714605122165, 'next_transition': 15185}.
<a id="trace-15540"></a>
- 268.15s–268.15s (×1), actor 1, squad 0 (trace 15540): NeedSupport. Knowledge: actor memory at 265.00s, trace 15420. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15553}.
<a id="trace-15553"></a>
- 268.30s–268.30s (×1), actor 5, squad 0 (trace 15553): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 15422. Next observer evidence: {'until': 268.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15561}.
<a id="trace-15561"></a>
- 268.65s–268.65s (×1), actor 1, squad 0 (trace 15561): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 265.00s, trace 15420. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875792023663483, 'next_transition': 15619}.
<a id="trace-15562"></a>
- 268.65s–268.65s (×1), actor 1, squad 0 (trace 15562): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 265.00s, trace 15420. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875792023663483, 'next_transition': 15619}.
<a id="trace-15619"></a>
<a id="trace-15632"></a>
<a id="trace-15647"></a>
<a id="trace-15725"></a>
<a id="trace-15732"></a>
<a id="trace-15747"></a>
<a id="trace-15754"></a>
<a id="trace-15766"></a>
<a id="trace-15771"></a>
<a id="trace-15783"></a>
<a id="trace-15791"></a>
<a id="trace-15803"></a>
<a id="trace-15810"></a>
<a id="trace-15885"></a>
<a id="trace-15890"></a>
<a id="trace-15903"></a>
<a id="trace-15910"></a>
<a id="trace-15921"></a>
<a id="trace-15925"></a>
<a id="trace-15937"></a>
<a id="trace-15942"></a>
<a id="trace-15954"></a>
<a id="trace-15963"></a>
<a id="trace-16038"></a>
<a id="trace-16047"></a>
- 268.80s–280.80s (×25), actor 5, squad 0 (trace 15619): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 15422. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300105018965951, 'next_transition': 15632}.
<a id="trace-16056"></a>
- 281.05s–281.05s (×1), actor 1, squad 0 (trace 16056): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 280.00s, trace 15967. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150104958568869, 'next_transition': 16116}.
<a id="trace-16057"></a>
- 281.05s–281.05s (×1), actor 1, squad 0 (trace 16057): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 280.00s, trace 15967. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150104958568869, 'next_transition': 16116}.
<a id="trace-16058"></a>
- 281.05s–281.05s (×1), actor 1, squad 0 (trace 16058): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 280.00s, trace 15967. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150104958568869, 'next_transition': 16116}.
<a id="trace-16116"></a>
<a id="trace-16126"></a>
<a id="trace-16143"></a>
<a id="trace-16153"></a>
<a id="trace-16165"></a>
<a id="trace-16173"></a>
<a id="trace-16189"></a>
<a id="trace-16197"></a>
<a id="trace-16274"></a>
<a id="trace-16282"></a>
<a id="trace-16299"></a>
<a id="trace-16305"></a>
<a id="trace-16319"></a>
<a id="trace-16324"></a>
<a id="trace-16337"></a>
<a id="trace-16345"></a>
<a id="trace-16359"></a>
<a id="trace-16366"></a>
<a id="trace-16443"></a>
<a id="trace-16451"></a>
<a id="trace-16464"></a>
<a id="trace-16472"></a>
<a id="trace-16488"></a>
<a id="trace-16496"></a>
- 281.30s–292.80s (×24), actor 5, squad 0 (trace 16116): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 15969. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9843504344664014, 'next_transition': 16126}.
<a id="trace-16509"></a>
- 293.10s–293.10s (×1), actor 1, squad 0 (trace 16509): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 290.00s, trace 16372. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314993622951321, 'next_transition': 16570}.
<a id="trace-16510"></a>
- 293.10s–293.10s (×1), actor 1, squad 0 (trace 16510): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 290.00s, trace 16372. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314993622951321, 'next_transition': 16570}.
<a id="trace-16570"></a>
<a id="trace-16575"></a>
<a id="trace-16596"></a>
<a id="trace-16606"></a>
<a id="trace-16680"></a>
<a id="trace-16690"></a>
<a id="trace-16704"></a>
<a id="trace-16712"></a>
- 293.30s–296.80s (×8), actor 5, squad 0 (trace 16570): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 16374. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449808688539678, 'next_transition': 16575}.
<a id="trace-16714"></a>
- 296.80s–296.80s (×1), actor 1, squad 0 (trace 16714): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 295.00s, trace 16611. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450314875706534, 'next_transition': 16729}.
<a id="trace-16729"></a>
<a id="trace-16744"></a>
<a id="trace-16762"></a>
<a id="trace-16767"></a>
- 297.30s–298.80s (×4), actor 5, squad 0 (trace 16729): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 16613. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237649161203062, 'next_transition': 16744}.
<a id="trace-2325"></a>
- 299.05s–299.05s (×1), actor 5, squad 0 (events line 2325): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16776"></a>
- 299.05s–299.05s (×1), actor 5, squad 0 (trace 16776): renew committed intent (75 s lifetime). Knowledge: actor memory at 299.05s, trace 16776. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748176481738965, 'next_transition': 16782}.
<a id="trace-16782"></a>
<a id="trace-16801"></a>
- 299.30s–299.80s (×2), actor 5, squad 0 (trace 16782): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 299.05s, trace 16776. Next observer evidence: {'until': 299.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725157437853255, 'next_transition': 16801}.
<a id="trace-2338"></a>
- 300.30s–300.30s (×1), actor 5, squad 0 (events line 2338): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16873"></a>
- 300.30s–300.30s (×1), actor 5, squad 0 (trace 16873): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 16808. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16884}.
<a id="trace-16876"></a>
- 300.30s–300.30s (×1), actor 5, squad 0 (trace 16876): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.266536 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 300.30s, trace 16876. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16884}.
<a id="trace-16877"></a>
- 300.30s–300.30s (×1), actor 5, squad 0 (trace 16877): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.266536 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 300.30s, trace 16877. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16884}.
<a id="trace-16884"></a>
<a id="trace-16894"></a>
- 300.80s–301.30s (×2), actor 5, squad 0 (trace 16884): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.30s, trace 16877. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16894}.
<a id="trace-16900"></a>
- 301.45s–301.45s (×1), actor 1, squad 0 (trace 16900): MoveTactically. Knowledge: actor memory at 300.00s, trace 16806. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16909}.
<a id="trace-16901"></a>
- 301.45s–301.45s (×1), actor 1, squad 0 (trace 16901): received platoon directive. Knowledge: actor memory at 300.00s, trace 16806. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16909}.
<a id="trace-16909"></a>
<a id="trace-16923"></a>
- 301.80s–302.30s (×2), actor 5, squad 0 (trace 16909): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.30s, trace 16877. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16923}.
<a id="trace-16927"></a>
- 302.45s–302.45s (×1), actor 1, squad 0 (trace 16927): Withdraw to received rally. Knowledge: actor memory at 300.00s, trace 16806. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16988}.
<a id="trace-16928"></a>
- 302.45s–302.45s (×1), actor 1, squad 0 (trace 16928): rearward bound: one stationary suppressing element. Knowledge: actor memory at 300.00s, trace 16806. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16988}.
<a id="trace-16988"></a>
<a id="trace-17002"></a>
<a id="trace-17014"></a>
<a id="trace-17029"></a>
<a id="trace-17043"></a>
<a id="trace-17119"></a>
<a id="trace-17128"></a>
<a id="trace-17144"></a>
<a id="trace-17151"></a>
<a id="trace-17159"></a>
<a id="trace-17164"></a>
<a id="trace-17173"></a>
<a id="trace-17179"></a>
<a id="trace-17188"></a>
<a id="trace-17195"></a>
<a id="trace-17265"></a>
<a id="trace-17271"></a>
<a id="trace-17280"></a>
<a id="trace-17287"></a>
<a id="trace-17295"></a>
<a id="trace-17303"></a>
<a id="trace-17316"></a>
<a id="trace-17322"></a>
<a id="trace-17332"></a>
<a id="trace-17338"></a>
<a id="trace-17410"></a>
<a id="trace-17416"></a>
<a id="trace-17424"></a>
<a id="trace-17429"></a>
<a id="trace-17438"></a>
<a id="trace-17444"></a>
<a id="trace-17453"></a>
<a id="trace-17460"></a>
<a id="trace-17470"></a>
<a id="trace-17477"></a>
<a id="trace-17549"></a>
<a id="trace-17559"></a>
<a id="trace-17570"></a>
<a id="trace-17574"></a>
<a id="trace-17581"></a>
<a id="trace-17586"></a>
<a id="trace-17596"></a>
<a id="trace-17603"></a>
<a id="trace-17610"></a>
<a id="trace-17617"></a>
<a id="trace-17688"></a>
<a id="trace-17694"></a>
<a id="trace-17705"></a>
<a id="trace-17710"></a>
<a id="trace-17720"></a>
<a id="trace-17729"></a>
<a id="trace-17741"></a>
<a id="trace-17747"></a>
<a id="trace-17754"></a>
<a id="trace-17762"></a>
<a id="trace-17832"></a>
<a id="trace-17839"></a>
<a id="trace-17848"></a>
<a id="trace-17852"></a>
<a id="trace-17859"></a>
<a id="trace-17863"></a>
<a id="trace-17876"></a>
<a id="trace-17882"></a>
<a id="trace-17892"></a>
<a id="trace-17901"></a>
<a id="trace-17978"></a>
<a id="trace-17985"></a>
<a id="trace-17992"></a>
<a id="trace-17998"></a>
<a id="trace-18006"></a>
<a id="trace-18011"></a>
<a id="trace-18019"></a>
<a id="trace-18025"></a>
<a id="trace-18035"></a>
<a id="trace-18042"></a>
<a id="trace-18115"></a>
<a id="trace-18120"></a>
<a id="trace-18129"></a>
<a id="trace-18136"></a>
<a id="trace-18147"></a>
<a id="trace-18155"></a>
<a id="trace-18164"></a>
<a id="trace-18170"></a>
<a id="trace-18179"></a>
<a id="trace-18185"></a>
<a id="trace-18256"></a>
<a id="trace-18261"></a>
<a id="trace-18270"></a>
<a id="trace-18275"></a>
<a id="trace-18283"></a>
<a id="trace-18291"></a>
<a id="trace-18299"></a>
<a id="trace-18306"></a>
<a id="trace-18321"></a>
<a id="trace-18330"></a>
<a id="trace-18403"></a>
<a id="trace-18409"></a>
<a id="trace-18419"></a>
<a id="trace-18424"></a>
<a id="trace-18432"></a>
<a id="trace-18436"></a>
<a id="trace-18445"></a>
<a id="trace-18452"></a>
<a id="trace-18459"></a>
<a id="trace-18469"></a>
<a id="trace-18541"></a>
<a id="trace-18546"></a>
<a id="trace-18557"></a>
<a id="trace-18566"></a>
<a id="trace-18577"></a>
<a id="trace-18582"></a>
<a id="trace-18590"></a>
<a id="trace-18595"></a>
<a id="trace-18603"></a>
<a id="trace-18611"></a>
- 302.80s–359.80s (×115), actor 5, squad 0 (trace 16988): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.30s, trace 16877. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17002}.

## Net delivery

282 matched order/radio deliveries; 249 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.262s; maximum 1.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1700: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1706: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1707: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 1869: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 1870: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.05s leader 5, trace 2164: estimate 7.91; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2238: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2241: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2242: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2244: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2245: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2248: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2249: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2469: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2472: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2473: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2474: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2475: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2476: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2477: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2478: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2479: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2480: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2676: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2679: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2680: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2681: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2682: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2683: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2684: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2685: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2686: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2687: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3001: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3004: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3005: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3006: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3007: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3008: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3009: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3010: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3011: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3012: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3178: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3181: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3182: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3183: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3184: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3185: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3186: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3187: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3188: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3189: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3367: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3370: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3371: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3372: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3373: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3374: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3375: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3376: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3377: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3378: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3771: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3774: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3775: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3776: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3777: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3778: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3779: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3780: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3781: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3782: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3982: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3985: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3986: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3987: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3988: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3989: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3990: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3991: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3992: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3993: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4179: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4182: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4183: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4184: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4185: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4186: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4187: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4188: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4189: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4190: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4510: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4513: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4514: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4515: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4516: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4517: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4518: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4519: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4520: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4521: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4704: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4707: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4708: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4709: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4710: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4711: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4712: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4713: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4714: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4715: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4898: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4901: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4902: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4903: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4904: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4905: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4906: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4907: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4908: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4909: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.45s leader 5, trace 5036: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 5201: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5204: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5205: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5206: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5207: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5208: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5209: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5210: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5211: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5212: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5441: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5444: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5445: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5446: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5447: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5448: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5449: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5450: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5451: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5452: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5795: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5798: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5799: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5800: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5801: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5802: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5803: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5804: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5805: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5806: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.85s leader 5, trace 5977: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.85s leader 5, trace 5978: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 6171: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 6173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6174: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6175: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 6176: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6177: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6178: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6179: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6180: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6181: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6182: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 6419: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6422: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6423: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6424: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6425: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6426: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6427: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6428: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6429: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6430: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 6615: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6618: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6619: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6620: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6621: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6622: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6623: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6624: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6625: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6626: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6830: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6833: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6834: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6835: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6836: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6837: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6838: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6839: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6840: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6841: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 7165: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7168: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7169: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 7170: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7171: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7172: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7173: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7174: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7175: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7176: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 7371: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7374: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7375: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 7376: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7377: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7378: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 7379: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7380: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7381: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7382: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 7575: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7578: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7579: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7580: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7581: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7582: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 7583: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7584: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7585: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7586: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 7872: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7875: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7876: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7877: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7878: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7879: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 7880: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7881: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7882: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7883: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 8109: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 8110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 8111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8112: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8113: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 8114: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 8115: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 8116: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 8117: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8118: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8119: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8120: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 8444: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8447: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8448: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 8449: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8450: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8451: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 8452: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8453: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8454: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8455: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 8646: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8649: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8650: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 8651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8652: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8653: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 8654: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8655: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8656: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 8865: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8868: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8869: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 8870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8871: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8872: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 8873: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8874: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8875: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 156.85s leader 5, trace 8974: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 9136: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 9137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 9138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9139: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9140: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 9141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 9142: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9143: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 9144: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9145: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9146: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 9466: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 9468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9469: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9470: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 9471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9472: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9473: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 9474: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9475: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9476: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 9700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 9702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 9705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 9708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.25s leader 5, trace 9818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.25s leader 5, trace 9819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 10134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 10135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 10136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 10137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 10138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 10139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 10140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 10141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 10142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 10143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 10144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 10145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 10376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 10377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 10378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 10379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 10380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 10381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 10382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 10383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 10384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 10385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 10386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 10387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 10616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 10617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 10618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 10621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 10622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 10624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 10627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 11035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 11036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 11037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 11038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 11039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 11040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 11041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 11042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 11043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 11044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 11045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 11046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 11275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 11276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 11277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 11278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 11279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 11280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 11281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 11283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 11284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 11286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 11504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 11505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 11506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 11507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 11509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 11510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 11512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 11711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 11712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 11713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 11714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 11715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 11716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 11717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 11718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 11719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 11720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 11721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 11722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.05s leader 5, trace 11797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.05s leader 5, trace 11798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 12111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 12112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 12113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 12114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 12115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 12116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 12117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 12118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 12119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 12120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 12121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 12122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 12354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 12355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 12356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 12357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 12358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 12359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 12360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 12361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 12362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 12363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 12364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 12365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 12582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 12583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 12584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 12585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 12587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 12590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 12593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 12970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 12971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 12972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 12975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 12978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 13226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 13227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 13228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 13229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 13230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 13231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 13232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 13233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 13234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 13235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 13236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 13237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 13454: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 13455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 13456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 13457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 13458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 13459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 13460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 13461: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 13462: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 13463: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 13464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 13465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 238.45s leader 5, trace 13974: estimate 5.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 238.45s leader 5, trace 13975: estimate 5.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 239.10s leader 5, trace 13993: estimate 7.40; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 14189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 14190: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 14191: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 14192: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 14193: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 14194: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 14195: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 14196: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 14197: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 14198: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 14436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 14437: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 14438: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 14439: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 14440: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 14441: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 14442: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 14443: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 14444: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 14445: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 14658: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 14659: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 14660: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 14661: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 14662: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 14663: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 14664: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 14665: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 14666: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 14667: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 14965: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 14966: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 14967: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 14968: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 14969: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 14970: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 14971: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 14972: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 14973: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 14974: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 15258: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 15259: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 15260: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 15261: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 15262: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 15263: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 15264: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 15265: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 15266: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 15420: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 15421: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 15422: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 15423: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 15424: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 15425: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 15426: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 15427: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 15428: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 15653: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 15654: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 15655: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 15656: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 15657: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 15658: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 15659: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 15660: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 15661: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 15817: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 15818: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 15819: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 15820: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 15821: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 15822: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 15823: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 15824: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 15825: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 15967: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 15968: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 15969: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 15970: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 15971: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 15972: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 15973: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 15974: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 15975: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 16206: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 16207: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 16208: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 16209: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 16210: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 16211: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 16212: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 16213: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 16214: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 16372: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 16373: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 16374: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 16375: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 16376: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 16377: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 16378: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 16379: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 16380: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 16611: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 16612: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 16613: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 16614: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 16615: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 16616: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 16617: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 16618: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 16619: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 299.05s leader 5, trace 16776: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 16806: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 16807: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 16808: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 16809: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 16810: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 16811: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 16812: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 16813: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 16814: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.30s leader 5, trace 16876: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.30s leader 5, trace 16877: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 17051: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 17052: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 17053: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 17054: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 17055: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 17056: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 17057: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 17058: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 17059: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 17199: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 17200: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 17201: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 17202: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 17203: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 17204: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 17205: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 17206: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 17207: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 17344: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 17345: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 17346: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 17347: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 17348: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 17349: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 17350: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 17351: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 17352: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 17482: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 17483: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 17484: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 17485: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 17486: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 17487: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 17488: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 17489: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 17490: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 17623: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 17624: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 17625: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 17626: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 17627: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 17628: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 17629: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 17630: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 17631: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 17767: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 17768: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 17769: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 17770: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 17771: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 17772: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 17773: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 17774: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 17775: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 17911: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 17912: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 17913: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 17914: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 17915: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 17916: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 17917: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 17918: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 17919: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 18047: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 18048: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 18049: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 18050: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 18051: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 18052: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 18053: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 18054: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 18055: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 18190: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 18191: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 18192: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 18193: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 18194: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 18195: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 18196: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 18197: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 18198: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 18336: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 18337: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 18338: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 18339: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 18340: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 18341: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 18342: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 18343: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 18344: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 18475: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 18476: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 18477: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 18478: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 18479: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 18480: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 18481: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 18482: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 18483: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 18616: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 18617: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 18618: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 18619: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 18620: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 18621: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 18622: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 18623: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 18624: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Reed incapacitated
- 1: Vale killed in action
- 1: Bram incapacitated

## Outcome attribution

- 96.85s, evidence 5977: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.457339 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 96.85s, evidence 5978: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.457339 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 96.85s, evidence 771: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420011524852578, 'next_transition': 6001}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 156.85s, evidence 1246: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 300.30s, evidence 2338: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 300.30s, evidence 16876: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.266536 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16884}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 300.30s, evidence 16877: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.266536 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16884}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
