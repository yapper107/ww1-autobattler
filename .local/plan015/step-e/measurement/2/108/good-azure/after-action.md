# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/2/108/good-azure/battle-108-1789673667301017582`

## Battle summary

**Ember** · 360 s · 67 shots.

### Turning points

- 21.2s, squad 4: contact (events line 227). First recorded contact.
- 25.0s, squad 0: withdrawal ([trace 1807](#trace-1807)). 55.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 71.7s, squad 0: withdrawal ([trace 3296](#trace-3296)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 10 shots, 1/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 57 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 21.3s, squad 0 chose took cover and returned fire ([trace 1266](#trace-1266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
- 26.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.367963 retreat threshold=0.500000 initiative=delegated ([trace 2001](#trace-2001)). Following evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4065098056428598, 'next_transition': 2011}.

### Communication

53 matched deliveries (mean 0.11s, max 0.75s); 249 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 21.20s, squad 4, contact, evidence events line 227: First recorded contact; .
- 25.00s, squad 0, withdrawal, evidence 1807: BreakContact: believed ratio at least two without superiority; 55.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 71.65s, squad 0, withdrawal, evidence 3296: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018794169231863, 'next_transition': 211}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260018416181004, 'next_transition': 232}.
<a id="trace-44"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 44): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-265"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 265): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 265. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-266"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 266): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041229962763, 'next_transition': 279}.
<a id="trace-279"></a>
<a id="trace-290"></a>
<a id="trace-364"></a>
- 4.20s–5.20s (×3), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630004122996275, 'next_transition': 290}.
<a id="trace-367"></a>
- 5.45s–5.45s (×1), actor 0, squad 0 (trace 367): received platoon directive. Knowledge: actor memory at 5.00s, trace 294. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300062874932466, 'next_transition': 477}.
<a id="trace-477"></a>
<a id="trace-504"></a>
<a id="trace-513"></a>
<a id="trace-531"></a>
<a id="trace-550"></a>
<a id="trace-569"></a>
<a id="trace-598"></a>
<a id="trace-610"></a>
<a id="trace-622"></a>
<a id="trace-703"></a>
<a id="trace-716"></a>
<a id="trace-728"></a>
<a id="trace-742"></a>
<a id="trace-759"></a>
<a id="trace-776"></a>
<a id="trace-785"></a>
<a id="trace-800"></a>
<a id="trace-819"></a>
- 5.70s–14.20s (×18), actor 5, squad 0 (trace 477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 296. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.784422458864353, 'next_transition': 504}.
<a id="trace-479"></a>
<a id="trace-506"></a>
<a id="trace-515"></a>
<a id="trace-533"></a>
<a id="trace-552"></a>
<a id="trace-571"></a>
<a id="trace-600"></a>
<a id="trace-612"></a>
<a id="trace-705"></a>
<a id="trace-718"></a>
<a id="trace-730"></a>
<a id="trace-744"></a>
<a id="trace-761"></a>
<a id="trace-778"></a>
<a id="trace-787"></a>
<a id="trace-821"></a>
<a id="trace-919"></a>
<a id="trace-1002"></a>
<a id="trace-1017"></a>
<a id="trace-1038"></a>
<a id="trace-1071"></a>
<a id="trace-1084"></a>
<a id="trace-1105"></a>
<a id="trace-1131"></a>
<a id="trace-1146"></a>
<a id="trace-1229"></a>
<a id="trace-1249"></a>
<a id="trace-1264"></a>
<a id="trace-1653"></a>
<a id="trace-1688"></a>
<a id="trace-1694"></a>
<a id="trace-1747"></a>
<a id="trace-1769"></a>
<a id="trace-1981"></a>
<a id="trace-1992"></a>
<a id="trace-2013"></a>
<a id="trace-2026"></a>
<a id="trace-2039"></a>
<a id="trace-2052"></a>
<a id="trace-2066"></a>
<a id="trace-2079"></a>
<a id="trace-2172"></a>
<a id="trace-2205"></a>
<a id="trace-2221"></a>
<a id="trace-2242"></a>
<a id="trace-2272"></a>
<a id="trace-2277"></a>
<a id="trace-2346"></a>
<a id="trace-2353"></a>
<a id="trace-2366"></a>
<a id="trace-2378"></a>
<a id="trace-2389"></a>
<a id="trace-2410"></a>
<a id="trace-2416"></a>
<a id="trace-2423"></a>
<a id="trace-2431"></a>
<a id="trace-2505"></a>
<a id="trace-2517"></a>
<a id="trace-2530"></a>
<a id="trace-2564"></a>
<a id="trace-2569"></a>
<a id="trace-2575"></a>
<a id="trace-2580"></a>
<a id="trace-2650"></a>
<a id="trace-2655"></a>
<a id="trace-2662"></a>
<a id="trace-2667"></a>
<a id="trace-2675"></a>
<a id="trace-2681"></a>
<a id="trace-2689"></a>
<a id="trace-2694"></a>
<a id="trace-2700"></a>
<a id="trace-2707"></a>
<a id="trace-2780"></a>
<a id="trace-2784"></a>
<a id="trace-2791"></a>
<a id="trace-2797"></a>
<a id="trace-2805"></a>
<a id="trace-2810"></a>
<a id="trace-2817"></a>
<a id="trace-2822"></a>
<a id="trace-2828"></a>
<a id="trace-2833"></a>
<a id="trace-2903"></a>
<a id="trace-2910"></a>
<a id="trace-2916"></a>
<a id="trace-2926"></a>
<a id="trace-2932"></a>
<a id="trace-2941"></a>
<a id="trace-2953"></a>
<a id="trace-2959"></a>
<a id="trace-2963"></a>
<a id="trace-3036"></a>
<a id="trace-3049"></a>
<a id="trace-3056"></a>
<a id="trace-3064"></a>
<a id="trace-3071"></a>
<a id="trace-3078"></a>
<a id="trace-3084"></a>
<a id="trace-3167"></a>
<a id="trace-3185"></a>
<a id="trace-3198"></a>
<a id="trace-3206"></a>
<a id="trace-3211"></a>
<a id="trace-3286"></a>
<a id="trace-3293"></a>
<a id="trace-3353"></a>
<a id="trace-3364"></a>
<a id="trace-3377"></a>
<a id="trace-3389"></a>
<a id="trace-3395"></a>
<a id="trace-3410"></a>
<a id="trace-3420"></a>
<a id="trace-3496"></a>
<a id="trace-3503"></a>
<a id="trace-3518"></a>
<a id="trace-3526"></a>
<a id="trace-3543"></a>
<a id="trace-3555"></a>
<a id="trace-3566"></a>
<a id="trace-3580"></a>
<a id="trace-3589"></a>
<a id="trace-3596"></a>
<a id="trace-3683"></a>
<a id="trace-3702"></a>
<a id="trace-3709"></a>
<a id="trace-3726"></a>
<a id="trace-3745"></a>
<a id="trace-3760"></a>
<a id="trace-3773"></a>
<a id="trace-3793"></a>
<a id="trace-3871"></a>
<a id="trace-3892"></a>
<a id="trace-3902"></a>
<a id="trace-3915"></a>
<a id="trace-3932"></a>
<a id="trace-3938"></a>
<a id="trace-3947"></a>
<a id="trace-3958"></a>
<a id="trace-4040"></a>
<a id="trace-4050"></a>
<a id="trace-4071"></a>
<a id="trace-4089"></a>
<a id="trace-4095"></a>
<a id="trace-4105"></a>
<a id="trace-4112"></a>
<a id="trace-4185"></a>
<a id="trace-4194"></a>
<a id="trace-4202"></a>
<a id="trace-4212"></a>
<a id="trace-4225"></a>
<a id="trace-4232"></a>
<a id="trace-4255"></a>
<a id="trace-4267"></a>
<a id="trace-4274"></a>
<a id="trace-4347"></a>
<a id="trace-4353"></a>
<a id="trace-4362"></a>
<a id="trace-4388"></a>
<a id="trace-4399"></a>
<a id="trace-4406"></a>
<a id="trace-4417"></a>
<a id="trace-4427"></a>
<a id="trace-4510"></a>
<a id="trace-4525"></a>
<a id="trace-4535"></a>
<a id="trace-4545"></a>
<a id="trace-4554"></a>
<a id="trace-4563"></a>
<a id="trace-4572"></a>
<a id="trace-4652"></a>
<a id="trace-4660"></a>
<a id="trace-4674"></a>
<a id="trace-4681"></a>
<a id="trace-4693"></a>
<a id="trace-4711"></a>
<a id="trace-4720"></a>
<a id="trace-4728"></a>
<a id="trace-4738"></a>
<a id="trace-4810"></a>
<a id="trace-4826"></a>
<a id="trace-4844"></a>
<a id="trace-4853"></a>
<a id="trace-4865"></a>
<a id="trace-4871"></a>
<a id="trace-4881"></a>
<a id="trace-4894"></a>
<a id="trace-4965"></a>
<a id="trace-4974"></a>
<a id="trace-4998"></a>
<a id="trace-5006"></a>
<a id="trace-5019"></a>
<a id="trace-5026"></a>
<a id="trace-5037"></a>
<a id="trace-5046"></a>
<a id="trace-5118"></a>
<a id="trace-5127"></a>
<a id="trace-5139"></a>
<a id="trace-5157"></a>
<a id="trace-5164"></a>
<a id="trace-5180"></a>
<a id="trace-5193"></a>
<a id="trace-5200"></a>
<a id="trace-5276"></a>
<a id="trace-5282"></a>
<a id="trace-5294"></a>
<a id="trace-5303"></a>
<a id="trace-5312"></a>
<a id="trace-5325"></a>
<a id="trace-5336"></a>
<a id="trace-5431"></a>
<a id="trace-5447"></a>
<a id="trace-5453"></a>
<a id="trace-5464"></a>
<a id="trace-5493"></a>
<a id="trace-5502"></a>
<a id="trace-5584"></a>
<a id="trace-5602"></a>
<a id="trace-5608"></a>
<a id="trace-5619"></a>
<a id="trace-5627"></a>
<a id="trace-5646"></a>
<a id="trace-5665"></a>
<a id="trace-5737"></a>
<a id="trace-5753"></a>
<a id="trace-5759"></a>
<a id="trace-5782"></a>
<a id="trace-5807"></a>
<a id="trace-5817"></a>
<a id="trace-5889"></a>
<a id="trace-5900"></a>
<a id="trace-5909"></a>
<a id="trace-5915"></a>
<a id="trace-5926"></a>
<a id="trace-5934"></a>
<a id="trace-5956"></a>
<a id="trace-5966"></a>
<a id="trace-5973"></a>
<a id="trace-6078"></a>
<a id="trace-6085"></a>
<a id="trace-6096"></a>
<a id="trace-6114"></a>
<a id="trace-6121"></a>
<a id="trace-6197"></a>
<a id="trace-6204"></a>
<a id="trace-6213"></a>
<a id="trace-6222"></a>
<a id="trace-6232"></a>
<a id="trace-6242"></a>
<a id="trace-6253"></a>
<a id="trace-6270"></a>
<a id="trace-6277"></a>
<a id="trace-6352"></a>
<a id="trace-6359"></a>
<a id="trace-6369"></a>
<a id="trace-6375"></a>
<a id="trace-6386"></a>
<a id="trace-6407"></a>
<a id="trace-6504"></a>
<a id="trace-6512"></a>
<a id="trace-6524"></a>
<a id="trace-6540"></a>
<a id="trace-6547"></a>
<a id="trace-6558"></a>
<a id="trace-6567"></a>
<a id="trace-6575"></a>
<a id="trace-6588"></a>
<a id="trace-6661"></a>
<a id="trace-6668"></a>
<a id="trace-6678"></a>
<a id="trace-6685"></a>
<a id="trace-6706"></a>
<a id="trace-6717"></a>
<a id="trace-6723"></a>
<a id="trace-6732"></a>
<a id="trace-6742"></a>
<a id="trace-6814"></a>
<a id="trace-6823"></a>
<a id="trace-6835"></a>
<a id="trace-6842"></a>
<a id="trace-6854"></a>
<a id="trace-6874"></a>
<a id="trace-6882"></a>
<a id="trace-6892"></a>
<a id="trace-6899"></a>
<a id="trace-6979"></a>
<a id="trace-6987"></a>
<a id="trace-6997"></a>
<a id="trace-7014"></a>
<a id="trace-7028"></a>
<a id="trace-7035"></a>
<a id="trace-7047"></a>
<a id="trace-7055"></a>
<a id="trace-7137"></a>
<a id="trace-7146"></a>
<a id="trace-7155"></a>
<a id="trace-7164"></a>
<a id="trace-7174"></a>
<a id="trace-7185"></a>
<a id="trace-7200"></a>
<a id="trace-7208"></a>
<a id="trace-7302"></a>
<a id="trace-7308"></a>
<a id="trace-7320"></a>
<a id="trace-7338"></a>
<a id="trace-7355"></a>
<a id="trace-7362"></a>
<a id="trace-7441"></a>
<a id="trace-7453"></a>
<a id="trace-7459"></a>
<a id="trace-7474"></a>
<a id="trace-7482"></a>
<a id="trace-7493"></a>
<a id="trace-7504"></a>
<a id="trace-7512"></a>
<a id="trace-7593"></a>
<a id="trace-7608"></a>
<a id="trace-7633"></a>
<a id="trace-7651"></a>
<a id="trace-7672"></a>
<a id="trace-7745"></a>
<a id="trace-7754"></a>
<a id="trace-7763"></a>
<a id="trace-7769"></a>
<a id="trace-7780"></a>
<a id="trace-7787"></a>
<a id="trace-7805"></a>
<a id="trace-7822"></a>
<a id="trace-7896"></a>
<a id="trace-7907"></a>
<a id="trace-7917"></a>
<a id="trace-7937"></a>
<a id="trace-7944"></a>
<a id="trace-7955"></a>
<a id="trace-7961"></a>
<a id="trace-7973"></a>
<a id="trace-7980"></a>
<a id="trace-8053"></a>
<a id="trace-8068"></a>
<a id="trace-8099"></a>
<a id="trace-8111"></a>
<a id="trace-8118"></a>
<a id="trace-8128"></a>
<a id="trace-8135"></a>
<a id="trace-8215"></a>
<a id="trace-8225"></a>
<a id="trace-8231"></a>
<a id="trace-8241"></a>
<a id="trace-8251"></a>
<a id="trace-8261"></a>
<a id="trace-8280"></a>
<a id="trace-8365"></a>
<a id="trace-8371"></a>
<a id="trace-8388"></a>
<a id="trace-8399"></a>
<a id="trace-8406"></a>
<a id="trace-8416"></a>
<a id="trace-8425"></a>
<a id="trace-8433"></a>
<a id="trace-8443"></a>
<a id="trace-8522"></a>
<a id="trace-8562"></a>
<a id="trace-8573"></a>
<a id="trace-8682"></a>
<a id="trace-8690"></a>
<a id="trace-8701"></a>
<a id="trace-8732"></a>
<a id="trace-8742"></a>
<a id="trace-8749"></a>
<a id="trace-8821"></a>
<a id="trace-8830"></a>
<a id="trace-8838"></a>
<a id="trace-8862"></a>
<a id="trace-8874"></a>
<a id="trace-8893"></a>
<a id="trace-8982"></a>
<a id="trace-8992"></a>
<a id="trace-9003"></a>
<a id="trace-9021"></a>
<a id="trace-9036"></a>
<a id="trace-9046"></a>
<a id="trace-9054"></a>
<a id="trace-9129"></a>
<a id="trace-9136"></a>
<a id="trace-9149"></a>
<a id="trace-9155"></a>
<a id="trace-9166"></a>
<a id="trace-9179"></a>
<a id="trace-9188"></a>
<a id="trace-9205"></a>
<a id="trace-9212"></a>
<a id="trace-9285"></a>
<a id="trace-9303"></a>
<a id="trace-9320"></a>
<a id="trace-9328"></a>
<a id="trace-9340"></a>
<a id="trace-9349"></a>
<a id="trace-9361"></a>
<a id="trace-9371"></a>
<a id="trace-9443"></a>
<a id="trace-9449"></a>
<a id="trace-9459"></a>
<a id="trace-9465"></a>
<a id="trace-9478"></a>
<a id="trace-9485"></a>
<a id="trace-9497"></a>
<a id="trace-9503"></a>
<a id="trace-9514"></a>
<a id="trace-9526"></a>
<a id="trace-9597"></a>
<a id="trace-9609"></a>
<a id="trace-9619"></a>
<a id="trace-9625"></a>
<a id="trace-9642"></a>
<a id="trace-9655"></a>
<a id="trace-9661"></a>
<a id="trace-9671"></a>
<a id="trace-9679"></a>
<a id="trace-9751"></a>
<a id="trace-9761"></a>
<a id="trace-9772"></a>
<a id="trace-9790"></a>
<a id="trace-9798"></a>
<a id="trace-9811"></a>
<a id="trace-9818"></a>
<a id="trace-9830"></a>
<a id="trace-9837"></a>
<a id="trace-9924"></a>
<a id="trace-9933"></a>
<a id="trace-9943"></a>
<a id="trace-9955"></a>
<a id="trace-9965"></a>
<a id="trace-9972"></a>
<a id="trace-10065"></a>
<a id="trace-10072"></a>
<a id="trace-10082"></a>
<a id="trace-10088"></a>
<a id="trace-10108"></a>
<a id="trace-10117"></a>
<a id="trace-10127"></a>
<a id="trace-10138"></a>
<a id="trace-10145"></a>
<a id="trace-10218"></a>
<a id="trace-10236"></a>
<a id="trace-10246"></a>
<a id="trace-10263"></a>
<a id="trace-10289"></a>
<a id="trace-10299"></a>
<a id="trace-10377"></a>
<a id="trace-10389"></a>
<a id="trace-10408"></a>
<a id="trace-10415"></a>
<a id="trace-10443"></a>
<a id="trace-10453"></a>
<a id="trace-10524"></a>
<a id="trace-10533"></a>
<a id="trace-10543"></a>
<a id="trace-10549"></a>
<a id="trace-10561"></a>
<a id="trace-10570"></a>
<a id="trace-10583"></a>
<a id="trace-10590"></a>
<a id="trace-10600"></a>
<a id="trace-10607"></a>
<a id="trace-10680"></a>
<a id="trace-10691"></a>
<a id="trace-10717"></a>
<a id="trace-10725"></a>
<a id="trace-10736"></a>
<a id="trace-10743"></a>
<a id="trace-10757"></a>
<a id="trace-10836"></a>
<a id="trace-10842"></a>
<a id="trace-10860"></a>
<a id="trace-10869"></a>
<a id="trace-10884"></a>
<a id="trace-10895"></a>
<a id="trace-10901"></a>
<a id="trace-10918"></a>
<a id="trace-10994"></a>
<a id="trace-11011"></a>
<a id="trace-11017"></a>
<a id="trace-11027"></a>
<a id="trace-11046"></a>
<a id="trace-11055"></a>
<a id="trace-11067"></a>
<a id="trace-11147"></a>
<a id="trace-11183"></a>
<a id="trace-11190"></a>
<a id="trace-11200"></a>
<a id="trace-11209"></a>
<a id="trace-11227"></a>
<a id="trace-11299"></a>
<a id="trace-11306"></a>
<a id="trace-11319"></a>
<a id="trace-11338"></a>
<a id="trace-11345"></a>
<a id="trace-11357"></a>
<a id="trace-11373"></a>
<a id="trace-11383"></a>
<a id="trace-11454"></a>
<a id="trace-11463"></a>
<a id="trace-11495"></a>
<a id="trace-11510"></a>
<a id="trace-11517"></a>
<a id="trace-11528"></a>
<a id="trace-11535"></a>
<a id="trace-11608"></a>
<a id="trace-11626"></a>
<a id="trace-11635"></a>
<a id="trace-11645"></a>
<a id="trace-11662"></a>
<a id="trace-11669"></a>
<a id="trace-11681"></a>
<a id="trace-11688"></a>
<a id="trace-11771"></a>
<a id="trace-11789"></a>
<a id="trace-11800"></a>
<a id="trace-11810"></a>
<a id="trace-11820"></a>
<a id="trace-11826"></a>
<a id="trace-11922"></a>
<a id="trace-11932"></a>
<a id="trace-11939"></a>
<a id="trace-11953"></a>
<a id="trace-11963"></a>
<a id="trace-11973"></a>
<a id="trace-11984"></a>
<a id="trace-11993"></a>
<a id="trace-12000"></a>
<a id="trace-12073"></a>
<a id="trace-12079"></a>
<a id="trace-12091"></a>
<a id="trace-12097"></a>
<a id="trace-12115"></a>
<a id="trace-12126"></a>
<a id="trace-12138"></a>
<a id="trace-12147"></a>
<a id="trace-12158"></a>
<a id="trace-12237"></a>
<a id="trace-12247"></a>
<a id="trace-12253"></a>
<a id="trace-12266"></a>
<a id="trace-12288"></a>
<a id="trace-12298"></a>
<a id="trace-12308"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512631416355371, 'next_transition': 506}.
<a id="trace-826"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 826): traveling overwatch. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724859198896494, 'next_transition': 917}.
<a id="trace-827"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 827): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724859198896494, 'next_transition': 917}.
<a id="trace-917"></a>
<a id="trace-1000"></a>
<a id="trace-1015"></a>
<a id="trace-1036"></a>
<a id="trace-1054"></a>
<a id="trace-1069"></a>
<a id="trace-1082"></a>
<a id="trace-1103"></a>
<a id="trace-1117"></a>
<a id="trace-1129"></a>
<a id="trace-1144"></a>
<a id="trace-1227"></a>
<a id="trace-1247"></a>
<a id="trace-1262"></a>
- 14.70s–21.25s (×14), actor 5, squad 0 (trace 917): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 628. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0668709669953038, 'next_transition': 1000}.
<a id="trace-1266"></a>
- 21.30s–21.30s (×1), actor 0, squad 0 (trace 1266): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 1150. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246272191333855, 'next_transition': 1394}.
<a id="trace-1267"></a>
- 21.30s–21.30s (×1), actor 0, squad 0 (trace 1267): bounding overwatch. Knowledge: actor memory at 20.00s, trace 1150. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246272191333855, 'next_transition': 1394}.
<a id="trace-1268"></a>
<a id="trace-1394"></a>
<a id="trace-1518"></a>
- 21.30s–21.50s (×3), actor 0, squad 0 (trace 1268): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1150. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47246272191333855, 'next_transition': 1394}.
<a id="trace-1651"></a>
<a id="trace-1686"></a>
<a id="trace-1692"></a>
<a id="trace-1715"></a>
<a id="trace-1745"></a>
<a id="trace-1767"></a>
<a id="trace-1791"></a>
- 21.75s–24.75s (×7), actor 5, squad 0 (trace 1651): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1152. Next observer evidence: {'until': 22.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6163996294070042, 'next_transition': 1686}.
<a id="trace-1807"></a>
- 25.00s–25.00s (×1), actor 0, squad 0 (trace 1807): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 1799. Next observer evidence: None.
<a id="trace-1808"></a>
- 25.00s–25.00s (×1), actor 0, squad 0 (trace 1808): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 1799. Next observer evidence: None.
<a id="trace-1919"></a>
- 25.05s–25.05s (×1), actor 5, squad 0 (trace 1919): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 25.05s, trace 1919. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44716473010605406, 'next_transition': 1979}.
<a id="trace-1979"></a>
<a id="trace-1990"></a>
- 25.25s–25.75s (×2), actor 5, squad 0 (trace 1979): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.05s, trace 1919. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449932460153838, 'next_transition': 1990}.
<a id="trace-281"></a>
- 26.05s–26.05s (×1), actor 5, squad 0 (events line 281): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2001"></a>
- 26.05s–26.05s (×1), actor 5, squad 0 (trace 2001): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.367963 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 2001. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4065098056428598, 'next_transition': 2011}.
<a id="trace-2002"></a>
- 26.05s–26.05s (×1), actor 5, squad 0 (trace 2002): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.367963 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 2002. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4065098056428598, 'next_transition': 2011}.
<a id="trace-2011"></a>
<a id="trace-2024"></a>
<a id="trace-2037"></a>
<a id="trace-2050"></a>
<a id="trace-2064"></a>
<a id="trace-2077"></a>
<a id="trace-2088"></a>
<a id="trace-2095"></a>
<a id="trace-2170"></a>
<a id="trace-2176"></a>
<a id="trace-2191"></a>
<a id="trace-2203"></a>
<a id="trace-2219"></a>
<a id="trace-2240"></a>
<a id="trace-2249"></a>
<a id="trace-2257"></a>
<a id="trace-2270"></a>
<a id="trace-2275"></a>
<a id="trace-2344"></a>
<a id="trace-2350"></a>
<a id="trace-2363"></a>
<a id="trace-2375"></a>
<a id="trace-2387"></a>
<a id="trace-2395"></a>
<a id="trace-2408"></a>
<a id="trace-2414"></a>
<a id="trace-2421"></a>
<a id="trace-2429"></a>
<a id="trace-2503"></a>
<a id="trace-2515"></a>
- 26.25s–40.75s (×30), actor 5, squad 0 (trace 2011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 2002. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937536914466243, 'next_transition': 2024}.
<a id="trace-2521"></a>
- 41.05s–41.05s (×1), actor 1, squad 0 (trace 2521): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 2432. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000455021525397, 'next_transition': 2528}.
<a id="trace-2522"></a>
- 41.05s–41.05s (×1), actor 1, squad 0 (trace 2522): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 2432. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000455021525397, 'next_transition': 2528}.
<a id="trace-2528"></a>
<a id="trace-2532"></a>
<a id="trace-2548"></a>
<a id="trace-2553"></a>
<a id="trace-2562"></a>
<a id="trace-2567"></a>
<a id="trace-2573"></a>
<a id="trace-2578"></a>
<a id="trace-2648"></a>
<a id="trace-2653"></a>
<a id="trace-2660"></a>
<a id="trace-2665"></a>
<a id="trace-2673"></a>
<a id="trace-2679"></a>
<a id="trace-2687"></a>
<a id="trace-2692"></a>
<a id="trace-2698"></a>
<a id="trace-2705"></a>
<a id="trace-2778"></a>
<a id="trace-2782"></a>
<a id="trace-2789"></a>
<a id="trace-2795"></a>
<a id="trace-2803"></a>
<a id="trace-2808"></a>
<a id="trace-2815"></a>
<a id="trace-2820"></a>
<a id="trace-2826"></a>
<a id="trace-2831"></a>
<a id="trace-2901"></a>
- 41.25s–55.25s (×29), actor 5, squad 0 (trace 2528): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2433. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200091004305075, 'next_transition': 2532}.
<a id="trace-2904"></a>
- 55.55s–55.55s (×1), actor 1, squad 0 (trace 2904): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 55.00s, trace 2835. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2908}.
<a id="trace-2908"></a>
<a id="trace-2914"></a>
<a id="trace-2924"></a>
<a id="trace-2930"></a>
<a id="trace-2939"></a>
<a id="trace-2947"></a>
<a id="trace-2951"></a>
<a id="trace-2957"></a>
<a id="trace-2961"></a>
<a id="trace-3031"></a>
<a id="trace-3034"></a>
<a id="trace-3041"></a>
<a id="trace-3047"></a>
<a id="trace-3054"></a>
<a id="trace-3062"></a>
<a id="trace-3069"></a>
<a id="trace-3076"></a>
<a id="trace-3082"></a>
<a id="trace-3087"></a>
<a id="trace-3156"></a>
<a id="trace-3159"></a>
<a id="trace-3165"></a>
<a id="trace-3171"></a>
<a id="trace-3177"></a>
<a id="trace-3183"></a>
<a id="trace-3190"></a>
<a id="trace-3196"></a>
<a id="trace-3204"></a>
<a id="trace-3209"></a>
- 55.75s–69.75s (×29), actor 5, squad 0 (trace 2908): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 2836. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2914}.
<a id="trace-385"></a>
- 70.05s–70.05s (×1), actor 5, squad 0 (events line 385): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3219"></a>
- 70.05s–70.05s (×1), actor 5, squad 0 (trace 3219): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208934 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.05s, trace 3219. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119278348445658, 'next_transition': 3281}.
<a id="trace-3220"></a>
- 70.05s–70.05s (×1), actor 5, squad 0 (trace 3220): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208934 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.05s, trace 3220. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119278348445658, 'next_transition': 3281}.
<a id="trace-3281"></a>
<a id="trace-3284"></a>
<a id="trace-3291"></a>
- 70.25s–71.25s (×3), actor 5, squad 0 (trace 3281): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.05s, trace 3220. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023984027919316, 'next_transition': 3284}.
<a id="trace-3296"></a>
- 71.65s–71.65s (×1), actor 1, squad 0 (trace 3296): Withdraw to received rally. Knowledge: actor memory at 70.00s, trace 3212. Next observer evidence: None.
<a id="trace-3297"></a>
- 71.65s–71.65s (×1), actor 1, squad 0 (trace 3297): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 3212. Next observer evidence: None.
<a id="trace-3351"></a>
<a id="trace-3362"></a>
<a id="trace-3375"></a>
<a id="trace-3387"></a>
<a id="trace-3393"></a>
<a id="trace-3408"></a>
<a id="trace-3418"></a>
<a id="trace-3494"></a>
<a id="trace-3501"></a>
<a id="trace-3516"></a>
<a id="trace-3524"></a>
<a id="trace-3541"></a>
<a id="trace-3553"></a>
<a id="trace-3564"></a>
<a id="trace-3578"></a>
<a id="trace-3594"></a>
<a id="trace-3672"></a>
<a id="trace-3681"></a>
<a id="trace-3700"></a>
<a id="trace-3707"></a>
<a id="trace-3724"></a>
<a id="trace-3734"></a>
<a id="trace-3743"></a>
- 71.75s–83.25s (×23), actor 5, squad 0 (trace 3351): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.05s, trace 3220. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45359118574867513, 'next_transition': 3362}.
<a id="trace-3753"></a>
- 83.65s–83.65s (×1), actor 1, squad 0 (trace 3753): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 3601. Next observer evidence: None.
<a id="trace-3754"></a>
- 83.65s–83.65s (×1), actor 1, squad 0 (trace 3754): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 3601. Next observer evidence: None.
<a id="trace-3758"></a>
<a id="trace-3771"></a>
<a id="trace-3791"></a>
<a id="trace-3869"></a>
<a id="trace-3890"></a>
<a id="trace-3900"></a>
<a id="trace-3913"></a>
<a id="trace-3920"></a>
<a id="trace-3930"></a>
<a id="trace-3936"></a>
<a id="trace-3945"></a>
<a id="trace-3956"></a>
<a id="trace-4028"></a>
<a id="trace-4038"></a>
<a id="trace-4048"></a>
<a id="trace-4056"></a>
<a id="trace-4069"></a>
<a id="trace-4076"></a>
<a id="trace-4087"></a>
<a id="trace-4093"></a>
<a id="trace-4103"></a>
<a id="trace-4110"></a>
<a id="trace-4183"></a>
<a id="trace-4192"></a>
<a id="trace-4200"></a>
<a id="trace-4210"></a>
<a id="trace-4223"></a>
<a id="trace-4230"></a>
<a id="trace-4243"></a>
<a id="trace-4253"></a>
<a id="trace-4265"></a>
<a id="trace-4272"></a>
<a id="trace-4345"></a>
<a id="trace-4351"></a>
<a id="trace-4360"></a>
<a id="trace-4369"></a>
<a id="trace-4377"></a>
<a id="trace-4386"></a>
<a id="trace-4397"></a>
<a id="trace-4404"></a>
<a id="trace-4415"></a>
<a id="trace-4425"></a>
<a id="trace-4502"></a>
<a id="trace-4508"></a>
<a id="trace-4518"></a>
<a id="trace-4523"></a>
<a id="trace-4533"></a>
<a id="trace-4543"></a>
<a id="trace-4552"></a>
<a id="trace-4561"></a>
<a id="trace-4570"></a>
<a id="trace-4578"></a>
<a id="trace-4650"></a>
<a id="trace-4658"></a>
<a id="trace-4672"></a>
<a id="trace-4679"></a>
<a id="trace-4691"></a>
<a id="trace-4699"></a>
<a id="trace-4709"></a>
<a id="trace-4718"></a>
<a id="trace-4726"></a>
<a id="trace-4736"></a>
<a id="trace-4808"></a>
<a id="trace-4814"></a>
<a id="trace-4824"></a>
<a id="trace-4842"></a>
<a id="trace-4851"></a>
<a id="trace-4863"></a>
<a id="trace-4869"></a>
<a id="trace-4879"></a>
<a id="trace-4892"></a>
<a id="trace-4963"></a>
<a id="trace-4972"></a>
<a id="trace-4981"></a>
<a id="trace-4986"></a>
<a id="trace-4996"></a>
<a id="trace-5004"></a>
<a id="trace-5017"></a>
<a id="trace-5024"></a>
<a id="trace-5035"></a>
<a id="trace-5044"></a>
<a id="trace-5116"></a>
<a id="trace-5125"></a>
<a id="trace-5137"></a>
<a id="trace-5146"></a>
<a id="trace-5155"></a>
<a id="trace-5162"></a>
<a id="trace-5173"></a>
<a id="trace-5178"></a>
<a id="trace-5191"></a>
<a id="trace-5198"></a>
- 83.75s–129.80s (×91), actor 5, squad 0 (trace 3758): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 3602. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836096893938052, 'next_transition': 3771}.
<a id="trace-840"></a>
- 130.20s–130.20s (×1), actor 5, squad 0 (events line 840): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5266"></a>
- 130.20s–130.20s (×1), actor 5, squad 0 (trace 5266): renew committed intent (75 s lifetime). Knowledge: actor memory at 130.20s, trace 5266. Next observer evidence: None.
<a id="trace-5274"></a>
<a id="trace-5280"></a>
<a id="trace-5292"></a>
<a id="trace-5301"></a>
<a id="trace-5310"></a>
<a id="trace-5323"></a>
<a id="trace-5334"></a>
<a id="trace-5340"></a>
<a id="trace-5349"></a>
<a id="trace-5355"></a>
<a id="trace-5429"></a>
<a id="trace-5435"></a>
<a id="trace-5445"></a>
<a id="trace-5451"></a>
<a id="trace-5462"></a>
<a id="trace-5474"></a>
<a id="trace-5483"></a>
<a id="trace-5491"></a>
<a id="trace-5500"></a>
<a id="trace-5508"></a>
<a id="trace-5582"></a>
<a id="trace-5589"></a>
<a id="trace-5600"></a>
<a id="trace-5606"></a>
<a id="trace-5617"></a>
<a id="trace-5625"></a>
<a id="trace-5635"></a>
<a id="trace-5644"></a>
<a id="trace-5654"></a>
<a id="trace-5663"></a>
<a id="trace-5735"></a>
<a id="trace-5742"></a>
<a id="trace-5751"></a>
<a id="trace-5757"></a>
<a id="trace-5773"></a>
<a id="trace-5780"></a>
<a id="trace-5791"></a>
<a id="trace-5796"></a>
<a id="trace-5805"></a>
<a id="trace-5815"></a>
<a id="trace-5887"></a>
<a id="trace-5898"></a>
<a id="trace-5907"></a>
<a id="trace-5913"></a>
<a id="trace-5924"></a>
<a id="trace-5932"></a>
<a id="trace-5945"></a>
<a id="trace-5954"></a>
<a id="trace-5964"></a>
<a id="trace-5971"></a>
<a id="trace-6043"></a>
<a id="trace-6051"></a>
<a id="trace-6057"></a>
<a id="trace-6065"></a>
<a id="trace-6076"></a>
<a id="trace-6083"></a>
<a id="trace-6094"></a>
<a id="trace-6101"></a>
<a id="trace-6112"></a>
<a id="trace-6119"></a>
<a id="trace-6195"></a>
<a id="trace-6202"></a>
<a id="trace-6211"></a>
<a id="trace-6220"></a>
<a id="trace-6230"></a>
<a id="trace-6240"></a>
<a id="trace-6251"></a>
<a id="trace-6257"></a>
<a id="trace-6268"></a>
<a id="trace-6275"></a>
<a id="trace-6350"></a>
<a id="trace-6357"></a>
<a id="trace-6367"></a>
<a id="trace-6373"></a>
<a id="trace-6384"></a>
<a id="trace-6396"></a>
<a id="trace-6405"></a>
<a id="trace-6414"></a>
<a id="trace-6423"></a>
<a id="trace-6429"></a>
<a id="trace-6502"></a>
<a id="trace-6510"></a>
<a id="trace-6522"></a>
<a id="trace-6528"></a>
<a id="trace-6538"></a>
<a id="trace-6545"></a>
<a id="trace-6556"></a>
<a id="trace-6565"></a>
<a id="trace-6573"></a>
<a id="trace-6586"></a>
<a id="trace-6659"></a>
<a id="trace-6666"></a>
<a id="trace-6676"></a>
<a id="trace-6683"></a>
<a id="trace-6698"></a>
<a id="trace-6704"></a>
<a id="trace-6715"></a>
<a id="trace-6721"></a>
<a id="trace-6730"></a>
<a id="trace-6740"></a>
<a id="trace-6812"></a>
<a id="trace-6821"></a>
<a id="trace-6833"></a>
<a id="trace-6840"></a>
<a id="trace-6852"></a>
<a id="trace-6859"></a>
<a id="trace-6872"></a>
<a id="trace-6880"></a>
<a id="trace-6890"></a>
<a id="trace-6897"></a>
<a id="trace-6969"></a>
<a id="trace-6977"></a>
<a id="trace-6985"></a>
<a id="trace-6995"></a>
<a id="trace-7005"></a>
<a id="trace-7012"></a>
<a id="trace-7026"></a>
<a id="trace-7033"></a>
<a id="trace-7045"></a>
<a id="trace-7053"></a>
- 130.30s–189.80s (×120), actor 5, squad 0 (trace 5274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.20s, trace 5266. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5280}.
<a id="trace-1298"></a>
- 190.20s–190.20s (×1), actor 5, squad 0 (events line 1298): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7121"></a>
- 190.20s–190.20s (×1), actor 5, squad 0 (trace 7121): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.20s, trace 7121. Next observer evidence: None.
<a id="trace-7130"></a>
<a id="trace-7135"></a>
<a id="trace-7144"></a>
<a id="trace-7153"></a>
<a id="trace-7162"></a>
<a id="trace-7172"></a>
<a id="trace-7183"></a>
<a id="trace-7189"></a>
<a id="trace-7198"></a>
<a id="trace-7206"></a>
<a id="trace-7284"></a>
<a id="trace-7290"></a>
<a id="trace-7300"></a>
<a id="trace-7306"></a>
<a id="trace-7318"></a>
<a id="trace-7328"></a>
<a id="trace-7336"></a>
<a id="trace-7345"></a>
<a id="trace-7353"></a>
<a id="trace-7360"></a>
<a id="trace-7433"></a>
<a id="trace-7439"></a>
<a id="trace-7451"></a>
<a id="trace-7457"></a>
<a id="trace-7472"></a>
<a id="trace-7480"></a>
<a id="trace-7491"></a>
<a id="trace-7502"></a>
<a id="trace-7510"></a>
<a id="trace-7520"></a>
<a id="trace-7591"></a>
<a id="trace-7597"></a>
<a id="trace-7606"></a>
<a id="trace-7612"></a>
<a id="trace-7624"></a>
<a id="trace-7631"></a>
<a id="trace-7642"></a>
<a id="trace-7649"></a>
<a id="trace-7661"></a>
<a id="trace-7743"></a>
<a id="trace-7752"></a>
<a id="trace-7761"></a>
<a id="trace-7767"></a>
<a id="trace-7778"></a>
<a id="trace-7785"></a>
<a id="trace-7798"></a>
<a id="trace-7803"></a>
<a id="trace-7814"></a>
<a id="trace-7820"></a>
<a id="trace-7894"></a>
<a id="trace-7905"></a>
<a id="trace-7915"></a>
<a id="trace-7926"></a>
<a id="trace-7935"></a>
<a id="trace-7942"></a>
<a id="trace-7953"></a>
<a id="trace-7959"></a>
<a id="trace-7971"></a>
<a id="trace-7978"></a>
<a id="trace-8051"></a>
<a id="trace-8057"></a>
<a id="trace-8066"></a>
<a id="trace-8076"></a>
<a id="trace-8085"></a>
<a id="trace-8097"></a>
<a id="trace-8109"></a>
<a id="trace-8116"></a>
<a id="trace-8126"></a>
<a id="trace-8133"></a>
<a id="trace-8208"></a>
<a id="trace-8213"></a>
<a id="trace-8223"></a>
<a id="trace-8229"></a>
<a id="trace-8239"></a>
<a id="trace-8249"></a>
<a id="trace-8259"></a>
<a id="trace-8269"></a>
<a id="trace-8278"></a>
<a id="trace-8286"></a>
<a id="trace-8363"></a>
<a id="trace-8369"></a>
<a id="trace-8381"></a>
<a id="trace-8386"></a>
<a id="trace-8397"></a>
<a id="trace-8404"></a>
<a id="trace-8414"></a>
<a id="trace-8423"></a>
<a id="trace-8431"></a>
<a id="trace-8441"></a>
<a id="trace-8515"></a>
<a id="trace-8520"></a>
<a id="trace-8531"></a>
<a id="trace-8542"></a>
<a id="trace-8554"></a>
<a id="trace-8560"></a>
<a id="trace-8571"></a>
<a id="trace-8577"></a>
<a id="trace-8585"></a>
<a id="trace-8594"></a>
<a id="trace-8664"></a>
<a id="trace-8672"></a>
<a id="trace-8680"></a>
<a id="trace-8688"></a>
<a id="trace-8699"></a>
<a id="trace-8708"></a>
<a id="trace-8724"></a>
<a id="trace-8730"></a>
<a id="trace-8740"></a>
<a id="trace-8747"></a>
<a id="trace-8819"></a>
<a id="trace-8828"></a>
<a id="trace-8836"></a>
<a id="trace-8845"></a>
<a id="trace-8854"></a>
<a id="trace-8860"></a>
<a id="trace-8872"></a>
<a id="trace-8879"></a>
<a id="trace-8891"></a>
<a id="trace-8901"></a>
<a id="trace-8975"></a>
<a id="trace-8980"></a>
<a id="trace-8990"></a>
- 190.30s–251.30s (×122), actor 5, squad 0 (trace 7130): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.20s, trace 7121. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7135}.
<a id="trace-1765"></a>
- 251.40s–251.40s (×1), actor 5, squad 0 (events line 1765): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8994"></a>
- 251.40s–251.40s (×1), actor 5, squad 0 (trace 8994): renew committed intent (75 s lifetime). Knowledge: actor memory at 251.40s, trace 8994. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9001}.
<a id="trace-9001"></a>
<a id="trace-9010"></a>
<a id="trace-9019"></a>
<a id="trace-9029"></a>
<a id="trace-9034"></a>
<a id="trace-9044"></a>
<a id="trace-9052"></a>
<a id="trace-9127"></a>
<a id="trace-9134"></a>
<a id="trace-9147"></a>
<a id="trace-9153"></a>
<a id="trace-9164"></a>
<a id="trace-9177"></a>
<a id="trace-9186"></a>
<a id="trace-9195"></a>
<a id="trace-9203"></a>
<a id="trace-9210"></a>
<a id="trace-9283"></a>
<a id="trace-9289"></a>
<a id="trace-9301"></a>
<a id="trace-9307"></a>
<a id="trace-9318"></a>
<a id="trace-9326"></a>
<a id="trace-9338"></a>
<a id="trace-9347"></a>
<a id="trace-9359"></a>
<a id="trace-9369"></a>
<a id="trace-9441"></a>
<a id="trace-9447"></a>
<a id="trace-9457"></a>
<a id="trace-9463"></a>
<a id="trace-9476"></a>
<a id="trace-9483"></a>
<a id="trace-9495"></a>
<a id="trace-9501"></a>
<a id="trace-9512"></a>
<a id="trace-9524"></a>
<a id="trace-9595"></a>
<a id="trace-9607"></a>
<a id="trace-9617"></a>
<a id="trace-9623"></a>
<a id="trace-9634"></a>
<a id="trace-9640"></a>
<a id="trace-9653"></a>
<a id="trace-9659"></a>
<a id="trace-9669"></a>
<a id="trace-9677"></a>
<a id="trace-9749"></a>
<a id="trace-9759"></a>
<a id="trace-9770"></a>
<a id="trace-9779"></a>
<a id="trace-9788"></a>
<a id="trace-9796"></a>
<a id="trace-9809"></a>
<a id="trace-9816"></a>
<a id="trace-9828"></a>
<a id="trace-9835"></a>
<a id="trace-9908"></a>
<a id="trace-9913"></a>
<a id="trace-9922"></a>
<a id="trace-9931"></a>
<a id="trace-9941"></a>
<a id="trace-9953"></a>
<a id="trace-9963"></a>
<a id="trace-9970"></a>
<a id="trace-9980"></a>
<a id="trace-9986"></a>
<a id="trace-10063"></a>
<a id="trace-10070"></a>
<a id="trace-10080"></a>
<a id="trace-10086"></a>
<a id="trace-10096"></a>
<a id="trace-10106"></a>
<a id="trace-10115"></a>
<a id="trace-10125"></a>
<a id="trace-10136"></a>
<a id="trace-10143"></a>
<a id="trace-10216"></a>
<a id="trace-10223"></a>
<a id="trace-10234"></a>
<a id="trace-10244"></a>
<a id="trace-10255"></a>
<a id="trace-10261"></a>
<a id="trace-10271"></a>
<a id="trace-10279"></a>
<a id="trace-10287"></a>
<a id="trace-10297"></a>
<a id="trace-10370"></a>
<a id="trace-10375"></a>
<a id="trace-10387"></a>
<a id="trace-10394"></a>
<a id="trace-10406"></a>
<a id="trace-10413"></a>
<a id="trace-10427"></a>
<a id="trace-10433"></a>
<a id="trace-10441"></a>
<a id="trace-10451"></a>
<a id="trace-10522"></a>
<a id="trace-10531"></a>
<a id="trace-10541"></a>
<a id="trace-10547"></a>
<a id="trace-10559"></a>
<a id="trace-10568"></a>
<a id="trace-10581"></a>
<a id="trace-10588"></a>
<a id="trace-10598"></a>
<a id="trace-10605"></a>
<a id="trace-10678"></a>
<a id="trace-10689"></a>
<a id="trace-10698"></a>
<a id="trace-10706"></a>
<a id="trace-10715"></a>
<a id="trace-10723"></a>
<a id="trace-10734"></a>
<a id="trace-10741"></a>
<a id="trace-10755"></a>
<a id="trace-10762"></a>
<a id="trace-10834"></a>
<a id="trace-10840"></a>
<a id="trace-10850"></a>
<a id="trace-10858"></a>
<a id="trace-10867"></a>
- 251.80s–312.30s (×122), actor 5, squad 0 (trace 9001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 251.40s, trace 8994. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9010}.
<a id="trace-2227"></a>
- 312.45s–312.45s (×1), actor 5, squad 0 (events line 2227): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10872"></a>
- 312.45s–312.45s (×1), actor 5, squad 0 (trace 10872): renew committed intent (75 s lifetime). Knowledge: actor memory at 312.45s, trace 10872. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10882}.
<a id="trace-10882"></a>
<a id="trace-10893"></a>
<a id="trace-10899"></a>
<a id="trace-10910"></a>
<a id="trace-10916"></a>
<a id="trace-10992"></a>
<a id="trace-11000"></a>
<a id="trace-11009"></a>
<a id="trace-11015"></a>
<a id="trace-11025"></a>
<a id="trace-11035"></a>
<a id="trace-11044"></a>
<a id="trace-11053"></a>
<a id="trace-11065"></a>
<a id="trace-11073"></a>
<a id="trace-11145"></a>
<a id="trace-11152"></a>
<a id="trace-11163"></a>
<a id="trace-11169"></a>
<a id="trace-11181"></a>
<a id="trace-11188"></a>
<a id="trace-11198"></a>
<a id="trace-11207"></a>
<a id="trace-11215"></a>
<a id="trace-11225"></a>
<a id="trace-11297"></a>
<a id="trace-11304"></a>
<a id="trace-11317"></a>
<a id="trace-11323"></a>
<a id="trace-11336"></a>
<a id="trace-11343"></a>
<a id="trace-11355"></a>
<a id="trace-11361"></a>
<a id="trace-11371"></a>
<a id="trace-11381"></a>
<a id="trace-11452"></a>
<a id="trace-11461"></a>
<a id="trace-11471"></a>
<a id="trace-11476"></a>
<a id="trace-11486"></a>
<a id="trace-11493"></a>
<a id="trace-11508"></a>
<a id="trace-11515"></a>
<a id="trace-11526"></a>
<a id="trace-11533"></a>
<a id="trace-11606"></a>
<a id="trace-11617"></a>
<a id="trace-11624"></a>
<a id="trace-11633"></a>
<a id="trace-11643"></a>
<a id="trace-11650"></a>
<a id="trace-11660"></a>
<a id="trace-11667"></a>
<a id="trace-11679"></a>
<a id="trace-11686"></a>
<a id="trace-11762"></a>
<a id="trace-11769"></a>
<a id="trace-11778"></a>
<a id="trace-11787"></a>
<a id="trace-11798"></a>
<a id="trace-11808"></a>
<a id="trace-11818"></a>
<a id="trace-11824"></a>
<a id="trace-11834"></a>
<a id="trace-11840"></a>
<a id="trace-11914"></a>
<a id="trace-11920"></a>
<a id="trace-11930"></a>
<a id="trace-11937"></a>
<a id="trace-11951"></a>
<a id="trace-11961"></a>
<a id="trace-11971"></a>
<a id="trace-11982"></a>
<a id="trace-11991"></a>
<a id="trace-11998"></a>
<a id="trace-12071"></a>
<a id="trace-12077"></a>
<a id="trace-12089"></a>
<a id="trace-12095"></a>
<a id="trace-12107"></a>
<a id="trace-12113"></a>
<a id="trace-12124"></a>
<a id="trace-12136"></a>
<a id="trace-12145"></a>
<a id="trace-12156"></a>
<a id="trace-12230"></a>
<a id="trace-12235"></a>
<a id="trace-12245"></a>
<a id="trace-12251"></a>
<a id="trace-12264"></a>
<a id="trace-12271"></a>
<a id="trace-12281"></a>
<a id="trace-12286"></a>
<a id="trace-12296"></a>
<a id="trace-12306"></a>
- 312.80s–359.80s (×95), actor 5, squad 0 (trace 10882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.45s, trace 10872. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10893}.

## Net delivery

53 matched order/radio deliveries; 249 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.113s; maximum 0.750s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1799: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1802: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1803: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1804: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1805: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1806: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.05s leader 5, trace 1919: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 2001: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 2002: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2099: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2101: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2102: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2103: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2104: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2105: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2106: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2279: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2280: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2281: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2282: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2283: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2284: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2432: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2433: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2434: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2435: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2436: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2437: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2438: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2582: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2583: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2584: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2585: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2586: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2587: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2588: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2710: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2711: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2712: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2713: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2714: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2715: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2716: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 2835: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 2836: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 2837: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 2838: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 2839: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 2840: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 2841: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 2965: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 2966: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 2967: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 2968: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 2969: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 2970: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 2971: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3089: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3090: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3091: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3092: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3093: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3094: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3095: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 3212: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 3213: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 3214: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 3215: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 3216: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 3217: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 3218: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.05s leader 5, trace 3219: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.05s leader 5, trace 3220: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 3424: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 3425: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 3426: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 3427: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 3428: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 3429: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 3430: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 3601: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 3602: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 3603: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 3604: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 3605: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 3606: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 3607: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 3801: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 3802: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 3803: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 3804: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 3805: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 3806: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 3807: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 3960: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 3961: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 3962: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 3963: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 3964: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 3965: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 3966: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 4116: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4117: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 4118: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 4119: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4120: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4121: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4122: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 4275: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 4276: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 4277: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 4278: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 4279: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 4280: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 4281: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 4430: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 4431: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 4432: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 4433: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 4434: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 4435: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 4436: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 4583: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 4584: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 4585: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 4586: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 4587: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 4588: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 4589: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 4740: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 4741: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 4742: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 4743: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 4744: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 4745: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 4746: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 4895: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 4896: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 4897: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 4898: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 4899: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 4900: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 4901: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 5049: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 5050: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 5051: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 5052: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 5053: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 5054: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 5055: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 5201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 5202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 5203: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 5204: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 5205: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 5206: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 5207: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.20s leader 5, trace 5266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 5359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 5360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 5361: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 5362: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 5363: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 5364: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 5365: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 5515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 5516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 5517: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 5518: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 5519: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 5520: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 5521: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 5667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 5668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 5669: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 5670: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 5671: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 5672: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 5673: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 5818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 5819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 5820: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 5821: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 5822: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 5823: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 5824: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 5976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 5977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 5978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 5979: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 5980: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 5981: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 5982: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 6123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 6125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6126: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6127: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6128: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6129: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 6280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 6282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 6435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 6436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 6437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 6438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 6439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 6440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 6441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 6591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 6592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 6593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 6594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 6595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 6596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 6597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 6744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 6745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 6746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 6747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 6748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 6749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 6750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 6902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 6903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 6904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 6905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 6906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 6907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 6908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 7056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 7058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.20s leader 5, trace 7121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 7211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 7366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 7367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 7368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 7369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 7370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 7371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 7372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 7523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 7524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 7525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 7526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 7527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 7528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 7529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 7673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 7674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 7675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 7676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 7677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 7678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 7679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 7825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 7826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 7827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 7828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 7829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 7830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 7831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 7981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 7982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 7983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 7984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 7985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 7986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 7987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 8138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 8295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 8446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 8447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 8448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 8449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 8450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 8451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 8452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 8596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 8597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 8598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 8599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 8600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 8601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 8602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 8752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 8753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 8754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 8755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 8756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 8757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 8758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 8903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 8904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 8905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 8906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 8907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 8908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 8909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 251.40s leader 5, trace 8994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 9057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 9216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 9373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 9375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 9527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 9528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 9529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 9530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 9531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 9532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 9533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 9682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 9683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 9684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 9685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 9686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 9687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 9688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 9838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 9839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 9840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 9841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 9842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 9843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 9844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 9991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 9992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 9993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 9994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 9995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 9996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 9997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 10149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 10301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 10454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 10455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 10456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 10457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 10458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 10459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 10460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 10611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 10612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 10613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 10614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 10615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 10616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 10617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 10764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 10765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 10766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 10767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 10768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 10769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 10770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.45s leader 5, trace 10872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 10921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 10922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 10923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 10924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 10925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 10926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 10927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 11078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 11079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 11080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 11081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 11082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 11083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 11084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 11229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 11384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 11539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 11540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 11541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 11542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 11543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 11544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 11545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 11689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 11690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 11691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 11692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 11693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 11694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 11695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 11844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 11845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 11846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 11847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 11848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 11849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 11850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 12004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 12160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 12161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 12162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 12163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 12164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 12165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 12166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 12309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 12310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 12311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 12312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 12313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 12314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 12315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated

## Outcome attribution

- 70.05s, evidence 385: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 70.05s, evidence 3219: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208934 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119278348445658, 'next_transition': 3281}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 70.05s, evidence 3220: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.208934 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119278348445658, 'next_transition': 3281}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 130.20s, evidence 840: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 190.20s, evidence 1298: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 251.40s, evidence 1765: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 312.45s, evidence 2227: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
