# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/25/108/good-azure/battle-108-1789674224744822472`

## Battle summary

**Ember** · 360 s · 54 shots.

### Turning points

- 23.6s, squad 4: contact (events line 253). First recorded contact.
- 34.5s, squad 0: withdrawal ([trace 2405](#trace-2405)). 67.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 52.6s, squad 0: help call ([trace 3843](#trace-3843)). No completion observed before termination.
- 80.8s, squad 0: withdrawal ([trace 5134](#trace-5134)). 130.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 192.5s, squad 0: withdrawal ([trace 10890](#trace-10890)). 221.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 238.7s, squad 0: withdrawal ([trace 12602](#trace-12602)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 1 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 53 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 34.0s, squad 0 chose leader risk threshold crossed without support ([trace 2371](#trace-2371)), followed by 0 shots and 0 own casualties; estimate 4.9 against 4 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299917591839412, 'next_transition': 279}.
- 34.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405881 retreat threshold=0.500000 initiative=delegated ([trace 2585](#trace-2585)). Following evidence: None.

### Communication

223 matched deliveries (mean 0.10s, max 1.60s); 249 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.60s, squad 4, contact, evidence events line 253: First recorded contact; .
- 34.55s, squad 0, withdrawal, evidence 2405: BreakContact: believed ratio at least two without superiority; 67.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 52.60s, squad 0, help call, evidence 3843: NeedSupport; No completion observed before termination.
- 80.75s, squad 0, withdrawal, evidence 5134: Withdraw to received rally; 130.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 192.50s, squad 0, withdrawal, evidence 10890: BreakContact: believed ratio at least two without superiority; 221.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 238.70s, squad 0, withdrawal, evidence 12602: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.40191360868228, 'next_transition': 211}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.40191360868228, 'next_transition': 211}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.40191360868228, 'next_transition': 211}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599986730038717, 'next_transition': 232}.
<a id="trace-44"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 44): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299917591839412, 'next_transition': 279}.
<a id="trace-265"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 265): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 265. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299917591839412, 'next_transition': 279}.
<a id="trace-266"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 266): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299917591839412, 'next_transition': 279}.
<a id="trace-279"></a>
<a id="trace-290"></a>
<a id="trace-364"></a>
- 4.20s–5.20s (×3), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300137767541186, 'next_transition': 290}.
<a id="trace-367"></a>
- 5.45s–5.45s (×1), actor 0, squad 0 (trace 367): received platoon directive. Knowledge: actor memory at 5.00s, trace 294. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.62999490006354, 'next_transition': 477}.
<a id="trace-477"></a>
<a id="trace-503"></a>
<a id="trace-513"></a>
<a id="trace-531"></a>
<a id="trace-548"></a>
<a id="trace-569"></a>
<a id="trace-598"></a>
<a id="trace-610"></a>
<a id="trace-622"></a>
<a id="trace-703"></a>
<a id="trace-716"></a>
<a id="trace-728"></a>
<a id="trace-742"></a>
<a id="trace-757"></a>
<a id="trace-776"></a>
<a id="trace-785"></a>
<a id="trace-798"></a>
<a id="trace-819"></a>
- 5.70s–14.20s (×18), actor 5, squad 0 (trace 477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 296. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889045547676827, 'next_transition': 503}.
<a id="trace-479"></a>
<a id="trace-505"></a>
<a id="trace-515"></a>
<a id="trace-533"></a>
<a id="trace-550"></a>
<a id="trace-571"></a>
<a id="trace-600"></a>
<a id="trace-612"></a>
<a id="trace-705"></a>
<a id="trace-718"></a>
<a id="trace-730"></a>
<a id="trace-744"></a>
<a id="trace-759"></a>
<a id="trace-778"></a>
<a id="trace-787"></a>
<a id="trace-821"></a>
<a id="trace-904"></a>
<a id="trace-986"></a>
<a id="trace-1002"></a>
<a id="trace-1024"></a>
<a id="trace-1054"></a>
<a id="trace-1067"></a>
<a id="trace-1086"></a>
<a id="trace-1109"></a>
<a id="trace-1119"></a>
<a id="trace-1203"></a>
<a id="trace-1218"></a>
<a id="trace-1231"></a>
<a id="trace-1245"></a>
<a id="trace-1268"></a>
<a id="trace-1278"></a>
<a id="trace-1347"></a>
<a id="trace-1366"></a>
<a id="trace-1451"></a>
<a id="trace-1463"></a>
<a id="trace-1487"></a>
<a id="trace-1494"></a>
<a id="trace-1632"></a>
<a id="trace-1637"></a>
<a id="trace-1651"></a>
<a id="trace-1661"></a>
<a id="trace-1769"></a>
<a id="trace-2236"></a>
<a id="trace-2252"></a>
<a id="trace-2284"></a>
<a id="trace-2395"></a>
<a id="trace-2593"></a>
<a id="trace-2673"></a>
<a id="trace-2695"></a>
<a id="trace-2724"></a>
<a id="trace-2737"></a>
<a id="trace-2745"></a>
<a id="trace-2781"></a>
<a id="trace-2810"></a>
<a id="trace-2838"></a>
<a id="trace-2874"></a>
<a id="trace-2990"></a>
<a id="trace-3041"></a>
<a id="trace-3091"></a>
<a id="trace-3227"></a>
<a id="trace-3251"></a>
<a id="trace-3271"></a>
<a id="trace-3291"></a>
<a id="trace-3364"></a>
<a id="trace-3373"></a>
<a id="trace-3386"></a>
<a id="trace-3413"></a>
<a id="trace-3450"></a>
<a id="trace-3533"></a>
<a id="trace-3581"></a>
<a id="trace-3636"></a>
<a id="trace-3668"></a>
<a id="trace-3694"></a>
<a id="trace-3789"></a>
<a id="trace-3808"></a>
<a id="trace-3820"></a>
<a id="trace-3827"></a>
<a id="trace-3842"></a>
<a id="trace-3858"></a>
<a id="trace-3866"></a>
<a id="trace-3874"></a>
<a id="trace-3896"></a>
<a id="trace-3901"></a>
<a id="trace-3977"></a>
<a id="trace-3983"></a>
<a id="trace-3995"></a>
<a id="trace-4007"></a>
<a id="trace-4016"></a>
<a id="trace-4021"></a>
<a id="trace-4048"></a>
<a id="trace-4058"></a>
<a id="trace-4067"></a>
<a id="trace-4159"></a>
<a id="trace-4177"></a>
<a id="trace-4200"></a>
<a id="trace-4209"></a>
<a id="trace-4227"></a>
<a id="trace-4235"></a>
<a id="trace-4253"></a>
<a id="trace-4447"></a>
<a id="trace-4549"></a>
<a id="trace-4579"></a>
<a id="trace-4605"></a>
<a id="trace-4613"></a>
<a id="trace-4727"></a>
<a id="trace-4741"></a>
<a id="trace-4757"></a>
<a id="trace-4770"></a>
<a id="trace-4782"></a>
<a id="trace-4797"></a>
<a id="trace-4806"></a>
<a id="trace-4826"></a>
<a id="trace-4838"></a>
<a id="trace-4917"></a>
<a id="trace-4927"></a>
<a id="trace-4943"></a>
<a id="trace-4954"></a>
<a id="trace-4969"></a>
<a id="trace-4982"></a>
<a id="trace-4998"></a>
<a id="trace-5018"></a>
<a id="trace-5032"></a>
<a id="trace-5040"></a>
<a id="trace-5133"></a>
<a id="trace-5226"></a>
<a id="trace-5238"></a>
<a id="trace-5254"></a>
<a id="trace-5285"></a>
<a id="trace-5300"></a>
<a id="trace-5319"></a>
<a id="trace-5334"></a>
<a id="trace-5414"></a>
<a id="trace-5441"></a>
<a id="trace-5454"></a>
<a id="trace-5469"></a>
<a id="trace-5494"></a>
<a id="trace-5504"></a>
<a id="trace-5519"></a>
<a id="trace-5530"></a>
<a id="trace-5627"></a>
<a id="trace-5639"></a>
<a id="trace-5667"></a>
<a id="trace-5699"></a>
<a id="trace-5706"></a>
<a id="trace-5778"></a>
<a id="trace-5789"></a>
<a id="trace-5870"></a>
<a id="trace-5884"></a>
<a id="trace-5902"></a>
<a id="trace-5918"></a>
<a id="trace-5945"></a>
<a id="trace-5954"></a>
<a id="trace-5984"></a>
<a id="trace-6002"></a>
<a id="trace-6009"></a>
<a id="trace-6090"></a>
<a id="trace-6100"></a>
<a id="trace-6115"></a>
<a id="trace-6155"></a>
<a id="trace-6168"></a>
<a id="trace-6179"></a>
<a id="trace-6198"></a>
<a id="trace-6207"></a>
<a id="trace-6300"></a>
<a id="trace-6331"></a>
<a id="trace-6342"></a>
<a id="trace-6356"></a>
<a id="trace-6372"></a>
<a id="trace-6383"></a>
<a id="trace-6399"></a>
<a id="trace-6540"></a>
<a id="trace-6560"></a>
<a id="trace-6579"></a>
<a id="trace-6587"></a>
<a id="trace-6608"></a>
<a id="trace-6638"></a>
<a id="trace-6654"></a>
<a id="trace-6667"></a>
<a id="trace-6681"></a>
<a id="trace-6760"></a>
<a id="trace-6785"></a>
<a id="trace-6813"></a>
<a id="trace-6821"></a>
<a id="trace-6836"></a>
<a id="trace-6849"></a>
<a id="trace-6863"></a>
<a id="trace-6876"></a>
<a id="trace-6957"></a>
<a id="trace-6973"></a>
<a id="trace-7068"></a>
<a id="trace-7086"></a>
<a id="trace-7103"></a>
<a id="trace-7114"></a>
<a id="trace-7140"></a>
<a id="trace-7149"></a>
<a id="trace-7228"></a>
<a id="trace-7243"></a>
<a id="trace-7257"></a>
<a id="trace-7290"></a>
<a id="trace-7298"></a>
<a id="trace-7327"></a>
<a id="trace-7341"></a>
<a id="trace-7349"></a>
<a id="trace-7439"></a>
<a id="trace-7450"></a>
<a id="trace-7463"></a>
<a id="trace-7481"></a>
<a id="trace-7499"></a>
<a id="trace-7519"></a>
<a id="trace-7534"></a>
<a id="trace-7656"></a>
<a id="trace-7674"></a>
<a id="trace-7680"></a>
<a id="trace-7749"></a>
<a id="trace-7779"></a>
<a id="trace-7796"></a>
<a id="trace-7883"></a>
<a id="trace-7912"></a>
<a id="trace-7923"></a>
<a id="trace-7945"></a>
<a id="trace-7956"></a>
<a id="trace-7983"></a>
<a id="trace-8123"></a>
<a id="trace-8202"></a>
<a id="trace-8235"></a>
<a id="trace-8356"></a>
<a id="trace-8395"></a>
<a id="trace-8449"></a>
<a id="trace-8466"></a>
<a id="trace-8550"></a>
<a id="trace-8563"></a>
<a id="trace-8579"></a>
<a id="trace-8588"></a>
<a id="trace-8605"></a>
<a id="trace-8625"></a>
<a id="trace-8647"></a>
<a id="trace-8669"></a>
<a id="trace-8678"></a>
<a id="trace-8918"></a>
<a id="trace-8931"></a>
<a id="trace-8954"></a>
<a id="trace-8987"></a>
<a id="trace-8997"></a>
<a id="trace-9078"></a>
<a id="trace-9098"></a>
<a id="trace-9114"></a>
<a id="trace-9127"></a>
<a id="trace-9147"></a>
<a id="trace-9160"></a>
<a id="trace-9174"></a>
<a id="trace-9204"></a>
<a id="trace-9219"></a>
<a id="trace-9300"></a>
<a id="trace-9311"></a>
<a id="trace-9332"></a>
<a id="trace-9338"></a>
<a id="trace-9352"></a>
<a id="trace-9380"></a>
<a id="trace-9504"></a>
<a id="trace-9515"></a>
<a id="trace-9531"></a>
<a id="trace-9547"></a>
<a id="trace-9553"></a>
<a id="trace-9595"></a>
<a id="trace-9608"></a>
<a id="trace-9617"></a>
<a id="trace-9630"></a>
<a id="trace-9713"></a>
<a id="trace-9723"></a>
<a id="trace-9742"></a>
<a id="trace-9757"></a>
<a id="trace-9781"></a>
<a id="trace-9801"></a>
<a id="trace-9809"></a>
<a id="trace-9825"></a>
<a id="trace-9835"></a>
<a id="trace-9913"></a>
<a id="trace-9930"></a>
<a id="trace-9941"></a>
<a id="trace-9950"></a>
<a id="trace-9977"></a>
<a id="trace-10008"></a>
<a id="trace-10071"></a>
<a id="trace-10094"></a>
<a id="trace-10108"></a>
<a id="trace-10198"></a>
<a id="trace-10217"></a>
<a id="trace-10228"></a>
<a id="trace-10250"></a>
<a id="trace-10267"></a>
<a id="trace-10412"></a>
<a id="trace-10681"></a>
<a id="trace-10703"></a>
<a id="trace-10809"></a>
<a id="trace-10829"></a>
<a id="trace-10850"></a>
<a id="trace-10885"></a>
<a id="trace-11081"></a>
<a id="trace-11089"></a>
<a id="trace-11136"></a>
<a id="trace-11140"></a>
<a id="trace-11247"></a>
<a id="trace-11264"></a>
<a id="trace-11283"></a>
<a id="trace-11347"></a>
<a id="trace-11379"></a>
<a id="trace-11394"></a>
<a id="trace-11477"></a>
<a id="trace-11484"></a>
<a id="trace-11489"></a>
<a id="trace-11500"></a>
<a id="trace-11507"></a>
<a id="trace-11515"></a>
<a id="trace-11522"></a>
<a id="trace-11534"></a>
<a id="trace-11620"></a>
<a id="trace-11640"></a>
<a id="trace-11657"></a>
<a id="trace-11669"></a>
<a id="trace-11683"></a>
<a id="trace-11757"></a>
<a id="trace-11764"></a>
<a id="trace-11775"></a>
<a id="trace-11781"></a>
<a id="trace-11790"></a>
<a id="trace-11799"></a>
<a id="trace-11816"></a>
<a id="trace-11833"></a>
<a id="trace-11906"></a>
<a id="trace-11914"></a>
<a id="trace-11926"></a>
<a id="trace-11948"></a>
<a id="trace-11954"></a>
<a id="trace-11967"></a>
<a id="trace-11977"></a>
<a id="trace-11987"></a>
<a id="trace-11996"></a>
<a id="trace-12068"></a>
<a id="trace-12084"></a>
<a id="trace-12115"></a>
<a id="trace-12127"></a>
<a id="trace-12136"></a>
<a id="trace-12147"></a>
<a id="trace-12159"></a>
<a id="trace-12241"></a>
<a id="trace-12250"></a>
<a id="trace-12258"></a>
<a id="trace-12269"></a>
<a id="trace-12276"></a>
<a id="trace-12288"></a>
<a id="trace-12303"></a>
<a id="trace-12381"></a>
<a id="trace-12391"></a>
<a id="trace-12414"></a>
<a id="trace-12426"></a>
<a id="trace-12432"></a>
<a id="trace-12443"></a>
<a id="trace-12450"></a>
<a id="trace-12461"></a>
<a id="trace-12467"></a>
<a id="trace-12545"></a>
<a id="trace-12588"></a>
<a id="trace-12600"></a>
<a id="trace-12758"></a>
<a id="trace-12765"></a>
<a id="trace-12779"></a>
<a id="trace-12810"></a>
<a id="trace-12825"></a>
<a id="trace-12840"></a>
<a id="trace-12917"></a>
<a id="trace-12928"></a>
<a id="trace-12944"></a>
<a id="trace-12967"></a>
<a id="trace-12982"></a>
<a id="trace-13009"></a>
<a id="trace-13111"></a>
<a id="trace-13121"></a>
<a id="trace-13133"></a>
<a id="trace-13168"></a>
<a id="trace-13186"></a>
<a id="trace-13199"></a>
<a id="trace-13208"></a>
<a id="trace-13279"></a>
<a id="trace-13289"></a>
<a id="trace-13302"></a>
<a id="trace-13310"></a>
<a id="trace-13325"></a>
<a id="trace-13333"></a>
<a id="trace-13350"></a>
<a id="trace-13371"></a>
<a id="trace-13377"></a>
<a id="trace-13453"></a>
<a id="trace-13476"></a>
<a id="trace-13497"></a>
<a id="trace-13503"></a>
<a id="trace-13514"></a>
<a id="trace-13523"></a>
<a id="trace-13538"></a>
<a id="trace-13547"></a>
<a id="trace-13629"></a>
<a id="trace-13637"></a>
<a id="trace-13650"></a>
<a id="trace-13659"></a>
<a id="trace-13667"></a>
<a id="trace-13676"></a>
<a id="trace-13690"></a>
<a id="trace-13698"></a>
<a id="trace-13712"></a>
<a id="trace-13719"></a>
<a id="trace-13798"></a>
<a id="trace-13806"></a>
<a id="trace-13817"></a>
<a id="trace-13823"></a>
<a id="trace-13851"></a>
<a id="trace-13865"></a>
<a id="trace-13874"></a>
<a id="trace-13887"></a>
<a id="trace-13893"></a>
<a id="trace-13966"></a>
<a id="trace-13974"></a>
<a id="trace-13989"></a>
<a id="trace-14011"></a>
<a id="trace-14017"></a>
<a id="trace-14033"></a>
<a id="trace-14044"></a>
<a id="trace-14052"></a>
<a id="trace-14064"></a>
<a id="trace-14162"></a>
<a id="trace-14169"></a>
<a id="trace-14184"></a>
<a id="trace-14190"></a>
<a id="trace-14201"></a>
<a id="trace-14208"></a>
<a id="trace-14309"></a>
<a id="trace-14319"></a>
<a id="trace-14335"></a>
<a id="trace-14342"></a>
<a id="trace-14358"></a>
<a id="trace-14374"></a>
<a id="trace-14382"></a>
<a id="trace-14396"></a>
<a id="trace-14402"></a>
<a id="trace-14479"></a>
<a id="trace-14497"></a>
<a id="trace-14509"></a>
<a id="trace-14530"></a>
<a id="trace-14568"></a>
<a id="trace-14574"></a>
<a id="trace-14653"></a>
<a id="trace-14666"></a>
<a id="trace-14689"></a>
<a id="trace-14701"></a>
<a id="trace-14732"></a>
<a id="trace-14740"></a>
<a id="trace-14820"></a>
<a id="trace-14830"></a>
<a id="trace-14844"></a>
<a id="trace-14850"></a>
<a id="trace-14863"></a>
<a id="trace-14872"></a>
<a id="trace-14882"></a>
<a id="trace-14891"></a>
<a id="trace-14905"></a>
<a id="trace-14913"></a>
<a id="trace-14992"></a>
<a id="trace-15001"></a>
<a id="trace-15033"></a>
<a id="trace-15040"></a>
<a id="trace-15054"></a>
<a id="trace-15065"></a>
<a id="trace-15077"></a>
<a id="trace-15162"></a>
<a id="trace-15169"></a>
<a id="trace-15188"></a>
<a id="trace-15203"></a>
<a id="trace-15212"></a>
<a id="trace-15227"></a>
<a id="trace-15234"></a>
<a id="trace-15258"></a>
<a id="trace-15329"></a>
<a id="trace-15351"></a>
<a id="trace-15360"></a>
<a id="trace-15374"></a>
<a id="trace-15399"></a>
<a id="trace-15405"></a>
<a id="trace-15416"></a>
<a id="trace-15498"></a>
<a id="trace-15544"></a>
<a id="trace-15550"></a>
<a id="trace-15562"></a>
<a id="trace-15569"></a>
<a id="trace-15594"></a>
<a id="trace-15671"></a>
<a id="trace-15678"></a>
<a id="trace-15692"></a>
<a id="trace-15709"></a>
<a id="trace-15720"></a>
<a id="trace-15734"></a>
<a id="trace-15756"></a>
<a id="trace-15764"></a>
<a id="trace-15842"></a>
<a id="trace-15850"></a>
<a id="trace-15889"></a>
<a id="trace-15902"></a>
<a id="trace-15912"></a>
<a id="trace-15925"></a>
<a id="trace-15932"></a>
<a id="trace-16008"></a>
<a id="trace-16031"></a>
<a id="trace-16039"></a>
<a id="trace-16054"></a>
<a id="trace-16075"></a>
<a id="trace-16084"></a>
<a id="trace-16092"></a>
<a id="trace-16101"></a>
<a id="trace-16186"></a>
<a id="trace-16210"></a>
<a id="trace-16225"></a>
<a id="trace-16231"></a>
<a id="trace-16243"></a>
<a id="trace-16249"></a>
<a id="trace-16358"></a>
<a id="trace-16371"></a>
<a id="trace-16378"></a>
<a id="trace-16388"></a>
<a id="trace-16396"></a>
<a id="trace-16414"></a>
<a id="trace-16423"></a>
<a id="trace-16437"></a>
<a id="trace-16444"></a>
<a id="trace-16520"></a>
<a id="trace-16531"></a>
<a id="trace-16541"></a>
<a id="trace-16550"></a>
<a id="trace-16570"></a>
<a id="trace-16585"></a>
<a id="trace-16593"></a>
<a id="trace-16608"></a>
<a id="trace-16615"></a>
<a id="trace-16696"></a>
<a id="trace-16711"></a>
<a id="trace-16722"></a>
<a id="trace-16735"></a>
<a id="trace-16766"></a>
<a id="trace-16776"></a>
<a id="trace-16783"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512547468775962, 'next_transition': 505}.
<a id="trace-827"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 827): traveling overwatch. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4415794252841465, 'next_transition': 902}.
<a id="trace-828"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 828): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4415794252841465, 'next_transition': 902}.
<a id="trace-902"></a>
<a id="trace-984"></a>
<a id="trace-1000"></a>
<a id="trace-1022"></a>
<a id="trace-1038"></a>
<a id="trace-1052"></a>
<a id="trace-1065"></a>
<a id="trace-1084"></a>
<a id="trace-1097"></a>
<a id="trace-1107"></a>
<a id="trace-1117"></a>
<a id="trace-1201"></a>
<a id="trace-1216"></a>
<a id="trace-1229"></a>
<a id="trace-1243"></a>
<a id="trace-1266"></a>
<a id="trace-1276"></a>
<a id="trace-1290"></a>
- 14.70s–23.25s (×18), actor 5, squad 0 (trace 902): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 628. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9843720901305669, 'next_transition': 984}.
<a id="trace-1297"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 1297): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1123. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1345}.
<a id="trace-1345"></a>
<a id="trace-1364"></a>
<a id="trace-1377"></a>
<a id="trace-1449"></a>
<a id="trace-1461"></a>
<a id="trace-1485"></a>
<a id="trace-1492"></a>
- 23.75s–26.75s (×7), actor 5, squad 0 (trace 1345): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1125. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03937155135691249, 'next_transition': 1364}.
<a id="trace-1499"></a>
- 27.15s–27.15s (×1), actor 0, squad 0 (trace 1499): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 1380. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1630}.
<a id="trace-1630"></a>
<a id="trace-1635"></a>
<a id="trace-1649"></a>
<a id="trace-1659"></a>
<a id="trace-1674"></a>
<a id="trace-1682"></a>
<a id="trace-1767"></a>
<a id="trace-1773"></a>
- 27.25s–30.75s (×8), actor 5, squad 0 (trace 1630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1382. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1635}.
<a id="trace-1775"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 1775): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: {'until': 30.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1817}.
<a id="trace-1817"></a>
- 30.80s–30.80s (×1), actor 0, squad 0 (trace 1817): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: None.
<a id="trace-1818"></a>
- 30.80s–30.80s (×1), actor 0, squad 0 (trace 1818): bounding overwatch. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: None.
<a id="trace-1819"></a>
<a id="trace-1948"></a>
<a id="trace-2077"></a>
- 30.80s–31.05s (×3), actor 0, squad 0 (trace 1819): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: None.
<a id="trace-2211"></a>
<a id="trace-2234"></a>
<a id="trace-2250"></a>
<a id="trace-2282"></a>
<a id="trace-2311"></a>
<a id="trace-2341"></a>
- 31.25s–33.75s (×6), actor 5, squad 0 (trace 2211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1687. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2234}.
<a id="trace-2371"></a>
- 34.05s–34.05s (×1), actor 5, squad 0 (trace 2371): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 34.05s, trace 2371. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00026499999999973767, 'next_transition': 2393}.
<a id="trace-2393"></a>
- 34.25s–34.25s (×1), actor 5, squad 0 (trace 2393): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.05s, trace 2371. Next observer evidence: {'until': 34.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10478750000000003, 'next_transition': 2405}.
<a id="trace-2405"></a>
- 34.55s–34.55s (×1), actor 0, squad 0 (trace 2405): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10691249999999997, 'next_transition': 352}.
<a id="trace-2406"></a>
- 34.55s–34.55s (×1), actor 0, squad 0 (trace 2406): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 1685. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10691249999999997, 'next_transition': 352}.
<a id="trace-352"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (events line 352): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2585"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 2585): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405881 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 2585. Next observer evidence: None.
<a id="trace-2586"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 2586): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405881 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 2586. Next observer evidence: None.
<a id="trace-2591"></a>
<a id="trace-2671"></a>
<a id="trace-2693"></a>
<a id="trace-2722"></a>
<a id="trace-2735"></a>
<a id="trace-2743"></a>
<a id="trace-2756"></a>
<a id="trace-2779"></a>
<a id="trace-2808"></a>
<a id="trace-2836"></a>
<a id="trace-2872"></a>
<a id="trace-2988"></a>
<a id="trace-3039"></a>
<a id="trace-3089"></a>
<a id="trace-3133"></a>
<a id="trace-3179"></a>
<a id="trace-3198"></a>
<a id="trace-3225"></a>
<a id="trace-3249"></a>
<a id="trace-3269"></a>
<a id="trace-3289"></a>
<a id="trace-3362"></a>
<a id="trace-3371"></a>
<a id="trace-3384"></a>
<a id="trace-3411"></a>
<a id="trace-3448"></a>
- 34.75s–47.25s (×26), actor 5, squad 0 (trace 2591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.65s, trace 2586. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24832999999999972, 'next_transition': 2671}.
<a id="trace-3464"></a>
- 47.55s–47.55s (×1), actor 0, squad 0 (trace 3464): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 3292. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0001925000000002619, 'next_transition': 3531}.
<a id="trace-3465"></a>
- 47.55s–47.55s (×1), actor 0, squad 0 (trace 3465): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 3292. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0001925000000002619, 'next_transition': 3531}.
<a id="trace-3531"></a>
<a id="trace-3579"></a>
<a id="trace-3634"></a>
<a id="trace-3666"></a>
<a id="trace-3692"></a>
<a id="trace-3787"></a>
<a id="trace-3806"></a>
<a id="trace-3818"></a>
<a id="trace-3825"></a>
<a id="trace-3840"></a>
- 47.75s–52.25s (×10), actor 5, squad 0 (trace 3531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3294. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0005725000000000868, 'next_transition': 3579}.
<a id="trace-3843"></a>
- 52.60s–52.60s (×1), actor 0, squad 0 (trace 3843): NeedSupport. Knowledge: actor memory at 50.00s, trace 3704. Next observer evidence: None.
<a id="trace-3856"></a>
<a id="trace-3864"></a>
<a id="trace-3872"></a>
<a id="trace-3894"></a>
<a id="trace-3899"></a>
<a id="trace-3975"></a>
<a id="trace-3981"></a>
<a id="trace-3993"></a>
<a id="trace-4005"></a>
<a id="trace-4014"></a>
<a id="trace-4019"></a>
<a id="trace-4039"></a>
<a id="trace-4046"></a>
<a id="trace-4056"></a>
<a id="trace-4065"></a>
<a id="trace-4143"></a>
<a id="trace-4157"></a>
<a id="trace-4169"></a>
<a id="trace-4175"></a>
<a id="trace-4198"></a>
<a id="trace-4207"></a>
<a id="trace-4225"></a>
<a id="trace-4233"></a>
<a id="trace-4251"></a>
- 52.75s–64.25s (×24), actor 5, squad 0 (trace 3856): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3706. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2064698546688382, 'next_transition': 3864}.
<a id="trace-4258"></a>
- 64.55s–64.55s (×1), actor 0, squad 0 (trace 4258): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 4068. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4337}.
<a id="trace-4280"></a>
- 64.55s–64.55s (×1), actor 0, squad 0 (trace 4280): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 4068. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4337}.
<a id="trace-4337"></a>
<a id="trace-4413"></a>
<a id="trace-4430"></a>
<a id="trace-4445"></a>
<a id="trace-4457"></a>
<a id="trace-4478"></a>
- 64.75s–67.25s (×6), actor 5, squad 0 (trace 4337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 4070. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875029077311473, 'next_transition': 4413}.
<a id="trace-4487"></a>
- 67.65s–67.65s (×1), actor 0, squad 0 (trace 4487): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 4345. Next observer evidence: None.
<a id="trace-4492"></a>
- 67.70s–67.70s (×1), actor 0, squad 0 (trace 4492): MoveTactically. Knowledge: actor memory at 65.00s, trace 4345. Next observer evidence: None.
<a id="trace-4493"></a>
- 67.70s–67.70s (×1), actor 0, squad 0 (trace 4493): received platoon directive. Knowledge: actor memory at 65.00s, trace 4345. Next observer evidence: None.
<a id="trace-4547"></a>
<a id="trace-4562"></a>
<a id="trace-4577"></a>
<a id="trace-4603"></a>
<a id="trace-4611"></a>
<a id="trace-4700"></a>
<a id="trace-4725"></a>
<a id="trace-4739"></a>
<a id="trace-4755"></a>
<a id="trace-4768"></a>
<a id="trace-4780"></a>
<a id="trace-4795"></a>
<a id="trace-4804"></a>
<a id="trace-4824"></a>
<a id="trace-4836"></a>
<a id="trace-4915"></a>
<a id="trace-4925"></a>
<a id="trace-4941"></a>
<a id="trace-4952"></a>
<a id="trace-4967"></a>
<a id="trace-4980"></a>
<a id="trace-4996"></a>
<a id="trace-5016"></a>
- 67.75s–78.75s (×23), actor 5, squad 0 (trace 4547): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4347. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725133152885758, 'next_transition': 4562}.
<a id="trace-755"></a>
- 79.05s–79.05s (×1), actor 5, squad 0 (events line 755): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5021"></a>
- 79.05s–79.05s (×1), actor 5, squad 0 (trace 5021): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.463682 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 79.05s, trace 5021. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725182675040195, 'next_transition': 5038}.
<a id="trace-5022"></a>
- 79.05s–79.05s (×1), actor 5, squad 0 (trace 5022): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.463682 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 79.05s, trace 5022. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725182675040195, 'next_transition': 5038}.
<a id="trace-5038"></a>
<a id="trace-5121"></a>
<a id="trace-5131"></a>
- 79.75s–80.75s (×3), actor 5, squad 0 (trace 5038): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 79.05s, trace 5022. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17096465277945477, 'next_transition': 5121}.
<a id="trace-5134"></a>
- 80.75s–80.75s (×1), actor 0, squad 0 (trace 5134): Withdraw to received rally. Knowledge: actor memory at 80.00s, trace 5045. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875077666988572, 'next_transition': 5224}.
<a id="trace-5135"></a>
- 80.75s–80.75s (×1), actor 0, squad 0 (trace 5135): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 5045. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875077666988572, 'next_transition': 5224}.
<a id="trace-5224"></a>
<a id="trace-5236"></a>
<a id="trace-5252"></a>
<a id="trace-5265"></a>
<a id="trace-5283"></a>
<a id="trace-5298"></a>
<a id="trace-5317"></a>
<a id="trace-5332"></a>
<a id="trace-5412"></a>
<a id="trace-5439"></a>
<a id="trace-5452"></a>
<a id="trace-5467"></a>
<a id="trace-5478"></a>
<a id="trace-5492"></a>
<a id="trace-5502"></a>
<a id="trace-5517"></a>
<a id="trace-5528"></a>
<a id="trace-5606"></a>
<a id="trace-5625"></a>
<a id="trace-5637"></a>
<a id="trace-5646"></a>
<a id="trace-5665"></a>
<a id="trace-5681"></a>
<a id="trace-5697"></a>
<a id="trace-5704"></a>
- 81.25s–93.75s (×25), actor 5, squad 0 (trace 5224): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5047. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300248781692885, 'next_transition': 5236}.
<a id="trace-5710"></a>
- 93.95s–93.95s (×1), actor 0, squad 0 (trace 5710): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5532. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629988641574147, 'next_transition': 5776}.
<a id="trace-5711"></a>
- 93.95s–93.95s (×1), actor 0, squad 0 (trace 5711): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5532. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629988641574147, 'next_transition': 5776}.
<a id="trace-5776"></a>
<a id="trace-5787"></a>
<a id="trace-5868"></a>
<a id="trace-5882"></a>
<a id="trace-5900"></a>
<a id="trace-5916"></a>
<a id="trace-5943"></a>
<a id="trace-5952"></a>
<a id="trace-5968"></a>
<a id="trace-5982"></a>
<a id="trace-6000"></a>
<a id="trace-6007"></a>
<a id="trace-6088"></a>
<a id="trace-6098"></a>
<a id="trace-6113"></a>
<a id="trace-6123"></a>
<a id="trace-6138"></a>
<a id="trace-6153"></a>
<a id="trace-6166"></a>
<a id="trace-6177"></a>
<a id="trace-6196"></a>
<a id="trace-6205"></a>
<a id="trace-6288"></a>
<a id="trace-6298"></a>
<a id="trace-6319"></a>
<a id="trace-6329"></a>
<a id="trace-6340"></a>
<a id="trace-6354"></a>
<a id="trace-6370"></a>
<a id="trace-6381"></a>
<a id="trace-6397"></a>
- 94.25s–109.25s (×31), actor 5, squad 0 (trace 5776): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5534. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299883923930647, 'next_transition': 5787}.
<a id="trace-6403"></a>
- 109.55s–109.55s (×1), actor 0, squad 0 (trace 6403): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 6216. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150001501785404, 'next_transition': 6458}.
<a id="trace-6404"></a>
- 109.55s–109.55s (×1), actor 0, squad 0 (trace 6404): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 6216. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150001501785404, 'next_transition': 6458}.
<a id="trace-6458"></a>
<a id="trace-6538"></a>
<a id="trace-6558"></a>
<a id="trace-6577"></a>
<a id="trace-6585"></a>
<a id="trace-6606"></a>
<a id="trace-6621"></a>
<a id="trace-6636"></a>
<a id="trace-6652"></a>
<a id="trace-6665"></a>
<a id="trace-6679"></a>
<a id="trace-6758"></a>
<a id="trace-6768"></a>
<a id="trace-6783"></a>
<a id="trace-6811"></a>
<a id="trace-6819"></a>
<a id="trace-6834"></a>
<a id="trace-6847"></a>
<a id="trace-6861"></a>
<a id="trace-6874"></a>
<a id="trace-6955"></a>
<a id="trace-6971"></a>
- 109.75s–120.75s (×22), actor 5, squad 0 (trace 6458): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 6218. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.765450400164825, 'next_transition': 6538}.
<a id="trace-6982"></a>
- 120.95s–120.95s (×1), actor 0, squad 0 (trace 6982): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 6878. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299856288043412, 'next_transition': 7042}.
<a id="trace-6983"></a>
- 120.95s–120.95s (×1), actor 0, squad 0 (trace 6983): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 6878. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299856288043412, 'next_transition': 7042}.
<a id="trace-7042"></a>
<a id="trace-7048"></a>
<a id="trace-7066"></a>
<a id="trace-7084"></a>
<a id="trace-7101"></a>
<a id="trace-7112"></a>
<a id="trace-7138"></a>
<a id="trace-7147"></a>
<a id="trace-7226"></a>
<a id="trace-7241"></a>
<a id="trace-7255"></a>
<a id="trace-7271"></a>
<a id="trace-7288"></a>
<a id="trace-7296"></a>
<a id="trace-7312"></a>
<a id="trace-7325"></a>
<a id="trace-7339"></a>
<a id="trace-7347"></a>
<a id="trace-7437"></a>
- 121.25s–130.30s (×19), actor 5, squad 0 (trace 7042): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6880. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300356259768198, 'next_transition': 7048}.
<a id="trace-7443"></a>
- 130.50s–130.50s (×1), actor 0, squad 0 (trace 7443): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 130.00s, trace 7351. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2268001116071126, 'next_transition': 7448}.
<a id="trace-7448"></a>
<a id="trace-7461"></a>
<a id="trace-7479"></a>
<a id="trace-7497"></a>
<a id="trace-7517"></a>
<a id="trace-7532"></a>
<a id="trace-7547"></a>
<a id="trace-7568"></a>
<a id="trace-7573"></a>
- 130.80s–134.80s (×9), actor 5, squad 0 (trace 7448): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 7353. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680011160711616, 'next_transition': 7461}.
<a id="trace-1333"></a>
- 135.15s–135.15s (×1), actor 5, squad 0 (events line 1333): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7587"></a>
- 135.15s–135.15s (×1), actor 5, squad 0 (trace 7587): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.591371 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 135.15s, trace 7587. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7654}.
<a id="trace-7588"></a>
- 135.15s–135.15s (×1), actor 5, squad 0 (trace 7588): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.591371 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 135.15s, trace 7588. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7654}.
<a id="trace-7654"></a>
<a id="trace-7662"></a>
<a id="trace-7672"></a>
<a id="trace-7678"></a>
- 135.30s–136.80s (×4), actor 5, squad 0 (trace 7654): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.15s, trace 7588. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7662}.
<a id="trace-7684"></a>
- 136.85s–136.85s (×1), actor 0, squad 0 (trace 7684): MoveTactically. Knowledge: actor memory at 135.00s, trace 7577. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7747}.
<a id="trace-7685"></a>
- 136.85s–136.85s (×1), actor 0, squad 0 (trace 7685): traveling overwatch. Knowledge: actor memory at 135.00s, trace 7577. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7747}.
<a id="trace-7686"></a>
- 136.85s–136.85s (×1), actor 0, squad 0 (trace 7686): received platoon directive. Knowledge: actor memory at 135.00s, trace 7577. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7747}.
<a id="trace-7747"></a>
<a id="trace-7760"></a>
<a id="trace-7767"></a>
<a id="trace-7777"></a>
<a id="trace-7794"></a>
<a id="trace-7801"></a>
<a id="trace-7881"></a>
<a id="trace-7896"></a>
<a id="trace-7910"></a>
<a id="trace-7921"></a>
<a id="trace-7943"></a>
- 137.30s–142.30s (×11), actor 5, squad 0 (trace 7747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.15s, trace 7588. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08504768147927647, 'next_transition': 7760}.
<a id="trace-1401"></a>
- 142.35s–142.35s (×1), actor 5, squad 0 (events line 1401): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7946"></a>
- 142.35s–142.35s (×1), actor 5, squad 0 (trace 7946): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.845335 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.35s, trace 7946. Next observer evidence: {'until': 142.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34019072591709526, 'next_transition': 7954}.
<a id="trace-7947"></a>
- 142.35s–142.35s (×1), actor 5, squad 0 (trace 7947): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.845335 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.35s, trace 7947. Next observer evidence: {'until': 142.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34019072591709526, 'next_transition': 7954}.
<a id="trace-7954"></a>
<a id="trace-7971"></a>
<a id="trace-7981"></a>
- 142.80s–143.80s (×3), actor 5, squad 0 (trace 7954): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 142.35s, trace 7947. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22681086421289395, 'next_transition': 7971}.
<a id="trace-7986"></a>
- 144.05s–144.05s (×1), actor 0, squad 0 (trace 7986): traveling. Knowledge: actor memory at 140.00s, trace 7807. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.113405312265343, 'next_transition': 8102}.
<a id="trace-7987"></a>
- 144.05s–144.05s (×1), actor 0, squad 0 (trace 7987): received platoon directive. Knowledge: actor memory at 140.00s, trace 7807. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.113405312265343, 'next_transition': 8102}.
<a id="trace-8102"></a>
- 144.30s–144.30s (×1), actor 5, squad 0 (trace 8102): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 142.35s, trace 7947. Next observer evidence: {'until': 144.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22678577310151143, 'next_transition': 1429}.
<a id="trace-1429"></a>
- 144.75s–144.75s (×1), actor 5, squad 0 (events line 1429): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708850840182474, 'next_transition': 8120}.
<a id="trace-8111"></a>
- 144.75s–144.75s (×1), actor 5, squad 0 (trace 8111): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.75s, trace 8111. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708850840182474, 'next_transition': 8120}.
<a id="trace-8112"></a>
- 144.75s–144.75s (×1), actor 5, squad 0 (trace 8112): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.75s, trace 8112. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708850840182474, 'next_transition': 8120}.
<a id="trace-8120"></a>
<a id="trace-8200"></a>
<a id="trace-8210"></a>
<a id="trace-8233"></a>
- 144.80s–146.30s (×4), actor 5, squad 0 (trace 8120): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 144.75s, trace 8112. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856820973609521, 'next_transition': 8200}.
<a id="trace-8246"></a>
- 146.45s–146.45s (×1), actor 0, squad 0 (trace 8246): received platoon directive. Knowledge: actor memory at 145.00s, trace 8129. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418168384558489, 'next_transition': 8354}.
<a id="trace-8354"></a>
<a id="trace-8378"></a>
<a id="trace-8393"></a>
<a id="trace-8414"></a>
<a id="trace-8432"></a>
<a id="trace-8447"></a>
<a id="trace-8464"></a>
<a id="trace-8548"></a>
<a id="trace-8561"></a>
<a id="trace-8577"></a>
<a id="trace-8586"></a>
<a id="trace-8603"></a>
<a id="trace-8623"></a>
<a id="trace-8638"></a>
<a id="trace-8645"></a>
<a id="trace-8667"></a>
<a id="trace-8676"></a>
<a id="trace-8752"></a>
- 146.80s–155.30s (×18), actor 5, squad 0 (trace 8354): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 8131. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417919141667782, 'next_transition': 8378}.
<a id="trace-8759"></a>
- 155.75s–155.75s (×1), actor 0, squad 0 (trace 8759): matching received arrivals: traveling stage complete. Knowledge: actor memory at 155.00s, trace 8682. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725075182645121, 'next_transition': 8866}.
<a id="trace-8866"></a>
<a id="trace-8882"></a>
<a id="trace-8903"></a>
<a id="trace-8916"></a>
<a id="trace-8929"></a>
<a id="trace-8952"></a>
<a id="trace-8967"></a>
<a id="trace-8985"></a>
<a id="trace-8995"></a>
<a id="trace-9076"></a>
<a id="trace-9096"></a>
<a id="trace-9112"></a>
<a id="trace-9125"></a>
<a id="trace-9145"></a>
<a id="trace-9158"></a>
<a id="trace-9172"></a>
<a id="trace-9181"></a>
<a id="trace-9202"></a>
<a id="trace-9217"></a>
<a id="trace-9298"></a>
<a id="trace-9309"></a>
<a id="trace-9330"></a>
<a id="trace-9336"></a>
- 155.80s–166.80s (×23), actor 5, squad 0 (trace 8866): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 8684. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512609770679947, 'next_transition': 8882}.
<a id="trace-9343"></a>
- 167.15s–167.15s (×1), actor 0, squad 0 (trace 9343): matching received arrivals: deployment leg complete. Knowledge: actor memory at 165.00s, trace 9222. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150073031693069, 'next_transition': 9350}.
<a id="trace-9350"></a>
<a id="trace-9359"></a>
<a id="trace-9378"></a>
<a id="trace-9394"></a>
<a id="trace-9407"></a>
<a id="trace-9416"></a>
<a id="trace-9502"></a>
<a id="trace-9513"></a>
- 167.30s–170.80s (×8), actor 5, squad 0 (trace 9350): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 9224. Next observer evidence: {'until': 167.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450219264982656, 'next_transition': 9359}.
<a id="trace-1707"></a>
- 171.15s–171.15s (×1), actor 5, squad 0 (events line 1707): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9520"></a>
- 171.15s–171.15s (×1), actor 5, squad 0 (trace 9520): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.15s, trace 9520. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9529}.
<a id="trace-9521"></a>
- 171.15s–171.15s (×1), actor 5, squad 0 (trace 9521): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.15s, trace 9521. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9529}.
<a id="trace-9529"></a>
<a id="trace-9535"></a>
<a id="trace-9545"></a>
<a id="trace-9551"></a>
- 171.30s–172.80s (×4), actor 5, squad 0 (trace 9529): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.15s, trace 9521. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9535}.
<a id="trace-9556"></a>
- 172.85s–172.85s (×1), actor 0, squad 0 (trace 9556): Reorganise: completed/failed drill. Knowledge: actor memory at 170.00s, trace 9425. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9593}.
<a id="trace-9559"></a>
- 172.85s–172.85s (×1), actor 0, squad 0 (trace 9559): MoveTactically. Knowledge: actor memory at 170.00s, trace 9425. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9593}.
<a id="trace-9560"></a>
- 172.85s–172.85s (×1), actor 0, squad 0 (trace 9560): traveling overwatch. Knowledge: actor memory at 170.00s, trace 9425. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9593}.
<a id="trace-9561"></a>
- 172.85s–172.85s (×1), actor 0, squad 0 (trace 9561): Reorganise complete. Knowledge: actor memory at 170.00s, trace 9425. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9593}.
<a id="trace-9593"></a>
<a id="trace-9606"></a>
<a id="trace-9615"></a>
<a id="trace-9628"></a>
<a id="trace-9711"></a>
<a id="trace-9721"></a>
<a id="trace-9740"></a>
<a id="trace-9755"></a>
<a id="trace-9769"></a>
<a id="trace-9779"></a>
<a id="trace-9799"></a>
<a id="trace-9807"></a>
<a id="trace-9823"></a>
<a id="trace-9833"></a>
<a id="trace-9911"></a>
<a id="trace-9928"></a>
<a id="trace-9939"></a>
<a id="trace-9948"></a>
<a id="trace-9975"></a>
<a id="trace-9986"></a>
<a id="trace-10006"></a>
- 173.30s–183.30s (×21), actor 5, squad 0 (trace 9593): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 171.15s, trace 9521. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0850499154908457, 'next_transition': 9606}.
<a id="trace-10012"></a>
- 183.35s–183.35s (×1), actor 0, squad 0 (trace 10012): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 9836. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10069}.
<a id="trace-10069"></a>
<a id="trace-10092"></a>
<a id="trace-10106"></a>
<a id="trace-10181"></a>
<a id="trace-10196"></a>
<a id="trace-10215"></a>
<a id="trace-10226"></a>
<a id="trace-10241"></a>
<a id="trace-10248"></a>
<a id="trace-10265"></a>
- 183.80s–188.30s (×10), actor 5, squad 0 (trace 10069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9838. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02835002082120047, 'next_transition': 10092}.
<a id="trace-10276"></a>
- 188.75s–188.75s (×1), actor 0, squad 0 (trace 10276): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 10111. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27089137586117595, 'next_transition': 10410}.
<a id="trace-10277"></a>
- 188.75s–188.75s (×1), actor 0, squad 0 (trace 10277): bounding overwatch. Knowledge: actor memory at 185.00s, trace 10111. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27089137586117595, 'next_transition': 10410}.
<a id="trace-10278"></a>
- 188.75s–188.75s (×1), actor 0, squad 0 (trace 10278): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 10111. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27089137586117595, 'next_transition': 10410}.
<a id="trace-10410"></a>
- 188.80s–188.80s (×1), actor 5, squad 0 (trace 10410): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 10113. Next observer evidence: {'until': 189, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42841341518847553, 'next_transition': 10543}.
<a id="trace-10413"></a>
<a id="trace-10543"></a>
- 188.80s–189.00s (×2), actor 0, squad 0 (trace 10413): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 10111. Next observer evidence: {'until': 189, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42841341518847553, 'next_transition': 10543}.
<a id="trace-10679"></a>
<a id="trace-10701"></a>
<a id="trace-10791"></a>
<a id="trace-10807"></a>
<a id="trace-10827"></a>
<a id="trace-10848"></a>
- 189.30s–191.80s (×6), actor 5, squad 0 (trace 10679): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 10113. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9983647007273903, 'next_transition': 10701}.
<a id="trace-10866"></a>
- 192.10s–192.10s (×1), actor 5, squad 0 (trace 10866): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 192.10s, trace 10866. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03964962247613505, 'next_transition': 10883}.
<a id="trace-10883"></a>
- 192.30s–192.30s (×1), actor 5, squad 0 (trace 10883): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 192.10s, trace 10866. Next observer evidence: {'until': 192.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08016755270213725, 'next_transition': 10890}.
<a id="trace-10890"></a>
- 192.50s–192.50s (×1), actor 0, squad 0 (trace 10890): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 190.00s, trace 10708. Next observer evidence: {'until': 192.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08169784548107739, 'next_transition': 1937}.
<a id="trace-10891"></a>
- 192.50s–192.50s (×1), actor 0, squad 0 (trace 10891): rearward bound: one stationary suppressing element. Knowledge: actor memory at 190.00s, trace 10708. Next observer evidence: {'until': 192.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08169784548107739, 'next_transition': 1937}.
<a id="trace-1937"></a>
- 192.75s–192.75s (×1), actor 5, squad 0 (events line 1937): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0012689193236764288, 'next_transition': 11078}.
<a id="trace-11069"></a>
- 192.75s–192.75s (×1), actor 5, squad 0 (trace 11069): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368526 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 192.75s, trace 11069. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0012689193236764288, 'next_transition': 11078}.
<a id="trace-11070"></a>
- 192.75s–192.75s (×1), actor 5, squad 0 (trace 11070): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368526 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 192.75s, trace 11070. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0012689193236764288, 'next_transition': 11078}.
<a id="trace-11078"></a>
<a id="trace-11087"></a>
<a id="trace-11098"></a>
<a id="trace-11134"></a>
<a id="trace-11138"></a>
<a id="trace-11216"></a>
<a id="trace-11229"></a>
<a id="trace-11245"></a>
<a id="trace-11262"></a>
<a id="trace-11281"></a>
<a id="trace-11310"></a>
<a id="trace-11345"></a>
<a id="trace-11358"></a>
<a id="trace-11377"></a>
<a id="trace-11392"></a>
<a id="trace-11465"></a>
<a id="trace-11475"></a>
<a id="trace-11482"></a>
<a id="trace-11487"></a>
<a id="trace-11498"></a>
<a id="trace-11505"></a>
<a id="trace-11513"></a>
<a id="trace-11520"></a>
<a id="trace-11532"></a>
<a id="trace-11545"></a>
- 192.80s–204.80s (×25), actor 5, squad 0 (trace 11078): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 192.75s, trace 11070. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1710507293904354, 'next_transition': 11087}.
<a id="trace-11548"></a>
- 204.85s–204.85s (×1), actor 1, squad 0 (trace 11548): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 11395. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399712898383771, 'next_transition': 11618}.
<a id="trace-11549"></a>
- 204.85s–204.85s (×1), actor 1, squad 0 (trace 11549): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 11395. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399712898383771, 'next_transition': 11618}.
<a id="trace-11618"></a>
<a id="trace-11626"></a>
<a id="trace-11638"></a>
<a id="trace-11642"></a>
<a id="trace-11650"></a>
<a id="trace-11655"></a>
<a id="trace-11664"></a>
<a id="trace-11667"></a>
<a id="trace-11674"></a>
<a id="trace-11755"></a>
<a id="trace-11762"></a>
<a id="trace-11773"></a>
<a id="trace-11779"></a>
<a id="trace-11788"></a>
<a id="trace-11797"></a>
<a id="trace-11806"></a>
<a id="trace-11814"></a>
<a id="trace-11824"></a>
<a id="trace-11831"></a>
<a id="trace-11904"></a>
<a id="trace-11912"></a>
<a id="trace-11924"></a>
<a id="trace-11935"></a>
<a id="trace-11946"></a>
<a id="trace-11952"></a>
<a id="trace-11965"></a>
<a id="trace-11975"></a>
<a id="trace-11985"></a>
<a id="trace-11994"></a>
<a id="trace-12066"></a>
<a id="trace-12073"></a>
<a id="trace-12082"></a>
- 205.30s–221.30s (×32), actor 5, squad 0 (trace 11618): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 11553. Next observer evidence: {'until': 205.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259993655406733, 'next_transition': 11626}.
<a id="trace-12085"></a>
- 221.30s–221.30s (×1), actor 1, squad 0 (trace 12085): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 11998. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12094}.
<a id="trace-12094"></a>
<a id="trace-12108"></a>
<a id="trace-12113"></a>
<a id="trace-12125"></a>
<a id="trace-12134"></a>
<a id="trace-12145"></a>
<a id="trace-12157"></a>
<a id="trace-12229"></a>
<a id="trace-12239"></a>
<a id="trace-12248"></a>
<a id="trace-12256"></a>
<a id="trace-12267"></a>
<a id="trace-12274"></a>
<a id="trace-12286"></a>
<a id="trace-12292"></a>
<a id="trace-12301"></a>
<a id="trace-12308"></a>
<a id="trace-12379"></a>
<a id="trace-12389"></a>
<a id="trace-12401"></a>
<a id="trace-12412"></a>
<a id="trace-12424"></a>
<a id="trace-12430"></a>
<a id="trace-12441"></a>
<a id="trace-12448"></a>
<a id="trace-12459"></a>
<a id="trace-12465"></a>
<a id="trace-12538"></a>
<a id="trace-12543"></a>
<a id="trace-12553"></a>
<a id="trace-12563"></a>
- 221.80s–236.80s (×31), actor 5, squad 0 (trace 12094): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 11999. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12108}.
<a id="trace-2222"></a>
- 237.10s–237.10s (×1), actor 5, squad 0 (events line 2222): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12568"></a>
- 237.10s–237.10s (×1), actor 5, squad 0 (trace 12568): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234093 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 237.10s, trace 12568. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12575}.
<a id="trace-12569"></a>
- 237.10s–237.10s (×1), actor 5, squad 0 (trace 12569): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234093 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 237.10s, trace 12569. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12575}.
<a id="trace-12575"></a>
<a id="trace-12586"></a>
<a id="trace-12598"></a>
- 237.30s–238.30s (×3), actor 5, squad 0 (trace 12575): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 237.10s, trace 12569. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12586}.
<a id="trace-12602"></a>
- 238.70s–238.70s (×1), actor 1, squad 0 (trace 12602): Withdraw to received rally. Knowledge: actor memory at 235.00s, trace 12469. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12630}.
<a id="trace-12603"></a>
- 238.70s–238.70s (×1), actor 1, squad 0 (trace 12603): rearward bound: one stationary suppressing element. Knowledge: actor memory at 235.00s, trace 12469. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12630}.
<a id="trace-12630"></a>
<a id="trace-12641"></a>
<a id="trace-12651"></a>
<a id="trace-12728"></a>
<a id="trace-12740"></a>
<a id="trace-12756"></a>
<a id="trace-12763"></a>
<a id="trace-12777"></a>
<a id="trace-12789"></a>
<a id="trace-12799"></a>
<a id="trace-12808"></a>
<a id="trace-12823"></a>
<a id="trace-12838"></a>
<a id="trace-12915"></a>
<a id="trace-12926"></a>
<a id="trace-12942"></a>
<a id="trace-12949"></a>
<a id="trace-12959"></a>
<a id="trace-12965"></a>
<a id="trace-12980"></a>
<a id="trace-12999"></a>
<a id="trace-13007"></a>
<a id="trace-13016"></a>
- 238.80s–249.80s (×23), actor 5, squad 0 (trace 12630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 237.10s, trace 12569. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12641}.
<a id="trace-13019"></a>
- 249.85s–249.85s (×1), actor 1, squad 0 (trace 13019): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 245.00s, trace 12848. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400000000000034, 'next_transition': 13098}.
<a id="trace-13020"></a>
- 249.85s–249.85s (×1), actor 1, squad 0 (trace 13020): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 245.00s, trace 12848. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400000000000034, 'next_transition': 13098}.
<a id="trace-13098"></a>
<a id="trace-13109"></a>
<a id="trace-13119"></a>
<a id="trace-13131"></a>
<a id="trace-13154"></a>
<a id="trace-13166"></a>
<a id="trace-13179"></a>
<a id="trace-13184"></a>
<a id="trace-13197"></a>
<a id="trace-13206"></a>
<a id="trace-13277"></a>
<a id="trace-13287"></a>
<a id="trace-13300"></a>
<a id="trace-13308"></a>
<a id="trace-13323"></a>
<a id="trace-13331"></a>
<a id="trace-13348"></a>
<a id="trace-13360"></a>
<a id="trace-13369"></a>
<a id="trace-13375"></a>
<a id="trace-13451"></a>
<a id="trace-13463"></a>
<a id="trace-13474"></a>
<a id="trace-13483"></a>
<a id="trace-13495"></a>
<a id="trace-13501"></a>
<a id="trace-13512"></a>
<a id="trace-13521"></a>
<a id="trace-13536"></a>
<a id="trace-13545"></a>
<a id="trace-13627"></a>
<a id="trace-13635"></a>
<a id="trace-13648"></a>
<a id="trace-13657"></a>
<a id="trace-13665"></a>
<a id="trace-13674"></a>
<a id="trace-13688"></a>
<a id="trace-13696"></a>
<a id="trace-13710"></a>
<a id="trace-13717"></a>
<a id="trace-13796"></a>
<a id="trace-13804"></a>
<a id="trace-13815"></a>
<a id="trace-13821"></a>
<a id="trace-13837"></a>
<a id="trace-13849"></a>
<a id="trace-13863"></a>
<a id="trace-13872"></a>
<a id="trace-13885"></a>
<a id="trace-13891"></a>
<a id="trace-13964"></a>
<a id="trace-13972"></a>
<a id="trace-13987"></a>
<a id="trace-13995"></a>
<a id="trace-14009"></a>
<a id="trace-14015"></a>
<a id="trace-14031"></a>
<a id="trace-14042"></a>
<a id="trace-14050"></a>
<a id="trace-14062"></a>
<a id="trace-14139"></a>
<a id="trace-14147"></a>
<a id="trace-14160"></a>
<a id="trace-14167"></a>
<a id="trace-14182"></a>
<a id="trace-14188"></a>
<a id="trace-14199"></a>
<a id="trace-14206"></a>
<a id="trace-14219"></a>
<a id="trace-14230"></a>
<a id="trace-14307"></a>
<a id="trace-14317"></a>
<a id="trace-14333"></a>
<a id="trace-14340"></a>
<a id="trace-14350"></a>
<a id="trace-14356"></a>
<a id="trace-14372"></a>
<a id="trace-14380"></a>
<a id="trace-14394"></a>
<a id="trace-14400"></a>
<a id="trace-14477"></a>
<a id="trace-14487"></a>
<a id="trace-14495"></a>
<a id="trace-14507"></a>
<a id="trace-14520"></a>
<a id="trace-14528"></a>
<a id="trace-14546"></a>
<a id="trace-14552"></a>
<a id="trace-14566"></a>
<a id="trace-14572"></a>
<a id="trace-14645"></a>
<a id="trace-14651"></a>
<a id="trace-14664"></a>
<a id="trace-14676"></a>
<a id="trace-14687"></a>
- 250.30s–297.30s (×95), actor 5, squad 0 (trace 13098): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 13025. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600666666666598, 'next_transition': 13109}.
<a id="trace-2780"></a>
- 297.45s–297.45s (×1), actor 5, squad 0 (events line 2780): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14691"></a>
- 297.45s–297.45s (×1), actor 5, squad 0 (trace 14691): renew committed intent (75 s lifetime). Knowledge: actor memory at 297.45s, trace 14691. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14699}.
<a id="trace-14699"></a>
<a id="trace-14716"></a>
<a id="trace-14721"></a>
<a id="trace-14730"></a>
<a id="trace-14738"></a>
<a id="trace-14818"></a>
<a id="trace-14828"></a>
<a id="trace-14842"></a>
<a id="trace-14848"></a>
<a id="trace-14861"></a>
<a id="trace-14870"></a>
<a id="trace-14880"></a>
<a id="trace-14889"></a>
<a id="trace-14903"></a>
<a id="trace-14911"></a>
<a id="trace-14990"></a>
<a id="trace-14999"></a>
<a id="trace-15014"></a>
<a id="trace-15019"></a>
<a id="trace-15031"></a>
<a id="trace-15038"></a>
<a id="trace-15052"></a>
<a id="trace-15063"></a>
<a id="trace-15075"></a>
<a id="trace-15084"></a>
<a id="trace-15160"></a>
<a id="trace-15167"></a>
<a id="trace-15178"></a>
<a id="trace-15186"></a>
<a id="trace-15201"></a>
<a id="trace-15210"></a>
<a id="trace-15225"></a>
<a id="trace-15232"></a>
<a id="trace-15248"></a>
<a id="trace-15256"></a>
<a id="trace-15327"></a>
<a id="trace-15337"></a>
<a id="trace-15349"></a>
<a id="trace-15358"></a>
<a id="trace-15372"></a>
<a id="trace-15380"></a>
<a id="trace-15397"></a>
<a id="trace-15403"></a>
<a id="trace-15414"></a>
<a id="trace-15420"></a>
<a id="trace-15496"></a>
<a id="trace-15510"></a>
<a id="trace-15522"></a>
<a id="trace-15530"></a>
<a id="trace-15542"></a>
<a id="trace-15548"></a>
<a id="trace-15560"></a>
<a id="trace-15567"></a>
<a id="trace-15583"></a>
<a id="trace-15592"></a>
<a id="trace-15669"></a>
<a id="trace-15676"></a>
<a id="trace-15690"></a>
<a id="trace-15699"></a>
<a id="trace-15707"></a>
<a id="trace-15718"></a>
<a id="trace-15732"></a>
<a id="trace-15741"></a>
<a id="trace-15754"></a>
<a id="trace-15762"></a>
<a id="trace-15840"></a>
<a id="trace-15848"></a>
<a id="trace-15860"></a>
<a id="trace-15865"></a>
<a id="trace-15877"></a>
<a id="trace-15887"></a>
<a id="trace-15900"></a>
<a id="trace-15910"></a>
<a id="trace-15923"></a>
<a id="trace-15930"></a>
<a id="trace-16006"></a>
<a id="trace-16014"></a>
<a id="trace-16029"></a>
<a id="trace-16037"></a>
<a id="trace-16052"></a>
<a id="trace-16058"></a>
<a id="trace-16073"></a>
<a id="trace-16082"></a>
<a id="trace-16090"></a>
<a id="trace-16099"></a>
<a id="trace-16176"></a>
<a id="trace-16184"></a>
<a id="trace-16198"></a>
<a id="trace-16208"></a>
<a id="trace-16223"></a>
<a id="trace-16229"></a>
<a id="trace-16241"></a>
<a id="trace-16247"></a>
<a id="trace-16261"></a>
<a id="trace-16273"></a>
<a id="trace-16347"></a>
<a id="trace-16356"></a>
<a id="trace-16369"></a>
<a id="trace-16376"></a>
<a id="trace-16386"></a>
<a id="trace-16394"></a>
<a id="trace-16412"></a>
<a id="trace-16421"></a>
<a id="trace-16435"></a>
<a id="trace-16442"></a>
<a id="trace-16518"></a>
<a id="trace-16529"></a>
<a id="trace-16539"></a>
<a id="trace-16548"></a>
<a id="trace-16561"></a>
<a id="trace-16568"></a>
<a id="trace-16583"></a>
<a id="trace-16591"></a>
<a id="trace-16606"></a>
<a id="trace-16613"></a>
<a id="trace-16688"></a>
<a id="trace-16694"></a>
<a id="trace-16709"></a>
<a id="trace-16720"></a>
<a id="trace-16733"></a>
- 297.80s–357.30s (×120), actor 5, squad 0 (trace 14699): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 297.45s, trace 14691. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14716}.
<a id="trace-3328"></a>
- 357.45s–357.45s (×1), actor 5, squad 0 (events line 3328): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16737"></a>
- 357.45s–357.45s (×1), actor 5, squad 0 (trace 16737): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.45s, trace 16737. Next observer evidence: {'until': 357.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16746}.
<a id="trace-16746"></a>
<a id="trace-16759"></a>
<a id="trace-16764"></a>
<a id="trace-16774"></a>
<a id="trace-16781"></a>
- 357.80s–359.80s (×5), actor 5, squad 0 (trace 16746): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 357.45s, trace 16737. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16759}.

## Net delivery

223 matched order/radio deliveries; 249 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.101s; maximum 1.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1386: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1387: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1689: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1690: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1691: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1692: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.05s leader 5, trace 2371: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 2585: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 2586: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2597: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2599: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2600: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2601: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2602: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2603: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2604: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2894: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2896: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2897: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2898: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2899: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2900: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2901: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3292: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3294: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3295: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3296: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3297: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3298: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3299: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3704: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3706: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3707: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3708: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3709: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3710: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3711: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3906: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3908: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3909: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3910: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3911: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3912: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3913: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 4068: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4070: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4071: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4072: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4073: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4074: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4075: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4345: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4347: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4348: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4349: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4350: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4351: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4352: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4617: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4619: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4620: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4621: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4622: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4623: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4624: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4841: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4843: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4844: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4845: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4846: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4847: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4848: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 79.05s leader 5, trace 5021: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 79.05s leader 5, trace 5022: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 5045: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5047: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5048: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5049: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5050: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5051: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5052: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 5342: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5344: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5345: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5346: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5347: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5348: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5349: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5532: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5534: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5535: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5536: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5537: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5538: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5539: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5800: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5802: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5803: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5804: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5805: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5806: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5807: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 6012: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6014: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6015: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6016: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6017: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6018: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6019: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 6216: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6218: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6219: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6220: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6221: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6222: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6223: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 6466: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6468: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6469: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6470: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6471: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6472: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6473: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6688: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6690: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6691: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6692: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6693: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6694: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6695: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 6878: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6880: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6881: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6882: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6883: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6884: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6885: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 7157: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7159: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7160: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7161: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7162: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7163: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7164: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 7351: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7353: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7354: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7355: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7356: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7357: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7358: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 7577: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7579: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7580: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7581: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7582: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7583: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7584: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.15s leader 5, trace 7587: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.15s leader 5, trace 7588: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 7807: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7809: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7810: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7811: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7812: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7813: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7814: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.35s leader 5, trace 7946: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.35s leader 5, trace 7947: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.75s leader 5, trace 8111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.75s leader 5, trace 8112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 8129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8133: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8134: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8135: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8136: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 8469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8473: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8474: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8475: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8476: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 8682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 8998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 9002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 9222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 9425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.15s leader 5, trace 9520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.15s leader 5, trace 9521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 9635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 9836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 10111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 10112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 10115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 10708: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10712: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10713: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10715: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.10s leader 5, trace 10866: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.75s leader 5, trace 11069: estimate 5.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.75s leader 5, trace 11070: estimate 5.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 11141: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 11142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 11143: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 11144: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 11145: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11146: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 11147: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11148: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 11395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 11396: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11397: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 11398: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11399: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 11400: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11401: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 11552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 11553: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 11554: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 11555: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 11556: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 11557: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 11558: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 11685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 11686: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 11687: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 11688: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11689: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11690: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11691: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11838: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11839: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11840: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11841: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11842: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11843: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11999: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12000: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12001: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12002: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12003: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12004: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 12160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12161: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12162: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12163: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12164: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12165: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12166: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 12312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 12313: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 12314: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 12315: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12316: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 12317: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12318: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12470: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12471: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12472: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12473: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12474: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12475: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.10s leader 5, trace 12568: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.10s leader 5, trace 12569: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12654: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12655: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12656: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12657: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12658: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12659: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12660: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12848: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12849: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12850: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12851: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12852: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12853: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12854: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 13024: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 13025: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 13026: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 13027: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 13028: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 13029: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 13030: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 13209: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13210: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13211: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13212: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13213: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13214: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13215: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 13380: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13381: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13382: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13383: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13384: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13385: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13386: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13554: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13555: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13556: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13557: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13558: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13559: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13560: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13721: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13722: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13723: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13724: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13725: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13726: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13727: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13897: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13898: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13899: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13900: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13901: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13902: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13903: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 14067: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14068: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 14069: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14070: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14071: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14072: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14073: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14237: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14238: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14239: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14240: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14241: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14242: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14243: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14405: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14406: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 14407: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14408: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14409: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14410: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14411: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 14578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14579: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14580: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14581: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14582: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.45s leader 5, trace 14691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 14744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 15088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 15090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 15424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 15426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 15600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 15602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 15766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 15767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 15768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 15769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 15770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 15771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 15772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 15938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 16103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 16105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 16106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 16108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 16279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 16447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 16448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 16449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 16450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 16451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 16452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 16453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 16617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 16618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 16619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 16620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 16621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 16622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 16623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.45s leader 5, trace 16737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action

## Outcome attribution

- 79.05s, evidence 755: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 79.05s, evidence 5021: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.463682 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725182675040195, 'next_transition': 5038}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 79.05s, evidence 5022: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.463682 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725182675040195, 'next_transition': 5038}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 237.10s, evidence 2222: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 237.10s, evidence 12568: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234093 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12575}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 237.10s, evidence 12569: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234093 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12575}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 297.45s, evidence 2780: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 357.45s, evidence 3328: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
