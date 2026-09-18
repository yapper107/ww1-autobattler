# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/15/107/good-ember/battle-107-1789673964256027357`

## Battle summary

**Ember** · 360 s · 508 shots.

### Turning points

- 23.6s, squad 4: contact (events line 280). First recorded contact.
- 38.3s, squad 0: withdrawal ([trace 8122](#trace-8122)). 91.0s, squad 0: took cover and returned fire.
- 46.5s, squad 1: help call ([trace 9595](#trace-9595)). No completion observed before termination.
- 50.2s, squad 0: help call ([trace 10073](#trace-10073)). No completion observed before termination.
- 90.7s, squad 0: help call ([trace 15824](#trace-15824)). No completion observed before termination.
- 95.2s, squad 0: withdrawal ([trace 16093](#trace-16093)). 116.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 169.6s, squad 0: help call ([trace 23834](#trace-23834)). No completion observed before termination.
- 187.9s, squad 0: withdrawal ([trace 25395](#trace-25395)). 206.9s, squad 0: took cover and returned fire.
- 210.4s, squad 0: withdrawal ([trace 26700](#trace-26700)). 230.5s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 24 shots, 5/8 lost.
- **1** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 10 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 293 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 181 shots, 0/4 lost.

### Decisions and attribution

At 39.9s, squad 1 chose FightHere: nearest known group ([trace 8537](#trace-8537)), followed by 2 shots and 1 own casualties; estimate 14.4 against 0 distinct squad-reported contacts; At 37.3s, squad 1 chose prepared a base of fire ([trace 5535](#trace-5535)), followed by 1 shots and 0 own casualties; estimate 13.7 against 0 distinct squad-reported contacts; At 37.3s, squad 1 chose advanced tactically ([trace 7987](#trace-7987)), followed by 1 shots and 0 own casualties; estimate 13.7 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1429](#trace-1429)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015814238861406663, 'next_transition': 1453}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1431](#trace-1431)). Following evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.595153273799332, 'next_transition': 1844}.

### Communication

289 matched deliveries (mean 0.42s, max 5.40s); 284 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.65s, squad 4, contact, evidence events line 280: First recorded contact; .
- 38.30s, squad 0, withdrawal, evidence 8122: BreakContact: believed ratio at least two without superiority; 91.0s, squad 0: took cover and returned fire.
- 46.45s, squad 1, help call, evidence 9595: NeedSupport; No completion observed before termination.
- 50.15s, squad 0, help call, evidence 10073: NeedSupport; No completion observed before termination.
- 90.70s, squad 0, help call, evidence 15824: NeedSupport; No completion observed before termination.
- 95.20s, squad 0, withdrawal, evidence 16093: BreakContact: believed ratio at least two without superiority; 116.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 169.60s, squad 0, help call, evidence 23834: NeedSupport; No completion observed before termination.
- 187.85s, squad 0, withdrawal, evidence 25395: BreakContact: believed ratio at least two without superiority; 206.9s, squad 0: took cover and returned fire.
- 210.45s, squad 0, withdrawal, evidence 26700: BreakContact: believed ratio at least two without superiority; 230.5s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.948053392552236, 'next_transition': 983}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.948053392552236, 'next_transition': 983}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.948053392552236, 'next_transition': 983}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.812994141133682, 'next_transition': 152}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.812994141133682, 'next_transition': 152}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.812994141133682, 'next_transition': 152}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-768"></a>
<a id="trace-770"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-875"></a>
<a id="trace-877"></a>
<a id="trace-987"></a>
<a id="trace-989"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1058"></a>
<a id="trace-1060"></a>
<a id="trace-1082"></a>
<a id="trace-1084"></a>
<a id="trace-1117"></a>
<a id="trace-1119"></a>
<a id="trace-1152"></a>
<a id="trace-1154"></a>
<a id="trace-1190"></a>
<a id="trace-1192"></a>
<a id="trace-1212"></a>
<a id="trace-1214"></a>
<a id="trace-1232"></a>
<a id="trace-1234"></a>
<a id="trace-1324"></a>
<a id="trace-1326"></a>
<a id="trace-1344"></a>
<a id="trace-1346"></a>
<a id="trace-1366"></a>
<a id="trace-1368"></a>
<a id="trace-1393"></a>
<a id="trace-1395"></a>
<a id="trace-1426"></a>
<a id="trace-1428"></a>
<a id="trace-1457"></a>
<a id="trace-1459"></a>
<a id="trace-1764"></a>
<a id="trace-1766"></a>
<a id="trace-1793"></a>
<a id="trace-1795"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-1981"></a>
<a id="trace-1983"></a>
<a id="trace-2076"></a>
<a id="trace-2078"></a>
<a id="trace-2112"></a>
<a id="trace-2114"></a>
<a id="trace-2152"></a>
<a id="trace-2154"></a>
<a id="trace-2182"></a>
<a id="trace-2184"></a>
<a id="trace-2210"></a>
<a id="trace-2212"></a>
<a id="trace-2229"></a>
<a id="trace-2231"></a>
<a id="trace-2259"></a>
<a id="trace-2261"></a>
<a id="trace-2459"></a>
<a id="trace-2461"></a>
<a id="trace-2488"></a>
<a id="trace-2490"></a>
<a id="trace-2523"></a>
<a id="trace-2525"></a>
<a id="trace-2622"></a>
<a id="trace-2624"></a>
<a id="trace-2664"></a>
<a id="trace-2666"></a>
<a id="trace-2699"></a>
<a id="trace-2701"></a>
<a id="trace-2735"></a>
<a id="trace-2737"></a>
<a id="trace-2770"></a>
<a id="trace-2772"></a>
<a id="trace-2793"></a>
<a id="trace-2795"></a>
<a id="trace-2820"></a>
<a id="trace-2822"></a>
<a id="trace-3352"></a>
<a id="trace-3354"></a>
<a id="trace-3380"></a>
<a id="trace-3382"></a>
<a id="trace-3412"></a>
<a id="trace-3414"></a>
<a id="trace-3503"></a>
<a id="trace-3505"></a>
<a id="trace-3524"></a>
<a id="trace-3526"></a>
<a id="trace-3575"></a>
<a id="trace-3577"></a>
<a id="trace-3825"></a>
<a id="trace-3827"></a>
<a id="trace-3865"></a>
<a id="trace-3867"></a>
<a id="trace-4106"></a>
<a id="trace-4108"></a>
<a id="trace-4146"></a>
<a id="trace-4148"></a>
<a id="trace-4194"></a>
<a id="trace-4196"></a>
<a id="trace-4232"></a>
<a id="trace-4234"></a>
<a id="trace-4267"></a>
<a id="trace-4269"></a>
<a id="trace-4376"></a>
<a id="trace-4378"></a>
<a id="trace-4399"></a>
<a id="trace-4401"></a>
<a id="trace-4429"></a>
<a id="trace-4431"></a>
<a id="trace-4655"></a>
<a id="trace-4657"></a>
<a id="trace-4689"></a>
<a id="trace-4691"></a>
<a id="trace-4726"></a>
<a id="trace-4728"></a>
<a id="trace-4752"></a>
<a id="trace-4754"></a>
<a id="trace-4774"></a>
<a id="trace-4776"></a>
<a id="trace-4804"></a>
<a id="trace-4806"></a>
<a id="trace-5299"></a>
<a id="trace-5301"></a>
<a id="trace-5391"></a>
<a id="trace-5393"></a>
<a id="trace-5421"></a>
<a id="trace-5423"></a>
<a id="trace-5464"></a>
<a id="trace-5466"></a>
<a id="trace-5493"></a>
<a id="trace-5495"></a>
<a id="trace-5528"></a>
<a id="trace-5530"></a>
<a id="trace-8086"></a>
<a id="trace-8088"></a>
<a id="trace-8117"></a>
<a id="trace-8119"></a>
<a id="trace-8455"></a>
<a id="trace-8457"></a>
<a id="trace-8492"></a>
<a id="trace-8494"></a>
<a id="trace-8528"></a>
<a id="trace-8530"></a>
<a id="trace-8637"></a>
<a id="trace-8639"></a>
<a id="trace-8694"></a>
<a id="trace-8696"></a>
<a id="trace-8754"></a>
<a id="trace-8756"></a>
<a id="trace-8813"></a>
<a id="trace-8815"></a>
<a id="trace-8879"></a>
<a id="trace-8881"></a>
<a id="trace-8955"></a>
<a id="trace-8957"></a>
<a id="trace-9020"></a>
<a id="trace-9022"></a>
<a id="trace-9078"></a>
<a id="trace-9080"></a>
<a id="trace-9143"></a>
<a id="trace-9145"></a>
<a id="trace-9199"></a>
<a id="trace-9201"></a>
<a id="trace-9304"></a>
<a id="trace-9306"></a>
<a id="trace-9331"></a>
<a id="trace-9333"></a>
<a id="trace-9576"></a>
<a id="trace-9578"></a>
<a id="trace-9627"></a>
<a id="trace-9629"></a>
<a id="trace-9688"></a>
<a id="trace-9690"></a>
<a id="trace-9734"></a>
<a id="trace-9736"></a>
<a id="trace-9811"></a>
<a id="trace-9813"></a>
<a id="trace-9867"></a>
<a id="trace-9869"></a>
<a id="trace-9910"></a>
<a id="trace-9912"></a>
<a id="trace-9968"></a>
<a id="trace-9970"></a>
<a id="trace-10093"></a>
<a id="trace-10095"></a>
<a id="trace-10140"></a>
<a id="trace-10142"></a>
<a id="trace-10216"></a>
<a id="trace-10218"></a>
<a id="trace-10289"></a>
<a id="trace-10291"></a>
<a id="trace-10501"></a>
<a id="trace-10503"></a>
<a id="trace-12673"></a>
<a id="trace-12675"></a>
<a id="trace-12736"></a>
<a id="trace-12738"></a>
<a id="trace-12806"></a>
<a id="trace-12808"></a>
<a id="trace-12857"></a>
<a id="trace-12859"></a>
<a id="trace-12906"></a>
<a id="trace-12908"></a>
<a id="trace-13016"></a>
<a id="trace-13018"></a>
<a id="trace-13126"></a>
<a id="trace-13128"></a>
<a id="trace-13159"></a>
<a id="trace-13161"></a>
<a id="trace-13191"></a>
<a id="trace-13193"></a>
<a id="trace-13214"></a>
<a id="trace-13216"></a>
<a id="trace-13235"></a>
<a id="trace-13237"></a>
<a id="trace-13261"></a>
<a id="trace-13263"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13505"></a>
<a id="trace-13507"></a>
<a id="trace-13538"></a>
<a id="trace-13540"></a>
<a id="trace-13627"></a>
<a id="trace-13629"></a>
<a id="trace-13657"></a>
<a id="trace-13659"></a>
<a id="trace-13688"></a>
<a id="trace-13690"></a>
<a id="trace-13713"></a>
<a id="trace-13715"></a>
<a id="trace-13740"></a>
<a id="trace-13742"></a>
<a id="trace-13762"></a>
<a id="trace-13764"></a>
<a id="trace-13784"></a>
<a id="trace-13786"></a>
<a id="trace-13800"></a>
<a id="trace-13802"></a>
<a id="trace-13824"></a>
<a id="trace-13826"></a>
<a id="trace-13841"></a>
<a id="trace-13843"></a>
<a id="trace-13924"></a>
<a id="trace-13926"></a>
<a id="trace-13937"></a>
<a id="trace-13939"></a>
<a id="trace-13964"></a>
<a id="trace-13966"></a>
<a id="trace-13980"></a>
<a id="trace-13982"></a>
<a id="trace-13996"></a>
<a id="trace-13998"></a>
<a id="trace-14015"></a>
<a id="trace-14017"></a>
<a id="trace-14038"></a>
<a id="trace-14040"></a>
<a id="trace-14230"></a>
<a id="trace-14232"></a>
<a id="trace-14251"></a>
<a id="trace-14253"></a>
<a id="trace-14287"></a>
<a id="trace-14289"></a>
<a id="trace-14388"></a>
<a id="trace-14390"></a>
<a id="trace-14423"></a>
<a id="trace-14425"></a>
<a id="trace-14473"></a>
<a id="trace-14475"></a>
<a id="trace-14511"></a>
<a id="trace-14513"></a>
<a id="trace-14551"></a>
<a id="trace-14553"></a>
<a id="trace-14582"></a>
<a id="trace-14584"></a>
<a id="trace-14606"></a>
<a id="trace-14608"></a>
<a id="trace-14618"></a>
<a id="trace-14620"></a>
<a id="trace-14641"></a>
<a id="trace-14643"></a>
<a id="trace-14663"></a>
<a id="trace-14665"></a>
<a id="trace-14741"></a>
<a id="trace-14743"></a>
<a id="trace-14752"></a>
<a id="trace-14754"></a>
<a id="trace-14775"></a>
<a id="trace-14777"></a>
<a id="trace-14791"></a>
<a id="trace-14793"></a>
<a id="trace-14809"></a>
<a id="trace-14811"></a>
<a id="trace-14826"></a>
<a id="trace-14828"></a>
<a id="trace-14846"></a>
<a id="trace-14848"></a>
<a id="trace-14857"></a>
<a id="trace-14859"></a>
<a id="trace-14878"></a>
<a id="trace-14880"></a>
<a id="trace-14892"></a>
<a id="trace-14894"></a>
<a id="trace-14973"></a>
<a id="trace-14975"></a>
<a id="trace-15116"></a>
<a id="trace-15118"></a>
<a id="trace-15134"></a>
<a id="trace-15136"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15186"></a>
<a id="trace-15188"></a>
<a id="trace-15196"></a>
<a id="trace-15198"></a>
<a id="trace-15223"></a>
<a id="trace-15225"></a>
<a id="trace-15235"></a>
<a id="trace-15237"></a>
<a id="trace-15252"></a>
<a id="trace-15254"></a>
<a id="trace-15269"></a>
<a id="trace-15271"></a>
<a id="trace-15350"></a>
<a id="trace-15352"></a>
<a id="trace-15363"></a>
<a id="trace-15365"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15399"></a>
<a id="trace-15401"></a>
<a id="trace-15416"></a>
<a id="trace-15418"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15446"></a>
<a id="trace-15448"></a>
<a id="trace-15461"></a>
<a id="trace-15463"></a>
<a id="trace-15693"></a>
<a id="trace-15695"></a>
<a id="trace-15710"></a>
<a id="trace-15712"></a>
<a id="trace-15800"></a>
<a id="trace-15802"></a>
<a id="trace-15830"></a>
<a id="trace-15832"></a>
<a id="trace-15887"></a>
<a id="trace-15889"></a>
<a id="trace-15910"></a>
<a id="trace-15912"></a>
<a id="trace-15946"></a>
<a id="trace-15948"></a>
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-15980"></a>
<a id="trace-15982"></a>
<a id="trace-15998"></a>
<a id="trace-16000"></a>
<a id="trace-16014"></a>
<a id="trace-16016"></a>
<a id="trace-16026"></a>
<a id="trace-16028"></a>
<a id="trace-16156"></a>
<a id="trace-16158"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16198"></a>
<a id="trace-16200"></a>
<a id="trace-16222"></a>
<a id="trace-16224"></a>
<a id="trace-16243"></a>
<a id="trace-16245"></a>
<a id="trace-16255"></a>
<a id="trace-16257"></a>
<a id="trace-16283"></a>
<a id="trace-16285"></a>
<a id="trace-16294"></a>
<a id="trace-16296"></a>
<a id="trace-16307"></a>
<a id="trace-16309"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16409"></a>
<a id="trace-16411"></a>
<a id="trace-16430"></a>
<a id="trace-16432"></a>
<a id="trace-16447"></a>
<a id="trace-16449"></a>
<a id="trace-16468"></a>
<a id="trace-16470"></a>
<a id="trace-16478"></a>
<a id="trace-16480"></a>
<a id="trace-16492"></a>
<a id="trace-16494"></a>
<a id="trace-16500"></a>
<a id="trace-16502"></a>
<a id="trace-16517"></a>
<a id="trace-16519"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
<a id="trace-16606"></a>
<a id="trace-16608"></a>
<a id="trace-16620"></a>
<a id="trace-16622"></a>
<a id="trace-16642"></a>
<a id="trace-16644"></a>
<a id="trace-16656"></a>
<a id="trace-16658"></a>
<a id="trace-16669"></a>
<a id="trace-16671"></a>
<a id="trace-16839"></a>
<a id="trace-16841"></a>
<a id="trace-16858"></a>
<a id="trace-16860"></a>
<a id="trace-16878"></a>
<a id="trace-16880"></a>
<a id="trace-16913"></a>
<a id="trace-16915"></a>
<a id="trace-16923"></a>
<a id="trace-16925"></a>
<a id="trace-17004"></a>
<a id="trace-17006"></a>
<a id="trace-17021"></a>
<a id="trace-17023"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17046"></a>
<a id="trace-17048"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
<a id="trace-17080"></a>
<a id="trace-17082"></a>
<a id="trace-17111"></a>
<a id="trace-17113"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17149"></a>
<a id="trace-17151"></a>
<a id="trace-17162"></a>
<a id="trace-17164"></a>
<a id="trace-17238"></a>
<a id="trace-17240"></a>
<a id="trace-17248"></a>
<a id="trace-17250"></a>
<a id="trace-17266"></a>
<a id="trace-17268"></a>
<a id="trace-17278"></a>
<a id="trace-17280"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17319"></a>
<a id="trace-17321"></a>
<a id="trace-17520"></a>
<a id="trace-17522"></a>
<a id="trace-17536"></a>
<a id="trace-17538"></a>
<a id="trace-17572"></a>
<a id="trace-17574"></a>
<a id="trace-17614"></a>
<a id="trace-17616"></a>
<a id="trace-17695"></a>
<a id="trace-17697"></a>
<a id="trace-17722"></a>
<a id="trace-17724"></a>
<a id="trace-17751"></a>
<a id="trace-17753"></a>
<a id="trace-17765"></a>
<a id="trace-17767"></a>
<a id="trace-17787"></a>
<a id="trace-17789"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17811"></a>
<a id="trace-17813"></a>
<a id="trace-17823"></a>
<a id="trace-17825"></a>
<a id="trace-17842"></a>
<a id="trace-17844"></a>
<a id="trace-17861"></a>
<a id="trace-17863"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17956"></a>
<a id="trace-17958"></a>
<a id="trace-17983"></a>
<a id="trace-17985"></a>
<a id="trace-18000"></a>
<a id="trace-18002"></a>
<a id="trace-18024"></a>
<a id="trace-18026"></a>
<a id="trace-18036"></a>
<a id="trace-18038"></a>
<a id="trace-18059"></a>
<a id="trace-18061"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18096"></a>
<a id="trace-18098"></a>
<a id="trace-18114"></a>
<a id="trace-18116"></a>
<a id="trace-18190"></a>
<a id="trace-18192"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18219"></a>
<a id="trace-18221"></a>
<a id="trace-18236"></a>
<a id="trace-18238"></a>
<a id="trace-18256"></a>
<a id="trace-18258"></a>
<a id="trace-18283"></a>
<a id="trace-18285"></a>
<a id="trace-18302"></a>
<a id="trace-18304"></a>
<a id="trace-18315"></a>
<a id="trace-18317"></a>
<a id="trace-18336"></a>
<a id="trace-18338"></a>
<a id="trace-18354"></a>
<a id="trace-18356"></a>
<a id="trace-18433"></a>
<a id="trace-18435"></a>
<a id="trace-18444"></a>
<a id="trace-18446"></a>
<a id="trace-18460"></a>
<a id="trace-18462"></a>
<a id="trace-18478"></a>
<a id="trace-18480"></a>
<a id="trace-18490"></a>
<a id="trace-18492"></a>
<a id="trace-18506"></a>
<a id="trace-18508"></a>
<a id="trace-18524"></a>
<a id="trace-18526"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18664"></a>
<a id="trace-18666"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18789"></a>
<a id="trace-18791"></a>
<a id="trace-18811"></a>
<a id="trace-18813"></a>
<a id="trace-18833"></a>
<a id="trace-18835"></a>
<a id="trace-18853"></a>
<a id="trace-18855"></a>
<a id="trace-18863"></a>
<a id="trace-18865"></a>
<a id="trace-18877"></a>
<a id="trace-18879"></a>
<a id="trace-18888"></a>
<a id="trace-18890"></a>
<a id="trace-18910"></a>
<a id="trace-18912"></a>
<a id="trace-18927"></a>
<a id="trace-18929"></a>
<a id="trace-19008"></a>
<a id="trace-19010"></a>
<a id="trace-19020"></a>
<a id="trace-19022"></a>
<a id="trace-19053"></a>
<a id="trace-19055"></a>
<a id="trace-19069"></a>
<a id="trace-19071"></a>
<a id="trace-19087"></a>
<a id="trace-19089"></a>
<a id="trace-19105"></a>
<a id="trace-19107"></a>
<a id="trace-19123"></a>
<a id="trace-19125"></a>
<a id="trace-19140"></a>
<a id="trace-19142"></a>
<a id="trace-19152"></a>
<a id="trace-19154"></a>
<a id="trace-19164"></a>
<a id="trace-19166"></a>
<a id="trace-19242"></a>
<a id="trace-19244"></a>
<a id="trace-19306"></a>
<a id="trace-19308"></a>
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19584"></a>
<a id="trace-19586"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19660"></a>
<a id="trace-19662"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19979"></a>
<a id="trace-19981"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20105"></a>
<a id="trace-20107"></a>
<a id="trace-20126"></a>
<a id="trace-20128"></a>
<a id="trace-20155"></a>
<a id="trace-20157"></a>
<a id="trace-20178"></a>
<a id="trace-20180"></a>
<a id="trace-20192"></a>
<a id="trace-20194"></a>
<a id="trace-20210"></a>
<a id="trace-20212"></a>
<a id="trace-20225"></a>
<a id="trace-20227"></a>
<a id="trace-20238"></a>
<a id="trace-20240"></a>
<a id="trace-20253"></a>
<a id="trace-20255"></a>
<a id="trace-20266"></a>
<a id="trace-20268"></a>
<a id="trace-20349"></a>
<a id="trace-20351"></a>
<a id="trace-20368"></a>
<a id="trace-20370"></a>
<a id="trace-20386"></a>
<a id="trace-20388"></a>
<a id="trace-20413"></a>
<a id="trace-20415"></a>
<a id="trace-20453"></a>
<a id="trace-20455"></a>
<a id="trace-20485"></a>
<a id="trace-20487"></a>
<a id="trace-23451"></a>
<a id="trace-23453"></a>
<a id="trace-23491"></a>
<a id="trace-23493"></a>
<a id="trace-23547"></a>
<a id="trace-23549"></a>
<a id="trace-23581"></a>
<a id="trace-23583"></a>
<a id="trace-23667"></a>
<a id="trace-23669"></a>
<a id="trace-23692"></a>
<a id="trace-23694"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23730"></a>
<a id="trace-23732"></a>
<a id="trace-23750"></a>
<a id="trace-23752"></a>
<a id="trace-23762"></a>
<a id="trace-23764"></a>
<a id="trace-23784"></a>
<a id="trace-23786"></a>
<a id="trace-23802"></a>
<a id="trace-23804"></a>
<a id="trace-23821"></a>
<a id="trace-23823"></a>
<a id="trace-23841"></a>
<a id="trace-23843"></a>
<a id="trace-23926"></a>
<a id="trace-23928"></a>
<a id="trace-23949"></a>
<a id="trace-23951"></a>
<a id="trace-23992"></a>
<a id="trace-23994"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
<a id="trace-24069"></a>
<a id="trace-24071"></a>
<a id="trace-24103"></a>
<a id="trace-24105"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24158"></a>
<a id="trace-24160"></a>
<a id="trace-24182"></a>
<a id="trace-24184"></a>
<a id="trace-24208"></a>
<a id="trace-24210"></a>
<a id="trace-24282"></a>
<a id="trace-24284"></a>
<a id="trace-24300"></a>
<a id="trace-24302"></a>
<a id="trace-24335"></a>
<a id="trace-24337"></a>
<a id="trace-24354"></a>
<a id="trace-24356"></a>
<a id="trace-24372"></a>
<a id="trace-24374"></a>
<a id="trace-24385"></a>
<a id="trace-24387"></a>
<a id="trace-24411"></a>
<a id="trace-24413"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
<a id="trace-24544"></a>
<a id="trace-24546"></a>
<a id="trace-24559"></a>
<a id="trace-24561"></a>
<a id="trace-24634"></a>
<a id="trace-24636"></a>
<a id="trace-24652"></a>
<a id="trace-24654"></a>
<a id="trace-24680"></a>
<a id="trace-24682"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24731"></a>
<a id="trace-24733"></a>
<a id="trace-24762"></a>
<a id="trace-24764"></a>
<a id="trace-24803"></a>
<a id="trace-24805"></a>
<a id="trace-24832"></a>
<a id="trace-24834"></a>
<a id="trace-25110"></a>
<a id="trace-25112"></a>
<a id="trace-25155"></a>
<a id="trace-25157"></a>
<a id="trace-25264"></a>
<a id="trace-25266"></a>
<a id="trace-25298"></a>
<a id="trace-25300"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25363"></a>
<a id="trace-25365"></a>
<a id="trace-25387"></a>
<a id="trace-25389"></a>
<a id="trace-25590"></a>
<a id="trace-25592"></a>
<a id="trace-25610"></a>
<a id="trace-25612"></a>
<a id="trace-25629"></a>
<a id="trace-25631"></a>
<a id="trace-25649"></a>
<a id="trace-25651"></a>
<a id="trace-25719"></a>
<a id="trace-25721"></a>
<a id="trace-25730"></a>
<a id="trace-25732"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25761"></a>
<a id="trace-25763"></a>
<a id="trace-25782"></a>
<a id="trace-25784"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25823"></a>
<a id="trace-25825"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25842"></a>
<a id="trace-25844"></a>
<a id="trace-25852"></a>
<a id="trace-25854"></a>
<a id="trace-25925"></a>
<a id="trace-25927"></a>
<a id="trace-25939"></a>
<a id="trace-25941"></a>
<a id="trace-25957"></a>
<a id="trace-25959"></a>
<a id="trace-25975"></a>
<a id="trace-25977"></a>
<a id="trace-25988"></a>
<a id="trace-25990"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26017"></a>
<a id="trace-26019"></a>
<a id="trace-26032"></a>
<a id="trace-26034"></a>
<a id="trace-26047"></a>
<a id="trace-26049"></a>
<a id="trace-26060"></a>
<a id="trace-26062"></a>
<a id="trace-26135"></a>
<a id="trace-26137"></a>
<a id="trace-26154"></a>
<a id="trace-26156"></a>
<a id="trace-26170"></a>
<a id="trace-26172"></a>
<a id="trace-26184"></a>
<a id="trace-26186"></a>
<a id="trace-26199"></a>
<a id="trace-26201"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26236"></a>
<a id="trace-26238"></a>
<a id="trace-26243"></a>
<a id="trace-26245"></a>
<a id="trace-26258"></a>
<a id="trace-26260"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26352"></a>
<a id="trace-26354"></a>
<a id="trace-26363"></a>
<a id="trace-26365"></a>
<a id="trace-26380"></a>
<a id="trace-26382"></a>
<a id="trace-26398"></a>
<a id="trace-26400"></a>
<a id="trace-26524"></a>
<a id="trace-26526"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26564"></a>
<a id="trace-26566"></a>
<a id="trace-26582"></a>
<a id="trace-26584"></a>
<a id="trace-26597"></a>
<a id="trace-26599"></a>
<a id="trace-26614"></a>
<a id="trace-26616"></a>
<a id="trace-26686"></a>
<a id="trace-26688"></a>
<a id="trace-26761"></a>
<a id="trace-26763"></a>
<a id="trace-26776"></a>
<a id="trace-26778"></a>
<a id="trace-26792"></a>
<a id="trace-26794"></a>
<a id="trace-26812"></a>
<a id="trace-26814"></a>
<a id="trace-26832"></a>
<a id="trace-26834"></a>
<a id="trace-26847"></a>
<a id="trace-26849"></a>
<a id="trace-26858"></a>
<a id="trace-26860"></a>
<a id="trace-26873"></a>
<a id="trace-26875"></a>
<a id="trace-26888"></a>
<a id="trace-26890"></a>
<a id="trace-26961"></a>
<a id="trace-26963"></a>
<a id="trace-26974"></a>
<a id="trace-26976"></a>
<a id="trace-26992"></a>
<a id="trace-26994"></a>
<a id="trace-27010"></a>
<a id="trace-27012"></a>
<a id="trace-27023"></a>
<a id="trace-27025"></a>
<a id="trace-27035"></a>
<a id="trace-27037"></a>
<a id="trace-27047"></a>
<a id="trace-27049"></a>
<a id="trace-27061"></a>
<a id="trace-27063"></a>
<a id="trace-27076"></a>
<a id="trace-27078"></a>
<a id="trace-27091"></a>
<a id="trace-27093"></a>
<a id="trace-27166"></a>
<a id="trace-27168"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
<a id="trace-27200"></a>
<a id="trace-27202"></a>
<a id="trace-27209"></a>
<a id="trace-27211"></a>
<a id="trace-27219"></a>
<a id="trace-27221"></a>
<a id="trace-27233"></a>
<a id="trace-27235"></a>
<a id="trace-27246"></a>
<a id="trace-27248"></a>
<a id="trace-27255"></a>
<a id="trace-27257"></a>
<a id="trace-27277"></a>
<a id="trace-27279"></a>
<a id="trace-27293"></a>
<a id="trace-27295"></a>
<a id="trace-27364"></a>
<a id="trace-27366"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27394"></a>
<a id="trace-27396"></a>
<a id="trace-27405"></a>
<a id="trace-27407"></a>
<a id="trace-27424"></a>
<a id="trace-27426"></a>
<a id="trace-27441"></a>
<a id="trace-27443"></a>
<a id="trace-27460"></a>
<a id="trace-27462"></a>
<a id="trace-27475"></a>
<a id="trace-27477"></a>
<a id="trace-27490"></a>
<a id="trace-27492"></a>
<a id="trace-27499"></a>
<a id="trace-27501"></a>
<a id="trace-27573"></a>
<a id="trace-27575"></a>
<a id="trace-27591"></a>
<a id="trace-27593"></a>
<a id="trace-27606"></a>
<a id="trace-27608"></a>
<a id="trace-27622"></a>
<a id="trace-27624"></a>
<a id="trace-27655"></a>
<a id="trace-27657"></a>
<a id="trace-27667"></a>
<a id="trace-27669"></a>
<a id="trace-27683"></a>
<a id="trace-27685"></a>
<a id="trace-27692"></a>
<a id="trace-27694"></a>
<a id="trace-27705"></a>
<a id="trace-27707"></a>
<a id="trace-27717"></a>
<a id="trace-27719"></a>
<a id="trace-27785"></a>
<a id="trace-27787"></a>
<a id="trace-27793"></a>
<a id="trace-27795"></a>
<a id="trace-27805"></a>
<a id="trace-27807"></a>
<a id="trace-27814"></a>
<a id="trace-27816"></a>
<a id="trace-27833"></a>
<a id="trace-27835"></a>
<a id="trace-27841"></a>
<a id="trace-27843"></a>
<a id="trace-27861"></a>
<a id="trace-27863"></a>
<a id="trace-27869"></a>
<a id="trace-27871"></a>
<a id="trace-27895"></a>
<a id="trace-27897"></a>
<a id="trace-27909"></a>
<a id="trace-27911"></a>
<a id="trace-27978"></a>
<a id="trace-27980"></a>
<a id="trace-27993"></a>
<a id="trace-27995"></a>
<a id="trace-28004"></a>
<a id="trace-28006"></a>
<a id="trace-28012"></a>
<a id="trace-28014"></a>
<a id="trace-28024"></a>
<a id="trace-28026"></a>
<a id="trace-28032"></a>
<a id="trace-28034"></a>
<a id="trace-28046"></a>
<a id="trace-28048"></a>
<a id="trace-28053"></a>
<a id="trace-28055"></a>
<a id="trace-28071"></a>
<a id="trace-28073"></a>
<a id="trace-28080"></a>
<a id="trace-28082"></a>
<a id="trace-28154"></a>
<a id="trace-28156"></a>
<a id="trace-28181"></a>
<a id="trace-28183"></a>
<a id="trace-28193"></a>
<a id="trace-28195"></a>
<a id="trace-28205"></a>
<a id="trace-28207"></a>
<a id="trace-28221"></a>
<a id="trace-28223"></a>
<a id="trace-28231"></a>
<a id="trace-28233"></a>
<a id="trace-28244"></a>
<a id="trace-28246"></a>
<a id="trace-28251"></a>
<a id="trace-28253"></a>
<a id="trace-28263"></a>
<a id="trace-28265"></a>
<a id="trace-28273"></a>
<a id="trace-28275"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28358"></a>
<a id="trace-28360"></a>
<a id="trace-28368"></a>
<a id="trace-28370"></a>
<a id="trace-28386"></a>
<a id="trace-28388"></a>
<a id="trace-28410"></a>
<a id="trace-28412"></a>
<a id="trace-28429"></a>
<a id="trace-28431"></a>
<a id="trace-28440"></a>
<a id="trace-28442"></a>
<a id="trace-28452"></a>
<a id="trace-28454"></a>
<a id="trace-28466"></a>
<a id="trace-28468"></a>
<a id="trace-28478"></a>
<a id="trace-28480"></a>
<a id="trace-28549"></a>
<a id="trace-28551"></a>
<a id="trace-28561"></a>
<a id="trace-28563"></a>
<a id="trace-28577"></a>
<a id="trace-28579"></a>
<a id="trace-28586"></a>
<a id="trace-28588"></a>
<a id="trace-28607"></a>
<a id="trace-28609"></a>
<a id="trace-28617"></a>
<a id="trace-28619"></a>
<a id="trace-28634"></a>
<a id="trace-28636"></a>
<a id="trace-28661"></a>
<a id="trace-28663"></a>
<a id="trace-28673"></a>
<a id="trace-28675"></a>
<a id="trace-28682"></a>
<a id="trace-28684"></a>
<a id="trace-28751"></a>
<a id="trace-28753"></a>
<a id="trace-28761"></a>
<a id="trace-28763"></a>
<a id="trace-28775"></a>
<a id="trace-28777"></a>
<a id="trace-28787"></a>
<a id="trace-28789"></a>
<a id="trace-28802"></a>
<a id="trace-28804"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28820"></a>
<a id="trace-28822"></a>
<a id="trace-28836"></a>
<a id="trace-28838"></a>
<a id="trace-28846"></a>
<a id="trace-28848"></a>
<a id="trace-28863"></a>
<a id="trace-28865"></a>
<a id="trace-28943"></a>
<a id="trace-28945"></a>
<a id="trace-28952"></a>
<a id="trace-28954"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-28978"></a>
<a id="trace-28980"></a>
<a id="trace-28994"></a>
<a id="trace-28996"></a>
<a id="trace-29003"></a>
<a id="trace-29005"></a>
<a id="trace-29019"></a>
<a id="trace-29021"></a>
<a id="trace-29031"></a>
<a id="trace-29033"></a>
<a id="trace-29042"></a>
<a id="trace-29044"></a>
<a id="trace-29053"></a>
<a id="trace-29055"></a>
<a id="trace-29125"></a>
<a id="trace-29127"></a>
<a id="trace-29136"></a>
<a id="trace-29138"></a>
<a id="trace-29152"></a>
<a id="trace-29154"></a>
<a id="trace-29161"></a>
<a id="trace-29163"></a>
<a id="trace-29188"></a>
<a id="trace-29190"></a>
<a id="trace-29196"></a>
<a id="trace-29198"></a>
<a id="trace-29213"></a>
<a id="trace-29215"></a>
<a id="trace-29222"></a>
<a id="trace-29224"></a>
<a id="trace-29234"></a>
<a id="trace-29236"></a>
<a id="trace-29244"></a>
<a id="trace-29246"></a>
<a id="trace-29314"></a>
<a id="trace-29316"></a>
<a id="trace-29327"></a>
<a id="trace-29329"></a>
<a id="trace-29339"></a>
<a id="trace-29341"></a>
<a id="trace-29349"></a>
<a id="trace-29351"></a>
<a id="trace-29369"></a>
<a id="trace-29371"></a>
<a id="trace-29377"></a>
<a id="trace-29379"></a>
<a id="trace-29396"></a>
<a id="trace-29398"></a>
<a id="trace-29416"></a>
<a id="trace-29418"></a>
<a id="trace-29428"></a>
<a id="trace-29430"></a>
<a id="trace-29439"></a>
<a id="trace-29441"></a>
<a id="trace-29508"></a>
<a id="trace-29510"></a>
<a id="trace-29517"></a>
<a id="trace-29519"></a>
<a id="trace-29530"></a>
<a id="trace-29532"></a>
<a id="trace-29543"></a>
<a id="trace-29545"></a>
<a id="trace-29558"></a>
<a id="trace-29560"></a>
<a id="trace-29569"></a>
<a id="trace-29571"></a>
<a id="trace-29582"></a>
<a id="trace-29584"></a>
<a id="trace-29598"></a>
<a id="trace-29600"></a>
<a id="trace-29613"></a>
<a id="trace-29615"></a>
<a id="trace-29628"></a>
<a id="trace-29630"></a>
<a id="trace-29709"></a>
<a id="trace-29711"></a>
<a id="trace-29718"></a>
<a id="trace-29720"></a>
<a id="trace-29729"></a>
<a id="trace-29731"></a>
<a id="trace-29739"></a>
<a id="trace-29741"></a>
<a id="trace-29754"></a>
<a id="trace-29756"></a>
<a id="trace-29765"></a>
<a id="trace-29767"></a>
<a id="trace-29780"></a>
<a id="trace-29782"></a>
<a id="trace-29790"></a>
<a id="trace-29792"></a>
<a id="trace-29801"></a>
<a id="trace-29803"></a>
<a id="trace-29811"></a>
<a id="trace-29813"></a>
<a id="trace-29886"></a>
<a id="trace-29888"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-29915"></a>
<a id="trace-29917"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-29948"></a>
<a id="trace-29950"></a>
<a id="trace-29957"></a>
<a id="trace-29959"></a>
<a id="trace-29969"></a>
<a id="trace-29971"></a>
<a id="trace-29979"></a>
<a id="trace-29981"></a>
<a id="trace-29992"></a>
<a id="trace-29994"></a>
<a id="trace-30007"></a>
<a id="trace-30009"></a>
<a id="trace-30073"></a>
<a id="trace-30075"></a>
<a id="trace-30083"></a>
<a id="trace-30085"></a>
<a id="trace-30095"></a>
<a id="trace-30097"></a>
<a id="trace-30110"></a>
<a id="trace-30112"></a>
<a id="trace-30126"></a>
<a id="trace-30128"></a>
<a id="trace-30142"></a>
<a id="trace-30144"></a>
<a id="trace-30169"></a>
<a id="trace-30171"></a>
<a id="trace-30176"></a>
<a id="trace-30178"></a>
<a id="trace-30187"></a>
<a id="trace-30189"></a>
<a id="trace-30198"></a>
<a id="trace-30200"></a>
<a id="trace-30320"></a>
<a id="trace-30322"></a>
<a id="trace-30337"></a>
<a id="trace-30339"></a>
<a id="trace-30355"></a>
<a id="trace-30357"></a>
<a id="trace-30364"></a>
<a id="trace-30366"></a>
<a id="trace-30379"></a>
<a id="trace-30381"></a>
<a id="trace-30388"></a>
<a id="trace-30390"></a>
<a id="trace-30410"></a>
<a id="trace-30412"></a>
<a id="trace-30472"></a>
<a id="trace-30474"></a>
<a id="trace-30496"></a>
<a id="trace-30498"></a>
<a id="trace-30512"></a>
<a id="trace-30514"></a>
<a id="trace-30596"></a>
<a id="trace-30598"></a>
<a id="trace-30609"></a>
<a id="trace-30611"></a>
<a id="trace-30624"></a>
<a id="trace-30626"></a>
<a id="trace-30644"></a>
<a id="trace-30646"></a>
<a id="trace-30659"></a>
<a id="trace-30661"></a>
<a id="trace-30670"></a>
<a id="trace-30672"></a>
<a id="trace-30691"></a>
<a id="trace-30693"></a>
<a id="trace-30701"></a>
<a id="trace-30703"></a>
<a id="trace-30718"></a>
<a id="trace-30720"></a>
<a id="trace-30728"></a>
<a id="trace-30730"></a>
<a id="trace-30804"></a>
<a id="trace-30806"></a>
<a id="trace-30817"></a>
<a id="trace-30819"></a>
<a id="trace-30837"></a>
<a id="trace-30839"></a>
<a id="trace-30863"></a>
<a id="trace-30865"></a>
<a id="trace-30884"></a>
<a id="trace-30886"></a>
<a id="trace-30897"></a>
<a id="trace-30899"></a>
<a id="trace-30915"></a>
<a id="trace-30917"></a>
<a id="trace-30922"></a>
<a id="trace-30924"></a>
<a id="trace-30935"></a>
<a id="trace-30937"></a>
<a id="trace-30957"></a>
<a id="trace-30959"></a>
<a id="trace-31025"></a>
<a id="trace-31027"></a>
<a id="trace-31035"></a>
<a id="trace-31037"></a>
<a id="trace-31050"></a>
<a id="trace-31052"></a>
<a id="trace-31064"></a>
<a id="trace-31066"></a>
<a id="trace-31078"></a>
<a id="trace-31080"></a>
<a id="trace-31095"></a>
<a id="trace-31097"></a>
<a id="trace-31119"></a>
<a id="trace-31121"></a>
<a id="trace-31129"></a>
<a id="trace-31131"></a>
<a id="trace-31140"></a>
<a id="trace-31142"></a>
<a id="trace-31153"></a>
<a id="trace-31155"></a>
<a id="trace-31221"></a>
<a id="trace-31223"></a>
<a id="trace-31229"></a>
<a id="trace-31231"></a>
<a id="trace-31247"></a>
<a id="trace-31249"></a>
<a id="trace-31258"></a>
<a id="trace-31260"></a>
<a id="trace-31271"></a>
<a id="trace-31273"></a>
<a id="trace-31280"></a>
<a id="trace-31282"></a>
<a id="trace-31297"></a>
<a id="trace-31299"></a>
<a id="trace-31306"></a>
<a id="trace-31308"></a>
<a id="trace-31346"></a>
<a id="trace-31348"></a>
<a id="trace-31411"></a>
<a id="trace-31413"></a>
<a id="trace-31420"></a>
<a id="trace-31422"></a>
<a id="trace-31436"></a>
<a id="trace-31438"></a>
<a id="trace-31445"></a>
<a id="trace-31447"></a>
<a id="trace-31459"></a>
<a id="trace-31461"></a>
<a id="trace-31470"></a>
<a id="trace-31472"></a>
<a id="trace-31486"></a>
<a id="trace-31488"></a>
<a id="trace-31494"></a>
<a id="trace-31496"></a>
<a id="trace-31503"></a>
<a id="trace-31505"></a>
<a id="trace-31521"></a>
<a id="trace-31523"></a>
<a id="trace-31587"></a>
<a id="trace-31589"></a>
<a id="trace-31604"></a>
<a id="trace-31606"></a>
<a id="trace-31627"></a>
<a id="trace-31629"></a>
<a id="trace-31636"></a>
<a id="trace-31638"></a>
<a id="trace-31648"></a>
<a id="trace-31650"></a>
<a id="trace-31658"></a>
<a id="trace-31660"></a>
<a id="trace-31673"></a>
<a id="trace-31675"></a>
<a id="trace-31684"></a>
<a id="trace-31686"></a>
<a id="trace-31699"></a>
<a id="trace-31701"></a>
<a id="trace-31712"></a>
<a id="trace-31714"></a>
<a id="trace-31781"></a>
<a id="trace-31783"></a>
<a id="trace-31807"></a>
<a id="trace-31809"></a>
<a id="trace-31817"></a>
<a id="trace-31819"></a>
<a id="trace-31834"></a>
<a id="trace-31836"></a>
<a id="trace-31841"></a>
<a id="trace-31843"></a>
<a id="trace-31865"></a>
<a id="trace-31867"></a>
<a id="trace-31873"></a>
<a id="trace-31875"></a>
<a id="trace-31884"></a>
<a id="trace-31886"></a>
<a id="trace-31897"></a>
<a id="trace-31899"></a>
<a id="trace-31966"></a>
<a id="trace-31968"></a>
<a id="trace-31977"></a>
<a id="trace-31979"></a>
<a id="trace-31993"></a>
<a id="trace-31995"></a>
<a id="trace-32004"></a>
<a id="trace-32006"></a>
<a id="trace-32017"></a>
<a id="trace-32019"></a>
<a id="trace-32028"></a>
<a id="trace-32030"></a>
<a id="trace-32045"></a>
<a id="trace-32047"></a>
<a id="trace-32052"></a>
<a id="trace-32054"></a>
<a id="trace-32069"></a>
<a id="trace-32071"></a>
<a id="trace-32093"></a>
<a id="trace-32095"></a>
<a id="trace-32160"></a>
<a id="trace-32162"></a>
<a id="trace-32182"></a>
<a id="trace-32184"></a>
<a id="trace-32189"></a>
<a id="trace-32191"></a>
<a id="trace-32202"></a>
<a id="trace-32204"></a>
<a id="trace-32218"></a>
<a id="trace-32220"></a>
<a id="trace-32229"></a>
<a id="trace-32231"></a>
<a id="trace-32238"></a>
<a id="trace-32240"></a>
<a id="trace-32250"></a>
<a id="trace-32252"></a>
<a id="trace-32269"></a>
<a id="trace-32271"></a>
<a id="trace-32335"></a>
<a id="trace-32337"></a>
<a id="trace-32351"></a>
<a id="trace-32353"></a>
<a id="trace-32378"></a>
<a id="trace-32380"></a>
<a id="trace-32387"></a>
<a id="trace-32389"></a>
<a id="trace-32399"></a>
<a id="trace-32401"></a>
<a id="trace-32408"></a>
<a id="trace-32410"></a>
<a id="trace-32420"></a>
<a id="trace-32422"></a>
<a id="trace-32429"></a>
<a id="trace-32431"></a>
<a id="trace-32443"></a>
<a id="trace-32445"></a>
<a id="trace-32458"></a>
<a id="trace-32460"></a>
<a id="trace-32525"></a>
<a id="trace-32527"></a>
<a id="trace-32536"></a>
<a id="trace-32538"></a>
<a id="trace-32558"></a>
<a id="trace-32560"></a>
<a id="trace-32567"></a>
<a id="trace-32569"></a>
<a id="trace-32603"></a>
<a id="trace-32605"></a>
<a id="trace-32615"></a>
<a id="trace-32617"></a>
<a id="trace-32622"></a>
<a id="trace-32624"></a>
<a id="trace-32633"></a>
<a id="trace-32635"></a>
<a id="trace-32646"></a>
<a id="trace-32648"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4658356075456507, 'next_transition': 731}.
<a id="trace-983"></a>
<a id="trace-985"></a>
<a id="trace-1078"></a>
<a id="trace-1080"></a>
<a id="trace-1113"></a>
<a id="trace-1115"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1186"></a>
<a id="trace-1188"></a>
<a id="trace-1228"></a>
<a id="trace-1230"></a>
<a id="trace-1320"></a>
<a id="trace-1322"></a>
<a id="trace-1340"></a>
<a id="trace-1342"></a>
<a id="trace-1362"></a>
<a id="trace-1364"></a>
<a id="trace-1389"></a>
<a id="trace-1391"></a>
<a id="trace-1422"></a>
<a id="trace-1424"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 983): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.674789680479767, 'next_transition': 1078}.
<a id="trace-151"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 151): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015814238861406663, 'next_transition': 1453}.
<a id="trace-152"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 152): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.595153273799332, 'next_transition': 1844}.
<a id="trace-1429"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1429): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1429. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015814238861406663, 'next_transition': 1453}.
<a id="trace-1430"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1430): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1430. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015814238861406663, 'next_transition': 1453}.
<a id="trace-1431"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1431): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1431. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.595153273799332, 'next_transition': 1844}.
<a id="trace-1432"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1432): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1432. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.595153273799332, 'next_transition': 1844}.
<a id="trace-1453"></a>
<a id="trace-1455"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1453): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1432. Next observer evidence: None.
<a id="trace-1462"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1462): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1241. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724996304517082, 'next_transition': 1760}.
<a id="trace-1760"></a>
<a id="trace-1762"></a>
<a id="trace-1789"></a>
<a id="trace-1791"></a>
<a id="trace-2072"></a>
<a id="trace-2074"></a>
<a id="trace-2148"></a>
<a id="trace-2150"></a>
<a id="trace-2225"></a>
<a id="trace-2227"></a>
<a id="trace-2455"></a>
<a id="trace-2457"></a>
<a id="trace-2484"></a>
<a id="trace-2486"></a>
<a id="trace-2519"></a>
<a id="trace-2521"></a>
<a id="trace-2618"></a>
<a id="trace-2620"></a>
<a id="trace-2660"></a>
<a id="trace-2662"></a>
<a id="trace-2731"></a>
<a id="trace-2733"></a>
<a id="trace-2766"></a>
<a id="trace-2768"></a>
<a id="trace-2789"></a>
<a id="trace-2791"></a>
<a id="trace-2816"></a>
<a id="trace-2818"></a>
- 13.20s–23.25s (×28), actor 5, squad 0 (trace 1760): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1432. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134277000730837, 'next_transition': 1789}.
<a id="trace-1844"></a>
- 14.45s–14.45s (×1), actor 8, squad 1 (trace 1844): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6381250920161086, 'next_transition': 2262}.
<a id="trace-1845"></a>
- 14.45s–14.45s (×1), actor 8, squad 1 (trace 1845): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6381250920161086, 'next_transition': 2262}.
<a id="trace-2262"></a>
- 18.25s–18.25s (×1), actor 8, squad 1 (trace 2262): received platoon directive. Knowledge: actor memory at 15.00s, trace 2002. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.45497902366903, 'next_transition': 3578}.
<a id="trace-2827"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2827): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2538. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575069352441349, 'next_transition': 3348}.
<a id="trace-2828"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2828): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2538. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575069352441349, 'next_transition': 3348}.
<a id="trace-3348"></a>
<a id="trace-3350"></a>
<a id="trace-3376"></a>
<a id="trace-3378"></a>
<a id="trace-3499"></a>
<a id="trace-3501"></a>
<a id="trace-3520"></a>
<a id="trace-3522"></a>
<a id="trace-3571"></a>
<a id="trace-3573"></a>
<a id="trace-3821"></a>
<a id="trace-3823"></a>
<a id="trace-3861"></a>
<a id="trace-3863"></a>
<a id="trace-4102"></a>
<a id="trace-4104"></a>
<a id="trace-4142"></a>
<a id="trace-4144"></a>
<a id="trace-4190"></a>
<a id="trace-4192"></a>
<a id="trace-4372"></a>
<a id="trace-4374"></a>
<a id="trace-4722"></a>
<a id="trace-4724"></a>
<a id="trace-4770"></a>
<a id="trace-4772"></a>
- 23.75s–33.75s (×26), actor 5, squad 0 (trace 3348): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2543. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49218444371153164, 'next_transition': 3376}.
<a id="trace-3578"></a>
- 26.25s–26.25s (×1), actor 8, squad 1 (trace 3578): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3432. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1639551180810517, 'next_transition': 3868}.
<a id="trace-3579"></a>
- 26.25s–26.25s (×1), actor 8, squad 1 (trace 3579): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3432. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1639551180810517, 'next_transition': 3868}.
<a id="trace-3580"></a>
<a id="trace-3868"></a>
- 26.25s–27.25s (×2), actor 8, squad 1 (trace 3580): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3432. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1639551180810517, 'next_transition': 3868}.
<a id="trace-4434"></a>
- 31.25s–31.25s (×1), actor 8, squad 1 (trace 4434): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 4293. Next observer evidence: {'until': 35, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.5426218659756397, 'next_transition': 5336}.
<a id="trace-4813"></a>
- 34.60s–34.60s (×1), actor 1, squad 0 (trace 4813): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4286. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.452771142618041, 'next_transition': 5387}.
<a id="trace-4814"></a>
- 34.60s–34.60s (×1), actor 1, squad 0 (trace 4814): bounding overwatch. Knowledge: actor memory at 30.00s, trace 4286. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.452771142618041, 'next_transition': 5387}.
<a id="trace-4815"></a>
- 34.60s–34.60s (×1), actor 1, squad 0 (trace 4815): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4286. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.452771142618041, 'next_transition': 5387}.
<a id="trace-5336"></a>
- 35.05s–35.05s (×1), actor 8, squad 1 (trace 5336): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 5319. Next observer evidence: {'until': 37.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.9595473819040603, 'next_transition': 5535}.
<a id="trace-5387"></a>
<a id="trace-5389"></a>
<a id="trace-5417"></a>
<a id="trace-5419"></a>
<a id="trace-5460"></a>
<a id="trace-5462"></a>
<a id="trace-5489"></a>
<a id="trace-5491"></a>
<a id="trace-5524"></a>
<a id="trace-5526"></a>
<a id="trace-8082"></a>
<a id="trace-8084"></a>
- 35.25s–37.75s (×12), actor 5, squad 0 (trace 5387): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5316. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2049718128698523, 'next_transition': 5417}.
<a id="trace-5535"></a>
- 37.30s–37.30s (×1), actor 8, squad 1 (trace 5535): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 5319. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.566499300303448, 'next_transition': 621}.
<a id="trace-7986"></a>
- 37.30s–37.30s (×1), actor 8, squad 1 (trace 7986): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 5319. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.566499300303448, 'next_transition': 621}.
<a id="trace-7987"></a>
- 37.30s–37.30s (×1), actor 8, squad 1 (trace 7987): MoveTactically. Knowledge: actor memory at 35.00s, trace 5319. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.566499300303448, 'next_transition': 621}.
<a id="trace-7988"></a>
- 37.30s–37.30s (×1), actor 8, squad 1 (trace 7988): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 5319. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.566499300303448, 'next_transition': 621}.
<a id="trace-8122"></a>
- 38.30s–38.30s (×1), actor 1, squad 0 (trace 8122): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 5312. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38034739694399766, 'next_transition': 8453}.
<a id="trace-8123"></a>
- 38.30s–38.30s (×1), actor 1, squad 0 (trace 8123): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 5312. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38034739694399766, 'next_transition': 8453}.
<a id="trace-8453"></a>
<a id="trace-8490"></a>
<a id="trace-8526"></a>
- 38.75s–39.75s (×3), actor 5, squad 0 (trace 8453): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5316. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9363940825374488, 'next_transition': 8490}.
<a id="trace-620"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 620): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-621"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 621): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8534"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 8534): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.738789 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 8534. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8519069463256034, 'next_transition': 8635}.
<a id="trace-8535"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 8535): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.738789 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 8535. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8519069463256034, 'next_transition': 8635}.
<a id="trace-8536"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 8536): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.738789 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 8536. Next observer evidence: {'until': 45.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 9.223513137810023, 'next_transition': 9339}.
<a id="trace-8537"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 8537): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.738789 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 8537. Next observer evidence: {'until': 45.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 9.223513137810023, 'next_transition': 9339}.
<a id="trace-8635"></a>
<a id="trace-8690"></a>
<a id="trace-8692"></a>
<a id="trace-8750"></a>
<a id="trace-8752"></a>
<a id="trace-8875"></a>
<a id="trace-8877"></a>
<a id="trace-8951"></a>
<a id="trace-8953"></a>
<a id="trace-9016"></a>
<a id="trace-9018"></a>
<a id="trace-9195"></a>
<a id="trace-9197"></a>
<a id="trace-9300"></a>
<a id="trace-9302"></a>
<a id="trace-9327"></a>
<a id="trace-9329"></a>
<a id="trace-9572"></a>
<a id="trace-9574"></a>
<a id="trace-9623"></a>
<a id="trace-9625"></a>
<a id="trace-9684"></a>
<a id="trace-9686"></a>
<a id="trace-9863"></a>
<a id="trace-9865"></a>
<a id="trace-9906"></a>
<a id="trace-9908"></a>
<a id="trace-9964"></a>
<a id="trace-9966"></a>
- 40.25s–49.75s (×29), actor 5, squad 0 (trace 8635): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8547. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8592969702980641, 'next_transition': 8690}.
<a id="trace-9339"></a>
- 45.80s–45.80s (×1), actor 8, squad 1 (trace 9339): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 9230. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.798540305610817, 'next_transition': 9595}.
<a id="trace-9340"></a>
- 45.80s–45.80s (×1), actor 8, squad 1 (trace 9340): received platoon directive. Knowledge: actor memory at 45.00s, trace 9230. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.798540305610817, 'next_transition': 9595}.
<a id="trace-9595"></a>
- 46.45s–46.45s (×1), actor 8, squad 1 (trace 9595): NeedSupport. Knowledge: actor memory at 45.00s, trace 9230. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.282059684926572, 'next_transition': 9898}.
<a id="trace-9898"></a>
- 49.20s–49.20s (×1), actor 8, squad 1 (trace 9898): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 9230. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.365807472941943, 'next_transition': 10515}.
<a id="trace-10073"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 10073): NeedSupport. Knowledge: actor memory at 50.00s, trace 9996. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3120944508341911, 'next_transition': 10089}.
<a id="trace-10089"></a>
<a id="trace-10091"></a>
<a id="trace-10136"></a>
<a id="trace-10138"></a>
<a id="trace-10212"></a>
<a id="trace-10214"></a>
<a id="trace-10285"></a>
<a id="trace-10287"></a>
- 50.25s–51.75s (×8), actor 5, squad 0 (trace 10089): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10000. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3797832372467011, 'next_transition': 10136}.
<a id="trace-10322"></a>
- 51.95s–51.95s (×1), actor 1, squad 0 (trace 10322): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 9996. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00030286051211059304, 'next_transition': 10497}.
<a id="trace-10344"></a>
- 51.95s–51.95s (×1), actor 1, squad 0 (trace 10344): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 9996. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00030286051211059304, 'next_transition': 10497}.
<a id="trace-10497"></a>
<a id="trace-10499"></a>
<a id="trace-12669"></a>
<a id="trace-12671"></a>
<a id="trace-12732"></a>
<a id="trace-12734"></a>
<a id="trace-12853"></a>
<a id="trace-12855"></a>
<a id="trace-12902"></a>
<a id="trace-12904"></a>
<a id="trace-13012"></a>
<a id="trace-13014"></a>
<a id="trace-13122"></a>
<a id="trace-13124"></a>
<a id="trace-13155"></a>
<a id="trace-13157"></a>
<a id="trace-13210"></a>
<a id="trace-13212"></a>
<a id="trace-13231"></a>
<a id="trace-13233"></a>
<a id="trace-13257"></a>
<a id="trace-13259"></a>
<a id="trace-13477"></a>
<a id="trace-13479"></a>
<a id="trace-13534"></a>
<a id="trace-13536"></a>
<a id="trace-13623"></a>
<a id="trace-13625"></a>
<a id="trace-13684"></a>
<a id="trace-13686"></a>
<a id="trace-13709"></a>
<a id="trace-13711"></a>
<a id="trace-13736"></a>
<a id="trace-13738"></a>
<a id="trace-13758"></a>
<a id="trace-13760"></a>
<a id="trace-13780"></a>
<a id="trace-13782"></a>
<a id="trace-13796"></a>
<a id="trace-13798"></a>
<a id="trace-13820"></a>
<a id="trace-13822"></a>
<a id="trace-13837"></a>
<a id="trace-13839"></a>
<a id="trace-13920"></a>
<a id="trace-13922"></a>
<a id="trace-13933"></a>
<a id="trace-13935"></a>
<a id="trace-13960"></a>
<a id="trace-13962"></a>
<a id="trace-13976"></a>
<a id="trace-13978"></a>
<a id="trace-13992"></a>
<a id="trace-13994"></a>
<a id="trace-14011"></a>
<a id="trace-14013"></a>
<a id="trace-14034"></a>
<a id="trace-14036"></a>
- 52.25s–68.25s (×58), actor 5, squad 0 (trace 10497): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10000. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0792685714285714, 'next_transition': 12669}.
<a id="trace-10515"></a>
- 52.35s–52.35s (×1), actor 8, squad 1 (trace 10515): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 10003. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5959928063625721, 'next_transition': 13027}.
<a id="trace-12487"></a>
- 52.35s–52.35s (×1), actor 8, squad 1 (trace 12487): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 10003. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5959928063625721, 'next_transition': 13027}.
<a id="trace-12488"></a>
- 52.35s–52.35s (×1), actor 8, squad 1 (trace 12488): MoveTactically. Knowledge: actor memory at 50.00s, trace 10003. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5959928063625721, 'next_transition': 13027}.
<a id="trace-12489"></a>
- 52.35s–52.35s (×1), actor 8, squad 1 (trace 12489): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 10003. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5959928063625721, 'next_transition': 13027}.
<a id="trace-13027"></a>
- 55.30s–55.30s (×1), actor 8, squad 1 (trace 13027): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 12931. Next observer evidence: {'until': 58.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.8449146755428543, 'next_transition': 13275}.
<a id="trace-13275"></a>
- 58.65s–58.65s (×1), actor 8, squad 1 (trace 13275): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 55.00s, trace 12931. Next observer evidence: {'until': 88.6, 'shots': 2, 'casualties': 3, 'mean_displacement': 3.7370147710538557, 'next_transition': None}.
<a id="trace-13473"></a>
- 58.65s–58.65s (×1), actor 8, squad 1 (trace 13473): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 55.00s, trace 12931. Next observer evidence: {'until': 88.6, 'shots': 2, 'casualties': 3, 'mean_displacement': 3.7370147710538557, 'next_transition': None}.
<a id="trace-14044"></a>
- 68.55s–68.55s (×1), actor 1, squad 0 (trace 14044): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 13853. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999440572182552, 'next_transition': 14226}.
<a id="trace-14066"></a>
- 68.55s–68.55s (×1), actor 1, squad 0 (trace 14066): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 13853. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999440572182552, 'next_transition': 14226}.
<a id="trace-14226"></a>
<a id="trace-14228"></a>
<a id="trace-14247"></a>
<a id="trace-14249"></a>
<a id="trace-14283"></a>
<a id="trace-14285"></a>
<a id="trace-14384"></a>
<a id="trace-14386"></a>
<a id="trace-14419"></a>
<a id="trace-14421"></a>
<a id="trace-14469"></a>
<a id="trace-14471"></a>
<a id="trace-14507"></a>
<a id="trace-14509"></a>
<a id="trace-14547"></a>
<a id="trace-14549"></a>
<a id="trace-14602"></a>
<a id="trace-14604"></a>
<a id="trace-14659"></a>
<a id="trace-14661"></a>
<a id="trace-14737"></a>
<a id="trace-14739"></a>
<a id="trace-14771"></a>
<a id="trace-14773"></a>
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14807"></a>
<a id="trace-14824"></a>
<a id="trace-14844"></a>
<a id="trace-14855"></a>
<a id="trace-14876"></a>
<a id="trace-14890"></a>
<a id="trace-14971"></a>
- 68.75s–80.25s (×33), actor 5, squad 0 (trace 14226): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 13857. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7199968831343975, 'next_transition': 14247}.
<a id="trace-14983"></a>
- 80.65s–80.65s (×1), actor 1, squad 0 (trace 14983): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 14901. Next observer evidence: None.
<a id="trace-15005"></a>
- 80.65s–80.65s (×1), actor 1, squad 0 (trace 15005): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 14901. Next observer evidence: None.
<a id="trace-15114"></a>
<a id="trace-15154"></a>
<a id="trace-15184"></a>
<a id="trace-15194"></a>
<a id="trace-15250"></a>
<a id="trace-15267"></a>
<a id="trace-15348"></a>
<a id="trace-15361"></a>
<a id="trace-15380"></a>
<a id="trace-15414"></a>
<a id="trace-15427"></a>
<a id="trace-15444"></a>
<a id="trace-15459"></a>
- 80.75s–88.75s (×13), actor 5, squad 0 (trace 15114): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 14905. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7650240476412419, 'next_transition': 15154}.
<a id="trace-15471"></a>
- 89.10s–89.10s (×1), actor 1, squad 0 (trace 15471): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 15282. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2447958060689938, 'next_transition': 15691}.
<a id="trace-15533"></a>
- 89.10s–89.10s (×1), actor 1, squad 0 (trace 15533): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 15282. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2447958060689938, 'next_transition': 15691}.
<a id="trace-15691"></a>
<a id="trace-15708"></a>
<a id="trace-15798"></a>
- 89.25s–90.25s (×3), actor 5, squad 0 (trace 15691): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 15286. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15852983372347998, 'next_transition': 15708}.
<a id="trace-15823"></a>
- 90.70s–90.70s (×1), actor 1, squad 0 (trace 15823): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 15727. Next observer evidence: None.
<a id="trace-15824"></a>
- 90.70s–90.70s (×1), actor 1, squad 0 (trace 15824): NeedSupport. Knowledge: actor memory at 90.00s, trace 15727. Next observer evidence: None.
<a id="trace-15828"></a>
- 90.75s–90.75s (×1), actor 5, squad 0 (trace 15828): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 15731. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.01620204068779577, 'next_transition': 15840}.
<a id="trace-15840"></a>
- 90.95s–90.95s (×1), actor 1, squad 0 (trace 15840): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 15727. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15885}.
<a id="trace-15845"></a>
- 90.95s–90.95s (×1), actor 1, squad 0 (trace 15845): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 15727. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15885}.
<a id="trace-15846"></a>
- 90.95s–90.95s (×1), actor 1, squad 0 (trace 15846): Reorganise complete: known contact. Knowledge: actor memory at 90.00s, trace 15727. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15885}.
<a id="trace-15885"></a>
<a id="trace-15908"></a>
<a id="trace-15944"></a>
<a id="trace-15959"></a>
<a id="trace-15978"></a>
<a id="trace-16024"></a>
- 91.25s–94.75s (×6), actor 5, squad 0 (trace 15885): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 15731. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15908}.
<a id="trace-16093"></a>
- 95.20s–95.20s (×1), actor 1, squad 0 (trace 16093): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 16033. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31313936727795144, 'next_transition': 16168}.
<a id="trace-16094"></a>
- 95.20s–95.20s (×1), actor 1, squad 0 (trace 16094): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 16033. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31313936727795144, 'next_transition': 16168}.
<a id="trace-16168"></a>
<a id="trace-16196"></a>
<a id="trace-16220"></a>
<a id="trace-16241"></a>
<a id="trace-16281"></a>
<a id="trace-16305"></a>
<a id="trace-16317"></a>
<a id="trace-16395"></a>
<a id="trace-16428"></a>
<a id="trace-16466"></a>
<a id="trace-16476"></a>
<a id="trace-16490"></a>
<a id="trace-16498"></a>
<a id="trace-16515"></a>
<a id="trace-16529"></a>
<a id="trace-16604"></a>
<a id="trace-16618"></a>
<a id="trace-16640"></a>
<a id="trace-16654"></a>
<a id="trace-16667"></a>
- 95.75s–107.25s (×20), actor 5, squad 0 (trace 16168): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 16036. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16196}.
<a id="trace-16679"></a>
- 107.65s–107.65s (×1), actor 1, squad 0 (trace 16679): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 16539. Next observer evidence: None.
<a id="trace-16680"></a>
- 107.65s–107.65s (×1), actor 1, squad 0 (trace 16680): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 16539. Next observer evidence: None.
<a id="trace-16837"></a>
<a id="trace-16856"></a>
<a id="trace-16876"></a>
- 107.75s–108.75s (×3), actor 5, squad 0 (trace 16837): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 16542. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16856}.
<a id="trace-1891"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1891): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5775207225443456, 'next_transition': 16911}.
<a id="trace-16897"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 16897): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 16897. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5775207225443456, 'next_transition': 16911}.
<a id="trace-16911"></a>
<a id="trace-16921"></a>
<a id="trace-17002"></a>
<a id="trace-17019"></a>
<a id="trace-17034"></a>
<a id="trace-17044"></a>
<a id="trace-17068"></a>
<a id="trace-17078"></a>
<a id="trace-17109"></a>
<a id="trace-17122"></a>
<a id="trace-17147"></a>
<a id="trace-17160"></a>
<a id="trace-17236"></a>
<a id="trace-17246"></a>
<a id="trace-17264"></a>
- 109.25s–116.25s (×15), actor 5, squad 0 (trace 16911): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 16897. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999715937232147, 'next_transition': 16921}.
<a id="trace-17285"></a>
- 116.85s–116.85s (×1), actor 1, squad 0 (trace 17285): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 115.00s, trace 17169. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199943187446451, 'next_transition': 17298}.
<a id="trace-17298"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (trace 17298): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17172. Next observer evidence: {'until': 117.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3675174667010969, 'next_transition': 17323}.
<a id="trace-17323"></a>
- 117.85s–117.85s (×1), actor 1, squad 0 (trace 17323): MoveTactically. Knowledge: actor memory at 115.00s, trace 17169. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13124786770754657, 'next_transition': 17356}.
<a id="trace-17324"></a>
- 117.85s–117.85s (×1), actor 1, squad 0 (trace 17324): traveling overwatch. Knowledge: actor memory at 115.00s, trace 17169. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13124786770754657, 'next_transition': 17356}.
<a id="trace-17325"></a>
- 117.85s–117.85s (×1), actor 1, squad 0 (trace 17325): received platoon directive. Knowledge: actor memory at 115.00s, trace 17169. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13124786770754657, 'next_transition': 17356}.
<a id="trace-17356"></a>
- 118.20s–118.20s (×1), actor 1, squad 0 (trace 17356): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 17169. Next observer evidence: None.
<a id="trace-17518"></a>
<a id="trace-17534"></a>
<a id="trace-17570"></a>
<a id="trace-17612"></a>
<a id="trace-17693"></a>
<a id="trace-17720"></a>
<a id="trace-17749"></a>
<a id="trace-17763"></a>
<a id="trace-17785"></a>
<a id="trace-17797"></a>
<a id="trace-17821"></a>
<a id="trace-17840"></a>
<a id="trace-17937"></a>
<a id="trace-17954"></a>
<a id="trace-17981"></a>
<a id="trace-18022"></a>
<a id="trace-18034"></a>
<a id="trace-18057"></a>
<a id="trace-18081"></a>
<a id="trace-18094"></a>
<a id="trace-18112"></a>
<a id="trace-18188"></a>
<a id="trace-18199"></a>
<a id="trace-18234"></a>
<a id="trace-18254"></a>
<a id="trace-18281"></a>
<a id="trace-18300"></a>
<a id="trace-18431"></a>
<a id="trace-18442"></a>
<a id="trace-18458"></a>
<a id="trace-18476"></a>
<a id="trace-18488"></a>
<a id="trace-18504"></a>
<a id="trace-18537"></a>
- 118.25s–138.80s (×34), actor 5, squad 0 (trace 17518): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17172. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999715937232147, 'next_transition': 17534}.
<a id="trace-18543"></a>
- 138.85s–138.85s (×1), actor 1, squad 0 (trace 18543): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 18359. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18680}.
<a id="trace-18680"></a>
<a id="trace-18787"></a>
<a id="trace-18809"></a>
<a id="trace-18851"></a>
<a id="trace-18875"></a>
<a id="trace-18908"></a>
<a id="trace-19018"></a>
<a id="trace-19067"></a>
<a id="trace-19085"></a>
<a id="trace-19103"></a>
<a id="trace-19121"></a>
<a id="trace-19138"></a>
<a id="trace-19150"></a>
<a id="trace-19162"></a>
<a id="trace-19240"></a>
- 139.80s–150.30s (×15), actor 5, squad 0 (trace 18680): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 18362. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2096251781486025, 'next_transition': 18787}.
<a id="trace-19247"></a>
- 150.60s–150.60s (×1), actor 1, squad 0 (trace 19247): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 19168. Next observer evidence: {'until': 151.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42210423117442913, 'next_transition': 19334}.
<a id="trace-19334"></a>
- 151.70s–151.70s (×1), actor 1, squad 0 (trace 19334): ReactToContact: cover and return fire. Knowledge: actor memory at 150.00s, trace 19168. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500211638078787, 'next_transition': 19582}.
<a id="trace-19335"></a>
- 151.70s–151.70s (×1), actor 1, squad 0 (trace 19335): bounding overwatch. Knowledge: actor memory at 150.00s, trace 19168. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500211638078787, 'next_transition': 19582}.
<a id="trace-19336"></a>
- 151.70s–151.70s (×1), actor 1, squad 0 (trace 19336): new contact inside 100 m. Knowledge: actor memory at 150.00s, trace 19168. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500211638078787, 'next_transition': 19582}.
<a id="trace-19582"></a>
<a id="trace-19598"></a>
<a id="trace-19627"></a>
<a id="trace-19658"></a>
<a id="trace-19691"></a>
- 151.80s–153.80s (×5), actor 5, squad 0 (trace 19582): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19171. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099890903250822, 'next_transition': 19598}.
<a id="trace-19698"></a>
- 153.80s–153.80s (×1), actor 1, squad 0 (trace 19698): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 150.00s, trace 19168. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7150229561567912, 'next_transition': 20006}.
<a id="trace-20006"></a>
<a id="trace-20103"></a>
<a id="trace-20124"></a>
<a id="trace-20153"></a>
<a id="trace-20176"></a>
<a id="trace-20190"></a>
- 154.80s–157.30s (×6), actor 5, squad 0 (trace 20006): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 19171. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23141637735990195, 'next_transition': 20103}.
<a id="trace-20203"></a>
- 157.70s–157.70s (×1), actor 1, squad 0 (trace 20203): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 155.00s, trace 20021. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560012084793392, 'next_transition': 20208}.
<a id="trace-20208"></a>
<a id="trace-20223"></a>
<a id="trace-20236"></a>
<a id="trace-20264"></a>
<a id="trace-20347"></a>
<a id="trace-20366"></a>
<a id="trace-20384"></a>
<a id="trace-20411"></a>
<a id="trace-20451"></a>
<a id="trace-20483"></a>
- 157.80s–162.80s (×10), actor 5, squad 0 (trace 20208): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 20024. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120024169586804, 'next_transition': 20223}.
<a id="trace-20510"></a>
- 163.10s–163.10s (×1), actor 1, squad 0 (trace 20510): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 160.00s, trace 20277. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00021999999999948726, 'next_transition': 23449}.
<a id="trace-23382"></a>
- 163.10s–163.10s (×1), actor 1, squad 0 (trace 23382): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 160.00s, trace 20277. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00021999999999948726, 'next_transition': 23449}.
<a id="trace-23383"></a>
- 163.10s–163.10s (×1), actor 1, squad 0 (trace 23383): MoveTactically. Knowledge: actor memory at 160.00s, trace 20277. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00021999999999948726, 'next_transition': 23449}.
<a id="trace-23384"></a>
- 163.10s–163.10s (×1), actor 1, squad 0 (trace 23384): contact cover complete: assessment resumes closure. Knowledge: actor memory at 160.00s, trace 20277. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00021999999999948726, 'next_transition': 23449}.
<a id="trace-23449"></a>
<a id="trace-23489"></a>
<a id="trace-23545"></a>
<a id="trace-23579"></a>
<a id="trace-23665"></a>
<a id="trace-23690"></a>
<a id="trace-23718"></a>
<a id="trace-23728"></a>
<a id="trace-23748"></a>
<a id="trace-23782"></a>
<a id="trace-23800"></a>
<a id="trace-23819"></a>
- 163.30s–169.30s (×12), actor 5, squad 0 (trace 23449): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 20280. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0006399999999999295, 'next_transition': 23489}.
<a id="trace-23834"></a>
- 169.60s–169.60s (×1), actor 1, squad 0 (trace 23834): NeedSupport. Knowledge: actor memory at 165.00s, trace 23591. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6668109759558969, 'next_transition': 23924}.
<a id="trace-23924"></a>
<a id="trace-23947"></a>
<a id="trace-23990"></a>
<a id="trace-24024"></a>
<a id="trace-24067"></a>
<a id="trace-24101"></a>
<a id="trace-24136"></a>
<a id="trace-24156"></a>
<a id="trace-24206"></a>
<a id="trace-24280"></a>
<a id="trace-24298"></a>
<a id="trace-24333"></a>
<a id="trace-24352"></a>
<a id="trace-24370"></a>
- 170.30s–177.30s (×14), actor 5, squad 0 (trace 23924): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 23855. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0711183190905413, 'next_transition': 23947}.
<a id="trace-2734"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 2734): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26157388530535786, 'next_transition': 24409}.
<a id="trace-24393"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 24393): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 24393. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26157388530535786, 'next_transition': 24409}.
<a id="trace-24409"></a>
<a id="trace-24422"></a>
- 178.30s–178.80s (×2), actor 5, squad 0 (trace 24409): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 24393. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19915790482738188, 'next_transition': 24422}.
<a id="trace-24430"></a>
- 179.05s–179.05s (×1), actor 1, squad 0 (trace 24430): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 175.00s, trace 24216. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01751897439920525, 'next_transition': 24542}.
<a id="trace-24542"></a>
<a id="trace-24557"></a>
<a id="trace-24632"></a>
<a id="trace-24650"></a>
<a id="trace-24678"></a>
<a id="trace-24707"></a>
<a id="trace-24760"></a>
<a id="trace-24801"></a>
<a id="trace-24830"></a>
- 179.30s–183.80s (×9), actor 5, squad 0 (trace 24542): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 24393. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14670213850476005, 'next_transition': 24557}.
<a id="trace-24860"></a>
- 184.15s–184.15s (×1), actor 1, squad 0 (trace 24860): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 180.00s, trace 24566. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12837047319929604, 'next_transition': 25108}.
<a id="trace-24861"></a>
- 184.15s–184.15s (×1), actor 1, squad 0 (trace 24861): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 24566. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12837047319929604, 'next_transition': 25108}.
<a id="trace-24862"></a>
- 184.15s–184.15s (×1), actor 1, squad 0 (trace 24862): . Knowledge: actor memory at 180.00s, trace 24566. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12837047319929604, 'next_transition': 25108}.
<a id="trace-25108"></a>
<a id="trace-25262"></a>
<a id="trace-25296"></a>
<a id="trace-25325"></a>
<a id="trace-25343"></a>
<a id="trace-25361"></a>
- 184.30s–187.30s (×6), actor 5, squad 0 (trace 25108): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 24568. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1994600058832368, 'next_transition': 25262}.
<a id="trace-25395"></a>
- 187.85s–187.85s (×1), actor 1, squad 0 (trace 25395): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 25177. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8924001010143361, 'next_transition': 25608}.
<a id="trace-25396"></a>
- 187.85s–187.85s (×1), actor 1, squad 0 (trace 25396): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 25177. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8924001010143361, 'next_transition': 25608}.
<a id="trace-25608"></a>
<a id="trace-25627"></a>
<a id="trace-25647"></a>
<a id="trace-25717"></a>
<a id="trace-25728"></a>
<a id="trace-25744"></a>
<a id="trace-25780"></a>
<a id="trace-25807"></a>
<a id="trace-25821"></a>
<a id="trace-25830"></a>
<a id="trace-25923"></a>
<a id="trace-25937"></a>
<a id="trace-25955"></a>
<a id="trace-25973"></a>
<a id="trace-26004"></a>
<a id="trace-26030"></a>
<a id="trace-26045"></a>
<a id="trace-26133"></a>
<a id="trace-26152"></a>
<a id="trace-26182"></a>
<a id="trace-26197"></a>
<a id="trace-26218"></a>
<a id="trace-26234"></a>
<a id="trace-26241"></a>
<a id="trace-26256"></a>
<a id="trace-26280"></a>
<a id="trace-26350"></a>
<a id="trace-26378"></a>
- 188.80s–206.30s (×28), actor 5, squad 0 (trace 25608): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 25179. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6416811541753406, 'next_transition': 25627}.
<a id="trace-26392"></a>
- 206.40s–206.40s (×1), actor 1, squad 0 (trace 26392): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 205.00s, trace 26286. Next observer evidence: {'until': 206.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417955854452522, 'next_transition': 26396}.
<a id="trace-26396"></a>
- 206.80s–206.80s (×1), actor 5, squad 0 (trace 26396): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 26287. Next observer evidence: None.
<a id="trace-26404"></a>
- 206.85s–206.85s (×1), actor 1, squad 0 (trace 26404): Reorganise: completed/failed drill. Knowledge: actor memory at 205.00s, trace 26286. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417976169063771, 'next_transition': 26522}.
<a id="trace-26407"></a>
- 206.85s–206.85s (×1), actor 1, squad 0 (trace 26407): ReactToContact: cover and return fire. Knowledge: actor memory at 205.00s, trace 26286. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417976169063771, 'next_transition': 26522}.
<a id="trace-26408"></a>
- 206.85s–206.85s (×1), actor 1, squad 0 (trace 26408): Reorganise complete: known contact. Knowledge: actor memory at 205.00s, trace 26286. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417976169063771, 'next_transition': 26522}.
<a id="trace-26522"></a>
<a id="trace-26538"></a>
<a id="trace-26562"></a>
<a id="trace-26580"></a>
<a id="trace-26612"></a>
<a id="trace-26684"></a>
- 207.30s–210.30s (×6), actor 5, squad 0 (trace 26522): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 26287. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126828091207985, 'next_transition': 26538}.
<a id="trace-26700"></a>
- 210.45s–210.45s (×1), actor 1, squad 0 (trace 26700): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 210.00s, trace 26620. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5890798877218095, 'next_transition': 26774}.
<a id="trace-26701"></a>
- 210.45s–210.45s (×1), actor 1, squad 0 (trace 26701): rearward bound: one stationary suppressing element. Knowledge: actor memory at 210.00s, trace 26620. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5890798877218095, 'next_transition': 26774}.
<a id="trace-26774"></a>
<a id="trace-26790"></a>
<a id="trace-26810"></a>
<a id="trace-26830"></a>
<a id="trace-26845"></a>
<a id="trace-26856"></a>
<a id="trace-26871"></a>
<a id="trace-26886"></a>
<a id="trace-26959"></a>
<a id="trace-26990"></a>
<a id="trace-27021"></a>
<a id="trace-27045"></a>
<a id="trace-27074"></a>
<a id="trace-27089"></a>
<a id="trace-27164"></a>
<a id="trace-27198"></a>
<a id="trace-27207"></a>
<a id="trace-27231"></a>
<a id="trace-27244"></a>
- 211.30s–223.30s (×19), actor 5, squad 0 (trace 26774): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 26621. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31402648429382174, 'next_transition': 26790}.
<a id="trace-27249"></a>
- 223.35s–223.35s (×1), actor 5, squad 0 (trace 27249): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 223.35s, trace 27249. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6627397424251573, 'next_transition': 27275}.
<a id="trace-27275"></a>
<a id="trace-27291"></a>
<a id="trace-27362"></a>
<a id="trace-27377"></a>
<a id="trace-27392"></a>
- 224.30s–226.30s (×5), actor 5, squad 0 (trace 27275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 223.35s, trace 27249. Next observer evidence: {'until': 224.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.663576390213808, 'next_transition': 27291}.
<a id="trace-27414"></a>
- 227.25s–227.25s (×1), actor 1, squad 0 (trace 27414): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 225.00s, trace 27298. Next observer evidence: None.
<a id="trace-27415"></a>
- 227.25s–227.25s (×1), actor 1, squad 0 (trace 27415): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 225.00s, trace 27298. Next observer evidence: None.
<a id="trace-27422"></a>
<a id="trace-27439"></a>
<a id="trace-27458"></a>
<a id="trace-27488"></a>
<a id="trace-27497"></a>
<a id="trace-27571"></a>
- 227.30s–230.30s (×6), actor 5, squad 0 (trace 27422): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 27299. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502028153402833, 'next_transition': 27439}.
<a id="trace-27583"></a>
- 230.50s–230.50s (×1), actor 1, squad 0 (trace 27583): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 230.00s, trace 27511. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27589}.
<a id="trace-27589"></a>
<a id="trace-27604"></a>
<a id="trace-27620"></a>
<a id="trace-27653"></a>
<a id="trace-27665"></a>
<a id="trace-27681"></a>
<a id="trace-27690"></a>
<a id="trace-27703"></a>
<a id="trace-27715"></a>
<a id="trace-27783"></a>
<a id="trace-27803"></a>
<a id="trace-27812"></a>
<a id="trace-27831"></a>
<a id="trace-27859"></a>
<a id="trace-27867"></a>
<a id="trace-27893"></a>
<a id="trace-27907"></a>
<a id="trace-27976"></a>
<a id="trace-27991"></a>
<a id="trace-28002"></a>
<a id="trace-28022"></a>
<a id="trace-28030"></a>
<a id="trace-28044"></a>
<a id="trace-28051"></a>
<a id="trace-28069"></a>
<a id="trace-28078"></a>
<a id="trace-28191"></a>
<a id="trace-28203"></a>
- 230.80s–246.80s (×28), actor 5, squad 0 (trace 27589): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 27512. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27604}.
<a id="trace-3303"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (events line 3303): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28210"></a>
- 247.10s–247.10s (×1), actor 5, squad 0 (trace 28210): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.10s, trace 28210. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28229}.
<a id="trace-28229"></a>
<a id="trace-28242"></a>
<a id="trace-28249"></a>
<a id="trace-28271"></a>
<a id="trace-28341"></a>
<a id="trace-28384"></a>
- 247.80s–251.80s (×6), actor 5, squad 0 (trace 28229): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.10s, trace 28210. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28242}.
<a id="trace-28418"></a>
- 252.70s–252.70s (×1), actor 1, squad 0 (trace 28418): MoveTactically. Knowledge: actor memory at 250.00s, trace 28278. Next observer evidence: None.
<a id="trace-28419"></a>
- 252.70s–252.70s (×1), actor 1, squad 0 (trace 28419): received platoon directive. Knowledge: actor memory at 250.00s, trace 28278. Next observer evidence: None.
<a id="trace-28424"></a>
- 252.75s–252.75s (×1), actor 1, squad 0 (trace 28424): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 28278. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28427}.
<a id="trace-28427"></a>
<a id="trace-28438"></a>
<a id="trace-28450"></a>
<a id="trace-28464"></a>
<a id="trace-28476"></a>
<a id="trace-28559"></a>
<a id="trace-28575"></a>
<a id="trace-28605"></a>
<a id="trace-28632"></a>
<a id="trace-28659"></a>
<a id="trace-28671"></a>
<a id="trace-28759"></a>
<a id="trace-28773"></a>
<a id="trace-28800"></a>
<a id="trace-28818"></a>
<a id="trace-28834"></a>
<a id="trace-28844"></a>
<a id="trace-28861"></a>
<a id="trace-28941"></a>
<a id="trace-28950"></a>
<a id="trace-28976"></a>
<a id="trace-29001"></a>
<a id="trace-29017"></a>
- 252.80s–268.30s (×23), actor 5, squad 0 (trace 28427): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 28279. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28438}.
<a id="trace-3478"></a>
- 268.35s–268.35s (×1), actor 5, squad 0 (events line 3478): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29023"></a>
- 268.35s–268.35s (×1), actor 5, squad 0 (trace 29023): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205894 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 268.35s, trace 29023. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29040}.
<a id="trace-29024"></a>
- 268.35s–268.35s (×1), actor 5, squad 0 (trace 29024): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205894 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 268.35s, trace 29024. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29040}.
<a id="trace-29040"></a>
<a id="trace-29051"></a>
<a id="trace-29123"></a>
<a id="trace-29134"></a>
<a id="trace-29159"></a>
<a id="trace-29186"></a>
<a id="trace-29194"></a>
<a id="trace-29211"></a>
<a id="trace-29220"></a>
<a id="trace-29232"></a>
<a id="trace-29242"></a>
<a id="trace-29312"></a>
<a id="trace-29325"></a>
<a id="trace-29337"></a>
<a id="trace-29347"></a>
<a id="trace-29367"></a>
<a id="trace-29375"></a>
<a id="trace-29394"></a>
<a id="trace-29414"></a>
<a id="trace-29426"></a>
<a id="trace-29506"></a>
<a id="trace-29515"></a>
<a id="trace-29528"></a>
<a id="trace-29541"></a>
<a id="trace-29556"></a>
<a id="trace-29567"></a>
<a id="trace-29580"></a>
<a id="trace-29596"></a>
- 269.30s–283.80s (×28), actor 5, squad 0 (trace 29040): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 268.35s, trace 29024. Next observer evidence: {'until': 269.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29051}.
<a id="trace-3597"></a>
- 284.10s–284.10s (×1), actor 5, squad 0 (events line 3597): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29604"></a>
- 284.10s–284.10s (×1), actor 5, squad 0 (trace 29604): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.220012 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 284.10s, trace 29604. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29611}.
<a id="trace-29605"></a>
- 284.10s–284.10s (×1), actor 5, squad 0 (trace 29605): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.220012 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 284.10s, trace 29605. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29611}.
<a id="trace-29611"></a>
<a id="trace-29626"></a>
<a id="trace-29707"></a>
<a id="trace-29716"></a>
<a id="trace-29737"></a>
<a id="trace-29752"></a>
<a id="trace-29763"></a>
<a id="trace-29778"></a>
<a id="trace-29799"></a>
- 284.30s–289.30s (×9), actor 5, squad 0 (trace 29611): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 284.10s, trace 29605. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29626}.
<a id="trace-29806"></a>
- 289.70s–289.70s (×1), actor 1, squad 0 (trace 29806): received platoon directive. Knowledge: actor memory at 285.00s, trace 29632. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29884}.
<a id="trace-29884"></a>
<a id="trace-29894"></a>
<a id="trace-29913"></a>
<a id="trace-29933"></a>
<a id="trace-29955"></a>
<a id="trace-29967"></a>
<a id="trace-29977"></a>
<a id="trace-30005"></a>
<a id="trace-30081"></a>
<a id="trace-30093"></a>
<a id="trace-30108"></a>
<a id="trace-30124"></a>
<a id="trace-30140"></a>
- 290.30s–297.80s (×13), actor 5, squad 0 (trace 29884): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 29818. Next observer evidence: {'until': 290.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29894}.
<a id="trace-30145"></a>
- 297.90s–297.90s (×1), actor 5, squad 0 (trace 30145): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 297.90s, trace 30145. Next observer evidence: None.
<a id="trace-30146"></a>
- 297.90s–297.90s (×1), actor 5, squad 0 (trace 30146): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 297.90s, trace 30146. Next observer evidence: None.
<a id="trace-3709"></a>
- 297.90s–297.90s (×1), actor 5, squad 0 (events line 3709): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30167}.
<a id="trace-30167"></a>
<a id="trace-30185"></a>
- 298.30s–299.30s (×2), actor 5, squad 0 (trace 30167): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 297.90s, trace 30146. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30185}.
<a id="trace-30260"></a>
- 300.25s–300.25s (×1), actor 1, squad 0 (trace 30260): traveling. Knowledge: actor memory at 300.00s, trace 30203. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30335}.
<a id="trace-30261"></a>
- 300.25s–300.25s (×1), actor 1, squad 0 (trace 30261): current contact unknown for 10 s. Knowledge: actor memory at 300.00s, trace 30203. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30335}.
<a id="trace-30335"></a>
<a id="trace-30353"></a>
<a id="trace-30362"></a>
<a id="trace-30377"></a>
<a id="trace-30386"></a>
- 300.80s–302.80s (×5), actor 5, squad 0 (trace 30335): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 30204. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30353}.
<a id="trace-30413"></a>
- 303.50s–303.50s (×1), actor 1, squad 0 (trace 30413): received platoon directive. Knowledge: actor memory at 300.00s, trace 30203. Next observer evidence: {'until': 303.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30238687875707365, 'next_transition': 30470}.
<a id="trace-30470"></a>
<a id="trace-30494"></a>
<a id="trace-30510"></a>
<a id="trace-30594"></a>
<a id="trace-30622"></a>
<a id="trace-30642"></a>
<a id="trace-30657"></a>
<a id="trace-30668"></a>
<a id="trace-30699"></a>
<a id="trace-30716"></a>
<a id="trace-30802"></a>
<a id="trace-30835"></a>
<a id="trace-30861"></a>
- 303.80s–311.80s (×13), actor 5, squad 0 (trace 30470): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 30204. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239716525714105, 'next_transition': 30494}.
<a id="trace-30867"></a>
- 311.85s–311.85s (×1), actor 1, squad 0 (trace 30867): traveling overwatch. Knowledge: actor memory at 310.00s, trace 30738. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30882}.
<a id="trace-30868"></a>
- 311.85s–311.85s (×1), actor 1, squad 0 (trace 30868): matching received arrivals: traveling stage complete. Knowledge: actor memory at 310.00s, trace 30738. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30882}.
<a id="trace-30882"></a>
<a id="trace-30895"></a>
<a id="trace-30913"></a>
<a id="trace-30920"></a>
<a id="trace-30933"></a>
<a id="trace-30955"></a>
<a id="trace-31033"></a>
<a id="trace-31048"></a>
<a id="trace-31062"></a>
<a id="trace-31076"></a>
<a id="trace-31093"></a>
<a id="trace-31117"></a>
<a id="trace-31127"></a>
<a id="trace-31138"></a>
<a id="trace-31151"></a>
<a id="trace-31219"></a>
<a id="trace-31245"></a>
<a id="trace-31256"></a>
<a id="trace-31269"></a>
<a id="trace-31278"></a>
<a id="trace-31295"></a>
<a id="trace-31304"></a>
<a id="trace-31320"></a>
<a id="trace-31344"></a>
<a id="trace-31434"></a>
<a id="trace-31443"></a>
<a id="trace-31457"></a>
<a id="trace-31484"></a>
<a id="trace-31492"></a>
<a id="trace-31585"></a>
<a id="trace-31602"></a>
<a id="trace-31634"></a>
<a id="trace-31646"></a>
<a id="trace-31656"></a>
<a id="trace-31671"></a>
<a id="trace-31682"></a>
<a id="trace-31697"></a>
<a id="trace-31779"></a>
<a id="trace-31805"></a>
<a id="trace-31815"></a>
<a id="trace-31832"></a>
<a id="trace-31863"></a>
<a id="trace-31871"></a>
<a id="trace-31964"></a>
<a id="trace-31975"></a>
<a id="trace-31991"></a>
<a id="trace-32002"></a>
<a id="trace-32015"></a>
<a id="trace-32026"></a>
<a id="trace-32043"></a>
<a id="trace-32050"></a>
<a id="trace-32067"></a>
<a id="trace-32091"></a>
<a id="trace-32167"></a>
<a id="trace-32180"></a>
<a id="trace-32200"></a>
<a id="trace-32216"></a>
<a id="trace-32236"></a>
<a id="trace-32267"></a>
<a id="trace-32349"></a>
<a id="trace-32376"></a>
<a id="trace-32385"></a>
<a id="trace-32397"></a>
<a id="trace-32406"></a>
<a id="trace-32418"></a>
<a id="trace-32427"></a>
<a id="trace-32456"></a>
<a id="trace-32523"></a>
<a id="trace-32534"></a>
<a id="trace-32556"></a>
<a id="trace-32565"></a>
<a id="trace-32601"></a>
<a id="trace-32613"></a>
<a id="trace-32620"></a>
<a id="trace-32631"></a>
<a id="trace-32644"></a>
- 312.30s–359.80s (×76), actor 5, squad 0 (trace 30882): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 30739. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.105012549514596, 'next_transition': 30895}.

## Net delivery

289 matched order/radio deliveries; 284 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.419s; maximum 5.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3438: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3439: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3440: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3441: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3442: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3443: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3446: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3447: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4293: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4297: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4298: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4299: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4300: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4301: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4302: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4303: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4304: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4305: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4306: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4307: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4308: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5312: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5314: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5317: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5319: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 5321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 5322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5323: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5324: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5325: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5326: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5327: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5328: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5329: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5330: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5331: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5332: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 5333: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 5334: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 8534: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 8535: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 8536: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 8537: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8543: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8545: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8547: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8548: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 8550: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8551: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 8552: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 8553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8554: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8555: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8556: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8557: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8558: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8559: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8560: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8561: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8562: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8563: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 8564: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 8565: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9223: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9224: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 9225: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9227: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9228: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 9230: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9231: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 9232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9233: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9234: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9235: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9236: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9237: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9238: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9239: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9240: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9241: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9242: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 9243: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 9244: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9996: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 9997: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9998: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10000: estimate 15.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10001: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 10002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 10003: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10004: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 10005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10006: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 10007: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 10008: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 10009: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 10010: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 10011: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 10012: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 10013: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 10014: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 10015: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 10016: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 10017: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12924: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12925: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12926: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12928: estimate 16.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12929: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12931: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12932: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 12933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12934: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12935: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12936: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12937: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12938: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12939: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12940: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12941: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12942: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12943: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 12944: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 12945: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13548: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 13549: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 13550: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13552: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 13553: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 13555: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13556: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 13557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13558: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13559: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13560: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13561: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13562: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13563: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13564: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13565: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13566: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13567: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 13568: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 13569: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13853: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 13854: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 13855: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13857: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13858: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 13860: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 13861: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13862: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13863: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13864: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13865: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13866: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13867: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13868: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13869: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13870: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13871: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 13872: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 13873: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14302: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 14303: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14304: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14306: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14307: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 14309: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 14310: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14311: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14312: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14313: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14314: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14315: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14316: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14317: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14318: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14319: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14320: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 14321: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 14322: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 14671: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 14672: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 14673: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 14674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 14675: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 14676: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 14677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 14678: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 14679: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 14680: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14681: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14682: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14683: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14684: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14685: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 14686: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14687: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 14688: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 14689: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14901: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 14902: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 14903: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14905: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 14906: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14908: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14909: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14910: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14911: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14912: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14913: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14914: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14915: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14916: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14917: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 14918: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 14919: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 15282: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 15283: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 15284: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 15285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 15286: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 15287: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 15288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15289: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15290: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15291: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15292: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 15293: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 15294: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15295: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 15296: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 15297: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 15298: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 15299: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 15300: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 15727: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 15728: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 15729: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 15730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 15731: estimate 14.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 15732: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 15733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 15734: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15735: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 15736: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15737: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15738: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15739: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15740: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15741: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 15742: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 15743: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 15744: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 15745: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 16033: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 16034: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 16035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16036: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16037: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 16038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16039: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16040: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16041: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16042: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16043: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16044: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16045: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16046: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16047: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16048: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 16049: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 16050: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 16327: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 16328: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 16329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 16330: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 16331: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 16332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16333: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16334: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16335: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16336: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 16337: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16338: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16339: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16340: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16341: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16342: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 16343: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 16344: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 16539: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 16540: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 16541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 16542: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 16543: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 16544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16545: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16546: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16547: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16548: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16549: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16550: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16551: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16552: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16553: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16554: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 16555: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 16556: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 16897: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16931: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 16932: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16934: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 16935: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 16936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16937: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16938: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16939: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16940: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16941: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16942: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16943: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16944: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16945: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16946: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 16947: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 16948: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 17169: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 17170: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17172: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17173: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 17174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17175: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17176: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17177: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17178: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17179: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17180: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17181: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17182: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17183: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17184: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 17185: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 17186: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 17619: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17620: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17622: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17623: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 17624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17625: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17626: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17627: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17628: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17629: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17630: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17631: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17632: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17633: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17634: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 17635: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 17636: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17872: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 17873: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17875: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17876: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17878: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17879: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17880: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17881: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17882: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17883: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17884: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17885: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17886: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17887: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17888: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17889: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18120: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18121: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18123: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18124: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18126: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18127: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18128: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18129: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18130: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18131: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18132: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18133: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18134: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18135: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18136: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18137: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18359: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18360: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18362: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18363: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18365: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18366: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18367: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18368: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18369: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18370: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18371: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18372: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18373: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18374: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18375: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18376: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 18687: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 18688: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18690: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18691: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 18692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18693: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18694: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18695: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18696: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18697: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18698: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18699: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18700: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18701: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18702: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 18703: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 18704: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 18931: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 18932: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 18933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 18934: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 18935: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 18936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 18937: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 18938: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 18939: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 18940: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 18941: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 18942: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 18943: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 18944: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 18945: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 18946: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 18947: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 18948: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19168: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 19169: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 19170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19171: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19172: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 19173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19174: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19175: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19176: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19177: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19178: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19179: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19180: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19181: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19182: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19183: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 19184: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 19185: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 20021: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 20022: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 20023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 20024: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 20025: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 20026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 20027: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20028: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20029: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20030: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20031: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20032: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20033: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20034: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20035: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20036: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 20037: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 20038: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 20277: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 20278: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 20279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20280: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20281: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 20282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20283: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20284: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20285: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20286: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20287: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20288: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20289: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20290: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20291: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20292: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 20293: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 20294: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 23591: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 23592: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 23593: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 23594: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 23595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 23596: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 23597: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 23598: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 23599: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 23600: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 23601: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 23602: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 23603: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 23604: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 23605: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 23606: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 23607: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 23853: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 23854: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 23855: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 23856: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 23857: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 23858: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23859: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23860: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23861: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 23862: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23863: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23864: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23865: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23866: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23867: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 23868: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 23869: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 24216: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 24217: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 24218: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 24219: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 24220: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 24221: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 24222: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 24223: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 24224: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 24225: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 24226: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 24227: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 24228: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 24229: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 24230: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 24231: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 24232: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 24393: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 24566: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 24567: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 24568: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 24569: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 24570: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 24571: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 24572: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 24573: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 24574: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 24575: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 24576: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 24577: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 24578: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 24579: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 24580: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 24581: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 24582: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 25177: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 25178: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 25179: estimate 16.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 25180: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 25181: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 25182: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 25183: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 25184: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 25185: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 25186: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 25187: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 25188: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 25189: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 25190: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 25191: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 25192: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 25193: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 25654: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 25655: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 25656: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 25657: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 25658: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 25659: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 25660: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 25661: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 25662: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 25663: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 25664: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 25665: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 25666: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 25667: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 25668: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 25669: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 25670: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 25857: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 25858: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 25859: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 25860: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 25861: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 25862: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 25863: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 25864: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 25865: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 25866: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 25867: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 25868: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 25869: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 25870: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 25871: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 25872: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 25873: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 26065: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 26066: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 26067: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 26068: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 26069: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 26070: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 26071: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 26072: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 26073: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 26074: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 26075: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 26076: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 26077: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 26078: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 26079: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 26080: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 26081: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 26286: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 26287: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 26288: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 26289: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 26290: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 26291: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 26292: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 26293: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 26294: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 26295: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 26296: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 26297: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 26298: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 26299: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 26300: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 26301: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 26620: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 26621: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 26622: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 26623: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 26624: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 26625: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 26626: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 26627: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 26628: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 26629: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 26630: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 26631: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 26632: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 26633: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 26634: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 26635: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 26897: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 26898: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 26899: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 26900: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 26901: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 26902: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 26903: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 26904: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 26905: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 26906: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 26907: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 26908: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 26909: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 26910: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 26911: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 27096: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 27097: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 27098: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 27099: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 27100: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 27101: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 27102: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 27103: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 27104: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 27105: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 27106: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 27107: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 27108: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 27109: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 27110: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 223.35s leader 5, trace 27249: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 27298: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 27299: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 27300: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 27301: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 27302: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 27303: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 27304: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 27305: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 27306: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 27307: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 27308: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 27309: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 27310: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 27311: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 27312: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 27511: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 27512: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 27513: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 27514: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 27515: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 27516: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 27517: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 27518: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 27519: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 27520: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 27521: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 27522: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 27523: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 27524: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 27525: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 27722: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 27723: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 27724: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 27725: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 27726: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 27727: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 27728: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 27729: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 27730: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 27731: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 27732: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 27733: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 27734: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 27735: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 27736: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 27914: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 27915: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 27916: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 27917: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 27918: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 27919: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 27920: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 27921: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 27922: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 27923: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 27924: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 27925: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 27926: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 27927: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 27928: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 28092: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 28093: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 28094: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 28095: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 28096: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 28097: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 28098: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 28099: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 28100: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 28101: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 28102: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 28103: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 28104: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 28105: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 28106: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.10s leader 5, trace 28210: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 28278: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 28279: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 28280: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 28281: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 28282: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 28283: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 28284: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 28285: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 28286: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 28287: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 28288: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 28289: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 28290: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 28291: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 28292: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 28484: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 28485: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 28486: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 28487: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 28488: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 28489: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 28490: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 28491: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 28492: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 28493: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 28494: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 28495: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 28496: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 28497: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 28498: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 28688: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 28689: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 28690: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 28691: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 28692: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 28693: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 28694: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 28695: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 28696: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 28697: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 28698: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 28699: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 28700: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 28701: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 28702: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 28867: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 28868: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 28869: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 28870: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 28871: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 28872: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 28873: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 28874: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 28875: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 28876: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 28877: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 28878: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 28879: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 28880: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 28881: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 268.35s leader 5, trace 29023: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 268.35s leader 5, trace 29024: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 29056: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 29057: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 29058: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 29059: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 29060: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 29061: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 29062: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 29063: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 29064: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 29065: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 29066: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 29067: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 29068: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 29069: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 29070: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 29251: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 29252: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 29253: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 29254: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 29255: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 29256: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 29257: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 29258: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 29259: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 29260: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 29261: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 29262: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 29263: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 29264: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 29265: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 29442: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 29443: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 29444: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 29445: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 29446: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 29447: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 29448: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 29449: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 29450: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 29451: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 29452: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 29453: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 29454: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 29455: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 29456: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 284.10s leader 5, trace 29604: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 284.10s leader 5, trace 29605: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 29632: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 29633: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 29634: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 29635: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 29636: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 29637: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 29638: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 29639: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 29640: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 29641: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 29642: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 29643: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 29644: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 29645: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 29646: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 29817: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 29818: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 29819: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 29820: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 29821: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 29822: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 29823: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 29824: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 29825: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 29826: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 29827: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 29828: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 29829: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 29830: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 29831: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 30011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 30012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 30013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 30014: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 30015: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 30016: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 30017: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 30018: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 30019: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 30020: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 30021: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 30022: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 30023: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 30024: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 30025: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.90s leader 5, trace 30145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.90s leader 5, trace 30146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 30203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 30204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 30205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 30206: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 30207: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 30208: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 30209: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 30210: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 30211: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 30212: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 30213: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 30214: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 30215: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 30216: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 30217: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 30534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 30535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 30536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 30537: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 30538: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 30539: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 30540: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 30541: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 30542: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 30543: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 30544: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 30545: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 30546: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 30547: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 30548: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 30738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 30739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 30740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 30741: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 30742: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 30743: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 30744: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 30745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 30746: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 30747: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 30748: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 30749: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 30750: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 30751: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 30752: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 30961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 30962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 30963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 30964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 30965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 30966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 30967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 30968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 30969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 30970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 30971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 30972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 30973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 30974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 30975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 31158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 31159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 31160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 31161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 31162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 31163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 31164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 31165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 31166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 31167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 31168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 31169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 31170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 31171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 31172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 31349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 31350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 31351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 31352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 31353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 31354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 31355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 31356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 31357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 31358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 31359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 31360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 31361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 31362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 31363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 31524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 31525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 31526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 31527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 31528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 31529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 31530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 31531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 31532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 31533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 31534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 31535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 31536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 31537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 31538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 31718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 31719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 31720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 31721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 31722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 31723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 31724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 31725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 31726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 31727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 31728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 31729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 31730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 31731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 31732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 31900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 31901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 31902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 31903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 31904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 31905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 31906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 31907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 31908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 31909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 31910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 31911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 31912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 31913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 31914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 32097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 32098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 32099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 32100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 32101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 32102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 32103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 32104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 32105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 32106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 32107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 32108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 32109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 32110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 32111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 32274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 32275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 32276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 32277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 32278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 32279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 32280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 32281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 32282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 32283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 32284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 32285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 32286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 32287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 32288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 32462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 32463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 32464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 32465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 32466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 32467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 32468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 32469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 32470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 32471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 32472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 32473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 32474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 32475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 32476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 32649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 32650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 32651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 32652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 32653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 32654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 32655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 32656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 32657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 32658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 32659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 32660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 32661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 32662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 32663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Dane incapacitated
- 1: Cole incapacitated
- 1: Bren incapacitated
- 1: Ellis incapacitated
- 1: Soren incapacitated
- 1: Tern killed in action
- 1: Ash killed in action
- 1: Reed killed in action

## Outcome attribution

- 268.35s, evidence 3478: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 268.35s, evidence 29023: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205894 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29040}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 268.35s, evidence 29024: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.205894 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29040}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
