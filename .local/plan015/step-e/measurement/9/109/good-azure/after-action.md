# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/9/109/good-azure/battle-109-1789673828753666556`

## Battle summary

**Ember** · 360 s · 543 shots.

### Turning points

- 36.0s, squad 4: contact (events line 321). First recorded contact.
- 65.1s, squad 0: help call ([trace 16705](#trace-16705)). 67.0s, squad 1: answered a neighbour with support by fire.
- 67.0s, squad 1: help answer ([trace 16909](#trace-16909)). 71.0s, squad 1: took cover and returned fire.
- 71.2s, squad 1: help call ([trace 19110](#trace-19110)). 73.6s, squad 0: answered a neighbour with support by fire.
- 73.6s, squad 0: help answer ([trace 19369](#trace-19369)). 89.5s, squad 0: prepared a base of fire.
- 104.4s, squad 1: withdrawal ([trace 27296](#trace-27296)). 141.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 145.9s, squad 0: withdrawal ([trace 33617](#trace-33617)). 146.4s, squad 0: took cover and returned fire.
- 147.9s, squad 1: withdrawal ([trace 34222](#trace-34222)). 199.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 150.2s, squad 0: withdrawal ([trace 34442](#trace-34442)). 199.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 288.5s, squad 1: withdrawal ([trace 43232](#trace-43232)). 314.4s, squad 1: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 5 further drill types; withdrew; 105 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 15 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 290 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 133 shots, 0/2 lost.

### Decisions and attribution

At 53.5s, squad 1 chose advanced tactically ([trace 12098](#trace-12098)), followed by 2 shots and 0 own casualties; estimate 12.4 against 0 distinct squad-reported contacts; At 147.9s, squad 1 chose Withdraw to received rally ([trace 34222](#trace-34222)), followed by 2 shots and 0 own casualties; estimate 11.7 against 0 distinct squad-reported contacts; At 56.1s, squad 1 chose took cover and returned fire ([trace 12382](#trace-12382)), followed by 1 shots and 0 own casualties; estimate 12.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9372871133940543, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 828}.

### Communication

279 matched deliveries (mean 0.38s, max 1.85s); 500 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 36.00s, squad 4, contact, evidence events line 321: First recorded contact; .
- 65.05s, squad 0, help call, evidence 16705: NeedSupport; 67.0s, squad 1: answered a neighbour with support by fire.
- 66.95s, squad 1, help answer, evidence 16909: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 71.0s, squad 1: took cover and returned fire.
- 71.15s, squad 1, help call, evidence 19110: NeedSupport; 73.6s, squad 0: answered a neighbour with support by fire.
- 73.55s, squad 0, help answer, evidence 19369: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 89.5s, squad 0: prepared a base of fire.
- 104.40s, squad 1, withdrawal, evidence 27296: BreakContact: believed ratio at least two without superiority; 141.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 145.95s, squad 0, withdrawal, evidence 33617: Withdraw to received rally; 146.4s, squad 0: took cover and returned fire.
- 147.95s, squad 1, withdrawal, evidence 34222: Withdraw to received rally; 199.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 150.20s, squad 0, withdrawal, evidence 34442: BreakContact: believed ratio at least two without superiority; 199.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 288.50s, squad 1, withdrawal, evidence 43232: BreakContact: believed ratio at least two without superiority; 314.4s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703073056754411, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703073056754411, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703073056754411, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102776, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102776, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102776, 'next_transition': 87}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259996969364142, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9372871133940543, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 828}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9372871133940543, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9372871133940543, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 828}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837593, 'next_transition': 828}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-741"></a>
<a id="trace-743"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-951"></a>
<a id="trace-953"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.944393659034728, 'next_transition': 741}.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.86268294626592, 'next_transition': 1855}.
<a id="trace-955"></a>
<a id="trace-1301"></a>
<a id="trace-1340"></a>
<a id="trace-1342"></a>
<a id="trace-1384"></a>
<a id="trace-1386"></a>
<a id="trace-1450"></a>
<a id="trace-1452"></a>
<a id="trace-1500"></a>
<a id="trace-1502"></a>
<a id="trace-1531"></a>
<a id="trace-1533"></a>
<a id="trace-1558"></a>
<a id="trace-1560"></a>
<a id="trace-1650"></a>
<a id="trace-1652"></a>
<a id="trace-1676"></a>
<a id="trace-1678"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1728"></a>
<a id="trace-1730"></a>
<a id="trace-1783"></a>
<a id="trace-1785"></a>
<a id="trace-1805"></a>
<a id="trace-1807"></a>
<a id="trace-1823"></a>
<a id="trace-1825"></a>
<a id="trace-1919"></a>
<a id="trace-1921"></a>
<a id="trace-2006"></a>
<a id="trace-2008"></a>
<a id="trace-2034"></a>
<a id="trace-2036"></a>
<a id="trace-2356"></a>
<a id="trace-2358"></a>
<a id="trace-2393"></a>
<a id="trace-2395"></a>
<a id="trace-2423"></a>
<a id="trace-2425"></a>
<a id="trace-2478"></a>
<a id="trace-2480"></a>
<a id="trace-2503"></a>
<a id="trace-2505"></a>
<a id="trace-2547"></a>
<a id="trace-2549"></a>
<a id="trace-2639"></a>
<a id="trace-2641"></a>
<a id="trace-2666"></a>
<a id="trace-2668"></a>
<a id="trace-2695"></a>
<a id="trace-2697"></a>
<a id="trace-2720"></a>
<a id="trace-2722"></a>
<a id="trace-2758"></a>
<a id="trace-2760"></a>
<a id="trace-2820"></a>
<a id="trace-2822"></a>
<a id="trace-2853"></a>
<a id="trace-2855"></a>
<a id="trace-2875"></a>
<a id="trace-2877"></a>
<a id="trace-2942"></a>
<a id="trace-2944"></a>
<a id="trace-3028"></a>
<a id="trace-3030"></a>
<a id="trace-3047"></a>
<a id="trace-3049"></a>
<a id="trace-3083"></a>
<a id="trace-3085"></a>
<a id="trace-3095"></a>
<a id="trace-3097"></a>
<a id="trace-3114"></a>
<a id="trace-3116"></a>
<a id="trace-3124"></a>
<a id="trace-3126"></a>
<a id="trace-3254"></a>
<a id="trace-3256"></a>
<a id="trace-3289"></a>
<a id="trace-3291"></a>
<a id="trace-3311"></a>
<a id="trace-3313"></a>
<a id="trace-3413"></a>
<a id="trace-3415"></a>
<a id="trace-3426"></a>
<a id="trace-3428"></a>
<a id="trace-3481"></a>
<a id="trace-3483"></a>
<a id="trace-3496"></a>
<a id="trace-3498"></a>
<a id="trace-4005"></a>
<a id="trace-4007"></a>
<a id="trace-4032"></a>
<a id="trace-4034"></a>
<a id="trace-4055"></a>
<a id="trace-4057"></a>
<a id="trace-4077"></a>
<a id="trace-4079"></a>
<a id="trace-4105"></a>
<a id="trace-4107"></a>
<a id="trace-4136"></a>
<a id="trace-4138"></a>
<a id="trace-4224"></a>
<a id="trace-4226"></a>
<a id="trace-4246"></a>
<a id="trace-4248"></a>
<a id="trace-4311"></a>
<a id="trace-4313"></a>
<a id="trace-4333"></a>
<a id="trace-4335"></a>
<a id="trace-4352"></a>
<a id="trace-4354"></a>
<a id="trace-4384"></a>
<a id="trace-4386"></a>
<a id="trace-5002"></a>
<a id="trace-5004"></a>
<a id="trace-5603"></a>
<a id="trace-5605"></a>
<a id="trace-6226"></a>
<a id="trace-6228"></a>
<a id="trace-6353"></a>
<a id="trace-6355"></a>
<a id="trace-6404"></a>
<a id="trace-6406"></a>
<a id="trace-6471"></a>
<a id="trace-6473"></a>
<a id="trace-6552"></a>
<a id="trace-6554"></a>
<a id="trace-6702"></a>
<a id="trace-6704"></a>
<a id="trace-6734"></a>
<a id="trace-6736"></a>
<a id="trace-6982"></a>
<a id="trace-6984"></a>
<a id="trace-7018"></a>
<a id="trace-7020"></a>
<a id="trace-7042"></a>
<a id="trace-7044"></a>
<a id="trace-7136"></a>
<a id="trace-7138"></a>
<a id="trace-7392"></a>
<a id="trace-7394"></a>
<a id="trace-7431"></a>
<a id="trace-7433"></a>
<a id="trace-10649"></a>
<a id="trace-10651"></a>
<a id="trace-10695"></a>
<a id="trace-10697"></a>
<a id="trace-10741"></a>
<a id="trace-10743"></a>
<a id="trace-10781"></a>
<a id="trace-10783"></a>
<a id="trace-11687"></a>
<a id="trace-11689"></a>
<a id="trace-11758"></a>
<a id="trace-11760"></a>
<a id="trace-11827"></a>
<a id="trace-11829"></a>
<a id="trace-11871"></a>
<a id="trace-11873"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-12074"></a>
<a id="trace-12076"></a>
<a id="trace-12165"></a>
<a id="trace-12167"></a>
<a id="trace-12229"></a>
<a id="trace-12231"></a>
<a id="trace-12334"></a>
<a id="trace-12336"></a>
<a id="trace-12354"></a>
<a id="trace-12356"></a>
<a id="trace-12648"></a>
<a id="trace-12650"></a>
<a id="trace-12719"></a>
<a id="trace-12721"></a>
<a id="trace-12749"></a>
<a id="trace-12751"></a>
<a id="trace-12780"></a>
<a id="trace-12782"></a>
<a id="trace-12802"></a>
<a id="trace-12804"></a>
<a id="trace-16110"></a>
<a id="trace-16112"></a>
<a id="trace-16150"></a>
<a id="trace-16152"></a>
<a id="trace-16274"></a>
<a id="trace-16276"></a>
<a id="trace-16399"></a>
<a id="trace-16401"></a>
<a id="trace-16452"></a>
<a id="trace-16454"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16544"></a>
<a id="trace-16546"></a>
<a id="trace-16569"></a>
<a id="trace-16571"></a>
<a id="trace-16598"></a>
<a id="trace-16600"></a>
<a id="trace-16774"></a>
<a id="trace-16776"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16858"></a>
<a id="trace-16860"></a>
<a id="trace-16897"></a>
<a id="trace-16899"></a>
<a id="trace-18444"></a>
<a id="trace-18446"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18568"></a>
<a id="trace-18570"></a>
<a id="trace-18619"></a>
<a id="trace-18621"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
<a id="trace-19202"></a>
<a id="trace-19204"></a>
<a id="trace-19254"></a>
<a id="trace-19256"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19354"></a>
<a id="trace-19356"></a>
<a id="trace-21984"></a>
<a id="trace-21986"></a>
<a id="trace-22013"></a>
<a id="trace-22015"></a>
<a id="trace-22050"></a>
<a id="trace-22052"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22165"></a>
<a id="trace-22167"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22272"></a>
<a id="trace-22274"></a>
<a id="trace-22299"></a>
<a id="trace-22301"></a>
<a id="trace-22366"></a>
<a id="trace-22368"></a>
<a id="trace-22405"></a>
<a id="trace-22407"></a>
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
<a id="trace-22695"></a>
<a id="trace-22697"></a>
<a id="trace-22742"></a>
<a id="trace-22744"></a>
<a id="trace-22781"></a>
<a id="trace-22783"></a>
<a id="trace-22812"></a>
<a id="trace-22814"></a>
<a id="trace-22831"></a>
<a id="trace-22833"></a>
<a id="trace-22975"></a>
<a id="trace-22977"></a>
<a id="trace-23052"></a>
<a id="trace-23054"></a>
<a id="trace-23127"></a>
<a id="trace-23129"></a>
<a id="trace-23142"></a>
<a id="trace-23144"></a>
<a id="trace-23164"></a>
<a id="trace-23166"></a>
<a id="trace-23189"></a>
<a id="trace-23191"></a>
<a id="trace-23210"></a>
<a id="trace-23212"></a>
<a id="trace-25851"></a>
<a id="trace-25853"></a>
<a id="trace-26093"></a>
<a id="trace-26095"></a>
<a id="trace-26195"></a>
<a id="trace-26197"></a>
<a id="trace-26411"></a>
<a id="trace-26413"></a>
<a id="trace-26438"></a>
<a id="trace-26440"></a>
<a id="trace-26495"></a>
<a id="trace-26497"></a>
<a id="trace-26561"></a>
<a id="trace-26563"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26797"></a>
<a id="trace-26799"></a>
<a id="trace-26837"></a>
<a id="trace-26839"></a>
<a id="trace-26862"></a>
<a id="trace-26864"></a>
<a id="trace-26888"></a>
<a id="trace-26890"></a>
<a id="trace-26936"></a>
<a id="trace-26938"></a>
<a id="trace-27038"></a>
<a id="trace-27040"></a>
<a id="trace-27054"></a>
<a id="trace-27056"></a>
<a id="trace-27084"></a>
<a id="trace-27086"></a>
<a id="trace-27107"></a>
<a id="trace-27109"></a>
<a id="trace-27149"></a>
<a id="trace-27151"></a>
<a id="trace-27183"></a>
<a id="trace-27185"></a>
<a id="trace-27221"></a>
<a id="trace-27223"></a>
<a id="trace-27246"></a>
<a id="trace-27248"></a>
<a id="trace-27288"></a>
<a id="trace-27290"></a>
<a id="trace-27485"></a>
<a id="trace-27487"></a>
<a id="trace-27598"></a>
<a id="trace-27600"></a>
<a id="trace-27625"></a>
<a id="trace-27627"></a>
<a id="trace-27646"></a>
<a id="trace-27648"></a>
<a id="trace-27717"></a>
<a id="trace-27719"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-28125"></a>
<a id="trace-28127"></a>
<a id="trace-28186"></a>
<a id="trace-28188"></a>
<a id="trace-28215"></a>
<a id="trace-28217"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28377"></a>
<a id="trace-28379"></a>
<a id="trace-28430"></a>
<a id="trace-28432"></a>
<a id="trace-28466"></a>
<a id="trace-28468"></a>
<a id="trace-28527"></a>
<a id="trace-28529"></a>
<a id="trace-30439"></a>
<a id="trace-30441"></a>
<a id="trace-30482"></a>
<a id="trace-30484"></a>
<a id="trace-30535"></a>
<a id="trace-30537"></a>
<a id="trace-30581"></a>
<a id="trace-30583"></a>
<a id="trace-30738"></a>
<a id="trace-30740"></a>
<a id="trace-30786"></a>
<a id="trace-30788"></a>
<a id="trace-30846"></a>
<a id="trace-30848"></a>
<a id="trace-30898"></a>
<a id="trace-30900"></a>
<a id="trace-30960"></a>
<a id="trace-30962"></a>
<a id="trace-31103"></a>
<a id="trace-31105"></a>
<a id="trace-31153"></a>
<a id="trace-31155"></a>
<a id="trace-31336"></a>
<a id="trace-31338"></a>
<a id="trace-31459"></a>
<a id="trace-31461"></a>
<a id="trace-31640"></a>
<a id="trace-31642"></a>
<a id="trace-31708"></a>
<a id="trace-31710"></a>
<a id="trace-31718"></a>
<a id="trace-31720"></a>
<a id="trace-31741"></a>
<a id="trace-31743"></a>
<a id="trace-32246"></a>
<a id="trace-32248"></a>
<a id="trace-32274"></a>
<a id="trace-32276"></a>
<a id="trace-32288"></a>
<a id="trace-32290"></a>
<a id="trace-32324"></a>
<a id="trace-32326"></a>
<a id="trace-32334"></a>
<a id="trace-32336"></a>
<a id="trace-32371"></a>
<a id="trace-32373"></a>
<a id="trace-32449"></a>
<a id="trace-32451"></a>
<a id="trace-32469"></a>
<a id="trace-32471"></a>
<a id="trace-32493"></a>
<a id="trace-32495"></a>
<a id="trace-32509"></a>
<a id="trace-32511"></a>
<a id="trace-32539"></a>
<a id="trace-32541"></a>
<a id="trace-32555"></a>
<a id="trace-32557"></a>
<a id="trace-32579"></a>
<a id="trace-32581"></a>
<a id="trace-32588"></a>
<a id="trace-32590"></a>
<a id="trace-32603"></a>
<a id="trace-32605"></a>
<a id="trace-32616"></a>
<a id="trace-32618"></a>
<a id="trace-32689"></a>
<a id="trace-32691"></a>
<a id="trace-32701"></a>
<a id="trace-32703"></a>
<a id="trace-32716"></a>
<a id="trace-32718"></a>
<a id="trace-32810"></a>
<a id="trace-32812"></a>
<a id="trace-32830"></a>
<a id="trace-32832"></a>
<a id="trace-32862"></a>
<a id="trace-32864"></a>
<a id="trace-32876"></a>
<a id="trace-32878"></a>
<a id="trace-33244"></a>
<a id="trace-33246"></a>
<a id="trace-33257"></a>
<a id="trace-33259"></a>
<a id="trace-33346"></a>
<a id="trace-33348"></a>
<a id="trace-33362"></a>
<a id="trace-33364"></a>
<a id="trace-33407"></a>
<a id="trace-33409"></a>
<a id="trace-33428"></a>
<a id="trace-33430"></a>
<a id="trace-33446"></a>
<a id="trace-33448"></a>
<a id="trace-33475"></a>
<a id="trace-33477"></a>
<a id="trace-33491"></a>
<a id="trace-33493"></a>
<a id="trace-33518"></a>
<a id="trace-33520"></a>
<a id="trace-33531"></a>
<a id="trace-33533"></a>
<a id="trace-33914"></a>
<a id="trace-33916"></a>
<a id="trace-34183"></a>
<a id="trace-34185"></a>
<a id="trace-34204"></a>
<a id="trace-34206"></a>
<a id="trace-34217"></a>
<a id="trace-34219"></a>
<a id="trace-34313"></a>
<a id="trace-34315"></a>
<a id="trace-34332"></a>
<a id="trace-34334"></a>
<a id="trace-34358"></a>
<a id="trace-34360"></a>
<a id="trace-34375"></a>
<a id="trace-34377"></a>
<a id="trace-34625"></a>
<a id="trace-34627"></a>
<a id="trace-34638"></a>
<a id="trace-34640"></a>
<a id="trace-34673"></a>
<a id="trace-34675"></a>
<a id="trace-34696"></a>
<a id="trace-34698"></a>
<a id="trace-34725"></a>
<a id="trace-34727"></a>
<a id="trace-34743"></a>
<a id="trace-34745"></a>
<a id="trace-34824"></a>
<a id="trace-34826"></a>
<a id="trace-34851"></a>
<a id="trace-34853"></a>
<a id="trace-34860"></a>
<a id="trace-34862"></a>
<a id="trace-34881"></a>
<a id="trace-34883"></a>
<a id="trace-34891"></a>
<a id="trace-34893"></a>
<a id="trace-34906"></a>
<a id="trace-34908"></a>
<a id="trace-34922"></a>
<a id="trace-34924"></a>
<a id="trace-35014"></a>
<a id="trace-35016"></a>
<a id="trace-35021"></a>
<a id="trace-35023"></a>
<a id="trace-35047"></a>
<a id="trace-35049"></a>
<a id="trace-35135"></a>
<a id="trace-35137"></a>
<a id="trace-35156"></a>
<a id="trace-35158"></a>
<a id="trace-35225"></a>
<a id="trace-35227"></a>
<a id="trace-35241"></a>
<a id="trace-35243"></a>
<a id="trace-35327"></a>
<a id="trace-35329"></a>
<a id="trace-35363"></a>
<a id="trace-35365"></a>
<a id="trace-35395"></a>
<a id="trace-35397"></a>
<a id="trace-35409"></a>
<a id="trace-35411"></a>
<a id="trace-35424"></a>
<a id="trace-35426"></a>
<a id="trace-35449"></a>
<a id="trace-35451"></a>
<a id="trace-35464"></a>
<a id="trace-35466"></a>
<a id="trace-35537"></a>
<a id="trace-35539"></a>
<a id="trace-35564"></a>
<a id="trace-35566"></a>
<a id="trace-35577"></a>
<a id="trace-35579"></a>
<a id="trace-35596"></a>
<a id="trace-35598"></a>
<a id="trace-35608"></a>
<a id="trace-35610"></a>
<a id="trace-35619"></a>
<a id="trace-35621"></a>
<a id="trace-35632"></a>
<a id="trace-35634"></a>
<a id="trace-35644"></a>
<a id="trace-35646"></a>
<a id="trace-35715"></a>
<a id="trace-35717"></a>
<a id="trace-35723"></a>
<a id="trace-35725"></a>
<a id="trace-35737"></a>
<a id="trace-35739"></a>
<a id="trace-35750"></a>
<a id="trace-35752"></a>
<a id="trace-35761"></a>
<a id="trace-35763"></a>
<a id="trace-35783"></a>
<a id="trace-35785"></a>
<a id="trace-35793"></a>
<a id="trace-35795"></a>
<a id="trace-35957"></a>
<a id="trace-35959"></a>
<a id="trace-36045"></a>
<a id="trace-36047"></a>
<a id="trace-36061"></a>
<a id="trace-36063"></a>
<a id="trace-36082"></a>
<a id="trace-36084"></a>
<a id="trace-36096"></a>
<a id="trace-36098"></a>
<a id="trace-36110"></a>
<a id="trace-36112"></a>
<a id="trace-36116"></a>
<a id="trace-36118"></a>
<a id="trace-36129"></a>
<a id="trace-36131"></a>
<a id="trace-36136"></a>
<a id="trace-36138"></a>
<a id="trace-36150"></a>
<a id="trace-36152"></a>
<a id="trace-36160"></a>
<a id="trace-36162"></a>
<a id="trace-36263"></a>
<a id="trace-36265"></a>
<a id="trace-36276"></a>
<a id="trace-36278"></a>
<a id="trace-36301"></a>
<a id="trace-36303"></a>
<a id="trace-36316"></a>
<a id="trace-36318"></a>
<a id="trace-36334"></a>
<a id="trace-36336"></a>
<a id="trace-36344"></a>
<a id="trace-36346"></a>
<a id="trace-36416"></a>
<a id="trace-36418"></a>
<a id="trace-36493"></a>
<a id="trace-36495"></a>
<a id="trace-36521"></a>
<a id="trace-36523"></a>
<a id="trace-36611"></a>
<a id="trace-36613"></a>
<a id="trace-36642"></a>
<a id="trace-36644"></a>
<a id="trace-36664"></a>
<a id="trace-36666"></a>
<a id="trace-36745"></a>
<a id="trace-36747"></a>
<a id="trace-36776"></a>
<a id="trace-36778"></a>
<a id="trace-36798"></a>
<a id="trace-36800"></a>
<a id="trace-36811"></a>
<a id="trace-36813"></a>
<a id="trace-36828"></a>
<a id="trace-36830"></a>
<a id="trace-36846"></a>
<a id="trace-36848"></a>
<a id="trace-36925"></a>
<a id="trace-36927"></a>
<a id="trace-36945"></a>
<a id="trace-36947"></a>
<a id="trace-36986"></a>
<a id="trace-36988"></a>
<a id="trace-37008"></a>
<a id="trace-37010"></a>
<a id="trace-37032"></a>
<a id="trace-37034"></a>
<a id="trace-37123"></a>
<a id="trace-37125"></a>
<a id="trace-37140"></a>
<a id="trace-37142"></a>
<a id="trace-37153"></a>
<a id="trace-37155"></a>
<a id="trace-37173"></a>
<a id="trace-37175"></a>
<a id="trace-37189"></a>
<a id="trace-37191"></a>
<a id="trace-37196"></a>
<a id="trace-37198"></a>
<a id="trace-37207"></a>
<a id="trace-37209"></a>
<a id="trace-37213"></a>
<a id="trace-37215"></a>
<a id="trace-37281"></a>
<a id="trace-37283"></a>
<a id="trace-37300"></a>
<a id="trace-37302"></a>
<a id="trace-37306"></a>
<a id="trace-37308"></a>
<a id="trace-37320"></a>
<a id="trace-37322"></a>
<a id="trace-37326"></a>
<a id="trace-37328"></a>
<a id="trace-37340"></a>
<a id="trace-37342"></a>
<a id="trace-37353"></a>
<a id="trace-37355"></a>
<a id="trace-37367"></a>
<a id="trace-37369"></a>
<a id="trace-37375"></a>
<a id="trace-37377"></a>
<a id="trace-37446"></a>
<a id="trace-37448"></a>
<a id="trace-37455"></a>
<a id="trace-37457"></a>
<a id="trace-37470"></a>
<a id="trace-37472"></a>
<a id="trace-37475"></a>
<a id="trace-37477"></a>
<a id="trace-37486"></a>
<a id="trace-37488"></a>
<a id="trace-37491"></a>
<a id="trace-37493"></a>
<a id="trace-37503"></a>
<a id="trace-37505"></a>
<a id="trace-37513"></a>
<a id="trace-37515"></a>
<a id="trace-37604"></a>
<a id="trace-37606"></a>
<a id="trace-37612"></a>
<a id="trace-37614"></a>
<a id="trace-37635"></a>
<a id="trace-37637"></a>
<a id="trace-37655"></a>
<a id="trace-37657"></a>
<a id="trace-37662"></a>
<a id="trace-37664"></a>
<a id="trace-37672"></a>
<a id="trace-37674"></a>
<a id="trace-37679"></a>
<a id="trace-37681"></a>
<a id="trace-37745"></a>
<a id="trace-37747"></a>
<a id="trace-37757"></a>
<a id="trace-37759"></a>
<a id="trace-37835"></a>
<a id="trace-37837"></a>
<a id="trace-37927"></a>
<a id="trace-37929"></a>
<a id="trace-37934"></a>
<a id="trace-37936"></a>
<a id="trace-37957"></a>
<a id="trace-37959"></a>
<a id="trace-37973"></a>
<a id="trace-37975"></a>
<a id="trace-38019"></a>
<a id="trace-38021"></a>
<a id="trace-38092"></a>
<a id="trace-38094"></a>
<a id="trace-38100"></a>
<a id="trace-38102"></a>
<a id="trace-38122"></a>
<a id="trace-38124"></a>
<a id="trace-38130"></a>
<a id="trace-38132"></a>
<a id="trace-38199"></a>
<a id="trace-38201"></a>
<a id="trace-38210"></a>
<a id="trace-38212"></a>
<a id="trace-38230"></a>
<a id="trace-38232"></a>
<a id="trace-38238"></a>
<a id="trace-38240"></a>
<a id="trace-38256"></a>
<a id="trace-38258"></a>
<a id="trace-38273"></a>
<a id="trace-38275"></a>
<a id="trace-38368"></a>
<a id="trace-38370"></a>
<a id="trace-38380"></a>
<a id="trace-38382"></a>
<a id="trace-38393"></a>
<a id="trace-38395"></a>
<a id="trace-38402"></a>
<a id="trace-38404"></a>
<a id="trace-38419"></a>
<a id="trace-38421"></a>
<a id="trace-38427"></a>
<a id="trace-38429"></a>
<a id="trace-38441"></a>
<a id="trace-38443"></a>
<a id="trace-38455"></a>
<a id="trace-38457"></a>
<a id="trace-38528"></a>
<a id="trace-38530"></a>
<a id="trace-38539"></a>
<a id="trace-38541"></a>
<a id="trace-38560"></a>
<a id="trace-38562"></a>
<a id="trace-38569"></a>
<a id="trace-38571"></a>
<a id="trace-38596"></a>
<a id="trace-38598"></a>
<a id="trace-38668"></a>
<a id="trace-38670"></a>
<a id="trace-38735"></a>
<a id="trace-38737"></a>
<a id="trace-38751"></a>
<a id="trace-38753"></a>
<a id="trace-38765"></a>
<a id="trace-38767"></a>
<a id="trace-38853"></a>
<a id="trace-38855"></a>
<a id="trace-38877"></a>
<a id="trace-38879"></a>
<a id="trace-38887"></a>
<a id="trace-38889"></a>
<a id="trace-38902"></a>
<a id="trace-38904"></a>
<a id="trace-38910"></a>
<a id="trace-38912"></a>
<a id="trace-38925"></a>
<a id="trace-38927"></a>
<a id="trace-38936"></a>
<a id="trace-38938"></a>
<a id="trace-38950"></a>
<a id="trace-38952"></a>
<a id="trace-38961"></a>
<a id="trace-38963"></a>
<a id="trace-39039"></a>
<a id="trace-39041"></a>
<a id="trace-39046"></a>
<a id="trace-39048"></a>
<a id="trace-39065"></a>
<a id="trace-39067"></a>
<a id="trace-39075"></a>
<a id="trace-39077"></a>
<a id="trace-39098"></a>
<a id="trace-39100"></a>
<a id="trace-39123"></a>
<a id="trace-39125"></a>
<a id="trace-39140"></a>
<a id="trace-39142"></a>
<a id="trace-39150"></a>
<a id="trace-39152"></a>
<a id="trace-39277"></a>
<a id="trace-39279"></a>
<a id="trace-39288"></a>
<a id="trace-39290"></a>
<a id="trace-39439"></a>
<a id="trace-39441"></a>
<a id="trace-39456"></a>
<a id="trace-39458"></a>
<a id="trace-39490"></a>
<a id="trace-39492"></a>
<a id="trace-39499"></a>
<a id="trace-39501"></a>
<a id="trace-39517"></a>
<a id="trace-39519"></a>
<a id="trace-39527"></a>
<a id="trace-39529"></a>
<a id="trace-39600"></a>
<a id="trace-39602"></a>
<a id="trace-39625"></a>
<a id="trace-39627"></a>
<a id="trace-39633"></a>
<a id="trace-39635"></a>
<a id="trace-39649"></a>
<a id="trace-39651"></a>
<a id="trace-39660"></a>
<a id="trace-39662"></a>
<a id="trace-39674"></a>
<a id="trace-39676"></a>
<a id="trace-39684"></a>
<a id="trace-39686"></a>
<a id="trace-39718"></a>
<a id="trace-39720"></a>
<a id="trace-39791"></a>
<a id="trace-39793"></a>
<a id="trace-39925"></a>
<a id="trace-39927"></a>
<a id="trace-39995"></a>
<a id="trace-39997"></a>
<a id="trace-40023"></a>
<a id="trace-40025"></a>
<a id="trace-40055"></a>
<a id="trace-40057"></a>
<a id="trace-40075"></a>
<a id="trace-40077"></a>
<a id="trace-40337"></a>
<a id="trace-40339"></a>
<a id="trace-40370"></a>
<a id="trace-40372"></a>
<a id="trace-40384"></a>
<a id="trace-40386"></a>
<a id="trace-40396"></a>
<a id="trace-40398"></a>
<a id="trace-40421"></a>
<a id="trace-40423"></a>
<a id="trace-40434"></a>
<a id="trace-40436"></a>
<a id="trace-40541"></a>
<a id="trace-40543"></a>
<a id="trace-40551"></a>
<a id="trace-40553"></a>
<a id="trace-40564"></a>
<a id="trace-40566"></a>
<a id="trace-40575"></a>
<a id="trace-40577"></a>
<a id="trace-40591"></a>
<a id="trace-40593"></a>
<a id="trace-40602"></a>
<a id="trace-40604"></a>
<a id="trace-40701"></a>
<a id="trace-40703"></a>
<a id="trace-40709"></a>
<a id="trace-40711"></a>
<a id="trace-40728"></a>
<a id="trace-40730"></a>
<a id="trace-41448"></a>
<a id="trace-41450"></a>
<a id="trace-41955"></a>
<a id="trace-41957"></a>
<a id="trace-42747"></a>
<a id="trace-42749"></a>
<a id="trace-42804"></a>
<a id="trace-42806"></a>
<a id="trace-42847"></a>
<a id="trace-42849"></a>
<a id="trace-43155"></a>
<a id="trace-43157"></a>
<a id="trace-43171"></a>
<a id="trace-43173"></a>
<a id="trace-43184"></a>
<a id="trace-43186"></a>
<a id="trace-43202"></a>
<a id="trace-43204"></a>
<a id="trace-43228"></a>
<a id="trace-43230"></a>
<a id="trace-43414"></a>
<a id="trace-43416"></a>
<a id="trace-43430"></a>
<a id="trace-43432"></a>
<a id="trace-43553"></a>
<a id="trace-43555"></a>
<a id="trace-43601"></a>
<a id="trace-43603"></a>
<a id="trace-43668"></a>
<a id="trace-43670"></a>
<a id="trace-43696"></a>
<a id="trace-43698"></a>
<a id="trace-43730"></a>
<a id="trace-43732"></a>
<a id="trace-43740"></a>
<a id="trace-43742"></a>
<a id="trace-43748"></a>
<a id="trace-43750"></a>
<a id="trace-43755"></a>
<a id="trace-43757"></a>
<a id="trace-43763"></a>
<a id="trace-43765"></a>
<a id="trace-43828"></a>
<a id="trace-43830"></a>
<a id="trace-43834"></a>
<a id="trace-43836"></a>
<a id="trace-43846"></a>
<a id="trace-43848"></a>
<a id="trace-43853"></a>
<a id="trace-43855"></a>
<a id="trace-43867"></a>
<a id="trace-43869"></a>
<a id="trace-43873"></a>
<a id="trace-43875"></a>
<a id="trace-43884"></a>
<a id="trace-43886"></a>
<a id="trace-43892"></a>
<a id="trace-43894"></a>
<a id="trace-43902"></a>
<a id="trace-43904"></a>
<a id="trace-43912"></a>
<a id="trace-43914"></a>
<a id="trace-43977"></a>
<a id="trace-43979"></a>
<a id="trace-43983"></a>
<a id="trace-43985"></a>
<a id="trace-43996"></a>
<a id="trace-43998"></a>
<a id="trace-44003"></a>
<a id="trace-44005"></a>
<a id="trace-44015"></a>
<a id="trace-44017"></a>
<a id="trace-44021"></a>
<a id="trace-44023"></a>
<a id="trace-44037"></a>
<a id="trace-44039"></a>
<a id="trace-44053"></a>
<a id="trace-44055"></a>
<a id="trace-44122"></a>
<a id="trace-44124"></a>
<a id="trace-44138"></a>
<a id="trace-44140"></a>
<a id="trace-44159"></a>
<a id="trace-44161"></a>
<a id="trace-44168"></a>
<a id="trace-44170"></a>
<a id="trace-44177"></a>
<a id="trace-44179"></a>
<a id="trace-44194"></a>
<a id="trace-44196"></a>
<a id="trace-44200"></a>
<a id="trace-44202"></a>
<a id="trace-44282"></a>
<a id="trace-44284"></a>
<a id="trace-44298"></a>
<a id="trace-44300"></a>
<a id="trace-44308"></a>
<a id="trace-44310"></a>
<a id="trace-44325"></a>
<a id="trace-44327"></a>
<a id="trace-44332"></a>
<a id="trace-44334"></a>
<a id="trace-44356"></a>
<a id="trace-44358"></a>
<a id="trace-44427"></a>
<a id="trace-44429"></a>
<a id="trace-44431"></a>
<a id="trace-44433"></a>
<a id="trace-44449"></a>
<a id="trace-44451"></a>
<a id="trace-44461"></a>
<a id="trace-44463"></a>
<a id="trace-44476"></a>
<a id="trace-44478"></a>
<a id="trace-44485"></a>
<a id="trace-44487"></a>
<a id="trace-44494"></a>
<a id="trace-44496"></a>
<a id="trace-44514"></a>
<a id="trace-44516"></a>
<a id="trace-44582"></a>
<a id="trace-44584"></a>
<a id="trace-44590"></a>
<a id="trace-44592"></a>
<a id="trace-44602"></a>
<a id="trace-44604"></a>
<a id="trace-44619"></a>
<a id="trace-44621"></a>
<a id="trace-44627"></a>
<a id="trace-44629"></a>
<a id="trace-44636"></a>
<a id="trace-44638"></a>
<a id="trace-44657"></a>
<a id="trace-44659"></a>
<a id="trace-44724"></a>
<a id="trace-44726"></a>
<a id="trace-44749"></a>
<a id="trace-44751"></a>
<a id="trace-44758"></a>
<a id="trace-44760"></a>
<a id="trace-44774"></a>
<a id="trace-44776"></a>
<a id="trace-44782"></a>
<a id="trace-44784"></a>
<a id="trace-44791"></a>
<a id="trace-44793"></a>
<a id="trace-44799"></a>
<a id="trace-44801"></a>
<a id="trace-44867"></a>
<a id="trace-44869"></a>
<a id="trace-44883"></a>
<a id="trace-44885"></a>
<a id="trace-44890"></a>
<a id="trace-44892"></a>
<a id="trace-44902"></a>
<a id="trace-44904"></a>
<a id="trace-44912"></a>
<a id="trace-44914"></a>
<a id="trace-44923"></a>
<a id="trace-44925"></a>
<a id="trace-44939"></a>
<a id="trace-44941"></a>
<a id="trace-44946"></a>
<a id="trace-44948"></a>
<a id="trace-45026"></a>
<a id="trace-45028"></a>
<a id="trace-45032"></a>
<a id="trace-45034"></a>
<a id="trace-45042"></a>
<a id="trace-45044"></a>
<a id="trace-45049"></a>
<a id="trace-45051"></a>
<a id="trace-45058"></a>
<a id="trace-45060"></a>
<a id="trace-45075"></a>
<a id="trace-45077"></a>
<a id="trace-45089"></a>
<a id="trace-45091"></a>
<a id="trace-45160"></a>
<a id="trace-45162"></a>
<a id="trace-45165"></a>
<a id="trace-45167"></a>
<a id="trace-45176"></a>
<a id="trace-45178"></a>
<a id="trace-45198"></a>
<a id="trace-45200"></a>
<a id="trace-45206"></a>
<a id="trace-45208"></a>
<a id="trace-45215"></a>
<a id="trace-45217"></a>
<a id="trace-45226"></a>
<a id="trace-45228"></a>
<a id="trace-45235"></a>
<a id="trace-45237"></a>
<a id="trace-45305"></a>
<a id="trace-45307"></a>
<a id="trace-45316"></a>
<a id="trace-45318"></a>
<a id="trace-45328"></a>
<a id="trace-45330"></a>
<a id="trace-45334"></a>
<a id="trace-45336"></a>
<a id="trace-45347"></a>
<a id="trace-45349"></a>
<a id="trace-45366"></a>
<a id="trace-45368"></a>
<a id="trace-45381"></a>
<a id="trace-45383"></a>
<a id="trace-45445"></a>
<a id="trace-45447"></a>
<a id="trace-45453"></a>
<a id="trace-45455"></a>
<a id="trace-45464"></a>
<a id="trace-45466"></a>
<a id="trace-45474"></a>
<a id="trace-45476"></a>
<a id="trace-45491"></a>
<a id="trace-45493"></a>
<a id="trace-45496"></a>
<a id="trace-45498"></a>
<a id="trace-45508"></a>
<a id="trace-45510"></a>
<a id="trace-45515"></a>
<a id="trace-45517"></a>
<a id="trace-45525"></a>
<a id="trace-45527"></a>
<a id="trace-45532"></a>
<a id="trace-45534"></a>
<a id="trace-45599"></a>
<a id="trace-45601"></a>
<a id="trace-45605"></a>
<a id="trace-45607"></a>
<a id="trace-45618"></a>
<a id="trace-45620"></a>
<a id="trace-45632"></a>
<a id="trace-45634"></a>
<a id="trace-45637"></a>
<a id="trace-45639"></a>
<a id="trace-45649"></a>
<a id="trace-45651"></a>
<a id="trace-45658"></a>
<a id="trace-45660"></a>
<a id="trace-45672"></a>
<a id="trace-45674"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625042202673963, 'next_transition': 1301}.
<a id="trace-969"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 969): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299910033758869, 'next_transition': 1297}.
<a id="trace-1297"></a>
<a id="trace-1299"></a>
<a id="trace-1336"></a>
<a id="trace-1338"></a>
<a id="trace-1380"></a>
<a id="trace-1382"></a>
<a id="trace-1416"></a>
<a id="trace-1418"></a>
<a id="trace-1446"></a>
<a id="trace-1448"></a>
<a id="trace-1496"></a>
<a id="trace-1498"></a>
<a id="trace-1527"></a>
<a id="trace-1529"></a>
<a id="trace-1554"></a>
<a id="trace-1556"></a>
<a id="trace-1646"></a>
<a id="trace-1648"></a>
<a id="trace-1672"></a>
<a id="trace-1674"></a>
<a id="trace-1695"></a>
<a id="trace-1697"></a>
<a id="trace-1724"></a>
<a id="trace-1726"></a>
<a id="trace-1756"></a>
<a id="trace-1758"></a>
<a id="trace-1779"></a>
<a id="trace-1781"></a>
<a id="trace-1801"></a>
<a id="trace-1803"></a>
<a id="trace-1819"></a>
<a id="trace-1821"></a>
<a id="trace-1848"></a>
<a id="trace-1850"></a>
<a id="trace-1915"></a>
<a id="trace-1917"></a>
<a id="trace-2002"></a>
<a id="trace-2004"></a>
<a id="trace-2030"></a>
<a id="trace-2032"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1297): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2403173740058069, 'next_transition': 1336}.
<a id="trace-1855"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1855): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1575. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.936774961110883, 'next_transition': 2770}.
<a id="trace-1856"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1856): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1575. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.936774961110883, 'next_transition': 2770}.
<a id="trace-2039"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2039): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1928. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39908788629733793, 'next_transition': 2352}.
<a id="trace-2352"></a>
<a id="trace-2354"></a>
<a id="trace-2389"></a>
<a id="trace-2391"></a>
<a id="trace-2419"></a>
<a id="trace-2421"></a>
<a id="trace-2436"></a>
<a id="trace-2438"></a>
<a id="trace-2474"></a>
<a id="trace-2476"></a>
<a id="trace-2499"></a>
<a id="trace-2501"></a>
<a id="trace-2522"></a>
<a id="trace-2524"></a>
<a id="trace-2543"></a>
<a id="trace-2545"></a>
<a id="trace-2635"></a>
<a id="trace-2637"></a>
<a id="trace-2662"></a>
<a id="trace-2664"></a>
<a id="trace-2691"></a>
<a id="trace-2693"></a>
<a id="trace-2716"></a>
<a id="trace-2718"></a>
<a id="trace-2754"></a>
<a id="trace-2756"></a>
<a id="trace-2816"></a>
<a id="trace-2818"></a>
<a id="trace-2849"></a>
<a id="trace-2851"></a>
<a id="trace-2871"></a>
<a id="trace-2873"></a>
<a id="trace-2906"></a>
<a id="trace-2908"></a>
<a id="trace-2938"></a>
<a id="trace-2940"></a>
<a id="trace-3024"></a>
<a id="trace-3026"></a>
<a id="trace-3043"></a>
<a id="trace-3045"></a>
- 16.25s–25.75s (×40), actor 5, squad 0 (trace 2352): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1933. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09844488702441563, 'next_transition': 2389}.
<a id="trace-2770"></a>
- 22.35s–22.35s (×1), actor 8, squad 1 (trace 2770): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 2564. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.4163029549701935, 'next_transition': 3138}.
<a id="trace-3057"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 3057): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2950. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500805148440314, 'next_transition': 3079}.
<a id="trace-3079"></a>
<a id="trace-3081"></a>
<a id="trace-3091"></a>
<a id="trace-3093"></a>
<a id="trace-3110"></a>
<a id="trace-3112"></a>
<a id="trace-3120"></a>
<a id="trace-3122"></a>
<a id="trace-3250"></a>
<a id="trace-3252"></a>
<a id="trace-3270"></a>
<a id="trace-3272"></a>
<a id="trace-3285"></a>
<a id="trace-3287"></a>
<a id="trace-3307"></a>
<a id="trace-3309"></a>
- 26.25s–29.75s (×16), actor 5, squad 0 (trace 3079): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2955. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500805148440225, 'next_transition': 3091}.
<a id="trace-3138"></a>
- 28.20s–28.20s (×1), actor 8, squad 1 (trace 3138): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2958. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.469395944923877, 'next_transition': 3435}.
<a id="trace-273"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 273): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3314"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 3314): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 3314. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3409}.
<a id="trace-3315"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 3315): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 3315. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3409}.
<a id="trace-3409"></a>
<a id="trace-3411"></a>
<a id="trace-3422"></a>
<a id="trace-3424"></a>
<a id="trace-3477"></a>
<a id="trace-3479"></a>
<a id="trace-3492"></a>
<a id="trace-3494"></a>
- 30.25s–31.75s (×8), actor 5, squad 0 (trace 3409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3327. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3422}.
<a id="trace-3435"></a>
- 31.20s–31.20s (×1), actor 8, squad 1 (trace 3435): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3330. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.356263581779444, 'next_transition': 537}.
<a id="trace-3503"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3503): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3322. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4001}.
<a id="trace-3510"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3510): MoveTactically. Knowledge: actor memory at 30.00s, trace 3322. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4001}.
<a id="trace-3511"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3511): traveling overwatch. Knowledge: actor memory at 30.00s, trace 3322. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4001}.
<a id="trace-3512"></a>
- 32.00s–32.00s (×1), actor 0, squad 0 (trace 3512): Reorganise complete. Knowledge: actor memory at 30.00s, trace 3322. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4001}.
<a id="trace-4001"></a>
<a id="trace-4003"></a>
<a id="trace-4028"></a>
<a id="trace-4030"></a>
<a id="trace-4051"></a>
<a id="trace-4053"></a>
<a id="trace-4073"></a>
<a id="trace-4075"></a>
<a id="trace-4101"></a>
<a id="trace-4103"></a>
<a id="trace-4132"></a>
<a id="trace-4134"></a>
<a id="trace-4220"></a>
<a id="trace-4222"></a>
<a id="trace-4242"></a>
<a id="trace-4244"></a>
<a id="trace-4272"></a>
<a id="trace-4274"></a>
<a id="trace-4307"></a>
<a id="trace-4309"></a>
<a id="trace-4329"></a>
<a id="trace-4331"></a>
<a id="trace-4348"></a>
<a id="trace-4350"></a>
<a id="trace-4380"></a>
<a id="trace-4382"></a>
- 32.25s–38.25s (×26), actor 5, squad 0 (trace 4001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3327. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4028}.
<a id="trace-4414"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4414): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4145. Next observer evidence: None.
<a id="trace-4415"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4415): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4145. Next observer evidence: None.
<a id="trace-4416"></a>
- 38.65s–38.65s (×1), actor 0, squad 0 (trace 4416): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4145. Next observer evidence: None.
<a id="trace-4998"></a>
<a id="trace-5000"></a>
- 38.75s–38.75s (×2), actor 5, squad 0 (trace 4998): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4150. Next observer evidence: {'until': 38.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26740818343067213, 'next_transition': 5006}.
<a id="trace-5006"></a>
- 38.90s–38.90s (×1), actor 0, squad 0 (trace 5006): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4145. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42848213482553127, 'next_transition': 5599}.
<a id="trace-5599"></a>
<a id="trace-5601"></a>
- 39.25s–39.25s (×2), actor 5, squad 0 (trace 5599): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4150. Next observer evidence: {'until': 39.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519546510476503, 'next_transition': 5621}.
<a id="trace-5621"></a>
- 39.55s–39.55s (×1), actor 0, squad 0 (trace 5621): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4145. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22514209790785492, 'next_transition': 6222}.
<a id="trace-6222"></a>
<a id="trace-6224"></a>
<a id="trace-6349"></a>
<a id="trace-6351"></a>
<a id="trace-6400"></a>
<a id="trace-6402"></a>
<a id="trace-6467"></a>
<a id="trace-6469"></a>
<a id="trace-6548"></a>
<a id="trace-6550"></a>
- 39.75s–41.75s (×10), actor 5, squad 0 (trace 6222): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4150. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6826292142508767, 'next_transition': 6349}.
<a id="trace-536"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 536): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-537"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 537): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6601"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 6601): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.811594 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6601. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21116957241947393, 'next_transition': 6638}.
<a id="trace-6602"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 6602): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.811594 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6602. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21116957241947393, 'next_transition': 6638}.
<a id="trace-6603"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 6603): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.811594 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6603. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.205000514327968, 'next_transition': 6740}.
<a id="trace-6604"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 6604): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.811594 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6604. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.205000514327968, 'next_transition': 6740}.
<a id="trace-6638"></a>
<a id="trace-6640"></a>
<a id="trace-6698"></a>
<a id="trace-6700"></a>
- 42.25s–42.75s (×4), actor 5, squad 0 (trace 6638): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 6604. Next observer evidence: {'until': 42.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3421262345787395, 'next_transition': 6698}.
<a id="trace-6718"></a>
- 43.05s–43.05s (×1), actor 0, squad 0 (trace 6718): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 6248. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874492162196879, 'next_transition': 6730}.
<a id="trace-6730"></a>
<a id="trace-6732"></a>
<a id="trace-6978"></a>
<a id="trace-6980"></a>
<a id="trace-7013"></a>
<a id="trace-7015"></a>
<a id="trace-7037"></a>
<a id="trace-7039"></a>
<a id="trace-7130"></a>
<a id="trace-7132"></a>
<a id="trace-7386"></a>
<a id="trace-7388"></a>
- 43.25s–45.75s (×12), actor 5, squad 0 (trace 6730): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 6604. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749914483894825, 'next_transition': 6978}.
<a id="trace-6740"></a>
- 43.40s–43.40s (×1), actor 8, squad 1 (trace 6740): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 6256. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.892641272368344, 'next_transition': 7141}.
<a id="trace-6741"></a>
- 43.40s–43.40s (×1), actor 8, squad 1 (trace 6741): bounding overwatch. Knowledge: actor memory at 40.00s, trace 6256. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.892641272368344, 'next_transition': 7141}.
<a id="trace-6742"></a>
<a id="trace-7141"></a>
- 43.40s–45.45s (×2), actor 8, squad 1 (trace 6742): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 6256. Next observer evidence: {'until': 45.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.892641272368344, 'next_transition': 7141}.
<a id="trace-7398"></a>
- 45.85s–45.85s (×1), actor 0, squad 0 (trace 7398): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23300969697513646, 'next_transition': 7425}.
<a id="trace-7425"></a>
<a id="trace-7427"></a>
- 46.25s–46.25s (×2), actor 5, squad 0 (trace 7425): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7056. Next observer evidence: None.
<a id="trace-7440"></a>
- 46.30s–46.30s (×1), actor 0, squad 0 (trace 7440): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2858582681593647, 'next_transition': 10643}.
<a id="trace-10467"></a>
- 46.30s–46.30s (×1), actor 0, squad 0 (trace 10467): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2858582681593647, 'next_transition': 10643}.
<a id="trace-10468"></a>
- 46.30s–46.30s (×1), actor 0, squad 0 (trace 10468): MoveTactically. Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2858582681593647, 'next_transition': 10643}.
<a id="trace-10469"></a>
- 46.30s–46.30s (×1), actor 0, squad 0 (trace 10469): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2858582681593647, 'next_transition': 10643}.
<a id="trace-10643"></a>
<a id="trace-10645"></a>
<a id="trace-10689"></a>
<a id="trace-10691"></a>
<a id="trace-10735"></a>
<a id="trace-10737"></a>
<a id="trace-10775"></a>
<a id="trace-10777"></a>
<a id="trace-10809"></a>
<a id="trace-10811"></a>
<a id="trace-10864"></a>
<a id="trace-10866"></a>
- 46.75s–49.25s (×12), actor 5, squad 0 (trace 10643): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7056. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23519448530741235, 'next_transition': 10689}.
<a id="trace-10822"></a>
- 48.80s–48.80s (×1), actor 8, squad 1 (trace 10822): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7059. Next observer evidence: {'until': 52, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.4177849363644945, 'next_transition': 755}.
<a id="trace-10888"></a>
- 49.55s–49.55s (×1), actor 0, squad 0 (trace 10888): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3886520942928489, 'next_transition': 11557}.
<a id="trace-10889"></a>
- 49.55s–49.55s (×1), actor 0, squad 0 (trace 10889): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 7051. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3886520942928489, 'next_transition': 11557}.
<a id="trace-11557"></a>
<a id="trace-11559"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11752"></a>
<a id="trace-11754"></a>
<a id="trace-11821"></a>
<a id="trace-11823"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11948"></a>
<a id="trace-11950"></a>
<a id="trace-12034"></a>
<a id="trace-12036"></a>
<a id="trace-12068"></a>
<a id="trace-12070"></a>
- 49.75s–53.25s (×16), actor 5, squad 0 (trace 11557): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7056. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0702721034731462, 'next_transition': 11681}.
<a id="trace-755"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (events line 755): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11910"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 11910): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.657700 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 11910. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06136568462911488, 'next_transition': 11965}.
<a id="trace-11911"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 11911): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.657700 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 11911. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06136568462911488, 'next_transition': 11965}.
<a id="trace-11965"></a>
- 52.30s–52.30s (×1), actor 8, squad 1 (trace 11965): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 11591. Next observer evidence: {'until': 53.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05168591860353069, 'next_transition': 12098}.
<a id="trace-12083"></a>
- 53.40s–53.40s (×1), actor 0, squad 0 (trace 12083): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 11583. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3362780436503853, 'next_transition': 12159}.
<a id="trace-12098"></a>
- 53.55s–53.55s (×1), actor 8, squad 1 (trace 12098): MoveTactically. Knowledge: actor memory at 50.00s, trace 11591. Next observer evidence: {'until': 56, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.084639480683651, 'next_transition': 12382}.
<a id="trace-12099"></a>
- 53.55s–53.55s (×1), actor 8, squad 1 (trace 12099): received platoon directive. Knowledge: actor memory at 50.00s, trace 11591. Next observer evidence: {'until': 56, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.084639480683651, 'next_transition': 12382}.
<a id="trace-12159"></a>
<a id="trace-12161"></a>
<a id="trace-12196"></a>
<a id="trace-12198"></a>
<a id="trace-12223"></a>
<a id="trace-12225"></a>
<a id="trace-12328"></a>
<a id="trace-12330"></a>
<a id="trace-12348"></a>
<a id="trace-12350"></a>
<a id="trace-12642"></a>
<a id="trace-12644"></a>
<a id="trace-12684"></a>
<a id="trace-12686"></a>
<a id="trace-12713"></a>
<a id="trace-12715"></a>
<a id="trace-12743"></a>
<a id="trace-12745"></a>
<a id="trace-12774"></a>
<a id="trace-12776"></a>
<a id="trace-12796"></a>
<a id="trace-12798"></a>
- 53.75s–58.75s (×22), actor 5, squad 0 (trace 12159): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 11911. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9786100023449836, 'next_transition': 12196}.
<a id="trace-12382"></a>
- 56.10s–56.10s (×1), actor 8, squad 1 (trace 12382): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 12253. Next observer evidence: {'until': 59.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5619701187088135, 'next_transition': 16128}.
<a id="trace-12383"></a>
- 56.10s–56.10s (×1), actor 8, squad 1 (trace 12383): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 12253. Next observer evidence: {'until': 59.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5619701187088135, 'next_transition': 16128}.
<a id="trace-12842"></a>
- 59.20s–59.20s (×1), actor 0, squad 0 (trace 12842): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 12245. Next observer evidence: None.
<a id="trace-15864"></a>
- 59.20s–59.20s (×1), actor 0, squad 0 (trace 15864): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 55.00s, trace 12245. Next observer evidence: None.
<a id="trace-15865"></a>
- 59.20s–59.20s (×1), actor 0, squad 0 (trace 15865): MoveTactically. Knowledge: actor memory at 55.00s, trace 12245. Next observer evidence: None.
<a id="trace-15866"></a>
- 59.20s–59.20s (×1), actor 0, squad 0 (trace 15866): contact cover complete: assessment resumes closure. Knowledge: actor memory at 55.00s, trace 12245. Next observer evidence: None.
<a id="trace-16104"></a>
<a id="trace-16106"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
<a id="trace-16268"></a>
<a id="trace-16270"></a>
<a id="trace-16335"></a>
<a id="trace-16337"></a>
<a id="trace-16393"></a>
<a id="trace-16395"></a>
<a id="trace-16446"></a>
<a id="trace-16448"></a>
<a id="trace-16495"></a>
<a id="trace-16497"></a>
<a id="trace-16538"></a>
<a id="trace-16540"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16634"></a>
<a id="trace-16636"></a>
<a id="trace-16660"></a>
<a id="trace-16662"></a>
- 59.25s–64.75s (×24), actor 5, squad 0 (trace 16104): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12250. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750048595659133, 'next_transition': 16144}.
<a id="trace-16128"></a>
- 59.45s–59.45s (×1), actor 8, squad 1 (trace 16128): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 12253. Next observer evidence: {'until': 61.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7303019024546735, 'next_transition': 16418}.
<a id="trace-16418"></a>
- 61.45s–61.45s (×1), actor 8, squad 1 (trace 16418): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 60.00s, trace 16182. Next observer evidence: {'until': 63.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7933534629126087, 'next_transition': 1054}.
<a id="trace-1054"></a>
- 63.35s–63.35s (×1), actor 5, squad 1 (events line 1054): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16573"></a>
- 63.35s–63.35s (×1), actor 5, squad 1 (trace 16573): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.648828 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 63.35s, trace 16573. Next observer evidence: {'until': 65.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1348350000000003, 'next_transition': 16777}.
<a id="trace-16574"></a>
- 63.35s–63.35s (×1), actor 5, squad 1 (trace 16574): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.648828 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 63.35s, trace 16574. Next observer evidence: {'until': 65.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1348350000000003, 'next_transition': 16777}.
<a id="trace-16705"></a>
- 65.05s–65.05s (×1), actor 0, squad 0 (trace 16705): NeedSupport. Knowledge: actor memory at 65.00s, trace 16684. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3495220936219343, 'next_transition': 16768}.
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16801"></a>
<a id="trace-16803"></a>
<a id="trace-16852"></a>
<a id="trace-16854"></a>
<a id="trace-16891"></a>
<a id="trace-16893"></a>
<a id="trace-17849"></a>
<a id="trace-17851"></a>
- 65.25s–67.25s (×10), actor 5, squad 0 (trace 16768): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16689. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6019642851408709, 'next_transition': 16801}.
<a id="trace-16777"></a>
- 65.35s–65.35s (×1), actor 8, squad 1 (trace 16777): received platoon directive; retain held slots. Knowledge: actor memory at 65.00s, trace 16692. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16909}.
<a id="trace-16909"></a>
- 66.95s–66.95s (×1), actor 8, squad 1 (trace 16909): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 16692. Next observer evidence: {'until': 67, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17829}.
<a id="trace-16910"></a>
- 66.95s–66.95s (×1), actor 8, squad 1 (trace 16910): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 16692. Next observer evidence: {'until': 67, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17829}.
<a id="trace-17829"></a>
- 67.00s–67.00s (×1), actor 8, squad 1 (trace 17829): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 65.00s, trace 16692. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1797549162662523, 'next_transition': 18578}.
<a id="trace-17860"></a>
- 67.30s–67.30s (×1), actor 0, squad 0 (trace 17860): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 65.00s, trace 16684. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13514901047518244, 'next_transition': 17876}.
<a id="trace-17876"></a>
- 67.55s–67.55s (×1), actor 0, squad 0 (trace 17876): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 16684. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09015832462045936, 'next_transition': 18438}.
<a id="trace-17882"></a>
- 67.55s–67.55s (×1), actor 0, squad 0 (trace 17882): MoveTactically. Knowledge: actor memory at 65.00s, trace 16684. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09015832462045936, 'next_transition': 18438}.
<a id="trace-17883"></a>
- 67.55s–67.55s (×1), actor 0, squad 0 (trace 17883): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 65.00s, trace 16684. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09015832462045936, 'next_transition': 18438}.
<a id="trace-18438"></a>
<a id="trace-18440"></a>
<a id="trace-18481"></a>
<a id="trace-18483"></a>
<a id="trace-18509"></a>
<a id="trace-18511"></a>
<a id="trace-18562"></a>
<a id="trace-18564"></a>
<a id="trace-18613"></a>
<a id="trace-18615"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18798"></a>
<a id="trace-18800"></a>
<a id="trace-19132"></a>
<a id="trace-19134"></a>
<a id="trace-19196"></a>
<a id="trace-19198"></a>
<a id="trace-19248"></a>
<a id="trace-19250"></a>
<a id="trace-19301"></a>
<a id="trace-19303"></a>
<a id="trace-19348"></a>
<a id="trace-19350"></a>
- 67.75s–73.25s (×24), actor 5, squad 0 (trace 18438): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 16689. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2700677756233066, 'next_transition': 18481}.
<a id="trace-18578"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (trace 18578): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.569948 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 18578. Next observer evidence: None.
<a id="trace-18579"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (trace 18579): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.569948 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 18579. Next observer evidence: None.
<a id="trace-1312"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (events line 1312): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 71, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11684307427818191, 'next_transition': 18842}.
<a id="trace-18842"></a>
- 71.00s–71.00s (×1), actor 8, squad 1 (trace 18842): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 18644. Next observer evidence: None.
<a id="trace-18843"></a>
- 71.00s–71.00s (×1), actor 8, squad 1 (trace 18843): received platoon directive. Knowledge: actor memory at 70.00s, trace 18644. Next observer evidence: None.
<a id="trace-19110"></a>
- 71.15s–71.15s (×1), actor 8, squad 1 (trace 19110): NeedSupport. Knowledge: actor memory at 70.00s, trace 18644. Next observer evidence: {'until': 74.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.454686807169455, 'next_transition': 22024}.
<a id="trace-19369"></a>
- 73.55s–73.55s (×1), actor 0, squad 0 (trace 19369): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 18637. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18232540820079005, 'next_transition': 21978}.
<a id="trace-19370"></a>
- 73.55s–73.55s (×1), actor 0, squad 0 (trace 19370): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 70.00s, trace 18637. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18232540820079005, 'next_transition': 21978}.
<a id="trace-21978"></a>
<a id="trace-21980"></a>
<a id="trace-22007"></a>
<a id="trace-22009"></a>
<a id="trace-22044"></a>
<a id="trace-22046"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
- 73.75s–75.25s (×8), actor 5, squad 0 (trace 21978): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 18641. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3971870288275468, 'next_transition': 22007}.
<a id="trace-22024"></a>
- 74.35s–74.35s (×1), actor 8, squad 1 (trace 22024): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 18644. Next observer evidence: {'until': 76, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.9879697346559384, 'next_transition': 22178}.
<a id="trace-22145"></a>
- 75.35s–75.35s (×1), actor 5, squad 0 (trace 22145): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.576215 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.35s, trace 22145. Next observer evidence: None.
<a id="trace-22146"></a>
- 75.35s–75.35s (×1), actor 5, squad 0 (trace 22146): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.576215 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.35s, trace 22146. Next observer evidence: None.
<a id="trace-1444"></a>
- 75.35s–75.35s (×1), actor 5, squad 0 (events line 1444): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33078982397863727, 'next_transition': 22159}.
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22224"></a>
<a id="trace-22226"></a>
<a id="trace-22250"></a>
<a id="trace-22252"></a>
<a id="trace-22267"></a>
<a id="trace-22269"></a>
<a id="trace-22293"></a>
<a id="trace-22295"></a>
<a id="trace-22317"></a>
<a id="trace-22319"></a>
<a id="trace-22360"></a>
<a id="trace-22362"></a>
<a id="trace-22399"></a>
<a id="trace-22401"></a>
<a id="trace-22512"></a>
<a id="trace-22514"></a>
<a id="trace-22571"></a>
<a id="trace-22573"></a>
<a id="trace-22635"></a>
<a id="trace-22637"></a>
<a id="trace-22689"></a>
<a id="trace-22691"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22775"></a>
<a id="trace-22777"></a>
<a id="trace-22806"></a>
<a id="trace-22808"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22843"></a>
<a id="trace-22845"></a>
<a id="trace-22867"></a>
<a id="trace-22869"></a>
<a id="trace-22969"></a>
<a id="trace-22971"></a>
<a id="trace-23001"></a>
<a id="trace-23003"></a>
<a id="trace-23046"></a>
<a id="trace-23048"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23121"></a>
<a id="trace-23123"></a>
<a id="trace-23136"></a>
<a id="trace-23138"></a>
<a id="trace-23158"></a>
<a id="trace-23160"></a>
- 75.75s–88.25s (×52), actor 5, squad 0 (trace 22159): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.35s, trace 22146. Next observer evidence: {'until': 76.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30690503797415575, 'next_transition': 22196}.
<a id="trace-22178"></a>
- 76.00s–76.00s (×1), actor 8, squad 1 (trace 22178): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 75.00s, trace 22066. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0829045137307862, 'next_transition': 1568}.
<a id="trace-1568"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (events line 1568): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22335"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (trace 22335): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571338 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.95s, trace 22335. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0034449999999996983, 'next_transition': 22558}.
<a id="trace-22336"></a>
- 78.95s–78.95s (×1), actor 5, squad 1 (trace 22336): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571338 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.95s, trace 22336. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0034449999999996983, 'next_transition': 22558}.
<a id="trace-22558"></a>
- 80.65s–80.65s (×1), actor 8, squad 1 (trace 22558): received platoon directive; retain held slots. Knowledge: actor memory at 80.00s, trace 22429. Next observer evidence: {'until': 84.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.008890000000000065, 'next_transition': 1799}.
<a id="trace-1799"></a>
- 84.95s–84.95s (×1), actor 5, squad 1 (events line 1799): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22882"></a>
- 84.95s–84.95s (×1), actor 5, squad 1 (trace 22882): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.572889 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 22882. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5648949999999999, 'next_transition': 23062}.
<a id="trace-22883"></a>
- 84.95s–84.95s (×1), actor 5, squad 1 (trace 22883): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.572889 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 22883. Next observer evidence: {'until': 86.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5648949999999999, 'next_transition': 23062}.
<a id="trace-23062"></a>
- 86.40s–86.40s (×1), actor 8, squad 1 (trace 23062): received platoon directive; retain held slots. Knowledge: actor memory at 85.00s, trace 22893. Next observer evidence: {'until': 90, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6200999999999999, 'next_transition': 26029}.
<a id="trace-23171"></a>
- 88.45s–88.45s (×1), actor 0, squad 0 (trace 23171): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 22886. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23183}.
<a id="trace-23172"></a>
- 88.45s–88.45s (×1), actor 0, squad 0 (trace 23172): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 85.00s, trace 22886. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23183}.
<a id="trace-23173"></a>
- 88.45s–88.45s (×1), actor 0, squad 0 (trace 23173): Fixing. Knowledge: actor memory at 85.00s, trace 22886. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23183}.
<a id="trace-23183"></a>
<a id="trace-23185"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
- 88.75s–89.25s (×4), actor 5, squad 0 (trace 23183): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 22890. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23204}.
<a id="trace-23219"></a>
- 89.45s–89.45s (×1), actor 0, squad 0 (trace 23219): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 22886. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25845}.
<a id="trace-23220"></a>
- 89.45s–89.45s (×1), actor 0, squad 0 (trace 23220): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 85.00s, trace 22886. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25845}.
<a id="trace-25845"></a>
<a id="trace-25847"></a>
<a id="trace-26087"></a>
<a id="trace-26089"></a>
<a id="trace-26137"></a>
<a id="trace-26139"></a>
- 89.75s–90.75s (×6), actor 5, squad 0 (trace 25845): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 22890. Next observer evidence: {'until': 90.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26087}.
<a id="trace-26029"></a>
- 90.15s–90.15s (×1), actor 8, squad 1 (trace 26029): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 90.00s, trace 25868. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0015299999999998093, 'next_transition': 2030}.
<a id="trace-2029"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (events line 2029): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2030"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (events line 2030): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26156"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (trace 26156): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.577437 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 26156. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41469189067901796, 'next_transition': 26189}.
<a id="trace-26157"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (trace 26157): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.577437 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 26157. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41469189067901796, 'next_transition': 26189}.
<a id="trace-26158"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 26158): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.577437 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 26158. Next observer evidence: {'until': 92.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.005230000000000068, 'next_transition': 26330}.
<a id="trace-26159"></a>
- 90.95s–90.95s (×1), actor 5, squad 1 (trace 26159): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.577437 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 26159. Next observer evidence: {'until': 92.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.005230000000000068, 'next_transition': 26330}.
<a id="trace-26189"></a>
<a id="trace-26191"></a>
<a id="trace-26245"></a>
<a id="trace-26247"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26349"></a>
<a id="trace-26351"></a>
<a id="trace-26406"></a>
<a id="trace-26408"></a>
<a id="trace-26433"></a>
<a id="trace-26435"></a>
<a id="trace-26490"></a>
<a id="trace-26492"></a>
<a id="trace-26554"></a>
<a id="trace-26556"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26792"></a>
<a id="trace-26794"></a>
<a id="trace-26832"></a>
<a id="trace-26834"></a>
<a id="trace-26857"></a>
<a id="trace-26859"></a>
- 91.25s–97.75s (×26), actor 5, squad 0 (trace 26189): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.95s, trace 26159. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3893266912779168, 'next_transition': 26245}.
<a id="trace-26330"></a>
- 92.60s–92.60s (×1), actor 8, squad 1 (trace 26330): received platoon directive; retain held slots. Knowledge: actor memory at 90.00s, trace 25868. Next observer evidence: {'until': 96.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7553399999999999, 'next_transition': 2306}.
<a id="trace-2306"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (events line 2306): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26808"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (trace 26808): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.578387 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 26808. Next observer evidence: {'until': 98.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3632900000000001, 'next_transition': 26896}.
<a id="trace-26809"></a>
- 96.95s–96.95s (×1), actor 5, squad 1 (trace 26809): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.578387 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 26809. Next observer evidence: {'until': 98.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3632900000000001, 'next_transition': 26896}.
<a id="trace-26876"></a>
- 98.20s–98.20s (×1), actor 5, squad 0 (trace 26876): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 98.20s, trace 26876. Next observer evidence: None.
<a id="trace-26882"></a>
<a id="trace-26884"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26932"></a>
<a id="trace-26934"></a>
<a id="trace-26946"></a>
<a id="trace-26948"></a>
<a id="trace-27033"></a>
<a id="trace-27035"></a>
<a id="trace-27049"></a>
<a id="trace-27051"></a>
<a id="trace-27078"></a>
<a id="trace-27080"></a>
<a id="trace-27101"></a>
<a id="trace-27103"></a>
<a id="trace-27143"></a>
<a id="trace-27145"></a>
<a id="trace-27177"></a>
<a id="trace-27179"></a>
<a id="trace-27215"></a>
<a id="trace-27217"></a>
<a id="trace-27240"></a>
<a id="trace-27242"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27479"></a>
<a id="trace-27481"></a>
<a id="trace-27571"></a>
<a id="trace-27573"></a>
<a id="trace-27592"></a>
<a id="trace-27594"></a>
<a id="trace-27619"></a>
<a id="trace-27621"></a>
<a id="trace-27640"></a>
<a id="trace-27642"></a>
<a id="trace-27674"></a>
<a id="trace-27676"></a>
- 98.25s–107.25s (×38), actor 5, squad 0 (trace 26882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 98.20s, trace 26876. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17544843655843056, 'next_transition': 26908}.
<a id="trace-26896"></a>
- 98.40s–98.40s (×1), actor 8, squad 1 (trace 26896): received platoon directive; retain held slots. Knowledge: actor memory at 95.00s, trace 26580. Next observer evidence: {'until': 102.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9740900000000003, 'next_transition': 2521}.
<a id="trace-2521"></a>
- 102.95s–102.95s (×1), actor 5, squad 1 (events line 2521): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 104.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.038605, 'next_transition': 27296}.
<a id="trace-27196"></a>
- 102.95s–102.95s (×1), actor 5, squad 1 (trace 27196): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.493561 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.95s, trace 27196. Next observer evidence: {'until': 104.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.038605, 'next_transition': 27296}.
<a id="trace-27197"></a>
- 102.95s–102.95s (×1), actor 5, squad 1 (trace 27197): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.493561 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.95s, trace 27197. Next observer evidence: {'until': 104.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.038605, 'next_transition': 27296}.
<a id="trace-27296"></a>
- 104.40s–104.40s (×1), actor 8, squad 1 (trace 27296): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 26963. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.29256406838243, 'next_transition': 31462}.
<a id="trace-27297"></a>
- 104.40s–104.40s (×1), actor 8, squad 1 (trace 27297): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 26963. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.29256406838243, 'next_transition': 31462}.
<a id="trace-27706"></a>
- 107.65s–107.65s (×1), actor 1, squad 0 (trace 27706): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 105.00s, trace 27495. Next observer evidence: None.
<a id="trace-27711"></a>
<a id="trace-27713"></a>
<a id="trace-27741"></a>
<a id="trace-27743"></a>
- 107.75s–108.25s (×4), actor 5, squad 0 (trace 27711): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 27498. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5355034485506318, 'next_transition': 27741}.
<a id="trace-27772"></a>
- 108.65s–108.65s (×1), actor 1, squad 0 (trace 27772): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 27495. Next observer evidence: None.
<a id="trace-27776"></a>
- 108.65s–108.65s (×1), actor 1, squad 0 (trace 27776): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 27495. Next observer evidence: None.
<a id="trace-27777"></a>
- 108.65s–108.65s (×1), actor 1, squad 0 (trace 27777): Reorganise complete: known contact. Knowledge: actor memory at 105.00s, trace 27495. Next observer evidence: None.
<a id="trace-28119"></a>
<a id="trace-28121"></a>
<a id="trace-28180"></a>
<a id="trace-28182"></a>
<a id="trace-28209"></a>
<a id="trace-28211"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28371"></a>
<a id="trace-28373"></a>
<a id="trace-28424"></a>
<a id="trace-28426"></a>
<a id="trace-28460"></a>
<a id="trace-28462"></a>
<a id="trace-28521"></a>
<a id="trace-28523"></a>
- 108.75s–112.25s (×16), actor 5, squad 0 (trace 28119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 27498. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8920966471317401, 'next_transition': 28180}.
<a id="trace-28532"></a>
- 112.30s–112.30s (×1), actor 1, squad 0 (trace 28532): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 110.00s, trace 28234. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11119999999999983, 'next_transition': 30433}.
<a id="trace-28534"></a>
- 112.30s–112.30s (×1), actor 1, squad 0 (trace 28534): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 110.00s, trace 28234. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11119999999999983, 'next_transition': 30433}.
<a id="trace-30291"></a>
- 112.30s–112.30s (×1), actor 1, squad 0 (trace 30291): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 110.00s, trace 28234. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11119999999999983, 'next_transition': 30433}.
<a id="trace-30292"></a>
- 112.30s–112.30s (×1), actor 1, squad 0 (trace 30292): MoveTactically. Knowledge: actor memory at 110.00s, trace 28234. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11119999999999983, 'next_transition': 30433}.
<a id="trace-30293"></a>
- 112.30s–112.30s (×1), actor 1, squad 0 (trace 30293): contact cover complete: assessment resumes closure. Knowledge: actor memory at 110.00s, trace 28234. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11119999999999983, 'next_transition': 30433}.
<a id="trace-30433"></a>
<a id="trace-30435"></a>
<a id="trace-30476"></a>
<a id="trace-30478"></a>
<a id="trace-30529"></a>
<a id="trace-30531"></a>
<a id="trace-30575"></a>
<a id="trace-30577"></a>
<a id="trace-30611"></a>
<a id="trace-30613"></a>
<a id="trace-30732"></a>
<a id="trace-30734"></a>
<a id="trace-30782"></a>
<a id="trace-30784"></a>
<a id="trace-30842"></a>
<a id="trace-30844"></a>
<a id="trace-30894"></a>
<a id="trace-30896"></a>
<a id="trace-30956"></a>
<a id="trace-30958"></a>
<a id="trace-30992"></a>
<a id="trace-30994"></a>
<a id="trace-31045"></a>
<a id="trace-31047"></a>
<a id="trace-31099"></a>
<a id="trace-31101"></a>
<a id="trace-31149"></a>
<a id="trace-31151"></a>
- 112.75s–119.25s (×28), actor 5, squad 0 (trace 30433): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 28236. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4788996664689004, 'next_transition': 30476}.
<a id="trace-31196"></a>
- 119.65s–119.65s (×1), actor 1, squad 0 (trace 31196): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 30639. Next observer evidence: None.
<a id="trace-31332"></a>
<a id="trace-31334"></a>
<a id="trace-31455"></a>
<a id="trace-31457"></a>
<a id="trace-31559"></a>
<a id="trace-31561"></a>
<a id="trace-31607"></a>
<a id="trace-31609"></a>
<a id="trace-31636"></a>
<a id="trace-31638"></a>
<a id="trace-31666"></a>
<a id="trace-31668"></a>
<a id="trace-31687"></a>
<a id="trace-31689"></a>
<a id="trace-31704"></a>
<a id="trace-31706"></a>
<a id="trace-31714"></a>
<a id="trace-31716"></a>
<a id="trace-31737"></a>
<a id="trace-31739"></a>
<a id="trace-31748"></a>
<a id="trace-31750"></a>
<a id="trace-31828"></a>
<a id="trace-31830"></a>
<a id="trace-31844"></a>
<a id="trace-31846"></a>
<a id="trace-31868"></a>
<a id="trace-31870"></a>
- 119.75s–126.25s (×28), actor 5, squad 0 (trace 31332): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 30641. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28853747493087323, 'next_transition': 31455}.
<a id="trace-31462"></a>
- 120.25s–120.25s (×1), actor 8, squad 1 (trace 31462): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 31365. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.310383036978148, 'next_transition': 32719}.
<a id="trace-31463"></a>
- 120.25s–120.25s (×1), actor 8, squad 1 (trace 31463): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 31365. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.310383036978148, 'next_transition': 32719}.
<a id="trace-31873"></a>
- 126.25s–126.25s (×1), actor 1, squad 0 (trace 31873): matching received arrivals: deployment leg complete. Knowledge: actor memory at 125.00s, trace 31761. Next observer evidence: {'until': 126.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14674399204446545, 'next_transition': 31880}.
<a id="trace-31880"></a>
- 126.50s–126.50s (×1), actor 1, squad 0 (trace 31880): Reorganise: completed/failed drill. Knowledge: actor memory at 125.00s, trace 31761. Next observer evidence: {'until': 126.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30468914006664993, 'next_transition': 32242}.
<a id="trace-31884"></a>
- 126.50s–126.50s (×1), actor 1, squad 0 (trace 31884): MoveTactically. Knowledge: actor memory at 125.00s, trace 31761. Next observer evidence: {'until': 126.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30468914006664993, 'next_transition': 32242}.
<a id="trace-31885"></a>
- 126.50s–126.50s (×1), actor 1, squad 0 (trace 31885): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 125.00s, trace 31761. Next observer evidence: {'until': 126.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30468914006664993, 'next_transition': 32242}.
<a id="trace-32242"></a>
<a id="trace-32244"></a>
<a id="trace-32270"></a>
<a id="trace-32272"></a>
<a id="trace-32284"></a>
<a id="trace-32286"></a>
<a id="trace-32320"></a>
<a id="trace-32322"></a>
<a id="trace-32330"></a>
<a id="trace-32332"></a>
<a id="trace-32354"></a>
<a id="trace-32356"></a>
<a id="trace-32367"></a>
<a id="trace-32369"></a>
<a id="trace-32445"></a>
<a id="trace-32447"></a>
<a id="trace-32465"></a>
<a id="trace-32467"></a>
<a id="trace-32488"></a>
<a id="trace-32490"></a>
<a id="trace-32504"></a>
<a id="trace-32506"></a>
<a id="trace-32533"></a>
<a id="trace-32535"></a>
<a id="trace-32549"></a>
<a id="trace-32551"></a>
<a id="trace-32573"></a>
<a id="trace-32575"></a>
- 126.75s–133.30s (×28), actor 5, squad 0 (trace 32242): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 31763. Next observer evidence: {'until': 127.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9401638987441743, 'next_transition': 32270}.
<a id="trace-32719"></a>
- 136.30s–136.30s (×1), actor 8, squad 1 (trace 32719): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 32626. Next observer evidence: {'until': 136.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3112}.
<a id="trace-32741"></a>
- 136.30s–136.30s (×1), actor 8, squad 1 (trace 32741): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 32626. Next observer evidence: {'until': 136.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3112}.
<a id="trace-3111"></a>
- 136.70s–136.70s (×1), actor 6, squad 0 (events line 3111): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5651095579372012, 'next_transition': 32824}.
<a id="trace-3112"></a>
- 136.70s–136.70s (×1), actor 6, squad 1 (events line 3112): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.932880530179603, 'next_transition': 33410}.
<a id="trace-32802"></a>
- 136.70s–136.70s (×1), actor 6, squad 0 (trace 32802): renew committed intent (75 s lifetime). Knowledge: actor memory at 136.70s, trace 32802. Next observer evidence: {'until': 137.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5651095579372012, 'next_transition': 32824}.
<a id="trace-32803"></a>
- 136.70s–136.70s (×1), actor 6, squad 1 (trace 32803): renew committed intent (75 s lifetime). Knowledge: actor memory at 136.70s, trace 32803. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.932880530179603, 'next_transition': 33410}.
<a id="trace-32824"></a>
<a id="trace-32826"></a>
<a id="trace-32856"></a>
<a id="trace-32858"></a>
- 137.30s–138.30s (×4), actor 6, squad 0 (trace 32824): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 136.70s, trace 32803. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.544355901530653, 'next_transition': 32856}.
<a id="trace-32884"></a>
- 139.15s–139.15s (×1), actor 1, squad 0 (trace 32884): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 32622. Next observer evidence: {'until': 139.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1072139553649618, 'next_transition': 33238}.
<a id="trace-32885"></a>
- 139.15s–139.15s (×1), actor 1, squad 0 (trace 32885): received platoon directive. Knowledge: actor memory at 135.00s, trace 32622. Next observer evidence: {'until': 139.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1072139553649618, 'next_transition': 33238}.
<a id="trace-33238"></a>
<a id="trace-33240"></a>
<a id="trace-33340"></a>
<a id="trace-33342"></a>
<a id="trace-33380"></a>
<a id="trace-33382"></a>
<a id="trace-33422"></a>
<a id="trace-33424"></a>
- 139.30s–142.30s (×8), actor 6, squad 0 (trace 33238): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 136.70s, trace 32803. Next observer evidence: {'until': 140.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5054918487207379, 'next_transition': 33340}.
<a id="trace-33410"></a>
- 141.80s–141.80s (×1), actor 8, squad 1 (trace 33410): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 140.00s, trace 33279. Next observer evidence: {'until': 146, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4742048429238055, 'next_transition': 3219}.
<a id="trace-33457"></a>
- 142.85s–142.85s (×1), actor 1, squad 0 (trace 33457): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 140.00s, trace 33275. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6107477461397436, 'next_transition': 3187}.
<a id="trace-3187"></a>
- 143.25s–143.25s (×1), actor 6, squad 0 (events line 3187): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33465"></a>
- 143.25s–143.25s (×1), actor 6, squad 0 (trace 33465): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.417854 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 143.25s, trace 33465. Next observer evidence: None.
<a id="trace-33466"></a>
- 143.25s–143.25s (×1), actor 6, squad 0 (trace 33466): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.417854 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 143.25s, trace 33466. Next observer evidence: None.
<a id="trace-33468"></a>
<a id="trace-33470"></a>
<a id="trace-33514"></a>
<a id="trace-33604"></a>
<a id="trace-33606"></a>
- 143.30s–145.30s (×5), actor 6, squad 0 (trace 33468): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 143.25s, trace 33466. Next observer evidence: {'until': 144.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0351108005573626, 'next_transition': 33514}.
<a id="trace-33617"></a>
- 145.95s–145.95s (×1), actor 1, squad 0 (trace 33617): Withdraw to received rally. Knowledge: actor memory at 145.00s, trace 33539. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30091095074419905, 'next_transition': 33903}.
<a id="trace-33618"></a>
- 145.95s–145.95s (×1), actor 1, squad 0 (trace 33618): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 33539. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30091095074419905, 'next_transition': 33903}.
<a id="trace-3219"></a>
- 146.05s–146.05s (×1), actor 6, squad 1 (events line 3219): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34222}.
<a id="trace-33895"></a>
- 146.05s–146.05s (×1), actor 6, squad 1 (trace 33895): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.418142 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 146.05s, trace 33895. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34222}.
<a id="trace-33896"></a>
- 146.05s–146.05s (×1), actor 6, squad 1 (trace 33896): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.418142 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 146.05s, trace 33896. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34222}.
<a id="trace-33903"></a>
- 146.20s–146.20s (×1), actor 1, squad 0 (trace 33903): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 145.00s, trace 33539. Next observer evidence: None.
<a id="trace-33908"></a>
<a id="trace-33910"></a>
- 146.30s–146.30s (×2), actor 6, squad 0 (trace 33908): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 146.05s, trace 33896. Next observer evidence: {'until': 146.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120335449688638, 'next_transition': 33921}.
<a id="trace-33921"></a>
- 146.45s–146.45s (×1), actor 1, squad 0 (trace 33921): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 33539. Next observer evidence: {'until': 147.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6047965856752539, 'next_transition': 34198}.
<a id="trace-33924"></a>
- 146.45s–146.45s (×1), actor 1, squad 0 (trace 33924): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 33539. Next observer evidence: {'until': 147.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6047965856752539, 'next_transition': 34198}.
<a id="trace-33925"></a>
- 146.45s–146.45s (×1), actor 1, squad 0 (trace 33925): Reorganise complete: known contact. Knowledge: actor memory at 145.00s, trace 33539. Next observer evidence: {'until': 147.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6047965856752539, 'next_transition': 34198}.
<a id="trace-34198"></a>
<a id="trace-34200"></a>
<a id="trace-34307"></a>
<a id="trace-34309"></a>
- 147.30s–148.30s (×4), actor 6, squad 0 (trace 34198): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 146.05s, trace 33896. Next observer evidence: {'until': 148.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3847366254005375, 'next_transition': 34307}.
<a id="trace-34222"></a>
- 147.95s–147.95s (×1), actor 8, squad 1 (trace 34222): Withdraw to received rally. Knowledge: actor memory at 145.00s, trace 33542. Next observer evidence: {'until': 163.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 15.26849904529257, 'next_transition': 35162}.
<a id="trace-34223"></a>
- 147.95s–147.95s (×1), actor 8, squad 1 (trace 34223): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 33542. Next observer evidence: {'until': 163.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 15.26849904529257, 'next_transition': 35162}.
<a id="trace-3253"></a>
- 148.85s–148.85s (×1), actor 6, squad 0 (events line 3253): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-34336"></a>
- 148.85s–148.85s (×1), actor 6, squad 0 (trace 34336): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.335649 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 148.85s, trace 34336. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6996073216534614, 'next_transition': 34352}.
<a id="trace-34337"></a>
- 148.85s–148.85s (×1), actor 6, squad 0 (trace 34337): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.335649 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 148.85s, trace 34337. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6996073216534614, 'next_transition': 34352}.
<a id="trace-34352"></a>
<a id="trace-34354"></a>
- 149.30s–149.30s (×2), actor 6, squad 0 (trace 34352): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 148.85s, trace 34337. Next observer evidence: {'until': 150.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7885603493239683, 'next_transition': 34442}.
<a id="trace-34442"></a>
- 150.20s–150.20s (×1), actor 1, squad 0 (trace 34442): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 34381. Next observer evidence: None.
<a id="trace-34443"></a>
- 150.20s–150.20s (×1), actor 1, squad 0 (trace 34443): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 34381. Next observer evidence: None.
<a id="trace-34619"></a>
<a id="trace-34621"></a>
- 150.30s–150.30s (×2), actor 6, squad 0 (trace 34619): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 150.00s, trace 34382. Next observer evidence: {'until': 151, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6434602181704357, 'next_transition': 34652}.
<a id="trace-34652"></a>
- 151.10s–151.10s (×1), actor 1, squad 0 (trace 34652): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 150.00s, trace 34381. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34972808453935, 'next_transition': 34658}.
<a id="trace-34658"></a>
<a id="trace-34660"></a>
<a id="trace-34683"></a>
<a id="trace-34706"></a>
<a id="trace-34708"></a>
<a id="trace-34737"></a>
<a id="trace-34739"></a>
<a id="trace-34818"></a>
<a id="trace-34820"></a>
<a id="trace-34845"></a>
<a id="trace-34847"></a>
<a id="trace-34875"></a>
<a id="trace-34877"></a>
<a id="trace-34900"></a>
<a id="trace-34902"></a>
<a id="trace-34930"></a>
<a id="trace-34932"></a>
- 151.30s–159.30s (×17), actor 6, squad 0 (trace 34658): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 150.00s, trace 34382. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7791893702979305, 'next_transition': 34683}.
<a id="trace-35053"></a>
- 162.25s–162.25s (×1), actor 1, squad 0 (trace 35053): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 34947. Next observer evidence: {'until': 163.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6624502409426686, 'next_transition': 35129}.
<a id="trace-35054"></a>
- 162.25s–162.25s (×1), actor 1, squad 0 (trace 35054): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 34947. Next observer evidence: {'until': 163.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6624502409426686, 'next_transition': 35129}.
<a id="trace-35129"></a>
<a id="trace-35131"></a>
<a id="trace-35219"></a>
<a id="trace-35221"></a>
- 163.30s–164.30s (×4), actor 1, squad 0 (trace 35129): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 34947. Next observer evidence: {'until': 164.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.26066208968701177, 'next_transition': 35219}.
<a id="trace-35162"></a>
- 163.90s–163.90s (×1), actor 8, squad 1 (trace 35162): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 34950. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.850500196942952, 'next_transition': 3355}.
<a id="trace-35163"></a>
- 163.90s–163.90s (×1), actor 8, squad 1 (trace 35163): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 34950. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.850500196942952, 'next_transition': 3355}.
<a id="trace-3354"></a>
- 165.20s–165.20s (×1), actor 1, squad 0 (events line 3354): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3355"></a>
- 165.20s–165.20s (×1), actor 1, squad 1 (events line 3355): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.149480063680787, 'next_transition': 35797}.
<a id="trace-35313"></a>
- 165.20s–165.20s (×1), actor 1, squad 0 (trace 35313): renew committed intent (75 s lifetime). Knowledge: actor memory at 165.20s, trace 35313. Next observer evidence: None.
<a id="trace-35314"></a>
- 165.20s–165.20s (×1), actor 1, squad 1 (trace 35314): renew committed intent (75 s lifetime). Knowledge: actor memory at 165.20s, trace 35314. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.149480063680787, 'next_transition': 35797}.
<a id="trace-35321"></a>
<a id="trace-35323"></a>
<a id="trace-35333"></a>
<a id="trace-35351"></a>
<a id="trace-35357"></a>
<a id="trace-35359"></a>
<a id="trace-35377"></a>
<a id="trace-35386"></a>
<a id="trace-35389"></a>
<a id="trace-35391"></a>
<a id="trace-35405"></a>
<a id="trace-35415"></a>
<a id="trace-35418"></a>
<a id="trace-35420"></a>
<a id="trace-35432"></a>
<a id="trace-35440"></a>
<a id="trace-35443"></a>
<a id="trace-35445"></a>
<a id="trace-35457"></a>
<a id="trace-35483"></a>
<a id="trace-35533"></a>
<a id="trace-35544"></a>
<a id="trace-35555"></a>
<a id="trace-35558"></a>
<a id="trace-35560"></a>
<a id="trace-35582"></a>
<a id="trace-35584"></a>
<a id="trace-35602"></a>
<a id="trace-35604"></a>
<a id="trace-35626"></a>
<a id="trace-35628"></a>
<a id="trace-35709"></a>
<a id="trace-35711"></a>
<a id="trace-35731"></a>
<a id="trace-35733"></a>
<a id="trace-35755"></a>
<a id="trace-35757"></a>
<a id="trace-35778"></a>
- 165.30s–178.30s (×38), actor 1, squad 0 (trace 35321): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.20s, trace 35314. Next observer evidence: {'until': 165.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4130354180031053, 'next_transition': 35333}.
<a id="trace-35797"></a>
- 178.90s–178.90s (×1), actor 8, squad 1 (trace 35797): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 35649. Next observer evidence: {'until': 192.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.018374153469585, 'next_transition': 36536}.
<a id="trace-35798"></a>
- 178.90s–178.90s (×1), actor 8, squad 1 (trace 35798): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 35649. Next observer evidence: {'until': 192.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.018374153469585, 'next_transition': 36536}.
<a id="trace-35853"></a>
- 179.05s–179.05s (×1), actor 1, squad 0 (trace 35853): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 175.00s, trace 35647. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35951}.
<a id="trace-35895"></a>
- 179.05s–179.05s (×1), actor 1, squad 0 (trace 35895): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 175.00s, trace 35647. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35951}.
<a id="trace-35951"></a>
<a id="trace-35953"></a>
<a id="trace-36041"></a>
<a id="trace-36076"></a>
<a id="trace-36078"></a>
<a id="trace-36104"></a>
<a id="trace-36106"></a>
<a id="trace-36124"></a>
<a id="trace-36144"></a>
<a id="trace-36146"></a>
<a id="trace-36230"></a>
<a id="trace-36232"></a>
<a id="trace-36257"></a>
<a id="trace-36259"></a>
<a id="trace-36291"></a>
<a id="trace-36293"></a>
<a id="trace-36312"></a>
<a id="trace-36328"></a>
<a id="trace-36330"></a>
<a id="trace-36410"></a>
<a id="trace-36412"></a>
- 179.30s–190.30s (×21), actor 1, squad 0 (trace 35951): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 175.00s, trace 35647. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087800402981167, 'next_transition': 36041}.
<a id="trace-36427"></a>
- 191.05s–191.05s (×1), actor 1, squad 0 (trace 36427): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 190.00s, trace 36347. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36487}.
<a id="trace-36428"></a>
- 191.05s–191.05s (×1), actor 1, squad 0 (trace 36428): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 190.00s, trace 36347. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36487}.
<a id="trace-36487"></a>
<a id="trace-36489"></a>
<a id="trace-36516"></a>
<a id="trace-36605"></a>
<a id="trace-36607"></a>
<a id="trace-36636"></a>
<a id="trace-36638"></a>
<a id="trace-36732"></a>
<a id="trace-36734"></a>
<a id="trace-36752"></a>
<a id="trace-36754"></a>
<a id="trace-36770"></a>
<a id="trace-36772"></a>
<a id="trace-36792"></a>
<a id="trace-36794"></a>
<a id="trace-36822"></a>
<a id="trace-36824"></a>
- 191.30s–199.30s (×17), actor 1, squad 0 (trace 36487): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 190.00s, trace 36347. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36516}.
<a id="trace-36536"></a>
- 192.70s–192.70s (×1), actor 8, squad 1 (trace 36536): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 190.00s, trace 36349. Next observer evidence: {'until': 199.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.200810288606411, 'next_transition': 36837}.
<a id="trace-36537"></a>
- 192.70s–192.70s (×1), actor 8, squad 1 (trace 36537): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 190.00s, trace 36349. Next observer evidence: {'until': 199.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.200810288606411, 'next_transition': 36837}.
<a id="trace-36837"></a>
- 199.60s–199.60s (×1), actor 8, squad 1 (trace 36837): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 195.00s, trace 36669. Next observer evidence: {'until': 222, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056692702352240484, 'next_transition': 3547}.
<a id="trace-36849"></a>
- 199.80s–199.80s (×1), actor 1, squad 0 (trace 36849): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 195.00s, trace 36667. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536218055825772, 'next_transition': 36919}.
<a id="trace-36919"></a>
<a id="trace-36921"></a>
<a id="trace-36967"></a>
<a id="trace-36969"></a>
<a id="trace-37002"></a>
<a id="trace-37004"></a>
<a id="trace-37019"></a>
<a id="trace-37021"></a>
<a id="trace-37036"></a>
<a id="trace-37038"></a>
<a id="trace-37113"></a>
<a id="trace-37115"></a>
<a id="trace-37134"></a>
<a id="trace-37136"></a>
<a id="trace-37160"></a>
<a id="trace-37162"></a>
<a id="trace-37183"></a>
<a id="trace-37185"></a>
<a id="trace-37201"></a>
<a id="trace-37203"></a>
<a id="trace-37276"></a>
<a id="trace-37294"></a>
<a id="trace-37296"></a>
<a id="trace-37314"></a>
<a id="trace-37316"></a>
<a id="trace-37334"></a>
<a id="trace-37336"></a>
<a id="trace-37361"></a>
<a id="trace-37363"></a>
<a id="trace-37440"></a>
<a id="trace-37442"></a>
<a id="trace-37464"></a>
<a id="trace-37466"></a>
<a id="trace-37480"></a>
<a id="trace-37482"></a>
<a id="trace-37497"></a>
<a id="trace-37499"></a>
<a id="trace-37518"></a>
<a id="trace-37520"></a>
<a id="trace-37598"></a>
<a id="trace-37600"></a>
<a id="trace-37624"></a>
<a id="trace-37626"></a>
- 200.30s–221.30s (×43), actor 1, squad 0 (trace 36919): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 200.00s, trace 36856. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7937866369497559, 'next_transition': 36967}.
<a id="trace-3546"></a>
- 222.15s–222.15s (×1), actor 1, squad 0 (events line 3546): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3547"></a>
- 222.15s–222.15s (×1), actor 1, squad 1 (events line 3547): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-37642"></a>
- 222.15s–222.15s (×1), actor 1, squad 0 (trace 37642): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500013 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 222.15s, trace 37642. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37649}.
<a id="trace-37643"></a>
- 222.15s–222.15s (×1), actor 1, squad 0 (trace 37643): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500013 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 222.15s, trace 37643. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37649}.
<a id="trace-37644"></a>
- 222.15s–222.15s (×1), actor 1, squad 1 (trace 37644): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500013 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 222.15s, trace 37644. Next observer evidence: {'until': 224, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37682}.
<a id="trace-37645"></a>
- 222.15s–222.15s (×1), actor 1, squad 1 (trace 37645): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500013 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 222.15s, trace 37645. Next observer evidence: {'until': 224, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37682}.
<a id="trace-37649"></a>
<a id="trace-37651"></a>
<a id="trace-37666"></a>
<a id="trace-37668"></a>
<a id="trace-37739"></a>
<a id="trace-37741"></a>
- 222.30s–224.30s (×6), actor 1, squad 0 (trace 37649): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 222.15s, trace 37645. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37666}.
<a id="trace-37682"></a>
- 224.05s–224.05s (×1), actor 8, squad 1 (trace 37682): MoveTactically. Knowledge: actor memory at 220.00s, trace 37536. Next observer evidence: {'until': 243.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.000018030382495, 'next_transition': 38675}.
<a id="trace-37683"></a>
- 224.05s–224.05s (×1), actor 8, squad 1 (trace 37683): traveling overwatch. Knowledge: actor memory at 220.00s, trace 37536. Next observer evidence: {'until': 243.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.000018030382495, 'next_transition': 38675}.
<a id="trace-37684"></a>
- 224.05s–224.05s (×1), actor 8, squad 1 (trace 37684): received platoon directive. Knowledge: actor memory at 220.00s, trace 37536. Next observer evidence: {'until': 243.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.000018030382495, 'next_transition': 38675}.
<a id="trace-37760"></a>
- 224.85s–224.85s (×1), actor 1, squad 0 (trace 37760): MoveTactically. Knowledge: actor memory at 222.15s, trace 37645. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37829}.
<a id="trace-37761"></a>
- 224.85s–224.85s (×1), actor 1, squad 0 (trace 37761): received platoon directive. Knowledge: actor memory at 222.15s, trace 37645. Next observer evidence: {'until': 225.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37829}.
<a id="trace-37829"></a>
<a id="trace-37831"></a>
- 225.30s–225.30s (×2), actor 1, squad 0 (trace 37829): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 225.00s, trace 37767. Next observer evidence: {'until': 225.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37854}.
<a id="trace-37854"></a>
- 225.85s–225.85s (×1), actor 1, squad 0 (trace 37854): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 37767. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37921}.
<a id="trace-37921"></a>
<a id="trace-37923"></a>
<a id="trace-37951"></a>
<a id="trace-37953"></a>
<a id="trace-37981"></a>
<a id="trace-37983"></a>
<a id="trace-38005"></a>
<a id="trace-38007"></a>
<a id="trace-38086"></a>
<a id="trace-38088"></a>
- 226.30s–230.30s (×10), actor 1, squad 0 (trace 37921): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 225.00s, trace 37767. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1133823619439989, 'next_transition': 37951}.
<a id="trace-38111"></a>
- 231.25s–231.25s (×1), actor 1, squad 0 (trace 38111): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 230.00s, trace 38026. Next observer evidence: None.
<a id="trace-38116"></a>
<a id="trace-38118"></a>
- 231.30s–231.30s (×2), actor 1, squad 0 (trace 38116): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 38026. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38138}.
<a id="trace-38138"></a>
- 232.25s–232.25s (×1), actor 1, squad 0 (trace 38138): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 230.00s, trace 38026. Next observer evidence: None.
<a id="trace-38193"></a>
<a id="trace-38195"></a>
<a id="trace-38224"></a>
<a id="trace-38226"></a>
<a id="trace-38252"></a>
<a id="trace-38339"></a>
<a id="trace-38341"></a>
<a id="trace-38362"></a>
<a id="trace-38364"></a>
<a id="trace-38387"></a>
<a id="trace-38389"></a>
<a id="trace-38413"></a>
<a id="trace-38415"></a>
<a id="trace-38435"></a>
<a id="trace-38437"></a>
<a id="trace-38522"></a>
<a id="trace-38524"></a>
<a id="trace-38554"></a>
<a id="trace-38556"></a>
- 232.30s–241.30s (×19), actor 1, squad 0 (trace 38193): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 38026. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937111234458584, 'next_transition': 38224}.
<a id="trace-38575"></a>
- 242.05s–242.05s (×1), actor 1, squad 0 (trace 38575): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 240.00s, trace 38460. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38580}.
<a id="trace-38580"></a>
<a id="trace-38582"></a>
- 242.30s–242.30s (×2), actor 1, squad 0 (trace 38580): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 240.00s, trace 38460. Next observer evidence: {'until': 243, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38605}.
<a id="trace-38605"></a>
- 243.05s–243.05s (×1), actor 1, squad 0 (trace 38605): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 240.00s, trace 38460. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38662}.
<a id="trace-38662"></a>
<a id="trace-38664"></a>
<a id="trace-38745"></a>
<a id="trace-38747"></a>
<a id="trace-38834"></a>
<a id="trace-38836"></a>
<a id="trace-38871"></a>
<a id="trace-38873"></a>
<a id="trace-38898"></a>
<a id="trace-38919"></a>
<a id="trace-38921"></a>
<a id="trace-38944"></a>
<a id="trace-38946"></a>
<a id="trace-39033"></a>
<a id="trace-39035"></a>
<a id="trace-39059"></a>
<a id="trace-39061"></a>
<a id="trace-39083"></a>
<a id="trace-39085"></a>
<a id="trace-39111"></a>
<a id="trace-39113"></a>
<a id="trace-39134"></a>
<a id="trace-39136"></a>
<a id="trace-39271"></a>
<a id="trace-39273"></a>
<a id="trace-39303"></a>
<a id="trace-39305"></a>
- 243.30s–256.30s (×27), actor 1, squad 0 (trace 38662): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 240.00s, trace 38460. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38745}.
<a id="trace-38675"></a>
- 243.70s–243.70s (×1), actor 8, squad 1 (trace 38675): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 240.00s, trace 38462. Next observer evidence: None.
<a id="trace-38679"></a>
- 243.75s–243.75s (×1), actor 8, squad 1 (trace 38679): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 240.00s, trace 38462. Next observer evidence: {'until': 253, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.185279317064888, 'next_transition': 3679}.
<a id="trace-3679"></a>
- 253.10s–253.10s (×1), actor 1, squad 1 (events line 3679): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39103"></a>
- 253.10s–253.10s (×1), actor 1, squad 1 (trace 39103): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.755451 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 253.10s, trace 39103. Next observer evidence: {'until': 255, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2679343173304236, 'next_transition': 39168}.
<a id="trace-39104"></a>
- 253.10s–253.10s (×1), actor 1, squad 1 (trace 39104): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.755451 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 253.10s, trace 39104. Next observer evidence: {'until': 255, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2679343173304236, 'next_transition': 39168}.
<a id="trace-39168"></a>
- 255.00s–255.00s (×1), actor 8, squad 1 (trace 39168): received platoon directive. Knowledge: actor memory at 255.00s, trace 39157. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.414953840632224, 'next_transition': 3724}.
<a id="trace-39311"></a>
- 256.45s–256.45s (×1), actor 1, squad 0 (trace 39311): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 255.00s, trace 39155. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39450}.
<a id="trace-39450"></a>
<a id="trace-39452"></a>
<a id="trace-39484"></a>
<a id="trace-39486"></a>
<a id="trace-39511"></a>
<a id="trace-39513"></a>
<a id="trace-39594"></a>
<a id="trace-39596"></a>
<a id="trace-39619"></a>
<a id="trace-39621"></a>
<a id="trace-39643"></a>
<a id="trace-39645"></a>
<a id="trace-39668"></a>
<a id="trace-39670"></a>
<a id="trace-39696"></a>
<a id="trace-39698"></a>
<a id="trace-39785"></a>
<a id="trace-39787"></a>
<a id="trace-39919"></a>
<a id="trace-39921"></a>
- 257.30s–266.30s (×20), actor 1, squad 0 (trace 39450): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 255.00s, trace 39155. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5669988127192154, 'next_transition': 39484}.
<a id="trace-3724"></a>
- 264.30s–264.30s (×1), actor 1, squad 1 (events line 3724): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39703"></a>
- 264.30s–264.30s (×1), actor 1, squad 1 (trace 39703): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.965511 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 264.30s, trace 39703. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.267999885890649, 'next_transition': 39809}.
<a id="trace-39704"></a>
- 264.30s–264.30s (×1), actor 1, squad 1 (trace 39704): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.965511 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 264.30s, trace 39704. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.267999885890649, 'next_transition': 39809}.
<a id="trace-39809"></a>
- 266.20s–266.20s (×1), actor 8, squad 1 (trace 39809): traveling. Knowledge: actor memory at 265.00s, trace 39725. Next observer evidence: {'until': 267, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1906882029578605, 'next_transition': 3767}.
<a id="trace-39810"></a>
- 266.20s–266.20s (×1), actor 8, squad 1 (trace 39810): received platoon directive. Knowledge: actor memory at 265.00s, trace 39725. Next observer evidence: {'until': 267, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1906882029578605, 'next_transition': 3767}.
<a id="trace-39934"></a>
- 266.45s–266.45s (×1), actor 1, squad 0 (trace 39934): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 39723. Next observer evidence: {'until': 267, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3766}.
<a id="trace-3766"></a>
- 267.10s–267.10s (×1), actor 1, squad 0 (events line 3766): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3767"></a>
- 267.10s–267.10s (×1), actor 1, squad 1 (events line 3767): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-40004"></a>
- 267.10s–267.10s (×1), actor 1, squad 0 (trace 40004): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 267.10s, trace 40004. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07872868362293331, 'next_transition': 40017}.
<a id="trace-40005"></a>
- 267.10s–267.10s (×1), actor 1, squad 0 (trace 40005): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 267.10s, trace 40005. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07872868362293331, 'next_transition': 40017}.
<a id="trace-40006"></a>
- 267.10s–267.10s (×1), actor 1, squad 1 (trace 40006): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 267.10s, trace 40006. Next observer evidence: {'until': 269, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.922275139221056, 'next_transition': 40081}.
<a id="trace-40007"></a>
- 267.10s–267.10s (×1), actor 1, squad 1 (trace 40007): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 267.10s, trace 40007. Next observer evidence: {'until': 269, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.922275139221056, 'next_transition': 40081}.
<a id="trace-40017"></a>
<a id="trace-40019"></a>
<a id="trace-40049"></a>
<a id="trace-40051"></a>
- 267.30s–268.30s (×4), actor 1, squad 0 (trace 40017): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 267.10s, trace 40007. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1663511137124396, 'next_transition': 40049}.
<a id="trace-40081"></a>
- 269.00s–269.00s (×1), actor 8, squad 1 (trace 40081): received platoon directive. Knowledge: actor memory at 265.00s, trace 39725. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.768151749678914, 'next_transition': 41257}.
<a id="trace-40172"></a>
- 269.15s–269.15s (×1), actor 1, squad 0 (trace 40172): traveling overwatch. Knowledge: actor memory at 267.10s, trace 40007. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300293961395764, 'next_transition': 40229}.
<a id="trace-40173"></a>
- 269.15s–269.15s (×1), actor 1, squad 0 (trace 40173): received platoon directive. Knowledge: actor memory at 267.10s, trace 40007. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300293961395764, 'next_transition': 40229}.
<a id="trace-40229"></a>
<a id="trace-40231"></a>
<a id="trace-40321"></a>
<a id="trace-40323"></a>
<a id="trace-40349"></a>
<a id="trace-40351"></a>
<a id="trace-40378"></a>
<a id="trace-40380"></a>
<a id="trace-40406"></a>
<a id="trace-40408"></a>
<a id="trace-40429"></a>
<a id="trace-40513"></a>
<a id="trace-40515"></a>
<a id="trace-40535"></a>
<a id="trace-40537"></a>
<a id="trace-40558"></a>
<a id="trace-40560"></a>
<a id="trace-40585"></a>
<a id="trace-40587"></a>
<a id="trace-40610"></a>
<a id="trace-40612"></a>
<a id="trace-40695"></a>
<a id="trace-40697"></a>
<a id="trace-40722"></a>
<a id="trace-40724"></a>
- 269.30s–281.30s (×25), actor 1, squad 0 (trace 40229): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 267.10s, trace 40007. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1297379423204115, 'next_transition': 40321}.
<a id="trace-40731"></a>
- 281.30s–281.30s (×1), actor 1, squad 0 (trace 40731): ReactToContact: cover and return fire. Knowledge: actor memory at 280.00s, trace 40633. Next observer evidence: None.
<a id="trace-40732"></a>
- 281.30s–281.30s (×1), actor 1, squad 0 (trace 40732): bounding overwatch. Knowledge: actor memory at 280.00s, trace 40633. Next observer evidence: None.
<a id="trace-40733"></a>
- 281.30s–281.30s (×1), actor 1, squad 0 (trace 40733): new contact inside 100 m. Knowledge: actor memory at 280.00s, trace 40633. Next observer evidence: None.
<a id="trace-40859"></a>
- 281.35s–281.35s (×1), actor 1, squad 0 (trace 40859): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 281.35s, trace 40859. Next observer evidence: None.
<a id="trace-40860"></a>
<a id="trace-40985"></a>
<a id="trace-41112"></a>
- 281.35s–281.50s (×3), actor 1, squad 0 (trace 40860): new contact inside 100 m. Knowledge: actor memory at 281.35s, trace 40859. Next observer evidence: None.
<a id="trace-41257"></a>
- 282.25s–282.25s (×1), actor 8, squad 1 (trace 41257): ReactToContact: cover and return fire. Knowledge: actor memory at 280.00s, trace 40634. Next observer evidence: {'until': 282.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536014725780769, 'next_transition': 41582}.
<a id="trace-41258"></a>
- 282.25s–282.25s (×1), actor 8, squad 1 (trace 41258): bounding overwatch. Knowledge: actor memory at 280.00s, trace 40634. Next observer evidence: {'until': 282.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536014725780769, 'next_transition': 41582}.
<a id="trace-41259"></a>
<a id="trace-41582"></a>
<a id="trace-41767"></a>
<a id="trace-41958"></a>
<a id="trace-42142"></a>
<a id="trace-42330"></a>
<a id="trace-42513"></a>
- 282.25s–283.05s (×7), actor 8, squad 1 (trace 41259): new contact inside 100 m. Knowledge: actor memory at 280.00s, trace 40634. Next observer evidence: {'until': 282.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536014725780769, 'next_transition': 41582}.
<a id="trace-41443"></a>
- 282.30s–282.30s (×1), actor 1, squad 0 (trace 41443): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 281.35s, trace 40859. Next observer evidence: {'until': 282.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47157600490270835, 'next_transition': 41451}.
<a id="trace-41451"></a>
- 282.45s–282.45s (×1), actor 1, squad 0 (trace 41451): new contact inside 100 m. Knowledge: actor memory at 281.35s, trace 40859. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8581597892538742, 'next_transition': 42706}.
<a id="trace-42706"></a>
<a id="trace-42708"></a>
- 283.30s–283.30s (×2), actor 1, squad 0 (trace 42706): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 281.35s, trace 40859. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7782931546017865, 'next_transition': 42761}.
<a id="trace-42761"></a>
- 283.90s–283.90s (×1), actor 1, squad 0 (trace 42761): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.278172 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 283.90s, trace 42761. Next observer evidence: None.
<a id="trace-42762"></a>
- 283.90s–283.90s (×1), actor 1, squad 0 (trace 42762): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.278172 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 283.90s, trace 42762. Next observer evidence: None.
<a id="trace-42763"></a>
- 283.90s–283.90s (×1), actor 1, squad 1 (trace 42763): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.278172 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 283.90s, trace 42763. Next observer evidence: None.
<a id="trace-42764"></a>
- 283.90s–283.90s (×1), actor 1, squad 1 (trace 42764): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.278172 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 283.90s, trace 42764. Next observer evidence: None.
<a id="trace-3901"></a>
- 283.90s–283.90s (×1), actor 1, squad 0 (events line 3901): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5494750426543504, 'next_transition': 42798}.
<a id="trace-3902"></a>
- 283.90s–283.90s (×1), actor 1, squad 1 (events line 3902): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 285, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6839193803448818, 'next_transition': 42884}.
<a id="trace-42798"></a>
<a id="trace-42800"></a>
- 284.30s–284.30s (×2), actor 1, squad 0 (trace 42798): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 283.90s, trace 42764. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3306114483801189, 'next_transition': None}.
<a id="trace-42884"></a>
- 285.15s–285.15s (×1), actor 8, squad 1 (trace 42884): new contact inside 100 m. Knowledge: actor memory at 285.00s, trace 42854. Next observer evidence: {'until': 288.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.512693800681039, 'next_transition': 43224}.
<a id="trace-43224"></a>
- 288.30s–288.30s (×1), actor 8, squad 1 (trace 43224): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 285.00s, trace 42854. Next observer evidence: {'until': 288.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4047418648656381, 'next_transition': 43232}.
<a id="trace-43232"></a>
- 288.50s–288.50s (×1), actor 8, squad 1 (trace 43232): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 285.00s, trace 42854. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5333606301569254, 'next_transition': 43426}.
<a id="trace-43233"></a>
- 288.50s–288.50s (×1), actor 8, squad 1 (trace 43233): rearward bound: one stationary suppressing element. Knowledge: actor memory at 285.00s, trace 42854. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5333606301569254, 'next_transition': 43426}.
<a id="trace-43426"></a>
- 289.30s–289.30s (×1), actor 8, squad 1 (trace 43426): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 285.00s, trace 42854. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11952990957060199, 'next_transition': 3973}.
<a id="trace-3973"></a>
- 290.30s–290.30s (×1), actor 8, squad 1 (events line 3973): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-43549"></a>
- 290.30s–290.30s (×1), actor 8, squad 1 (trace 43549): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 290.00s, trace 43476. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1359170812005994, 'next_transition': 43664}.
<a id="trace-43556"></a>
- 290.30s–290.30s (×1), actor 8, squad 1 (trace 43556): renew committed intent (75 s lifetime). Knowledge: actor memory at 290.30s, trace 43556. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1359170812005994, 'next_transition': 43664}.
<a id="trace-43664"></a>
- 291.30s–291.30s (×1), actor 8, squad 1 (trace 43664): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 290.30s, trace 43556. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 4.457516803926094, 'next_transition': 43824}.
<a id="trace-43824"></a>
<a id="trace-43842"></a>
- 295.30s–296.30s (×2), actor 9, squad 1 (trace 43824): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 295.00s, trace 43767. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.191314114042077, 'next_transition': 43842}.
<a id="trace-4018"></a>
- 296.95s–296.95s (×1), actor 9, squad 1 (events line 4018): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-43857"></a>
- 296.95s–296.95s (×1), actor 9, squad 1 (trace 43857): renew committed intent (75 s lifetime). Knowledge: actor memory at 296.95s, trace 43857. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8795771314103152, 'next_transition': 43863}.
<a id="trace-43863"></a>
<a id="trace-43880"></a>
<a id="trace-43898"></a>
<a id="trace-43973"></a>
<a id="trace-43992"></a>
<a id="trace-44011"></a>
<a id="trace-44027"></a>
<a id="trace-44042"></a>
<a id="trace-44113"></a>
- 297.30s–305.30s (×9), actor 9, squad 1 (trace 43863): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 296.95s, trace 43857. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1772242281400422, 'next_transition': 43880}.
<a id="trace-44150"></a>
- 307.20s–307.20s (×1), actor 9, squad 1 (trace 44150): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 305.00s, trace 44057. Next observer evidence: None.
<a id="trace-44151"></a>
- 307.20s–307.20s (×1), actor 9, squad 1 (trace 44151): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 305.00s, trace 44057. Next observer evidence: None.
<a id="trace-44155"></a>
<a id="trace-44173"></a>
<a id="trace-44190"></a>
<a id="trace-44259"></a>
<a id="trace-44278"></a>
<a id="trace-44294"></a>
<a id="trace-44321"></a>
<a id="trace-44339"></a>
- 307.30s–314.30s (×8), actor 9, squad 1 (trace 44155): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 305.00s, trace 44057. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 44173}.
<a id="trace-44344"></a>
- 314.40s–314.40s (×1), actor 9, squad 1 (trace 44344): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 310.00s, trace 44203. Next observer evidence: {'until': 314.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 44347}.
<a id="trace-44347"></a>
- 314.45s–314.45s (×1), actor 9, squad 1 (trace 44347): MoveTactically. Knowledge: actor memory at 310.00s, trace 44203. Next observer evidence: None.
<a id="trace-44348"></a>
- 314.45s–314.45s (×1), actor 9, squad 1 (trace 44348): received platoon directive. Knowledge: actor memory at 310.00s, trace 44203. Next observer evidence: None.
<a id="trace-44353"></a>
- 314.50s–314.50s (×1), actor 9, squad 1 (trace 44353): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 310.00s, trace 44203. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 44423}.
<a id="trace-44423"></a>
<a id="trace-44445"></a>
<a id="trace-44457"></a>
<a id="trace-44481"></a>
<a id="trace-44506"></a>
<a id="trace-44578"></a>
<a id="trace-44598"></a>
<a id="trace-44610"></a>
<a id="trace-44623"></a>
<a id="trace-44647"></a>
<a id="trace-44720"></a>
<a id="trace-44739"></a>
<a id="trace-44770"></a>
<a id="trace-44787"></a>
<a id="trace-44859"></a>
<a id="trace-44879"></a>
<a id="trace-44898"></a>
<a id="trace-44919"></a>
<a id="trace-44935"></a>
<a id="trace-45011"></a>
<a id="trace-45022"></a>
<a id="trace-45038"></a>
<a id="trace-45054"></a>
<a id="trace-45085"></a>
<a id="trace-45156"></a>
<a id="trace-45172"></a>
<a id="trace-45190"></a>
<a id="trace-45202"></a>
<a id="trace-45222"></a>
<a id="trace-45301"></a>
<a id="trace-45324"></a>
<a id="trace-45339"></a>
<a id="trace-45352"></a>
<a id="trace-45372"></a>
<a id="trace-45441"></a>
<a id="trace-45460"></a>
<a id="trace-45487"></a>
<a id="trace-45504"></a>
<a id="trace-45521"></a>
<a id="trace-45595"></a>
<a id="trace-45614"></a>
<a id="trace-45628"></a>
- 315.30s–357.30s (×42), actor 9, squad 1 (trace 44423): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 315.00s, trace 44367. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 44445}.
<a id="trace-4189"></a>
- 358.55s–358.55s (×1), actor 9, squad 1 (events line 4189): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-45652"></a>
- 358.55s–358.55s (×1), actor 9, squad 1 (trace 45652): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.55s, trace 45652. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 45668}.
<a id="trace-45668"></a>
- 359.30s–359.30s (×1), actor 9, squad 1 (trace 45668): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 358.55s, trace 45652. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

279 matched order/radio deliveries; 500 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.378s; maximum 1.850s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 3314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 3315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6248: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6249: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6250: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6258: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6259: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6260: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6261: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6262: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6263: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6264: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6265: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6266: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6267: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6601: estimate 9.86; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6602: estimate 9.86; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6603: estimate 9.86; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6604: estimate 9.86; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 7051: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7052: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7053: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7056: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7057: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7059: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7061: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7062: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7063: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7064: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7065: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7066: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7067: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7068: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7069: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7070: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 11583: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11584: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11585: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11588: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11589: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11591: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11593: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11594: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11595: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11596: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11597: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11598: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11599: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11600: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11601: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11602: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 11910: estimate 12.16; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 11911: estimate 12.16; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 12245: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12246: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12247: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12248: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12249: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12250: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12251: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12253: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12254: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12255: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12256: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12257: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12258: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12259: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12260: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12261: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12262: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12263: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12264: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 16174: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 16175: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 16176: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 16177: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 16178: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 16179: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 16180: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 16181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 16182: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 16183: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 16184: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 16185: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 16186: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 16187: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 16188: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 16189: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 16190: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 16191: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 16192: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 16193: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 63.35s leader 5, trace 16573: estimate 12.33; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 63.35s leader 5, trace 16574: estimate 12.33; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 16684: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 16685: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 16686: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 16687: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 16688: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 16689: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 16690: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 16691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 16692: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 16693: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 16694: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 16695: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 16696: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 16697: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 16698: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 16699: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 16700: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 16701: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 16702: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 16703: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 18578: estimate 12.28; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 18579: estimate 12.28; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 18637: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 18638: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 18639: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 18640: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 18641: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 18642: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 18643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 18644: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 18645: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 18646: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 18647: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 18648: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 18649: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 18650: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 18651: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 18652: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 18653: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 18654: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 18655: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 22059: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 22060: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 22061: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 22062: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 22063: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 22064: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 22065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 22066: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 22067: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 22068: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 22069: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 22070: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 22071: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 22072: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 22073: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 22074: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 22075: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 22076: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 22077: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.35s leader 5, trace 22145: estimate 12.15; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.35s leader 5, trace 22146: estimate 12.15; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 22335: estimate 12.25; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 22336: estimate 12.25; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 22422: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 22423: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 22424: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 22425: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 22426: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 22427: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 22428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 22429: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 22430: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 22431: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 22432: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 22433: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 22434: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 22435: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 22436: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 22437: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 22438: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 22439: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 22440: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 22882: estimate 12.22; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 22883: estimate 12.22; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 22886: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 22887: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 22888: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 22889: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 22890: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 22891: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 22892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 22893: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 22894: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 22895: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 22896: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 22897: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 22898: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 22899: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 22900: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 22901: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 22902: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 22903: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 22904: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 25861: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 25862: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 25863: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 25864: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 25865: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 25866: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 25867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 25868: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 25869: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 25870: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 25871: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 25872: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 25873: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 25874: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 25875: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 25876: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 25877: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 25878: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 25879: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 26156: estimate 12.12; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 26157: estimate 12.12; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 26158: estimate 12.12; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 26159: estimate 12.12; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 26574: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 26575: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 26576: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 26577: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 26578: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 26579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 26580: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 26581: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 26582: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 26583: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 26584: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 26585: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 26586: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 26587: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 26588: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 26589: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 26590: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 26591: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 26808: estimate 12.10; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 26809: estimate 12.10; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.20s leader 5, trace 26876: estimate 12.08; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 26957: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 26958: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 26959: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 26960: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 26961: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 26962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 26963: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 26964: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 26965: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 26966: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 26967: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 26968: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 26969: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 26970: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 26971: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 26972: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 26973: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 26974: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.95s leader 5, trace 27196: estimate 12.16; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.95s leader 5, trace 27197: estimate 12.16; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 27495: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 27496: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 27497: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 27498: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 27499: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 27500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 27501: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 27502: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 27503: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 27504: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 27505: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 27506: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 27507: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 27508: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 27509: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 27510: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 27511: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 27512: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 28234: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 28235: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 28236: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 28237: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 28238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 28239: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 28240: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 28241: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 28242: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 28243: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 28244: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 28245: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 28246: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 28247: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 28248: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 28249: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 28250: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 30639: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 30640: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 30641: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 30642: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 30643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 30644: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 30645: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 30646: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 30647: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 30648: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 30649: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 30650: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 30651: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 30652: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 30653: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 30654: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 30655: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 31360: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 31361: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 31362: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 31363: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 31364: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 31365: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 31366: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 31367: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 31368: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 31369: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 31370: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 31371: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 31372: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 31373: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 31374: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 31375: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 31761: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 31762: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 31763: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 31764: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 31765: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 31766: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 31767: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 31768: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 31769: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 31770: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 31771: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 31772: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 31773: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 31774: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 31775: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 31776: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 32375: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 32376: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 32377: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 32378: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 32379: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 32380: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 32381: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 32382: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 32383: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 32384: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 32385: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 32386: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 32387: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 32388: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 32389: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 32390: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 32622: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 32623: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 32624: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 32625: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 32626: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 32627: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 32628: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 32629: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 32630: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 32631: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 32632: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 32633: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 32634: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 32635: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 32636: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.70s leader 6, trace 32802: estimate 11.93; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.70s leader 6, trace 32803: estimate 11.93; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 33275: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 33276: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 33277: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 33278: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 33279: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 33280: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 33281: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 33282: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 33283: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 33284: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 33285: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 33286: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 33287: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 33288: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 33289: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.25s leader 6, trace 33465: estimate 11.97; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 143.25s leader 6, trace 33466: estimate 11.97; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 33539: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 33540: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 33541: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 33542: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 33543: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 33544: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 33545: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 33546: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 33547: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 33548: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 33549: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 33550: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 33551: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 33552: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 146.05s leader 6, trace 33895: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 146.05s leader 6, trace 33896: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 148.85s leader 6, trace 34336: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 148.85s leader 6, trace 34337: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 34381: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 34382: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 34383: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 34384: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 34385: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 34386: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 34387: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 34388: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 34389: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 34390: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 34391: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 34392: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 34393: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 34394: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 34755: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 34756: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 34757: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 34758: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 34759: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 34760: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 34761: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 34762: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 34763: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 34764: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 34765: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 34766: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 34767: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 34768: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 34947: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 34948: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 34949: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 34950: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 34951: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 34952: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 34953: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 34954: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 34955: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 34956: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 34957: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 34958: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 34959: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 34960: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 35246: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 35247: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 35248: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 35249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 35250: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 35251: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 35252: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 35253: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 35254: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 35255: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 35256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 35257: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 35258: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.20s leader 1, trace 35313: estimate 10.73; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.20s leader 1, trace 35314: estimate 10.73; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 35467: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 35468: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 35469: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 35470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 35471: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 35472: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 35473: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 35474: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 35475: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 35476: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 35477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 35478: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 35479: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 35647: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 35648: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 35649: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 35650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 35651: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 35652: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 35653: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 35654: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 35655: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 35656: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 35657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 35658: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 35659: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 35976: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 35977: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 35978: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 35979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 35980: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 35981: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 35982: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 35983: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 35984: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 35985: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 35986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 35987: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 35988: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 36167: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 36168: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 36169: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 36170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 36171: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 36172: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 36173: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 36174: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 36175: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 36176: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 36177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 36178: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 36179: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 36347: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 36348: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 36349: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 36350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 36351: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 36352: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 36353: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 36354: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 36355: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 36356: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 36357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 36358: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 36359: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 36667: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 36668: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 36669: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 36670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 36671: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 36672: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 36673: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 36674: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 36675: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 36676: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 36677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 36678: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 36679: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 36856: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 36857: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 36858: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 36859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 36860: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 36861: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 36862: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 36863: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 36864: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 36865: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 36866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 36867: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 36868: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 37052: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 37053: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 37054: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 37055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 37056: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 37057: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 37058: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 37059: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 37060: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 37061: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 37062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 37063: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 37064: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 37216: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 37217: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 37218: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 37219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 37220: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 37221: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 37222: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 37223: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 37224: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 37225: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 37226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 37227: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 37228: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 37380: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 37381: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 37382: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 37383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 37384: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 37385: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 37386: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 37387: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 37388: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 37389: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 37390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 37391: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 37392: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 37534: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 37535: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 37536: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 37537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 37538: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 37539: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 37540: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 37541: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 37542: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 37543: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 37544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 37545: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 37546: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.15s leader 1, trace 37642: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.15s leader 1, trace 37643: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.15s leader 1, trace 37644: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.15s leader 1, trace 37645: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 37767: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 37768: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 37769: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 37770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 37771: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 37772: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 37773: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 37774: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 37775: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 37776: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 37777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 37778: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 37779: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 38026: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 38027: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 38028: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 38029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 38030: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 38031: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 38032: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 38033: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 38034: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 38035: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 38036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 38037: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 38038: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 38279: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 38280: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 38281: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 38282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 38283: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 38284: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 38285: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 38286: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 38287: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 38288: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 38289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 38290: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 38291: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 38460: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 38461: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 38462: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 38463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 38464: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 38465: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 38466: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 38467: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 38468: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 38469: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 38470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 38471: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 38472: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 38774: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 38775: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 38776: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 38777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 38778: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 38779: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 38780: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 38781: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 38782: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 38783: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 38784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 38785: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 38786: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 38967: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 38968: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 38969: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 38970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 38971: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 38972: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 38973: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 38974: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 38975: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 38976: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 38977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 38978: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 38979: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.10s leader 1, trace 39103: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.10s leader 1, trace 39104: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 39155: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 39156: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 39157: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 39158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 39159: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 39160: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 39161: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 39162: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 39163: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 39164: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 39165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 39166: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 39167: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 39532: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 39533: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 39534: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 39535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 39536: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 39537: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 39538: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 39539: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 39540: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 39541: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 39542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 39543: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 39544: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 264.30s leader 1, trace 39703: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 264.30s leader 1, trace 39704: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 39723: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 39724: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 39725: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 39726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 39727: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 39728: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 39729: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 39730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 39731: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 39732: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 39733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 39734: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 39735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.10s leader 1, trace 40004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.10s leader 1, trace 40005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.10s leader 1, trace 40006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.10s leader 1, trace 40007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 40253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 40254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 40255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 40256: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 40257: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 40258: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 40259: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 40260: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 40261: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 40262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 40263: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 40264: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 40451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 40452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 40453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 40454: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 40455: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 40456: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 40457: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 40458: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 40459: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 40460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 40461: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 40462: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 40633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 40634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 40635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 40636: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 40637: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 40638: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 40639: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 40640: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 40641: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 40642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 40643: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 40644: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 281.35s leader 1, trace 40859: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 283.90s leader 1, trace 42761: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 283.90s leader 1, trace 42762: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 283.90s leader 1, trace 42763: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 283.90s leader 1, trace 42764: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 42854: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 42855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 42856: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 42857: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 42858: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 42859: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 42860: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 42861: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 42862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 42863: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 42864: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 43476: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 43477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 43478: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 43479: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 43480: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 43481: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 43482: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 43483: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 43484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 43485: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 43486: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.30s leader 8, trace 43556: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 43767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 43768: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 43769: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 43770: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 43771: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 43772: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 43773: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 43774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 43775: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 43776: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.95s leader 9, trace 43857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 43916: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 43917: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 43918: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 43919: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 43920: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 43921: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 43922: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 43923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 43924: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 43925: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 44057: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 44058: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 44059: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 44060: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 44061: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 44062: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 44063: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 44064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 44065: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 44066: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 44203: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 44204: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 44205: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 44206: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 44207: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 44208: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 44209: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 44210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 44211: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 44212: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 44367: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 44368: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 44369: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 44370: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 44371: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 44372: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 44373: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 44374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 44375: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 44376: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 44521: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 44522: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 44523: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 44524: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 44525: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 44526: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 44527: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 44528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 44529: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 44530: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 44662: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 44663: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 44664: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 44665: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 44666: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 44667: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 44668: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 44669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 44670: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 44671: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 44803: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 44804: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 44805: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 44806: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 44807: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 44808: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 44809: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 44810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 44811: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 44812: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 44955: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 44956: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 44957: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 44958: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 44959: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 44960: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 44961: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 44962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 44963: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 44964: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 45100: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 45101: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 45102: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 45103: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 45104: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 45105: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 45106: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 45107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 45108: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 45109: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 45239: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 45240: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 45241: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 45242: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 45243: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 45244: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 45245: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 45246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 45247: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 45248: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 45385: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 45386: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 45387: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 45388: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 45389: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 45390: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 45391: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 45392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 45393: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 45394: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 45537: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 45538: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 45539: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 45540: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 45541: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 45542: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 45543: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 45544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 45545: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 45546: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.55s leader 9, trace 45652: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 45690: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 45691: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 45692: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 45693: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 45694: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 45695: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 45696: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 45697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 45698: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 45699: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Tern incapacitated
- 1: Vale incapacitated
- 1: Soren killed in action
- 1: Orin killed in action
- 1: Iven killed in action
- 1: Ash killed in action
- 1: Moss incapacitated
- 1: Reed killed in action
- 1: Rook killed in action
- 1: Bren killed in action

## Outcome attribution

- 143.25s, evidence 3187: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 143.25s, evidence 33465: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.417854 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 143.25s, evidence 33466: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.417854 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 146.05s, evidence 3219: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34222}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 146.05s, evidence 33895: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.418142 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34222}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 146.05s, evidence 33896: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.418142 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34222}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 148.85s, evidence 3253: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 148.85s, evidence 34336: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.335649 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6996073216534614, 'next_transition': 34352}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 148.85s, evidence 34337: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.335649 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6996073216534614, 'next_transition': 34352}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 165.20s, evidence 3354: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 165.20s, evidence 3355: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.149480063680787, 'next_transition': 35797}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
