# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/22/109/good-azure/battle-109-1789674159463981670`

## Battle summary

**Ember** · 360 s · 827 shots.

### Turning points

- 34.9s, squad 4: contact (events line 299). First recorded contact.
- 57.1s, squad 1: help call ([trace 13599](#trace-13599)). No completion observed before termination.
- 59.2s, squad 0: help answer ([trace 13762](#trace-13762)). 67.3s, squad 0: prepared a base of fire.
- 66.6s, squad 0: help call ([trace 17072](#trace-17072)). No completion observed before termination.
- 120.2s, squad 0: withdrawal ([trace 25133](#trace-25133)). 124.0s, squad 0: took cover and returned fire.
- 128.2s, squad 0: withdrawal ([trace 26477](#trace-26477)). 151.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 209.8s, squad 0: withdrawal ([trace 30716](#trace-30716)). 211.7s, squad 0: took cover and returned fire.
- 211.4s, squad 0: help call ([trace 31100](#trace-31100)). No completion observed before termination.
- 220.7s, squad 0: withdrawal ([trace 31573](#trace-31573)). 286.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 245.9s, squad 0: help call ([trace 32696](#trace-32696)). No completion observed before termination.

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 5 further drill types; withdrew; 72 shots, 5/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 1 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 670 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 84 shots, 0/2 lost.

### Decisions and attribution

At 42.1s, squad 1 chose FightHere: nearest known group ([trace 5664](#trace-5664)), followed by 1 shots and 0 own casualties; estimate 9.0 against 8 distinct squad-reported contacts; At 220.7s, squad 0 chose Withdraw to received rally ([trace 31573](#trace-31573)), followed by 1 shots and 0 own casualties; estimate 7.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339422, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 828}.

### Communication

255 matched deliveries (mean 0.41s, max 2.20s); 487 explicit drops; 6 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 34.85s, squad 4, contact, evidence events line 299: First recorded contact; .
- 57.10s, squad 1, help call, evidence 13599: NeedSupport; No completion observed before termination.
- 59.15s, squad 0, help answer, evidence 13762: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 67.3s, squad 0: prepared a base of fire.
- 66.60s, squad 0, help call, evidence 17072: NeedSupport; No completion observed before termination.
- 120.20s, squad 0, withdrawal, evidence 25133: Withdraw to received rally; 124.0s, squad 0: took cover and returned fire.
- 128.25s, squad 0, withdrawal, evidence 26477: BreakContact: believed ratio at least two without superiority; 151.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 209.80s, squad 0, withdrawal, evidence 30716: Withdraw to received rally; 211.7s, squad 0: took cover and returned fire.
- 211.35s, squad 0, help call, evidence 31100: NeedSupport; No completion observed before termination.
- 220.65s, squad 0, withdrawal, evidence 31573: Withdraw to received rally; 286.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 245.85s, squad 0, help call, evidence 32696: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365411762940747, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365411762940747, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365411762940747, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102783, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102783, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102783, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-643"></a>
<a id="trace-645"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-685"></a>
<a id="trace-687"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299856292415265, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339422, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 828}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339422, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339422, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 828}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 828}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-741"></a>
<a id="trace-743"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-953"></a>
<a id="trace-955"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150059971940889, 'next_transition': 741}.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.86268294626592, 'next_transition': 1850}.
<a id="trace-957"></a>
<a id="trace-1303"></a>
<a id="trace-1342"></a>
<a id="trace-1344"></a>
<a id="trace-1387"></a>
<a id="trace-1389"></a>
<a id="trace-1452"></a>
<a id="trace-1454"></a>
<a id="trace-1498"></a>
<a id="trace-1500"></a>
<a id="trace-1529"></a>
<a id="trace-1531"></a>
<a id="trace-1556"></a>
<a id="trace-1558"></a>
<a id="trace-1648"></a>
<a id="trace-1650"></a>
<a id="trace-1675"></a>
<a id="trace-1677"></a>
<a id="trace-1697"></a>
<a id="trace-1699"></a>
<a id="trace-1728"></a>
<a id="trace-1730"></a>
<a id="trace-1778"></a>
<a id="trace-1780"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-1818"></a>
<a id="trace-1820"></a>
<a id="trace-1970"></a>
<a id="trace-1972"></a>
<a id="trace-2057"></a>
<a id="trace-2059"></a>
<a id="trace-2091"></a>
<a id="trace-2093"></a>
<a id="trace-2417"></a>
<a id="trace-2419"></a>
<a id="trace-2457"></a>
<a id="trace-2459"></a>
<a id="trace-2489"></a>
<a id="trace-2491"></a>
<a id="trace-2539"></a>
<a id="trace-2541"></a>
<a id="trace-2573"></a>
<a id="trace-2575"></a>
<a id="trace-2622"></a>
<a id="trace-2624"></a>
<a id="trace-2713"></a>
<a id="trace-2715"></a>
<a id="trace-2744"></a>
<a id="trace-2746"></a>
<a id="trace-2770"></a>
<a id="trace-2772"></a>
<a id="trace-2798"></a>
<a id="trace-2800"></a>
<a id="trace-2832"></a>
<a id="trace-2834"></a>
<a id="trace-2858"></a>
<a id="trace-2860"></a>
<a id="trace-2888"></a>
<a id="trace-2890"></a>
<a id="trace-2918"></a>
<a id="trace-2920"></a>
<a id="trace-2975"></a>
<a id="trace-2977"></a>
<a id="trace-3058"></a>
<a id="trace-3060"></a>
<a id="trace-3077"></a>
<a id="trace-3079"></a>
<a id="trace-3100"></a>
<a id="trace-3102"></a>
<a id="trace-3114"></a>
<a id="trace-3116"></a>
<a id="trace-3130"></a>
<a id="trace-3132"></a>
<a id="trace-3142"></a>
<a id="trace-3144"></a>
<a id="trace-3167"></a>
<a id="trace-3169"></a>
<a id="trace-3209"></a>
<a id="trace-3211"></a>
<a id="trace-3230"></a>
<a id="trace-3232"></a>
<a id="trace-3480"></a>
<a id="trace-3482"></a>
<a id="trace-3493"></a>
<a id="trace-3495"></a>
<a id="trace-3509"></a>
<a id="trace-3511"></a>
<a id="trace-3526"></a>
<a id="trace-3528"></a>
<a id="trace-3544"></a>
<a id="trace-3546"></a>
<a id="trace-3559"></a>
<a id="trace-3561"></a>
<a id="trace-3577"></a>
<a id="trace-3579"></a>
<a id="trace-3592"></a>
<a id="trace-3594"></a>
<a id="trace-3613"></a>
<a id="trace-3615"></a>
<a id="trace-4004"></a>
<a id="trace-4006"></a>
<a id="trace-4097"></a>
<a id="trace-4099"></a>
<a id="trace-4126"></a>
<a id="trace-4128"></a>
<a id="trace-4186"></a>
<a id="trace-4188"></a>
<a id="trace-4226"></a>
<a id="trace-4228"></a>
<a id="trace-4245"></a>
<a id="trace-4247"></a>
<a id="trace-4590"></a>
<a id="trace-4592"></a>
<a id="trace-5355"></a>
<a id="trace-5357"></a>
<a id="trace-5387"></a>
<a id="trace-5389"></a>
<a id="trace-5435"></a>
<a id="trace-5437"></a>
<a id="trace-5526"></a>
<a id="trace-5528"></a>
<a id="trace-5570"></a>
<a id="trace-5572"></a>
<a id="trace-5596"></a>
<a id="trace-5598"></a>
<a id="trace-5639"></a>
<a id="trace-5641"></a>
<a id="trace-5951"></a>
<a id="trace-5953"></a>
<a id="trace-5987"></a>
<a id="trace-5989"></a>
<a id="trace-6520"></a>
<a id="trace-6522"></a>
<a id="trace-7039"></a>
<a id="trace-7041"></a>
<a id="trace-7097"></a>
<a id="trace-7099"></a>
<a id="trace-7223"></a>
<a id="trace-7225"></a>
<a id="trace-7759"></a>
<a id="trace-7761"></a>
<a id="trace-7821"></a>
<a id="trace-7823"></a>
<a id="trace-7902"></a>
<a id="trace-7904"></a>
<a id="trace-7950"></a>
<a id="trace-7952"></a>
<a id="trace-7983"></a>
<a id="trace-7985"></a>
<a id="trace-8028"></a>
<a id="trace-8030"></a>
<a id="trace-11872"></a>
<a id="trace-11874"></a>
<a id="trace-11928"></a>
<a id="trace-11930"></a>
<a id="trace-11973"></a>
<a id="trace-11975"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
<a id="trace-13126"></a>
<a id="trace-13128"></a>
<a id="trace-13268"></a>
<a id="trace-13270"></a>
<a id="trace-13311"></a>
<a id="trace-13313"></a>
<a id="trace-13426"></a>
<a id="trace-13428"></a>
<a id="trace-13517"></a>
<a id="trace-13519"></a>
<a id="trace-13536"></a>
<a id="trace-13538"></a>
<a id="trace-13567"></a>
<a id="trace-13569"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13648"></a>
<a id="trace-13650"></a>
<a id="trace-13691"></a>
<a id="trace-13693"></a>
<a id="trace-13734"></a>
<a id="trace-13736"></a>
<a id="trace-16512"></a>
<a id="trace-16514"></a>
<a id="trace-16533"></a>
<a id="trace-16535"></a>
<a id="trace-16625"></a>
<a id="trace-16627"></a>
<a id="trace-16677"></a>
<a id="trace-16679"></a>
<a id="trace-16700"></a>
<a id="trace-16702"></a>
<a id="trace-16730"></a>
<a id="trace-16732"></a>
<a id="trace-16769"></a>
<a id="trace-16771"></a>
<a id="trace-16790"></a>
<a id="trace-16792"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-17004"></a>
<a id="trace-17006"></a>
<a id="trace-17030"></a>
<a id="trace-17032"></a>
<a id="trace-17055"></a>
<a id="trace-17057"></a>
<a id="trace-17090"></a>
<a id="trace-17092"></a>
<a id="trace-19952"></a>
<a id="trace-19954"></a>
<a id="trace-20027"></a>
<a id="trace-20029"></a>
<a id="trace-20085"></a>
<a id="trace-20087"></a>
<a id="trace-20135"></a>
<a id="trace-20137"></a>
<a id="trace-20314"></a>
<a id="trace-20316"></a>
<a id="trace-20352"></a>
<a id="trace-20354"></a>
<a id="trace-20383"></a>
<a id="trace-20385"></a>
<a id="trace-20396"></a>
<a id="trace-20398"></a>
<a id="trace-20428"></a>
<a id="trace-20430"></a>
<a id="trace-20458"></a>
<a id="trace-20460"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20519"></a>
<a id="trace-20521"></a>
<a id="trace-20615"></a>
<a id="trace-20617"></a>
<a id="trace-20627"></a>
<a id="trace-20629"></a>
<a id="trace-20651"></a>
<a id="trace-20653"></a>
<a id="trace-20715"></a>
<a id="trace-20717"></a>
<a id="trace-20749"></a>
<a id="trace-20751"></a>
<a id="trace-20820"></a>
<a id="trace-20822"></a>
<a id="trace-20842"></a>
<a id="trace-20844"></a>
<a id="trace-20938"></a>
<a id="trace-20940"></a>
<a id="trace-20966"></a>
<a id="trace-20968"></a>
<a id="trace-21011"></a>
<a id="trace-21013"></a>
<a id="trace-21035"></a>
<a id="trace-21037"></a>
<a id="trace-21044"></a>
<a id="trace-21046"></a>
<a id="trace-21065"></a>
<a id="trace-21067"></a>
<a id="trace-21091"></a>
<a id="trace-21093"></a>
<a id="trace-21206"></a>
<a id="trace-21208"></a>
<a id="trace-21739"></a>
<a id="trace-21741"></a>
<a id="trace-21843"></a>
<a id="trace-21845"></a>
<a id="trace-21896"></a>
<a id="trace-21898"></a>
<a id="trace-21956"></a>
<a id="trace-21958"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22128"></a>
<a id="trace-22130"></a>
<a id="trace-22217"></a>
<a id="trace-22219"></a>
<a id="trace-22336"></a>
<a id="trace-22338"></a>
<a id="trace-22458"></a>
<a id="trace-22460"></a>
<a id="trace-22808"></a>
<a id="trace-22810"></a>
<a id="trace-22844"></a>
<a id="trace-22846"></a>
<a id="trace-22886"></a>
<a id="trace-22888"></a>
<a id="trace-22906"></a>
<a id="trace-22908"></a>
<a id="trace-23035"></a>
<a id="trace-23037"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23082"></a>
<a id="trace-23084"></a>
<a id="trace-23102"></a>
<a id="trace-23104"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23299"></a>
<a id="trace-23301"></a>
<a id="trace-23333"></a>
<a id="trace-23335"></a>
<a id="trace-23374"></a>
<a id="trace-23376"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23481"></a>
<a id="trace-23483"></a>
<a id="trace-23542"></a>
<a id="trace-23544"></a>
<a id="trace-23602"></a>
<a id="trace-23604"></a>
<a id="trace-23652"></a>
<a id="trace-23654"></a>
<a id="trace-23723"></a>
<a id="trace-23725"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23937"></a>
<a id="trace-23939"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
<a id="trace-24014"></a>
<a id="trace-24016"></a>
<a id="trace-24075"></a>
<a id="trace-24077"></a>
<a id="trace-24452"></a>
<a id="trace-24454"></a>
<a id="trace-24468"></a>
<a id="trace-24470"></a>
<a id="trace-24498"></a>
<a id="trace-24500"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24597"></a>
<a id="trace-24599"></a>
<a id="trace-24627"></a>
<a id="trace-24629"></a>
<a id="trace-24644"></a>
<a id="trace-24646"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24693"></a>
<a id="trace-24695"></a>
<a id="trace-24708"></a>
<a id="trace-24710"></a>
<a id="trace-24730"></a>
<a id="trace-24732"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24760"></a>
<a id="trace-24762"></a>
<a id="trace-24854"></a>
<a id="trace-24856"></a>
<a id="trace-24876"></a>
<a id="trace-24878"></a>
<a id="trace-24896"></a>
<a id="trace-24898"></a>
<a id="trace-24913"></a>
<a id="trace-24915"></a>
<a id="trace-24937"></a>
<a id="trace-24939"></a>
<a id="trace-24992"></a>
<a id="trace-24994"></a>
<a id="trace-25020"></a>
<a id="trace-25022"></a>
<a id="trace-25054"></a>
<a id="trace-25056"></a>
<a id="trace-25661"></a>
<a id="trace-25663"></a>
<a id="trace-25712"></a>
<a id="trace-25714"></a>
<a id="trace-25756"></a>
<a id="trace-25758"></a>
<a id="trace-25773"></a>
<a id="trace-25775"></a>
<a id="trace-26287"></a>
<a id="trace-26289"></a>
<a id="trace-26435"></a>
<a id="trace-26437"></a>
<a id="trace-26461"></a>
<a id="trace-26463"></a>
<a id="trace-26470"></a>
<a id="trace-26472"></a>
<a id="trace-26894"></a>
<a id="trace-26896"></a>
<a id="trace-26902"></a>
<a id="trace-26904"></a>
<a id="trace-26942"></a>
<a id="trace-26944"></a>
<a id="trace-27015"></a>
<a id="trace-27017"></a>
<a id="trace-27025"></a>
<a id="trace-27027"></a>
<a id="trace-27053"></a>
<a id="trace-27055"></a>
<a id="trace-27063"></a>
<a id="trace-27065"></a>
<a id="trace-27081"></a>
<a id="trace-27083"></a>
<a id="trace-27094"></a>
<a id="trace-27096"></a>
<a id="trace-27118"></a>
<a id="trace-27120"></a>
<a id="trace-27132"></a>
<a id="trace-27134"></a>
<a id="trace-27151"></a>
<a id="trace-27153"></a>
<a id="trace-27170"></a>
<a id="trace-27172"></a>
<a id="trace-27245"></a>
<a id="trace-27247"></a>
<a id="trace-27256"></a>
<a id="trace-27258"></a>
<a id="trace-27275"></a>
<a id="trace-27277"></a>
<a id="trace-27285"></a>
<a id="trace-27287"></a>
<a id="trace-27300"></a>
<a id="trace-27302"></a>
<a id="trace-27328"></a>
<a id="trace-27330"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27357"></a>
<a id="trace-27359"></a>
<a id="trace-27372"></a>
<a id="trace-27374"></a>
<a id="trace-27452"></a>
<a id="trace-27454"></a>
<a id="trace-27465"></a>
<a id="trace-27467"></a>
<a id="trace-27495"></a>
<a id="trace-27497"></a>
<a id="trace-27510"></a>
<a id="trace-27512"></a>
<a id="trace-27521"></a>
<a id="trace-27523"></a>
<a id="trace-27536"></a>
<a id="trace-27538"></a>
<a id="trace-27544"></a>
<a id="trace-27546"></a>
<a id="trace-27714"></a>
<a id="trace-27716"></a>
<a id="trace-27733"></a>
<a id="trace-27735"></a>
<a id="trace-27838"></a>
<a id="trace-27840"></a>
<a id="trace-27859"></a>
<a id="trace-27861"></a>
<a id="trace-27877"></a>
<a id="trace-27879"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27907"></a>
<a id="trace-27909"></a>
<a id="trace-27918"></a>
<a id="trace-27920"></a>
<a id="trace-27932"></a>
<a id="trace-27934"></a>
<a id="trace-27942"></a>
<a id="trace-27944"></a>
<a id="trace-28017"></a>
<a id="trace-28019"></a>
<a id="trace-28032"></a>
<a id="trace-28034"></a>
<a id="trace-28060"></a>
<a id="trace-28062"></a>
<a id="trace-28111"></a>
<a id="trace-28113"></a>
<a id="trace-28134"></a>
<a id="trace-28136"></a>
<a id="trace-28157"></a>
<a id="trace-28159"></a>
<a id="trace-28247"></a>
<a id="trace-28249"></a>
<a id="trace-28273"></a>
<a id="trace-28275"></a>
<a id="trace-28292"></a>
<a id="trace-28294"></a>
<a id="trace-28305"></a>
<a id="trace-28307"></a>
<a id="trace-28313"></a>
<a id="trace-28315"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28337"></a>
<a id="trace-28339"></a>
<a id="trace-28429"></a>
<a id="trace-28431"></a>
<a id="trace-28436"></a>
<a id="trace-28438"></a>
<a id="trace-28460"></a>
<a id="trace-28462"></a>
<a id="trace-28502"></a>
<a id="trace-28504"></a>
<a id="trace-28508"></a>
<a id="trace-28510"></a>
<a id="trace-28522"></a>
<a id="trace-28524"></a>
<a id="trace-28530"></a>
<a id="trace-28532"></a>
<a id="trace-28602"></a>
<a id="trace-28604"></a>
<a id="trace-28622"></a>
<a id="trace-28624"></a>
<a id="trace-28640"></a>
<a id="trace-28642"></a>
<a id="trace-28649"></a>
<a id="trace-28651"></a>
<a id="trace-28667"></a>
<a id="trace-28669"></a>
<a id="trace-28691"></a>
<a id="trace-28693"></a>
<a id="trace-28698"></a>
<a id="trace-28700"></a>
<a id="trace-28776"></a>
<a id="trace-28778"></a>
<a id="trace-28799"></a>
<a id="trace-28801"></a>
<a id="trace-28806"></a>
<a id="trace-28808"></a>
<a id="trace-28824"></a>
<a id="trace-28826"></a>
<a id="trace-28838"></a>
<a id="trace-28840"></a>
<a id="trace-28847"></a>
<a id="trace-28849"></a>
<a id="trace-28858"></a>
<a id="trace-28860"></a>
<a id="trace-28870"></a>
<a id="trace-28872"></a>
<a id="trace-28944"></a>
<a id="trace-28946"></a>
<a id="trace-28953"></a>
<a id="trace-28955"></a>
<a id="trace-28971"></a>
<a id="trace-28973"></a>
<a id="trace-28983"></a>
<a id="trace-28985"></a>
<a id="trace-28997"></a>
<a id="trace-28999"></a>
<a id="trace-29019"></a>
<a id="trace-29021"></a>
<a id="trace-29025"></a>
<a id="trace-29027"></a>
<a id="trace-29037"></a>
<a id="trace-29039"></a>
<a id="trace-29118"></a>
<a id="trace-29120"></a>
<a id="trace-29127"></a>
<a id="trace-29129"></a>
<a id="trace-29143"></a>
<a id="trace-29145"></a>
<a id="trace-29151"></a>
<a id="trace-29153"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29176"></a>
<a id="trace-29178"></a>
<a id="trace-29195"></a>
<a id="trace-29197"></a>
<a id="trace-29205"></a>
<a id="trace-29207"></a>
<a id="trace-29218"></a>
<a id="trace-29220"></a>
<a id="trace-29224"></a>
<a id="trace-29226"></a>
<a id="trace-29317"></a>
<a id="trace-29319"></a>
<a id="trace-29327"></a>
<a id="trace-29329"></a>
<a id="trace-29345"></a>
<a id="trace-29347"></a>
<a id="trace-29362"></a>
<a id="trace-29364"></a>
<a id="trace-29382"></a>
<a id="trace-29384"></a>
<a id="trace-29395"></a>
<a id="trace-29397"></a>
<a id="trace-29472"></a>
<a id="trace-29474"></a>
<a id="trace-29491"></a>
<a id="trace-29493"></a>
<a id="trace-29511"></a>
<a id="trace-29513"></a>
<a id="trace-29535"></a>
<a id="trace-29537"></a>
<a id="trace-29704"></a>
<a id="trace-29706"></a>
<a id="trace-29724"></a>
<a id="trace-29726"></a>
<a id="trace-29811"></a>
<a id="trace-29813"></a>
<a id="trace-29868"></a>
<a id="trace-29870"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-29910"></a>
<a id="trace-29912"></a>
<a id="trace-30231"></a>
<a id="trace-30233"></a>
<a id="trace-30241"></a>
<a id="trace-30243"></a>
<a id="trace-30323"></a>
<a id="trace-30325"></a>
<a id="trace-30334"></a>
<a id="trace-30336"></a>
<a id="trace-30357"></a>
<a id="trace-30359"></a>
<a id="trace-30383"></a>
<a id="trace-30385"></a>
<a id="trace-30420"></a>
<a id="trace-30422"></a>
<a id="trace-30534"></a>
<a id="trace-30536"></a>
<a id="trace-30555"></a>
<a id="trace-30557"></a>
<a id="trace-30572"></a>
<a id="trace-30574"></a>
<a id="trace-30598"></a>
<a id="trace-30600"></a>
<a id="trace-30672"></a>
<a id="trace-30674"></a>
<a id="trace-30683"></a>
<a id="trace-30685"></a>
<a id="trace-30698"></a>
<a id="trace-30700"></a>
<a id="trace-30713"></a>
<a id="trace-30715"></a>
<a id="trace-31055"></a>
<a id="trace-31057"></a>
<a id="trace-31094"></a>
<a id="trace-31096"></a>
<a id="trace-31218"></a>
<a id="trace-31220"></a>
<a id="trace-31232"></a>
<a id="trace-31234"></a>
<a id="trace-31255"></a>
<a id="trace-31257"></a>
<a id="trace-31269"></a>
<a id="trace-31271"></a>
<a id="trace-31280"></a>
<a id="trace-31282"></a>
<a id="trace-31295"></a>
<a id="trace-31297"></a>
<a id="trace-31307"></a>
<a id="trace-31309"></a>
<a id="trace-31379"></a>
<a id="trace-31381"></a>
<a id="trace-31388"></a>
<a id="trace-31390"></a>
<a id="trace-31405"></a>
<a id="trace-31407"></a>
<a id="trace-31418"></a>
<a id="trace-31420"></a>
<a id="trace-31432"></a>
<a id="trace-31434"></a>
<a id="trace-31440"></a>
<a id="trace-31442"></a>
<a id="trace-31458"></a>
<a id="trace-31460"></a>
<a id="trace-31471"></a>
<a id="trace-31473"></a>
<a id="trace-31564"></a>
<a id="trace-31566"></a>
<a id="trace-31753"></a>
<a id="trace-31755"></a>
<a id="trace-31783"></a>
<a id="trace-31785"></a>
<a id="trace-31802"></a>
<a id="trace-31804"></a>
<a id="trace-31814"></a>
<a id="trace-31816"></a>
<a id="trace-31829"></a>
<a id="trace-31831"></a>
<a id="trace-31837"></a>
<a id="trace-31839"></a>
<a id="trace-31855"></a>
<a id="trace-31857"></a>
<a id="trace-31869"></a>
<a id="trace-31871"></a>
<a id="trace-31943"></a>
<a id="trace-31945"></a>
<a id="trace-31968"></a>
<a id="trace-31970"></a>
<a id="trace-31980"></a>
<a id="trace-31982"></a>
<a id="trace-31994"></a>
<a id="trace-31996"></a>
<a id="trace-32004"></a>
<a id="trace-32006"></a>
<a id="trace-32043"></a>
<a id="trace-32045"></a>
<a id="trace-32113"></a>
<a id="trace-32115"></a>
<a id="trace-32125"></a>
<a id="trace-32127"></a>
<a id="trace-32142"></a>
<a id="trace-32144"></a>
<a id="trace-32152"></a>
<a id="trace-32154"></a>
<a id="trace-32167"></a>
<a id="trace-32169"></a>
<a id="trace-32178"></a>
<a id="trace-32180"></a>
<a id="trace-32188"></a>
<a id="trace-32190"></a>
<a id="trace-32196"></a>
<a id="trace-32198"></a>
<a id="trace-32208"></a>
<a id="trace-32210"></a>
<a id="trace-32225"></a>
<a id="trace-32227"></a>
<a id="trace-32370"></a>
<a id="trace-32372"></a>
<a id="trace-32382"></a>
<a id="trace-32384"></a>
<a id="trace-32404"></a>
<a id="trace-32406"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32439"></a>
<a id="trace-32441"></a>
<a id="trace-32448"></a>
<a id="trace-32450"></a>
<a id="trace-32463"></a>
<a id="trace-32465"></a>
<a id="trace-32475"></a>
<a id="trace-32477"></a>
<a id="trace-32544"></a>
<a id="trace-32546"></a>
<a id="trace-32550"></a>
<a id="trace-32552"></a>
<a id="trace-32562"></a>
<a id="trace-32564"></a>
<a id="trace-32567"></a>
<a id="trace-32569"></a>
<a id="trace-32583"></a>
<a id="trace-32585"></a>
<a id="trace-32593"></a>
<a id="trace-32595"></a>
<a id="trace-32598"></a>
<a id="trace-32600"></a>
<a id="trace-32607"></a>
<a id="trace-32609"></a>
<a id="trace-32618"></a>
<a id="trace-32620"></a>
<a id="trace-32693"></a>
<a id="trace-32695"></a>
<a id="trace-32710"></a>
<a id="trace-32712"></a>
<a id="trace-32714"></a>
<a id="trace-32716"></a>
<a id="trace-32726"></a>
<a id="trace-32728"></a>
<a id="trace-32737"></a>
<a id="trace-32739"></a>
<a id="trace-32750"></a>
<a id="trace-32752"></a>
<a id="trace-32760"></a>
<a id="trace-32762"></a>
<a id="trace-32772"></a>
<a id="trace-32774"></a>
<a id="trace-32784"></a>
<a id="trace-32786"></a>
<a id="trace-32854"></a>
<a id="trace-32856"></a>
<a id="trace-32864"></a>
<a id="trace-32866"></a>
<a id="trace-32877"></a>
<a id="trace-32879"></a>
<a id="trace-32885"></a>
<a id="trace-32887"></a>
<a id="trace-32911"></a>
<a id="trace-32913"></a>
<a id="trace-32927"></a>
<a id="trace-32929"></a>
<a id="trace-32941"></a>
<a id="trace-32943"></a>
<a id="trace-32955"></a>
<a id="trace-32957"></a>
<a id="trace-33025"></a>
<a id="trace-33027"></a>
<a id="trace-33037"></a>
<a id="trace-33039"></a>
<a id="trace-33058"></a>
<a id="trace-33060"></a>
<a id="trace-33074"></a>
<a id="trace-33076"></a>
<a id="trace-33098"></a>
<a id="trace-33100"></a>
<a id="trace-33110"></a>
<a id="trace-33112"></a>
<a id="trace-33122"></a>
<a id="trace-33124"></a>
<a id="trace-33132"></a>
<a id="trace-33134"></a>
<a id="trace-33208"></a>
<a id="trace-33210"></a>
<a id="trace-33233"></a>
<a id="trace-33235"></a>
<a id="trace-33319"></a>
<a id="trace-33321"></a>
<a id="trace-33333"></a>
<a id="trace-33335"></a>
<a id="trace-33350"></a>
<a id="trace-33352"></a>
<a id="trace-33379"></a>
<a id="trace-33381"></a>
<a id="trace-33387"></a>
<a id="trace-33389"></a>
<a id="trace-33418"></a>
<a id="trace-33420"></a>
<a id="trace-33491"></a>
<a id="trace-33493"></a>
<a id="trace-33511"></a>
<a id="trace-33513"></a>
<a id="trace-33521"></a>
<a id="trace-33523"></a>
<a id="trace-33535"></a>
<a id="trace-33537"></a>
<a id="trace-33565"></a>
<a id="trace-33567"></a>
<a id="trace-33574"></a>
<a id="trace-33576"></a>
<a id="trace-33693"></a>
<a id="trace-33695"></a>
<a id="trace-33769"></a>
<a id="trace-33771"></a>
<a id="trace-33787"></a>
<a id="trace-33789"></a>
<a id="trace-33800"></a>
<a id="trace-33802"></a>
<a id="trace-33826"></a>
<a id="trace-33828"></a>
<a id="trace-33839"></a>
<a id="trace-33841"></a>
<a id="trace-33963"></a>
<a id="trace-33965"></a>
<a id="trace-33973"></a>
<a id="trace-33975"></a>
<a id="trace-33990"></a>
<a id="trace-33992"></a>
<a id="trace-33998"></a>
<a id="trace-34000"></a>
<a id="trace-34012"></a>
<a id="trace-34014"></a>
<a id="trace-34025"></a>
<a id="trace-34027"></a>
<a id="trace-34116"></a>
<a id="trace-34118"></a>
<a id="trace-34125"></a>
<a id="trace-34127"></a>
<a id="trace-34144"></a>
<a id="trace-34146"></a>
<a id="trace-34173"></a>
<a id="trace-34175"></a>
<a id="trace-34195"></a>
<a id="trace-34197"></a>
<a id="trace-34218"></a>
<a id="trace-34220"></a>
<a id="trace-34234"></a>
<a id="trace-34236"></a>
<a id="trace-34247"></a>
<a id="trace-34249"></a>
<a id="trace-34327"></a>
<a id="trace-34329"></a>
<a id="trace-34346"></a>
<a id="trace-34348"></a>
<a id="trace-34354"></a>
<a id="trace-34356"></a>
<a id="trace-34374"></a>
<a id="trace-34376"></a>
<a id="trace-34400"></a>
<a id="trace-34402"></a>
<a id="trace-34414"></a>
<a id="trace-34416"></a>
<a id="trace-34441"></a>
<a id="trace-34443"></a>
<a id="trace-34518"></a>
<a id="trace-34520"></a>
<a id="trace-34531"></a>
<a id="trace-34533"></a>
<a id="trace-34546"></a>
<a id="trace-34548"></a>
<a id="trace-34554"></a>
<a id="trace-34556"></a>
<a id="trace-34570"></a>
<a id="trace-34572"></a>
<a id="trace-34581"></a>
<a id="trace-34583"></a>
<a id="trace-34589"></a>
<a id="trace-34591"></a>
<a id="trace-34604"></a>
<a id="trace-34606"></a>
<a id="trace-34614"></a>
<a id="trace-34616"></a>
<a id="trace-34685"></a>
<a id="trace-34687"></a>
<a id="trace-34694"></a>
<a id="trace-34696"></a>
<a id="trace-34721"></a>
<a id="trace-34723"></a>
<a id="trace-34729"></a>
<a id="trace-34731"></a>
<a id="trace-34744"></a>
<a id="trace-34746"></a>
<a id="trace-34756"></a>
<a id="trace-34758"></a>
<a id="trace-34766"></a>
<a id="trace-34768"></a>
<a id="trace-34773"></a>
<a id="trace-34775"></a>
<a id="trace-34784"></a>
<a id="trace-34786"></a>
<a id="trace-34792"></a>
<a id="trace-34794"></a>
<a id="trace-34861"></a>
<a id="trace-34863"></a>
<a id="trace-34868"></a>
<a id="trace-34870"></a>
<a id="trace-34888"></a>
<a id="trace-34890"></a>
<a id="trace-34894"></a>
<a id="trace-34896"></a>
<a id="trace-34912"></a>
<a id="trace-34914"></a>
<a id="trace-34935"></a>
<a id="trace-34937"></a>
<a id="trace-34954"></a>
<a id="trace-34956"></a>
<a id="trace-34973"></a>
<a id="trace-34975"></a>
<a id="trace-35047"></a>
<a id="trace-35049"></a>
<a id="trace-35062"></a>
<a id="trace-35064"></a>
<a id="trace-35079"></a>
<a id="trace-35081"></a>
<a id="trace-35091"></a>
<a id="trace-35093"></a>
<a id="trace-35102"></a>
<a id="trace-35104"></a>
<a id="trace-35134"></a>
<a id="trace-35136"></a>
<a id="trace-35146"></a>
<a id="trace-35148"></a>
<a id="trace-35233"></a>
<a id="trace-35235"></a>
<a id="trace-35255"></a>
<a id="trace-35257"></a>
<a id="trace-35263"></a>
<a id="trace-35265"></a>
<a id="trace-35274"></a>
<a id="trace-35276"></a>
<a id="trace-35280"></a>
<a id="trace-35282"></a>
<a id="trace-35303"></a>
<a id="trace-35305"></a>
<a id="trace-35373"></a>
<a id="trace-35375"></a>
<a id="trace-35394"></a>
<a id="trace-35396"></a>
<a id="trace-35410"></a>
<a id="trace-35412"></a>
<a id="trace-35428"></a>
<a id="trace-35430"></a>
<a id="trace-35439"></a>
<a id="trace-35441"></a>
<a id="trace-35455"></a>
<a id="trace-35457"></a>
<a id="trace-35463"></a>
<a id="trace-35465"></a>
<a id="trace-35479"></a>
<a id="trace-35481"></a>
<a id="trace-35547"></a>
<a id="trace-35549"></a>
<a id="trace-35558"></a>
<a id="trace-35560"></a>
<a id="trace-35573"></a>
<a id="trace-35575"></a>
<a id="trace-35613"></a>
<a id="trace-35615"></a>
<a id="trace-35625"></a>
<a id="trace-35627"></a>
<a id="trace-35634"></a>
<a id="trace-35636"></a>
<a id="trace-35655"></a>
<a id="trace-35657"></a>
<a id="trace-35725"></a>
<a id="trace-35727"></a>
<a id="trace-35749"></a>
<a id="trace-35751"></a>
<a id="trace-35764"></a>
<a id="trace-35766"></a>
<a id="trace-35787"></a>
<a id="trace-35789"></a>
<a id="trace-35795"></a>
<a id="trace-35797"></a>
<a id="trace-35819"></a>
<a id="trace-35821"></a>
<a id="trace-35827"></a>
<a id="trace-35829"></a>
<a id="trace-35904"></a>
<a id="trace-35906"></a>
<a id="trace-35919"></a>
<a id="trace-35921"></a>
<a id="trace-35924"></a>
<a id="trace-35926"></a>
<a id="trace-35937"></a>
<a id="trace-35939"></a>
<a id="trace-35949"></a>
<a id="trace-35951"></a>
<a id="trace-35960"></a>
<a id="trace-35962"></a>
<a id="trace-35982"></a>
<a id="trace-35984"></a>
<a id="trace-35991"></a>
<a id="trace-35993"></a>
<a id="trace-36095"></a>
<a id="trace-36097"></a>
<a id="trace-36102"></a>
<a id="trace-36104"></a>
<a id="trace-36117"></a>
<a id="trace-36119"></a>
<a id="trace-36124"></a>
<a id="trace-36126"></a>
<a id="trace-36135"></a>
<a id="trace-36137"></a>
<a id="trace-36144"></a>
<a id="trace-36146"></a>
<a id="trace-36156"></a>
<a id="trace-36158"></a>
<a id="trace-36233"></a>
<a id="trace-36235"></a>
<a id="trace-36244"></a>
<a id="trace-36246"></a>
<a id="trace-36258"></a>
<a id="trace-36260"></a>
<a id="trace-36304"></a>
<a id="trace-36306"></a>
<a id="trace-36316"></a>
<a id="trace-36318"></a>
<a id="trace-36322"></a>
<a id="trace-36324"></a>
<a id="trace-36335"></a>
<a id="trace-36337"></a>
<a id="trace-36454"></a>
<a id="trace-36456"></a>
<a id="trace-36524"></a>
<a id="trace-36526"></a>
<a id="trace-36539"></a>
<a id="trace-36541"></a>
<a id="trace-36558"></a>
<a id="trace-36560"></a>
<a id="trace-36564"></a>
<a id="trace-36566"></a>
<a id="trace-36701"></a>
<a id="trace-36703"></a>
<a id="trace-36747"></a>
<a id="trace-36749"></a>
<a id="trace-36773"></a>
<a id="trace-36775"></a>
<a id="trace-36849"></a>
<a id="trace-36851"></a>
<a id="trace-36866"></a>
<a id="trace-36868"></a>
<a id="trace-36881"></a>
<a id="trace-36883"></a>
<a id="trace-36890"></a>
<a id="trace-36892"></a>
<a id="trace-36908"></a>
<a id="trace-36910"></a>
<a id="trace-36916"></a>
<a id="trace-36918"></a>
<a id="trace-36933"></a>
<a id="trace-36935"></a>
<a id="trace-36948"></a>
<a id="trace-36950"></a>
<a id="trace-36965"></a>
<a id="trace-36967"></a>
<a id="trace-36979"></a>
<a id="trace-36981"></a>
<a id="trace-37062"></a>
<a id="trace-37064"></a>
<a id="trace-37073"></a>
<a id="trace-37075"></a>
<a id="trace-37094"></a>
<a id="trace-37096"></a>
<a id="trace-37120"></a>
<a id="trace-37122"></a>
<a id="trace-37131"></a>
<a id="trace-37133"></a>
<a id="trace-37144"></a>
<a id="trace-37146"></a>
<a id="trace-37152"></a>
<a id="trace-37154"></a>
<a id="trace-37165"></a>
<a id="trace-37167"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362514587421897, 'next_transition': 1303}.
<a id="trace-971"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 971): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362420702805958, 'next_transition': 1299}.
<a id="trace-1299"></a>
<a id="trace-1301"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
<a id="trace-1383"></a>
<a id="trace-1385"></a>
<a id="trace-1417"></a>
<a id="trace-1419"></a>
<a id="trace-1448"></a>
<a id="trace-1450"></a>
<a id="trace-1494"></a>
<a id="trace-1496"></a>
<a id="trace-1525"></a>
<a id="trace-1527"></a>
<a id="trace-1552"></a>
<a id="trace-1554"></a>
<a id="trace-1644"></a>
<a id="trace-1646"></a>
<a id="trace-1671"></a>
<a id="trace-1673"></a>
<a id="trace-1693"></a>
<a id="trace-1695"></a>
<a id="trace-1724"></a>
<a id="trace-1726"></a>
<a id="trace-1753"></a>
<a id="trace-1755"></a>
<a id="trace-1774"></a>
<a id="trace-1776"></a>
<a id="trace-1800"></a>
<a id="trace-1802"></a>
<a id="trace-1814"></a>
<a id="trace-1816"></a>
<a id="trace-1843"></a>
<a id="trace-1845"></a>
<a id="trace-1966"></a>
<a id="trace-1968"></a>
<a id="trace-2053"></a>
<a id="trace-2055"></a>
<a id="trace-2087"></a>
<a id="trace-2089"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1299): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9235550809095565, 'next_transition': 1338}.
<a id="trace-1850"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1850): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1573. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.000011597934247, 'next_transition': 2958}.
<a id="trace-2098"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2098): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1979. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06375341657511352, 'next_transition': 2413}.
<a id="trace-2413"></a>
<a id="trace-2415"></a>
<a id="trace-2453"></a>
<a id="trace-2455"></a>
<a id="trace-2485"></a>
<a id="trace-2487"></a>
<a id="trace-2504"></a>
<a id="trace-2506"></a>
<a id="trace-2535"></a>
<a id="trace-2537"></a>
<a id="trace-2569"></a>
<a id="trace-2571"></a>
<a id="trace-2593"></a>
<a id="trace-2595"></a>
<a id="trace-2618"></a>
<a id="trace-2620"></a>
<a id="trace-2709"></a>
<a id="trace-2711"></a>
<a id="trace-2740"></a>
<a id="trace-2742"></a>
<a id="trace-2766"></a>
<a id="trace-2768"></a>
<a id="trace-2794"></a>
<a id="trace-2796"></a>
<a id="trace-2828"></a>
<a id="trace-2830"></a>
<a id="trace-2854"></a>
<a id="trace-2856"></a>
<a id="trace-2884"></a>
<a id="trace-2886"></a>
<a id="trace-2914"></a>
<a id="trace-2916"></a>
<a id="trace-2944"></a>
<a id="trace-2946"></a>
<a id="trace-2971"></a>
<a id="trace-2973"></a>
<a id="trace-3054"></a>
<a id="trace-3056"></a>
<a id="trace-3073"></a>
<a id="trace-3075"></a>
<a id="trace-3096"></a>
<a id="trace-3098"></a>
<a id="trace-3110"></a>
<a id="trace-3112"></a>
<a id="trace-3126"></a>
<a id="trace-3128"></a>
<a id="trace-3138"></a>
<a id="trace-3140"></a>
<a id="trace-3163"></a>
<a id="trace-3165"></a>
<a id="trace-3186"></a>
<a id="trace-3188"></a>
- 16.25s–28.75s (×52), actor 5, squad 0 (trace 2413): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1984. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749462304838557, 'next_transition': 2453}.
<a id="trace-2958"></a>
- 24.60s–24.60s (×1), actor 8, squad 1 (trace 2958): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2637. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 262}.
<a id="trace-262"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (events line 262): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3173"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3173): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3173. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3233}.
<a id="trace-3174"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3174): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3174. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3233}.
<a id="trace-3194"></a>
- 29.00s–29.00s (×1), actor 0, squad 0 (trace 3194): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2983. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13448643983688516, 'next_transition': 3205}.
<a id="trace-3205"></a>
<a id="trace-3207"></a>
<a id="trace-3226"></a>
<a id="trace-3228"></a>
<a id="trace-3476"></a>
<a id="trace-3478"></a>
<a id="trace-3489"></a>
<a id="trace-3491"></a>
<a id="trace-3505"></a>
<a id="trace-3507"></a>
<a id="trace-3522"></a>
<a id="trace-3524"></a>
- 29.25s–31.75s (×12), actor 5, squad 0 (trace 3205): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 28.55s, trace 3174. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3226}.
<a id="trace-3233"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3233): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2991. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4250}.
<a id="trace-3236"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3236): MoveTactically. Knowledge: actor memory at 25.00s, trace 2991. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4250}.
<a id="trace-3237"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3237): traveling overwatch. Knowledge: actor memory at 25.00s, trace 2991. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4250}.
<a id="trace-3238"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3238): Reorganise complete. Knowledge: actor memory at 25.00s, trace 2991. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4250}.
<a id="trace-285"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (events line 285): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3555}.
<a id="trace-3540"></a>
<a id="trace-3542"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 3540): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3393. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3555}.
<a id="trace-3547"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 3547): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 3547. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3555}.
<a id="trace-3548"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 3548): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 3548. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3555}.
<a id="trace-3555"></a>
<a id="trace-3557"></a>
<a id="trace-3573"></a>
<a id="trace-3575"></a>
<a id="trace-3588"></a>
<a id="trace-3590"></a>
<a id="trace-3609"></a>
<a id="trace-3611"></a>
- 32.75s–34.25s (×8), actor 5, squad 0 (trace 3555): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 3548. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3573}.
<a id="trace-3616"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3616): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3388. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4000}.
<a id="trace-3623"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3623): MoveTactically. Knowledge: actor memory at 30.00s, trace 3388. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4000}.
<a id="trace-3624"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3624): traveling overwatch. Knowledge: actor memory at 30.00s, trace 3388. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4000}.
<a id="trace-3625"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3625): Reorganise complete. Knowledge: actor memory at 30.00s, trace 3388. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4000}.
<a id="trace-4000"></a>
<a id="trace-4002"></a>
<a id="trace-4093"></a>
<a id="trace-4095"></a>
<a id="trace-4122"></a>
<a id="trace-4124"></a>
<a id="trace-4149"></a>
<a id="trace-4151"></a>
<a id="trace-4182"></a>
<a id="trace-4184"></a>
<a id="trace-4222"></a>
<a id="trace-4224"></a>
<a id="trace-4241"></a>
<a id="trace-4243"></a>
<a id="trace-4586"></a>
<a id="trace-4588"></a>
<a id="trace-5351"></a>
<a id="trace-5353"></a>
<a id="trace-5383"></a>
<a id="trace-5385"></a>
<a id="trace-5431"></a>
<a id="trace-5433"></a>
<a id="trace-5522"></a>
<a id="trace-5524"></a>
<a id="trace-5566"></a>
<a id="trace-5568"></a>
<a id="trace-5592"></a>
<a id="trace-5594"></a>
<a id="trace-5635"></a>
<a id="trace-5637"></a>
- 34.75s–41.75s (×30), actor 5, squad 0 (trace 4000): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 3548. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13781119401308634, 'next_transition': 4093}.
<a id="trace-4250"></a>
- 37.80s–37.80s (×1), actor 8, squad 1 (trace 4250): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 4021. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03300003068180428, 'next_transition': 4328}.
<a id="trace-4328"></a>
- 38.20s–38.20s (×1), actor 8, squad 1 (trace 4328): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4021. Next observer evidence: None.
<a id="trace-4329"></a>
- 38.20s–38.20s (×1), actor 8, squad 1 (trace 4329): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4021. Next observer evidence: None.
<a id="trace-4330"></a>
<a id="trace-4593"></a>
<a id="trace-4844"></a>
<a id="trace-5093"></a>
- 38.20s–38.45s (×4), actor 8, squad 1 (trace 4330): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4021. Next observer evidence: None.
<a id="trace-5643"></a>
- 41.80s–41.80s (×1), actor 8, squad 1 (trace 5643): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5453. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.590290142895848, 'next_transition': 426}.
<a id="trace-425"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 425): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-426"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 426): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5661"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 5661): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762341 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5661. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22125500816574656, 'next_transition': 5928}.
<a id="trace-5662"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 5662): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762341 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5662. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22125500816574656, 'next_transition': 5928}.
<a id="trace-5663"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 5663): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762341 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5663. Next observer evidence: {'until': 45.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39604528120057847, 'next_transition': 7729}.
<a id="trace-5664"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 5664): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762341 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5664. Next observer evidence: {'until': 45.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39604528120057847, 'next_transition': 7729}.
<a id="trace-5665"></a>
- 42.10s–42.10s (×1), actor 8, squad 1 (trace 5665): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 5453. Next observer evidence: {'until': 45.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39604528120057847, 'next_transition': 7729}.
<a id="trace-5928"></a>
<a id="trace-5930"></a>
<a id="trace-5947"></a>
<a id="trace-5949"></a>
<a id="trace-5983"></a>
<a id="trace-5985"></a>
- 42.25s–43.25s (×6), actor 5, squad 0 (trace 5928): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5664. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3480258222088687, 'next_transition': 5947}.
<a id="trace-6018"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 6018): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 5445. Next observer evidence: None.
<a id="trace-6019"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 6019): bounding overwatch. Knowledge: actor memory at 40.00s, trace 5445. Next observer evidence: None.
<a id="trace-6020"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 6020): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 5445. Next observer evidence: None.
<a id="trace-6516"></a>
<a id="trace-6518"></a>
- 43.75s–43.75s (×2), actor 5, squad 0 (trace 6516): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5664. Next observer evidence: {'until': 43.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06358290102004624, 'next_transition': 6526}.
<a id="trace-6526"></a>
- 43.85s–43.85s (×1), actor 0, squad 0 (trace 6526): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 5445. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.127895680624203, 'next_transition': 7035}.
<a id="trace-7035"></a>
<a id="trace-7037"></a>
<a id="trace-7093"></a>
<a id="trace-7095"></a>
<a id="trace-7219"></a>
<a id="trace-7221"></a>
- 44.25s–45.25s (×6), actor 5, squad 0 (trace 7035): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5664. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15888686125605944, 'next_transition': 7093}.
<a id="trace-7229"></a>
- 45.35s–45.35s (×1), actor 0, squad 0 (trace 7229): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 7117. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6668666782110317, 'next_transition': 7755}.
<a id="trace-7729"></a>
- 45.45s–45.45s (×1), actor 8, squad 1 (trace 7729): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7125. Next observer evidence: None.
<a id="trace-7734"></a>
- 45.50s–45.50s (×1), actor 8, squad 1 (trace 7734): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 7125. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.05952499999999983, 'next_transition': 606}.
<a id="trace-7755"></a>
<a id="trace-7757"></a>
<a id="trace-7817"></a>
<a id="trace-7819"></a>
<a id="trace-7898"></a>
<a id="trace-7900"></a>
<a id="trace-7945"></a>
<a id="trace-7947"></a>
<a id="trace-7979"></a>
<a id="trace-7981"></a>
<a id="trace-8024"></a>
<a id="trace-8026"></a>
<a id="trace-8042"></a>
<a id="trace-8044"></a>
- 45.75s–48.75s (×14), actor 5, squad 0 (trace 7755): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7122. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6028195765952434, 'next_transition': 7817}.
<a id="trace-8054"></a>
- 49.15s–49.15s (×1), actor 0, squad 0 (trace 8054): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7117. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0625, 'next_transition': 11745}.
<a id="trace-8056"></a>
- 49.15s–49.15s (×1), actor 0, squad 0 (trace 8056): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 7117. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0625, 'next_transition': 11745}.
<a id="trace-11579"></a>
- 49.15s–49.15s (×1), actor 0, squad 0 (trace 11579): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 7117. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0625, 'next_transition': 11745}.
<a id="trace-11580"></a>
- 49.15s–49.15s (×1), actor 0, squad 0 (trace 11580): MoveTactically. Knowledge: actor memory at 45.00s, trace 7117. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0625, 'next_transition': 11745}.
<a id="trace-11581"></a>
- 49.15s–49.15s (×1), actor 0, squad 0 (trace 11581): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 7117. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0625, 'next_transition': 11745}.
<a id="trace-11745"></a>
<a id="trace-11747"></a>
<a id="trace-11762"></a>
<a id="trace-11764"></a>
<a id="trace-11867"></a>
<a id="trace-11869"></a>
<a id="trace-11921"></a>
<a id="trace-11923"></a>
<a id="trace-11966"></a>
<a id="trace-11968"></a>
- 49.25s–51.25s (×10), actor 5, squad 0 (trace 11745): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7122. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12817500000000015, 'next_transition': 11762}.
<a id="trace-606"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (events line 606): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11754"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (trace 11754): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.738858 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 11754. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11891}.
<a id="trace-11755"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (trace 11755): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.738858 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 11755. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11891}.
<a id="trace-11891"></a>
- 50.35s–50.35s (×1), actor 9, squad 1 (trace 11891): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 11794. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13599}.
<a id="trace-11976"></a>
- 51.25s–51.25s (×1), actor 0, squad 0 (trace 11976): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 11786. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3788856450298644, 'next_transition': 12499}.
<a id="trace-11977"></a>
- 51.25s–51.25s (×1), actor 0, squad 0 (trace 11977): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 11786. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3788856450298644, 'next_transition': 12499}.
<a id="trace-12499"></a>
- 51.55s–51.55s (×1), actor 0, squad 0 (trace 12499): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 11786. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37887327062380916, 'next_transition': 13029}.
<a id="trace-13029"></a>
<a id="trace-13031"></a>
<a id="trace-13121"></a>
<a id="trace-13123"></a>
<a id="trace-13210"></a>
<a id="trace-13212"></a>
<a id="trace-13263"></a>
<a id="trace-13265"></a>
<a id="trace-13306"></a>
<a id="trace-13308"></a>
<a id="trace-13398"></a>
<a id="trace-13400"></a>
<a id="trace-13421"></a>
<a id="trace-13423"></a>
<a id="trace-13512"></a>
<a id="trace-13514"></a>
- 51.75s–55.25s (×16), actor 5, squad 0 (trace 13029): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11791. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1366563910573544, 'next_transition': 13121}.
<a id="trace-13521"></a>
- 55.35s–55.35s (×1), actor 0, squad 0 (trace 13521): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 13433. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30827441725047533, 'next_transition': 13531}.
<a id="trace-13531"></a>
<a id="trace-13533"></a>
<a id="trace-13561"></a>
<a id="trace-13563"></a>
<a id="trace-13586"></a>
<a id="trace-13588"></a>
<a id="trace-13615"></a>
<a id="trace-13617"></a>
<a id="trace-13644"></a>
<a id="trace-13646"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13730"></a>
<a id="trace-13732"></a>
- 55.75s–58.75s (×14), actor 5, squad 0 (trace 13531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 13438. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47221767561164085, 'next_transition': 13561}.
<a id="trace-13599"></a>
- 57.10s–57.10s (×1), actor 9, squad 1 (trace 13599): NeedSupport. Knowledge: actor memory at 55.00s, trace 13441. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.5519799999999986, 'next_transition': None}.
<a id="trace-13762"></a>
- 59.15s–59.15s (×1), actor 0, squad 0 (trace 13762): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 13433. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787525, 'next_transition': 16508}.
<a id="trace-13763"></a>
- 59.15s–59.15s (×1), actor 0, squad 0 (trace 13763): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 13433. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787525, 'next_transition': 16508}.
<a id="trace-16508"></a>
<a id="trace-16510"></a>
<a id="trace-16529"></a>
<a id="trace-16531"></a>
<a id="trace-16621"></a>
<a id="trace-16623"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16673"></a>
<a id="trace-16675"></a>
<a id="trace-16696"></a>
<a id="trace-16698"></a>
- 59.25s–61.75s (×12), actor 5, squad 0 (trace 16508): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 13438. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749999999999997, 'next_transition': 16529}.
<a id="trace-1063"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 1063): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16710"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 16710): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.666203 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 16710. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07925547586483966, 'next_transition': 16726}.
<a id="trace-16711"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 16711): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.666203 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 16711. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07925547586483966, 'next_transition': 16726}.
<a id="trace-16726"></a>
<a id="trace-16728"></a>
<a id="trace-16765"></a>
<a id="trace-16767"></a>
<a id="trace-16786"></a>
<a id="trace-16788"></a>
<a id="trace-16819"></a>
<a id="trace-16821"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16896"></a>
<a id="trace-16898"></a>
<a id="trace-17000"></a>
<a id="trace-17002"></a>
<a id="trace-17026"></a>
<a id="trace-17028"></a>
<a id="trace-17051"></a>
<a id="trace-17053"></a>
- 62.25s–66.25s (×18), actor 5, squad 0 (trace 16726): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 16711. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4079429307690447, 'next_transition': 16765}.
<a id="trace-17072"></a>
- 66.60s–66.60s (×1), actor 0, squad 0 (trace 17072): NeedSupport. Knowledge: actor memory at 65.00s, trace 16922. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17086}.
<a id="trace-17086"></a>
<a id="trace-17088"></a>
- 66.75s–66.75s (×2), actor 5, squad 0 (trace 17086): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16927. Next observer evidence: {'until': 67, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039913520593892145, 'next_transition': 17122}.
<a id="trace-17122"></a>
- 67.10s–67.10s (×1), actor 0, squad 0 (trace 17122): support established: element delivered fire on threat area. Knowledge: actor memory at 65.00s, trace 16922. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028598501936010892, 'next_transition': 17140}.
<a id="trace-17123"></a>
- 67.10s–67.10s (×1), actor 0, squad 0 (trace 17123): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 65.00s, trace 16922. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028598501936010892, 'next_transition': 17140}.
<a id="trace-17124"></a>
- 67.10s–67.10s (×1), actor 0, squad 0 (trace 17124): Fixing. Knowledge: actor memory at 65.00s, trace 16922. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028598501936010892, 'next_transition': 17140}.
<a id="trace-17140"></a>
<a id="trace-17142"></a>
- 67.25s–67.25s (×2), actor 5, squad 0 (trace 17140): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16927. Next observer evidence: None.
<a id="trace-17152"></a>
- 67.35s–67.35s (×1), actor 0, squad 0 (trace 17152): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 16922. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07126901903700836, 'next_transition': 19948}.
<a id="trace-17153"></a>
- 67.35s–67.35s (×1), actor 0, squad 0 (trace 17153): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 65.00s, trace 16922. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07126901903700836, 'next_transition': 19948}.
<a id="trace-19948"></a>
<a id="trace-19950"></a>
<a id="trace-19973"></a>
<a id="trace-19975"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20081"></a>
<a id="trace-20083"></a>
- 67.75s–69.25s (×8), actor 5, squad 0 (trace 19948): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16927. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08691497164075068, 'next_transition': 19973}.
<a id="trace-20099"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (trace 20099): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.503480 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 20099. Next observer evidence: None.
<a id="trace-20100"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (trace 20100): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.503480 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 20100. Next observer evidence: None.
<a id="trace-1251"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (events line 1251): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05555787710686845, 'next_transition': 20131}.
<a id="trace-20131"></a>
<a id="trace-20133"></a>
<a id="trace-20230"></a>
<a id="trace-20271"></a>
<a id="trace-20312"></a>
<a id="trace-20350"></a>
<a id="trace-20381"></a>
<a id="trace-20394"></a>
- 69.75s–72.75s (×8), actor 5, squad 0 (trace 20131): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 69.35s, trace 20100. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24339279097387712, 'next_transition': 20230}.
<a id="trace-20417"></a>
- 73.20s–73.20s (×1), actor 5, squad 0 (trace 20417): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 73.20s, trace 20417. Next observer evidence: None.
<a id="trace-20426"></a>
<a id="trace-20456"></a>
<a id="trace-20480"></a>
<a id="trace-20517"></a>
<a id="trace-20613"></a>
<a id="trace-20625"></a>
<a id="trace-20649"></a>
<a id="trace-20679"></a>
<a id="trace-20699"></a>
<a id="trace-20713"></a>
<a id="trace-20747"></a>
<a id="trace-20778"></a>
<a id="trace-20818"></a>
<a id="trace-20840"></a>
<a id="trace-20936"></a>
<a id="trace-20964"></a>
<a id="trace-20995"></a>
<a id="trace-21009"></a>
<a id="trace-21033"></a>
<a id="trace-21042"></a>
<a id="trace-21063"></a>
<a id="trace-21089"></a>
<a id="trace-21099"></a>
<a id="trace-21119"></a>
<a id="trace-21204"></a>
- 73.25s–85.25s (×25), actor 5, squad 0 (trace 20426): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 73.20s, trace 20417. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14270125, 'next_transition': 20456}.
<a id="trace-21210"></a>
- 85.35s–85.35s (×1), actor 0, squad 0 (trace 21210): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 21137. Next observer evidence: {'until': 85.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.04737220290225585, 'next_transition': 21221}.
<a id="trace-21211"></a>
- 85.35s–85.35s (×1), actor 0, squad 0 (trace 21211): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 85.00s, trace 21137. Next observer evidence: {'until': 85.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.04737220290225585, 'next_transition': 21221}.
<a id="trace-21221"></a>
- 85.65s–85.65s (×1), actor 0, squad 0 (trace 21221): MoveTactically. Knowledge: actor memory at 85.00s, trace 21137. Next observer evidence: None.
<a id="trace-21222"></a>
- 85.65s–85.65s (×1), actor 0, squad 0 (trace 21222): received platoon directive. Knowledge: actor memory at 85.00s, trace 21137. Next observer evidence: None.
<a id="trace-21721"></a>
<a id="trace-21737"></a>
<a id="trace-21774"></a>
<a id="trace-21841"></a>
<a id="trace-21894"></a>
<a id="trace-21954"></a>
<a id="trace-22021"></a>
<a id="trace-22126"></a>
<a id="trace-22215"></a>
<a id="trace-22334"></a>
<a id="trace-22382"></a>
<a id="trace-22456"></a>
<a id="trace-22510"></a>
<a id="trace-22558"></a>
- 85.75s–92.25s (×14), actor 5, squad 0 (trace 21721): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 21142. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21685114827330626, 'next_transition': 21737}.
<a id="trace-22588"></a>
- 92.55s–92.55s (×1), actor 0, squad 0 (trace 22588): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 22244. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00010000000000021103, 'next_transition': 22763}.
<a id="trace-22763"></a>
<a id="trace-22806"></a>
<a id="trace-22842"></a>
<a id="trace-22884"></a>
<a id="trace-22904"></a>
<a id="trace-22988"></a>
<a id="trace-23033"></a>
<a id="trace-23052"></a>
<a id="trace-23080"></a>
<a id="trace-23100"></a>
<a id="trace-23131"></a>
<a id="trace-23159"></a>
<a id="trace-23178"></a>
<a id="trace-23200"></a>
<a id="trace-23297"></a>
<a id="trace-23331"></a>
<a id="trace-23372"></a>
<a id="trace-23415"></a>
<a id="trace-23479"></a>
<a id="trace-23540"></a>
<a id="trace-23600"></a>
<a id="trace-23650"></a>
<a id="trace-23721"></a>
<a id="trace-23762"></a>
<a id="trace-23872"></a>
<a id="trace-23935"></a>
<a id="trace-23966"></a>
<a id="trace-24012"></a>
<a id="trace-24050"></a>
<a id="trace-24073"></a>
- 92.75s–107.75s (×30), actor 5, squad 0 (trace 22763): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 22249. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08482499999999993, 'next_transition': 22806}.
<a id="trace-24082"></a>
- 108.10s–108.10s (×1), actor 0, squad 0 (trace 24082): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 105.00s, trace 23784. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12141958678181555, 'next_transition': 24450}.
<a id="trace-24450"></a>
<a id="trace-24466"></a>
<a id="trace-24496"></a>
<a id="trace-24516"></a>
<a id="trace-24595"></a>
<a id="trace-24625"></a>
<a id="trace-24642"></a>
<a id="trace-24659"></a>
<a id="trace-24691"></a>
<a id="trace-24706"></a>
<a id="trace-24728"></a>
<a id="trace-24740"></a>
<a id="trace-24758"></a>
<a id="trace-24778"></a>
<a id="trace-24852"></a>
<a id="trace-24874"></a>
<a id="trace-24894"></a>
<a id="trace-24911"></a>
<a id="trace-24935"></a>
<a id="trace-24954"></a>
- 108.25s–117.75s (×20), actor 5, squad 0 (trace 24450): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 23789. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09405998564455807, 'next_transition': 24466}.
<a id="trace-2100"></a>
- 118.20s–118.20s (×1), actor 5, squad 0 (events line 2100): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24964"></a>
- 118.20s–118.20s (×1), actor 5, squad 0 (trace 24964): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.436026 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 118.20s, trace 24964. Next observer evidence: None.
<a id="trace-24965"></a>
- 118.20s–118.20s (×1), actor 5, squad 0 (trace 24965): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.436026 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 118.20s, trace 24965. Next observer evidence: None.
<a id="trace-24971"></a>
<a id="trace-24990"></a>
<a id="trace-25018"></a>
<a id="trace-25052"></a>
- 118.25s–119.75s (×4), actor 5, squad 0 (trace 24971): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 118.20s, trace 24965. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33292938469041417, 'next_transition': 24990}.
<a id="trace-25133"></a>
- 120.20s–120.20s (×1), actor 0, squad 0 (trace 25133): Withdraw to received rally. Knowledge: actor memory at 120.00s, trace 25066. Next observer evidence: None.
<a id="trace-25134"></a>
- 120.20s–120.20s (×1), actor 0, squad 0 (trace 25134): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 25066. Next observer evidence: None.
<a id="trace-25659"></a>
<a id="trace-25677"></a>
<a id="trace-25696"></a>
<a id="trace-25710"></a>
<a id="trace-25724"></a>
<a id="trace-25736"></a>
<a id="trace-25754"></a>
- 120.25s–123.25s (×7), actor 5, squad 0 (trace 25659): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 25071. Next observer evidence: {'until': 120.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.19102568199127093, 'next_transition': 25677}.
<a id="trace-25763"></a>
- 123.60s–123.60s (×1), actor 1, squad 0 (trace 25763): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 120.00s, trace 25067. Next observer evidence: None.
<a id="trace-25770"></a>
- 123.75s–123.75s (×1), actor 5, squad 0 (trace 25770): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 25071. Next observer evidence: {'until': 124, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25782}.
<a id="trace-25782"></a>
- 124.05s–124.05s (×1), actor 1, squad 0 (trace 25782): Reorganise: completed/failed drill. Knowledge: actor memory at 120.00s, trace 25067. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26284}.
<a id="trace-25787"></a>
- 124.05s–124.05s (×1), actor 1, squad 0 (trace 25787): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 25067. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26284}.
<a id="trace-25788"></a>
- 124.05s–124.05s (×1), actor 1, squad 0 (trace 25788): Reorganise complete: known contact. Knowledge: actor memory at 120.00s, trace 25067. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26284}.
<a id="trace-26284"></a>
<a id="trace-26300"></a>
<a id="trace-26390"></a>
<a id="trace-26410"></a>
<a id="trace-26421"></a>
<a id="trace-26433"></a>
<a id="trace-26459"></a>
<a id="trace-26468"></a>
- 124.25s–127.75s (×8), actor 5, squad 0 (trace 26284): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 25071. Next observer evidence: {'until': 124.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26300}.
<a id="trace-26477"></a>
- 128.25s–128.25s (×1), actor 1, squad 0 (trace 26477): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 125.00s, trace 26312. Next observer evidence: None.
<a id="trace-26478"></a>
- 128.25s–128.25s (×1), actor 1, squad 0 (trace 26478): rearward bound: one stationary suppressing element. Knowledge: actor memory at 125.00s, trace 26312. Next observer evidence: None.
<a id="trace-26892"></a>
<a id="trace-26900"></a>
<a id="trace-26919"></a>
<a id="trace-26940"></a>
<a id="trace-27013"></a>
<a id="trace-27023"></a>
<a id="trace-27051"></a>
<a id="trace-27061"></a>
<a id="trace-27079"></a>
<a id="trace-27092"></a>
<a id="trace-27116"></a>
<a id="trace-27130"></a>
<a id="trace-27149"></a>
<a id="trace-27168"></a>
<a id="trace-27243"></a>
<a id="trace-27254"></a>
<a id="trace-27273"></a>
<a id="trace-27283"></a>
<a id="trace-27298"></a>
<a id="trace-27311"></a>
<a id="trace-27326"></a>
<a id="trace-27337"></a>
<a id="trace-27355"></a>
<a id="trace-27370"></a>
<a id="trace-27450"></a>
<a id="trace-27463"></a>
<a id="trace-27483"></a>
<a id="trace-27493"></a>
- 128.30s–141.80s (×28), actor 5, squad 0 (trace 26892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 26316. Next observer evidence: {'until': 128.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26900}.
<a id="trace-27549"></a>
- 143.90s–143.90s (×1), actor 1, squad 0 (trace 27549): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 27378. Next observer evidence: {'until': 145, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18900027099451464, 'next_transition': 2385}.
<a id="trace-27550"></a>
- 143.90s–143.90s (×1), actor 1, squad 0 (trace 27550): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 27378. Next observer evidence: {'until': 145, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18900027099451464, 'next_transition': 2385}.
<a id="trace-2385"></a>
- 145.05s–145.05s (×1), actor 6, squad 0 (events line 2385): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40416166673612147, 'next_transition': 27817}.
<a id="trace-27760"></a>
- 145.05s–145.05s (×1), actor 6, squad 0 (trace 27760): renew committed intent (75 s lifetime). Knowledge: actor memory at 145.05s, trace 27760. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40416166673612147, 'next_transition': 27817}.
<a id="trace-27817"></a>
<a id="trace-27834"></a>
<a id="trace-27873"></a>
<a id="trace-27903"></a>
<a id="trace-27928"></a>
<a id="trace-28013"></a>
<a id="trace-28043"></a>
- 145.30s–151.30s (×7), actor 6, squad 0 (trace 27817): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 145.05s, trace 27760. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8900033794378337, 'next_transition': 27834}.
<a id="trace-28048"></a>
- 151.40s–151.40s (×1), actor 1, squad 0 (trace 28048): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 150.00s, trace 27946. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1970064416307977, 'next_transition': 28118}.
<a id="trace-28118"></a>
<a id="trace-28153"></a>
<a id="trace-28243"></a>
<a id="trace-28269"></a>
<a id="trace-28301"></a>
<a id="trace-28323"></a>
<a id="trace-28344"></a>
<a id="trace-28425"></a>
<a id="trace-28446"></a>
<a id="trace-28467"></a>
<a id="trace-28498"></a>
<a id="trace-28598"></a>
<a id="trace-28618"></a>
<a id="trace-28636"></a>
<a id="trace-28663"></a>
<a id="trace-28687"></a>
<a id="trace-28772"></a>
<a id="trace-28795"></a>
<a id="trace-28815"></a>
<a id="trace-28834"></a>
<a id="trace-28854"></a>
<a id="trace-28967"></a>
<a id="trace-28993"></a>
<a id="trace-29015"></a>
<a id="trace-29033"></a>
<a id="trace-29114"></a>
<a id="trace-29139"></a>
<a id="trace-29160"></a>
<a id="trace-29191"></a>
<a id="trace-29214"></a>
<a id="trace-29295"></a>
<a id="trace-29313"></a>
<a id="trace-29335"></a>
<a id="trace-29358"></a>
<a id="trace-29378"></a>
<a id="trace-29468"></a>
<a id="trace-29487"></a>
<a id="trace-29507"></a>
<a id="trace-29531"></a>
- 153.30s–193.30s (×39), actor 6, squad 0 (trace 28118): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 150.00s, trace 27950. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.520005433793549, 'next_transition': 28153}.
<a id="trace-29539"></a>
- 193.65s–193.65s (×1), actor 1, squad 0 (trace 29539): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 190.00s, trace 29401. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29700}.
<a id="trace-29540"></a>
- 193.65s–193.65s (×1), actor 1, squad 0 (trace 29540): MoveTactically. Knowledge: actor memory at 190.00s, trace 29401. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29700}.
<a id="trace-29541"></a>
- 193.65s–193.65s (×1), actor 1, squad 0 (trace 29541): . Knowledge: actor memory at 190.00s, trace 29401. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29700}.
<a id="trace-29700"></a>
<a id="trace-29798"></a>
<a id="trace-29831"></a>
<a id="trace-29864"></a>
<a id="trace-29892"></a>
- 194.30s–198.30s (×5), actor 6, squad 0 (trace 29700): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 190.00s, trace 29405. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.78749390339476, 'next_transition': 29798}.
<a id="trace-29917"></a>
- 199.05s–199.05s (×1), actor 1, squad 0 (trace 29917): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 195.00s, trace 29735. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30227}.
<a id="trace-30227"></a>
<a id="trace-30319"></a>
<a id="trace-30346"></a>
<a id="trace-30379"></a>
<a id="trace-30406"></a>
<a id="trace-30435"></a>
<a id="trace-30520"></a>
<a id="trace-30551"></a>
- 199.30s–206.30s (×8), actor 6, squad 0 (trace 30227): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 195.00s, trace 29739. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.031499894602998235, 'next_transition': 30319}.
<a id="trace-2941"></a>
- 206.90s–206.90s (×1), actor 6, squad 0 (events line 2941): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30575"></a>
- 206.90s–206.90s (×1), actor 6, squad 0 (trace 30575): renew committed intent (75 s lifetime). Knowledge: actor memory at 206.90s, trace 30575. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499999999999995, 'next_transition': 30584}.
<a id="trace-30584"></a>
- 207.30s–207.30s (×1), actor 6, squad 0 (trace 30584): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 206.90s, trace 30575. Next observer evidence: {'until': 208, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08062500000000039, 'next_transition': 30607}.
<a id="trace-30607"></a>
- 208.05s–208.05s (×1), actor 1, squad 0 (trace 30607): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 30455. Next observer evidence: {'until': 208.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30668}.
<a id="trace-30668"></a>
<a id="trace-30694"></a>
- 208.30s–209.30s (×2), actor 6, squad 0 (trace 30668): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 206.90s, trace 30575. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5355041897606592, 'next_transition': 30694}.
<a id="trace-30716"></a>
- 209.80s–209.80s (×1), actor 1, squad 0 (trace 30716): Withdraw to received rally. Knowledge: actor memory at 205.00s, trace 30455. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6642537792402058, 'next_transition': 31051}.
<a id="trace-30717"></a>
- 209.80s–209.80s (×1), actor 1, squad 0 (trace 30717): rearward bound: one stationary suppressing element. Knowledge: actor memory at 205.00s, trace 30455. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6642537792402058, 'next_transition': 31051}.
<a id="trace-31051"></a>
<a id="trace-31090"></a>
- 210.30s–211.30s (×2), actor 6, squad 0 (trace 31051): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 210.00s, trace 30990. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31090}.
<a id="trace-31099"></a>
- 211.35s–211.35s (×1), actor 1, squad 0 (trace 31099): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 210.00s, trace 30988. Next observer evidence: {'until': 211.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3021152283667799, 'next_transition': 31110}.
<a id="trace-31100"></a>
- 211.35s–211.35s (×1), actor 1, squad 0 (trace 31100): NeedSupport. Knowledge: actor memory at 210.00s, trace 30988. Next observer evidence: {'until': 211.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3021152283667799, 'next_transition': 31110}.
<a id="trace-31110"></a>
- 211.65s–211.65s (×1), actor 1, squad 0 (trace 31110): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 30988. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360520406577737, 'next_transition': 31228}.
<a id="trace-31113"></a>
- 211.65s–211.65s (×1), actor 1, squad 0 (trace 31113): ReactToContact: cover and return fire. Knowledge: actor memory at 210.00s, trace 30988. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360520406577737, 'next_transition': 31228}.
<a id="trace-31114"></a>
- 211.65s–211.65s (×1), actor 1, squad 0 (trace 31114): Reorganise complete: known contact. Knowledge: actor memory at 210.00s, trace 30988. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360520406577737, 'next_transition': 31228}.
<a id="trace-31228"></a>
<a id="trace-31265"></a>
<a id="trace-31291"></a>
- 212.30s–214.30s (×3), actor 6, squad 0 (trace 31228): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 210.00s, trace 30990. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.224288962413949, 'next_transition': 31265}.
<a id="trace-31371"></a>
- 215.25s–215.25s (×1), actor 1, squad 0 (trace 31371): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 215.00s, trace 31312. Next observer evidence: None.
<a id="trace-31375"></a>
<a id="trace-31401"></a>
<a id="trace-31428"></a>
- 215.30s–217.30s (×3), actor 6, squad 0 (trace 31375): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 215.00s, trace 31314. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1000063650639738, 'next_transition': 31401}.
<a id="trace-3055"></a>
- 218.15s–218.15s (×1), actor 6, squad 0 (events line 3055): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31449"></a>
- 218.15s–218.15s (×1), actor 6, squad 0 (trace 31449): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258205 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 218.15s, trace 31449. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199995961348459, 'next_transition': 31454}.
<a id="trace-31450"></a>
- 218.15s–218.15s (×1), actor 6, squad 0 (trace 31450): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258205 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 218.15s, trace 31450. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199995961348459, 'next_transition': 31454}.
<a id="trace-31454"></a>
<a id="trace-31482"></a>
<a id="trace-31560"></a>
- 218.30s–220.30s (×3), actor 6, squad 0 (trace 31454): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 218.15s, trace 31450. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0572031419418007, 'next_transition': 31482}.
<a id="trace-31573"></a>
- 220.65s–220.65s (×1), actor 1, squad 0 (trace 31573): Withdraw to received rally. Knowledge: actor memory at 220.00s, trace 31497. Next observer evidence: {'until': 221.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5250036315641584, 'next_transition': 31766}.
<a id="trace-31574"></a>
- 220.65s–220.65s (×1), actor 1, squad 0 (trace 31574): rearward bound: one stationary suppressing element. Knowledge: actor memory at 220.00s, trace 31497. Next observer evidence: {'until': 221.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5250036315641584, 'next_transition': 31766}.
<a id="trace-31766"></a>
<a id="trace-31798"></a>
<a id="trace-31825"></a>
<a id="trace-31851"></a>
<a id="trace-31939"></a>
<a id="trace-31964"></a>
<a id="trace-31990"></a>
<a id="trace-32012"></a>
<a id="trace-32029"></a>
<a id="trace-32109"></a>
<a id="trace-32138"></a>
<a id="trace-32184"></a>
<a id="trace-32204"></a>
<a id="trace-32291"></a>
- 221.30s–235.30s (×14), actor 6, squad 0 (trace 31766): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 220.00s, trace 31499. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9884823236819218, 'next_transition': 31798}.
<a id="trace-32310"></a>
- 236.25s–236.25s (×1), actor 1, squad 0 (trace 32310): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 235.00s, trace 32229. Next observer evidence: None.
<a id="trace-32311"></a>
- 236.25s–236.25s (×1), actor 1, squad 0 (trace 32311): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 235.00s, trace 32229. Next observer evidence: None.
<a id="trace-32366"></a>
<a id="trace-32400"></a>
<a id="trace-32435"></a>
<a id="trace-32459"></a>
<a id="trace-32540"></a>
<a id="trace-32558"></a>
<a id="trace-32574"></a>
<a id="trace-32589"></a>
<a id="trace-32603"></a>
<a id="trace-32683"></a>
- 236.30s–245.30s (×10), actor 6, squad 0 (trace 32366): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 235.00s, trace 32231. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9506402452187466, 'next_transition': 32400}.
<a id="trace-32696"></a>
- 245.85s–245.85s (×1), actor 1, squad 0 (trace 32696): NeedSupport. Knowledge: actor memory at 245.00s, trace 32624. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23487037051200033, 'next_transition': 32706}.
<a id="trace-32706"></a>
<a id="trace-32722"></a>
<a id="trace-32746"></a>
<a id="trace-32768"></a>
<a id="trace-32850"></a>
<a id="trace-32873"></a>
<a id="trace-32897"></a>
<a id="trace-32918"></a>
<a id="trace-32937"></a>
<a id="trace-33021"></a>
<a id="trace-33048"></a>
<a id="trace-33070"></a>
<a id="trace-33094"></a>
<a id="trace-33118"></a>
<a id="trace-33204"></a>
- 246.30s–260.30s (×15), actor 6, squad 0 (trace 32706): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 245.00s, trace 32626. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.622896007193639, 'next_transition': 32722}.
<a id="trace-33238"></a>
- 261.55s–261.55s (×1), actor 1, squad 0 (trace 33238): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 260.00s, trace 33140. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6236072128796745, 'next_transition': 33329}.
<a id="trace-33260"></a>
- 261.55s–261.55s (×1), actor 1, squad 0 (trace 33260): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 260.00s, trace 33140. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6236072128796745, 'next_transition': 33329}.
<a id="trace-33329"></a>
<a id="trace-33375"></a>
<a id="trace-33401"></a>
<a id="trace-33487"></a>
<a id="trace-33507"></a>
<a id="trace-33531"></a>
<a id="trace-33561"></a>
<a id="trace-33588"></a>
<a id="trace-33680"></a>
- 262.30s–270.30s (×9), actor 6, squad 0 (trace 33329): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 260.00s, trace 33142. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670069630083922, 'next_transition': 33375}.
<a id="trace-33698"></a>
- 271.05s–271.05s (×1), actor 1, squad 0 (trace 33698): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 33616. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33760}.
<a id="trace-33699"></a>
- 271.05s–271.05s (×1), actor 1, squad 0 (trace 33699): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 33616. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33760}.
<a id="trace-33760"></a>
<a id="trace-33783"></a>
<a id="trace-33810"></a>
<a id="trace-33835"></a>
<a id="trace-33921"></a>
<a id="trace-33959"></a>
<a id="trace-33986"></a>
<a id="trace-34008"></a>
<a id="trace-34032"></a>
- 271.30s–279.30s (×9), actor 6, squad 0 (trace 33760): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 270.00s, trace 33618. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33783}.
<a id="trace-3542"></a>
- 279.95s–279.95s (×1), actor 6, squad 0 (events line 3542): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-34046"></a>
- 279.95s–279.95s (×1), actor 6, squad 0 (trace 34046): renew committed intent (75 s lifetime). Knowledge: actor memory at 279.95s, trace 34046. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3024197437154013, 'next_transition': 34112}.
<a id="trace-34112"></a>
<a id="trace-34140"></a>
<a id="trace-34169"></a>
<a id="trace-34208"></a>
<a id="trace-34230"></a>
<a id="trace-34313"></a>
- 280.30s–285.30s (×6), actor 6, squad 0 (trace 34112): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 280.00s, trace 34049. Next observer evidence: {'until': 281.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.22851804587467, 'next_transition': 34140}.
<a id="trace-34331"></a>
- 286.00s–286.00s (×1), actor 1, squad 0 (trace 34331): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 285.00s, trace 34252. Next observer evidence: {'until': 286.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574969969378608, 'next_transition': 34342}.
<a id="trace-34342"></a>
<a id="trace-34370"></a>
<a id="trace-34396"></a>
<a id="trace-34437"></a>
<a id="trace-34514"></a>
<a id="trace-34542"></a>
<a id="trace-34562"></a>
<a id="trace-34577"></a>
<a id="trace-34600"></a>
<a id="trace-34681"></a>
<a id="trace-34717"></a>
<a id="trace-34740"></a>
<a id="trace-34762"></a>
<a id="trace-34780"></a>
<a id="trace-34857"></a>
<a id="trace-34884"></a>
<a id="trace-34908"></a>
<a id="trace-34941"></a>
<a id="trace-34964"></a>
<a id="trace-35038"></a>
<a id="trace-35058"></a>
<a id="trace-35075"></a>
<a id="trace-35098"></a>
<a id="trace-35130"></a>
<a id="trace-35211"></a>
<a id="trace-35229"></a>
<a id="trace-35251"></a>
<a id="trace-35270"></a>
<a id="trace-35290"></a>
<a id="trace-35369"></a>
<a id="trace-35406"></a>
<a id="trace-35424"></a>
<a id="trace-35451"></a>
<a id="trace-35470"></a>
<a id="trace-35543"></a>
<a id="trace-35569"></a>
<a id="trace-35602"></a>
<a id="trace-35621"></a>
<a id="trace-35644"></a>
<a id="trace-35721"></a>
<a id="trace-35740"></a>
<a id="trace-35760"></a>
<a id="trace-35783"></a>
<a id="trace-35815"></a>
<a id="trace-35893"></a>
<a id="trace-35915"></a>
<a id="trace-35933"></a>
<a id="trace-35956"></a>
<a id="trace-35978"></a>
<a id="trace-36060"></a>
<a id="trace-36091"></a>
<a id="trace-36113"></a>
<a id="trace-36131"></a>
<a id="trace-36152"></a>
<a id="trace-36229"></a>
<a id="trace-36254"></a>
- 286.30s–341.30s (×56), actor 6, squad 0 (trace 34342): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 285.00s, trace 34254. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34370}.
<a id="trace-4070"></a>
- 341.55s–341.55s (×1), actor 6, squad 0 (events line 4070): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36266"></a>
- 341.55s–341.55s (×1), actor 6, squad 0 (trace 36266): renew committed intent (75 s lifetime). Knowledge: actor memory at 341.55s, trace 36266. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4085}.
<a id="trace-4085"></a>
- 342.20s–342.20s (×1), actor 6, squad 0 (events line 4085): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36288"></a>
- 342.20s–342.20s (×1), actor 6, squad 0 (trace 36288): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.614564 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.20s, trace 36288. Next observer evidence: None.
<a id="trace-36289"></a>
- 342.20s–342.20s (×1), actor 6, squad 0 (trace 36289): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.614564 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.20s, trace 36289. Next observer evidence: None.
<a id="trace-36293"></a>
<a id="trace-36312"></a>
<a id="trace-36331"></a>
- 342.30s–344.30s (×3), actor 6, squad 0 (trace 36293): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 342.20s, trace 36289. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36312}.
<a id="trace-36344"></a>
- 344.65s–344.65s (×1), actor 1, squad 0 (trace 36344): MoveTactically. Knowledge: actor memory at 340.00s, trace 36169. Next observer evidence: {'until': 345, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4109}.
<a id="trace-36345"></a>
- 344.65s–344.65s (×1), actor 1, squad 0 (trace 36345): traveling. Knowledge: actor memory at 340.00s, trace 36169. Next observer evidence: {'until': 345, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4109}.
<a id="trace-36346"></a>
- 344.65s–344.65s (×1), actor 1, squad 0 (trace 36346): received platoon directive. Knowledge: actor memory at 340.00s, trace 36169. Next observer evidence: {'until': 345, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4109}.
<a id="trace-4109"></a>
- 345.00s–345.00s (×1), actor 6, squad 0 (events line 4109): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36520}.
<a id="trace-36470"></a>
- 345.00s–345.00s (×1), actor 6, squad 0 (trace 36470): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 345.00s, trace 36470. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36520}.
<a id="trace-36471"></a>
- 345.00s–345.00s (×1), actor 6, squad 0 (trace 36471): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 345.00s, trace 36471. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36520}.
<a id="trace-36520"></a>
<a id="trace-36554"></a>
- 345.30s–346.30s (×2), actor 6, squad 0 (trace 36520): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 345.00s, trace 36471. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7181597716539189, 'next_transition': 36554}.
<a id="trace-36579"></a>
- 347.25s–347.25s (×1), actor 1, squad 0 (trace 36579): received platoon directive. Knowledge: actor memory at 345.00s, trace 36457. Next observer evidence: None.
<a id="trace-36686"></a>
<a id="trace-36721"></a>
<a id="trace-36761"></a>
<a id="trace-36845"></a>
<a id="trace-36877"></a>
<a id="trace-36904"></a>
<a id="trace-36929"></a>
<a id="trace-36961"></a>
<a id="trace-37058"></a>
<a id="trace-37090"></a>
<a id="trace-37116"></a>
<a id="trace-37140"></a>
<a id="trace-37161"></a>
- 347.30s–359.30s (×13), actor 6, squad 0 (trace 36686): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 345.00s, trace 36471. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.511961857326753, 'next_transition': 36721}.
<a id="trace-37178"></a>
- 359.85s–359.85s (×1), actor 1, squad 0 (trace 37178): matching received arrivals: traveling stage complete. Knowledge: actor memory at 355.00s, trace 36983. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

255 matched order/radio deliveries; 487 explicitly recorded losses; 6 unmatched orders (not classified as lost).
Matched delay: mean 0.408s; maximum 2.200s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 3547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 3548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4030: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5451: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5453: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5455: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5456: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5457: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5458: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5459: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5460: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5461: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5462: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5463: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5464: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5661: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5662: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5663: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5664: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 7117: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7122: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7123: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7125: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7126: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7127: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7128: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7129: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7130: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7131: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7132: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7133: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7134: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7135: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7136: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 11754: estimate 9.33; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 11755: estimate 9.33; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 11786: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11791: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11792: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11794: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11795: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11796: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11797: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11798: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11799: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11800: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11801: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11802: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11803: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11804: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 13433: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 13434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 13435: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 13436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 13437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 13438: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 13439: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 13440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 13441: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 13442: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 13443: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 13444: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 13445: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 13446: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 13447: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 13448: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 13449: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 13450: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 13451: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 16544: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 16545: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 16546: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 16547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 16548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 16549: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 16550: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 16551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 16552: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 16553: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 16554: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 16555: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 16556: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 16557: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 16558: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 16559: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 16560: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 16561: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 16710: estimate 9.01; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 16711: estimate 9.01; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 16922: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 16923: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 16924: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 16925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 16926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 16927: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 16928: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 16929: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 16930: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 16931: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 16932: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 16933: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 16934: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 16935: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 16936: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 16937: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 16938: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 16939: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 20099: estimate 12.40; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 20100: estimate 12.40; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 20143: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 20144: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 20145: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 20148: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 20149: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 20150: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 20151: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 20152: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 20153: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 20154: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 20155: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 20156: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 20157: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 20158: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 20159: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 20160: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 73.20s leader 5, trace 20417: estimate 12.29; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 20538: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 20539: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 20540: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 20541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 20542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 20543: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 20544: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 20545: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 20546: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 20547: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 20548: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 20549: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 20550: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 20551: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 20552: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 20553: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 20554: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 20555: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 20856: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 20857: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 20858: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 20859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 20860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 20861: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 20862: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 20863: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 20864: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 20865: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 20866: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 20867: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 20868: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 20869: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 20870: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 20871: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 20872: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 20873: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 21137: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 21138: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 21139: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 21140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 21141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 21142: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 21143: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 21144: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 21145: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 21146: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 21147: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 21148: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 21149: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 21150: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 21151: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 21152: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 21153: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 21154: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 22244: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 22245: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 22246: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 22247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 22248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 22249: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 22250: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 22251: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 22252: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 22253: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 22254: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 22255: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 22256: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 22257: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 22258: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 22259: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 22260: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 22261: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 22912: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 22913: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 22914: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 22915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 22916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 22917: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 22918: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 22919: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 22920: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 22921: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 22922: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 22923: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 22924: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 22925: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 22926: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 22927: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 22928: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 22929: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 23214: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 23215: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 23216: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 23217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 23218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 23219: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 23220: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 23221: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 23222: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 23223: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 23224: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 23225: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 23226: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 23227: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 23228: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 23229: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 23230: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 23231: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 23784: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 23785: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 23786: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 23787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 23788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 23789: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 23790: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 23791: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 23792: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 23793: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 23794: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 23795: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 23796: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 23797: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 23798: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 23799: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 23800: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 23801: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 24528: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 24529: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 24530: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 24531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 24532: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 24533: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 24534: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 24535: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 24536: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 24537: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 24538: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 24539: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 24540: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 24541: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 24542: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 24543: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 24544: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 24545: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 24783: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 24784: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 24785: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 24786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 24787: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 24788: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 24789: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 24790: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 24791: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 24792: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 24793: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 24794: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 24795: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 24796: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 24797: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 24798: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 24799: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 24800: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 118.20s leader 5, trace 24964: estimate 12.26; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 118.20s leader 5, trace 24965: estimate 12.26; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 25066: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 25067: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 25068: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 25069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 25070: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 25071: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 25072: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 25073: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 25074: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 25075: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 25076: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 25077: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 25078: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 25079: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 25080: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 25081: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 25082: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 25083: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 26312: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 26313: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 26314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 26315: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 26316: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 26317: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 26318: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 26319: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 26320: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 26321: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 26322: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 26323: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 26324: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 26325: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 26326: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 26327: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 26946: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 26947: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 26948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 26949: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 26950: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 26951: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 26952: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 26953: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 26954: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 26955: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 26956: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 26957: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 26958: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 26959: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 26960: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 26961: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 27177: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 27178: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 27179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 27180: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 27181: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 27182: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 27183: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 27184: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 27185: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 27186: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 27187: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 27188: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 27189: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 27190: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 27191: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 27192: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 27378: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 27379: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 27380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 27381: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 27382: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 27383: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 27384: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 27385: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 27386: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 27387: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 27388: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 27389: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 27390: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 27391: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 27392: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 27393: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 27741: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 27742: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 27743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 27744: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 27745: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 27746: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 27747: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 27748: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 27749: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 27750: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 27751: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 27752: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 27753: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 27754: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 27755: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.05s leader 6, trace 27760: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 27946: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 27947: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 27948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 27949: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 27950: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 27951: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 27952: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 27953: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 27954: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 27955: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 27956: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 27957: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 27958: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 27959: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 27960: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 28178: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 28179: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 28180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 28181: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 28182: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 28183: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 28184: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 28185: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 28186: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 28187: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 28188: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 28189: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 28190: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 28191: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 28192: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 28360: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 28361: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 28362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 28363: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 28364: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 28365: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 28366: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 28367: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 28368: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 28369: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 28370: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 28371: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 28372: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 28373: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 28374: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 28535: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 28536: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 28537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 28538: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 28539: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 28540: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 28541: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 28542: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 28543: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 28544: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 28545: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 28546: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 28547: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 28548: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 28549: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 28711: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 28712: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 28713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 28714: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 28715: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 28716: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 28717: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 28718: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 28719: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 28720: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 28721: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 28722: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 28723: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 28724: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 28725: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 28879: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 28880: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 28881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 28882: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 28883: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 28884: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 28885: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 28886: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 28887: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 28888: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 28889: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 28890: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 28891: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 28892: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 28893: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 29050: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 29051: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 29052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 29053: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 29054: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 29055: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 29056: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 29057: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 29058: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 29059: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 29060: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 29061: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 29062: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 29063: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 29064: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 29233: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 29234: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 29235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 29236: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 29237: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 29238: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 29239: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 29240: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 29241: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 29242: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 29243: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 29244: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 29245: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 29246: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 29247: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 29401: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 29402: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 29403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 29404: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 29405: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 29406: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 29407: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 29408: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 29409: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 29410: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 29411: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 29412: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 29413: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 29414: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 29415: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 29735: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 29736: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 29737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 29738: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 29739: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 29740: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 29741: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 29742: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 29743: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 29744: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 29745: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 29746: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 29747: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 29748: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 29749: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 30248: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 30249: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 30250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 30251: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 30252: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 30253: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 30254: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 30255: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 30256: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 30257: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 30258: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 30259: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 30260: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 30261: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 30262: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 30455: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 30456: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 30457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 30458: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 30459: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 30460: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 30461: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 30462: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 30463: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 30464: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 30465: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 30466: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 30467: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 30468: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 30469: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 206.90s leader 6, trace 30575: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 30988: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 30989: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 30990: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 30991: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 30992: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 30993: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 30994: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 30995: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 30996: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 30997: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 30998: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 30999: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 31000: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 31312: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 31313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 31314: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 31315: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 31316: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 31317: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 31318: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 31319: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 31320: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 31321: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 31322: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 31323: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 31324: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.15s leader 6, trace 31449: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 218.15s leader 6, trace 31450: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 31497: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 31498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 31499: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 31500: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 31501: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 31502: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 31503: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 31504: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 31505: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 31506: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 31507: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 31508: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 31509: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 31875: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 31876: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 31877: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 31878: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 31879: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 31880: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 31881: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 31882: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 31883: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 31884: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 31885: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 31886: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 31887: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 32049: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 32050: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 32051: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 32052: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 32053: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 32054: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 32055: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 32056: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 32057: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 32058: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 32059: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 32060: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 32061: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 32229: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 32230: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 32231: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 32232: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 32233: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 32234: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 32235: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 32236: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 32237: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 32238: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 32239: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 32240: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 32241: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 32480: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 32481: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 32482: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 32483: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 32484: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 32485: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 32486: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 32487: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 32488: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 32489: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 32490: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 32491: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 32492: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 32624: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 32625: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 32626: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 32627: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 32628: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 32629: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 32630: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 32631: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 32632: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 32633: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 32634: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 32635: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 32636: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 32789: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 32790: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 32791: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 32792: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 32793: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 32794: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 32795: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 32796: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 32797: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 32798: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 32799: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 32800: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 32801: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 32959: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 32960: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 32961: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 32962: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 32963: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 32964: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 32965: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 32966: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 32967: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 32968: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 32969: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 32970: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 32971: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 33140: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 33141: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 33142: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 33143: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 33144: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 33145: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 33146: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 33147: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 33148: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 33149: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 33150: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 33151: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 33152: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 33423: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 33424: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 33425: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 33426: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 33427: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 33428: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 33429: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 33430: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 33431: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 33432: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 33433: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 33434: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 33435: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 33616: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 33617: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 33618: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 33619: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 33620: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 33621: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 33622: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 33623: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 33624: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 33625: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 33626: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 33627: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 33628: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 33862: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 33863: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 33864: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 33865: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 33866: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 33867: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 33868: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 33869: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 33870: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 33871: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 33872: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 33873: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 33874: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 279.95s leader 6, trace 34046: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 34047: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 34048: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 34049: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 34050: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 34051: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 34052: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 34053: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 34054: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 34055: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 34056: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 34057: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 34058: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 34059: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 34252: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 34253: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 34254: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 34255: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 34256: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 34257: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 34258: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 34259: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 34260: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 34261: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 34262: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 34263: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 34264: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 34455: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 34456: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 34457: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 34458: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 34459: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 34460: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 34461: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 34462: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 34463: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 34464: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 34465: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 34466: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 34467: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 34617: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 34618: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 34619: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 34620: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 34621: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 34622: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 34623: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 34624: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 34625: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 34626: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 34627: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 34628: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 34629: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 34796: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 34797: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 34798: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 34799: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 34800: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 34801: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 34802: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 34803: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 34804: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 34805: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 34806: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 34807: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 34808: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 34980: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 34981: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 34982: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 34983: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 34984: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 34985: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 34986: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 34987: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 34988: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 34989: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 34990: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 34991: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 34992: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 35150: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 35151: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 35152: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 35153: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 35154: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 35155: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 35156: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 35157: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 35158: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 35159: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 35160: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 35161: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 35162: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 35306: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 35307: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 35308: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 35309: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 35310: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 35311: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 35312: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 35313: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 35314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 35315: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 35316: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 35317: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 35318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 35484: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 35485: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 35486: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 35487: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 35488: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 35489: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 35490: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 35491: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 35492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 35493: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 35494: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 35495: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 35496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 35658: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 35659: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 35660: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 35661: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 35662: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 35663: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 35664: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 35665: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 35666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 35667: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 35668: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 35669: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 35670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 35831: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 35832: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 35833: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 35834: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 35835: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 35836: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 35837: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 35838: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 35839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 35840: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 35841: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 35842: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 35843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 36000: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 36001: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 36002: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 36003: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 36004: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 36005: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 36006: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 36007: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 36008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 36009: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 36010: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 36011: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 36012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 36169: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 36170: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 36171: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 36172: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 36173: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 36174: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 36175: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 36176: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 36177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 36178: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 36179: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 36180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 36181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 341.55s leader 6, trace 36266: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.20s leader 6, trace 36288: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.20s leader 6, trace 36289: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 36457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 36458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 36459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 36460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 36461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 36462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 36463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 36464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 36465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 36466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 36467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 36468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 36469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 36470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 36471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 36782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 36783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 36784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 36785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 36786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 36787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 36788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 36789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 36790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 36791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 36792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 36793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 36794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 36983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 36984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 36985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 36986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 36987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 36988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 36989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 36990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 36991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 36992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 36993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 36994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 36995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 37285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 37286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 37287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 37288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 37289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 37290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 37291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 37292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 37293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 37294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 37295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 37296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 37297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Cole killed in action
- 1: Vale killed in action
- 1: Reed incapacitated
- 1: Iven incapacitated
- 1: Soren incapacitated
- 1: Ash incapacitated

## Outcome attribution

- 118.20s, evidence 2100: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 118.20s, evidence 24964: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.436026 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 118.20s, evidence 24965: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.436026 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 145.05s, evidence 2385: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40416166673612147, 'next_transition': 27817}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 206.90s, evidence 2941: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 218.15s, evidence 3055: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 218.15s, evidence 31449: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258205 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199995961348459, 'next_transition': 31454}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 218.15s, evidence 31450: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258205 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199995961348459, 'next_transition': 31454}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 279.95s, evidence 3542: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 341.55s, evidence 4070: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
