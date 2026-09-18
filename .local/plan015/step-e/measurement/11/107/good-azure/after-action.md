# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/11/107/good-azure/battle-107-1789673865063744649`

## Battle summary

**Azure** · 360 s · 645 shots.

### Turning points

- 26.9s, squad 4: contact (events line 253). First recorded contact.
- 38.7s, squad 0: withdrawal ([trace 4073](#trace-4073)). 78.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 116.5s, squad 0: withdrawal ([trace 9065](#trace-9065)). 118.9s, squad 0: took cover and returned fire.
- 118.7s, squad 0: help call ([trace 9496](#trace-9496)). No completion observed before termination.
- 122.5s, squad 0: withdrawal ([trace 9921](#trace-9921)). 217.8s, squad 0: advanced tactically.
- 128.4s, squad 0: help call ([trace 10307](#trace-10307)). No completion observed before termination.
- 212.2s, squad 0: help call ([trace 13345](#trace-13345)). No completion observed before termination.
- 222.4s, squad 0: withdrawal ([trace 13705](#trace-13705)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 82 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 563 shots, 4/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 30.9s, squad 0 chose took cover and returned fire ([trace 2222](#trace-2222)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
- 34.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477752 retreat threshold=0.500000 initiative=delegated ([trace 3386](#trace-3386)). Following evidence: None.

### Communication

214 matched deliveries (mean 0.28s, max 1.45s); 94 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.95s, squad 4, contact, evidence events line 253: First recorded contact; .
- 38.65s, squad 0, withdrawal, evidence 4073: BreakContact: believed ratio at least two without superiority; 78.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 116.55s, squad 0, withdrawal, evidence 9065: BreakContact: believed ratio at least two without superiority; 118.9s, squad 0: took cover and returned fire.
- 118.65s, squad 0, help call, evidence 9496: NeedSupport; No completion observed before termination.
- 122.45s, squad 0, withdrawal, evidence 9921: BreakContact: believed ratio at least two without superiority; 217.8s, squad 0: advanced tactically.
- 128.45s, squad 0, help call, evidence 10307: NeedSupport; No completion observed before termination.
- 212.20s, squad 0, help call, evidence 13345: NeedSupport; No completion observed before termination.
- 222.45s, squad 0, withdrawal, evidence 13705: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200233897180495, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
<a id="trace-539"></a>
<a id="trace-557"></a>
<a id="trace-570"></a>
<a id="trace-586"></a>
<a id="trace-607"></a>
<a id="trace-628"></a>
<a id="trace-640"></a>
<a id="trace-648"></a>
<a id="trace-730"></a>
<a id="trace-739"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999850983113997, 'next_transition': 431}.
<a id="trace-559"></a>
<a id="trace-609"></a>
<a id="trace-630"></a>
<a id="trace-650"></a>
<a id="trace-732"></a>
<a id="trace-741"></a>
<a id="trace-958"></a>
<a id="trace-1003"></a>
<a id="trace-1083"></a>
<a id="trace-1101"></a>
<a id="trace-1196"></a>
<a id="trace-1253"></a>
<a id="trace-1266"></a>
<a id="trace-1287"></a>
<a id="trace-1301"></a>
<a id="trace-1326"></a>
<a id="trace-1409"></a>
<a id="trace-1430"></a>
<a id="trace-1453"></a>
<a id="trace-1475"></a>
<a id="trace-1485"></a>
<a id="trace-1832"></a>
<a id="trace-1850"></a>
<a id="trace-1871"></a>
<a id="trace-1892"></a>
<a id="trace-1975"></a>
<a id="trace-1990"></a>
<a id="trace-2054"></a>
<a id="trace-2069"></a>
<a id="trace-2086"></a>
<a id="trace-2099"></a>
<a id="trace-2114"></a>
<a id="trace-2126"></a>
<a id="trace-2205"></a>
<a id="trace-2216"></a>
<a id="trace-2725"></a>
<a id="trace-3238"></a>
<a id="trace-3264"></a>
<a id="trace-3305"></a>
<a id="trace-3322"></a>
<a id="trace-3340"></a>
<a id="trace-3371"></a>
<a id="trace-3969"></a>
<a id="trace-3984"></a>
<a id="trace-3999"></a>
<a id="trace-4009"></a>
<a id="trace-4047"></a>
<a id="trace-4411"></a>
<a id="trace-4438"></a>
<a id="trace-4602"></a>
<a id="trace-4702"></a>
<a id="trace-4737"></a>
<a id="trace-4774"></a>
<a id="trace-4784"></a>
<a id="trace-4796"></a>
<a id="trace-4803"></a>
<a id="trace-4817"></a>
<a id="trace-4909"></a>
<a id="trace-4920"></a>
<a id="trace-4940"></a>
<a id="trace-4949"></a>
<a id="trace-4962"></a>
<a id="trace-4968"></a>
<a id="trace-4998"></a>
<a id="trace-5011"></a>
<a id="trace-5123"></a>
<a id="trace-5136"></a>
<a id="trace-5157"></a>
<a id="trace-5276"></a>
<a id="trace-5311"></a>
<a id="trace-5329"></a>
<a id="trace-5348"></a>
<a id="trace-5367"></a>
<a id="trace-5411"></a>
<a id="trace-5492"></a>
<a id="trace-5501"></a>
<a id="trace-5530"></a>
<a id="trace-5545"></a>
<a id="trace-5562"></a>
<a id="trace-5597"></a>
<a id="trace-5611"></a>
<a id="trace-5618"></a>
<a id="trace-5704"></a>
<a id="trace-5716"></a>
<a id="trace-5727"></a>
<a id="trace-5751"></a>
<a id="trace-5771"></a>
<a id="trace-5778"></a>
<a id="trace-5795"></a>
<a id="trace-5876"></a>
<a id="trace-5883"></a>
<a id="trace-5904"></a>
<a id="trace-5912"></a>
<a id="trace-5925"></a>
<a id="trace-6120"></a>
<a id="trace-6156"></a>
<a id="trace-6172"></a>
<a id="trace-6190"></a>
<a id="trace-6283"></a>
<a id="trace-6301"></a>
<a id="trace-6315"></a>
<a id="trace-6324"></a>
<a id="trace-6344"></a>
<a id="trace-6352"></a>
<a id="trace-6378"></a>
<a id="trace-6393"></a>
<a id="trace-6402"></a>
<a id="trace-6483"></a>
<a id="trace-6492"></a>
<a id="trace-6514"></a>
<a id="trace-6532"></a>
<a id="trace-6570"></a>
<a id="trace-6600"></a>
<a id="trace-6714"></a>
<a id="trace-6990"></a>
<a id="trace-7020"></a>
<a id="trace-7036"></a>
<a id="trace-7058"></a>
<a id="trace-7065"></a>
<a id="trace-7086"></a>
<a id="trace-7162"></a>
<a id="trace-7171"></a>
<a id="trace-7193"></a>
<a id="trace-7201"></a>
<a id="trace-7214"></a>
<a id="trace-7251"></a>
<a id="trace-7264"></a>
<a id="trace-7356"></a>
<a id="trace-7381"></a>
<a id="trace-7500"></a>
<a id="trace-7517"></a>
<a id="trace-7531"></a>
<a id="trace-7554"></a>
<a id="trace-7565"></a>
<a id="trace-7594"></a>
<a id="trace-7609"></a>
<a id="trace-7688"></a>
<a id="trace-7707"></a>
<a id="trace-7715"></a>
<a id="trace-7733"></a>
<a id="trace-7742"></a>
<a id="trace-7757"></a>
<a id="trace-7916"></a>
<a id="trace-7925"></a>
<a id="trace-7935"></a>
<a id="trace-8026"></a>
<a id="trace-8090"></a>
<a id="trace-8105"></a>
<a id="trace-8114"></a>
<a id="trace-8130"></a>
<a id="trace-8234"></a>
<a id="trace-8247"></a>
<a id="trace-8261"></a>
<a id="trace-8272"></a>
<a id="trace-8385"></a>
<a id="trace-8399"></a>
<a id="trace-8414"></a>
<a id="trace-8440"></a>
<a id="trace-8449"></a>
<a id="trace-8582"></a>
<a id="trace-8600"></a>
<a id="trace-8611"></a>
<a id="trace-8879"></a>
<a id="trace-8891"></a>
<a id="trace-8914"></a>
<a id="trace-9013"></a>
<a id="trace-9411"></a>
<a id="trace-9432"></a>
<a id="trace-9455"></a>
<a id="trace-9858"></a>
<a id="trace-9896"></a>
<a id="trace-9915"></a>
<a id="trace-10084"></a>
- 6.70s–122.75s (×173), actor 37, squad 4 (trace 559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09450152262342243, 'next_transition': 609}.
<a id="trace-745"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 745): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3999941401966107, 'next_transition': 956}.
<a id="trace-956"></a>
<a id="trace-979"></a>
<a id="trace-1001"></a>
<a id="trace-1019"></a>
<a id="trace-1038"></a>
<a id="trace-1056"></a>
<a id="trace-1081"></a>
<a id="trace-1099"></a>
<a id="trace-1180"></a>
<a id="trace-1194"></a>
<a id="trace-1217"></a>
<a id="trace-1236"></a>
<a id="trace-1251"></a>
<a id="trace-1264"></a>
<a id="trace-1285"></a>
<a id="trace-1299"></a>
<a id="trace-1315"></a>
<a id="trace-1324"></a>
<a id="trace-1407"></a>
<a id="trace-1428"></a>
<a id="trace-1441"></a>
<a id="trace-1451"></a>
<a id="trace-1473"></a>
<a id="trace-1483"></a>
- 11.20s–22.75s (×24), actor 5, squad 0 (trace 956): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 655. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33926284563284353, 'next_transition': 979}.
<a id="trace-1489"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1489): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1332. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23243177663516337, 'next_transition': 1830}.
<a id="trace-1490"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1490): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1332. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23243177663516337, 'next_transition': 1830}.
<a id="trace-1830"></a>
<a id="trace-1848"></a>
<a id="trace-1869"></a>
<a id="trace-1890"></a>
<a id="trace-1973"></a>
<a id="trace-1988"></a>
<a id="trace-2019"></a>
<a id="trace-2034"></a>
<a id="trace-2052"></a>
<a id="trace-2067"></a>
<a id="trace-2084"></a>
<a id="trace-2097"></a>
<a id="trace-2112"></a>
<a id="trace-2124"></a>
<a id="trace-2203"></a>
<a id="trace-2214"></a>
- 23.25s–30.75s (×16), actor 5, squad 0 (trace 1830): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1335. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574958387423926, 'next_transition': 1848}.
<a id="trace-2222"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2222): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2128. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8412748078994108, 'next_transition': 2723}.
<a id="trace-2223"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2223): bounding overwatch. Knowledge: actor memory at 30.00s, trace 2128. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8412748078994108, 'next_transition': 2723}.
<a id="trace-2224"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 2224): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2128. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8412748078994108, 'next_transition': 2723}.
<a id="trace-2723"></a>
- 31.25s–31.25s (×1), actor 5, squad 0 (trace 2723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2131. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24827894563579353, 'next_transition': 2732}.
<a id="trace-2732"></a>
- 31.50s–31.50s (×1), actor 0, squad 0 (trace 2732): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2128. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24899044730941244, 'next_transition': 3236}.
<a id="trace-3236"></a>
<a id="trace-3262"></a>
<a id="trace-3303"></a>
<a id="trace-3320"></a>
<a id="trace-3338"></a>
- 31.75s–33.75s (×5), actor 5, squad 0 (trace 3236): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2131. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6108192245290842, 'next_transition': 3262}.
<a id="trace-3354"></a>
- 34.05s–34.05s (×1), actor 5, squad 0 (trace 3354): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 34.05s, trace 3354. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20953358841139877, 'next_transition': 3369}.
<a id="trace-3369"></a>
- 34.25s–34.25s (×1), actor 5, squad 0 (trace 3369): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.05s, trace 3354. Next observer evidence: {'until': 34.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.419998993080731, 'next_transition': 341}.
<a id="trace-341"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (events line 341): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3386"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 3386): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477752 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 3386. Next observer evidence: None.
<a id="trace-3387"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 3387): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477752 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 3387. Next observer evidence: None.
<a id="trace-3390"></a>
- 34.75s–34.75s (×1), actor 5, squad 0 (trace 3390): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.65s, trace 3387. Next observer evidence: {'until': 34.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.12343083210274014, 'next_transition': 3404}.
<a id="trace-3404"></a>
- 34.95s–34.95s (×1), actor 0, squad 0 (trace 3404): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2128. Next observer evidence: {'until': 35.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.21000172264505093, 'next_transition': 3953}.
<a id="trace-3953"></a>
<a id="trace-3967"></a>
<a id="trace-3982"></a>
<a id="trace-3997"></a>
<a id="trace-4007"></a>
<a id="trace-4018"></a>
<a id="trace-4045"></a>
- 35.25s–38.25s (×7), actor 5, squad 0 (trace 3953): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3881. Next observer evidence: {'until': 35.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.20999287970071737, 'next_transition': 3967}.
<a id="trace-4073"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4073): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 35.00s, trace 3878. Next observer evidence: None.
<a id="trace-4074"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4074): rearward bound: one stationary suppressing element. Knowledge: actor memory at 35.00s, trace 3878. Next observer evidence: None.
<a id="trace-4409"></a>
<a id="trace-4436"></a>
<a id="trace-4467"></a>
- 38.75s–39.75s (×3), actor 5, squad 0 (trace 4409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3881. Next observer evidence: {'until': 39.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.31553115240689594, 'next_transition': 4436}.
<a id="trace-4510"></a>
- 40.00s–40.00s (×1), actor 0, squad 0 (trace 4510): Fixing. Knowledge: actor memory at 40.00s, trace 4496. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2626752920392272, 'next_transition': 4600}.
<a id="trace-4600"></a>
<a id="trace-4655"></a>
- 40.25s–40.75s (×2), actor 5, squad 0 (trace 4600): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4499. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6303543537540396, 'next_transition': 4655}.
<a id="trace-4671"></a>
- 40.90s–40.90s (×1), actor 0, squad 0 (trace 4671): support established: element delivered fire on threat area. Knowledge: actor memory at 40.00s, trace 4496. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8396482467170626, 'next_transition': 4700}.
<a id="trace-4700"></a>
<a id="trace-4735"></a>
<a id="trace-4772"></a>
<a id="trace-4782"></a>
<a id="trace-4794"></a>
<a id="trace-4801"></a>
<a id="trace-4815"></a>
<a id="trace-4829"></a>
<a id="trace-4907"></a>
<a id="trace-4918"></a>
<a id="trace-4938"></a>
<a id="trace-4947"></a>
<a id="trace-4960"></a>
<a id="trace-4966"></a>
<a id="trace-4983"></a>
<a id="trace-4996"></a>
<a id="trace-5009"></a>
<a id="trace-5024"></a>
<a id="trace-5121"></a>
<a id="trace-5134"></a>
<a id="trace-5155"></a>
- 41.25s–51.25s (×21), actor 5, squad 0 (trace 4700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4499. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7902270718872941, 'next_transition': 4735}.
<a id="trace-5160"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 5160): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 5037. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3267073619446476, 'next_transition': 5274}.
<a id="trace-5161"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 5161): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 5037. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3267073619446476, 'next_transition': 5274}.
<a id="trace-5274"></a>
<a id="trace-5309"></a>
<a id="trace-5327"></a>
<a id="trace-5346"></a>
<a id="trace-5365"></a>
<a id="trace-5390"></a>
<a id="trace-5409"></a>
<a id="trace-5490"></a>
<a id="trace-5499"></a>
<a id="trace-5516"></a>
<a id="trace-5528"></a>
<a id="trace-5543"></a>
<a id="trace-5560"></a>
- 51.75s–57.75s (×13), actor 5, squad 0 (trace 5274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5040. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2754047494424789, 'next_transition': 5309}.
<a id="trace-5576"></a>
- 58.15s–58.15s (×1), actor 0, squad 0 (trace 5576): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 55.00s, trace 5422. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23085692926518345, 'next_transition': 5587}.
<a id="trace-5587"></a>
<a id="trace-5595"></a>
<a id="trace-5609"></a>
<a id="trace-5616"></a>
<a id="trace-5694"></a>
<a id="trace-5702"></a>
<a id="trace-5714"></a>
<a id="trace-5725"></a>
<a id="trace-5741"></a>
<a id="trace-5749"></a>
<a id="trace-5769"></a>
<a id="trace-5776"></a>
<a id="trace-5793"></a>
<a id="trace-5799"></a>
<a id="trace-5874"></a>
<a id="trace-5881"></a>
<a id="trace-5902"></a>
<a id="trace-5910"></a>
- 58.25s–66.75s (×18), actor 5, squad 0 (trace 5587): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 5425. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46395472324376597, 'next_transition': 5595}.
<a id="trace-5914"></a>
- 67.05s–67.05s (×1), actor 5, squad 0 (trace 5914): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 67.05s, trace 5914. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5923}.
<a id="trace-5923"></a>
- 67.25s–67.25s (×1), actor 5, squad 0 (trace 5923): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.05s, trace 5914. Next observer evidence: None.
<a id="trace-5931"></a>
- 67.35s–67.35s (×1), actor 0, squad 0 (trace 5931): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 5806. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6118}.
<a id="trace-6009"></a>
- 67.35s–67.35s (×1), actor 0, squad 0 (trace 6009): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 5806. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6118}.
<a id="trace-6118"></a>
<a id="trace-6140"></a>
<a id="trace-6154"></a>
<a id="trace-6170"></a>
<a id="trace-6188"></a>
<a id="trace-6281"></a>
<a id="trace-6299"></a>
<a id="trace-6313"></a>
<a id="trace-6322"></a>
<a id="trace-6342"></a>
<a id="trace-6350"></a>
<a id="trace-6364"></a>
<a id="trace-6376"></a>
<a id="trace-6391"></a>
<a id="trace-6400"></a>
<a id="trace-6481"></a>
<a id="trace-6490"></a>
<a id="trace-6506"></a>
<a id="trace-6512"></a>
<a id="trace-6530"></a>
<a id="trace-6547"></a>
<a id="trace-6568"></a>
- 67.75s–78.25s (×22), actor 5, squad 0 (trace 6118): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.05s, trace 5914. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6140}.
<a id="trace-6586"></a>
- 78.65s–78.65s (×1), actor 0, squad 0 (trace 6586): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 6412. Next observer evidence: None.
<a id="trace-6598"></a>
<a id="trace-6611"></a>
- 78.75s–79.25s (×2), actor 5, squad 0 (trace 6598): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 6415. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6611}.
<a id="trace-6621"></a>
- 79.35s–79.35s (×1), actor 0, squad 0 (trace 6621): MoveTactically. Knowledge: actor memory at 75.00s, trace 6412. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6712}.
<a id="trace-6622"></a>
- 79.35s–79.35s (×1), actor 0, squad 0 (trace 6622): received platoon directive. Knowledge: actor memory at 75.00s, trace 6412. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6712}.
<a id="trace-6712"></a>
- 79.75s–79.75s (×1), actor 5, squad 0 (trace 6712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 6415. Next observer evidence: {'until': 79.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02624585152404459, 'next_transition': 6725}.
<a id="trace-6725"></a>
- 79.95s–79.95s (×1), actor 0, squad 0 (trace 6725): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 6412. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2625011027216668, 'next_transition': 6914}.
<a id="trace-6914"></a>
<a id="trace-6935"></a>
<a id="trace-6965"></a>
<a id="trace-6988"></a>
<a id="trace-7018"></a>
<a id="trace-7034"></a>
<a id="trace-7056"></a>
<a id="trace-7063"></a>
<a id="trace-7076"></a>
<a id="trace-7084"></a>
<a id="trace-7160"></a>
<a id="trace-7169"></a>
<a id="trace-7191"></a>
<a id="trace-7199"></a>
<a id="trace-7212"></a>
<a id="trace-7229"></a>
<a id="trace-7240"></a>
<a id="trace-7249"></a>
<a id="trace-7262"></a>
<a id="trace-7273"></a>
<a id="trace-7354"></a>
<a id="trace-7370"></a>
<a id="trace-7379"></a>
- 80.25s–91.25s (×23), actor 5, squad 0 (trace 6914): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 6833. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.262518183686582, 'next_transition': 6935}.
<a id="trace-7383"></a>
- 91.35s–91.35s (×1), actor 0, squad 0 (trace 7383): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 7278. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119958870645125, 'next_transition': 7390}.
<a id="trace-7390"></a>
- 91.65s–91.65s (×1), actor 0, squad 0 (trace 7390): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 7278. Next observer evidence: None.
<a id="trace-7498"></a>
<a id="trace-7515"></a>
<a id="trace-7529"></a>
<a id="trace-7552"></a>
<a id="trace-7563"></a>
<a id="trace-7592"></a>
<a id="trace-7607"></a>
- 91.75s–94.75s (×7), actor 5, squad 0 (trace 7498): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 7281. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679644696413473, 'next_transition': 7515}.
<a id="trace-799"></a>
- 95.75s–95.75s (×1), actor 5, squad 0 (events line 799): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5823073727052922, 'next_transition': 7705}.
<a id="trace-7686"></a>
- 95.75s–95.75s (×1), actor 5, squad 0 (trace 7686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 7614. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5823073727052922, 'next_transition': 7705}.
<a id="trace-7689"></a>
- 95.75s–95.75s (×1), actor 5, squad 0 (trace 7689): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.75s, trace 7689. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5823073727052922, 'next_transition': 7705}.
<a id="trace-7705"></a>
<a id="trace-7713"></a>
<a id="trace-7731"></a>
<a id="trace-7740"></a>
<a id="trace-7755"></a>
- 96.25s–98.25s (×5), actor 5, squad 0 (trace 7705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.75s, trace 7689. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3612006664610175, 'next_transition': 7713}.
<a id="trace-7764"></a>
- 98.60s–98.60s (×1), actor 0, squad 0 (trace 7764): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 7611. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560102835867298, 'next_transition': 7914}.
<a id="trace-7914"></a>
<a id="trace-7923"></a>
<a id="trace-7933"></a>
<a id="trace-8011"></a>
<a id="trace-8024"></a>
<a id="trace-8046"></a>
<a id="trace-8056"></a>
<a id="trace-8076"></a>
<a id="trace-8088"></a>
<a id="trace-8103"></a>
<a id="trace-8112"></a>
<a id="trace-8128"></a>
<a id="trace-8138"></a>
<a id="trace-8223"></a>
<a id="trace-8232"></a>
<a id="trace-8245"></a>
<a id="trace-8259"></a>
<a id="trace-8270"></a>
- 98.75s–107.25s (×18), actor 5, squad 0 (trace 7914): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.75s, trace 7689. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268032252979564, 'next_transition': 7923}.
<a id="trace-8276"></a>
- 107.55s–107.55s (×1), actor 0, squad 0 (trace 8276): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 8149. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16061025323831588, 'next_transition': 8383}.
<a id="trace-8383"></a>
<a id="trace-8397"></a>
- 107.75s–108.25s (×2), actor 5, squad 0 (trace 8383): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 8152. Next observer evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.48180632215155145, 'next_transition': 8397}.
<a id="trace-8405"></a>
- 108.55s–108.55s (×1), actor 5, squad 0 (trace 8405): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 108.55s, trace 8405. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16059497405790532, 'next_transition': 8412}.
<a id="trace-8412"></a>
<a id="trace-8438"></a>
<a id="trace-8447"></a>
<a id="trace-8533"></a>
<a id="trace-8559"></a>
<a id="trace-8572"></a>
<a id="trace-8580"></a>
<a id="trace-8598"></a>
<a id="trace-8609"></a>
- 108.75s–112.75s (×9), actor 5, squad 0 (trace 8412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.55s, trace 8405. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.083165426814736, 'next_transition': 8438}.
<a id="trace-8615"></a>
- 112.80s–112.80s (×1), actor 0, squad 0 (trace 8615): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 8454. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8465189971337951, 'next_transition': 8877}.
<a id="trace-8616"></a>
- 112.80s–112.80s (×1), actor 0, squad 0 (trace 8616): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 8454. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8465189971337951, 'next_transition': 8877}.
<a id="trace-8877"></a>
<a id="trace-8889"></a>
<a id="trace-8912"></a>
<a id="trace-8937"></a>
<a id="trace-9011"></a>
<a id="trace-9046"></a>
<a id="trace-9058"></a>
- 113.25s–116.25s (×7), actor 5, squad 0 (trace 8877): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 8457. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9591759123283975, 'next_transition': 8889}.
<a id="trace-9065"></a>
- 116.55s–116.55s (×1), actor 0, squad 0 (trace 9065): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100002850564124, 'next_transition': 9409}.
<a id="trace-9066"></a>
- 116.55s–116.55s (×1), actor 0, squad 0 (trace 9066): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: {'until': 116.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100002850564124, 'next_transition': 9409}.
<a id="trace-9409"></a>
<a id="trace-9430"></a>
<a id="trace-9453"></a>
<a id="trace-9476"></a>
- 116.75s–118.25s (×4), actor 5, squad 0 (trace 9409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 8943. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.23479931783825, 'next_transition': 9430}.
<a id="trace-9495"></a>
- 118.65s–118.65s (×1), actor 0, squad 0 (trace 9495): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: None.
<a id="trace-9496"></a>
- 118.65s–118.65s (×1), actor 0, squad 0 (trace 9496): NeedSupport. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: None.
<a id="trace-9504"></a>
- 118.75s–118.75s (×1), actor 5, squad 0 (trace 9504): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 8943. Next observer evidence: {'until': 118.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25199609765442704, 'next_transition': 9507}.
<a id="trace-9507"></a>
- 118.90s–118.90s (×1), actor 0, squad 0 (trace 9507): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039888230547778, 'next_transition': 9736}.
<a id="trace-9511"></a>
- 118.90s–118.90s (×1), actor 0, squad 0 (trace 9511): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039888230547778, 'next_transition': 9736}.
<a id="trace-9512"></a>
- 118.90s–118.90s (×1), actor 0, squad 0 (trace 9512): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 8940. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039888230547778, 'next_transition': 9736}.
<a id="trace-9736"></a>
<a id="trace-9762"></a>
<a id="trace-9843"></a>
<a id="trace-9856"></a>
<a id="trace-9876"></a>
<a id="trace-9894"></a>
<a id="trace-9913"></a>
- 119.25s–122.25s (×7), actor 5, squad 0 (trace 9736): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 8943. Next observer evidence: {'until': 119.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.567019069697112, 'next_transition': 9762}.
<a id="trace-9921"></a>
- 122.45s–122.45s (×1), actor 0, squad 0 (trace 9921): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 120.00s, trace 9765. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4055306150682104, 'next_transition': 10082}.
<a id="trace-9922"></a>
- 122.45s–122.45s (×1), actor 0, squad 0 (trace 9922): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 9765. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4055306150682104, 'next_transition': 10082}.
<a id="trace-10082"></a>
<a id="trace-10094"></a>
<a id="trace-10112"></a>
<a id="trace-10129"></a>
<a id="trace-10142"></a>
<a id="trace-10225"></a>
<a id="trace-10236"></a>
<a id="trace-10259"></a>
<a id="trace-10267"></a>
<a id="trace-10278"></a>
<a id="trace-10288"></a>
<a id="trace-10302"></a>
- 122.75s–128.30s (×12), actor 5, squad 0 (trace 10082): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 9768. Next observer evidence: {'until': 123.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0281621251782427, 'next_transition': 10094}.
<a id="trace-10257"></a>
<a id="trace-10276"></a>
<a id="trace-10300"></a>
<a id="trace-10327"></a>
<a id="trace-10414"></a>
<a id="trace-10430"></a>
<a id="trace-10450"></a>
<a id="trace-10469"></a>
<a id="trace-10485"></a>
<a id="trace-10569"></a>
<a id="trace-10590"></a>
<a id="trace-10613"></a>
<a id="trace-10635"></a>
<a id="trace-10763"></a>
<a id="trace-10858"></a>
<a id="trace-10885"></a>
<a id="trace-10914"></a>
<a id="trace-10935"></a>
<a id="trace-10956"></a>
<a id="trace-11038"></a>
<a id="trace-11053"></a>
<a id="trace-11071"></a>
<a id="trace-11236"></a>
<a id="trace-11268"></a>
<a id="trace-11355"></a>
<a id="trace-11384"></a>
<a id="trace-11403"></a>
<a id="trace-11423"></a>
<a id="trace-11445"></a>
<a id="trace-11526"></a>
<a id="trace-11546"></a>
<a id="trace-11570"></a>
<a id="trace-11591"></a>
<a id="trace-11619"></a>
<a id="trace-11696"></a>
<a id="trace-11822"></a>
<a id="trace-11857"></a>
<a id="trace-11885"></a>
<a id="trace-11912"></a>
<a id="trace-12010"></a>
<a id="trace-12030"></a>
<a id="trace-12206"></a>
<a id="trace-12237"></a>
<a id="trace-12322"></a>
<a id="trace-12348"></a>
<a id="trace-12363"></a>
<a id="trace-12381"></a>
<a id="trace-12403"></a>
<a id="trace-12485"></a>
<a id="trace-12501"></a>
<a id="trace-12521"></a>
<a id="trace-12539"></a>
<a id="trace-12560"></a>
<a id="trace-12631"></a>
<a id="trace-12647"></a>
<a id="trace-12658"></a>
<a id="trace-12670"></a>
<a id="trace-12738"></a>
<a id="trace-12749"></a>
<a id="trace-12761"></a>
<a id="trace-12775"></a>
<a id="trace-12876"></a>
<a id="trace-12887"></a>
<a id="trace-12898"></a>
<a id="trace-12965"></a>
<a id="trace-12975"></a>
<a id="trace-12989"></a>
<a id="trace-13002"></a>
<a id="trace-13019"></a>
<a id="trace-13091"></a>
<a id="trace-13100"></a>
<a id="trace-13112"></a>
<a id="trace-13126"></a>
<a id="trace-13140"></a>
<a id="trace-13207"></a>
<a id="trace-13215"></a>
<a id="trace-13227"></a>
<a id="trace-13240"></a>
<a id="trace-13257"></a>
<a id="trace-13328"></a>
<a id="trace-13337"></a>
<a id="trace-13353"></a>
<a id="trace-13369"></a>
<a id="trace-13455"></a>
<a id="trace-13467"></a>
<a id="trace-13485"></a>
<a id="trace-13559"></a>
<a id="trace-13585"></a>
<a id="trace-13659"></a>
<a id="trace-13684"></a>
<a id="trace-13698"></a>
<a id="trace-13773"></a>
<a id="trace-13794"></a>
<a id="trace-13877"></a>
<a id="trace-13892"></a>
<a id="trace-13911"></a>
<a id="trace-13930"></a>
<a id="trace-13952"></a>
<a id="trace-14026"></a>
<a id="trace-14045"></a>
<a id="trace-14066"></a>
<a id="trace-14088"></a>
<a id="trace-14109"></a>
<a id="trace-14241"></a>
<a id="trace-14267"></a>
<a id="trace-14292"></a>
<a id="trace-14314"></a>
<a id="trace-14334"></a>
<a id="trace-14430"></a>
<a id="trace-14447"></a>
<a id="trace-14466"></a>
<a id="trace-14489"></a>
<a id="trace-14568"></a>
<a id="trace-14586"></a>
<a id="trace-14610"></a>
<a id="trace-14638"></a>
<a id="trace-14663"></a>
<a id="trace-14742"></a>
<a id="trace-14757"></a>
<a id="trace-14770"></a>
<a id="trace-14784"></a>
<a id="trace-14798"></a>
<a id="trace-14871"></a>
<a id="trace-14882"></a>
<a id="trace-14895"></a>
<a id="trace-14909"></a>
<a id="trace-14923"></a>
<a id="trace-14995"></a>
<a id="trace-15007"></a>
<a id="trace-15020"></a>
<a id="trace-15034"></a>
<a id="trace-15048"></a>
<a id="trace-15120"></a>
<a id="trace-15144"></a>
<a id="trace-15158"></a>
<a id="trace-15172"></a>
<a id="trace-15244"></a>
<a id="trace-15255"></a>
<a id="trace-15268"></a>
<a id="trace-15283"></a>
<a id="trace-15297"></a>
<a id="trace-15369"></a>
<a id="trace-15380"></a>
<a id="trace-15393"></a>
<a id="trace-15407"></a>
<a id="trace-15422"></a>
<a id="trace-15494"></a>
<a id="trace-15505"></a>
<a id="trace-15520"></a>
<a id="trace-15534"></a>
<a id="trace-15548"></a>
<a id="trace-15621"></a>
<a id="trace-15632"></a>
<a id="trace-15645"></a>
<a id="trace-15659"></a>
<a id="trace-15744"></a>
<a id="trace-15756"></a>
<a id="trace-15769"></a>
<a id="trace-15783"></a>
<a id="trace-15797"></a>
<a id="trace-15868"></a>
<a id="trace-15879"></a>
<a id="trace-15893"></a>
<a id="trace-15907"></a>
<a id="trace-15921"></a>
<a id="trace-15993"></a>
<a id="trace-16005"></a>
<a id="trace-16019"></a>
<a id="trace-16034"></a>
<a id="trace-16048"></a>
<a id="trace-16120"></a>
<a id="trace-16131"></a>
<a id="trace-16144"></a>
<a id="trace-16158"></a>
<a id="trace-16173"></a>
<a id="trace-16245"></a>
<a id="trace-16256"></a>
<a id="trace-16269"></a>
<a id="trace-16283"></a>
<a id="trace-16297"></a>
<a id="trace-16370"></a>
<a id="trace-16381"></a>
<a id="trace-16394"></a>
<a id="trace-16410"></a>
<a id="trace-16424"></a>
<a id="trace-16496"></a>
<a id="trace-16508"></a>
<a id="trace-16520"></a>
<a id="trace-16548"></a>
<a id="trace-16620"></a>
<a id="trace-16631"></a>
<a id="trace-16644"></a>
<a id="trace-16659"></a>
<a id="trace-16673"></a>
<a id="trace-16745"></a>
<a id="trace-16756"></a>
<a id="trace-16768"></a>
<a id="trace-16784"></a>
<a id="trace-16800"></a>
<a id="trace-16872"></a>
<a id="trace-16883"></a>
<a id="trace-16895"></a>
<a id="trace-16909"></a>
<a id="trace-16925"></a>
<a id="trace-16997"></a>
<a id="trace-17008"></a>
<a id="trace-17020"></a>
<a id="trace-17036"></a>
<a id="trace-17051"></a>
<a id="trace-17124"></a>
<a id="trace-17135"></a>
<a id="trace-17147"></a>
<a id="trace-17161"></a>
<a id="trace-17176"></a>
<a id="trace-17250"></a>
<a id="trace-17262"></a>
<a id="trace-17274"></a>
<a id="trace-17288"></a>
<a id="trace-17302"></a>
<a id="trace-17375"></a>
<a id="trace-17386"></a>
<a id="trace-17399"></a>
<a id="trace-17413"></a>
<a id="trace-17427"></a>
- 126.25s–359.30s (×224), actor 38, squad 4 (trace 10257): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 125.00s, trace 10163. Next observer evidence: {'until': 127.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10276}.
<a id="trace-10307"></a>
- 128.45s–128.45s (×1), actor 0, squad 0 (trace 10307): NeedSupport. Knowledge: actor memory at 125.00s, trace 10157. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.346505386093857, 'next_transition': 10318}.
<a id="trace-10318"></a>
<a id="trace-10329"></a>
<a id="trace-10338"></a>
<a id="trace-10416"></a>
<a id="trace-10424"></a>
<a id="trace-10432"></a>
<a id="trace-10439"></a>
<a id="trace-10452"></a>
<a id="trace-10460"></a>
<a id="trace-10471"></a>
<a id="trace-10476"></a>
<a id="trace-10487"></a>
<a id="trace-10501"></a>
<a id="trace-10571"></a>
<a id="trace-10578"></a>
<a id="trace-10592"></a>
<a id="trace-10602"></a>
<a id="trace-10615"></a>
<a id="trace-10623"></a>
<a id="trace-10637"></a>
- 128.80s–138.30s (×20), actor 5, squad 0 (trace 10318): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 10160. Next observer evidence: {'until': 129.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6627630952117947, 'next_transition': 10329}.
<a id="trace-10648"></a>
- 138.60s–138.60s (×1), actor 0, squad 0 (trace 10648): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 10505. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16526378431978708, 'next_transition': 10758}.
<a id="trace-10649"></a>
- 138.60s–138.60s (×1), actor 0, squad 0 (trace 10649): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 10505. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16526378431978708, 'next_transition': 10758}.
<a id="trace-10758"></a>
<a id="trace-10765"></a>
<a id="trace-10784"></a>
<a id="trace-10860"></a>
<a id="trace-10870"></a>
<a id="trace-10887"></a>
<a id="trace-10904"></a>
<a id="trace-10916"></a>
<a id="trace-10928"></a>
<a id="trace-10937"></a>
<a id="trace-10945"></a>
<a id="trace-10958"></a>
<a id="trace-10967"></a>
<a id="trace-11040"></a>
<a id="trace-11044"></a>
<a id="trace-11055"></a>
<a id="trace-11065"></a>
<a id="trace-11073"></a>
<a id="trace-11077"></a>
- 138.80s–147.80s (×19), actor 5, squad 0 (trace 10758): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 10508. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2414102513016021, 'next_transition': 10765}.
<a id="trace-11081"></a>
- 147.95s–147.95s (×1), actor 0, squad 0 (trace 11081): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 10974. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144002755731706, 'next_transition': 11238}.
<a id="trace-11173"></a>
- 147.95s–147.95s (×1), actor 0, squad 0 (trace 11173): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 10974. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144002755731706, 'next_transition': 11238}.
<a id="trace-11238"></a>
<a id="trace-11253"></a>
<a id="trace-11270"></a>
<a id="trace-11279"></a>
<a id="trace-11357"></a>
<a id="trace-11373"></a>
<a id="trace-11386"></a>
<a id="trace-11392"></a>
<a id="trace-11405"></a>
<a id="trace-11413"></a>
<a id="trace-11425"></a>
<a id="trace-11432"></a>
<a id="trace-11447"></a>
<a id="trace-11458"></a>
<a id="trace-11528"></a>
<a id="trace-11532"></a>
- 148.30s–155.80s (×16), actor 5, squad 0 (trace 11238): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 10977. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2898040880544154, 'next_transition': 11253}.
<a id="trace-1175"></a>
- 155.95s–155.95s (×1), actor 5, squad 0 (events line 1175): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43345032899147357, 'next_transition': 11548}.
<a id="trace-11535"></a>
- 155.95s–155.95s (×1), actor 5, squad 0 (trace 11535): renew committed intent (75 s lifetime). Knowledge: actor memory at 155.95s, trace 11535. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43345032899147357, 'next_transition': 11548}.
<a id="trace-11548"></a>
<a id="trace-11557"></a>
<a id="trace-11572"></a>
<a id="trace-11577"></a>
<a id="trace-11593"></a>
<a id="trace-11607"></a>
<a id="trace-11621"></a>
<a id="trace-11624"></a>
<a id="trace-11698"></a>
- 156.30s–160.30s (×9), actor 5, squad 0 (trace 11548): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.95s, trace 11535. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.708777898254325, 'next_transition': 11557}.
<a id="trace-11702"></a>
- 160.70s–160.70s (×1), actor 0, squad 0 (trace 11702): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 11629. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1081857377114143, 'next_transition': 11814}.
<a id="trace-11703"></a>
- 160.70s–160.70s (×1), actor 0, squad 0 (trace 11703): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 11629. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1081857377114143, 'next_transition': 11814}.
<a id="trace-11814"></a>
<a id="trace-11824"></a>
<a id="trace-11837"></a>
<a id="trace-11859"></a>
<a id="trace-11867"></a>
<a id="trace-11887"></a>
<a id="trace-11902"></a>
<a id="trace-11914"></a>
<a id="trace-11924"></a>
<a id="trace-11994"></a>
<a id="trace-11999"></a>
<a id="trace-12012"></a>
<a id="trace-12021"></a>
<a id="trace-12032"></a>
- 160.80s–167.30s (×14), actor 5, squad 0 (trace 11814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 11632. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.592210343855727, 'next_transition': 11824}.
<a id="trace-12037"></a>
- 167.75s–167.75s (×1), actor 0, squad 0 (trace 12037): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 11929. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09071831623216996, 'next_transition': 12195}.
<a id="trace-12139"></a>
- 167.75s–167.75s (×1), actor 0, squad 0 (trace 12139): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 11929. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09071831623216996, 'next_transition': 12195}.
<a id="trace-12195"></a>
<a id="trace-12208"></a>
<a id="trace-12221"></a>
<a id="trace-12239"></a>
<a id="trace-12242"></a>
<a id="trace-12324"></a>
<a id="trace-12343"></a>
<a id="trace-12350"></a>
<a id="trace-12355"></a>
<a id="trace-12365"></a>
<a id="trace-12372"></a>
<a id="trace-12383"></a>
<a id="trace-12392"></a>
<a id="trace-12405"></a>
<a id="trace-12415"></a>
<a id="trace-12487"></a>
<a id="trace-12491"></a>
<a id="trace-12503"></a>
<a id="trace-12510"></a>
<a id="trace-12523"></a>
<a id="trace-12530"></a>
<a id="trace-12541"></a>
<a id="trace-12548"></a>
<a id="trace-12562"></a>
<a id="trace-12566"></a>
<a id="trace-12633"></a>
<a id="trace-12637"></a>
<a id="trace-12641"></a>
<a id="trace-12644"></a>
<a id="trace-12649"></a>
<a id="trace-12653"></a>
<a id="trace-12660"></a>
<a id="trace-12663"></a>
<a id="trace-12672"></a>
<a id="trace-12675"></a>
<a id="trace-12740"></a>
<a id="trace-12745"></a>
<a id="trace-12751"></a>
<a id="trace-12756"></a>
<a id="trace-12763"></a>
<a id="trace-12767"></a>
<a id="trace-12777"></a>
<a id="trace-12781"></a>
<a id="trace-12787"></a>
<a id="trace-12791"></a>
<a id="trace-12855"></a>
<a id="trace-12858"></a>
<a id="trace-12863"></a>
<a id="trace-12869"></a>
<a id="trace-12878"></a>
<a id="trace-12881"></a>
<a id="trace-12889"></a>
<a id="trace-12893"></a>
<a id="trace-12900"></a>
<a id="trace-12903"></a>
<a id="trace-12967"></a>
<a id="trace-12971"></a>
<a id="trace-12977"></a>
<a id="trace-12981"></a>
<a id="trace-12991"></a>
<a id="trace-12995"></a>
<a id="trace-13004"></a>
<a id="trace-13013"></a>
<a id="trace-13021"></a>
<a id="trace-13025"></a>
<a id="trace-13093"></a>
<a id="trace-13095"></a>
<a id="trace-13102"></a>
<a id="trace-13108"></a>
<a id="trace-13114"></a>
<a id="trace-13117"></a>
<a id="trace-13128"></a>
<a id="trace-13134"></a>
<a id="trace-13142"></a>
<a id="trace-13145"></a>
<a id="trace-13209"></a>
<a id="trace-13211"></a>
<a id="trace-13217"></a>
<a id="trace-13220"></a>
<a id="trace-13229"></a>
<a id="trace-13234"></a>
<a id="trace-13242"></a>
<a id="trace-13250"></a>
<a id="trace-13259"></a>
<a id="trace-13264"></a>
<a id="trace-13330"></a>
<a id="trace-13332"></a>
<a id="trace-13339"></a>
<a id="trace-13342"></a>
- 167.80s–211.80s (×89), actor 5, squad 0 (trace 12195): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 11932. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144018740069667, 'next_transition': 12208}.
<a id="trace-13345"></a>
- 212.20s–212.20s (×1), actor 0, squad 0 (trace 13345): NeedSupport. Knowledge: actor memory at 210.00s, trace 13266. Next observer evidence: None.
<a id="trace-13355"></a>
<a id="trace-13361"></a>
<a id="trace-13371"></a>
<a id="trace-13381"></a>
<a id="trace-13387"></a>
<a id="trace-13392"></a>
<a id="trace-13457"></a>
<a id="trace-13459"></a>
- 212.30s–215.80s (×8), actor 5, squad 0 (trace 13355): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 13269. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08699396769891587, 'next_transition': 13361}.
<a id="trace-1366"></a>
- 215.95s–215.95s (×1), actor 5, squad 0 (events line 1366): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13469}.
<a id="trace-13460"></a>
- 215.95s–215.95s (×1), actor 5, squad 0 (trace 13460): renew committed intent (75 s lifetime). Knowledge: actor memory at 215.95s, trace 13460. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13469}.
<a id="trace-13469"></a>
- 216.30s–216.30s (×1), actor 5, squad 0 (trace 13469): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.95s, trace 13460. Next observer evidence: {'until': 216.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13472}.
<a id="trace-13472"></a>
- 216.75s–216.75s (×1), actor 1, squad 0 (trace 13472): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 215.00s, trace 13394. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07876462165845788, 'next_transition': 13476}.
<a id="trace-13476"></a>
<a id="trace-13487"></a>
- 216.80s–217.30s (×2), actor 5, squad 0 (trace 13476): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.95s, trace 13460. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5134381557271894, 'next_transition': 13487}.
<a id="trace-13488"></a>
- 217.75s–217.75s (×1), actor 1, squad 0 (trace 13488): Reorganise: completed/failed drill. Knowledge: actor memory at 215.00s, trace 13394. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708994816488294, 'next_transition': 13499}.
<a id="trace-13491"></a>
- 217.75s–217.75s (×1), actor 1, squad 0 (trace 13491): MoveTactically. Knowledge: actor memory at 215.00s, trace 13394. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708994816488294, 'next_transition': 13499}.
<a id="trace-13492"></a>
- 217.75s–217.75s (×1), actor 1, squad 0 (trace 13492): Reorganise complete. Knowledge: actor memory at 215.00s, trace 13394. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708994816488294, 'next_transition': 13499}.
<a id="trace-13499"></a>
- 217.80s–217.80s (×1), actor 5, squad 0 (trace 13499): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.95s, trace 13460. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418054894095716, 'next_transition': 13503}.
<a id="trace-13503"></a>
- 218.20s–218.20s (×1), actor 1, squad 0 (trace 13503): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 215.00s, trace 13394. Next observer evidence: None.
<a id="trace-13561"></a>
<a id="trace-13574"></a>
<a id="trace-13587"></a>
<a id="trace-13590"></a>
<a id="trace-13661"></a>
- 218.30s–220.30s (×5), actor 5, squad 0 (trace 13561): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.95s, trace 13460. Next observer evidence: {'until': 218.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8127082312669598, 'next_transition': 13574}.
<a id="trace-1387"></a>
- 220.75s–220.75s (×1), actor 5, squad 0 (events line 1387): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838371405107706, 'next_transition': 13675}.
<a id="trace-13670"></a>
- 220.75s–220.75s (×1), actor 5, squad 0 (trace 13670): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316921 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 220.75s, trace 13670. Next observer evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838371405107706, 'next_transition': 13675}.
<a id="trace-13671"></a>
- 220.75s–220.75s (×1), actor 5, squad 0 (trace 13671): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316921 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 220.75s, trace 13671. Next observer evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838371405107706, 'next_transition': 13675}.
<a id="trace-13675"></a>
<a id="trace-13686"></a>
<a id="trace-13691"></a>
<a id="trace-13700"></a>
- 220.80s–222.30s (×4), actor 5, squad 0 (trace 13675): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.75s, trace 13671. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568167600348012, 'next_transition': 13686}.
<a id="trace-13705"></a>
- 222.45s–222.45s (×1), actor 1, squad 0 (trace 13705): Withdraw to received rally. Knowledge: actor memory at 220.00s, trace 13595. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8567848533800579, 'next_transition': 13761}.
<a id="trace-13706"></a>
- 222.45s–222.45s (×1), actor 1, squad 0 (trace 13706): rearward bound: one stationary suppressing element. Knowledge: actor memory at 220.00s, trace 13595. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8567848533800579, 'next_transition': 13761}.
<a id="trace-13761"></a>
<a id="trace-13775"></a>
<a id="trace-13786"></a>
<a id="trace-13796"></a>
<a id="trace-13807"></a>
<a id="trace-13879"></a>
<a id="trace-13884"></a>
<a id="trace-13894"></a>
<a id="trace-13903"></a>
<a id="trace-13913"></a>
<a id="trace-13918"></a>
<a id="trace-13932"></a>
<a id="trace-13954"></a>
<a id="trace-13960"></a>
<a id="trace-14028"></a>
<a id="trace-14037"></a>
<a id="trace-14047"></a>
<a id="trace-14054"></a>
<a id="trace-14068"></a>
<a id="trace-14076"></a>
<a id="trace-14090"></a>
<a id="trace-14101"></a>
<a id="trace-14111"></a>
<a id="trace-14120"></a>
- 222.80s–234.80s (×24), actor 5, squad 0 (trace 13761): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.75s, trace 13671. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7386783091867712, 'next_transition': 13775}.
<a id="trace-14123"></a>
- 234.85s–234.85s (×1), actor 1, squad 0 (trace 14123): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 230.00s, trace 13962. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3246148869202093, 'next_transition': 14243}.
<a id="trace-14124"></a>
- 234.85s–234.85s (×1), actor 1, squad 0 (trace 14124): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 230.00s, trace 13962. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3246148869202093, 'next_transition': 14243}.
<a id="trace-14243"></a>
<a id="trace-14252"></a>
<a id="trace-14269"></a>
<a id="trace-14279"></a>
<a id="trace-14294"></a>
<a id="trace-14304"></a>
<a id="trace-14316"></a>
<a id="trace-14325"></a>
<a id="trace-14336"></a>
<a id="trace-14342"></a>
<a id="trace-14411"></a>
<a id="trace-14420"></a>
<a id="trace-14432"></a>
<a id="trace-14439"></a>
<a id="trace-14449"></a>
<a id="trace-14457"></a>
<a id="trace-14468"></a>
<a id="trace-14477"></a>
<a id="trace-14491"></a>
<a id="trace-14499"></a>
<a id="trace-14570"></a>
<a id="trace-14578"></a>
<a id="trace-14588"></a>
<a id="trace-14599"></a>
- 235.30s–246.80s (×24), actor 5, squad 0 (trace 14243): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 14180. Next observer evidence: {'until': 235.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2425767146698111, 'next_transition': 14252}.
<a id="trace-14602"></a>
- 246.85s–246.85s (×1), actor 1, squad 0 (trace 14602): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 245.00s, trace 14504. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680336334587345, 'next_transition': 14612}.
<a id="trace-14603"></a>
- 246.85s–246.85s (×1), actor 1, squad 0 (trace 14603): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 245.00s, trace 14504. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680336334587345, 'next_transition': 14612}.
<a id="trace-14612"></a>
<a id="trace-14621"></a>
<a id="trace-14640"></a>
<a id="trace-14650"></a>
<a id="trace-14665"></a>
<a id="trace-14675"></a>
<a id="trace-14744"></a>
<a id="trace-14749"></a>
<a id="trace-14759"></a>
<a id="trace-14765"></a>
<a id="trace-14772"></a>
<a id="trace-14777"></a>
<a id="trace-14786"></a>
<a id="trace-14793"></a>
<a id="trace-14800"></a>
<a id="trace-14806"></a>
<a id="trace-14873"></a>
<a id="trace-14876"></a>
<a id="trace-14884"></a>
<a id="trace-14889"></a>
<a id="trace-14897"></a>
<a id="trace-14902"></a>
<a id="trace-14911"></a>
<a id="trace-14918"></a>
<a id="trace-14925"></a>
<a id="trace-14931"></a>
<a id="trace-14997"></a>
<a id="trace-15001"></a>
<a id="trace-15009"></a>
<a id="trace-15014"></a>
<a id="trace-15022"></a>
<a id="trace-15026"></a>
<a id="trace-15036"></a>
<a id="trace-15043"></a>
<a id="trace-15050"></a>
<a id="trace-15056"></a>
<a id="trace-15122"></a>
<a id="trace-15126"></a>
<a id="trace-15132"></a>
<a id="trace-15138"></a>
<a id="trace-15146"></a>
<a id="trace-15150"></a>
<a id="trace-15160"></a>
<a id="trace-15166"></a>
<a id="trace-15174"></a>
<a id="trace-15180"></a>
<a id="trace-15246"></a>
<a id="trace-15250"></a>
<a id="trace-15257"></a>
<a id="trace-15263"></a>
<a id="trace-15270"></a>
<a id="trace-15275"></a>
<a id="trace-15285"></a>
<a id="trace-15291"></a>
<a id="trace-15299"></a>
<a id="trace-15304"></a>
<a id="trace-15371"></a>
<a id="trace-15375"></a>
<a id="trace-15382"></a>
<a id="trace-15388"></a>
<a id="trace-15395"></a>
<a id="trace-15400"></a>
<a id="trace-15409"></a>
<a id="trace-15416"></a>
<a id="trace-15424"></a>
<a id="trace-15429"></a>
<a id="trace-15496"></a>
<a id="trace-15499"></a>
<a id="trace-15507"></a>
- 247.30s–281.30s (×69), actor 5, squad 0 (trace 14612): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 14506. Next observer evidence: {'until': 247.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3118501603334515, 'next_transition': 14621}.
<a id="trace-1662"></a>
- 281.70s–281.70s (×1), actor 5, squad 0 (events line 1662): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15512"></a>
- 281.70s–281.70s (×1), actor 5, squad 0 (trace 15512): renew committed intent (75 s lifetime). Knowledge: actor memory at 281.70s, trace 15512. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15515}.
<a id="trace-15515"></a>
<a id="trace-15522"></a>
<a id="trace-15527"></a>
<a id="trace-15536"></a>
<a id="trace-15543"></a>
<a id="trace-15550"></a>
<a id="trace-15556"></a>
<a id="trace-15623"></a>
<a id="trace-15626"></a>
<a id="trace-15634"></a>
<a id="trace-15639"></a>
<a id="trace-15647"></a>
<a id="trace-15652"></a>
<a id="trace-15661"></a>
<a id="trace-15668"></a>
<a id="trace-15674"></a>
<a id="trace-15680"></a>
<a id="trace-15746"></a>
<a id="trace-15750"></a>
<a id="trace-15758"></a>
<a id="trace-15763"></a>
<a id="trace-15771"></a>
<a id="trace-15775"></a>
<a id="trace-15785"></a>
<a id="trace-15792"></a>
<a id="trace-15804"></a>
<a id="trace-15870"></a>
<a id="trace-15874"></a>
<a id="trace-15881"></a>
<a id="trace-15887"></a>
<a id="trace-15895"></a>
<a id="trace-15899"></a>
<a id="trace-15909"></a>
<a id="trace-15915"></a>
<a id="trace-15923"></a>
<a id="trace-15929"></a>
<a id="trace-15995"></a>
<a id="trace-15999"></a>
<a id="trace-16007"></a>
<a id="trace-16013"></a>
<a id="trace-16021"></a>
<a id="trace-16026"></a>
<a id="trace-16036"></a>
<a id="trace-16042"></a>
<a id="trace-16050"></a>
<a id="trace-16055"></a>
<a id="trace-16122"></a>
<a id="trace-16126"></a>
<a id="trace-16133"></a>
<a id="trace-16138"></a>
<a id="trace-16146"></a>
<a id="trace-16151"></a>
<a id="trace-16160"></a>
<a id="trace-16167"></a>
<a id="trace-16175"></a>
<a id="trace-16180"></a>
<a id="trace-16247"></a>
<a id="trace-16250"></a>
<a id="trace-16258"></a>
<a id="trace-16263"></a>
<a id="trace-16271"></a>
<a id="trace-16276"></a>
<a id="trace-16285"></a>
<a id="trace-16292"></a>
<a id="trace-16299"></a>
<a id="trace-16305"></a>
<a id="trace-16372"></a>
<a id="trace-16375"></a>
<a id="trace-16383"></a>
<a id="trace-16387"></a>
<a id="trace-16396"></a>
<a id="trace-16401"></a>
<a id="trace-16412"></a>
<a id="trace-16419"></a>
<a id="trace-16426"></a>
<a id="trace-16432"></a>
<a id="trace-16498"></a>
<a id="trace-16502"></a>
<a id="trace-16510"></a>
<a id="trace-16514"></a>
<a id="trace-16522"></a>
<a id="trace-16526"></a>
<a id="trace-16536"></a>
<a id="trace-16543"></a>
<a id="trace-16550"></a>
<a id="trace-16556"></a>
<a id="trace-16622"></a>
<a id="trace-16626"></a>
<a id="trace-16633"></a>
<a id="trace-16638"></a>
<a id="trace-16646"></a>
<a id="trace-16650"></a>
<a id="trace-16661"></a>
<a id="trace-16667"></a>
<a id="trace-16675"></a>
<a id="trace-16681"></a>
<a id="trace-16747"></a>
<a id="trace-16751"></a>
<a id="trace-16758"></a>
<a id="trace-16763"></a>
<a id="trace-16770"></a>
<a id="trace-16775"></a>
<a id="trace-16786"></a>
<a id="trace-16792"></a>
<a id="trace-16802"></a>
<a id="trace-16807"></a>
<a id="trace-16874"></a>
<a id="trace-16878"></a>
<a id="trace-16885"></a>
<a id="trace-16890"></a>
<a id="trace-16897"></a>
<a id="trace-16902"></a>
<a id="trace-16911"></a>
<a id="trace-16918"></a>
<a id="trace-16927"></a>
<a id="trace-16932"></a>
<a id="trace-16999"></a>
<a id="trace-17002"></a>
<a id="trace-17010"></a>
<a id="trace-17015"></a>
<a id="trace-17022"></a>
- 281.80s–342.30s (×121), actor 5, squad 0 (trace 15515): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 281.70s, trace 15512. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15522}.
<a id="trace-1875"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (events line 1875): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17026"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 17026): renew committed intent (75 s lifetime). Knowledge: actor memory at 342.70s, trace 17026. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17029}.
<a id="trace-17029"></a>
<a id="trace-17038"></a>
<a id="trace-17045"></a>
<a id="trace-17053"></a>
<a id="trace-17059"></a>
<a id="trace-17126"></a>
<a id="trace-17129"></a>
<a id="trace-17137"></a>
<a id="trace-17141"></a>
<a id="trace-17149"></a>
<a id="trace-17154"></a>
<a id="trace-17163"></a>
<a id="trace-17170"></a>
<a id="trace-17178"></a>
<a id="trace-17184"></a>
<a id="trace-17252"></a>
<a id="trace-17256"></a>
<a id="trace-17264"></a>
<a id="trace-17268"></a>
<a id="trace-17276"></a>
<a id="trace-17280"></a>
<a id="trace-17290"></a>
<a id="trace-17297"></a>
<a id="trace-17304"></a>
<a id="trace-17310"></a>
<a id="trace-17377"></a>
<a id="trace-17381"></a>
<a id="trace-17388"></a>
<a id="trace-17393"></a>
<a id="trace-17401"></a>
<a id="trace-17405"></a>
<a id="trace-17415"></a>
<a id="trace-17421"></a>
<a id="trace-17429"></a>
<a id="trace-17435"></a>
- 342.80s–359.80s (×35), actor 5, squad 0 (trace 17029): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.70s, trace 17026. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17038}.

## Net delivery

214 matched order/radio deliveries; 94 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.280s; maximum 1.450s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2134: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2135: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2136: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2137: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2138: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2139: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.05s leader 5, trace 3354: estimate 6.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 3386: estimate 6.87; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 3387: estimate 6.87; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3878: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3881: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3882: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3883: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3884: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3885: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3886: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3887: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3888: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3889: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4496: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4499: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4500: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4501: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4502: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4503: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4504: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4505: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4506: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4507: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4834: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4837: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4838: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4839: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4840: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4841: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4842: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4843: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4844: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4845: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 5037: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5040: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5041: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5042: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5043: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5044: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5045: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5046: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5047: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5048: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 5422: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5425: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5426: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5427: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5428: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5429: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5430: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5431: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5432: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5433: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 5622: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5625: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5626: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5627: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5628: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5629: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5630: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5631: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5632: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5633: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 5806: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5809: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5810: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5811: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5812: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5813: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5814: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5815: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5816: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5817: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.05s leader 5, trace 5914: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 6204: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 6205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 6206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 6207: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 6208: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 6209: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 6210: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 6211: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 6212: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 6213: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 6214: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 6215: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 6412: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 6415: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 6416: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 6417: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6418: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6419: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6420: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6421: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6422: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6423: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 6830: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 6833: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 6834: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 6835: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6836: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6837: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6838: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6839: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6840: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6841: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 7091: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 7092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 7093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 7094: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 7095: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 7096: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 7097: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 7098: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 7099: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 7100: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 7101: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 7102: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 7278: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 7279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 7280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 7281: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 7282: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 7283: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 7284: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 7285: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 7286: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 7287: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 7288: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 7289: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 7611: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 7612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 7613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 7614: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 7615: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 7616: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 7617: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 7618: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 7619: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 7620: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 7621: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 7622: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.75s leader 5, trace 7689: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 7939: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 7942: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 7943: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 7944: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7945: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7946: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 7947: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7948: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7949: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7950: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 8149: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 8150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 8152: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 8153: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8154: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8155: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8156: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8157: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8158: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8159: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8160: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.55s leader 5, trace 8405: estimate 6.96; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 8454: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 8455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 8456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 8457: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 8458: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 8459: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 8460: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 8461: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 8462: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 8463: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 8464: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 8940: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 8941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 8942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 8943: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 8944: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 8945: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 8946: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 8947: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 8948: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 8949: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 9765: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 9766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 9768: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 9769: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9770: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9771: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9772: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9773: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 10157: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 10158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 10159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 10160: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 10161: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 10162: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 10163: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 10164: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 10342: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 10343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 10344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 10345: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 10346: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 10347: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 10348: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 10349: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 10505: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 10506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 10507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 10508: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 10509: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 10510: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 10511: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 10512: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 10786: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 10787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 10788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 10789: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 10790: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 10791: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 10792: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 10793: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 10974: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 10975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 10976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 10977: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 10978: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 10979: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 10980: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 10981: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 11281: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 11282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 11283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 11284: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 11285: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 11286: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 11287: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 11288: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 11462: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 11463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 11464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 11465: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 11466: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 11467: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 11468: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 11469: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.95s leader 5, trace 11535: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 11629: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 11630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 11631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 11632: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 11633: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 11634: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 11635: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 11636: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 11929: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 11930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 11931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 11932: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 11933: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 11934: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 11935: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 11936: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 12248: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 12249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 12250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 12251: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 12252: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 12253: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 12254: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 12255: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 12422: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 12423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 12424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 12425: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 12426: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 12427: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 12428: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 12429: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 12567: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 12568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 12569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 12570: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 12571: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 12572: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 12573: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 12574: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 12676: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 12677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 12678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 12679: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 12680: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 12681: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 12682: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 12683: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 12794: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 12795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 12796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 12797: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 12798: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 12799: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 12800: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 12904: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 12905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 12906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 12907: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 12908: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 12909: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 12910: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 13028: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 13029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 13030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 13031: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 13032: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 13033: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 13034: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 13146: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 13147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 13148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 13149: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 13150: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 13151: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 13152: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 13266: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 13267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 13268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 13269: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 13270: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 13271: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 13272: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 13394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 13395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 13396: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 13397: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 13398: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 13399: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.95s leader 5, trace 13460: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 13595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 13596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 13597: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 13598: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 13599: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 13600: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.75s leader 5, trace 13670: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.75s leader 5, trace 13671: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 13812: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 13813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 13814: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 13815: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 13816: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 13817: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 13962: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 13963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 13964: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 13965: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 13966: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 13967: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 14178: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 14179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 14180: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 14181: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 14182: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 14183: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 14343: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 14344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 14345: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 14346: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 14347: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 14348: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 14504: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 14505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 14506: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 14507: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 14508: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 14509: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 14677: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 14678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 14679: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 14680: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 14681: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 14682: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 14808: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 14809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 14810: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 14811: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 14812: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 14813: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 14933: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 14934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 14935: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 14936: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 14937: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 14938: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 15058: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 15059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 15060: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 15061: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 15062: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 15063: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 15181: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 15182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 15183: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 15184: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 15185: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 15186: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 15306: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 15307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 15308: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 15309: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 15310: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 15311: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 15431: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 15432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 15433: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 15434: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 15435: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 15436: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 281.70s leader 5, trace 15512: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 15558: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 15559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 15560: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 15561: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 15562: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 15563: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 15682: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 15683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 15684: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 15685: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 15686: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 15687: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 15806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 15807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 15808: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 15809: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 15810: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 15811: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 15930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 15931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 15932: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 15933: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 15934: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 15935: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 16057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 16058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 16059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 16060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 16061: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 16062: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 16182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 16183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 16184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 16185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 16186: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 16187: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 16307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 16308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 16309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 16310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 16311: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 16312: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 16434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 16435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 16436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 16437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 16438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 16439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 16558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 16559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 16560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 16561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 16562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 16563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 16682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 16683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 16684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 16685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 16686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 16687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 16809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 16810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 16811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 16812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 16814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 16934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 16935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 16937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 16939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 17026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 17061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 17062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 17063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 17064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 17065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 17066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 17186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 17187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 17188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 17189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 17190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 17191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 17312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 17313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 17314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 17315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 17316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 17317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 17436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 17437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 17438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 17439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 17440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 17441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bram incapacitated
- 1: Voss incapacitated
- 1: Reed killed in action
- 1: Lark incapacitated
- 1: Kest incapacitated
- 1: Vale killed in action

## Outcome attribution

- 220.75s, evidence 1387: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838371405107706, 'next_transition': 13675}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 220.75s, evidence 13670: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316921 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838371405107706, 'next_transition': 13675}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 220.75s, evidence 13671: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316921 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 220.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42838371405107706, 'next_transition': 13675}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 281.70s, evidence 1662: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 342.70s, evidence 1875: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
